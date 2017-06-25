#include "ClangParsing/CommandLineOptions.h"

using namespace llvm::cl;

namespace SCCL
{
	OptionCategory ClangOptions("Clang Options");
	OptionCategory CompilerOptions("Compiler Options");

	opt<bool> Help("h", desc("Alias for -help"), Hidden);
	opt<std::string> BuildPath("p", desc("Build path"), Optional, cat(ClangOptions));
	list<std::string> SourcePaths(Positional, desc("<source0> [... <sourceN>]"), cat(ClangOptions));
	list<std::string> ArgsAfter("extra-arg", desc("Additional argument to append to the compiler command line"), cat(ClangOptions));
	list<std::string> ArgsBefore("extra-arg-before", desc("Additional argument to prepend to the compiler command line"), cat(ClangOptions));

	opt<Platform> Option_Platform(
		"platform", desc("Choose target platform:"),
		Required,
		ValueRequired,
		cat(CompilerOptions),
		values(
		clEnumValN(Platform::P_X360, "X360", "Target Xbox (32 bit, big endian)"),
		clEnumValN(Platform::P_PS3, "PS3", "Target PS3 (32 bit, big endian)"),
		clEnumValN(Platform::P_PC, "PC", "Target PC (64 bit, little endian)"),
		clEnumValEnd
	));

	opt<BuildType> Option_BuildType(
		"build_type", desc("Choose build type:"),
		Required,
		ValueRequired,
		cat(CompilerOptions),
		values(
		clEnumValN(BuildType::BT_GTAIV, "GTAIV", "Grand Theft Auto IV (sco output)"),
		clEnumValN(BuildType::BT_GTAIV_TLAD, "GTAIV_TLAD", "Grand Theft Auto IV The Lost and Damned (sco output)"),
		clEnumValN(BuildType::BT_GTAIV_TBOGT, "GTAIV_TBOGT", "Grand Theft Auto IV The Ballad of Gay Tony (sco output)"),
		clEnumValN(BuildType::BT_GTAV, "GTAV", "Grand Theft Auto V (#sc output)"),
		clEnumValN(BuildType::BT_RDR_SCO, "RDR_SCO", "Red Dead Redemption (sco output)"),
		clEnumValN(BuildType::BT_RDR_XSC, "RDR_#SC", "Red Dead Redemption (#sc output)"),
		clEnumValEnd
	));

	opt<std::string> Option_OutputFileName(
		"name", desc("File name of output script, defaults to input file name"),
		ValueRequired,
		cat(CompilerOptions
	));

	opt<ObfLevel> Option_ObfuscationLevel(
		desc("Choose obfuscation level:"),
		cat(CompilerOptions),
		values(
		clEnumValN(obf_string, "Fs", "Obfuscate string table - GTA V Only"),
		clEnumValN(obf_low, "F1", "Enable low obfuscations"),
		clEnumValN(obf_default, "F2", "Enable default obfuscations"),
		clEnumValN(obf_high, "F3", "Enable high obfuscations"),
		clEnumValN(obf_veryhigh, "F4", "Enable very high obfuscations"),
		clEnumValN(obf_max, "F5", "Enable max obfuscations"),
		clEnumValEnd
	));

	opt<uint32_t> Option_PCVerison(
		"pc_version", desc("Sets the pc version for use in the native translation table"),
		ValueRequired,
		cat(CompilerOptions)
	);

	opt <uint32_t> Option_HostVarIndex(
		"hvi", desc("Sets the starting index for host variables to ignore"),
		ValueRequired,
		cat(CompilerOptions)
	);

	opt <uint32_t> Option_HostVarSize(
		"hvs", desc("Sets the amount of host variables to ignore"),
		ValueRequired,
		cat(CompilerOptions)
	);

	opt <uint32_t> Option_PlayerVarIndex(
		"pvi", desc("Sets the starting index for player variables to ignore"),
		ValueRequired,
		cat(CompilerOptions)
	);

	opt <uint32_t> Option_PlayerVarSize(
		"pvs", desc("Sets the amount of player variables to ignore"),
		ValueRequired,
		cat(CompilerOptions)
	);

	opt<OptimisationLevel> Option_OptimizationLevel(
		desc("Choose optimization level:"),
		cat(CompilerOptions),
		values(
		clEnumValN(OptimisationLevel::OL_None, "g", "No optimizations, enable debugging"),
		clEnumValN(OptimisationLevel::OL_Trivial, "O1", "Enable trivial optimizations"),
		clEnumValN(OptimisationLevel::OL_Normal, "O2", "Enable default optimizations"),
		clEnumValN(OptimisationLevel::OL_Full, "O3", "Enable expensive optimizations"),
		clEnumValEnd
	));

	opt<bool> Option_EmitAsm(
		"asm", desc("Emits the pre compiled ASM representation of the script"),
		cat(CompilerOptions)
	);

	opt<bool> Option_AsmOnly(
		"asm-only", desc("Only emits the pre compiled ASM representation of the script"),
		cat(CompilerOptions)
	);

	#pragma region Bool_Group
	//Grouping is for multi bool set support ex: -snb
	opt<bool> Option_Singleton(
		"s", desc("Limits script to one instance on runtime (GTAV)"),
		Grouping,
		cat(CompilerOptions)
	);

	opt<bool> Option_DisableFunctionNames(
		"n", desc("Disable function names in script output, Enabled when optimisations are turned on"),
		Grouping,
		cat(CompilerOptions)
	);

	//TODO: if selected set initializers in code
	opt<bool> Option_EntryFunctionPadding(
		"b", desc("Adds buffer to the entry function to allow script injection"),
		Hidden,
		Grouping,
		cat(CompilerOptions)
	);

	#pragma endregion
}