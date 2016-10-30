#include "FunctionOpcode.h"
#include <cassert>
#include <sstream>
#include <ctime>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

void Opcode::setString(string str)
{
	storage.string = new StringStorage(str);
}

void Opcode::setInt(int value)
{
	storage.i32 = value;
}

void Opcode::setFloat(float value)
{
	storage.f32 = value;
}

void Opcode::setShort(int16_t value, int offset)
{
	assert(offset >= 0 && offset < (sizeof(void*)/2) && "short offset must be between 0 and 2");
	storage.i16[offset] = value;
}

void Opcode::setUShort(uint16_t value, int offset)
{
	assert(offset >= 0 && offset < (sizeof(void*) / 2) && "short offset must be between 0 and 2");
	storage.u16[offset] = value;
}

void Opcode::setByte(uint8_t value, int offset)
{
	assert(offset >= 0 && offset < (sizeof(void*)) && "byte offset must be between 0 and 4");
	storage.u8[offset] = value;
}

Opcode::~Opcode()
{
#ifdef _DEBUG
	if(_comment)
	{
		delete _comment;
	}
#endif
	switch(opcodeKind)
	{
	case OK_Call:
	case OK_PushString:
	case OK_Jump:
	case OK_JumpFalse:
	case OK_JumpEQ:
	case OK_JumpNE:
	case OK_JumpGT:
	case OK_JumpGE:
	case OK_JumpLT:
	case OK_JumpLE:
	case OK_Label:
	case OK_LabelLoc:
	case OK_FuncLoc:
		delete storage.string;
		break;
	case OK_Native:
		delete storage.native;
		break;
	case OK_Switch:
		delete storage.switchCase;
		break;
	case OK_JumpTable:
		delete storage.jTable;
		break;
	default:
		break;
	}
}

void Opcode::setComment(string comment)
{
#ifdef _DEBUG
	if(_comment)
	{
		comment = _comment->toString() + " - " + comment;
		delete _comment;
	}
	_comment = new StringStorage(comment);
#endif
}
string Opcode::getComment() const
{
#ifdef _DEBUG
	if(_comment)
	{
		return _comment->toString();
	}
#endif
	return "";
}
bool Opcode::hasComment() const
{
#ifdef _DEBUG
	return _comment;
#else
	return false;
#endif
}
string Opcode::getString() const
{
	switch(getKind())
	{
	case OK_Call:
	case OK_PushString:
	case OK_Jump:
	case OK_JumpFalse:
	case OK_JumpEQ:
	case OK_JumpNE:
	case OK_JumpGT:
	case OK_JumpGE:
	case OK_JumpLT:
	case OK_JumpLE:
	case OK_Label:
	case OK_LabelLoc:
	case OK_FuncLoc:
		return storage.string->toString();
	default:
		assert(false && "Get String called on a non string opcode");
	}
	return "";
}

int Opcode::getInt() const
{
	return storage.i32;
}

float Opcode::getFloat() const
{
	return storage.f32;
}

int16_t Opcode::getShort(int offset) const
{
	assert(offset >= 0 && offset < (sizeof(void*) / 2) && "short offset must be between 0 and 2");
	return storage.i16[offset];
}

uint16_t Opcode::getUShort(int offset) const
{
	assert(offset >= 0 && offset < (sizeof(void*) / 2) && "ushort offset must be between 0 and 2");
	return storage.u16[offset];
}

uint8_t Opcode::getByte(int offset) const
{
	assert(offset >= 0 && offset < (sizeof(void*)) && "byte offset must be between 0 and 4");
	return storage.u8[offset];
}

int Opcode::getSizeEstimate() const
{
	bool isRDR = false;
	switch (getKind())
	{
		case OK_Null:
			return 0;
		case OK_Nop:
			return getUShort(0);
		case OK_Add:
		case OK_Sub:
		case OK_Mult:
		case OK_Div:
		case OK_Mod:
		case OK_Not:
		case OK_Neg:
		case OK_CmpEq:
		case OK_CmpNe:
		case OK_CmpGt:
		case OK_CmpGe:
		case OK_CmpLt:
		case OK_CmpLe:
		case OK_FAdd:
		case OK_FSub:
		case OK_FMult:
		case OK_FDiv:
		case OK_FMod:
		case OK_FNeg:
		case OK_FCmpEq:
		case OK_FCmpNe:
		case OK_FCmpGt:
		case OK_FCmpGe:
		case OK_FCmpLt:
		case OK_FCmpLe:
		case OK_VAdd:
		case OK_VSub:
		case OK_VMult:
		case OK_VDiv:
		case OK_VNeg:
		case OK_And:
		case OK_Or:
		case OK_Xor:
		case OK_ItoF:
		case OK_FtoI:
		case OK_FtoV:
		case OK_Dup:
		case OK_Drop:
		case OK_PGet:
		case OK_PSet:
		case OK_PeekSet:
		case OK_FromStack:
		case OK_ToStack:
		case OK_MemCpy:
		case OK_PCall:
			return 1;
		case OK_PushInt:
		{
			int value = getInt();
			if (value >= -1 && value <= 7){
				return 1;//Push_Val
			}
			if (value > 0 && value < 256){
				return 2;//PushB Val
			}
			if (value >= -32768 && value <= 32767){
				return 3;//PushS Val
			}
			if (value > 0 && value < 0x1000000){
				return 4;//PushI24 Val
			}
		}
		return 5;//Push Val

		case OK_PushBytes:
			switch (getByte(0))
			{
				case 0:
					assert(false && "Empty PushBytes opcode");
					return 0;
				case 1:
					assert(false && "PushBytes opcode called with 1 byte, should never happen as it should be wrapped in PushInt");
					return 2;
				case 2:
					return 3;
				case 3:
					return 4;
			}
			assert(false && "Too many bytes in PushBytes opcode");
			return 0;

		case OK_PushFloat:
			switch (getInt())
			{
				case 0xbf800000:
				case 0x80000000://neg 0
				case 0x00000000://pos 0
				case 0x3f800000:
				case 0x40000000:
				case 0x40400000:
				case 0x40800000:
				case 0x40A00000:
				case 0x40C00000:
				case 0x40E00000:
					return 1;//PushF_Val
			}
			return 5;//PushF Val
		case OK_ShiftLeft:
		case OK_ShiftRight:
		case OK_Native:
		case OK_Call:
			return 4;
		case OK_Return:
		case OK_Jump:
		case OK_JumpFalse:
		case OK_JumpEQ:
		case OK_JumpNE:
		case OK_JumpGT:
		case OK_JumpGE:
		case OK_JumpLT:
		case OK_JumpLE:
			return 3;
		case OK_PushString:
			if (isRDR)
			{
				return 3 + getString().length();//PushString <len> <string> <nullTerminator>
			}
			else
			{
				return 4;//just a guess as it depends where it is placed in string table
			}
		case OK_StrCopy:
		case OK_ItoS:
		case OK_StrAdd:
		case OK_StrAddI:
			return 2;
		case OK_GetArrayP:
		case OK_GetArray:
		case OK_SetArray:
		case OK_GetStaticP:
		case OK_GetStatic:
		case OK_SetStatic:
		case OK_GetFrameP:
		case OK_GetFrame:
		case OK_SetFrame:
		case OK_GetImmP:
		case OK_GetImm:
		case OK_SetImm:
			return getUShort(0) > 0xFF ? 3 : 2;
		case OK_GetGlobalP:
		case OK_GetGlobal:
		case OK_SetGlobal:
			return (uint32_t)getInt() > 0xFFFF ? 4 : 3;
		case OK_Label:
			return 0;//labels dont take up storage
		case OK_LabelLoc:
		case OK_FuncLoc:
			return 4;//Just PushInt24
		case OK_AddImm:
		{
			int value = getInt();
			if (value > 0 && value < 256){
				return 2;//Add1 Val
			}
			if (value >= -32768 && value < 32768){
				return 3;//Add2 Val
			}
			if (value > 0 && value < 0x1000000)
			{
				return 5;//PushI24 Val, Add
			}
		}
		return 6;//Push Val, Add
		case OK_MultImm:
		{
			int value = getInt();
			if (value > 0 && value < 256){
				return 2;//Mult1 Val
			}
			if (value >= -32768 && value < 32768){
				return 3;//Mult2 Val
			}
			if (value > 0 && value < 0x1000000)
			{
				return 5;//PushI24 Val, Mult
			}
		}
		return 6;//Push Val, Mult
		case OK_FAddImm:
			switch (getInt())
			{
				case 0x80000000://neg 0
				case 0x00000000://pos 0
					return 0;//can be skipped
				case 0xc0e00000:
				case 0xc0c00000:
				case 0xc0a00000:
				case 0xc0800000:
				case 0xc0400000:
				case 0xc0000000:
				case 0xbf800000:
				case 0x3f800000:
				case 0x40000000:
				case 0x40400000:
				case 0x40800000:
				case 0x40A00000:
				case 0x40C00000:
				case 0x40E00000:
					return 2;//PushF_Val, FAdd/FSub
			}
			return 6;//PushF Val, FAdd/FSub
		case OK_FMultImm:
			switch (getInt())
			{
				case 0xbf800000:
					return 1;//FNeg
				case 0x3f800000:
					return 0;//this should never come up(just skip it)
				case 0x80000000://neg 0
				case 0x00000000://pos 0 - this should never come up
				case 0x40000000:
				case 0x40400000:
				case 0x40800000:
				case 0x40A00000:
				case 0x40C00000:
				case 0x40E00000:
					return 2;//PushF_Val, FMult
			}
			return 6;//PushF Val, FMult		
		case OK_Switch:
		{
			return 2 + storage.switchCase->getCount() * 6 + (storage.switchCase->hasDefaultJumpLoc() ? 3 : 0);
		}
		case OK_GetHash:
			if (isRDR)
			{
				return 4;//CallNative
			}
			else
			{
				return 1;//GetHash opcode
			}
		case OK_JumpTable:
		{
			if (isRDR)
			{
				return 5 + storage.jTable->getByteSize();
			}
			else{
				return 4;//just a guess as it depends where it is placed in string table
			}
		}
		case OK_GoToStack:
			if (isRDR)return 6;
			else return 8;
	}
	assert(false);//trying to figure out which path isnt returning a value
	return 0;
}

string Opcode::toString() const
{
#define Check12Op(opcode){uint16_t value = getUShort(0);current = (value > 0xFF ? #opcode "2 " :  #opcode "1 ") + to_string(value); }
#define Check23Op(opcode){int value = getInt();assert(value >= 0 && "value cannot be negative"); current = (value > 0xFFFF ? #opcode "3 " :  #opcode "2 ") + to_string(value); }
#define PrintJump(cond){current = "Jump"#cond " @" + getString();}
	string current;
	switch(getKind())
	{
	case OK_Null: break;
	case OK_Nop: current = "Nop"; for (int i = getUShort(0); --i;){ current += "\r\nNop"; } break;
	case OK_Add: current = "Add"; break;
	case OK_Sub: current = "Sub"; break;
	case OK_Mult: current = "Mult"; break;
	case OK_Div: current = "Div"; break;
	case OK_Mod: current = "Mod"; break;
	case OK_Not: current = "Not"; break;
	case OK_Neg: current = "Neg"; break;
	case OK_CmpEq: current = "CmpEq"; break;
	case OK_CmpNe: current = "CmpNe"; break;
	case OK_CmpGt: current = "CmpGt"; break;
	case OK_CmpGe: current = "CmpGe"; break;
	case OK_CmpLt: current = "CmpLt"; break;
	case OK_CmpLe: current = "CmpLe"; break;
	case OK_FAdd: current = "FAdd"; break;
	case OK_FSub: current = "FSub"; break;
	case OK_FMult: current = "FMult"; break;
	case OK_FDiv: current = "FDiv"; break;
	case OK_FMod: current = "FMod"; break;
	case OK_FNeg: current = "FNeg"; break;
	case OK_FCmpEq: current = "FCmpEq"; break;
	case OK_FCmpNe: current = "FCmpNe"; break;
	case OK_FCmpGt: current = "FCmpGt"; break;
	case OK_FCmpGe: current = "FCmpGe"; break;
	case OK_FCmpLt: current = "FCmpLt"; break;
	case OK_FCmpLe: current = "FCmpLe"; break;
	case OK_VAdd: current = "VAdd"; break;
	case OK_VSub: current = "VSub"; break;
	case OK_VMult: current = "VMult"; break;
	case OK_VDiv: current = "VDiv"; break;
	case OK_VNeg: current = "VNeg"; break;
	case OK_And: current = "And"; break;
	case OK_Or: current = "Or"; break;
	case OK_Xor: current = "Xor"; break;
	case OK_ItoF: current = "ItoF"; break;
	case OK_FtoI: current = "FtoI"; break;
	case OK_FtoV: current = "FtoV"; break;
	case OK_ShiftLeft: current = "CallNative shift_left 2 1"; break;
	case OK_ShiftRight: current = "CallNative shift_right 2 1"; break;
	case OK_GetHash: current = "CallNative get_hash_key 1 1"; break;
	case OK_PushInt:
	{
		int value = getInt();
		if(value >= -1 && value <= 7){
			current = "Push_" + to_string(value);
		}
		else if(value > 0 && value < 256){
			current = "PushB " + to_string(value);
		}
		else if(value >= -32768 && value <= 32767){
			current = "PushS " + to_string(value);
		}
		else if(value > 0 && value < 0x1000000){
			current = "PushI24 " + to_string(value);
		}
		else{
			current = "Push " + to_string(value);
		}
		break;
	}
	case OK_PushBytes:
	{
		switch(getByte(0))
		{
		case 0:
			assert(false && "Empty PushBytes opcode");
		case 1:
			assert(false && "PushBytes opcode called with 1 byte, should never happen as it should be wrapped in PushInt");
			current = "PushB " + to_string(getByte(1));
			break;
		case 2:
			current = "PushB2 " + to_string(getByte(1)) + " " + to_string(getByte(2));
			break;
		case 3:
			current = "PushB3 " + to_string(getByte(1)) + " " + to_string(getByte(2)) + " " + to_string(getByte(3));
			break;
		default:
			assert(false && "Too many bytes in PushBytes opcode");
		}
	}
	break;
	case OK_PushFloat:
	{
		switch (getInt())
		{
		case 0xbf800000:
			current = "PushF_-1"; break;
		case 0x80000000://neg 0
		case 0x00000000://pos 0
			current = "PushF_0"; break;
		case 0x3f800000:
			current = "PushF_1"; break;
		case 0x40000000:
			current = "PushF_2"; break;
		case 0x40400000:
			current = "PushF_3"; break;
		case 0x40800000:
			current = "PushF_4"; break;
		case 0x40A00000:
			current = "PushF_5"; break;
		case 0x40C00000:
			current = "PushF_6"; break;
		case 0x40E00000:
			current = "PushF_7"; break;
		default:
			current = "PushF " + to_string(getFloat());
			break;
		}
		break;
	}
	case OK_Dup: current = "Dup"; break;
	case OK_Drop: current = "Drop"; break;
	case OK_Native:
	{
		char buff[17];
		sprintf(buff, "%llX", storage.native->getHash());
		current = "CallNative unk_0x" + string(buff) + " " + to_string(storage.native->getParamCount()) + " " + to_string(storage.native->getReturnCount());
		if (storage.native->hasName())
		{
			current += " //" + storage.native->getName();
		}
		break;
	}
	case OK_Return:
		current = "Return " + to_string(getByte(0)) + " " + to_string(getByte(1));
		break;
	case OK_PGet: current = "pGet"; break;
	case OK_PSet: current = "pSet"; break;
	case OK_PeekSet: current = "pPeekSet"; break;
	case OK_ToStack: current = "ToStack"; break;
	case OK_FromStack: current = "FromStack"; break;
	case OK_GetArrayP:Check12Op(GetArrayP); break;
	case OK_GetArray:Check12Op(GetArray); break;
	case OK_SetArray:Check12Op(SetArray); break;
	case OK_GetFrameP:Check12Op(GetFrameP); break;
	case OK_GetFrame:Check12Op(GetFrame); break;
	case OK_SetFrame:Check12Op(SetFrame); break;
	case OK_GetStaticP:Check12Op(GetStaticP); break;
	case OK_GetStatic:Check12Op(GetStatic); break;
	case OK_SetStatic:Check12Op(SetStatic); break;
	case OK_GetImmP:Check12Op(GetImmP); break;
	case OK_GetImm:Check12Op(GetImm); break;
	case OK_SetImm:Check12Op(SetImm); break;
	case OK_GetGlobalP:Check23Op(GetGlobalP); break;
	case OK_GetGlobal:Check23Op(GetGlobal); break;
	case OK_SetGlobal:Check23Op(SetGlobal); break;
	case OK_AddImm:
	{
		int value = getInt();
		if(value > 0 && value < 256){
			current = "Add1 " + to_string(value);
		}
		else if(value >= -32768 && value < 32768){
			current = "Add2 " + to_string(value);
		}
		else if(value > 0 && value < 0x1000000)
		{
			current = "PushI24 " + to_string(value) + "\r\nAdd";
		}
		else{
			current = "Push " + to_string(value) + "\r\nAdd";
		}
		break;
	}
	case OK_MultImm:
	{
		int value = getInt();
		if(value > 0 && value < 256){
			current = "Mult1 " + to_string(value);
		}
		else if(value >= -32768 && value < 32768){
			current = "Mult2 " + to_string(value);
		}
		else if(value > 0 && value < 0x1000000)
		{
			current = "PushI24 " + to_string(value) + "\r\nMult";
		}
		else{
			current = "Push " + to_string(value) + "\r\nMult";
		}
		break;
	}
	case OK_FAddImm:
	{
		switch (getInt())
		{
		case 0xc0e00000:
			current = "PushF_7\r\nFSub"; break;
		case 0xc0c00000:
			current = "PushF_6\r\nFSub"; break;
		case 0xc0a00000:
			current = "PushF_5\r\nFSub"; break;
		case 0xc0800000:
			current = "PushF_4\r\nFSub"; break;
		case 0xc0400000:
			current = "PushF_3\r\nFSub"; break;
		case 0xc0000000:
			current = "PushF_2\r\nFSub"; break;
		case 0xbf800000:
			current = "PushF_1\r\nFSub"; break;
		case 0x80000000://neg 0
		case 0x00000000://pos 0
			current = "";//dont parse anything for these, though they should never come up
		case 0x3f800000:
			current = "PushF_1\r\nFAdd"; break;
		case 0x40000000:
			current = "PushF_2\r\nFAdd"; break;
		case 0x40400000:
			current = "PushF_3\r\nFAdd"; break;
		case 0x40800000:
			current = "PushF_4\r\nFAdd"; break;
		case 0x40A00000:
			current = "PushF_5\r\nFAdd"; break;
		case 0x40C00000:
			current = "PushF_6\r\nFAdd"; break;
		case 0x40E00000:
			current = "PuashF_7\r\nFAdd"; break;
		default:
			float fValue = getFloat();
			if (fValue >= 0)
			{
				current = "PushF " + to_string(fValue) + "\r\nFAdd";
			}else
			{
				current = "PushF " + to_string(-fValue) + "\r\nFSub";
			}
			break;
		}
		break;
	}
	case OK_FMultImm:
	{
		switch (getInt())
		{
		case 0xbf800000:
			current = "FNeg"; break;//this should never come up
		case 0x80000000://neg 0
		case 0x00000000://pos 0
			current = "PushF_0\r\nFMult"; break;//this should never come up
		case 0x3f800000:
			current = ""; break;//this should never come up
		case 0x40000000:
			current = "PushF_2\r\nFMult"; break;
		case 0x40400000:
			current = "PushF_3\r\nFMult"; break;
		case 0x40800000:
			current = "PushF_4\r\nFMult"; break;
		case 0x40A00000:
			current = "PushF_5\r\nFMult"; break;
		case 0x40C00000:
			current = "PushF_6\r\nFMult"; break;
		case 0x40E00000:
			current = "PushF_7\r\nFMult"; break;
		default:
			current = "PushF " + to_string(getFloat()) + "\r\nFMult";
			break;
		}
		break;
	}
	case OK_Call:current = "Call @" + getString(); break;
	case OK_Jump: current = "Jump @" + getString(); break;
	case OK_JumpFalse: PrintJump(False); break;
	case OK_JumpEQ: PrintJump(EQ); break;
	case OK_JumpNE: PrintJump(NE); break;
	case OK_JumpGT: PrintJump(GT); break;
	case OK_JumpGE: PrintJump(GE); break;
	case OK_JumpLT: PrintJump(LT); break;
	case OK_JumpLE: PrintJump(LE); break;
	case OK_Switch:{
		const SwitchStorage* switchStorage = getSwitch();
		if (switchStorage->getCount())
		{
			const SwitchCaseStorage* sCase = switchStorage->getFirstCase();
			current = "Switch [" + to_string(sCase->getCaseValue()) + " @" + sCase->getCaseLocation() + "]";
			while (sCase->hasNextCase())
			{
				sCase = sCase->getNextCase();
				current += ":[" + to_string(sCase->getCaseValue()) + " @" + sCase->getCaseLocation() + "]";
			}
		}
		else
		{
			current = "Switch //Empty Switch";
		}
		if (switchStorage->hasDefaultJumpLoc())
		{
			current += "\r\nJump @" + switchStorage->getDefaultJumpLoc()->toString();
		}
		break;
	}
	case OK_PushString:
		current = "PushString \"" + getString() + "\""; break;
	case OK_StrCopy:
		current = "StrCopy " + to_string(getByte(0)); break;
	case OK_ItoS:
		current = "ItoS " + to_string(getByte(0)); break;
	case OK_StrAdd:
		current = "StrAdd " + to_string(getByte(0)); break;
	case OK_StrAddI:
		current = "StrAddI " + to_string(getByte(0)); break;
	case OK_MemCpy: current = "MemCpy"; break;
	case OK_PCall: current = "PCall"; break;
	case OK_Label: current = "\r\n:" + getString(); break; //make labels have a line break
	case OK_LabelLoc: current = "Push GetLoc(\"" + getString() + "\")"; break;
	case OK_FuncLoc: current = "Push GetFuncLoc(\"" + getString() + "\")"; break;
	case OK_JumpTable:{
		current = "PushLabelLocArray {\r\n";
		if (storage.jTable->getItemCount() == 0)
		{
			current += "}"; break;
		}
		current += "GetLoc(\"" + storage.jTable->getJumpLocAsString(0) + "\")";
		for (unsigned i = 1; i < storage.jTable->getItemCount();i++)
		{
			current += ", \r\nGetLoc(\"" + storage.jTable->getJumpLocAsString(i) + "\")";
		}
		current += "\r\n}";
		break;
	}
	case OK_GoToStack:
		current = "Function 0 2\r\nReturn 0 0"; break;
	}
#ifdef _DEBUG
	if (hasComment())
	{
		current += " //" + getComment();
	}
#endif
	return current;
#undef Check12Op
#undef Check23Op
#undef PrintJump
}

void Opcode::makeNull()
{
	switch (opcodeKind)
	{
		case OK_Call:
		case OK_PushString:
		case OK_Jump:
		case OK_JumpFalse:
		case OK_JumpEQ:
		case OK_JumpNE:
		case OK_JumpGT:
		case OK_JumpGE:
		case OK_JumpLT:
		case OK_JumpLE:
		case OK_Label:
		case OK_LabelLoc:
		case OK_FuncLoc:
			delete storage.string;
			break;
		case OK_Native:
			delete storage.native;
			break;
		case OK_Switch:
			delete storage.switchCase;
			break;
		case OK_JumpTable:
			delete storage.jTable;
			break;
		default:
			break;
	}
	opcodeKind = OK_Null;
}

bool FunctionData::tryPop2Ints(int & i1, int & i2)
{
	int size = Instructions.size();
	if (size > 2)
	{
		Opcode *last = Instructions[size - 1], *prev = Instructions[size - 2];
		if (last->getKind() == OK_PushInt && prev->getKind() == OK_PushInt)
		{
			i1 = prev->getInt();
			delete prev;
			i2 = last->getInt();
			delete prev;
			Instructions._Pop_back_n(2);
			return true;
		}
	}
	return false;
}

bool FunctionData::tryPopInt(int& result)
{
	if (Instructions.size())
	{
		Opcode* back = Instructions.back();
		if (back->getKind() == OK_PushInt)
		{
				result = back->getInt();
				Instructions.pop_back();
				delete back;
				return true;
		}
	}
	return false;
}

bool FunctionData::tryPop2Floats(float & f1, float & f2)
{
	int size = Instructions.size();
	if (size > 1)
	{
		Opcode *last = Instructions[size - 1];
		Opcode *prev = Instructions[size - 2];
		if (last->getKind() == OK_PushFloat && prev->getKind() == OK_PushFloat)
		{
			f1 = prev->getFloat();
			f2 = last->getFloat();
			delete prev;
			delete last;
			Instructions._Pop_back_n(2);
			return true;
		}
	}
	return false;
}

FunctionData::~FunctionData()
{
	for (size_t i = 0; i < Instructions.size();i++)
	{
		delete Instructions[i];
	}
}

void FunctionData::pushComment(string comment)
{
#ifdef _DEBUG
	if (Instructions.size()){//instruction stack can be empty in the rare case you're dropping the first instruction of a function
		Instructions.back()->setComment(comment);
	}
#endif
}

void FunctionData::addOpIsNotZero()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add IsNotZero on an empty instruction stack");
	Opcode *last = Instructions.back();
	switch (last->getKind())
	{
		case OK_PushInt:
			last->setInt(last->getInt() != 0);
			return;
		case OK_CmpEq:
		case OK_CmpNe:
		case OK_CmpGt:
		case OK_CmpGe:
		case OK_CmpLt:
		case OK_CmpLe:
		case OK_FCmpEq:
		case OK_FCmpNe:
		case OK_FCmpGt:
		case OK_FCmpGe:
		case OK_FCmpLt:
		case OK_FCmpLe:
			//dont need to worry about these cases
			return;
		default:
			addOpPushInt(0);
			addOpCmpNe();
			return;
	}
#else
	addOpPushInt(0);
	addOpCmpNe();
#endif
}

void FunctionData::addOpGetConv(int size, bool isSigned)
{
	assert(size == 1 || size == 2);
	if (!(size == 1 || size == 2))
		return;

	const uint32_t extSW = size == 1 ? 0xFF000000 : size == 2 ? 0xFFFF0000 : 0;
	const uint32_t shiftSize = size == 1 ? 24 : size == 2 ? 16 : 0;
	const string type = size == 1 ? "Char Type" : size == 2 ? "Short Type" : "";
	static uint32_t ExtSignWordLabelCounter = 0;

	addOpShiftRight(shiftSize);
	pushComment(type);
	if (isSigned)
	{
		addOpDup();
		addOpPushInt(size == 1 ? 127 : size == 2 ? 32767 : 0);
		addOpJumpLE("__ExtSignWord--noSign--" + to_string(ExtSignWordLabelCounter));
		addOpPushInt(extSW);
		addOpOr();
		pushComment("ExtSignWord");
		addOpLabel("__ExtSignWord--noSign--" + to_string(ExtSignWordLabelCounter++));
	}

}
void FunctionData::addOpSetConv(int size)
{
	assert(size == 1 || size == 2);
	if (!(size == 1 || size == 2))
		return;

	const uint32_t shiftSize = size == 1 ? 24 : size == 2 ? 16 : 0;
	const string type = size == 1 ? "Char Type" : size == 2 ? "Short Type" : "";

	#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add convert a type on an empty instruction stack");
	Opcode *last = Instructions.back();
	if (last->getKind() == OK_PushInt)
	{
		last->setInt(last->getInt() << shiftSize);
	}
	else
		#endif
	{
		addOpShiftLeft(shiftSize);
		pushComment(type);
	}



}
void FunctionData::AddSimpleOp(OpcodeKind operation)
{
	switch(operation)
	{
		//special handling cases
	case OK_Add:
		addOpAdd();
		break;
	case OK_Sub:
		addOpSub();
		break;
	case OK_Mult:
		addOpMult();
		break;
	case OK_Div:
		addOpDiv();
		break;
	case OK_Not:
		addOpNot();
		break;
	case OK_Neg:
		addOpNeg();
		break;
	case OK_FAdd:
		addOpFAdd();
		break;
	case OK_FSub:
		addOpFSub();
		break;
	case OK_FMult:
		addOpFMult();
		break;
	case OK_FDiv:
		addOpFDiv();
		break;
	case OK_FNeg:
		addOpFNeg();
		break;
	case OK_Drop:
		addOpDrop();
		break;
	case OK_PGet:
		addOpPGet();
		break;
	case OK_PSet:
		addOpPSet();
		break;
	case OK_Mod:
	case OK_CmpEq:
	case OK_CmpNe:
	case OK_CmpGt:
	case OK_CmpGe:
	case OK_CmpLt:
	case OK_CmpLe:
	case OK_FMod:
	case OK_FCmpEq:
	case OK_FCmpNe:
	case OK_FCmpGt:
	case OK_FCmpGe:
	case OK_FCmpLt:
	case OK_FCmpLe:
	case OK_VAdd:
	case OK_VSub:
	case OK_VMult:
	case OK_VDiv:
	case OK_VNeg:
	case OK_And:
	case OK_Or:
	case OK_Xor:
	case OK_FtoI:
	case OK_ItoF:
	case OK_FtoV:
	case OK_ShiftLeft:
	case OK_ShiftRight:
	case OK_Dup:
	case OK_PeekSet:
	case OK_ToStack:
	case OK_FromStack:
	case OK_MemCpy:
	case OK_PCall:
		Instructions.push_back(new Opcode(operation));
		break;
	default:
		assert(false && "Not a simple operation passed");
	}
}
bool FunctionData::endsWithInlineReturn(string position) const
{
	return Instructions.size() && Instructions.back()->getKind() == OK_Jump && Instructions.back()->getString() == position;
}

void FunctionData::setUsed()
{
	if (!used)
	{
		used = true;
		for(auto fdata : usedFuncs)
		{
			fdata->setUsed();
		}
	}
	
}

string FunctionData::toString() const
{
	stringstream stream;
	stream << "\r\n:" << name.substr(1) << "//>\r\nFunction " << (int)pcount << " " << (int)stackSize << "\r\n";
	for(size_t i = 0; i < Instructions.size(); i++)
	{
		if (Instructions[i]->getKind() == OK_Null)
		{
			if (Instructions[i]->hasComment())
			{
				stream << "//" + Instructions[i]->getComment() << "\r\n";
			}
		}
		else
		{
			stream << *Instructions[i] << "\r\n";
		}
	}
	stream << "//<\r\n";
	return stream.str();
}

void FunctionData::addSwitchCase(int caseVal, string jumpLoc)
{
	assert(Instructions.size() && "Instruction stack empty, cant add switch case");
	Opcode *end = Instructions.back();
	assert(end->getKind() == OK_Switch && "AddSwitchCase must be called on switches");
	if (end->storage.switchCase->getCount() < 255)
	{
		end->storage.switchCase->addCase(caseVal, jumpLoc);
	}
	else
	{
		assert(false && "Switch case too large");
	}
}

void FunctionData::setSwitchDefaultCaseLoc(string jumpLoc)
{
	assert(Instructions.size() && "Instruction stack empty, cant add switch case");
	Opcode *end = Instructions.back();
	assert(end->getKind() == OK_Switch && "AddSwitchCase must be called on switches");
	end->storage.switchCase->setDefaultJumpLoc(jumpLoc);
}

void FunctionData::addUsedFunc(FunctionData * func)
{
	if(find(usedFuncs.begin(), usedFuncs.end(), func) == usedFuncs.end())
	{
		usedFuncs.push_back(func);
	}
}

int FunctionData::getSizeEstimate(int incDecl) const
{
	int size = 0;
	if (incDecl) size += 5;//fDecl
	for(int i = 0, max = Instructions.size(); i < max;i++)
	{
		size += Instructions[i]->getSizeEstimate();
	}
	return size;
}

void FunctionData::codeLayoutRandomisation(int maxBlockSize, int minBlockSize, bool keepEndReturn, bool makeJumpTable)
{
	int maxSize = Instructions.size();
	if (!maxSize)
		return;//sanity check
	if (isBuiltIn())
		return;
	int randMod = 1 + maxBlockSize - minBlockSize;
	assert(maxBlockSize > minBlockSize && "max block size must be greater than min block size");
	assert(minBlockSize >= 0 && "min block size must be positive");
	if (getSizeEstimate(0) > 30000)
	{
		return;//jumps may be screwed messed up if past 32768 size limit
	}
	auto randomEngine = default_random_engine(chrono::system_clock::now().time_since_epoch().count());
	srand(time(NULL));
	vector<vector<Opcode*>> InstructionBuilder;
	int labelCounter = 0;
	
	Opcode* first = Instructions[0];
	bool isFirstNop = first->getKind() == OK_Nop;
	if (makeJumpTable)
	{
		vector<string> jumpTableLocations;
		vector<size_t> jumpTableRandomisation;
		auto JumpTable = new JumpTableStorage();
		Opcode *jtableOp = new Opcode(OK_JumpTable);
		jtableOp->storage.jTable = JumpTable;

		vector<Opcode*> jTableBlock;
		Opcode *label = new Opcode(OK_Label);
		label->setString("__builtin__jumpTable");
		jTableBlock.push_back(label);
		jTableBlock.push_back(jtableOp);
		jTableBlock.push_back(new Opcode(OK_Add));
		jTableBlock.push_back(new Opcode(OK_PGet));
		jTableBlock.push_back(new Opcode(OK_GoToStack));
		InstructionBuilder.push_back(jTableBlock);

		for (int i = (isFirstNop ? 1 : 0); i < maxSize;)
		{
			vector<Opcode*> block;
			Opcode* label = new Opcode(OK_Label);
			label->setString("__builtin__controlFlowObs_" + to_string(labelCounter++));
			block.push_back(label);
			int bSize = (rand() % randMod) + minBlockSize;
			for (int j = 0; j < bSize;j++)
			{
				if (i + j >= maxSize)
					break;
				if (Instructions[i+j]->getKind() == OK_Jump)
				{
					bSize = j + 1;
					break;
				}
			}
			if (i + bSize >= maxSize)
			{
				if (i + bSize > maxSize)
				{
					bSize = maxSize - i;
				}
				block.resize(bSize + 1);
				memcpy(&block[1], &Instructions[i], bSize * sizeof(Opcode*));
			}
			else
			{
				block.reserve(bSize + 2);
				block.resize(bSize + 1);
				if (bSize)
					memcpy(&block[1], &Instructions[i], bSize * sizeof(Opcode*));
				if (block[bSize]->getKind() != OK_Jump)
				{
					jumpTableLocations.push_back("__builtin__controlFlowObs_" + to_string(labelCounter));
				}
				else
				{
					jumpTableLocations.push_back(block[bSize]->getString());//replace the jump with a jump table jump to add confusion
					block.pop_back();
				}
				jumpTableRandomisation.push_back(jumpTableRandomisation.size());
			}
			InstructionBuilder.push_back(block);
			i += bSize;
			shuffle(jumpTableRandomisation.begin(), jumpTableRandomisation.end(), randomEngine);
		}
		for (unsigned i = 0; i < jumpTableRandomisation.size();i++)
		{
			bool found = false;
			for (unsigned j = 0; j < jumpTableRandomisation.size();j++)
			{
				if (jumpTableRandomisation[i] == j)
				{
					found = true;
					JumpTable->addJumpLoc(jumpTableLocations[j]);
					Opcode* index = new Opcode(OK_PushInt);
					index->setInt(i*4);
					Opcode* jump = new Opcode(OK_Jump);
					jump->setString("__builtin__jumpTable");
					InstructionBuilder[j+1].push_back(index);
					InstructionBuilder[j+1].push_back(jump);
					break;
				}
			}
			assert(found && "Not Found Correct Index");
		}
		Instructions.clear();
		if (isFirstNop)Instructions.push_back(first);
		addOpPushInt(JumpTable->getItemCount() * 4);
		addOpJump("__builtin__jumpTable");

		JumpTable->addJumpLoc((string)"__builtin__controlFlowObs_0");
		vector<size_t> randomiseIndexes;
		for (size_t i = 0; i < InstructionBuilder.size(); i++)
		{
			randomiseIndexes.push_back(i);
		}
		shuffle(randomiseIndexes.begin(), (keepEndReturn ? randomiseIndexes.end() - 1 : randomiseIndexes.end()), randomEngine);
		for (uint32_t i = 0; i < randomiseIndexes.size(); i++)
		{
			size_t size = InstructionBuilder[randomiseIndexes[i]].size();
			size_t iSize = Instructions.size();
			Instructions.resize(iSize + size);
			memcpy(&Instructions[iSize], &InstructionBuilder[randomiseIndexes[i]][0], size * sizeof(Opcode*));
		}
	}
	else
	{
		for (int i = (isFirstNop ? 1 : 0); i < maxSize;)
		{
			vector<Opcode*> block;
			Opcode* label = new Opcode(OK_Label);
			label->setString("__builtin__controlFlowObs_" + to_string(labelCounter++));
			block.push_back(label);
			int bSize = (rand() % randMod) + minBlockSize;
			if (i + bSize >= maxSize)
			{
				if (i + bSize > maxSize)
				{
					bSize = maxSize - i;
				}
				block.resize(bSize + 1);
				memcpy(&block[1], &Instructions[i], bSize * sizeof(Opcode*));
			}
			else
			{
				block.reserve(bSize + 2);
				block.resize(bSize + 1);
				if (bSize)
					memcpy(&block[1], &Instructions[i], bSize * sizeof(Opcode*));
				if (block[bSize]->getKind() != OK_Jump)
				{
					Opcode* jumpNext = new Opcode(OK_Jump);
					jumpNext->setString("__builtin__controlFlowObs_" + to_string(labelCounter));
					block.push_back(jumpNext);
				}
			}
			InstructionBuilder.push_back(block);
			i += bSize;
		}
		Instructions.clear();
		if (isFirstNop)Instructions.push_back(first);
		vector<size_t> randomiseIndexes;
		for (size_t i = 0; i < InstructionBuilder.size(); i++)
		{
			randomiseIndexes.push_back(i);
		}
		shuffle(randomiseIndexes.begin(), (keepEndReturn ? randomiseIndexes.end() - 1 : randomiseIndexes.end()), randomEngine);
		if (randomiseIndexes[0] > 0)
		{
			Opcode* jumpInit = new Opcode(OK_Jump);
			jumpInit->setString("__builtin__controlFlowObs_0");
			Instructions.push_back(jumpInit);
		}
		else
		{
			InstructionBuilder[0][0]->makeNull();
		}
		for (uint32_t i = 0; i < randomiseIndexes.size(); i++)
		{
			if (i > 0)
			{
				if (randomiseIndexes[i] == randomiseIndexes[i - 1] + 1)
				{
					delete Instructions.back();
					Instructions.pop_back();
				}
			}
			size_t size = InstructionBuilder[randomiseIndexes[i]].size();
			size_t iSize = Instructions.size();
			Instructions.resize(iSize + size);
			memcpy(&Instructions[iSize], &InstructionBuilder[randomiseIndexes[i]][0], size * sizeof(Opcode*));
		}
	}
}

void FunctionData::optimisePushBytes()
{
	size_t size = Instructions.size(), max = size - 1, max2 = size - 2;
	for (size_t i = 0; i < max;i++)
	{
		Opcode* op = Instructions[i], *next, *next2;
		if (op->getKind() == OK_PushInt)
		{
			int val = op->getInt(), nextVal, next2Val;
			if (val >= 0 && val <= 0xFF)
			{
				if ((next = Instructions[i + 1], next->getKind()) == OK_PushInt && (nextVal = next->getInt(), nextVal >= 0 && nextVal <= 0xFF))
				{
					if (i < max2 && (next2 = Instructions[i + 2], next2->getKind() == OK_PushInt) && (next2Val = next2->getInt(), next2Val >= 0 && next2Val <= 0xFF))
					{
						//PushBytes3
						op->setKind(OK_PushBytes);
						op->setByte(3, 0);
						op->setByte(val, 1);
						op->setByte(nextVal, 2);
						op->setByte(next2Val, 3);
						//nop the next 2 opcodes as they have been handled
						next->makeNull();
						next2->makeNull();
						//skip the next 2 in Instructions in the next iteration
						i += 2;
					}
					else
					{
						//PushBytes2
						op->setKind(OK_PushBytes);
						op->setByte(2, 0);
						op->setByte(val, 1);
						op->setByte(nextVal, 2);
						//nop the next opcode as it has been handled
						next->makeNull();
						//skip the next instruction
						i++;
					}
				}
			}
		}
	}
}

void FunctionData::addOpAdd()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Add Instruction");
	if (Instructions.back()->getKind() == OK_PushInt)
	{
		if (Instructions.back()->getInt() == 0)
		{
			delete Instructions.back();
			Instructions.pop_back();
		}
		else
		{
			int val = Instructions.back()->getInt();
			delete Instructions.back();
			Instructions.pop_back();
			addOpAddImm(val);
		}
	}
	else
	{
		Instructions.push_back(new Opcode(OK_Add));
	}
#else
	Instructions.push_back(new Opcode(OK_Add));
#endif
}

void FunctionData::addOpSub()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Sub Instruction");
	if (Instructions.back()->getKind() == OK_PushInt)
	{
		int i = Instructions.back()->getInt();
		if (i == 0)
		{
			delete Instructions.back();
			Instructions.pop_back();
		}
		else
		{
			int val = Instructions.back()->getInt();
			delete Instructions.back();
			Instructions.pop_back();
			addOpAddImm(-val);
		}
	}
	else
	{
		Instructions.push_back(new Opcode(OK_Sub));
	}
#else
	Instructions.push_back(new Opcode(OK_Sub));
#endif
}

void FunctionData::addOpMult()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Mult Instruction");
	if (Instructions.back()->getKind() == OK_PushInt)
	{
		int i = Instructions.back()->getInt();
		if (i == 0)
		{
			Instructions.back()->setKind(OK_Drop);//replace push 0 with a drop
			Instructions.push_back(new Opcode(OK_PushInt));//no need to set int to 0 as its the default
		}
		else if (i == 1)
		{
			delete Instructions.back();//remove the push 1, mult by 1 does nothing
			Instructions.pop_back();
		}
		else 
		{
			int val = Instructions.back()->getInt();
			delete Instructions.back();
			Instructions.pop_back();
			addOpMultImm(val);
		}
	}
	else
	{
		Instructions.push_back(new Opcode(OK_Mult));
	}
#else
	Instructions.push_back(new Opcode(OK_Mult));
#endif
}

void FunctionData::addOpDiv(bool *isZeroDivDetected)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Div Instruction");
	if (isZeroDivDetected)
	{
		*isZeroDivDetected = false;
	}
	if (Instructions.back()->getKind() == OK_PushInt)
	{
		int i = Instructions.back()->getInt();
		if (i == 0)
		{
			if (isZeroDivDetected)
			{
				*isZeroDivDetected = true;
			}
			//game treats division by zero as just putting 0 on top of stack
			Instructions.back()->setKind(OK_Drop);
			Instructions.push_back(new Opcode(OK_PushInt));
		}
		else if (i == 1)
		{
			delete Instructions.back();//remove the push 1, div by 1 does nothing
			Instructions.pop_back();
		}
		else if (i == -1)
		{
			Instructions.back()->setKind(OK_Neg);//negate
		}
		else
		{
			Instructions.push_back(new Opcode(OK_Div));
		}
	}
	else
	{
		Instructions.push_back(new Opcode(OK_Div));
	}
#else
	Instructions.push_back(new Opcode(OK_Div));
#endif
}

void FunctionData::addOpNot()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Not Instruction");
	Opcode* back = Instructions.back();
	switch (back->getKind())
	{
	case OK_CmpEq:
		back->setKind(OK_CmpNe);
		return;
	case OK_CmpNe:
		back->setKind(OK_CmpEq);
		return;
	case OK_CmpGe:
		back->setKind(OK_CmpLt);
		return;
	case OK_CmpGt:
		back->setKind(OK_CmpLe);
		return;
	case OK_CmpLe:
		back->setKind(OK_CmpGt);
		return;
	case OK_CmpLt:
		back->setKind(OK_CmpGe);
		return;
	case OK_FCmpEq:
		back->setKind(OK_FCmpNe);
		return;
	case OK_FCmpNe:
		back->setKind(OK_FCmpEq);
		return;
	case OK_FCmpGe:
		back->setKind(OK_FCmpLt);
		return;
	case OK_FCmpGt:
		back->setKind(OK_FCmpLe);
		return;
	case OK_FCmpLe:
		back->setKind(OK_FCmpGt);
		return;
	case OK_FCmpLt:
		back->setKind(OK_FCmpGe);
		return;
	case OK_PushInt:
		back->setInt(Instructions.back()->getInt() == 0);
		return;
	default:
		Instructions.push_back(new Opcode(OK_Not));
		return;
	}
#else
	Instructions.push_back(new Opcode(OK_Not));
#endif
}

void FunctionData::addOpNeg()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add Neg Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushInt || back->getKind() == OK_MultImm)//treat pushInt and MultImm as the same
	{
		back->setInt(-back->getInt());
	}
	else
	{
		Instructions.push_back(new Opcode(OK_Neg));
	}
#else
	Instructions.push_back(new Opcode(OK_Neg));
#endif
}

void FunctionData::addOpFAdd()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add FAdd Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushFloat)
	{
		float imm = back->getFloat();
		delete back;
		Instructions.pop_back();
		addOpFAddImm(imm);
	}
	else
	{
		Instructions.push_back(new Opcode(OK_FAdd));
	}
#else
	Instructions.push_back(new Opcode(OK_FAdd));
#endif
}

void FunctionData::addOpFSub()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add FSub Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushFloat)
	{
		float imm = back->getFloat();
		delete back;
		Instructions.pop_back();
		addOpFAddImm(-imm);
	}
	else
	{
		Instructions.push_back(new Opcode(OK_FSub));
	}
#else
	Instructions.push_back(new Opcode(OK_FSub));
#endif
}

void FunctionData::addOpFMult()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add FMult Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushFloat)
	{
		float imm = back->getFloat();
		delete back;
		Instructions.pop_back();
		addOpFMultImm(imm);
	}
	else
	{
		Instructions.push_back(new Opcode(OK_FMult));
	}
#else
	Instructions.push_back(new Opcode(OK_FMult));
#endif
}

void FunctionData::addOpFDiv(bool * isZeroDivDetected)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add FDiv Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushFloat)
	{
		float imm = back->getFloat();
		if (imm == 0)
		{
			Instructions.push_back(new Opcode(OK_FDiv));//still parse the instruction as FDiv, but warn user
			if (isZeroDivDetected)
			{
				*isZeroDivDetected = true;
			}
		}
		else
		{
			delete back;
			Instructions.pop_back();
			addOpFMultImm(1.0f / imm);
			if (isZeroDivDetected)
			{
				*isZeroDivDetected = false;
			}
		}
	}
	else
	{
		Instructions.push_back(new Opcode(OK_FDiv));
		if (isZeroDivDetected)
		{
			*isZeroDivDetected = false;
		}
	}
#else
	Instructions.push_back(new Opcode(OK_FDiv));
#endif
}

void FunctionData::addOpFNeg()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add FNeg Instruction");
	Opcode *back = Instructions.back();
	if (back->getKind() == OK_PushFloat || back->getKind() == OK_FMultImm)//treat pushFloat and FMultImm as the same
	{
		back->setFloat(-back->getFloat());
	}
	else
	{
		Instructions.push_back(new Opcode(OK_FNeg));
	}
#else
	Instructions.push_back(new Opcode(OK_FNeg));
#endif
}

void FunctionData::addOpItoF()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add ItoF to empty instruction stack");
	Opcode *last = Instructions.back();
	switch(last->getKind())
	{
	case OK_PushInt:
		last->setKind(OK_PushFloat);
		last->setFloat((float)last->getInt());
		return;
	default:
		Instructions.push_back(new Opcode(OK_ItoF));
	}
#else
	Instructions.push_back(new Opcode(OK_ItoF));
#endif
}

void FunctionData::addOpFtoI()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add ItoF to empty instruction stack");
	Opcode* last = Instructions.back();
	if (last->getKind() == OK_PushFloat){
		last->setKind(OK_PushInt);
		last->setInt((int)last->getFloat());
	}
	else
#endif
	Instructions.push_back(new Opcode(OK_FtoI));
}

void FunctionData::addOpPushInt(int immediate)
{
	Opcode* op = new Opcode(OK_PushInt);
	op->setInt(immediate);
	Instructions.push_back(op);
}

void FunctionData::addOpDrop()
{
#ifdef USE_OPTIMISATIONS
	switch(Instructions.back()->getKind())
	{
	case OK_PushInt:
	case OK_PushFloat:
	case OK_PushString:
	case OK_GetFrameP:
	case OK_GetFrame:
	case OK_GetStaticP:
	case OK_GetStatic:
	case OK_GetGlobalP:
	case OK_GetGlobal:
	case OK_Dup:
	case OK_LabelLoc:
		//delete instrucions that just push a value to the stack
		delete Instructions.back();
		Instructions.pop_back();
		break;
	case OK_FtoV:
		//this case would only ever come up if you have
		// toVector3(1.0f); and dont use the result, in which case it would recursively get cancelled down 
		Instructions.back()->setKind(OK_Dup);//replace fToV(dup2) with dup
		break;
	case OK_AddImm:
	case OK_MultImm:
	case OK_PGet:
	case OK_ItoF:
	case OK_FtoI:
	case OK_GetArrayP:
	case OK_GetArray:
	case OK_GetImmP:
	case OK_GetImm:
	case OK_Neg:
	case OK_FNeg:
	case OK_Not:
		//replace instructions that just replace item at top of the stack with a drop
		delete Instructions.back();
		Instructions.pop_back();
		addOpDrop();
		break;
	case OK_ShiftLeft:
	case OK_ShiftRight:
	case OK_Add:
	case OK_Sub:
	case OK_Mult:
	case OK_Div:
	case OK_Mod:
	case OK_CmpEq:
	case OK_CmpNe:
	case OK_CmpGt:
	case OK_CmpGe:
	case OK_CmpLt:
	case OK_CmpLe:
	case OK_FAdd:
	case OK_FSub:
	case OK_FMult:
	case OK_FDiv:
	case OK_FMod:
	case OK_FCmpEq:
	case OK_FCmpNe:
	case OK_FCmpGt:
	case OK_FCmpGe:
	case OK_FCmpLt:
	case OK_FCmpLe:
	case OK_And:
	case OK_Or:
	case OK_Xor:
		delete Instructions.back();
		Instructions.pop_back();
		addOpDrop();
		addOpDrop();
		break;
	default:
		Instructions.push_back(new Opcode(OK_Drop));
		break;
	}
#else
	Instructions.push_back(new Opcode(OK_Drop));
#endif
}

void FunctionData::addOpNative(string name, uint8_t pCount, uint8_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	op->storage.native = new NativeStorage(name, pCount, rCount);
	Instructions.push_back(op);
}

void FunctionData::addOpNative(uint64_t hash, uint8_t pCount, uint8_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	op->storage.native = new NativeStorage(hash, pCount, rCount);
	Instructions.push_back(op);
}

void FunctionData::addOpNative(string name, uint64_t hash, uint8_t pCount, uint8_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	op->storage.native = new NativeStorage(name, hash, pCount, rCount);
	Instructions.push_back(op);
}

void FunctionData::addOpPGet()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add PGet to empty instruction stack");
	Opcode* op = Instructions.back();
	switch (op->getKind())
	{
	case OK_GetArrayP:
		Instructions.back()->setKind(OK_GetArray);
		return;
	case OK_GetFrameP:
		Instructions.pop_back();
		addOpGetFrame(op->getUShort(0));
		delete op;
		return;
	case OK_GetGlobalP:
		Instructions.pop_back();
		addOpGetGlobal(op->getInt());
		delete op;
		return;
	case OK_GetStaticP:
		Instructions.pop_back();
		addOpGetStatic(op->getUShort(0));
		delete op;
		return;
	case OK_GetImmP:
		Instructions.pop_back();
		addOpGetImm(op->getUShort(0));
		delete op;
		return;
	default:
		Instructions.push_back(new Opcode(OK_PGet));
		return;
	}
#else
	Instructions.push_back(new Opcode(OK_PGet));
#endif
}

void FunctionData::addOpPSet()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add PSet to empty instruction stack");
	switch (Instructions.back()->getKind())
	{
	case OK_GetArrayP:
		Instructions.back()->setKind(OK_SetArray);
		return;
	case OK_GetFrameP:
		Instructions.back()->setKind(OK_SetFrame);
		return;
	case OK_GetGlobalP:
		Instructions.back()->setKind(OK_SetGlobal);
		return;
	case OK_GetStaticP:
		Instructions.back()->setKind(OK_SetStatic);
		return;
	case OK_GetImmP:
		Instructions.back()->setKind(OK_SetImm);
		return;
	default:
		Instructions.push_back(new Opcode(OK_PSet));
		return;
	}
#else
	Instructions.push_back(new Opcode(OK_PSet));
#endif
}

void FunctionData::addOpGetFrame(uint16_t index)
{
#ifdef USE_OPTIMISATIONS
	if (Instructions.size())
	{
		Opcode *back = Instructions.back();
		if (back->getKind() == OK_GetFrame && back->getUShort(0) == index - 1)
		{
			back->setKind(OK_PushInt);
			back->setInt(2);
			addOpGetFrameP(index - 1);
			addOpToStack();
			return;
		}
		else if (back->getKind() == OK_ToStack)
		{
			size_t size = Instructions.size();
			assert(size > 2 && "To Stack called with invalid args");
			Opcode* ptrOp = Instructions[size - 2],* sizeOp = Instructions[size - 3];
			if (ptrOp->getKind() == OK_GetFrameP && sizeOp->getKind() == OK_PushInt)
			{
				if (index - ptrOp->getUShort(0) == sizeOp->getInt())
				{
					sizeOp->setInt(sizeOp->getInt() + 1);
					return;
				}
			}
		}
	}
#endif

	Opcode* op = new Opcode(OK_GetFrame);
	op->setUShort(index, 0);
	Instructions.push_back(op);

}

void FunctionData::addOpGetStatic(uint16_t index)
{
#ifdef USE_OPTIMISATIONS
	if (Instructions.size())
	{
		Opcode *back = Instructions.back();
		if (back->getKind() == OK_GetStatic && back->getUShort(0) == index - 1)
		{
			back->setKind(OK_PushInt);
			back->setInt(2);
			addOpGetStaticP(index - 1);
			addOpToStack();
			return;
		}
		else if (back->getKind() == OK_ToStack)
		{
			size_t size = Instructions.size();
			assert(size > 2 && "To Stack called with invalid args");
			Opcode* ptrOp = Instructions[size - 2], *sizeOp = Instructions[size - 3];
			if (ptrOp->getKind() == OK_GetStaticP && sizeOp->getKind() == OK_PushInt)
			{
				if (index - ptrOp->getUShort(0) == sizeOp->getInt())
				{
					sizeOp->setInt(sizeOp->getInt() + 1);
					return;
				}
			}
		}
	}
#endif
	{
		Opcode* op = new Opcode(OK_GetStatic);
		op->setUShort(index, 0);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpGetGlobal(int index)
{
#ifdef USE_OPTIMISATIONS
	if (Instructions.size())
	{
		Opcode *back = Instructions.back();
		if (back->getKind() == OK_GetGlobal && back->getInt() == index - 1)
		{
			back->setKind(OK_PushInt);
			back->setInt(2);
			addOpGetGlobalP(index - 1);
			addOpToStack();
			return;
		}
		else if (back->getKind() == OK_ToStack)
		{
			size_t size = Instructions.size();
			assert(size > 2 && "To Stack called with invalid args");
			Opcode* ptrOp = Instructions[size - 2], *sizeOp = Instructions[size - 3];
			if (ptrOp->getKind() == OK_GetGlobalP && sizeOp->getKind() == OK_PushInt)
			{
				if (index - ptrOp->getInt() == sizeOp->getInt())
				{
					sizeOp->setInt(sizeOp->getInt() + 1);
					return;
				}
			}
		}
	}
#endif
	{
		Opcode* op = new Opcode(OK_GetGlobal);
		op->setInt(index);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpAddImm(int immediate)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add AddImm to empty instruction stack");
	Opcode *last = Instructions.back();
	if (last->getKind() == OK_PushInt)
	{
		last->setInt(last->getInt() + immediate);
	}
	else if (last->getKind() == OK_AddImm)
	{
		int val = last->getInt() + immediate;
		delete last;
		Instructions.pop_back();
		addOpAddImm(val);
	}
	else if (immediate != 0)
#endif
	{
		Opcode* op = new Opcode(OK_AddImm);
		op->setInt(immediate);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpMultImm(int immediate)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add MultImm to empty instruction stack");
	Opcode *last = Instructions.back();
	if (last->getKind() == OK_PushInt)
	{
		last->setInt(last->getInt() * immediate);
	}
	else if (last->getKind() == OK_MultImm)
	{
		int val = last->getInt() * immediate;
		delete last;
		Instructions.pop_back();
		addOpMultImm(val);
	}
	else if (immediate == -1)
	{
		addOpNeg();
	}
	else if (immediate == 0)
	{
		addOpDrop();
		addOpPushInt(0);
	}
	else if (immediate != 1)
#endif
	{
		Opcode* op = new Opcode(OK_MultImm);
		op->setInt(immediate);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpFAddImm(float immediate)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add FAddImm to empty instruction stack");
	Opcode *last = Instructions.back();
	if (last->getKind() == OK_PushFloat)
	{
		last->setFloat(last->getFloat() + immediate);
	}
	else if (last->getKind() == OK_FAddImm)
	{
		float val = immediate + last->getFloat();
		delete last;
		Instructions.pop_back();
		addOpFAddImm(val);
	}
	else if (immediate == 0.0f)
	{
		//do nothing
	}
	else
#endif
	{
		Opcode* op = new Opcode(OK_FAddImm);
		op->setFloat(immediate);
		Instructions.push_back(op);
	}

}

void FunctionData::addOpFMultImm(float immediate)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add FMultImm to empty instruction stack");
	Opcode *last = Instructions.back();
	if (last->getKind() == OK_PushFloat)
	{
		last->setFloat(last->getFloat() * immediate);
	}
	else if (last->getKind() == OK_FMultImm)
	{
		float val = immediate * last->getFloat();
		delete last;
		Instructions.pop_back();
		addOpFMultImm(val);
	}
	else if (immediate == 0.0f)
	{
		addOpDrop();
		addOpPushFloat(0.0f);
	}
	else if (immediate == -1.0f)
	{
		addOpFNeg();
	}
	else if (immediate == 1.0f)
	{
		//do nothing
	}
	else
#endif
	{
		Opcode* op = new Opcode(OK_FMultImm);
		op->setFloat(immediate);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpGetImmP(uint16_t index)
{
#ifdef USE_OPTIMISATIONS
	if (index != 0)
#endif
	{
		assert(Instructions.size() && "Cannot add GetImmP to empty instruction stack");
		switch(Instructions.back()->getKind())
		{
			case OK_GetFrameP:
			case OK_GetStaticP:
			case OK_GetGlobalP:
			case OK_GetImmP:
				Instructions.back()->setUShort(Instructions.back()->getUShort(0) + index, 0);
				return;
			default:
				break;
		}
		Opcode* op = new Opcode(OK_GetImmP);
		op->setUShort(index, 0);
		Instructions.push_back(op);
	}
}

void FunctionData::addOpGetImm(uint16_t index)
{
#ifdef USE_OPTIMISATIONS
	if (index != 0)
	{
		assert(Instructions.size() && "Cannot add GetImm to empty instruction stack");
		switch (Instructions.back()->getKind())
		{
			case OK_GetFrameP:
			case OK_GetStaticP:
			case OK_GetGlobalP:
			case OK_GetImmP:
				Instructions.back()->setUShort(Instructions.back()->getUShort(0) + index, 0);
				addOpPGet();//pget will turn these
				return;
			default:
				break;
		}
		Opcode* op = new Opcode(OK_GetImm);
		op->setUShort(index, 0);
		Instructions.push_back(op);
	}
	else
	{
		addOpPGet();
	}
#else
	Opcode* op = new Opcode(OK_GetImm);
	op->setUShort(index, 0);
	Instructions.push_back(op);
#endif
}

void FunctionData::addOpSetImm(uint16_t index)
{
#ifdef USE_OPTIMISATIONS
	if (index != 0)
	{
		assert(Instructions.size() && "Cannot add SetImm to empty instruction stack");
		switch (Instructions.back()->getKind())
		{
			case OK_GetFrameP:
			case OK_GetStaticP:
			case OK_GetGlobalP:
			case OK_GetImmP:
				Instructions.back()->setUShort(Instructions.back()->getUShort(0) + index, 0);
				addOpPSet();
				return;
			default:
				break;
		}
		Opcode* op = new Opcode(OK_SetImm);
		op->setUShort(index, 0);
		Instructions.push_back(op);
	}
	else
	{
		addOpPSet();
	}
#else
	Opcode* op = new Opcode(OK_SetImm);
	op->setUShort(index, 0);
	Instructions.push_back(op);
#endif
}

void FunctionData::addOpJumpFalse(string loc)
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Instruction stack empty, cant add JumpFalse Instruction");
	Opcode *op = Instructions.back();
	switch (op->getKind())
	{
	case OK_CmpEq:
		op->setKind(OK_JumpNE);
		op->setString(loc);
		return;
	case OK_CmpNe:
		op->setKind(OK_JumpEQ);
		op->setString(loc);
		return;
	case OK_CmpGt:
		op->setKind(OK_JumpLE);
		op->setString(loc);
		return;
	case OK_CmpGe:
		op->setKind(OK_JumpLT);
		op->setString(loc);
		return;
	case OK_CmpLt:
		op->setKind(OK_JumpGE);
		op->setString(loc);
		return;
	case OK_CmpLe:
		op->setKind(OK_JumpGT);
		op->setString(loc);
		return;
	case OK_PushInt:
		if (op->getInt())
		{
			delete op;//JumpFalse on something not zero never gets executed
			Instructions.pop_back();
		}
		else
		{
			delete op;//JumpFalse on zero always branches
			op = new Opcode(OK_Jump);
			op->setString(loc);
			Instructions.back() = op;
		}
	default:
		op = new Opcode(OK_JumpFalse);
		op->setString(loc);
		Instructions.push_back(op);
		return;
	}
#else
	Opcode *op = new Opcode(OK_JumpFalse);
	op->setString(loc);
	Instructions.push_back(op);
#endif
}

void FunctionData::addOpGetHash()
{
#ifdef USE_OPTIMISATIONS
	assert(Instructions.size() && "Cannot add OpGetHash to empty instruction stack");
	if (Instructions.back()->getKind() == OK_PushString)
	{
		string str = Instructions.back()->getString();
		delete Instructions.back();
		Instructions.pop_back();
		addOpPushInt(Utils::Hashing::Joaat(str));
		pushComment("GetHash(\"" + str + "\")");
	}
	else
#endif
	{
		Instructions.push_back(new Opcode(OK_GetHash));
	}
}

ostream & operator<<(ostream & stream, const FunctionData & fdata)
{
	stream << "\r\n:" << fdata.name.substr(1) << "//>\r\nFunction " << (int)fdata.pcount << " " << (int)fdata.stackSize << "\r\n";
	for(size_t i = 0; i < fdata.Instructions.size(); i++)
	{
		if (fdata.Instructions[i]->getKind() == OK_Null)
		{
			if (fdata.Instructions[i]->hasComment())
			{
				stream << "//" + fdata.Instructions[i]->getComment() << "\r\n";
			}
		}
		else
		{
			stream << *fdata.Instructions[i] << "\r\n";
		}
	}
	stream << "//<\r\n";
	return stream;
}
