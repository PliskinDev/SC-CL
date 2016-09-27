#include "FunctionOpcode.h"
#include <cassert>
#include <sstream>

struct SwitchCaseStorage
{
private:
	int _caseVal;
	string _jumpLoc;
	SwitchCaseStorage* _next;
public:
	SwitchCaseStorage(int caseVal, string jumpLoc) : _caseVal(caseVal), _jumpLoc(jumpLoc), _next(NULL){}
	~SwitchCaseStorage()
	{
		if(_next)
			delete _next;
	}
	string getLoc()const{ return _jumpLoc; }
	int getCase()const{ return _caseVal; }
	bool hasNextCase()const{ return _next; }
	SwitchCaseStorage *getNextCase()const{ return _next; }
	SwitchCaseStorage **getNextCasePtr(){ return &_next; }
};
struct StringStorage
{
private:
	char* pointer;
	int length;
public:
	string toString()const
	{
		return string(pointer, length);
	}
	StringStorage(string str)
	{
		length = str.length();
		pointer = new char[length + 1];
		memcpy(pointer, str.c_str(), length + 1);
	}
	~StringStorage()
	{
		delete[] pointer;
	}
};
struct NativeStorage
{
private:
	uint64_t _hash;
	StringStorage *_name;
	uint16_t _pCount, _rCount;
public:
	NativeStorage(string name, uint64_t hash, uint16_t pCount, uint16_t rCount) :
		_hash(hash), 
		_name(new StringStorage(name)),
		_pCount(pCount),
		_rCount(rCount)
	{
	}
	NativeStorage(string name, uint16_t pCount, uint16_t rCount) :
		_hash((!strnicmp(name.c_str(), "unk_0x", 6) ? strtoull(name.c_str() + 6, NULL, 16) : Utils::Hashing::Joaat((char*)name.c_str()))),
		_name(new StringStorage(name)),
		_pCount(pCount),
		_rCount(rCount)
	{
	}
	NativeStorage(uint64_t hash, uint16_t pCount, uint16_t rCount) :
		_hash(hash),
		_name(NULL),
		_pCount(pCount),
		_rCount(rCount)
	{
	}
	~NativeStorage()
	{
		if(_name)
			delete _name;
	}
	bool hasName()const{ return _name; }
	string getName()const{ if(hasName())return _name->toString(); return string(); }
	uint64_t getHash()const{ return _hash; }
	uint16_t getParamCount()const{ return _pCount; }
	uint16_t getReturnCount()const{ return _rCount; }
};

void Opcode::setString(string str)
{
	*(StringStorage**)storage = new StringStorage(str);
}

void Opcode::setInt(int value)
{
	*(int*)storage = value;
}

void Opcode::setFloat(float value)
{
	*(float*)storage = value;
}

void Opcode::setShort(int16_t value, int offset)
{
	assert(offset >= 0 && offset <= (sizeof(void*) - 2) && "short offset must be between 0 and 2");
	*(int16_t*)(storage + offset) = value;
}

void Opcode::setUShort(uint16_t value, int offset)
{
	assert(offset >= 0 && offset <= (sizeof(void*) - 2) && "ushort offset must be between 0 and 2");
	*(uint16_t*)(storage + offset) = value;
}

Opcode::~Opcode()
{
#ifdef _DEBUG
	if(_comment)
	{
		delete[] _comment;
	}
#endif
	switch(opcodeKind)
	{
	case OK_Call:
	case OK_PushString:
	case OK_Jump:
	case OK_JumpTrue:
	case OK_JumpFalse:
	case OK_JumpEQ:
	case OK_JumpNE:
	case OK_JumpGT:
	case OK_JumpGE:
	case OK_JumpLT:
	case OK_JumpLE:
	case OK_Label:
		delete *(StringStorage**)storage;
		break;
	case OK_Native:
		delete *(NativeStorage**)storage;
		break;
	case OK_Switch:
	{
		SwitchCaseStorage* sCasePtr = *(SwitchCaseStorage**)storage;
		if(sCasePtr)
		{
			delete sCasePtr;
		}

		break;
	}
	default:
		break;
	}
}

void Opcode::setComment(string comment)
{
#ifdef _DEBUG
	if(_comment)
	{
		comment = string(_comment) + " - " + comment;
		delete[] _comment;
	}
	_comment = new char[comment.length() + 1];
	memcpy(_comment, comment.c_str(), comment.length() + 1);
#endif
}
string Opcode::getComment() const
{
#ifdef _DEBUG
	if(_comment)
	{
		return string(_comment);
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
	switch(opcodeKind)
	{
	case OK_Call:
	case OK_PushString:
	case OK_Jump:
	case OK_JumpTrue:
	case OK_JumpFalse:
	case OK_JumpEQ:
	case OK_JumpNE:
	case OK_JumpGT:
	case OK_JumpGE:
	case OK_JumpLT:
	case OK_JumpLE:
	case OK_Label:
	case OK_LabelLoc:
		return (*(StringStorage**)storage)->toString();
	default:
		assert(false && "Get String called on a non string opcode");
	}
	return "";
}

int Opcode::getInt() const
{
	return *(int*)storage;
}

float Opcode::getFloat() const
{
	return *(float*)storage;
}

int16_t Opcode::getShort(int offset) const
{
	assert(offset >= 0 && offset <= (sizeof(void*) - 2) && "ushort offset must be between 0 and 2");
	return *(int16_t*)(storage + offset);
}

uint16_t Opcode::getUShort(int offset) const
{
	assert(offset >= 0 && offset <= (sizeof(void*) - 2) && "short offset must be between 0 and 2");
	return *(uint16_t*)(storage + offset);
}

string Opcode::toString() const
{
#define Check12Op(opcode){uint16_t value = getUShort(0);current = (value > 0xFF ? #opcode "2 " :  #opcode "1 ") + to_string(value); }
#define Check23Op(opcode){int value = getInt();assert(value < 0 && "value cannot be negative"); current = (value > 0xFFFF ? #opcode "3 " :  #opcode "2 ") + to_string(value); }
#define PrintJump(cond){current = "Jump"#cond " @" + getString();}
	string current;
	switch(opcodeKind)
	{
	case OK_Nop: current = "Nop"; break;
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
	case OK_PushFloat:
	{
		float value = getFloat();
		if(value == -1.0){
			current = "PushF_-1";
		}
		else if(value == 0.0){
			current = "PushF_0";
		}
		else if(value == 1.0){
			current = "PushF_1";
		}
		else if(value == 2.0){
			current = "PushF_2";
		}
		else if(value == 3.0){
			current = "PushF_3";
		}
		else if(value == 4.0){
			current = "PushF_4";
		}
		else if(value == 5.0){
			current = "PushF_5";
		}
		else if(value == 6.0){
			current = "PushF_6";
		}
		else if(value == 7.0){
			current = "PushF_7";
		}
		else{
			current = "PushF " + to_string(value);
		}
		break;
	}
	case OK_Dup: current = "Dup"; break;
	case OK_Drop: current = "Drop"; break;
	case OK_Native:
	{
		NativeStorage* native = *(NativeStorage**)storage;
		char buff[17];
		sprintf(buff, "%llX", native->getHash());
		current = "CallNative unk0x" + string(buff) + " " + to_string(native->getParamCount()) + " " + to_string(native->getReturnCount());
		if (native->hasName())
		{
			current += " //" + native->getName();
		}
		break;
	}
/*	case OK_Func:
		current = ":" + getString() + "\r\nFunction " + to_string(getUShort(4)) + " " + to_string(getUShort(6));
		break;*/
	case OK_Return:
		current = "Return " + to_string(getUShort(0)) + " " + to_string(getUShort(2));
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
	case OK_Call:current = "Call @" + getString(); break;
	case OK_Jump: current = "Jump @" + getString(); break;
	case OK_JumpTrue: current = "Not\r\nJumpFalse @" + getString(); break;
	case OK_JumpFalse: PrintJump(False); break;
	case OK_JumpEQ: PrintJump(EQ); break;
	case OK_JumpNE: PrintJump(NE); break;
	case OK_JumpGT: PrintJump(GT); break;
	case OK_JumpGE: PrintJump(GE); break;
	case OK_JumpLT: PrintJump(LT); break;
	case OK_JumpLE: PrintJump(LE); break;
	case OK_Switch:{
		SwitchCaseStorage* sCase = *(SwitchCaseStorage**)storage;
		assert(sCase && "Empty Switch Statement");
		current = "Switch [" + to_string(sCase->getCase()) + " @" + sCase->getLoc() + "]";
		while(sCase->hasNextCase())
		{
			sCase = sCase->getNextCase();
			current += ":[" + to_string(sCase->getCase()) + " @" + sCase->getLoc() + "]";
		}
		break;
	}
	case OK_PushString:
		current = "PushString \"" + getString() + "\""; break;
	case OK_StrCopy:
		current = "StrCopy " + to_string(getUShort(0)); break;
	case OK_ItoS:
		current = "ItoS " + to_string(getUShort(0)); break;
	case OK_StrAdd:
		current = "StrAdd " + to_string(getUShort(0)); break;
	case OK_StrAddI:
		current = "StrAddI " + to_string(getUShort(0)); break;
	case OK_MemCpy: current = "MemCpy"; break;
	case OK_PCall: current = "PCall"; break;
	case OK_Label: current = "\r\n:" + getString(); break; //make labels have a line break
	case OK_LabelLoc: current = "Push GetLoc(\"" + getString() + "\")"; break;
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
	assert(Instructions.size() && "Empty instruction stack"); Instructions.back()->setComment(comment);
#endif
}

void FunctionData::AddSimpleOp(OpcodeKind operation)
{
	switch(operation)
	{
	case OK_Nop:
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
	case OK_FtoI:
	case OK_ItoF:
	case OK_FtoV:
	case OK_ShiftLeft:
	case OK_ShiftRight:
	case OK_Dup:
	case OK_Drop:
	case OK_PGet:
	case OK_PSet:
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
bool FunctionData::endsWithInlineReturn(unsigned position) const
{
	return Instructions.size() && Instructions.back()->GetKind() == OK_Jump && Instructions.back()->getString() == to_string(position);
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
	stream << "\r\n:" << name.substr(1) << "\r\nFunction " << pcount << " " << stackSize << endl;
	for(size_t i = 0; i < Instructions.size(); i++)
	{
		stream << *Instructions[i] << endl;
	}
	stream << endl;
	return stream.str();
}

void FunctionData::addSwitchCase(int caseVal, string jumpLoc)
{
	assert(Instructions.size() && "Instruction stack empty, cant add switch case");
	Opcode *end = Instructions.back();
	assert(end->GetKind() == OK_Switch && "AddSwitchCase must be called on switches");
	SwitchCaseStorage** curCasePtr = (SwitchCaseStorage**)end->storage;
	int count = 0;
	while(*curCasePtr)
	{
		assert(caseVal != (*curCasePtr)->getCase() && "Duplicate switch case found");
		curCasePtr = (*curCasePtr)->getNextCasePtr();
		count++;
	}
	assert(count < 256 && "Too many switch cases in statement");
	*curCasePtr = new SwitchCaseStorage(caseVal, jumpLoc);
}

void FunctionData::addUsedFunc(FunctionData * func)
{
	if(find(usedFuncs.begin(), usedFuncs.end(), func) == usedFuncs.end())
	{
		usedFuncs.push_back(func);
	}
}

void FunctionData::addOpNative(string name, uint16_t pCount, uint16_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	*(NativeStorage**)op->storage = new NativeStorage(name, pCount, rCount);
	Instructions.push_back(op);
}

void FunctionData::addOpNative(uint64_t hash, uint16_t pCount, uint16_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	*(NativeStorage**)op->storage = new NativeStorage(hash, pCount, rCount);
	Instructions.push_back(op);
}

void FunctionData::addOpNative(string name, uint64_t hash, uint16_t pCount, uint16_t rCount)
{
	Opcode* op = new Opcode(OK_Native);
	*(NativeStorage**)op->storage = new NativeStorage(name, hash, pCount, rCount);
	Instructions.push_back(op);
}

ostream & operator<<(ostream & stream, const FunctionData & fdata)
{
	stream << "\r\n:" << fdata.name.substr(1) << "\r\nFunction " << fdata.pcount << " " << fdata.stackSize << endl;
	for(size_t i = 0; i < fdata.Instructions.size(); i++)
	{
		stream << *fdata.Instructions[i] << endl;
	}
	stream << endl;
	return stream;
}
