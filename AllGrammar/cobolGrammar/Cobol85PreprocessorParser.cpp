
// Generated from Cobol85Preprocessor.g4 by ANTLR 4.13.0


#include "Cobol85PreprocessorListener.h"

#include "Cobol85PreprocessorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Cobol85PreprocessorParserStaticData final {
  Cobol85PreprocessorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Cobol85PreprocessorParserStaticData(const Cobol85PreprocessorParserStaticData&) = delete;
  Cobol85PreprocessorParserStaticData(Cobol85PreprocessorParserStaticData&&) = delete;
  Cobol85PreprocessorParserStaticData& operator=(const Cobol85PreprocessorParserStaticData&) = delete;
  Cobol85PreprocessorParserStaticData& operator=(Cobol85PreprocessorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cobol85preprocessorParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Cobol85PreprocessorParserStaticData *cobol85preprocessorParserStaticData = nullptr;

void cobol85preprocessorParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cobol85preprocessorParserStaticData != nullptr) {
    return;
  }
#else
  assert(cobol85preprocessorParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Cobol85PreprocessorParserStaticData>(
    std::vector<std::string>{
      "startRule", "compilerOptions", "compilerXOpts", "compilerOption", 
      "execCicsStatement", "execSqlStatement", "execSqlImsStatement", "copyStatement", 
      "copySource", "copyLibrary", "replacingPhrase", "replaceArea", "replaceByStatement", 
      "replaceOffStatement", "replaceClause", "directoryPhrase", "familyPhrase", 
      "replaceable", "replacement", "ejectStatement", "skipStatement", "titleStatement", 
      "pseudoText", "charData", "charDataSql", "charDataLine", "cobolWord", 
      "literal", "filename", "charDataKeyword"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "'('", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "')'", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "'*>'", "','", "'.'", 
      "'=='"
    },
    std::vector<std::string>{
      "", "ADATA", "ADV", "ALIAS", "ANSI", "ANY", "APOST", "AR", "ARITH", 
      "AUTO", "AWO", "BIN", "BLOCK0", "BUF", "BUFSIZE", "BY", "CBL", "CBLCARD", 
      "CICS", "CO", "COBOL2", "COBOL3", "CODEPAGE", "COMPAT", "COMPILE", 
      "COPY", "CP", "CPP", "CPSM", "CS", "CURR", "CURRENCY", "DATA", "DATEPROC", 
      "DBCS", "DD", "DEBUG", "DECK", "DIAGTRUNC", "DLI", "DLL", "DP", "DTR", 
      "DU", "DUMP", "DYN", "DYNAM", "EDF", "EJECT", "EJPD", "EN", "ENGLISH", 
      "END_EXEC", "EPILOG", "EXCI", "EXEC", "EXIT", "EXP", "EXPORTALL", 
      "EXTEND", "FASTSRT", "FEPI", "FLAG", "FLAGSTD", "FSRT", "FULL", "GDS", 
      "GRAPHIC", "HOOK", "IN", "INTDATE", "JA", "JP", "KA", "LANG", "LANGUAGE", 
      "LC", "LEASM", "LENGTH", "LIB", "LILIAN", "LIN", "LINECOUNT", "LINKAGE", 
      "LIST", "LM", "LONGMIXED", "LONGUPPER", "LPARENCHAR", "LU", "MAP", 
      "MARGINS", "MAX", "MD", "MDECK", "MIG", "MIXED", "NAME", "NAT", "NATIONAL", 
      "NATLANG", "NN", "NO", "NOADATA", "NOADV", "NOALIAS", "NOAWO", "NOBLOCK0", 
      "NOC", "NOCBLCARD", "NOCICS", "NOCMPR2", "NOCOMPILE", "NOCPSM", "NOCURR", 
      "NOCURRENCY", "NOD", "NODATEPROC", "NODBCS", "NODE", "NODEBUG", "NODECK", 
      "NODIAGTRUNC", "NODLL", "NODU", "NODUMP", "NODP", "NODTR", "NODYN", 
      "NODYNAM", "NOEDF", "NOEJPD", "NOEPILOG", "NOEXIT", "NOEXP", "NOEXPORTALL", 
      "NOF", "NOFASTSRT", "NOFEPI", "NOFLAG", "NOFLAGMIG", "NOFLAGSTD", 
      "NOFSRT", "NOGRAPHIC", "NOHOOK", "NOLENGTH", "NOLIB", "NOLINKAGE", 
      "NOLIST", "NOMAP", "NOMD", "NOMDECK", "NONAME", "NONUM", "NONUMBER", 
      "NOOBJ", "NOOBJECT", "NOOFF", "NOOFFSET", "NOOPSEQUENCE", "NOOPT", 
      "NOOPTIMIZE", "NOOPTIONS", "NOP", "NOPFD", "NOPROLOG", "NORENT", "NOS", 
      "NOSEP", "NOSEPARATE", "NOSEQ", "NOSOURCE", "NOSPIE", "NOSQL", "NOSQLC", 
      "NOSQLCCSID", "NOSSR", "NOSSRANGE", "NOSTDTRUNC", "NOSEQUENCE", "NOTERM", 
      "NOTERMINAL", "NOTEST", "NOTHREAD", "NOTRIG", "NOVBREF", "NOWD", "NOWORD", 
      "NOX", "NOXREF", "NOZWB", "NS", "NSEQ", "NSYMBOL", "NUM", "NUMBER", 
      "NUMPROC", "OBJ", "OBJECT", "OF", "OFF", "OFFSET", "ON", "OP", "OPMARGINS", 
      "OPSEQUENCE", "OPT", "OPTFILE", "OPTIMIZE", "OPTIONS", "OUT", "OUTDD", 
      "PFD", "PPTDBG", "PGMN", "PGMNAME", "PROCESS", "PROLOG", "QUOTE", 
      "RENT", "REPLACE", "REPLACING", "RMODE", "RPARENCHAR", "SEP", "SEPARATE", 
      "SEQ", "SEQUENCE", "SHORT", "SIZE", "SOURCE", "SP", "SPACE", "SPIE", 
      "SQL", "SQLC", "SQLCCSID", "SQLIMS", "SKIP1", "SKIP2", "SKIP3", "SS", 
      "SSR", "SSRANGE", "STD", "SUPPRESS", "SYSEIB", "SZ", "TERM", "TERMINAL", 
      "TEST", "THREAD", "TITLE", "TRIG", "TRUNC", "UE", "UPPER", "VBREF", 
      "WD", "WORD", "XMLPARSE", "XMLSS", "XOPTS", "XP", "XREF", "YEARWINDOW", 
      "YW", "ZWB", "C_CHAR", "D_CHAR", "E_CHAR", "F_CHAR", "H_CHAR", "I_CHAR", 
      "M_CHAR", "N_CHAR", "Q_CHAR", "S_CHAR", "U_CHAR", "W_CHAR", "X_CHAR", 
      "COMMENTTAG", "COMMACHAR", "DOT", "DOUBLEEQUALCHAR", "NONNUMERICLITERAL", 
      "NUMERICLITERAL", "IDENTIFIER", "FILENAME", "NEWLINE", "COMMENTLINE", 
      "WS", "TEXT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,292,678,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,73,8,
  	0,10,0,12,0,76,9,0,1,0,1,0,1,1,1,1,3,1,82,8,1,1,1,1,1,4,1,86,8,1,11,1,
  	12,1,87,1,2,1,2,1,2,1,2,3,2,94,8,2,1,2,5,2,97,8,2,10,2,12,2,100,9,2,1,
  	2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,3,3,124,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,149,8,3,1,3,3,3,
  	152,8,3,1,3,3,3,155,8,3,1,3,3,3,158,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,178,8,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,186,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	3,3,218,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,226,8,3,1,3,1,3,1,3,1,3,3,3,232,
  	8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,249,
  	8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,322,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,3,3,337,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,3,3,359,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,
  	3,369,8,3,1,3,1,3,1,3,1,3,3,3,375,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,3,3,391,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,400,
  	8,3,1,3,3,3,403,8,3,1,3,3,3,406,8,3,1,3,3,3,409,8,3,1,3,3,3,412,8,3,1,
  	3,3,3,415,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,3,3,435,8,3,1,3,3,3,438,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,
  	3,446,8,3,1,4,1,4,1,4,1,4,1,4,3,4,453,8,4,1,5,1,5,1,5,1,5,1,5,3,5,460,
  	8,5,1,6,1,6,1,6,1,6,1,6,3,6,467,8,6,1,7,1,7,1,7,5,7,472,8,7,10,7,12,7,
  	475,9,7,1,7,1,7,1,7,1,7,3,7,481,8,7,5,7,483,8,7,10,7,12,7,486,9,7,1,7,
  	5,7,489,8,7,10,7,12,7,492,9,7,1,7,1,7,1,8,1,8,1,8,3,8,499,8,8,1,8,1,8,
  	3,8,503,8,8,1,9,1,9,3,9,507,8,9,1,10,1,10,5,10,511,8,10,10,10,12,10,514,
  	9,10,1,10,1,10,4,10,518,8,10,11,10,12,10,519,1,10,5,10,523,8,10,10,10,
  	12,10,526,9,10,1,11,1,11,1,11,5,11,531,8,11,10,11,12,11,534,9,11,1,11,
  	3,11,537,8,11,1,12,1,12,5,12,541,8,12,10,12,12,12,544,9,12,1,12,4,12,
  	547,8,12,11,12,12,12,548,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,5,14,
  	559,8,14,10,14,12,14,562,9,14,1,14,1,14,5,14,566,8,14,10,14,12,14,569,
  	9,14,1,14,1,14,5,14,573,8,14,10,14,12,14,576,9,14,1,14,3,14,579,8,14,
  	1,14,5,14,582,8,14,10,14,12,14,585,9,14,1,14,3,14,588,8,14,1,15,1,15,
  	5,15,592,8,15,10,15,12,15,595,9,15,1,15,1,15,3,15,599,8,15,1,16,1,16,
  	5,16,603,8,16,10,16,12,16,606,9,16,1,16,1,16,3,16,610,8,16,1,17,1,17,
  	1,17,1,17,3,17,616,8,17,1,18,1,18,1,18,1,18,3,18,622,8,18,1,19,1,19,3,
  	19,626,8,19,1,20,1,20,3,20,630,8,20,1,21,1,21,1,21,3,21,635,8,21,1,22,
  	1,22,3,22,639,8,22,1,22,1,22,1,23,1,23,4,23,645,8,23,11,23,12,23,646,
  	1,24,1,24,1,24,1,24,4,24,653,8,24,11,24,12,24,654,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,4,25,664,8,25,11,25,12,25,665,1,26,1,26,3,26,670,8,26,
  	1,27,1,27,1,28,1,28,1,29,1,29,1,29,0,0,30,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,0,83,2,0,16,
  	16,216,216,1,0,7,8,4,0,23,23,59,59,268,268,270,270,1,0,13,14,2,0,22,22,
  	26,26,2,0,24,24,268,268,1,0,30,31,2,0,33,33,41,41,2,0,62,62,139,139,2,
  	0,184,184,253,253,2,0,37,37,269,269,2,0,38,38,42,42,1,0,43,44,1,0,45,
  	46,1,0,57,58,2,0,60,60,64,64,2,0,62,62,271,271,3,0,270,270,273,273,277,
  	279,1,0,272,274,6,0,35,35,101,101,241,241,269,269,275,275,277,277,2,0,
  	4,4,80,80,1,0,74,75,4,0,29,29,50,51,71,73,255,255,2,0,76,76,82,82,1,0,
  	93,94,4,0,24,24,108,108,112,112,268,268,2,0,3,3,105,105,3,0,29,29,50,
  	50,73,73,2,0,108,108,112,112,3,0,270,270,277,277,279,279,1,0,114,115,
  	2,0,117,117,126,126,2,0,116,116,121,121,1,0,124,125,2,0,122,122,127,127,
  	1,0,128,129,1,0,134,135,2,0,137,137,142,142,2,0,136,136,139,139,1,0,150,
  	151,1,0,153,154,1,0,155,156,1,0,157,158,1,0,160,161,2,0,170,170,179,179,
  	2,0,167,167,171,171,1,0,174,175,1,0,176,177,1,0,180,181,1,0,186,187,2,
  	0,191,191,193,193,2,0,34,34,98,99,1,0,188,189,1,0,194,195,3,0,95,95,164,
  	164,212,212,1,0,197,198,1,0,200,201,2,0,206,206,208,208,2,0,65,65,244,
  	244,1,0,210,211,1,0,214,215,8,0,19,19,23,23,85,87,89,89,96,96,256,256,
  	274,274,278,278,2,0,218,218,276,276,1,0,226,227,2,0,229,229,247,247,2,
  	0,230,230,277,277,1,0,235,236,1,0,242,243,1,0,248,249,2,0,68,68,144,144,
  	2,0,168,169,224,225,2,0,49,49,131,131,3,0,11,11,206,206,244,244,1,0,258,
  	259,2,0,260,260,263,263,4,0,23,23,261,261,268,268,280,280,2,0,264,264,
  	280,280,2,0,65,65,228,228,1,0,265,266,2,0,69,69,199,199,1,0,238,240,1,
  	0,285,286,16,0,1,17,19,24,26,51,53,54,56,60,62,76,78,87,89,185,187,219,
  	221,222,224,236,241,244,246,258,260,262,264,280,282,282,891,0,74,1,0,
  	0,0,2,79,1,0,0,0,4,89,1,0,0,0,6,445,1,0,0,0,8,447,1,0,0,0,10,454,1,0,
  	0,0,12,461,1,0,0,0,14,468,1,0,0,0,16,498,1,0,0,0,18,506,1,0,0,0,20,508,
  	1,0,0,0,22,527,1,0,0,0,24,538,1,0,0,0,26,552,1,0,0,0,28,556,1,0,0,0,30,
  	589,1,0,0,0,32,600,1,0,0,0,34,615,1,0,0,0,36,621,1,0,0,0,38,623,1,0,0,
  	0,40,627,1,0,0,0,42,631,1,0,0,0,44,636,1,0,0,0,46,644,1,0,0,0,48,652,
  	1,0,0,0,50,663,1,0,0,0,52,669,1,0,0,0,54,671,1,0,0,0,56,673,1,0,0,0,58,
  	675,1,0,0,0,60,73,3,2,1,0,61,73,3,14,7,0,62,73,3,8,4,0,63,73,3,10,5,0,
  	64,73,3,12,6,0,65,73,3,26,13,0,66,73,3,22,11,0,67,73,3,38,19,0,68,73,
  	3,40,20,0,69,73,3,42,21,0,70,73,3,50,25,0,71,73,5,289,0,0,72,60,1,0,0,
  	0,72,61,1,0,0,0,72,62,1,0,0,0,72,63,1,0,0,0,72,64,1,0,0,0,72,65,1,0,0,
  	0,72,66,1,0,0,0,72,67,1,0,0,0,72,68,1,0,0,0,72,69,1,0,0,0,72,70,1,0,0,
  	0,72,71,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,77,1,0,0,
  	0,76,74,1,0,0,0,77,78,5,0,0,1,78,1,1,0,0,0,79,85,7,0,0,0,80,82,5,282,
  	0,0,81,80,1,0,0,0,81,82,1,0,0,0,82,83,1,0,0,0,83,86,3,6,3,0,84,86,3,4,
  	2,0,85,81,1,0,0,0,85,84,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,0,87,88,1,0,
  	0,0,88,3,1,0,0,0,89,90,5,262,0,0,90,91,5,88,0,0,91,98,3,6,3,0,92,94,5,
  	282,0,0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,97,3,6,3,0,96,93,
  	1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,101,1,0,0,0,100,
  	98,1,0,0,0,101,102,5,223,0,0,102,5,1,0,0,0,103,446,5,1,0,0,104,446,5,
  	2,0,0,105,446,5,6,0,0,106,107,7,1,0,0,107,108,5,88,0,0,108,109,7,2,0,
  	0,109,446,5,223,0,0,110,446,5,10,0,0,111,446,5,12,0,0,112,113,7,3,0,0,
  	113,114,5,88,0,0,114,115,3,54,27,0,115,116,5,223,0,0,116,446,1,0,0,0,
  	117,446,5,17,0,0,118,123,5,18,0,0,119,120,5,88,0,0,120,121,3,54,27,0,
  	121,122,5,223,0,0,122,124,1,0,0,0,123,119,1,0,0,0,123,124,1,0,0,0,124,
  	446,1,0,0,0,125,446,5,20,0,0,126,446,5,21,0,0,127,128,7,4,0,0,128,129,
  	5,88,0,0,129,130,3,54,27,0,130,131,5,223,0,0,131,446,1,0,0,0,132,446,
  	7,5,0,0,133,446,5,27,0,0,134,446,5,28,0,0,135,136,7,6,0,0,136,137,5,88,
  	0,0,137,138,3,54,27,0,138,139,5,223,0,0,139,446,1,0,0,0,140,141,5,32,
  	0,0,141,142,5,88,0,0,142,143,3,54,27,0,143,144,5,223,0,0,144,446,1,0,
  	0,0,145,157,7,7,0,0,146,148,5,88,0,0,147,149,7,8,0,0,148,147,1,0,0,0,
  	148,149,1,0,0,0,149,151,1,0,0,0,150,152,5,282,0,0,151,150,1,0,0,0,151,
  	152,1,0,0,0,152,154,1,0,0,0,153,155,7,9,0,0,154,153,1,0,0,0,154,155,1,
  	0,0,0,155,156,1,0,0,0,156,158,5,223,0,0,157,146,1,0,0,0,157,158,1,0,0,
  	0,158,446,1,0,0,0,159,446,5,34,0,0,160,446,7,10,0,0,161,446,5,36,0,0,
  	162,446,7,11,0,0,163,446,5,40,0,0,164,446,7,12,0,0,165,446,7,13,0,0,166,
  	446,5,47,0,0,167,446,5,53,0,0,168,446,5,56,0,0,169,446,7,14,0,0,170,446,
  	7,15,0,0,171,446,5,61,0,0,172,173,7,16,0,0,173,174,5,88,0,0,174,177,7,
  	17,0,0,175,176,5,282,0,0,176,178,7,17,0,0,177,175,1,0,0,0,177,178,1,0,
  	0,0,178,179,1,0,0,0,179,446,5,223,0,0,180,181,5,63,0,0,181,182,5,88,0,
  	0,182,185,7,18,0,0,183,184,5,282,0,0,184,186,7,19,0,0,185,183,1,0,0,0,
  	185,186,1,0,0,0,186,187,1,0,0,0,187,446,5,223,0,0,188,446,5,66,0,0,189,
  	446,5,67,0,0,190,191,5,70,0,0,191,192,5,88,0,0,192,193,7,20,0,0,193,446,
  	5,223,0,0,194,195,7,21,0,0,195,196,5,88,0,0,196,197,7,22,0,0,197,446,
  	5,223,0,0,198,446,5,77,0,0,199,446,5,78,0,0,200,446,5,79,0,0,201,446,
  	5,81,0,0,202,203,7,23,0,0,203,204,5,88,0,0,204,205,3,54,27,0,205,206,
  	5,223,0,0,206,446,1,0,0,0,207,446,5,83,0,0,208,446,5,84,0,0,209,446,5,
  	90,0,0,210,211,5,91,0,0,211,212,5,88,0,0,212,213,3,54,27,0,213,214,5,
  	282,0,0,214,217,3,54,27,0,215,216,5,282,0,0,216,218,3,54,27,0,217,215,
  	1,0,0,0,217,218,1,0,0,0,218,219,1,0,0,0,219,220,5,223,0,0,220,446,1,0,
  	0,0,221,225,7,24,0,0,222,223,5,88,0,0,223,224,7,25,0,0,224,226,5,223,
  	0,0,225,222,1,0,0,0,225,226,1,0,0,0,226,446,1,0,0,0,227,231,5,97,0,0,
  	228,229,5,88,0,0,229,230,7,26,0,0,230,232,5,223,0,0,231,228,1,0,0,0,231,
  	232,1,0,0,0,232,446,1,0,0,0,233,234,5,100,0,0,234,235,5,88,0,0,235,236,
  	7,27,0,0,236,446,5,223,0,0,237,446,5,103,0,0,238,446,5,104,0,0,239,446,
  	5,106,0,0,240,446,5,107,0,0,241,446,5,109,0,0,242,446,5,110,0,0,243,446,
  	5,111,0,0,244,248,7,28,0,0,245,246,5,88,0,0,246,247,7,29,0,0,247,249,
  	5,223,0,0,248,245,1,0,0,0,248,249,1,0,0,0,249,446,1,0,0,0,250,446,5,113,
  	0,0,251,446,7,30,0,0,252,446,7,31,0,0,253,446,5,118,0,0,254,446,5,120,
  	0,0,255,446,7,32,0,0,256,446,5,123,0,0,257,446,5,119,0,0,258,446,7,33,
  	0,0,259,446,7,34,0,0,260,446,7,35,0,0,261,446,5,130,0,0,262,446,5,132,
  	0,0,263,446,5,133,0,0,264,446,7,36,0,0,265,446,7,37,0,0,266,446,5,138,
  	0,0,267,446,7,38,0,0,268,446,5,140,0,0,269,446,5,141,0,0,270,446,5,143,
  	0,0,271,446,5,145,0,0,272,446,5,146,0,0,273,446,5,147,0,0,274,446,5,148,
  	0,0,275,446,5,149,0,0,276,446,7,39,0,0,277,446,5,152,0,0,278,446,7,40,
  	0,0,279,446,7,41,0,0,280,446,7,42,0,0,281,446,5,159,0,0,282,446,7,43,
  	0,0,283,446,5,162,0,0,284,446,5,163,0,0,285,446,5,165,0,0,286,446,5,166,
  	0,0,287,446,7,44,0,0,288,446,7,45,0,0,289,446,5,172,0,0,290,446,5,173,
  	0,0,291,446,7,46,0,0,292,446,7,47,0,0,293,446,5,178,0,0,294,446,7,48,
  	0,0,295,446,5,182,0,0,296,446,5,183,0,0,297,446,5,185,0,0,298,446,7,49,
  	0,0,299,446,5,192,0,0,300,301,7,50,0,0,301,302,5,88,0,0,302,303,7,51,
  	0,0,303,446,5,223,0,0,304,446,5,185,0,0,305,446,7,52,0,0,306,446,5,190,
  	0,0,307,446,7,53,0,0,308,309,5,196,0,0,309,310,5,88,0,0,310,311,7,54,
  	0,0,311,446,5,223,0,0,312,446,7,55,0,0,313,446,7,56,0,0,314,315,5,204,
  	0,0,315,316,5,88,0,0,316,317,3,54,27,0,317,318,5,282,0,0,318,321,3,54,
  	27,0,319,320,5,282,0,0,320,322,3,54,27,0,321,319,1,0,0,0,321,322,1,0,
  	0,0,322,323,1,0,0,0,323,324,5,223,0,0,324,446,1,0,0,0,325,326,5,205,0,
  	0,326,327,5,88,0,0,327,328,3,54,27,0,328,329,5,282,0,0,329,330,3,54,27,
  	0,330,331,5,223,0,0,331,446,1,0,0,0,332,336,7,57,0,0,333,334,5,88,0,0,
  	334,335,7,58,0,0,335,337,5,223,0,0,336,333,1,0,0,0,336,337,1,0,0,0,337,
  	446,1,0,0,0,338,446,5,207,0,0,339,446,5,209,0,0,340,446,5,203,0,0,341,
  	342,7,59,0,0,342,343,5,88,0,0,343,344,3,52,26,0,344,345,5,223,0,0,345,
  	446,1,0,0,0,346,347,7,60,0,0,347,348,5,88,0,0,348,349,7,61,0,0,349,446,
  	5,223,0,0,350,446,5,217,0,0,351,446,7,62,0,0,352,446,5,219,0,0,353,354,
  	5,222,0,0,354,358,5,88,0,0,355,359,5,5,0,0,356,359,5,9,0,0,357,359,3,
  	54,27,0,358,355,1,0,0,0,358,356,1,0,0,0,358,357,1,0,0,0,359,360,1,0,0,
  	0,360,446,5,223,0,0,361,368,7,63,0,0,362,363,5,88,0,0,363,364,3,54,27,
  	0,364,365,5,282,0,0,365,366,3,54,27,0,366,367,5,223,0,0,367,369,1,0,0,
  	0,368,362,1,0,0,0,368,369,1,0,0,0,369,446,1,0,0,0,370,371,7,64,0,0,371,
  	374,5,88,0,0,372,375,5,92,0,0,373,375,3,54,27,0,374,372,1,0,0,0,374,373,
  	1,0,0,0,375,376,1,0,0,0,376,446,5,223,0,0,377,446,7,65,0,0,378,446,5,
  	231,0,0,379,380,5,232,0,0,380,381,5,88,0,0,381,382,3,54,27,0,382,383,
  	5,223,0,0,383,446,1,0,0,0,384,446,5,233,0,0,385,390,5,234,0,0,386,387,
  	5,88,0,0,387,388,3,54,27,0,388,389,5,223,0,0,389,391,1,0,0,0,390,386,
  	1,0,0,0,390,391,1,0,0,0,391,446,1,0,0,0,392,446,7,66,0,0,393,446,7,67,
  	0,0,394,446,5,246,0,0,395,446,7,68,0,0,396,414,5,250,0,0,397,399,5,88,
  	0,0,398,400,7,69,0,0,399,398,1,0,0,0,399,400,1,0,0,0,400,402,1,0,0,0,
  	401,403,5,282,0,0,402,401,1,0,0,0,402,403,1,0,0,0,403,405,1,0,0,0,404,
  	406,7,70,0,0,405,404,1,0,0,0,405,406,1,0,0,0,406,408,1,0,0,0,407,409,
  	5,282,0,0,408,407,1,0,0,0,408,409,1,0,0,0,409,411,1,0,0,0,410,412,7,71,
  	0,0,411,410,1,0,0,0,411,412,1,0,0,0,412,413,1,0,0,0,413,415,5,223,0,0,
  	414,397,1,0,0,0,414,415,1,0,0,0,415,446,1,0,0,0,416,446,5,251,0,0,417,
  	418,5,254,0,0,418,419,5,88,0,0,419,420,7,72,0,0,420,446,5,223,0,0,421,
  	446,5,257,0,0,422,423,7,73,0,0,423,424,5,88,0,0,424,425,3,52,26,0,425,
  	426,5,223,0,0,426,446,1,0,0,0,427,428,7,74,0,0,428,429,5,88,0,0,429,430,
  	7,75,0,0,430,446,5,223,0,0,431,437,7,76,0,0,432,434,5,88,0,0,433,435,
  	7,77,0,0,434,433,1,0,0,0,434,435,1,0,0,0,435,436,1,0,0,0,436,438,5,223,
  	0,0,437,432,1,0,0,0,437,438,1,0,0,0,438,446,1,0,0,0,439,440,7,78,0,0,
  	440,441,5,88,0,0,441,442,3,54,27,0,442,443,5,223,0,0,443,446,1,0,0,0,
  	444,446,5,267,0,0,445,103,1,0,0,0,445,104,1,0,0,0,445,105,1,0,0,0,445,
  	106,1,0,0,0,445,110,1,0,0,0,445,111,1,0,0,0,445,112,1,0,0,0,445,117,1,
  	0,0,0,445,118,1,0,0,0,445,125,1,0,0,0,445,126,1,0,0,0,445,127,1,0,0,0,
  	445,132,1,0,0,0,445,133,1,0,0,0,445,134,1,0,0,0,445,135,1,0,0,0,445,140,
  	1,0,0,0,445,145,1,0,0,0,445,159,1,0,0,0,445,160,1,0,0,0,445,161,1,0,0,
  	0,445,162,1,0,0,0,445,163,1,0,0,0,445,164,1,0,0,0,445,165,1,0,0,0,445,
  	166,1,0,0,0,445,167,1,0,0,0,445,168,1,0,0,0,445,169,1,0,0,0,445,170,1,
  	0,0,0,445,171,1,0,0,0,445,172,1,0,0,0,445,180,1,0,0,0,445,188,1,0,0,0,
  	445,189,1,0,0,0,445,190,1,0,0,0,445,194,1,0,0,0,445,198,1,0,0,0,445,199,
  	1,0,0,0,445,200,1,0,0,0,445,201,1,0,0,0,445,202,1,0,0,0,445,207,1,0,0,
  	0,445,208,1,0,0,0,445,209,1,0,0,0,445,210,1,0,0,0,445,221,1,0,0,0,445,
  	227,1,0,0,0,445,233,1,0,0,0,445,237,1,0,0,0,445,238,1,0,0,0,445,239,1,
  	0,0,0,445,240,1,0,0,0,445,241,1,0,0,0,445,242,1,0,0,0,445,243,1,0,0,0,
  	445,244,1,0,0,0,445,250,1,0,0,0,445,251,1,0,0,0,445,252,1,0,0,0,445,253,
  	1,0,0,0,445,254,1,0,0,0,445,255,1,0,0,0,445,256,1,0,0,0,445,257,1,0,0,
  	0,445,258,1,0,0,0,445,259,1,0,0,0,445,260,1,0,0,0,445,261,1,0,0,0,445,
  	262,1,0,0,0,445,263,1,0,0,0,445,264,1,0,0,0,445,265,1,0,0,0,445,266,1,
  	0,0,0,445,267,1,0,0,0,445,268,1,0,0,0,445,269,1,0,0,0,445,270,1,0,0,0,
  	445,271,1,0,0,0,445,272,1,0,0,0,445,273,1,0,0,0,445,274,1,0,0,0,445,275,
  	1,0,0,0,445,276,1,0,0,0,445,277,1,0,0,0,445,278,1,0,0,0,445,279,1,0,0,
  	0,445,280,1,0,0,0,445,281,1,0,0,0,445,282,1,0,0,0,445,283,1,0,0,0,445,
  	284,1,0,0,0,445,285,1,0,0,0,445,286,1,0,0,0,445,287,1,0,0,0,445,288,1,
  	0,0,0,445,289,1,0,0,0,445,290,1,0,0,0,445,291,1,0,0,0,445,292,1,0,0,0,
  	445,293,1,0,0,0,445,294,1,0,0,0,445,295,1,0,0,0,445,296,1,0,0,0,445,297,
  	1,0,0,0,445,298,1,0,0,0,445,299,1,0,0,0,445,300,1,0,0,0,445,304,1,0,0,
  	0,445,305,1,0,0,0,445,306,1,0,0,0,445,307,1,0,0,0,445,308,1,0,0,0,445,
  	312,1,0,0,0,445,313,1,0,0,0,445,314,1,0,0,0,445,325,1,0,0,0,445,332,1,
  	0,0,0,445,338,1,0,0,0,445,339,1,0,0,0,445,340,1,0,0,0,445,341,1,0,0,0,
  	445,346,1,0,0,0,445,350,1,0,0,0,445,351,1,0,0,0,445,352,1,0,0,0,445,353,
  	1,0,0,0,445,361,1,0,0,0,445,370,1,0,0,0,445,377,1,0,0,0,445,378,1,0,0,
  	0,445,379,1,0,0,0,445,384,1,0,0,0,445,385,1,0,0,0,445,392,1,0,0,0,445,
  	393,1,0,0,0,445,394,1,0,0,0,445,395,1,0,0,0,445,396,1,0,0,0,445,416,1,
  	0,0,0,445,417,1,0,0,0,445,421,1,0,0,0,445,422,1,0,0,0,445,427,1,0,0,0,
  	445,431,1,0,0,0,445,439,1,0,0,0,445,444,1,0,0,0,446,7,1,0,0,0,447,448,
  	5,55,0,0,448,449,5,18,0,0,449,450,3,46,23,0,450,452,5,52,0,0,451,453,
  	5,283,0,0,452,451,1,0,0,0,452,453,1,0,0,0,453,9,1,0,0,0,454,455,5,55,
  	0,0,455,456,5,234,0,0,456,457,3,48,24,0,457,459,5,52,0,0,458,460,5,283,
  	0,0,459,458,1,0,0,0,459,460,1,0,0,0,460,11,1,0,0,0,461,462,5,55,0,0,462,
  	463,5,237,0,0,463,464,3,46,23,0,464,466,5,52,0,0,465,467,5,283,0,0,466,
  	465,1,0,0,0,466,467,1,0,0,0,467,13,1,0,0,0,468,469,5,25,0,0,469,484,3,
  	16,8,0,470,472,5,289,0,0,471,470,1,0,0,0,472,475,1,0,0,0,473,471,1,0,
  	0,0,473,474,1,0,0,0,474,480,1,0,0,0,475,473,1,0,0,0,476,481,3,30,15,0,
  	477,481,3,32,16,0,478,481,3,20,10,0,479,481,5,245,0,0,480,476,1,0,0,0,
  	480,477,1,0,0,0,480,478,1,0,0,0,480,479,1,0,0,0,481,483,1,0,0,0,482,473,
  	1,0,0,0,483,486,1,0,0,0,484,482,1,0,0,0,484,485,1,0,0,0,485,490,1,0,0,
  	0,486,484,1,0,0,0,487,489,5,289,0,0,488,487,1,0,0,0,489,492,1,0,0,0,490,
  	488,1,0,0,0,490,491,1,0,0,0,491,493,1,0,0,0,492,490,1,0,0,0,493,494,5,
  	283,0,0,494,15,1,0,0,0,495,499,3,54,27,0,496,499,3,52,26,0,497,499,3,
  	56,28,0,498,495,1,0,0,0,498,496,1,0,0,0,498,497,1,0,0,0,499,502,1,0,0,
  	0,500,501,7,79,0,0,501,503,3,18,9,0,502,500,1,0,0,0,502,503,1,0,0,0,503,
  	17,1,0,0,0,504,507,3,54,27,0,505,507,3,52,26,0,506,504,1,0,0,0,506,505,
  	1,0,0,0,507,19,1,0,0,0,508,512,5,221,0,0,509,511,5,289,0,0,510,509,1,
  	0,0,0,511,514,1,0,0,0,512,510,1,0,0,0,512,513,1,0,0,0,513,515,1,0,0,0,
  	514,512,1,0,0,0,515,524,3,28,14,0,516,518,5,289,0,0,517,516,1,0,0,0,518,
  	519,1,0,0,0,519,517,1,0,0,0,519,520,1,0,0,0,520,521,1,0,0,0,521,523,3,
  	28,14,0,522,517,1,0,0,0,523,526,1,0,0,0,524,522,1,0,0,0,524,525,1,0,0,
  	0,525,21,1,0,0,0,526,524,1,0,0,0,527,532,3,24,12,0,528,531,3,14,7,0,529,
  	531,3,46,23,0,530,528,1,0,0,0,530,529,1,0,0,0,531,534,1,0,0,0,532,530,
  	1,0,0,0,532,533,1,0,0,0,533,536,1,0,0,0,534,532,1,0,0,0,535,537,3,26,
  	13,0,536,535,1,0,0,0,536,537,1,0,0,0,537,23,1,0,0,0,538,546,5,220,0,0,
  	539,541,5,289,0,0,540,539,1,0,0,0,541,544,1,0,0,0,542,540,1,0,0,0,542,
  	543,1,0,0,0,543,545,1,0,0,0,544,542,1,0,0,0,545,547,3,28,14,0,546,542,
  	1,0,0,0,547,548,1,0,0,0,548,546,1,0,0,0,548,549,1,0,0,0,549,550,1,0,0,
  	0,550,551,5,283,0,0,551,25,1,0,0,0,552,553,5,220,0,0,553,554,5,200,0,
  	0,554,555,5,283,0,0,555,27,1,0,0,0,556,560,3,34,17,0,557,559,5,289,0,
  	0,558,557,1,0,0,0,559,562,1,0,0,0,560,558,1,0,0,0,560,561,1,0,0,0,561,
  	563,1,0,0,0,562,560,1,0,0,0,563,567,5,15,0,0,564,566,5,289,0,0,565,564,
  	1,0,0,0,566,569,1,0,0,0,567,565,1,0,0,0,567,568,1,0,0,0,568,570,1,0,0,
  	0,569,567,1,0,0,0,570,578,3,36,18,0,571,573,5,289,0,0,572,571,1,0,0,0,
  	573,576,1,0,0,0,574,572,1,0,0,0,574,575,1,0,0,0,575,577,1,0,0,0,576,574,
  	1,0,0,0,577,579,3,30,15,0,578,574,1,0,0,0,578,579,1,0,0,0,579,587,1,0,
  	0,0,580,582,5,289,0,0,581,580,1,0,0,0,582,585,1,0,0,0,583,581,1,0,0,0,
  	583,584,1,0,0,0,584,586,1,0,0,0,585,583,1,0,0,0,586,588,3,32,16,0,587,
  	583,1,0,0,0,587,588,1,0,0,0,588,29,1,0,0,0,589,593,7,79,0,0,590,592,5,
  	289,0,0,591,590,1,0,0,0,592,595,1,0,0,0,593,591,1,0,0,0,593,594,1,0,0,
  	0,594,598,1,0,0,0,595,593,1,0,0,0,596,599,3,54,27,0,597,599,3,52,26,0,
  	598,596,1,0,0,0,598,597,1,0,0,0,599,31,1,0,0,0,600,604,5,202,0,0,601,
  	603,5,289,0,0,602,601,1,0,0,0,603,606,1,0,0,0,604,602,1,0,0,0,604,605,
  	1,0,0,0,605,609,1,0,0,0,606,604,1,0,0,0,607,610,3,54,27,0,608,610,3,52,
  	26,0,609,607,1,0,0,0,609,608,1,0,0,0,610,33,1,0,0,0,611,616,3,54,27,0,
  	612,616,3,52,26,0,613,616,3,44,22,0,614,616,3,50,25,0,615,611,1,0,0,0,
  	615,612,1,0,0,0,615,613,1,0,0,0,615,614,1,0,0,0,616,35,1,0,0,0,617,622,
  	3,54,27,0,618,622,3,52,26,0,619,622,3,44,22,0,620,622,3,50,25,0,621,617,
  	1,0,0,0,621,618,1,0,0,0,621,619,1,0,0,0,621,620,1,0,0,0,622,37,1,0,0,
  	0,623,625,5,48,0,0,624,626,5,283,0,0,625,624,1,0,0,0,625,626,1,0,0,0,
  	626,39,1,0,0,0,627,629,7,80,0,0,628,630,5,283,0,0,629,628,1,0,0,0,629,
  	630,1,0,0,0,630,41,1,0,0,0,631,632,5,252,0,0,632,634,3,54,27,0,633,635,
  	5,283,0,0,634,633,1,0,0,0,634,635,1,0,0,0,635,43,1,0,0,0,636,638,5,284,
  	0,0,637,639,3,46,23,0,638,637,1,0,0,0,638,639,1,0,0,0,639,640,1,0,0,0,
  	640,641,5,284,0,0,641,45,1,0,0,0,642,645,3,50,25,0,643,645,5,289,0,0,
  	644,642,1,0,0,0,644,643,1,0,0,0,645,646,1,0,0,0,646,644,1,0,0,0,646,647,
  	1,0,0,0,647,47,1,0,0,0,648,653,3,50,25,0,649,653,5,25,0,0,650,653,5,220,
  	0,0,651,653,5,289,0,0,652,648,1,0,0,0,652,649,1,0,0,0,652,650,1,0,0,0,
  	652,651,1,0,0,0,653,654,1,0,0,0,654,652,1,0,0,0,654,655,1,0,0,0,655,49,
  	1,0,0,0,656,664,3,52,26,0,657,664,3,54,27,0,658,664,3,56,28,0,659,664,
  	5,292,0,0,660,664,5,283,0,0,661,664,5,88,0,0,662,664,5,223,0,0,663,656,
  	1,0,0,0,663,657,1,0,0,0,663,658,1,0,0,0,663,659,1,0,0,0,663,660,1,0,0,
  	0,663,661,1,0,0,0,663,662,1,0,0,0,664,665,1,0,0,0,665,663,1,0,0,0,665,
  	666,1,0,0,0,666,51,1,0,0,0,667,670,5,287,0,0,668,670,3,58,29,0,669,667,
  	1,0,0,0,669,668,1,0,0,0,670,53,1,0,0,0,671,672,7,81,0,0,672,55,1,0,0,
  	0,673,674,5,288,0,0,674,57,1,0,0,0,675,676,7,82,0,0,676,59,1,0,0,0,74,
  	72,74,81,85,87,93,98,123,148,151,154,157,177,185,217,225,231,248,321,
  	336,358,368,374,390,399,402,405,408,411,414,434,437,445,452,459,466,473,
  	480,484,490,498,502,506,512,519,524,530,532,536,542,548,560,567,574,578,
  	583,587,593,598,604,609,615,621,625,629,634,638,644,646,652,654,663,665,
  	669
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cobol85preprocessorParserStaticData = staticData.release();
}

}

Cobol85PreprocessorParser::Cobol85PreprocessorParser(TokenStream *input) : Cobol85PreprocessorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Cobol85PreprocessorParser::Cobol85PreprocessorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Cobol85PreprocessorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cobol85preprocessorParserStaticData->atn, cobol85preprocessorParserStaticData->decisionToDFA, cobol85preprocessorParserStaticData->sharedContextCache, options);
}

Cobol85PreprocessorParser::~Cobol85PreprocessorParser() {
  delete _interpreter;
}

const atn::ATN& Cobol85PreprocessorParser::getATN() const {
  return *cobol85preprocessorParserStaticData->atn;
}

std::string Cobol85PreprocessorParser::getGrammarFileName() const {
  return "Cobol85Preprocessor.g4";
}

const std::vector<std::string>& Cobol85PreprocessorParser::getRuleNames() const {
  return cobol85preprocessorParserStaticData->ruleNames;
}

const dfa::Vocabulary& Cobol85PreprocessorParser::getVocabulary() const {
  return cobol85preprocessorParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Cobol85PreprocessorParser::getSerializedATN() const {
  return cobol85preprocessorParserStaticData->serializedATN;
}


//----------------- StartRuleContext ------------------------------------------------------------------

Cobol85PreprocessorParser::StartRuleContext::StartRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::StartRuleContext::EOF() {
  return getToken(Cobol85PreprocessorParser::EOF, 0);
}

std::vector<Cobol85PreprocessorParser::CompilerOptionsContext *> Cobol85PreprocessorParser::StartRuleContext::compilerOptions() {
  return getRuleContexts<Cobol85PreprocessorParser::CompilerOptionsContext>();
}

Cobol85PreprocessorParser::CompilerOptionsContext* Cobol85PreprocessorParser::StartRuleContext::compilerOptions(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CompilerOptionsContext>(i);
}

std::vector<Cobol85PreprocessorParser::CopyStatementContext *> Cobol85PreprocessorParser::StartRuleContext::copyStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::CopyStatementContext>();
}

Cobol85PreprocessorParser::CopyStatementContext* Cobol85PreprocessorParser::StartRuleContext::copyStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CopyStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::ExecCicsStatementContext *> Cobol85PreprocessorParser::StartRuleContext::execCicsStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::ExecCicsStatementContext>();
}

Cobol85PreprocessorParser::ExecCicsStatementContext* Cobol85PreprocessorParser::StartRuleContext::execCicsStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ExecCicsStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::ExecSqlStatementContext *> Cobol85PreprocessorParser::StartRuleContext::execSqlStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::ExecSqlStatementContext>();
}

Cobol85PreprocessorParser::ExecSqlStatementContext* Cobol85PreprocessorParser::StartRuleContext::execSqlStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ExecSqlStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::ExecSqlImsStatementContext *> Cobol85PreprocessorParser::StartRuleContext::execSqlImsStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::ExecSqlImsStatementContext>();
}

Cobol85PreprocessorParser::ExecSqlImsStatementContext* Cobol85PreprocessorParser::StartRuleContext::execSqlImsStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ExecSqlImsStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::ReplaceOffStatementContext *> Cobol85PreprocessorParser::StartRuleContext::replaceOffStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::ReplaceOffStatementContext>();
}

Cobol85PreprocessorParser::ReplaceOffStatementContext* Cobol85PreprocessorParser::StartRuleContext::replaceOffStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceOffStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::ReplaceAreaContext *> Cobol85PreprocessorParser::StartRuleContext::replaceArea() {
  return getRuleContexts<Cobol85PreprocessorParser::ReplaceAreaContext>();
}

Cobol85PreprocessorParser::ReplaceAreaContext* Cobol85PreprocessorParser::StartRuleContext::replaceArea(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceAreaContext>(i);
}

std::vector<Cobol85PreprocessorParser::EjectStatementContext *> Cobol85PreprocessorParser::StartRuleContext::ejectStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::EjectStatementContext>();
}

Cobol85PreprocessorParser::EjectStatementContext* Cobol85PreprocessorParser::StartRuleContext::ejectStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::EjectStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::SkipStatementContext *> Cobol85PreprocessorParser::StartRuleContext::skipStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::SkipStatementContext>();
}

Cobol85PreprocessorParser::SkipStatementContext* Cobol85PreprocessorParser::StartRuleContext::skipStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::SkipStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::TitleStatementContext *> Cobol85PreprocessorParser::StartRuleContext::titleStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::TitleStatementContext>();
}

Cobol85PreprocessorParser::TitleStatementContext* Cobol85PreprocessorParser::StartRuleContext::titleStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::TitleStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::CharDataLineContext *> Cobol85PreprocessorParser::StartRuleContext::charDataLine() {
  return getRuleContexts<Cobol85PreprocessorParser::CharDataLineContext>();
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::StartRuleContext::charDataLine(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CharDataLineContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::StartRuleContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::StartRuleContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::StartRuleContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleStartRule;
}

void Cobol85PreprocessorParser::StartRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStartRule(this);
}

void Cobol85PreprocessorParser::StartRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStartRule(this);
}

Cobol85PreprocessorParser::StartRuleContext* Cobol85PreprocessorParser::startRule() {
  StartRuleContext *_localctx = _tracker.createInstance<StartRuleContext>(_ctx, getState());
  enterRule(_localctx, 0, Cobol85PreprocessorParser::RuleStartRule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2310346608841326594) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -8193) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -288230376151711745) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & -9042383626829825) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & 85597355895) != 0)) {
      setState(72);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(60);
        compilerOptions();
        break;
      }

      case 2: {
        setState(61);
        copyStatement();
        break;
      }

      case 3: {
        setState(62);
        execCicsStatement();
        break;
      }

      case 4: {
        setState(63);
        execSqlStatement();
        break;
      }

      case 5: {
        setState(64);
        execSqlImsStatement();
        break;
      }

      case 6: {
        setState(65);
        replaceOffStatement();
        break;
      }

      case 7: {
        setState(66);
        replaceArea();
        break;
      }

      case 8: {
        setState(67);
        ejectStatement();
        break;
      }

      case 9: {
        setState(68);
        skipStatement();
        break;
      }

      case 10: {
        setState(69);
        titleStatement();
        break;
      }

      case 11: {
        setState(70);
        charDataLine();
        break;
      }

      case 12: {
        setState(71);
        match(Cobol85PreprocessorParser::NEWLINE);
        break;
      }

      default:
        break;
      }
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    match(Cobol85PreprocessorParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilerOptionsContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CompilerOptionsContext::CompilerOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionsContext::PROCESS() {
  return getToken(Cobol85PreprocessorParser::PROCESS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionsContext::CBL() {
  return getToken(Cobol85PreprocessorParser::CBL, 0);
}

std::vector<Cobol85PreprocessorParser::CompilerOptionContext *> Cobol85PreprocessorParser::CompilerOptionsContext::compilerOption() {
  return getRuleContexts<Cobol85PreprocessorParser::CompilerOptionContext>();
}

Cobol85PreprocessorParser::CompilerOptionContext* Cobol85PreprocessorParser::CompilerOptionsContext::compilerOption(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CompilerOptionContext>(i);
}

std::vector<Cobol85PreprocessorParser::CompilerXOptsContext *> Cobol85PreprocessorParser::CompilerOptionsContext::compilerXOpts() {
  return getRuleContexts<Cobol85PreprocessorParser::CompilerXOptsContext>();
}

Cobol85PreprocessorParser::CompilerXOptsContext* Cobol85PreprocessorParser::CompilerOptionsContext::compilerXOpts(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CompilerXOptsContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionsContext::COMMACHAR() {
  return getTokens(Cobol85PreprocessorParser::COMMACHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionsContext::COMMACHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::COMMACHAR, i);
}


size_t Cobol85PreprocessorParser::CompilerOptionsContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCompilerOptions;
}

void Cobol85PreprocessorParser::CompilerOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerOptions(this);
}

void Cobol85PreprocessorParser::CompilerOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerOptions(this);
}

Cobol85PreprocessorParser::CompilerOptionsContext* Cobol85PreprocessorParser::compilerOptions() {
  CompilerOptionsContext *_localctx = _tracker.createInstance<CompilerOptionsContext>(_ctx, getState());
  enterRule(_localctx, 2, Cobol85PreprocessorParser::RuleCompilerOptions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    _la = _input->LA(1);
    if (!(_la == Cobol85PreprocessorParser::CBL || _la == Cobol85PreprocessorParser::PROCESS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(85); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(85);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case Cobol85PreprocessorParser::ADATA:
                case Cobol85PreprocessorParser::ADV:
                case Cobol85PreprocessorParser::APOST:
                case Cobol85PreprocessorParser::AR:
                case Cobol85PreprocessorParser::ARITH:
                case Cobol85PreprocessorParser::AWO:
                case Cobol85PreprocessorParser::BLOCK0:
                case Cobol85PreprocessorParser::BUF:
                case Cobol85PreprocessorParser::BUFSIZE:
                case Cobol85PreprocessorParser::CBLCARD:
                case Cobol85PreprocessorParser::CICS:
                case Cobol85PreprocessorParser::COBOL2:
                case Cobol85PreprocessorParser::COBOL3:
                case Cobol85PreprocessorParser::CODEPAGE:
                case Cobol85PreprocessorParser::COMPILE:
                case Cobol85PreprocessorParser::CP:
                case Cobol85PreprocessorParser::CPP:
                case Cobol85PreprocessorParser::CPSM:
                case Cobol85PreprocessorParser::CURR:
                case Cobol85PreprocessorParser::CURRENCY:
                case Cobol85PreprocessorParser::DATA:
                case Cobol85PreprocessorParser::DATEPROC:
                case Cobol85PreprocessorParser::DBCS:
                case Cobol85PreprocessorParser::DEBUG:
                case Cobol85PreprocessorParser::DECK:
                case Cobol85PreprocessorParser::DIAGTRUNC:
                case Cobol85PreprocessorParser::DLL:
                case Cobol85PreprocessorParser::DP:
                case Cobol85PreprocessorParser::DTR:
                case Cobol85PreprocessorParser::DU:
                case Cobol85PreprocessorParser::DUMP:
                case Cobol85PreprocessorParser::DYN:
                case Cobol85PreprocessorParser::DYNAM:
                case Cobol85PreprocessorParser::EDF:
                case Cobol85PreprocessorParser::EPILOG:
                case Cobol85PreprocessorParser::EXIT:
                case Cobol85PreprocessorParser::EXP:
                case Cobol85PreprocessorParser::EXPORTALL:
                case Cobol85PreprocessorParser::FASTSRT:
                case Cobol85PreprocessorParser::FEPI:
                case Cobol85PreprocessorParser::FLAG:
                case Cobol85PreprocessorParser::FLAGSTD:
                case Cobol85PreprocessorParser::FSRT:
                case Cobol85PreprocessorParser::GDS:
                case Cobol85PreprocessorParser::GRAPHIC:
                case Cobol85PreprocessorParser::INTDATE:
                case Cobol85PreprocessorParser::LANG:
                case Cobol85PreprocessorParser::LANGUAGE:
                case Cobol85PreprocessorParser::LC:
                case Cobol85PreprocessorParser::LEASM:
                case Cobol85PreprocessorParser::LENGTH:
                case Cobol85PreprocessorParser::LIB:
                case Cobol85PreprocessorParser::LIN:
                case Cobol85PreprocessorParser::LINECOUNT:
                case Cobol85PreprocessorParser::LINKAGE:
                case Cobol85PreprocessorParser::LIST:
                case Cobol85PreprocessorParser::MAP:
                case Cobol85PreprocessorParser::MARGINS:
                case Cobol85PreprocessorParser::MD:
                case Cobol85PreprocessorParser::MDECK:
                case Cobol85PreprocessorParser::NAME:
                case Cobol85PreprocessorParser::NATLANG:
                case Cobol85PreprocessorParser::NOADATA:
                case Cobol85PreprocessorParser::NOADV:
                case Cobol85PreprocessorParser::NOAWO:
                case Cobol85PreprocessorParser::NOBLOCK0:
                case Cobol85PreprocessorParser::NOC:
                case Cobol85PreprocessorParser::NOCBLCARD:
                case Cobol85PreprocessorParser::NOCICS:
                case Cobol85PreprocessorParser::NOCMPR2:
                case Cobol85PreprocessorParser::NOCOMPILE:
                case Cobol85PreprocessorParser::NOCPSM:
                case Cobol85PreprocessorParser::NOCURR:
                case Cobol85PreprocessorParser::NOCURRENCY:
                case Cobol85PreprocessorParser::NOD:
                case Cobol85PreprocessorParser::NODATEPROC:
                case Cobol85PreprocessorParser::NODBCS:
                case Cobol85PreprocessorParser::NODE:
                case Cobol85PreprocessorParser::NODEBUG:
                case Cobol85PreprocessorParser::NODECK:
                case Cobol85PreprocessorParser::NODIAGTRUNC:
                case Cobol85PreprocessorParser::NODLL:
                case Cobol85PreprocessorParser::NODU:
                case Cobol85PreprocessorParser::NODUMP:
                case Cobol85PreprocessorParser::NODP:
                case Cobol85PreprocessorParser::NODTR:
                case Cobol85PreprocessorParser::NODYN:
                case Cobol85PreprocessorParser::NODYNAM:
                case Cobol85PreprocessorParser::NOEDF:
                case Cobol85PreprocessorParser::NOEPILOG:
                case Cobol85PreprocessorParser::NOEXIT:
                case Cobol85PreprocessorParser::NOEXP:
                case Cobol85PreprocessorParser::NOEXPORTALL:
                case Cobol85PreprocessorParser::NOF:
                case Cobol85PreprocessorParser::NOFASTSRT:
                case Cobol85PreprocessorParser::NOFEPI:
                case Cobol85PreprocessorParser::NOFLAG:
                case Cobol85PreprocessorParser::NOFLAGMIG:
                case Cobol85PreprocessorParser::NOFLAGSTD:
                case Cobol85PreprocessorParser::NOFSRT:
                case Cobol85PreprocessorParser::NOGRAPHIC:
                case Cobol85PreprocessorParser::NOLENGTH:
                case Cobol85PreprocessorParser::NOLIB:
                case Cobol85PreprocessorParser::NOLINKAGE:
                case Cobol85PreprocessorParser::NOLIST:
                case Cobol85PreprocessorParser::NOMAP:
                case Cobol85PreprocessorParser::NOMD:
                case Cobol85PreprocessorParser::NOMDECK:
                case Cobol85PreprocessorParser::NONAME:
                case Cobol85PreprocessorParser::NONUM:
                case Cobol85PreprocessorParser::NONUMBER:
                case Cobol85PreprocessorParser::NOOBJ:
                case Cobol85PreprocessorParser::NOOBJECT:
                case Cobol85PreprocessorParser::NOOFF:
                case Cobol85PreprocessorParser::NOOFFSET:
                case Cobol85PreprocessorParser::NOOPSEQUENCE:
                case Cobol85PreprocessorParser::NOOPT:
                case Cobol85PreprocessorParser::NOOPTIMIZE:
                case Cobol85PreprocessorParser::NOOPTIONS:
                case Cobol85PreprocessorParser::NOP:
                case Cobol85PreprocessorParser::NOPROLOG:
                case Cobol85PreprocessorParser::NORENT:
                case Cobol85PreprocessorParser::NOS:
                case Cobol85PreprocessorParser::NOSEQ:
                case Cobol85PreprocessorParser::NOSOURCE:
                case Cobol85PreprocessorParser::NOSPIE:
                case Cobol85PreprocessorParser::NOSQL:
                case Cobol85PreprocessorParser::NOSQLC:
                case Cobol85PreprocessorParser::NOSQLCCSID:
                case Cobol85PreprocessorParser::NOSSR:
                case Cobol85PreprocessorParser::NOSSRANGE:
                case Cobol85PreprocessorParser::NOSTDTRUNC:
                case Cobol85PreprocessorParser::NOSEQUENCE:
                case Cobol85PreprocessorParser::NOTERM:
                case Cobol85PreprocessorParser::NOTERMINAL:
                case Cobol85PreprocessorParser::NOTEST:
                case Cobol85PreprocessorParser::NOTHREAD:
                case Cobol85PreprocessorParser::NOVBREF:
                case Cobol85PreprocessorParser::NOWD:
                case Cobol85PreprocessorParser::NOWORD:
                case Cobol85PreprocessorParser::NOX:
                case Cobol85PreprocessorParser::NOXREF:
                case Cobol85PreprocessorParser::NOZWB:
                case Cobol85PreprocessorParser::NS:
                case Cobol85PreprocessorParser::NSEQ:
                case Cobol85PreprocessorParser::NSYMBOL:
                case Cobol85PreprocessorParser::NUM:
                case Cobol85PreprocessorParser::NUMBER:
                case Cobol85PreprocessorParser::NUMPROC:
                case Cobol85PreprocessorParser::OBJ:
                case Cobol85PreprocessorParser::OBJECT:
                case Cobol85PreprocessorParser::OFF:
                case Cobol85PreprocessorParser::OFFSET:
                case Cobol85PreprocessorParser::OP:
                case Cobol85PreprocessorParser::OPMARGINS:
                case Cobol85PreprocessorParser::OPSEQUENCE:
                case Cobol85PreprocessorParser::OPT:
                case Cobol85PreprocessorParser::OPTFILE:
                case Cobol85PreprocessorParser::OPTIMIZE:
                case Cobol85PreprocessorParser::OPTIONS:
                case Cobol85PreprocessorParser::OUT:
                case Cobol85PreprocessorParser::OUTDD:
                case Cobol85PreprocessorParser::PGMN:
                case Cobol85PreprocessorParser::PGMNAME:
                case Cobol85PreprocessorParser::PROLOG:
                case Cobol85PreprocessorParser::QUOTE:
                case Cobol85PreprocessorParser::RENT:
                case Cobol85PreprocessorParser::RMODE:
                case Cobol85PreprocessorParser::SEQ:
                case Cobol85PreprocessorParser::SEQUENCE:
                case Cobol85PreprocessorParser::SIZE:
                case Cobol85PreprocessorParser::SOURCE:
                case Cobol85PreprocessorParser::SP:
                case Cobol85PreprocessorParser::SPACE:
                case Cobol85PreprocessorParser::SPIE:
                case Cobol85PreprocessorParser::SQL:
                case Cobol85PreprocessorParser::SQLC:
                case Cobol85PreprocessorParser::SQLCCSID:
                case Cobol85PreprocessorParser::SSR:
                case Cobol85PreprocessorParser::SSRANGE:
                case Cobol85PreprocessorParser::SYSEIB:
                case Cobol85PreprocessorParser::SZ:
                case Cobol85PreprocessorParser::TERM:
                case Cobol85PreprocessorParser::TERMINAL:
                case Cobol85PreprocessorParser::TEST:
                case Cobol85PreprocessorParser::THREAD:
                case Cobol85PreprocessorParser::TRUNC:
                case Cobol85PreprocessorParser::VBREF:
                case Cobol85PreprocessorParser::WD:
                case Cobol85PreprocessorParser::WORD:
                case Cobol85PreprocessorParser::XMLPARSE:
                case Cobol85PreprocessorParser::XP:
                case Cobol85PreprocessorParser::XREF:
                case Cobol85PreprocessorParser::YEARWINDOW:
                case Cobol85PreprocessorParser::YW:
                case Cobol85PreprocessorParser::ZWB:
                case Cobol85PreprocessorParser::C_CHAR:
                case Cobol85PreprocessorParser::D_CHAR:
                case Cobol85PreprocessorParser::F_CHAR:
                case Cobol85PreprocessorParser::Q_CHAR:
                case Cobol85PreprocessorParser::S_CHAR:
                case Cobol85PreprocessorParser::X_CHAR:
                case Cobol85PreprocessorParser::COMMACHAR: {
                  setState(81);
                  _errHandler->sync(this);

                  _la = _input->LA(1);
                  if (_la == Cobol85PreprocessorParser::COMMACHAR) {
                    setState(80);
                    match(Cobol85PreprocessorParser::COMMACHAR);
                  }
                  setState(83);
                  compilerOption();
                  break;
                }

                case Cobol85PreprocessorParser::XOPTS: {
                  setState(84);
                  compilerXOpts();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(87); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilerXOptsContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CompilerXOptsContext::CompilerXOptsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerXOptsContext::XOPTS() {
  return getToken(Cobol85PreprocessorParser::XOPTS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerXOptsContext::LPARENCHAR() {
  return getToken(Cobol85PreprocessorParser::LPARENCHAR, 0);
}

std::vector<Cobol85PreprocessorParser::CompilerOptionContext *> Cobol85PreprocessorParser::CompilerXOptsContext::compilerOption() {
  return getRuleContexts<Cobol85PreprocessorParser::CompilerOptionContext>();
}

Cobol85PreprocessorParser::CompilerOptionContext* Cobol85PreprocessorParser::CompilerXOptsContext::compilerOption(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CompilerOptionContext>(i);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerXOptsContext::RPARENCHAR() {
  return getToken(Cobol85PreprocessorParser::RPARENCHAR, 0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerXOptsContext::COMMACHAR() {
  return getTokens(Cobol85PreprocessorParser::COMMACHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerXOptsContext::COMMACHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::COMMACHAR, i);
}


size_t Cobol85PreprocessorParser::CompilerXOptsContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCompilerXOpts;
}

void Cobol85PreprocessorParser::CompilerXOptsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerXOpts(this);
}

void Cobol85PreprocessorParser::CompilerXOptsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerXOpts(this);
}

Cobol85PreprocessorParser::CompilerXOptsContext* Cobol85PreprocessorParser::compilerXOpts() {
  CompilerXOptsContext *_localctx = _tracker.createInstance<CompilerXOptsContext>(_ctx, getState());
  enterRule(_localctx, 4, Cobol85PreprocessorParser::RuleCompilerXOpts);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(Cobol85PreprocessorParser::XOPTS);
    setState(90);
    match(Cobol85PreprocessorParser::LPARENCHAR);
    setState(91);
    compilerOption();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -639230256804891194) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -2669655688115) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -72060961292353545) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & 5750005924040276863) != 0) || ((((_la - 257) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 257)) & 43540431) != 0)) {
      setState(93);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Cobol85PreprocessorParser::COMMACHAR) {
        setState(92);
        match(Cobol85PreprocessorParser::COMMACHAR);
      }
      setState(95);
      compilerOption();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
    match(Cobol85PreprocessorParser::RPARENCHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilerOptionContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CompilerOptionContext::CompilerOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ADATA() {
  return getToken(Cobol85PreprocessorParser::ADATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ADV() {
  return getToken(Cobol85PreprocessorParser::ADV, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::APOST() {
  return getToken(Cobol85PreprocessorParser::APOST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LPARENCHAR() {
  return getToken(Cobol85PreprocessorParser::LPARENCHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::RPARENCHAR() {
  return getToken(Cobol85PreprocessorParser::RPARENCHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ARITH() {
  return getToken(Cobol85PreprocessorParser::ARITH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::AR() {
  return getToken(Cobol85PreprocessorParser::AR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EXTEND() {
  return getToken(Cobol85PreprocessorParser::EXTEND, 0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::E_CHAR() {
  return getTokens(Cobol85PreprocessorParser::E_CHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::E_CHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::E_CHAR, i);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::COMPAT() {
  return getToken(Cobol85PreprocessorParser::COMPAT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::C_CHAR() {
  return getToken(Cobol85PreprocessorParser::C_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::AWO() {
  return getToken(Cobol85PreprocessorParser::AWO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::BLOCK0() {
  return getToken(Cobol85PreprocessorParser::BLOCK0, 0);
}

std::vector<Cobol85PreprocessorParser::LiteralContext *> Cobol85PreprocessorParser::CompilerOptionContext::literal() {
  return getRuleContexts<Cobol85PreprocessorParser::LiteralContext>();
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::CompilerOptionContext::literal(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(i);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::BUFSIZE() {
  return getToken(Cobol85PreprocessorParser::BUFSIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::BUF() {
  return getToken(Cobol85PreprocessorParser::BUF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CBLCARD() {
  return getToken(Cobol85PreprocessorParser::CBLCARD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CICS() {
  return getToken(Cobol85PreprocessorParser::CICS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::COBOL2() {
  return getToken(Cobol85PreprocessorParser::COBOL2, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::COBOL3() {
  return getToken(Cobol85PreprocessorParser::COBOL3, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CODEPAGE() {
  return getToken(Cobol85PreprocessorParser::CODEPAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CP() {
  return getToken(Cobol85PreprocessorParser::CP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::COMPILE() {
  return getToken(Cobol85PreprocessorParser::COMPILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CPP() {
  return getToken(Cobol85PreprocessorParser::CPP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CPSM() {
  return getToken(Cobol85PreprocessorParser::CPSM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CURRENCY() {
  return getToken(Cobol85PreprocessorParser::CURRENCY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CURR() {
  return getToken(Cobol85PreprocessorParser::CURR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DATA() {
  return getToken(Cobol85PreprocessorParser::DATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DATEPROC() {
  return getToken(Cobol85PreprocessorParser::DATEPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DP() {
  return getToken(Cobol85PreprocessorParser::DP, 0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::COMMACHAR() {
  return getTokens(Cobol85PreprocessorParser::COMMACHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::COMMACHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::COMMACHAR, i);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FLAG() {
  return getToken(Cobol85PreprocessorParser::FLAG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFLAG() {
  return getToken(Cobol85PreprocessorParser::NOFLAG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::TRIG() {
  return getToken(Cobol85PreprocessorParser::TRIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOTRIG() {
  return getToken(Cobol85PreprocessorParser::NOTRIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DBCS() {
  return getToken(Cobol85PreprocessorParser::DBCS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DECK() {
  return getToken(Cobol85PreprocessorParser::DECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::D_CHAR() {
  return getToken(Cobol85PreprocessorParser::D_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DEBUG() {
  return getToken(Cobol85PreprocessorParser::DEBUG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DIAGTRUNC() {
  return getToken(Cobol85PreprocessorParser::DIAGTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DTR() {
  return getToken(Cobol85PreprocessorParser::DTR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DLL() {
  return getToken(Cobol85PreprocessorParser::DLL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DUMP() {
  return getToken(Cobol85PreprocessorParser::DUMP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DU() {
  return getToken(Cobol85PreprocessorParser::DU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DYNAM() {
  return getToken(Cobol85PreprocessorParser::DYNAM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DYN() {
  return getToken(Cobol85PreprocessorParser::DYN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EDF() {
  return getToken(Cobol85PreprocessorParser::EDF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EPILOG() {
  return getToken(Cobol85PreprocessorParser::EPILOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EXIT() {
  return getToken(Cobol85PreprocessorParser::EXIT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EXPORTALL() {
  return getToken(Cobol85PreprocessorParser::EXPORTALL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EXP() {
  return getToken(Cobol85PreprocessorParser::EXP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FASTSRT() {
  return getToken(Cobol85PreprocessorParser::FASTSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FSRT() {
  return getToken(Cobol85PreprocessorParser::FSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FEPI() {
  return getToken(Cobol85PreprocessorParser::FEPI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::F_CHAR() {
  return getToken(Cobol85PreprocessorParser::F_CHAR, 0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::I_CHAR() {
  return getTokens(Cobol85PreprocessorParser::I_CHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::I_CHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::I_CHAR, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::S_CHAR() {
  return getTokens(Cobol85PreprocessorParser::S_CHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::S_CHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::S_CHAR, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::U_CHAR() {
  return getTokens(Cobol85PreprocessorParser::U_CHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::U_CHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::U_CHAR, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CompilerOptionContext::W_CHAR() {
  return getTokens(Cobol85PreprocessorParser::W_CHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::W_CHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::W_CHAR, i);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FLAGSTD() {
  return getToken(Cobol85PreprocessorParser::FLAGSTD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::M_CHAR() {
  return getToken(Cobol85PreprocessorParser::M_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::H_CHAR() {
  return getToken(Cobol85PreprocessorParser::H_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::DD() {
  return getToken(Cobol85PreprocessorParser::DD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::N_CHAR() {
  return getToken(Cobol85PreprocessorParser::N_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NN() {
  return getToken(Cobol85PreprocessorParser::NN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SS() {
  return getToken(Cobol85PreprocessorParser::SS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::GDS() {
  return getToken(Cobol85PreprocessorParser::GDS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::GRAPHIC() {
  return getToken(Cobol85PreprocessorParser::GRAPHIC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::INTDATE() {
  return getToken(Cobol85PreprocessorParser::INTDATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ANSI() {
  return getToken(Cobol85PreprocessorParser::ANSI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LILIAN() {
  return getToken(Cobol85PreprocessorParser::LILIAN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LANGUAGE() {
  return getToken(Cobol85PreprocessorParser::LANGUAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LANG() {
  return getToken(Cobol85PreprocessorParser::LANG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ENGLISH() {
  return getToken(Cobol85PreprocessorParser::ENGLISH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CS() {
  return getToken(Cobol85PreprocessorParser::CS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EN() {
  return getToken(Cobol85PreprocessorParser::EN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::JA() {
  return getToken(Cobol85PreprocessorParser::JA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::JP() {
  return getToken(Cobol85PreprocessorParser::JP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::KA() {
  return getToken(Cobol85PreprocessorParser::KA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::UE() {
  return getToken(Cobol85PreprocessorParser::UE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LEASM() {
  return getToken(Cobol85PreprocessorParser::LEASM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LENGTH() {
  return getToken(Cobol85PreprocessorParser::LENGTH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LIB() {
  return getToken(Cobol85PreprocessorParser::LIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LIN() {
  return getToken(Cobol85PreprocessorParser::LIN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LINECOUNT() {
  return getToken(Cobol85PreprocessorParser::LINECOUNT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LC() {
  return getToken(Cobol85PreprocessorParser::LC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LINKAGE() {
  return getToken(Cobol85PreprocessorParser::LINKAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LIST() {
  return getToken(Cobol85PreprocessorParser::LIST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MAP() {
  return getToken(Cobol85PreprocessorParser::MAP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MARGINS() {
  return getToken(Cobol85PreprocessorParser::MARGINS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MDECK() {
  return getToken(Cobol85PreprocessorParser::MDECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MD() {
  return getToken(Cobol85PreprocessorParser::MD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOC() {
  return getToken(Cobol85PreprocessorParser::NOC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCOMPILE() {
  return getToken(Cobol85PreprocessorParser::NOCOMPILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NAME() {
  return getToken(Cobol85PreprocessorParser::NAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ALIAS() {
  return getToken(Cobol85PreprocessorParser::ALIAS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOALIAS() {
  return getToken(Cobol85PreprocessorParser::NOALIAS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NATLANG() {
  return getToken(Cobol85PreprocessorParser::NATLANG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOADATA() {
  return getToken(Cobol85PreprocessorParser::NOADATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOADV() {
  return getToken(Cobol85PreprocessorParser::NOADV, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOAWO() {
  return getToken(Cobol85PreprocessorParser::NOAWO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOBLOCK0() {
  return getToken(Cobol85PreprocessorParser::NOBLOCK0, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCBLCARD() {
  return getToken(Cobol85PreprocessorParser::NOCBLCARD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCICS() {
  return getToken(Cobol85PreprocessorParser::NOCICS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCMPR2() {
  return getToken(Cobol85PreprocessorParser::NOCMPR2, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCPSM() {
  return getToken(Cobol85PreprocessorParser::NOCPSM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCURRENCY() {
  return getToken(Cobol85PreprocessorParser::NOCURRENCY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOCURR() {
  return getToken(Cobol85PreprocessorParser::NOCURR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODATEPROC() {
  return getToken(Cobol85PreprocessorParser::NODATEPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODP() {
  return getToken(Cobol85PreprocessorParser::NODP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODBCS() {
  return getToken(Cobol85PreprocessorParser::NODBCS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODEBUG() {
  return getToken(Cobol85PreprocessorParser::NODEBUG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODECK() {
  return getToken(Cobol85PreprocessorParser::NODECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOD() {
  return getToken(Cobol85PreprocessorParser::NOD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODLL() {
  return getToken(Cobol85PreprocessorParser::NODLL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODE() {
  return getToken(Cobol85PreprocessorParser::NODE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODUMP() {
  return getToken(Cobol85PreprocessorParser::NODUMP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODU() {
  return getToken(Cobol85PreprocessorParser::NODU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODIAGTRUNC() {
  return getToken(Cobol85PreprocessorParser::NODIAGTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODTR() {
  return getToken(Cobol85PreprocessorParser::NODTR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODYNAM() {
  return getToken(Cobol85PreprocessorParser::NODYNAM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NODYN() {
  return getToken(Cobol85PreprocessorParser::NODYN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEDF() {
  return getToken(Cobol85PreprocessorParser::NOEDF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEPILOG() {
  return getToken(Cobol85PreprocessorParser::NOEPILOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEXIT() {
  return getToken(Cobol85PreprocessorParser::NOEXIT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEXPORTALL() {
  return getToken(Cobol85PreprocessorParser::NOEXPORTALL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEXP() {
  return getToken(Cobol85PreprocessorParser::NOEXP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFASTSRT() {
  return getToken(Cobol85PreprocessorParser::NOFASTSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFSRT() {
  return getToken(Cobol85PreprocessorParser::NOFSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFEPI() {
  return getToken(Cobol85PreprocessorParser::NOFEPI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOF() {
  return getToken(Cobol85PreprocessorParser::NOF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFLAGMIG() {
  return getToken(Cobol85PreprocessorParser::NOFLAGMIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOFLAGSTD() {
  return getToken(Cobol85PreprocessorParser::NOFLAGSTD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOGRAPHIC() {
  return getToken(Cobol85PreprocessorParser::NOGRAPHIC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOLENGTH() {
  return getToken(Cobol85PreprocessorParser::NOLENGTH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOLIB() {
  return getToken(Cobol85PreprocessorParser::NOLIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOLINKAGE() {
  return getToken(Cobol85PreprocessorParser::NOLINKAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOLIST() {
  return getToken(Cobol85PreprocessorParser::NOLIST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOMAP() {
  return getToken(Cobol85PreprocessorParser::NOMAP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOMDECK() {
  return getToken(Cobol85PreprocessorParser::NOMDECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOMD() {
  return getToken(Cobol85PreprocessorParser::NOMD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NONAME() {
  return getToken(Cobol85PreprocessorParser::NONAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NONUMBER() {
  return getToken(Cobol85PreprocessorParser::NONUMBER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NONUM() {
  return getToken(Cobol85PreprocessorParser::NONUM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOBJECT() {
  return getToken(Cobol85PreprocessorParser::NOOBJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOBJ() {
  return getToken(Cobol85PreprocessorParser::NOOBJ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOFFSET() {
  return getToken(Cobol85PreprocessorParser::NOOFFSET, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOFF() {
  return getToken(Cobol85PreprocessorParser::NOOFF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOPSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::NOOPSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOPTIMIZE() {
  return getToken(Cobol85PreprocessorParser::NOOPTIMIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOPT() {
  return getToken(Cobol85PreprocessorParser::NOOPT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOOPTIONS() {
  return getToken(Cobol85PreprocessorParser::NOOPTIONS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOP() {
  return getToken(Cobol85PreprocessorParser::NOP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOPROLOG() {
  return getToken(Cobol85PreprocessorParser::NOPROLOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NORENT() {
  return getToken(Cobol85PreprocessorParser::NORENT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::NOSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSEQ() {
  return getToken(Cobol85PreprocessorParser::NOSEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSOURCE() {
  return getToken(Cobol85PreprocessorParser::NOSOURCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOS() {
  return getToken(Cobol85PreprocessorParser::NOS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSPIE() {
  return getToken(Cobol85PreprocessorParser::NOSPIE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSQL() {
  return getToken(Cobol85PreprocessorParser::NOSQL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSQLCCSID() {
  return getToken(Cobol85PreprocessorParser::NOSQLCCSID, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSQLC() {
  return getToken(Cobol85PreprocessorParser::NOSQLC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSSRANGE() {
  return getToken(Cobol85PreprocessorParser::NOSSRANGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSSR() {
  return getToken(Cobol85PreprocessorParser::NOSSR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSTDTRUNC() {
  return getToken(Cobol85PreprocessorParser::NOSTDTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOTERMINAL() {
  return getToken(Cobol85PreprocessorParser::NOTERMINAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOTERM() {
  return getToken(Cobol85PreprocessorParser::NOTERM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOTEST() {
  return getToken(Cobol85PreprocessorParser::NOTEST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOTHREAD() {
  return getToken(Cobol85PreprocessorParser::NOTHREAD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOVBREF() {
  return getToken(Cobol85PreprocessorParser::NOVBREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOWORD() {
  return getToken(Cobol85PreprocessorParser::NOWORD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOWD() {
  return getToken(Cobol85PreprocessorParser::NOWD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NSEQ() {
  return getToken(Cobol85PreprocessorParser::NSEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NSYMBOL() {
  return getToken(Cobol85PreprocessorParser::NSYMBOL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NS() {
  return getToken(Cobol85PreprocessorParser::NS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NATIONAL() {
  return getToken(Cobol85PreprocessorParser::NATIONAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NAT() {
  return getToken(Cobol85PreprocessorParser::NAT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOXREF() {
  return getToken(Cobol85PreprocessorParser::NOXREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOX() {
  return getToken(Cobol85PreprocessorParser::NOX, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOZWB() {
  return getToken(Cobol85PreprocessorParser::NOZWB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NUMBER() {
  return getToken(Cobol85PreprocessorParser::NUMBER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NUM() {
  return getToken(Cobol85PreprocessorParser::NUM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NUMPROC() {
  return getToken(Cobol85PreprocessorParser::NUMPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MIG() {
  return getToken(Cobol85PreprocessorParser::MIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOPFD() {
  return getToken(Cobol85PreprocessorParser::NOPFD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::PFD() {
  return getToken(Cobol85PreprocessorParser::PFD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OBJECT() {
  return getToken(Cobol85PreprocessorParser::OBJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OBJ() {
  return getToken(Cobol85PreprocessorParser::OBJ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OFFSET() {
  return getToken(Cobol85PreprocessorParser::OFFSET, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OFF() {
  return getToken(Cobol85PreprocessorParser::OFF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPMARGINS() {
  return getToken(Cobol85PreprocessorParser::OPMARGINS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::OPSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPTIMIZE() {
  return getToken(Cobol85PreprocessorParser::OPTIMIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPT() {
  return getToken(Cobol85PreprocessorParser::OPT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::FULL() {
  return getToken(Cobol85PreprocessorParser::FULL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::STD() {
  return getToken(Cobol85PreprocessorParser::STD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPTFILE() {
  return getToken(Cobol85PreprocessorParser::OPTFILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OPTIONS() {
  return getToken(Cobol85PreprocessorParser::OPTIONS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OP() {
  return getToken(Cobol85PreprocessorParser::OP, 0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::CompilerOptionContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OUTDD() {
  return getToken(Cobol85PreprocessorParser::OUTDD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::OUT() {
  return getToken(Cobol85PreprocessorParser::OUT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::PGMNAME() {
  return getToken(Cobol85PreprocessorParser::PGMNAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::PGMN() {
  return getToken(Cobol85PreprocessorParser::PGMN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::CO() {
  return getToken(Cobol85PreprocessorParser::CO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LM() {
  return getToken(Cobol85PreprocessorParser::LM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LONGMIXED() {
  return getToken(Cobol85PreprocessorParser::LONGMIXED, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LONGUPPER() {
  return getToken(Cobol85PreprocessorParser::LONGUPPER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::LU() {
  return getToken(Cobol85PreprocessorParser::LU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MIXED() {
  return getToken(Cobol85PreprocessorParser::MIXED, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::UPPER() {
  return getToken(Cobol85PreprocessorParser::UPPER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::PROLOG() {
  return getToken(Cobol85PreprocessorParser::PROLOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::QUOTE() {
  return getToken(Cobol85PreprocessorParser::QUOTE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::Q_CHAR() {
  return getToken(Cobol85PreprocessorParser::Q_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::RENT() {
  return getToken(Cobol85PreprocessorParser::RENT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::RMODE() {
  return getToken(Cobol85PreprocessorParser::RMODE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ANY() {
  return getToken(Cobol85PreprocessorParser::ANY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::AUTO() {
  return getToken(Cobol85PreprocessorParser::AUTO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SEQUENCE() {
  return getToken(Cobol85PreprocessorParser::SEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SEQ() {
  return getToken(Cobol85PreprocessorParser::SEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SIZE() {
  return getToken(Cobol85PreprocessorParser::SIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SZ() {
  return getToken(Cobol85PreprocessorParser::SZ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::MAX() {
  return getToken(Cobol85PreprocessorParser::MAX, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SOURCE() {
  return getToken(Cobol85PreprocessorParser::SOURCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SP() {
  return getToken(Cobol85PreprocessorParser::SP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SPACE() {
  return getToken(Cobol85PreprocessorParser::SPACE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SPIE() {
  return getToken(Cobol85PreprocessorParser::SPIE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SQL() {
  return getToken(Cobol85PreprocessorParser::SQL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SQLCCSID() {
  return getToken(Cobol85PreprocessorParser::SQLCCSID, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SQLC() {
  return getToken(Cobol85PreprocessorParser::SQLC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SSRANGE() {
  return getToken(Cobol85PreprocessorParser::SSRANGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SSR() {
  return getToken(Cobol85PreprocessorParser::SSR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SYSEIB() {
  return getToken(Cobol85PreprocessorParser::SYSEIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::TERMINAL() {
  return getToken(Cobol85PreprocessorParser::TERMINAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::TERM() {
  return getToken(Cobol85PreprocessorParser::TERM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::TEST() {
  return getToken(Cobol85PreprocessorParser::TEST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::HOOK() {
  return getToken(Cobol85PreprocessorParser::HOOK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOHOOK() {
  return getToken(Cobol85PreprocessorParser::NOHOOK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SEP() {
  return getToken(Cobol85PreprocessorParser::SEP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SEPARATE() {
  return getToken(Cobol85PreprocessorParser::SEPARATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSEP() {
  return getToken(Cobol85PreprocessorParser::NOSEP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOSEPARATE() {
  return getToken(Cobol85PreprocessorParser::NOSEPARATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::EJPD() {
  return getToken(Cobol85PreprocessorParser::EJPD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::NOEJPD() {
  return getToken(Cobol85PreprocessorParser::NOEJPD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::THREAD() {
  return getToken(Cobol85PreprocessorParser::THREAD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::TRUNC() {
  return getToken(Cobol85PreprocessorParser::TRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::BIN() {
  return getToken(Cobol85PreprocessorParser::BIN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::VBREF() {
  return getToken(Cobol85PreprocessorParser::VBREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::WORD() {
  return getToken(Cobol85PreprocessorParser::WORD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::WD() {
  return getToken(Cobol85PreprocessorParser::WD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::XMLPARSE() {
  return getToken(Cobol85PreprocessorParser::XMLPARSE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::XP() {
  return getToken(Cobol85PreprocessorParser::XP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::XMLSS() {
  return getToken(Cobol85PreprocessorParser::XMLSS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::X_CHAR() {
  return getToken(Cobol85PreprocessorParser::X_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::XREF() {
  return getToken(Cobol85PreprocessorParser::XREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::SHORT() {
  return getToken(Cobol85PreprocessorParser::SHORT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::YEARWINDOW() {
  return getToken(Cobol85PreprocessorParser::YEARWINDOW, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::YW() {
  return getToken(Cobol85PreprocessorParser::YW, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CompilerOptionContext::ZWB() {
  return getToken(Cobol85PreprocessorParser::ZWB, 0);
}


size_t Cobol85PreprocessorParser::CompilerOptionContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCompilerOption;
}

void Cobol85PreprocessorParser::CompilerOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerOption(this);
}

void Cobol85PreprocessorParser::CompilerOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerOption(this);
}

Cobol85PreprocessorParser::CompilerOptionContext* Cobol85PreprocessorParser::compilerOption() {
  CompilerOptionContext *_localctx = _tracker.createInstance<CompilerOptionContext>(_ctx, getState());
  enterRule(_localctx, 6, Cobol85PreprocessorParser::RuleCompilerOption);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(103);
      match(Cobol85PreprocessorParser::ADATA);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      match(Cobol85PreprocessorParser::ADV);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(105);
      match(Cobol85PreprocessorParser::APOST);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(106);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::AR

      || _la == Cobol85PreprocessorParser::ARITH)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(107);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(108);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::COMPAT

      || _la == Cobol85PreprocessorParser::EXTEND || _la == Cobol85PreprocessorParser::C_CHAR

      || _la == Cobol85PreprocessorParser::E_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(109);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(110);
      match(Cobol85PreprocessorParser::AWO);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(111);
      match(Cobol85PreprocessorParser::BLOCK0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(112);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::BUF

      || _la == Cobol85PreprocessorParser::BUFSIZE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(113);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(114);
      literal();
      setState(115);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(117);
      match(Cobol85PreprocessorParser::CBLCARD);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(118);
      match(Cobol85PreprocessorParser::CICS);
      setState(123);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(119);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(120);
        literal();
        setState(121);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(125);
      match(Cobol85PreprocessorParser::COBOL2);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(126);
      match(Cobol85PreprocessorParser::COBOL3);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(127);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::CODEPAGE

      || _la == Cobol85PreprocessorParser::CP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(128);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(129);
      literal();
      setState(130);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(132);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::COMPILE || _la == Cobol85PreprocessorParser::C_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(133);
      match(Cobol85PreprocessorParser::CPP);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(134);
      match(Cobol85PreprocessorParser::CPSM);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(135);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::CURR

      || _la == Cobol85PreprocessorParser::CURRENCY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(136);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(137);
      literal();
      setState(138);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(140);
      match(Cobol85PreprocessorParser::DATA);
      setState(141);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(142);
      literal();
      setState(143);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(145);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DATEPROC

      || _la == Cobol85PreprocessorParser::DP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(157);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(146);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(148);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::FLAG || _la == Cobol85PreprocessorParser::NOFLAG) {
          setState(147);
          _la = _input->LA(1);
          if (!(_la == Cobol85PreprocessorParser::FLAG || _la == Cobol85PreprocessorParser::NOFLAG)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(151);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::COMMACHAR) {
          setState(150);
          match(Cobol85PreprocessorParser::COMMACHAR);
        }
        setState(154);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::NOTRIG || _la == Cobol85PreprocessorParser::TRIG) {
          setState(153);
          _la = _input->LA(1);
          if (!(_la == Cobol85PreprocessorParser::NOTRIG || _la == Cobol85PreprocessorParser::TRIG)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(156);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(159);
      match(Cobol85PreprocessorParser::DBCS);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(160);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DECK || _la == Cobol85PreprocessorParser::D_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(161);
      match(Cobol85PreprocessorParser::DEBUG);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(162);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DIAGTRUNC

      || _la == Cobol85PreprocessorParser::DTR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(163);
      match(Cobol85PreprocessorParser::DLL);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(164);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DU

      || _la == Cobol85PreprocessorParser::DUMP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(165);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DYN

      || _la == Cobol85PreprocessorParser::DYNAM)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(166);
      match(Cobol85PreprocessorParser::EDF);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(167);
      match(Cobol85PreprocessorParser::EPILOG);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(168);
      match(Cobol85PreprocessorParser::EXIT);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(169);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::EXP

      || _la == Cobol85PreprocessorParser::EXPORTALL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(170);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::FASTSRT

      || _la == Cobol85PreprocessorParser::FSRT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(171);
      match(Cobol85PreprocessorParser::FEPI);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(172);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::FLAG || _la == Cobol85PreprocessorParser::F_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(173);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(174);
      _la = _input->LA(1);
      if (!(((((_la - 270) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 270)) & 905) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(177);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Cobol85PreprocessorParser::COMMACHAR) {
        setState(175);
        match(Cobol85PreprocessorParser::COMMACHAR);
        setState(176);
        _la = _input->LA(1);
        if (!(((((_la - 270) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 270)) & 905) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(179);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(180);
      match(Cobol85PreprocessorParser::FLAGSTD);
      setState(181);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(182);
      _la = _input->LA(1);
      if (!(((((_la - 272) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 272)) & 7) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Cobol85PreprocessorParser::COMMACHAR) {
        setState(183);
        match(Cobol85PreprocessorParser::COMMACHAR);
        setState(184);
        _la = _input->LA(1);
        if (!(_la == Cobol85PreprocessorParser::DD || _la == Cobol85PreprocessorParser::NN || ((((_la - 241) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 241)) & 86167781377) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(187);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(188);
      match(Cobol85PreprocessorParser::GDS);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(189);
      match(Cobol85PreprocessorParser::GRAPHIC);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(190);
      match(Cobol85PreprocessorParser::INTDATE);
      setState(191);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(192);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::ANSI || _la == Cobol85PreprocessorParser::LILIAN)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(193);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(194);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::LANG

      || _la == Cobol85PreprocessorParser::LANGUAGE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(195);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(196);
      _la = _input->LA(1);
      if (!(((((_la - 29) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 29)) & 30786331869185) != 0) || _la == Cobol85PreprocessorParser::UE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(197);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(198);
      match(Cobol85PreprocessorParser::LEASM);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(199);
      match(Cobol85PreprocessorParser::LENGTH);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(200);
      match(Cobol85PreprocessorParser::LIB);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(201);
      match(Cobol85PreprocessorParser::LIN);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(202);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::LC

      || _la == Cobol85PreprocessorParser::LINECOUNT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(203);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(204);
      literal();
      setState(205);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(207);
      match(Cobol85PreprocessorParser::LINKAGE);
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(208);
      match(Cobol85PreprocessorParser::LIST);
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(209);
      match(Cobol85PreprocessorParser::MAP);
      break;
    }

    case 46: {
      enterOuterAlt(_localctx, 46);
      setState(210);
      match(Cobol85PreprocessorParser::MARGINS);
      setState(211);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(212);
      literal();
      setState(213);
      match(Cobol85PreprocessorParser::COMMACHAR);
      setState(214);
      literal();
      setState(217);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Cobol85PreprocessorParser::COMMACHAR) {
        setState(215);
        match(Cobol85PreprocessorParser::COMMACHAR);
        setState(216);
        literal();
      }
      setState(219);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 47: {
      enterOuterAlt(_localctx, 47);
      setState(221);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::MD

      || _la == Cobol85PreprocessorParser::MDECK)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(225);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(222);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(223);
        _la = _input->LA(1);
        if (!(_la == Cobol85PreprocessorParser::COMPILE || _la == Cobol85PreprocessorParser::NOC

        || _la == Cobol85PreprocessorParser::NOCOMPILE || _la == Cobol85PreprocessorParser::C_CHAR)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(224);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 48: {
      enterOuterAlt(_localctx, 48);
      setState(227);
      match(Cobol85PreprocessorParser::NAME);
      setState(231);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(228);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(229);
        _la = _input->LA(1);
        if (!(_la == Cobol85PreprocessorParser::ALIAS || _la == Cobol85PreprocessorParser::NOALIAS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(230);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 49: {
      enterOuterAlt(_localctx, 49);
      setState(233);
      match(Cobol85PreprocessorParser::NATLANG);
      setState(234);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(235);
      _la = _input->LA(1);
      if (!(((((_la - 29) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 29)) & 17592188141569) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(236);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 50: {
      enterOuterAlt(_localctx, 50);
      setState(237);
      match(Cobol85PreprocessorParser::NOADATA);
      break;
    }

    case 51: {
      enterOuterAlt(_localctx, 51);
      setState(238);
      match(Cobol85PreprocessorParser::NOADV);
      break;
    }

    case 52: {
      enterOuterAlt(_localctx, 52);
      setState(239);
      match(Cobol85PreprocessorParser::NOAWO);
      break;
    }

    case 53: {
      enterOuterAlt(_localctx, 53);
      setState(240);
      match(Cobol85PreprocessorParser::NOBLOCK0);
      break;
    }

    case 54: {
      enterOuterAlt(_localctx, 54);
      setState(241);
      match(Cobol85PreprocessorParser::NOCBLCARD);
      break;
    }

    case 55: {
      enterOuterAlt(_localctx, 55);
      setState(242);
      match(Cobol85PreprocessorParser::NOCICS);
      break;
    }

    case 56: {
      enterOuterAlt(_localctx, 56);
      setState(243);
      match(Cobol85PreprocessorParser::NOCMPR2);
      break;
    }

    case 57: {
      enterOuterAlt(_localctx, 57);
      setState(244);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOC

      || _la == Cobol85PreprocessorParser::NOCOMPILE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(248);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(245);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(246);
        _la = _input->LA(1);
        if (!(((((_la - 270) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 270)) & 641) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(247);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 58: {
      enterOuterAlt(_localctx, 58);
      setState(250);
      match(Cobol85PreprocessorParser::NOCPSM);
      break;
    }

    case 59: {
      enterOuterAlt(_localctx, 59);
      setState(251);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOCURR

      || _la == Cobol85PreprocessorParser::NOCURRENCY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 60: {
      enterOuterAlt(_localctx, 60);
      setState(252);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NODATEPROC

      || _la == Cobol85PreprocessorParser::NODP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 61: {
      enterOuterAlt(_localctx, 61);
      setState(253);
      match(Cobol85PreprocessorParser::NODBCS);
      break;
    }

    case 62: {
      enterOuterAlt(_localctx, 62);
      setState(254);
      match(Cobol85PreprocessorParser::NODEBUG);
      break;
    }

    case 63: {
      enterOuterAlt(_localctx, 63);
      setState(255);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOD

      || _la == Cobol85PreprocessorParser::NODECK)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 64: {
      enterOuterAlt(_localctx, 64);
      setState(256);
      match(Cobol85PreprocessorParser::NODLL);
      break;
    }

    case 65: {
      enterOuterAlt(_localctx, 65);
      setState(257);
      match(Cobol85PreprocessorParser::NODE);
      break;
    }

    case 66: {
      enterOuterAlt(_localctx, 66);
      setState(258);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NODU

      || _la == Cobol85PreprocessorParser::NODUMP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 67: {
      enterOuterAlt(_localctx, 67);
      setState(259);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NODIAGTRUNC

      || _la == Cobol85PreprocessorParser::NODTR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 68: {
      enterOuterAlt(_localctx, 68);
      setState(260);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NODYN

      || _la == Cobol85PreprocessorParser::NODYNAM)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 69: {
      enterOuterAlt(_localctx, 69);
      setState(261);
      match(Cobol85PreprocessorParser::NOEDF);
      break;
    }

    case 70: {
      enterOuterAlt(_localctx, 70);
      setState(262);
      match(Cobol85PreprocessorParser::NOEPILOG);
      break;
    }

    case 71: {
      enterOuterAlt(_localctx, 71);
      setState(263);
      match(Cobol85PreprocessorParser::NOEXIT);
      break;
    }

    case 72: {
      enterOuterAlt(_localctx, 72);
      setState(264);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOEXP

      || _la == Cobol85PreprocessorParser::NOEXPORTALL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 73: {
      enterOuterAlt(_localctx, 73);
      setState(265);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOFASTSRT

      || _la == Cobol85PreprocessorParser::NOFSRT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 74: {
      enterOuterAlt(_localctx, 74);
      setState(266);
      match(Cobol85PreprocessorParser::NOFEPI);
      break;
    }

    case 75: {
      enterOuterAlt(_localctx, 75);
      setState(267);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOF

      || _la == Cobol85PreprocessorParser::NOFLAG)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 76: {
      enterOuterAlt(_localctx, 76);
      setState(268);
      match(Cobol85PreprocessorParser::NOFLAGMIG);
      break;
    }

    case 77: {
      enterOuterAlt(_localctx, 77);
      setState(269);
      match(Cobol85PreprocessorParser::NOFLAGSTD);
      break;
    }

    case 78: {
      enterOuterAlt(_localctx, 78);
      setState(270);
      match(Cobol85PreprocessorParser::NOGRAPHIC);
      break;
    }

    case 79: {
      enterOuterAlt(_localctx, 79);
      setState(271);
      match(Cobol85PreprocessorParser::NOLENGTH);
      break;
    }

    case 80: {
      enterOuterAlt(_localctx, 80);
      setState(272);
      match(Cobol85PreprocessorParser::NOLIB);
      break;
    }

    case 81: {
      enterOuterAlt(_localctx, 81);
      setState(273);
      match(Cobol85PreprocessorParser::NOLINKAGE);
      break;
    }

    case 82: {
      enterOuterAlt(_localctx, 82);
      setState(274);
      match(Cobol85PreprocessorParser::NOLIST);
      break;
    }

    case 83: {
      enterOuterAlt(_localctx, 83);
      setState(275);
      match(Cobol85PreprocessorParser::NOMAP);
      break;
    }

    case 84: {
      enterOuterAlt(_localctx, 84);
      setState(276);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOMD

      || _la == Cobol85PreprocessorParser::NOMDECK)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 85: {
      enterOuterAlt(_localctx, 85);
      setState(277);
      match(Cobol85PreprocessorParser::NONAME);
      break;
    }

    case 86: {
      enterOuterAlt(_localctx, 86);
      setState(278);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NONUM

      || _la == Cobol85PreprocessorParser::NONUMBER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 87: {
      enterOuterAlt(_localctx, 87);
      setState(279);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOOBJ

      || _la == Cobol85PreprocessorParser::NOOBJECT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 88: {
      enterOuterAlt(_localctx, 88);
      setState(280);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOOFF

      || _la == Cobol85PreprocessorParser::NOOFFSET)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 89: {
      enterOuterAlt(_localctx, 89);
      setState(281);
      match(Cobol85PreprocessorParser::NOOPSEQUENCE);
      break;
    }

    case 90: {
      enterOuterAlt(_localctx, 90);
      setState(282);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOOPT

      || _la == Cobol85PreprocessorParser::NOOPTIMIZE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 91: {
      enterOuterAlt(_localctx, 91);
      setState(283);
      match(Cobol85PreprocessorParser::NOOPTIONS);
      break;
    }

    case 92: {
      enterOuterAlt(_localctx, 92);
      setState(284);
      match(Cobol85PreprocessorParser::NOP);
      break;
    }

    case 93: {
      enterOuterAlt(_localctx, 93);
      setState(285);
      match(Cobol85PreprocessorParser::NOPROLOG);
      break;
    }

    case 94: {
      enterOuterAlt(_localctx, 94);
      setState(286);
      match(Cobol85PreprocessorParser::NORENT);
      break;
    }

    case 95: {
      enterOuterAlt(_localctx, 95);
      setState(287);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOSEQ

      || _la == Cobol85PreprocessorParser::NOSEQUENCE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 96: {
      enterOuterAlt(_localctx, 96);
      setState(288);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOS

      || _la == Cobol85PreprocessorParser::NOSOURCE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 97: {
      enterOuterAlt(_localctx, 97);
      setState(289);
      match(Cobol85PreprocessorParser::NOSPIE);
      break;
    }

    case 98: {
      enterOuterAlt(_localctx, 98);
      setState(290);
      match(Cobol85PreprocessorParser::NOSQL);
      break;
    }

    case 99: {
      enterOuterAlt(_localctx, 99);
      setState(291);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOSQLC

      || _la == Cobol85PreprocessorParser::NOSQLCCSID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 100: {
      enterOuterAlt(_localctx, 100);
      setState(292);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOSSR

      || _la == Cobol85PreprocessorParser::NOSSRANGE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 101: {
      enterOuterAlt(_localctx, 101);
      setState(293);
      match(Cobol85PreprocessorParser::NOSTDTRUNC);
      break;
    }

    case 102: {
      enterOuterAlt(_localctx, 102);
      setState(294);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOTERM

      || _la == Cobol85PreprocessorParser::NOTERMINAL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 103: {
      enterOuterAlt(_localctx, 103);
      setState(295);
      match(Cobol85PreprocessorParser::NOTEST);
      break;
    }

    case 104: {
      enterOuterAlt(_localctx, 104);
      setState(296);
      match(Cobol85PreprocessorParser::NOTHREAD);
      break;
    }

    case 105: {
      enterOuterAlt(_localctx, 105);
      setState(297);
      match(Cobol85PreprocessorParser::NOVBREF);
      break;
    }

    case 106: {
      enterOuterAlt(_localctx, 106);
      setState(298);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOWD

      || _la == Cobol85PreprocessorParser::NOWORD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 107: {
      enterOuterAlt(_localctx, 107);
      setState(299);
      match(Cobol85PreprocessorParser::NSEQ);
      break;
    }

    case 108: {
      enterOuterAlt(_localctx, 108);
      setState(300);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NS

      || _la == Cobol85PreprocessorParser::NSYMBOL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(301);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(302);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::DBCS || _la == Cobol85PreprocessorParser::NAT

      || _la == Cobol85PreprocessorParser::NATIONAL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(303);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 109: {
      enterOuterAlt(_localctx, 109);
      setState(304);
      match(Cobol85PreprocessorParser::NOVBREF);
      break;
    }

    case 110: {
      enterOuterAlt(_localctx, 110);
      setState(305);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NOX

      || _la == Cobol85PreprocessorParser::NOXREF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 111: {
      enterOuterAlt(_localctx, 111);
      setState(306);
      match(Cobol85PreprocessorParser::NOZWB);
      break;
    }

    case 112: {
      enterOuterAlt(_localctx, 112);
      setState(307);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::NUM

      || _la == Cobol85PreprocessorParser::NUMBER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 113: {
      enterOuterAlt(_localctx, 113);
      setState(308);
      match(Cobol85PreprocessorParser::NUMPROC);
      setState(309);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(310);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::MIG || _la == Cobol85PreprocessorParser::NOPFD

      || _la == Cobol85PreprocessorParser::PFD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(311);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 114: {
      enterOuterAlt(_localctx, 114);
      setState(312);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::OBJ

      || _la == Cobol85PreprocessorParser::OBJECT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 115: {
      enterOuterAlt(_localctx, 115);
      setState(313);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::OFF

      || _la == Cobol85PreprocessorParser::OFFSET)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 116: {
      enterOuterAlt(_localctx, 116);
      setState(314);
      match(Cobol85PreprocessorParser::OPMARGINS);
      setState(315);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(316);
      literal();
      setState(317);
      match(Cobol85PreprocessorParser::COMMACHAR);
      setState(318);
      literal();
      setState(321);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Cobol85PreprocessorParser::COMMACHAR) {
        setState(319);
        match(Cobol85PreprocessorParser::COMMACHAR);
        setState(320);
        literal();
      }
      setState(323);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 117: {
      enterOuterAlt(_localctx, 117);
      setState(325);
      match(Cobol85PreprocessorParser::OPSEQUENCE);
      setState(326);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(327);
      literal();
      setState(328);
      match(Cobol85PreprocessorParser::COMMACHAR);
      setState(329);
      literal();
      setState(330);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 118: {
      enterOuterAlt(_localctx, 118);
      setState(332);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::OPT

      || _la == Cobol85PreprocessorParser::OPTIMIZE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(333);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(334);
        _la = _input->LA(1);
        if (!(_la == Cobol85PreprocessorParser::FULL || _la == Cobol85PreprocessorParser::STD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(335);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 119: {
      enterOuterAlt(_localctx, 119);
      setState(338);
      match(Cobol85PreprocessorParser::OPTFILE);
      break;
    }

    case 120: {
      enterOuterAlt(_localctx, 120);
      setState(339);
      match(Cobol85PreprocessorParser::OPTIONS);
      break;
    }

    case 121: {
      enterOuterAlt(_localctx, 121);
      setState(340);
      match(Cobol85PreprocessorParser::OP);
      break;
    }

    case 122: {
      enterOuterAlt(_localctx, 122);
      setState(341);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::OUT

      || _la == Cobol85PreprocessorParser::OUTDD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(342);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(343);
      cobolWord();
      setState(344);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 123: {
      enterOuterAlt(_localctx, 123);
      setState(346);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::PGMN

      || _la == Cobol85PreprocessorParser::PGMNAME)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(347);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(348);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::CO

      || _la == Cobol85PreprocessorParser::COMPAT || ((((_la - 85) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 85)) & 2071) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 256)) & 4456449) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(349);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 124: {
      enterOuterAlt(_localctx, 124);
      setState(350);
      match(Cobol85PreprocessorParser::PROLOG);
      break;
    }

    case 125: {
      enterOuterAlt(_localctx, 125);
      setState(351);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::QUOTE

      || _la == Cobol85PreprocessorParser::Q_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 126: {
      enterOuterAlt(_localctx, 126);
      setState(352);
      match(Cobol85PreprocessorParser::RENT);
      break;
    }

    case 127: {
      enterOuterAlt(_localctx, 127);
      setState(353);
      match(Cobol85PreprocessorParser::RMODE);
      setState(354);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(358);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Cobol85PreprocessorParser::ANY: {
          setState(355);
          match(Cobol85PreprocessorParser::ANY);
          break;
        }

        case Cobol85PreprocessorParser::AUTO: {
          setState(356);
          match(Cobol85PreprocessorParser::AUTO);
          break;
        }

        case Cobol85PreprocessorParser::NONNUMERICLITERAL:
        case Cobol85PreprocessorParser::NUMERICLITERAL: {
          setState(357);
          literal();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(360);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 128: {
      enterOuterAlt(_localctx, 128);
      setState(361);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::SEQ

      || _la == Cobol85PreprocessorParser::SEQUENCE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(368);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(362);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(363);
        literal();
        setState(364);
        match(Cobol85PreprocessorParser::COMMACHAR);
        setState(365);
        literal();
        setState(366);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 129: {
      enterOuterAlt(_localctx, 129);
      setState(370);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::SIZE

      || _la == Cobol85PreprocessorParser::SZ)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(371);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(374);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Cobol85PreprocessorParser::MAX: {
          setState(372);
          match(Cobol85PreprocessorParser::MAX);
          break;
        }

        case Cobol85PreprocessorParser::NONNUMERICLITERAL:
        case Cobol85PreprocessorParser::NUMERICLITERAL: {
          setState(373);
          literal();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(376);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 130: {
      enterOuterAlt(_localctx, 130);
      setState(377);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::SOURCE

      || _la == Cobol85PreprocessorParser::S_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 131: {
      enterOuterAlt(_localctx, 131);
      setState(378);
      match(Cobol85PreprocessorParser::SP);
      break;
    }

    case 132: {
      enterOuterAlt(_localctx, 132);
      setState(379);
      match(Cobol85PreprocessorParser::SPACE);
      setState(380);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(381);
      literal();
      setState(382);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 133: {
      enterOuterAlt(_localctx, 133);
      setState(384);
      match(Cobol85PreprocessorParser::SPIE);
      break;
    }

    case 134: {
      enterOuterAlt(_localctx, 134);
      setState(385);
      match(Cobol85PreprocessorParser::SQL);
      setState(390);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(386);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(387);
        literal();
        setState(388);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 135: {
      enterOuterAlt(_localctx, 135);
      setState(392);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::SQLC

      || _la == Cobol85PreprocessorParser::SQLCCSID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 136: {
      enterOuterAlt(_localctx, 136);
      setState(393);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::SSR

      || _la == Cobol85PreprocessorParser::SSRANGE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 137: {
      enterOuterAlt(_localctx, 137);
      setState(394);
      match(Cobol85PreprocessorParser::SYSEIB);
      break;
    }

    case 138: {
      enterOuterAlt(_localctx, 138);
      setState(395);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::TERM

      || _la == Cobol85PreprocessorParser::TERMINAL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 139: {
      enterOuterAlt(_localctx, 139);
      setState(396);
      match(Cobol85PreprocessorParser::TEST);
      setState(414);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(397);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(399);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::HOOK || _la == Cobol85PreprocessorParser::NOHOOK) {
          setState(398);
          _la = _input->LA(1);
          if (!(_la == Cobol85PreprocessorParser::HOOK || _la == Cobol85PreprocessorParser::NOHOOK)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(402);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(401);
          match(Cobol85PreprocessorParser::COMMACHAR);
          break;
        }

        default:
          break;
        }
        setState(405);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 168) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 168)) & 216172782113783811) != 0)) {
          setState(404);
          _la = _input->LA(1);
          if (!(((((_la - 168) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 168)) & 216172782113783811) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(408);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::COMMACHAR) {
          setState(407);
          match(Cobol85PreprocessorParser::COMMACHAR);
        }
        setState(411);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::EJPD || _la == Cobol85PreprocessorParser::NOEJPD) {
          setState(410);
          _la = _input->LA(1);
          if (!(_la == Cobol85PreprocessorParser::EJPD || _la == Cobol85PreprocessorParser::NOEJPD)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(413);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 140: {
      enterOuterAlt(_localctx, 140);
      setState(416);
      match(Cobol85PreprocessorParser::THREAD);
      break;
    }

    case 141: {
      enterOuterAlt(_localctx, 141);
      setState(417);
      match(Cobol85PreprocessorParser::TRUNC);
      setState(418);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(419);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::BIN || _la == Cobol85PreprocessorParser::OPT

      || _la == Cobol85PreprocessorParser::STD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(420);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 142: {
      enterOuterAlt(_localctx, 142);
      setState(421);
      match(Cobol85PreprocessorParser::VBREF);
      break;
    }

    case 143: {
      enterOuterAlt(_localctx, 143);
      setState(422);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::WD

      || _la == Cobol85PreprocessorParser::WORD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(423);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(424);
      cobolWord();
      setState(425);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 144: {
      enterOuterAlt(_localctx, 144);
      setState(427);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::XMLPARSE

      || _la == Cobol85PreprocessorParser::XP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(428);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(429);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::COMPAT || ((((_la - 261) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 261)) & 524417) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(430);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 145: {
      enterOuterAlt(_localctx, 145);
      setState(431);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::XREF

      || _la == Cobol85PreprocessorParser::X_CHAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(437);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(432);
        match(Cobol85PreprocessorParser::LPARENCHAR);
        setState(434);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Cobol85PreprocessorParser::FULL || _la == Cobol85PreprocessorParser::SHORT) {
          setState(433);
          _la = _input->LA(1);
          if (!(_la == Cobol85PreprocessorParser::FULL || _la == Cobol85PreprocessorParser::SHORT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(436);
        match(Cobol85PreprocessorParser::RPARENCHAR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 146: {
      enterOuterAlt(_localctx, 146);
      setState(439);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::YEARWINDOW

      || _la == Cobol85PreprocessorParser::YW)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(440);
      match(Cobol85PreprocessorParser::LPARENCHAR);
      setState(441);
      literal();
      setState(442);
      match(Cobol85PreprocessorParser::RPARENCHAR);
      break;
    }

    case 147: {
      enterOuterAlt(_localctx, 147);
      setState(444);
      match(Cobol85PreprocessorParser::ZWB);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecCicsStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ExecCicsStatementContext::ExecCicsStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecCicsStatementContext::EXEC() {
  return getToken(Cobol85PreprocessorParser::EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecCicsStatementContext::CICS() {
  return getToken(Cobol85PreprocessorParser::CICS, 0);
}

Cobol85PreprocessorParser::CharDataContext* Cobol85PreprocessorParser::ExecCicsStatementContext::charData() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecCicsStatementContext::END_EXEC() {
  return getToken(Cobol85PreprocessorParser::END_EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecCicsStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::ExecCicsStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleExecCicsStatement;
}

void Cobol85PreprocessorParser::ExecCicsStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExecCicsStatement(this);
}

void Cobol85PreprocessorParser::ExecCicsStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExecCicsStatement(this);
}

Cobol85PreprocessorParser::ExecCicsStatementContext* Cobol85PreprocessorParser::execCicsStatement() {
  ExecCicsStatementContext *_localctx = _tracker.createInstance<ExecCicsStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, Cobol85PreprocessorParser::RuleExecCicsStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    match(Cobol85PreprocessorParser::EXEC);
    setState(448);
    match(Cobol85PreprocessorParser::CICS);
    setState(449);
    charData();
    setState(450);
    match(Cobol85PreprocessorParser::END_EXEC);
    setState(452);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(451);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecSqlStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ExecSqlStatementContext::ExecSqlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlStatementContext::EXEC() {
  return getToken(Cobol85PreprocessorParser::EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlStatementContext::SQL() {
  return getToken(Cobol85PreprocessorParser::SQL, 0);
}

Cobol85PreprocessorParser::CharDataSqlContext* Cobol85PreprocessorParser::ExecSqlStatementContext::charDataSql() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataSqlContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlStatementContext::END_EXEC() {
  return getToken(Cobol85PreprocessorParser::END_EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::ExecSqlStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleExecSqlStatement;
}

void Cobol85PreprocessorParser::ExecSqlStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExecSqlStatement(this);
}

void Cobol85PreprocessorParser::ExecSqlStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExecSqlStatement(this);
}

Cobol85PreprocessorParser::ExecSqlStatementContext* Cobol85PreprocessorParser::execSqlStatement() {
  ExecSqlStatementContext *_localctx = _tracker.createInstance<ExecSqlStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, Cobol85PreprocessorParser::RuleExecSqlStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(Cobol85PreprocessorParser::EXEC);
    setState(455);
    match(Cobol85PreprocessorParser::SQL);
    setState(456);
    charDataSql();
    setState(457);
    match(Cobol85PreprocessorParser::END_EXEC);
    setState(459);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(458);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecSqlImsStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ExecSqlImsStatementContext::ExecSqlImsStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlImsStatementContext::EXEC() {
  return getToken(Cobol85PreprocessorParser::EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlImsStatementContext::SQLIMS() {
  return getToken(Cobol85PreprocessorParser::SQLIMS, 0);
}

Cobol85PreprocessorParser::CharDataContext* Cobol85PreprocessorParser::ExecSqlImsStatementContext::charData() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlImsStatementContext::END_EXEC() {
  return getToken(Cobol85PreprocessorParser::END_EXEC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ExecSqlImsStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::ExecSqlImsStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleExecSqlImsStatement;
}

void Cobol85PreprocessorParser::ExecSqlImsStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExecSqlImsStatement(this);
}

void Cobol85PreprocessorParser::ExecSqlImsStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExecSqlImsStatement(this);
}

Cobol85PreprocessorParser::ExecSqlImsStatementContext* Cobol85PreprocessorParser::execSqlImsStatement() {
  ExecSqlImsStatementContext *_localctx = _tracker.createInstance<ExecSqlImsStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, Cobol85PreprocessorParser::RuleExecSqlImsStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(Cobol85PreprocessorParser::EXEC);
    setState(462);
    match(Cobol85PreprocessorParser::SQLIMS);
    setState(463);
    charData();
    setState(464);
    match(Cobol85PreprocessorParser::END_EXEC);
    setState(466);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(465);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopyStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CopyStatementContext::CopyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CopyStatementContext::COPY() {
  return getToken(Cobol85PreprocessorParser::COPY, 0);
}

Cobol85PreprocessorParser::CopySourceContext* Cobol85PreprocessorParser::CopyStatementContext::copySource() {
  return getRuleContext<Cobol85PreprocessorParser::CopySourceContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CopyStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CopyStatementContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::CopyStatementContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}

std::vector<Cobol85PreprocessorParser::DirectoryPhraseContext *> Cobol85PreprocessorParser::CopyStatementContext::directoryPhrase() {
  return getRuleContexts<Cobol85PreprocessorParser::DirectoryPhraseContext>();
}

Cobol85PreprocessorParser::DirectoryPhraseContext* Cobol85PreprocessorParser::CopyStatementContext::directoryPhrase(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::DirectoryPhraseContext>(i);
}

std::vector<Cobol85PreprocessorParser::FamilyPhraseContext *> Cobol85PreprocessorParser::CopyStatementContext::familyPhrase() {
  return getRuleContexts<Cobol85PreprocessorParser::FamilyPhraseContext>();
}

Cobol85PreprocessorParser::FamilyPhraseContext* Cobol85PreprocessorParser::CopyStatementContext::familyPhrase(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::FamilyPhraseContext>(i);
}

std::vector<Cobol85PreprocessorParser::ReplacingPhraseContext *> Cobol85PreprocessorParser::CopyStatementContext::replacingPhrase() {
  return getRuleContexts<Cobol85PreprocessorParser::ReplacingPhraseContext>();
}

Cobol85PreprocessorParser::ReplacingPhraseContext* Cobol85PreprocessorParser::CopyStatementContext::replacingPhrase(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ReplacingPhraseContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CopyStatementContext::SUPPRESS() {
  return getTokens(Cobol85PreprocessorParser::SUPPRESS);
}

tree::TerminalNode* Cobol85PreprocessorParser::CopyStatementContext::SUPPRESS(size_t i) {
  return getToken(Cobol85PreprocessorParser::SUPPRESS, i);
}


size_t Cobol85PreprocessorParser::CopyStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCopyStatement;
}

void Cobol85PreprocessorParser::CopyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCopyStatement(this);
}

void Cobol85PreprocessorParser::CopyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCopyStatement(this);
}

Cobol85PreprocessorParser::CopyStatementContext* Cobol85PreprocessorParser::copyStatement() {
  CopyStatementContext *_localctx = _tracker.createInstance<CopyStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, Cobol85PreprocessorParser::RuleCopyStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(468);
    match(Cobol85PreprocessorParser::COPY);
    setState(469);
    copySource();
    setState(484);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(473);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Cobol85PreprocessorParser::NEWLINE) {
          setState(470);
          match(Cobol85PreprocessorParser::NEWLINE);
          setState(475);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(480);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Cobol85PreprocessorParser::IN:
          case Cobol85PreprocessorParser::OF: {
            setState(476);
            directoryPhrase();
            break;
          }

          case Cobol85PreprocessorParser::ON: {
            setState(477);
            familyPhrase();
            break;
          }

          case Cobol85PreprocessorParser::REPLACING: {
            setState(478);
            replacingPhrase();
            break;
          }

          case Cobol85PreprocessorParser::SUPPRESS: {
            setState(479);
            match(Cobol85PreprocessorParser::SUPPRESS);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(486);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(487);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(493);
    match(Cobol85PreprocessorParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopySourceContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CopySourceContext::CopySourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::CopySourceContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::CopySourceContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

Cobol85PreprocessorParser::FilenameContext* Cobol85PreprocessorParser::CopySourceContext::filename() {
  return getRuleContext<Cobol85PreprocessorParser::FilenameContext>(0);
}

Cobol85PreprocessorParser::CopyLibraryContext* Cobol85PreprocessorParser::CopySourceContext::copyLibrary() {
  return getRuleContext<Cobol85PreprocessorParser::CopyLibraryContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CopySourceContext::OF() {
  return getToken(Cobol85PreprocessorParser::OF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CopySourceContext::IN() {
  return getToken(Cobol85PreprocessorParser::IN, 0);
}


size_t Cobol85PreprocessorParser::CopySourceContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCopySource;
}

void Cobol85PreprocessorParser::CopySourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCopySource(this);
}

void Cobol85PreprocessorParser::CopySourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCopySource(this);
}

Cobol85PreprocessorParser::CopySourceContext* Cobol85PreprocessorParser::copySource() {
  CopySourceContext *_localctx = _tracker.createInstance<CopySourceContext>(_ctx, getState());
  enterRule(_localctx, 16, Cobol85PreprocessorParser::RuleCopySource);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Cobol85PreprocessorParser::NONNUMERICLITERAL:
      case Cobol85PreprocessorParser::NUMERICLITERAL: {
        setState(495);
        literal();
        break;
      }

      case Cobol85PreprocessorParser::ADATA:
      case Cobol85PreprocessorParser::ADV:
      case Cobol85PreprocessorParser::ALIAS:
      case Cobol85PreprocessorParser::ANSI:
      case Cobol85PreprocessorParser::ANY:
      case Cobol85PreprocessorParser::APOST:
      case Cobol85PreprocessorParser::AR:
      case Cobol85PreprocessorParser::ARITH:
      case Cobol85PreprocessorParser::AUTO:
      case Cobol85PreprocessorParser::AWO:
      case Cobol85PreprocessorParser::BIN:
      case Cobol85PreprocessorParser::BLOCK0:
      case Cobol85PreprocessorParser::BUF:
      case Cobol85PreprocessorParser::BUFSIZE:
      case Cobol85PreprocessorParser::BY:
      case Cobol85PreprocessorParser::CBL:
      case Cobol85PreprocessorParser::CBLCARD:
      case Cobol85PreprocessorParser::CO:
      case Cobol85PreprocessorParser::COBOL2:
      case Cobol85PreprocessorParser::COBOL3:
      case Cobol85PreprocessorParser::CODEPAGE:
      case Cobol85PreprocessorParser::COMPAT:
      case Cobol85PreprocessorParser::COMPILE:
      case Cobol85PreprocessorParser::CP:
      case Cobol85PreprocessorParser::CPP:
      case Cobol85PreprocessorParser::CPSM:
      case Cobol85PreprocessorParser::CS:
      case Cobol85PreprocessorParser::CURR:
      case Cobol85PreprocessorParser::CURRENCY:
      case Cobol85PreprocessorParser::DATA:
      case Cobol85PreprocessorParser::DATEPROC:
      case Cobol85PreprocessorParser::DBCS:
      case Cobol85PreprocessorParser::DD:
      case Cobol85PreprocessorParser::DEBUG:
      case Cobol85PreprocessorParser::DECK:
      case Cobol85PreprocessorParser::DIAGTRUNC:
      case Cobol85PreprocessorParser::DLI:
      case Cobol85PreprocessorParser::DLL:
      case Cobol85PreprocessorParser::DP:
      case Cobol85PreprocessorParser::DTR:
      case Cobol85PreprocessorParser::DU:
      case Cobol85PreprocessorParser::DUMP:
      case Cobol85PreprocessorParser::DYN:
      case Cobol85PreprocessorParser::DYNAM:
      case Cobol85PreprocessorParser::EDF:
      case Cobol85PreprocessorParser::EJECT:
      case Cobol85PreprocessorParser::EJPD:
      case Cobol85PreprocessorParser::EN:
      case Cobol85PreprocessorParser::ENGLISH:
      case Cobol85PreprocessorParser::EPILOG:
      case Cobol85PreprocessorParser::EXCI:
      case Cobol85PreprocessorParser::EXIT:
      case Cobol85PreprocessorParser::EXP:
      case Cobol85PreprocessorParser::EXPORTALL:
      case Cobol85PreprocessorParser::EXTEND:
      case Cobol85PreprocessorParser::FASTSRT:
      case Cobol85PreprocessorParser::FLAG:
      case Cobol85PreprocessorParser::FLAGSTD:
      case Cobol85PreprocessorParser::FSRT:
      case Cobol85PreprocessorParser::FULL:
      case Cobol85PreprocessorParser::GDS:
      case Cobol85PreprocessorParser::GRAPHIC:
      case Cobol85PreprocessorParser::HOOK:
      case Cobol85PreprocessorParser::IN:
      case Cobol85PreprocessorParser::INTDATE:
      case Cobol85PreprocessorParser::JA:
      case Cobol85PreprocessorParser::JP:
      case Cobol85PreprocessorParser::KA:
      case Cobol85PreprocessorParser::LANG:
      case Cobol85PreprocessorParser::LANGUAGE:
      case Cobol85PreprocessorParser::LC:
      case Cobol85PreprocessorParser::LENGTH:
      case Cobol85PreprocessorParser::LIB:
      case Cobol85PreprocessorParser::LILIAN:
      case Cobol85PreprocessorParser::LIN:
      case Cobol85PreprocessorParser::LINECOUNT:
      case Cobol85PreprocessorParser::LINKAGE:
      case Cobol85PreprocessorParser::LIST:
      case Cobol85PreprocessorParser::LM:
      case Cobol85PreprocessorParser::LONGMIXED:
      case Cobol85PreprocessorParser::LONGUPPER:
      case Cobol85PreprocessorParser::LU:
      case Cobol85PreprocessorParser::MAP:
      case Cobol85PreprocessorParser::MARGINS:
      case Cobol85PreprocessorParser::MAX:
      case Cobol85PreprocessorParser::MD:
      case Cobol85PreprocessorParser::MDECK:
      case Cobol85PreprocessorParser::MIG:
      case Cobol85PreprocessorParser::MIXED:
      case Cobol85PreprocessorParser::NAME:
      case Cobol85PreprocessorParser::NAT:
      case Cobol85PreprocessorParser::NATIONAL:
      case Cobol85PreprocessorParser::NATLANG:
      case Cobol85PreprocessorParser::NN:
      case Cobol85PreprocessorParser::NO:
      case Cobol85PreprocessorParser::NOADATA:
      case Cobol85PreprocessorParser::NOADV:
      case Cobol85PreprocessorParser::NOALIAS:
      case Cobol85PreprocessorParser::NOAWO:
      case Cobol85PreprocessorParser::NOBLOCK0:
      case Cobol85PreprocessorParser::NOC:
      case Cobol85PreprocessorParser::NOCBLCARD:
      case Cobol85PreprocessorParser::NOCICS:
      case Cobol85PreprocessorParser::NOCMPR2:
      case Cobol85PreprocessorParser::NOCOMPILE:
      case Cobol85PreprocessorParser::NOCPSM:
      case Cobol85PreprocessorParser::NOCURR:
      case Cobol85PreprocessorParser::NOCURRENCY:
      case Cobol85PreprocessorParser::NOD:
      case Cobol85PreprocessorParser::NODATEPROC:
      case Cobol85PreprocessorParser::NODBCS:
      case Cobol85PreprocessorParser::NODE:
      case Cobol85PreprocessorParser::NODEBUG:
      case Cobol85PreprocessorParser::NODECK:
      case Cobol85PreprocessorParser::NODIAGTRUNC:
      case Cobol85PreprocessorParser::NODLL:
      case Cobol85PreprocessorParser::NODU:
      case Cobol85PreprocessorParser::NODUMP:
      case Cobol85PreprocessorParser::NODP:
      case Cobol85PreprocessorParser::NODTR:
      case Cobol85PreprocessorParser::NODYN:
      case Cobol85PreprocessorParser::NODYNAM:
      case Cobol85PreprocessorParser::NOEDF:
      case Cobol85PreprocessorParser::NOEJPD:
      case Cobol85PreprocessorParser::NOEPILOG:
      case Cobol85PreprocessorParser::NOEXIT:
      case Cobol85PreprocessorParser::NOEXP:
      case Cobol85PreprocessorParser::NOEXPORTALL:
      case Cobol85PreprocessorParser::NOF:
      case Cobol85PreprocessorParser::NOFASTSRT:
      case Cobol85PreprocessorParser::NOFEPI:
      case Cobol85PreprocessorParser::NOFLAG:
      case Cobol85PreprocessorParser::NOFLAGMIG:
      case Cobol85PreprocessorParser::NOFLAGSTD:
      case Cobol85PreprocessorParser::NOFSRT:
      case Cobol85PreprocessorParser::NOGRAPHIC:
      case Cobol85PreprocessorParser::NOHOOK:
      case Cobol85PreprocessorParser::NOLENGTH:
      case Cobol85PreprocessorParser::NOLIB:
      case Cobol85PreprocessorParser::NOLINKAGE:
      case Cobol85PreprocessorParser::NOLIST:
      case Cobol85PreprocessorParser::NOMAP:
      case Cobol85PreprocessorParser::NOMD:
      case Cobol85PreprocessorParser::NOMDECK:
      case Cobol85PreprocessorParser::NONAME:
      case Cobol85PreprocessorParser::NONUM:
      case Cobol85PreprocessorParser::NONUMBER:
      case Cobol85PreprocessorParser::NOOBJ:
      case Cobol85PreprocessorParser::NOOBJECT:
      case Cobol85PreprocessorParser::NOOFF:
      case Cobol85PreprocessorParser::NOOFFSET:
      case Cobol85PreprocessorParser::NOOPSEQUENCE:
      case Cobol85PreprocessorParser::NOOPT:
      case Cobol85PreprocessorParser::NOOPTIMIZE:
      case Cobol85PreprocessorParser::NOOPTIONS:
      case Cobol85PreprocessorParser::NOP:
      case Cobol85PreprocessorParser::NOPFD:
      case Cobol85PreprocessorParser::NOPROLOG:
      case Cobol85PreprocessorParser::NORENT:
      case Cobol85PreprocessorParser::NOS:
      case Cobol85PreprocessorParser::NOSEP:
      case Cobol85PreprocessorParser::NOSEPARATE:
      case Cobol85PreprocessorParser::NOSEQ:
      case Cobol85PreprocessorParser::NOSOURCE:
      case Cobol85PreprocessorParser::NOSPIE:
      case Cobol85PreprocessorParser::NOSQL:
      case Cobol85PreprocessorParser::NOSQLC:
      case Cobol85PreprocessorParser::NOSQLCCSID:
      case Cobol85PreprocessorParser::NOSSR:
      case Cobol85PreprocessorParser::NOSSRANGE:
      case Cobol85PreprocessorParser::NOSTDTRUNC:
      case Cobol85PreprocessorParser::NOSEQUENCE:
      case Cobol85PreprocessorParser::NOTERM:
      case Cobol85PreprocessorParser::NOTERMINAL:
      case Cobol85PreprocessorParser::NOTEST:
      case Cobol85PreprocessorParser::NOTHREAD:
      case Cobol85PreprocessorParser::NOTRIG:
      case Cobol85PreprocessorParser::NOVBREF:
      case Cobol85PreprocessorParser::NOWORD:
      case Cobol85PreprocessorParser::NOX:
      case Cobol85PreprocessorParser::NOXREF:
      case Cobol85PreprocessorParser::NOZWB:
      case Cobol85PreprocessorParser::NS:
      case Cobol85PreprocessorParser::NSEQ:
      case Cobol85PreprocessorParser::NSYMBOL:
      case Cobol85PreprocessorParser::NUM:
      case Cobol85PreprocessorParser::NUMBER:
      case Cobol85PreprocessorParser::NUMPROC:
      case Cobol85PreprocessorParser::OBJ:
      case Cobol85PreprocessorParser::OBJECT:
      case Cobol85PreprocessorParser::OF:
      case Cobol85PreprocessorParser::OFF:
      case Cobol85PreprocessorParser::OFFSET:
      case Cobol85PreprocessorParser::ON:
      case Cobol85PreprocessorParser::OP:
      case Cobol85PreprocessorParser::OPMARGINS:
      case Cobol85PreprocessorParser::OPSEQUENCE:
      case Cobol85PreprocessorParser::OPT:
      case Cobol85PreprocessorParser::OPTFILE:
      case Cobol85PreprocessorParser::OPTIMIZE:
      case Cobol85PreprocessorParser::OPTIONS:
      case Cobol85PreprocessorParser::OUT:
      case Cobol85PreprocessorParser::OUTDD:
      case Cobol85PreprocessorParser::PFD:
      case Cobol85PreprocessorParser::PPTDBG:
      case Cobol85PreprocessorParser::PGMN:
      case Cobol85PreprocessorParser::PGMNAME:
      case Cobol85PreprocessorParser::PROCESS:
      case Cobol85PreprocessorParser::PROLOG:
      case Cobol85PreprocessorParser::QUOTE:
      case Cobol85PreprocessorParser::RENT:
      case Cobol85PreprocessorParser::REPLACING:
      case Cobol85PreprocessorParser::RMODE:
      case Cobol85PreprocessorParser::SEP:
      case Cobol85PreprocessorParser::SEPARATE:
      case Cobol85PreprocessorParser::SEQ:
      case Cobol85PreprocessorParser::SEQUENCE:
      case Cobol85PreprocessorParser::SHORT:
      case Cobol85PreprocessorParser::SIZE:
      case Cobol85PreprocessorParser::SOURCE:
      case Cobol85PreprocessorParser::SP:
      case Cobol85PreprocessorParser::SPACE:
      case Cobol85PreprocessorParser::SPIE:
      case Cobol85PreprocessorParser::SQL:
      case Cobol85PreprocessorParser::SQLC:
      case Cobol85PreprocessorParser::SQLCCSID:
      case Cobol85PreprocessorParser::SS:
      case Cobol85PreprocessorParser::SSR:
      case Cobol85PreprocessorParser::SSRANGE:
      case Cobol85PreprocessorParser::STD:
      case Cobol85PreprocessorParser::SYSEIB:
      case Cobol85PreprocessorParser::SZ:
      case Cobol85PreprocessorParser::TERM:
      case Cobol85PreprocessorParser::TERMINAL:
      case Cobol85PreprocessorParser::TEST:
      case Cobol85PreprocessorParser::THREAD:
      case Cobol85PreprocessorParser::TITLE:
      case Cobol85PreprocessorParser::TRIG:
      case Cobol85PreprocessorParser::TRUNC:
      case Cobol85PreprocessorParser::UE:
      case Cobol85PreprocessorParser::UPPER:
      case Cobol85PreprocessorParser::VBREF:
      case Cobol85PreprocessorParser::WD:
      case Cobol85PreprocessorParser::XMLPARSE:
      case Cobol85PreprocessorParser::XMLSS:
      case Cobol85PreprocessorParser::XOPTS:
      case Cobol85PreprocessorParser::XREF:
      case Cobol85PreprocessorParser::YEARWINDOW:
      case Cobol85PreprocessorParser::YW:
      case Cobol85PreprocessorParser::ZWB:
      case Cobol85PreprocessorParser::C_CHAR:
      case Cobol85PreprocessorParser::D_CHAR:
      case Cobol85PreprocessorParser::E_CHAR:
      case Cobol85PreprocessorParser::F_CHAR:
      case Cobol85PreprocessorParser::H_CHAR:
      case Cobol85PreprocessorParser::I_CHAR:
      case Cobol85PreprocessorParser::M_CHAR:
      case Cobol85PreprocessorParser::N_CHAR:
      case Cobol85PreprocessorParser::Q_CHAR:
      case Cobol85PreprocessorParser::S_CHAR:
      case Cobol85PreprocessorParser::U_CHAR:
      case Cobol85PreprocessorParser::W_CHAR:
      case Cobol85PreprocessorParser::X_CHAR:
      case Cobol85PreprocessorParser::COMMACHAR:
      case Cobol85PreprocessorParser::IDENTIFIER: {
        setState(496);
        cobolWord();
        break;
      }

      case Cobol85PreprocessorParser::FILENAME: {
        setState(497);
        filename();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(502);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(500);
      _la = _input->LA(1);
      if (!(_la == Cobol85PreprocessorParser::IN || _la == Cobol85PreprocessorParser::OF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(501);
      copyLibrary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopyLibraryContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CopyLibraryContext::CopyLibraryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::CopyLibraryContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::CopyLibraryContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}


size_t Cobol85PreprocessorParser::CopyLibraryContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCopyLibrary;
}

void Cobol85PreprocessorParser::CopyLibraryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCopyLibrary(this);
}

void Cobol85PreprocessorParser::CopyLibraryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCopyLibrary(this);
}

Cobol85PreprocessorParser::CopyLibraryContext* Cobol85PreprocessorParser::copyLibrary() {
  CopyLibraryContext *_localctx = _tracker.createInstance<CopyLibraryContext>(_ctx, getState());
  enterRule(_localctx, 18, Cobol85PreprocessorParser::RuleCopyLibrary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Cobol85PreprocessorParser::NONNUMERICLITERAL:
      case Cobol85PreprocessorParser::NUMERICLITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(504);
        literal();
        break;
      }

      case Cobol85PreprocessorParser::ADATA:
      case Cobol85PreprocessorParser::ADV:
      case Cobol85PreprocessorParser::ALIAS:
      case Cobol85PreprocessorParser::ANSI:
      case Cobol85PreprocessorParser::ANY:
      case Cobol85PreprocessorParser::APOST:
      case Cobol85PreprocessorParser::AR:
      case Cobol85PreprocessorParser::ARITH:
      case Cobol85PreprocessorParser::AUTO:
      case Cobol85PreprocessorParser::AWO:
      case Cobol85PreprocessorParser::BIN:
      case Cobol85PreprocessorParser::BLOCK0:
      case Cobol85PreprocessorParser::BUF:
      case Cobol85PreprocessorParser::BUFSIZE:
      case Cobol85PreprocessorParser::BY:
      case Cobol85PreprocessorParser::CBL:
      case Cobol85PreprocessorParser::CBLCARD:
      case Cobol85PreprocessorParser::CO:
      case Cobol85PreprocessorParser::COBOL2:
      case Cobol85PreprocessorParser::COBOL3:
      case Cobol85PreprocessorParser::CODEPAGE:
      case Cobol85PreprocessorParser::COMPAT:
      case Cobol85PreprocessorParser::COMPILE:
      case Cobol85PreprocessorParser::CP:
      case Cobol85PreprocessorParser::CPP:
      case Cobol85PreprocessorParser::CPSM:
      case Cobol85PreprocessorParser::CS:
      case Cobol85PreprocessorParser::CURR:
      case Cobol85PreprocessorParser::CURRENCY:
      case Cobol85PreprocessorParser::DATA:
      case Cobol85PreprocessorParser::DATEPROC:
      case Cobol85PreprocessorParser::DBCS:
      case Cobol85PreprocessorParser::DD:
      case Cobol85PreprocessorParser::DEBUG:
      case Cobol85PreprocessorParser::DECK:
      case Cobol85PreprocessorParser::DIAGTRUNC:
      case Cobol85PreprocessorParser::DLI:
      case Cobol85PreprocessorParser::DLL:
      case Cobol85PreprocessorParser::DP:
      case Cobol85PreprocessorParser::DTR:
      case Cobol85PreprocessorParser::DU:
      case Cobol85PreprocessorParser::DUMP:
      case Cobol85PreprocessorParser::DYN:
      case Cobol85PreprocessorParser::DYNAM:
      case Cobol85PreprocessorParser::EDF:
      case Cobol85PreprocessorParser::EJECT:
      case Cobol85PreprocessorParser::EJPD:
      case Cobol85PreprocessorParser::EN:
      case Cobol85PreprocessorParser::ENGLISH:
      case Cobol85PreprocessorParser::EPILOG:
      case Cobol85PreprocessorParser::EXCI:
      case Cobol85PreprocessorParser::EXIT:
      case Cobol85PreprocessorParser::EXP:
      case Cobol85PreprocessorParser::EXPORTALL:
      case Cobol85PreprocessorParser::EXTEND:
      case Cobol85PreprocessorParser::FASTSRT:
      case Cobol85PreprocessorParser::FLAG:
      case Cobol85PreprocessorParser::FLAGSTD:
      case Cobol85PreprocessorParser::FSRT:
      case Cobol85PreprocessorParser::FULL:
      case Cobol85PreprocessorParser::GDS:
      case Cobol85PreprocessorParser::GRAPHIC:
      case Cobol85PreprocessorParser::HOOK:
      case Cobol85PreprocessorParser::IN:
      case Cobol85PreprocessorParser::INTDATE:
      case Cobol85PreprocessorParser::JA:
      case Cobol85PreprocessorParser::JP:
      case Cobol85PreprocessorParser::KA:
      case Cobol85PreprocessorParser::LANG:
      case Cobol85PreprocessorParser::LANGUAGE:
      case Cobol85PreprocessorParser::LC:
      case Cobol85PreprocessorParser::LENGTH:
      case Cobol85PreprocessorParser::LIB:
      case Cobol85PreprocessorParser::LILIAN:
      case Cobol85PreprocessorParser::LIN:
      case Cobol85PreprocessorParser::LINECOUNT:
      case Cobol85PreprocessorParser::LINKAGE:
      case Cobol85PreprocessorParser::LIST:
      case Cobol85PreprocessorParser::LM:
      case Cobol85PreprocessorParser::LONGMIXED:
      case Cobol85PreprocessorParser::LONGUPPER:
      case Cobol85PreprocessorParser::LU:
      case Cobol85PreprocessorParser::MAP:
      case Cobol85PreprocessorParser::MARGINS:
      case Cobol85PreprocessorParser::MAX:
      case Cobol85PreprocessorParser::MD:
      case Cobol85PreprocessorParser::MDECK:
      case Cobol85PreprocessorParser::MIG:
      case Cobol85PreprocessorParser::MIXED:
      case Cobol85PreprocessorParser::NAME:
      case Cobol85PreprocessorParser::NAT:
      case Cobol85PreprocessorParser::NATIONAL:
      case Cobol85PreprocessorParser::NATLANG:
      case Cobol85PreprocessorParser::NN:
      case Cobol85PreprocessorParser::NO:
      case Cobol85PreprocessorParser::NOADATA:
      case Cobol85PreprocessorParser::NOADV:
      case Cobol85PreprocessorParser::NOALIAS:
      case Cobol85PreprocessorParser::NOAWO:
      case Cobol85PreprocessorParser::NOBLOCK0:
      case Cobol85PreprocessorParser::NOC:
      case Cobol85PreprocessorParser::NOCBLCARD:
      case Cobol85PreprocessorParser::NOCICS:
      case Cobol85PreprocessorParser::NOCMPR2:
      case Cobol85PreprocessorParser::NOCOMPILE:
      case Cobol85PreprocessorParser::NOCPSM:
      case Cobol85PreprocessorParser::NOCURR:
      case Cobol85PreprocessorParser::NOCURRENCY:
      case Cobol85PreprocessorParser::NOD:
      case Cobol85PreprocessorParser::NODATEPROC:
      case Cobol85PreprocessorParser::NODBCS:
      case Cobol85PreprocessorParser::NODE:
      case Cobol85PreprocessorParser::NODEBUG:
      case Cobol85PreprocessorParser::NODECK:
      case Cobol85PreprocessorParser::NODIAGTRUNC:
      case Cobol85PreprocessorParser::NODLL:
      case Cobol85PreprocessorParser::NODU:
      case Cobol85PreprocessorParser::NODUMP:
      case Cobol85PreprocessorParser::NODP:
      case Cobol85PreprocessorParser::NODTR:
      case Cobol85PreprocessorParser::NODYN:
      case Cobol85PreprocessorParser::NODYNAM:
      case Cobol85PreprocessorParser::NOEDF:
      case Cobol85PreprocessorParser::NOEJPD:
      case Cobol85PreprocessorParser::NOEPILOG:
      case Cobol85PreprocessorParser::NOEXIT:
      case Cobol85PreprocessorParser::NOEXP:
      case Cobol85PreprocessorParser::NOEXPORTALL:
      case Cobol85PreprocessorParser::NOF:
      case Cobol85PreprocessorParser::NOFASTSRT:
      case Cobol85PreprocessorParser::NOFEPI:
      case Cobol85PreprocessorParser::NOFLAG:
      case Cobol85PreprocessorParser::NOFLAGMIG:
      case Cobol85PreprocessorParser::NOFLAGSTD:
      case Cobol85PreprocessorParser::NOFSRT:
      case Cobol85PreprocessorParser::NOGRAPHIC:
      case Cobol85PreprocessorParser::NOHOOK:
      case Cobol85PreprocessorParser::NOLENGTH:
      case Cobol85PreprocessorParser::NOLIB:
      case Cobol85PreprocessorParser::NOLINKAGE:
      case Cobol85PreprocessorParser::NOLIST:
      case Cobol85PreprocessorParser::NOMAP:
      case Cobol85PreprocessorParser::NOMD:
      case Cobol85PreprocessorParser::NOMDECK:
      case Cobol85PreprocessorParser::NONAME:
      case Cobol85PreprocessorParser::NONUM:
      case Cobol85PreprocessorParser::NONUMBER:
      case Cobol85PreprocessorParser::NOOBJ:
      case Cobol85PreprocessorParser::NOOBJECT:
      case Cobol85PreprocessorParser::NOOFF:
      case Cobol85PreprocessorParser::NOOFFSET:
      case Cobol85PreprocessorParser::NOOPSEQUENCE:
      case Cobol85PreprocessorParser::NOOPT:
      case Cobol85PreprocessorParser::NOOPTIMIZE:
      case Cobol85PreprocessorParser::NOOPTIONS:
      case Cobol85PreprocessorParser::NOP:
      case Cobol85PreprocessorParser::NOPFD:
      case Cobol85PreprocessorParser::NOPROLOG:
      case Cobol85PreprocessorParser::NORENT:
      case Cobol85PreprocessorParser::NOS:
      case Cobol85PreprocessorParser::NOSEP:
      case Cobol85PreprocessorParser::NOSEPARATE:
      case Cobol85PreprocessorParser::NOSEQ:
      case Cobol85PreprocessorParser::NOSOURCE:
      case Cobol85PreprocessorParser::NOSPIE:
      case Cobol85PreprocessorParser::NOSQL:
      case Cobol85PreprocessorParser::NOSQLC:
      case Cobol85PreprocessorParser::NOSQLCCSID:
      case Cobol85PreprocessorParser::NOSSR:
      case Cobol85PreprocessorParser::NOSSRANGE:
      case Cobol85PreprocessorParser::NOSTDTRUNC:
      case Cobol85PreprocessorParser::NOSEQUENCE:
      case Cobol85PreprocessorParser::NOTERM:
      case Cobol85PreprocessorParser::NOTERMINAL:
      case Cobol85PreprocessorParser::NOTEST:
      case Cobol85PreprocessorParser::NOTHREAD:
      case Cobol85PreprocessorParser::NOTRIG:
      case Cobol85PreprocessorParser::NOVBREF:
      case Cobol85PreprocessorParser::NOWORD:
      case Cobol85PreprocessorParser::NOX:
      case Cobol85PreprocessorParser::NOXREF:
      case Cobol85PreprocessorParser::NOZWB:
      case Cobol85PreprocessorParser::NS:
      case Cobol85PreprocessorParser::NSEQ:
      case Cobol85PreprocessorParser::NSYMBOL:
      case Cobol85PreprocessorParser::NUM:
      case Cobol85PreprocessorParser::NUMBER:
      case Cobol85PreprocessorParser::NUMPROC:
      case Cobol85PreprocessorParser::OBJ:
      case Cobol85PreprocessorParser::OBJECT:
      case Cobol85PreprocessorParser::OF:
      case Cobol85PreprocessorParser::OFF:
      case Cobol85PreprocessorParser::OFFSET:
      case Cobol85PreprocessorParser::ON:
      case Cobol85PreprocessorParser::OP:
      case Cobol85PreprocessorParser::OPMARGINS:
      case Cobol85PreprocessorParser::OPSEQUENCE:
      case Cobol85PreprocessorParser::OPT:
      case Cobol85PreprocessorParser::OPTFILE:
      case Cobol85PreprocessorParser::OPTIMIZE:
      case Cobol85PreprocessorParser::OPTIONS:
      case Cobol85PreprocessorParser::OUT:
      case Cobol85PreprocessorParser::OUTDD:
      case Cobol85PreprocessorParser::PFD:
      case Cobol85PreprocessorParser::PPTDBG:
      case Cobol85PreprocessorParser::PGMN:
      case Cobol85PreprocessorParser::PGMNAME:
      case Cobol85PreprocessorParser::PROCESS:
      case Cobol85PreprocessorParser::PROLOG:
      case Cobol85PreprocessorParser::QUOTE:
      case Cobol85PreprocessorParser::RENT:
      case Cobol85PreprocessorParser::REPLACING:
      case Cobol85PreprocessorParser::RMODE:
      case Cobol85PreprocessorParser::SEP:
      case Cobol85PreprocessorParser::SEPARATE:
      case Cobol85PreprocessorParser::SEQ:
      case Cobol85PreprocessorParser::SEQUENCE:
      case Cobol85PreprocessorParser::SHORT:
      case Cobol85PreprocessorParser::SIZE:
      case Cobol85PreprocessorParser::SOURCE:
      case Cobol85PreprocessorParser::SP:
      case Cobol85PreprocessorParser::SPACE:
      case Cobol85PreprocessorParser::SPIE:
      case Cobol85PreprocessorParser::SQL:
      case Cobol85PreprocessorParser::SQLC:
      case Cobol85PreprocessorParser::SQLCCSID:
      case Cobol85PreprocessorParser::SS:
      case Cobol85PreprocessorParser::SSR:
      case Cobol85PreprocessorParser::SSRANGE:
      case Cobol85PreprocessorParser::STD:
      case Cobol85PreprocessorParser::SYSEIB:
      case Cobol85PreprocessorParser::SZ:
      case Cobol85PreprocessorParser::TERM:
      case Cobol85PreprocessorParser::TERMINAL:
      case Cobol85PreprocessorParser::TEST:
      case Cobol85PreprocessorParser::THREAD:
      case Cobol85PreprocessorParser::TITLE:
      case Cobol85PreprocessorParser::TRIG:
      case Cobol85PreprocessorParser::TRUNC:
      case Cobol85PreprocessorParser::UE:
      case Cobol85PreprocessorParser::UPPER:
      case Cobol85PreprocessorParser::VBREF:
      case Cobol85PreprocessorParser::WD:
      case Cobol85PreprocessorParser::XMLPARSE:
      case Cobol85PreprocessorParser::XMLSS:
      case Cobol85PreprocessorParser::XOPTS:
      case Cobol85PreprocessorParser::XREF:
      case Cobol85PreprocessorParser::YEARWINDOW:
      case Cobol85PreprocessorParser::YW:
      case Cobol85PreprocessorParser::ZWB:
      case Cobol85PreprocessorParser::C_CHAR:
      case Cobol85PreprocessorParser::D_CHAR:
      case Cobol85PreprocessorParser::E_CHAR:
      case Cobol85PreprocessorParser::F_CHAR:
      case Cobol85PreprocessorParser::H_CHAR:
      case Cobol85PreprocessorParser::I_CHAR:
      case Cobol85PreprocessorParser::M_CHAR:
      case Cobol85PreprocessorParser::N_CHAR:
      case Cobol85PreprocessorParser::Q_CHAR:
      case Cobol85PreprocessorParser::S_CHAR:
      case Cobol85PreprocessorParser::U_CHAR:
      case Cobol85PreprocessorParser::W_CHAR:
      case Cobol85PreprocessorParser::X_CHAR:
      case Cobol85PreprocessorParser::COMMACHAR:
      case Cobol85PreprocessorParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(505);
        cobolWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacingPhraseContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplacingPhraseContext::ReplacingPhraseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplacingPhraseContext::REPLACING() {
  return getToken(Cobol85PreprocessorParser::REPLACING, 0);
}

std::vector<Cobol85PreprocessorParser::ReplaceClauseContext *> Cobol85PreprocessorParser::ReplacingPhraseContext::replaceClause() {
  return getRuleContexts<Cobol85PreprocessorParser::ReplaceClauseContext>();
}

Cobol85PreprocessorParser::ReplaceClauseContext* Cobol85PreprocessorParser::ReplacingPhraseContext::replaceClause(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceClauseContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::ReplacingPhraseContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplacingPhraseContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::ReplacingPhraseContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplacingPhrase;
}

void Cobol85PreprocessorParser::ReplacingPhraseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplacingPhrase(this);
}

void Cobol85PreprocessorParser::ReplacingPhraseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplacingPhrase(this);
}

Cobol85PreprocessorParser::ReplacingPhraseContext* Cobol85PreprocessorParser::replacingPhrase() {
  ReplacingPhraseContext *_localctx = _tracker.createInstance<ReplacingPhraseContext>(_ctx, getState());
  enterRule(_localctx, 20, Cobol85PreprocessorParser::RuleReplacingPhrase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(Cobol85PreprocessorParser::REPLACING);
    setState(512);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(509);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(514);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(515);
    replaceClause();
    setState(524);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(517); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(516);
          match(Cobol85PreprocessorParser::NEWLINE);
          setState(519); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Cobol85PreprocessorParser::NEWLINE);
        setState(521);
        replaceClause(); 
      }
      setState(526);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplaceAreaContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplaceAreaContext::ReplaceAreaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::ReplaceByStatementContext* Cobol85PreprocessorParser::ReplaceAreaContext::replaceByStatement() {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceByStatementContext>(0);
}

std::vector<Cobol85PreprocessorParser::CopyStatementContext *> Cobol85PreprocessorParser::ReplaceAreaContext::copyStatement() {
  return getRuleContexts<Cobol85PreprocessorParser::CopyStatementContext>();
}

Cobol85PreprocessorParser::CopyStatementContext* Cobol85PreprocessorParser::ReplaceAreaContext::copyStatement(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CopyStatementContext>(i);
}

std::vector<Cobol85PreprocessorParser::CharDataContext *> Cobol85PreprocessorParser::ReplaceAreaContext::charData() {
  return getRuleContexts<Cobol85PreprocessorParser::CharDataContext>();
}

Cobol85PreprocessorParser::CharDataContext* Cobol85PreprocessorParser::ReplaceAreaContext::charData(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CharDataContext>(i);
}

Cobol85PreprocessorParser::ReplaceOffStatementContext* Cobol85PreprocessorParser::ReplaceAreaContext::replaceOffStatement() {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceOffStatementContext>(0);
}


size_t Cobol85PreprocessorParser::ReplaceAreaContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplaceArea;
}

void Cobol85PreprocessorParser::ReplaceAreaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplaceArea(this);
}

void Cobol85PreprocessorParser::ReplaceAreaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplaceArea(this);
}

Cobol85PreprocessorParser::ReplaceAreaContext* Cobol85PreprocessorParser::replaceArea() {
  ReplaceAreaContext *_localctx = _tracker.createInstance<ReplaceAreaContext>(_ctx, getState());
  enterRule(_localctx, 22, Cobol85PreprocessorParser::RuleReplaceArea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(527);
    replaceByStatement();
    setState(532);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(530);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Cobol85PreprocessorParser::COPY: {
            setState(528);
            copyStatement();
            break;
          }

          case Cobol85PreprocessorParser::ADATA:
          case Cobol85PreprocessorParser::ADV:
          case Cobol85PreprocessorParser::ALIAS:
          case Cobol85PreprocessorParser::ANSI:
          case Cobol85PreprocessorParser::ANY:
          case Cobol85PreprocessorParser::APOST:
          case Cobol85PreprocessorParser::AR:
          case Cobol85PreprocessorParser::ARITH:
          case Cobol85PreprocessorParser::AUTO:
          case Cobol85PreprocessorParser::AWO:
          case Cobol85PreprocessorParser::BIN:
          case Cobol85PreprocessorParser::BLOCK0:
          case Cobol85PreprocessorParser::BUF:
          case Cobol85PreprocessorParser::BUFSIZE:
          case Cobol85PreprocessorParser::BY:
          case Cobol85PreprocessorParser::CBL:
          case Cobol85PreprocessorParser::CBLCARD:
          case Cobol85PreprocessorParser::CO:
          case Cobol85PreprocessorParser::COBOL2:
          case Cobol85PreprocessorParser::COBOL3:
          case Cobol85PreprocessorParser::CODEPAGE:
          case Cobol85PreprocessorParser::COMPAT:
          case Cobol85PreprocessorParser::COMPILE:
          case Cobol85PreprocessorParser::CP:
          case Cobol85PreprocessorParser::CPP:
          case Cobol85PreprocessorParser::CPSM:
          case Cobol85PreprocessorParser::CS:
          case Cobol85PreprocessorParser::CURR:
          case Cobol85PreprocessorParser::CURRENCY:
          case Cobol85PreprocessorParser::DATA:
          case Cobol85PreprocessorParser::DATEPROC:
          case Cobol85PreprocessorParser::DBCS:
          case Cobol85PreprocessorParser::DD:
          case Cobol85PreprocessorParser::DEBUG:
          case Cobol85PreprocessorParser::DECK:
          case Cobol85PreprocessorParser::DIAGTRUNC:
          case Cobol85PreprocessorParser::DLI:
          case Cobol85PreprocessorParser::DLL:
          case Cobol85PreprocessorParser::DP:
          case Cobol85PreprocessorParser::DTR:
          case Cobol85PreprocessorParser::DU:
          case Cobol85PreprocessorParser::DUMP:
          case Cobol85PreprocessorParser::DYN:
          case Cobol85PreprocessorParser::DYNAM:
          case Cobol85PreprocessorParser::EDF:
          case Cobol85PreprocessorParser::EJECT:
          case Cobol85PreprocessorParser::EJPD:
          case Cobol85PreprocessorParser::EN:
          case Cobol85PreprocessorParser::ENGLISH:
          case Cobol85PreprocessorParser::EPILOG:
          case Cobol85PreprocessorParser::EXCI:
          case Cobol85PreprocessorParser::EXIT:
          case Cobol85PreprocessorParser::EXP:
          case Cobol85PreprocessorParser::EXPORTALL:
          case Cobol85PreprocessorParser::EXTEND:
          case Cobol85PreprocessorParser::FASTSRT:
          case Cobol85PreprocessorParser::FLAG:
          case Cobol85PreprocessorParser::FLAGSTD:
          case Cobol85PreprocessorParser::FSRT:
          case Cobol85PreprocessorParser::FULL:
          case Cobol85PreprocessorParser::GDS:
          case Cobol85PreprocessorParser::GRAPHIC:
          case Cobol85PreprocessorParser::HOOK:
          case Cobol85PreprocessorParser::IN:
          case Cobol85PreprocessorParser::INTDATE:
          case Cobol85PreprocessorParser::JA:
          case Cobol85PreprocessorParser::JP:
          case Cobol85PreprocessorParser::KA:
          case Cobol85PreprocessorParser::LANG:
          case Cobol85PreprocessorParser::LANGUAGE:
          case Cobol85PreprocessorParser::LC:
          case Cobol85PreprocessorParser::LENGTH:
          case Cobol85PreprocessorParser::LIB:
          case Cobol85PreprocessorParser::LILIAN:
          case Cobol85PreprocessorParser::LIN:
          case Cobol85PreprocessorParser::LINECOUNT:
          case Cobol85PreprocessorParser::LINKAGE:
          case Cobol85PreprocessorParser::LIST:
          case Cobol85PreprocessorParser::LM:
          case Cobol85PreprocessorParser::LONGMIXED:
          case Cobol85PreprocessorParser::LONGUPPER:
          case Cobol85PreprocessorParser::LPARENCHAR:
          case Cobol85PreprocessorParser::LU:
          case Cobol85PreprocessorParser::MAP:
          case Cobol85PreprocessorParser::MARGINS:
          case Cobol85PreprocessorParser::MAX:
          case Cobol85PreprocessorParser::MD:
          case Cobol85PreprocessorParser::MDECK:
          case Cobol85PreprocessorParser::MIG:
          case Cobol85PreprocessorParser::MIXED:
          case Cobol85PreprocessorParser::NAME:
          case Cobol85PreprocessorParser::NAT:
          case Cobol85PreprocessorParser::NATIONAL:
          case Cobol85PreprocessorParser::NATLANG:
          case Cobol85PreprocessorParser::NN:
          case Cobol85PreprocessorParser::NO:
          case Cobol85PreprocessorParser::NOADATA:
          case Cobol85PreprocessorParser::NOADV:
          case Cobol85PreprocessorParser::NOALIAS:
          case Cobol85PreprocessorParser::NOAWO:
          case Cobol85PreprocessorParser::NOBLOCK0:
          case Cobol85PreprocessorParser::NOC:
          case Cobol85PreprocessorParser::NOCBLCARD:
          case Cobol85PreprocessorParser::NOCICS:
          case Cobol85PreprocessorParser::NOCMPR2:
          case Cobol85PreprocessorParser::NOCOMPILE:
          case Cobol85PreprocessorParser::NOCPSM:
          case Cobol85PreprocessorParser::NOCURR:
          case Cobol85PreprocessorParser::NOCURRENCY:
          case Cobol85PreprocessorParser::NOD:
          case Cobol85PreprocessorParser::NODATEPROC:
          case Cobol85PreprocessorParser::NODBCS:
          case Cobol85PreprocessorParser::NODE:
          case Cobol85PreprocessorParser::NODEBUG:
          case Cobol85PreprocessorParser::NODECK:
          case Cobol85PreprocessorParser::NODIAGTRUNC:
          case Cobol85PreprocessorParser::NODLL:
          case Cobol85PreprocessorParser::NODU:
          case Cobol85PreprocessorParser::NODUMP:
          case Cobol85PreprocessorParser::NODP:
          case Cobol85PreprocessorParser::NODTR:
          case Cobol85PreprocessorParser::NODYN:
          case Cobol85PreprocessorParser::NODYNAM:
          case Cobol85PreprocessorParser::NOEDF:
          case Cobol85PreprocessorParser::NOEJPD:
          case Cobol85PreprocessorParser::NOEPILOG:
          case Cobol85PreprocessorParser::NOEXIT:
          case Cobol85PreprocessorParser::NOEXP:
          case Cobol85PreprocessorParser::NOEXPORTALL:
          case Cobol85PreprocessorParser::NOF:
          case Cobol85PreprocessorParser::NOFASTSRT:
          case Cobol85PreprocessorParser::NOFEPI:
          case Cobol85PreprocessorParser::NOFLAG:
          case Cobol85PreprocessorParser::NOFLAGMIG:
          case Cobol85PreprocessorParser::NOFLAGSTD:
          case Cobol85PreprocessorParser::NOFSRT:
          case Cobol85PreprocessorParser::NOGRAPHIC:
          case Cobol85PreprocessorParser::NOHOOK:
          case Cobol85PreprocessorParser::NOLENGTH:
          case Cobol85PreprocessorParser::NOLIB:
          case Cobol85PreprocessorParser::NOLINKAGE:
          case Cobol85PreprocessorParser::NOLIST:
          case Cobol85PreprocessorParser::NOMAP:
          case Cobol85PreprocessorParser::NOMD:
          case Cobol85PreprocessorParser::NOMDECK:
          case Cobol85PreprocessorParser::NONAME:
          case Cobol85PreprocessorParser::NONUM:
          case Cobol85PreprocessorParser::NONUMBER:
          case Cobol85PreprocessorParser::NOOBJ:
          case Cobol85PreprocessorParser::NOOBJECT:
          case Cobol85PreprocessorParser::NOOFF:
          case Cobol85PreprocessorParser::NOOFFSET:
          case Cobol85PreprocessorParser::NOOPSEQUENCE:
          case Cobol85PreprocessorParser::NOOPT:
          case Cobol85PreprocessorParser::NOOPTIMIZE:
          case Cobol85PreprocessorParser::NOOPTIONS:
          case Cobol85PreprocessorParser::NOP:
          case Cobol85PreprocessorParser::NOPFD:
          case Cobol85PreprocessorParser::NOPROLOG:
          case Cobol85PreprocessorParser::NORENT:
          case Cobol85PreprocessorParser::NOS:
          case Cobol85PreprocessorParser::NOSEP:
          case Cobol85PreprocessorParser::NOSEPARATE:
          case Cobol85PreprocessorParser::NOSEQ:
          case Cobol85PreprocessorParser::NOSOURCE:
          case Cobol85PreprocessorParser::NOSPIE:
          case Cobol85PreprocessorParser::NOSQL:
          case Cobol85PreprocessorParser::NOSQLC:
          case Cobol85PreprocessorParser::NOSQLCCSID:
          case Cobol85PreprocessorParser::NOSSR:
          case Cobol85PreprocessorParser::NOSSRANGE:
          case Cobol85PreprocessorParser::NOSTDTRUNC:
          case Cobol85PreprocessorParser::NOSEQUENCE:
          case Cobol85PreprocessorParser::NOTERM:
          case Cobol85PreprocessorParser::NOTERMINAL:
          case Cobol85PreprocessorParser::NOTEST:
          case Cobol85PreprocessorParser::NOTHREAD:
          case Cobol85PreprocessorParser::NOTRIG:
          case Cobol85PreprocessorParser::NOVBREF:
          case Cobol85PreprocessorParser::NOWORD:
          case Cobol85PreprocessorParser::NOX:
          case Cobol85PreprocessorParser::NOXREF:
          case Cobol85PreprocessorParser::NOZWB:
          case Cobol85PreprocessorParser::NS:
          case Cobol85PreprocessorParser::NSEQ:
          case Cobol85PreprocessorParser::NSYMBOL:
          case Cobol85PreprocessorParser::NUM:
          case Cobol85PreprocessorParser::NUMBER:
          case Cobol85PreprocessorParser::NUMPROC:
          case Cobol85PreprocessorParser::OBJ:
          case Cobol85PreprocessorParser::OBJECT:
          case Cobol85PreprocessorParser::OF:
          case Cobol85PreprocessorParser::OFF:
          case Cobol85PreprocessorParser::OFFSET:
          case Cobol85PreprocessorParser::ON:
          case Cobol85PreprocessorParser::OP:
          case Cobol85PreprocessorParser::OPMARGINS:
          case Cobol85PreprocessorParser::OPSEQUENCE:
          case Cobol85PreprocessorParser::OPT:
          case Cobol85PreprocessorParser::OPTFILE:
          case Cobol85PreprocessorParser::OPTIMIZE:
          case Cobol85PreprocessorParser::OPTIONS:
          case Cobol85PreprocessorParser::OUT:
          case Cobol85PreprocessorParser::OUTDD:
          case Cobol85PreprocessorParser::PFD:
          case Cobol85PreprocessorParser::PPTDBG:
          case Cobol85PreprocessorParser::PGMN:
          case Cobol85PreprocessorParser::PGMNAME:
          case Cobol85PreprocessorParser::PROCESS:
          case Cobol85PreprocessorParser::PROLOG:
          case Cobol85PreprocessorParser::QUOTE:
          case Cobol85PreprocessorParser::RENT:
          case Cobol85PreprocessorParser::REPLACING:
          case Cobol85PreprocessorParser::RMODE:
          case Cobol85PreprocessorParser::RPARENCHAR:
          case Cobol85PreprocessorParser::SEP:
          case Cobol85PreprocessorParser::SEPARATE:
          case Cobol85PreprocessorParser::SEQ:
          case Cobol85PreprocessorParser::SEQUENCE:
          case Cobol85PreprocessorParser::SHORT:
          case Cobol85PreprocessorParser::SIZE:
          case Cobol85PreprocessorParser::SOURCE:
          case Cobol85PreprocessorParser::SP:
          case Cobol85PreprocessorParser::SPACE:
          case Cobol85PreprocessorParser::SPIE:
          case Cobol85PreprocessorParser::SQL:
          case Cobol85PreprocessorParser::SQLC:
          case Cobol85PreprocessorParser::SQLCCSID:
          case Cobol85PreprocessorParser::SS:
          case Cobol85PreprocessorParser::SSR:
          case Cobol85PreprocessorParser::SSRANGE:
          case Cobol85PreprocessorParser::STD:
          case Cobol85PreprocessorParser::SYSEIB:
          case Cobol85PreprocessorParser::SZ:
          case Cobol85PreprocessorParser::TERM:
          case Cobol85PreprocessorParser::TERMINAL:
          case Cobol85PreprocessorParser::TEST:
          case Cobol85PreprocessorParser::THREAD:
          case Cobol85PreprocessorParser::TITLE:
          case Cobol85PreprocessorParser::TRIG:
          case Cobol85PreprocessorParser::TRUNC:
          case Cobol85PreprocessorParser::UE:
          case Cobol85PreprocessorParser::UPPER:
          case Cobol85PreprocessorParser::VBREF:
          case Cobol85PreprocessorParser::WD:
          case Cobol85PreprocessorParser::XMLPARSE:
          case Cobol85PreprocessorParser::XMLSS:
          case Cobol85PreprocessorParser::XOPTS:
          case Cobol85PreprocessorParser::XREF:
          case Cobol85PreprocessorParser::YEARWINDOW:
          case Cobol85PreprocessorParser::YW:
          case Cobol85PreprocessorParser::ZWB:
          case Cobol85PreprocessorParser::C_CHAR:
          case Cobol85PreprocessorParser::D_CHAR:
          case Cobol85PreprocessorParser::E_CHAR:
          case Cobol85PreprocessorParser::F_CHAR:
          case Cobol85PreprocessorParser::H_CHAR:
          case Cobol85PreprocessorParser::I_CHAR:
          case Cobol85PreprocessorParser::M_CHAR:
          case Cobol85PreprocessorParser::N_CHAR:
          case Cobol85PreprocessorParser::Q_CHAR:
          case Cobol85PreprocessorParser::S_CHAR:
          case Cobol85PreprocessorParser::U_CHAR:
          case Cobol85PreprocessorParser::W_CHAR:
          case Cobol85PreprocessorParser::X_CHAR:
          case Cobol85PreprocessorParser::COMMACHAR:
          case Cobol85PreprocessorParser::DOT:
          case Cobol85PreprocessorParser::NONNUMERICLITERAL:
          case Cobol85PreprocessorParser::NUMERICLITERAL:
          case Cobol85PreprocessorParser::IDENTIFIER:
          case Cobol85PreprocessorParser::FILENAME:
          case Cobol85PreprocessorParser::NEWLINE:
          case Cobol85PreprocessorParser::TEXT: {
            setState(529);
            charData();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(534);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(536);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(535);
      replaceOffStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplaceByStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplaceByStatementContext::ReplaceByStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceByStatementContext::REPLACE() {
  return getToken(Cobol85PreprocessorParser::REPLACE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceByStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}

std::vector<Cobol85PreprocessorParser::ReplaceClauseContext *> Cobol85PreprocessorParser::ReplaceByStatementContext::replaceClause() {
  return getRuleContexts<Cobol85PreprocessorParser::ReplaceClauseContext>();
}

Cobol85PreprocessorParser::ReplaceClauseContext* Cobol85PreprocessorParser::ReplaceByStatementContext::replaceClause(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceClauseContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::ReplaceByStatementContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceByStatementContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::ReplaceByStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplaceByStatement;
}

void Cobol85PreprocessorParser::ReplaceByStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplaceByStatement(this);
}

void Cobol85PreprocessorParser::ReplaceByStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplaceByStatement(this);
}

Cobol85PreprocessorParser::ReplaceByStatementContext* Cobol85PreprocessorParser::replaceByStatement() {
  ReplaceByStatementContext *_localctx = _tracker.createInstance<ReplaceByStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, Cobol85PreprocessorParser::RuleReplaceByStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(538);
    match(Cobol85PreprocessorParser::REPLACE);
    setState(546); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(542);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == Cobol85PreprocessorParser::NEWLINE) {
                setState(539);
                match(Cobol85PreprocessorParser::NEWLINE);
                setState(544);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(545);
              replaceClause();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(548); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(550);
    match(Cobol85PreprocessorParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplaceOffStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplaceOffStatementContext::ReplaceOffStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceOffStatementContext::REPLACE() {
  return getToken(Cobol85PreprocessorParser::REPLACE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceOffStatementContext::OFF() {
  return getToken(Cobol85PreprocessorParser::OFF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceOffStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::ReplaceOffStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplaceOffStatement;
}

void Cobol85PreprocessorParser::ReplaceOffStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplaceOffStatement(this);
}

void Cobol85PreprocessorParser::ReplaceOffStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplaceOffStatement(this);
}

Cobol85PreprocessorParser::ReplaceOffStatementContext* Cobol85PreprocessorParser::replaceOffStatement() {
  ReplaceOffStatementContext *_localctx = _tracker.createInstance<ReplaceOffStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, Cobol85PreprocessorParser::RuleReplaceOffStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    match(Cobol85PreprocessorParser::REPLACE);
    setState(553);
    match(Cobol85PreprocessorParser::OFF);
    setState(554);
    match(Cobol85PreprocessorParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplaceClauseContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplaceClauseContext::ReplaceClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::ReplaceableContext* Cobol85PreprocessorParser::ReplaceClauseContext::replaceable() {
  return getRuleContext<Cobol85PreprocessorParser::ReplaceableContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceClauseContext::BY() {
  return getToken(Cobol85PreprocessorParser::BY, 0);
}

Cobol85PreprocessorParser::ReplacementContext* Cobol85PreprocessorParser::ReplaceClauseContext::replacement() {
  return getRuleContext<Cobol85PreprocessorParser::ReplacementContext>(0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::ReplaceClauseContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::ReplaceClauseContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}

Cobol85PreprocessorParser::DirectoryPhraseContext* Cobol85PreprocessorParser::ReplaceClauseContext::directoryPhrase() {
  return getRuleContext<Cobol85PreprocessorParser::DirectoryPhraseContext>(0);
}

Cobol85PreprocessorParser::FamilyPhraseContext* Cobol85PreprocessorParser::ReplaceClauseContext::familyPhrase() {
  return getRuleContext<Cobol85PreprocessorParser::FamilyPhraseContext>(0);
}


size_t Cobol85PreprocessorParser::ReplaceClauseContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplaceClause;
}

void Cobol85PreprocessorParser::ReplaceClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplaceClause(this);
}

void Cobol85PreprocessorParser::ReplaceClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplaceClause(this);
}

Cobol85PreprocessorParser::ReplaceClauseContext* Cobol85PreprocessorParser::replaceClause() {
  ReplaceClauseContext *_localctx = _tracker.createInstance<ReplaceClauseContext>(_ctx, getState());
  enterRule(_localctx, 28, Cobol85PreprocessorParser::RuleReplaceClause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    replaceable();
    setState(560);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(557);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(562);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(563);
    match(Cobol85PreprocessorParser::BY);
    setState(567);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(564);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(569);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(570);
    replacement();
    setState(578);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Cobol85PreprocessorParser::NEWLINE) {
        setState(571);
        match(Cobol85PreprocessorParser::NEWLINE);
        setState(576);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(577);
      directoryPhrase();
      break;
    }

    default:
      break;
    }
    setState(587);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(583);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Cobol85PreprocessorParser::NEWLINE) {
        setState(580);
        match(Cobol85PreprocessorParser::NEWLINE);
        setState(585);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(586);
      familyPhrase();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectoryPhraseContext ------------------------------------------------------------------

Cobol85PreprocessorParser::DirectoryPhraseContext::DirectoryPhraseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::DirectoryPhraseContext::OF() {
  return getToken(Cobol85PreprocessorParser::OF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::DirectoryPhraseContext::IN() {
  return getToken(Cobol85PreprocessorParser::IN, 0);
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::DirectoryPhraseContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::DirectoryPhraseContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::DirectoryPhraseContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::DirectoryPhraseContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::DirectoryPhraseContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleDirectoryPhrase;
}

void Cobol85PreprocessorParser::DirectoryPhraseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectoryPhrase(this);
}

void Cobol85PreprocessorParser::DirectoryPhraseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectoryPhrase(this);
}

Cobol85PreprocessorParser::DirectoryPhraseContext* Cobol85PreprocessorParser::directoryPhrase() {
  DirectoryPhraseContext *_localctx = _tracker.createInstance<DirectoryPhraseContext>(_ctx, getState());
  enterRule(_localctx, 30, Cobol85PreprocessorParser::RuleDirectoryPhrase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    _la = _input->LA(1);
    if (!(_la == Cobol85PreprocessorParser::IN || _la == Cobol85PreprocessorParser::OF)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(593);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(590);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(595);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(598);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Cobol85PreprocessorParser::NONNUMERICLITERAL:
      case Cobol85PreprocessorParser::NUMERICLITERAL: {
        setState(596);
        literal();
        break;
      }

      case Cobol85PreprocessorParser::ADATA:
      case Cobol85PreprocessorParser::ADV:
      case Cobol85PreprocessorParser::ALIAS:
      case Cobol85PreprocessorParser::ANSI:
      case Cobol85PreprocessorParser::ANY:
      case Cobol85PreprocessorParser::APOST:
      case Cobol85PreprocessorParser::AR:
      case Cobol85PreprocessorParser::ARITH:
      case Cobol85PreprocessorParser::AUTO:
      case Cobol85PreprocessorParser::AWO:
      case Cobol85PreprocessorParser::BIN:
      case Cobol85PreprocessorParser::BLOCK0:
      case Cobol85PreprocessorParser::BUF:
      case Cobol85PreprocessorParser::BUFSIZE:
      case Cobol85PreprocessorParser::BY:
      case Cobol85PreprocessorParser::CBL:
      case Cobol85PreprocessorParser::CBLCARD:
      case Cobol85PreprocessorParser::CO:
      case Cobol85PreprocessorParser::COBOL2:
      case Cobol85PreprocessorParser::COBOL3:
      case Cobol85PreprocessorParser::CODEPAGE:
      case Cobol85PreprocessorParser::COMPAT:
      case Cobol85PreprocessorParser::COMPILE:
      case Cobol85PreprocessorParser::CP:
      case Cobol85PreprocessorParser::CPP:
      case Cobol85PreprocessorParser::CPSM:
      case Cobol85PreprocessorParser::CS:
      case Cobol85PreprocessorParser::CURR:
      case Cobol85PreprocessorParser::CURRENCY:
      case Cobol85PreprocessorParser::DATA:
      case Cobol85PreprocessorParser::DATEPROC:
      case Cobol85PreprocessorParser::DBCS:
      case Cobol85PreprocessorParser::DD:
      case Cobol85PreprocessorParser::DEBUG:
      case Cobol85PreprocessorParser::DECK:
      case Cobol85PreprocessorParser::DIAGTRUNC:
      case Cobol85PreprocessorParser::DLI:
      case Cobol85PreprocessorParser::DLL:
      case Cobol85PreprocessorParser::DP:
      case Cobol85PreprocessorParser::DTR:
      case Cobol85PreprocessorParser::DU:
      case Cobol85PreprocessorParser::DUMP:
      case Cobol85PreprocessorParser::DYN:
      case Cobol85PreprocessorParser::DYNAM:
      case Cobol85PreprocessorParser::EDF:
      case Cobol85PreprocessorParser::EJECT:
      case Cobol85PreprocessorParser::EJPD:
      case Cobol85PreprocessorParser::EN:
      case Cobol85PreprocessorParser::ENGLISH:
      case Cobol85PreprocessorParser::EPILOG:
      case Cobol85PreprocessorParser::EXCI:
      case Cobol85PreprocessorParser::EXIT:
      case Cobol85PreprocessorParser::EXP:
      case Cobol85PreprocessorParser::EXPORTALL:
      case Cobol85PreprocessorParser::EXTEND:
      case Cobol85PreprocessorParser::FASTSRT:
      case Cobol85PreprocessorParser::FLAG:
      case Cobol85PreprocessorParser::FLAGSTD:
      case Cobol85PreprocessorParser::FSRT:
      case Cobol85PreprocessorParser::FULL:
      case Cobol85PreprocessorParser::GDS:
      case Cobol85PreprocessorParser::GRAPHIC:
      case Cobol85PreprocessorParser::HOOK:
      case Cobol85PreprocessorParser::IN:
      case Cobol85PreprocessorParser::INTDATE:
      case Cobol85PreprocessorParser::JA:
      case Cobol85PreprocessorParser::JP:
      case Cobol85PreprocessorParser::KA:
      case Cobol85PreprocessorParser::LANG:
      case Cobol85PreprocessorParser::LANGUAGE:
      case Cobol85PreprocessorParser::LC:
      case Cobol85PreprocessorParser::LENGTH:
      case Cobol85PreprocessorParser::LIB:
      case Cobol85PreprocessorParser::LILIAN:
      case Cobol85PreprocessorParser::LIN:
      case Cobol85PreprocessorParser::LINECOUNT:
      case Cobol85PreprocessorParser::LINKAGE:
      case Cobol85PreprocessorParser::LIST:
      case Cobol85PreprocessorParser::LM:
      case Cobol85PreprocessorParser::LONGMIXED:
      case Cobol85PreprocessorParser::LONGUPPER:
      case Cobol85PreprocessorParser::LU:
      case Cobol85PreprocessorParser::MAP:
      case Cobol85PreprocessorParser::MARGINS:
      case Cobol85PreprocessorParser::MAX:
      case Cobol85PreprocessorParser::MD:
      case Cobol85PreprocessorParser::MDECK:
      case Cobol85PreprocessorParser::MIG:
      case Cobol85PreprocessorParser::MIXED:
      case Cobol85PreprocessorParser::NAME:
      case Cobol85PreprocessorParser::NAT:
      case Cobol85PreprocessorParser::NATIONAL:
      case Cobol85PreprocessorParser::NATLANG:
      case Cobol85PreprocessorParser::NN:
      case Cobol85PreprocessorParser::NO:
      case Cobol85PreprocessorParser::NOADATA:
      case Cobol85PreprocessorParser::NOADV:
      case Cobol85PreprocessorParser::NOALIAS:
      case Cobol85PreprocessorParser::NOAWO:
      case Cobol85PreprocessorParser::NOBLOCK0:
      case Cobol85PreprocessorParser::NOC:
      case Cobol85PreprocessorParser::NOCBLCARD:
      case Cobol85PreprocessorParser::NOCICS:
      case Cobol85PreprocessorParser::NOCMPR2:
      case Cobol85PreprocessorParser::NOCOMPILE:
      case Cobol85PreprocessorParser::NOCPSM:
      case Cobol85PreprocessorParser::NOCURR:
      case Cobol85PreprocessorParser::NOCURRENCY:
      case Cobol85PreprocessorParser::NOD:
      case Cobol85PreprocessorParser::NODATEPROC:
      case Cobol85PreprocessorParser::NODBCS:
      case Cobol85PreprocessorParser::NODE:
      case Cobol85PreprocessorParser::NODEBUG:
      case Cobol85PreprocessorParser::NODECK:
      case Cobol85PreprocessorParser::NODIAGTRUNC:
      case Cobol85PreprocessorParser::NODLL:
      case Cobol85PreprocessorParser::NODU:
      case Cobol85PreprocessorParser::NODUMP:
      case Cobol85PreprocessorParser::NODP:
      case Cobol85PreprocessorParser::NODTR:
      case Cobol85PreprocessorParser::NODYN:
      case Cobol85PreprocessorParser::NODYNAM:
      case Cobol85PreprocessorParser::NOEDF:
      case Cobol85PreprocessorParser::NOEJPD:
      case Cobol85PreprocessorParser::NOEPILOG:
      case Cobol85PreprocessorParser::NOEXIT:
      case Cobol85PreprocessorParser::NOEXP:
      case Cobol85PreprocessorParser::NOEXPORTALL:
      case Cobol85PreprocessorParser::NOF:
      case Cobol85PreprocessorParser::NOFASTSRT:
      case Cobol85PreprocessorParser::NOFEPI:
      case Cobol85PreprocessorParser::NOFLAG:
      case Cobol85PreprocessorParser::NOFLAGMIG:
      case Cobol85PreprocessorParser::NOFLAGSTD:
      case Cobol85PreprocessorParser::NOFSRT:
      case Cobol85PreprocessorParser::NOGRAPHIC:
      case Cobol85PreprocessorParser::NOHOOK:
      case Cobol85PreprocessorParser::NOLENGTH:
      case Cobol85PreprocessorParser::NOLIB:
      case Cobol85PreprocessorParser::NOLINKAGE:
      case Cobol85PreprocessorParser::NOLIST:
      case Cobol85PreprocessorParser::NOMAP:
      case Cobol85PreprocessorParser::NOMD:
      case Cobol85PreprocessorParser::NOMDECK:
      case Cobol85PreprocessorParser::NONAME:
      case Cobol85PreprocessorParser::NONUM:
      case Cobol85PreprocessorParser::NONUMBER:
      case Cobol85PreprocessorParser::NOOBJ:
      case Cobol85PreprocessorParser::NOOBJECT:
      case Cobol85PreprocessorParser::NOOFF:
      case Cobol85PreprocessorParser::NOOFFSET:
      case Cobol85PreprocessorParser::NOOPSEQUENCE:
      case Cobol85PreprocessorParser::NOOPT:
      case Cobol85PreprocessorParser::NOOPTIMIZE:
      case Cobol85PreprocessorParser::NOOPTIONS:
      case Cobol85PreprocessorParser::NOP:
      case Cobol85PreprocessorParser::NOPFD:
      case Cobol85PreprocessorParser::NOPROLOG:
      case Cobol85PreprocessorParser::NORENT:
      case Cobol85PreprocessorParser::NOS:
      case Cobol85PreprocessorParser::NOSEP:
      case Cobol85PreprocessorParser::NOSEPARATE:
      case Cobol85PreprocessorParser::NOSEQ:
      case Cobol85PreprocessorParser::NOSOURCE:
      case Cobol85PreprocessorParser::NOSPIE:
      case Cobol85PreprocessorParser::NOSQL:
      case Cobol85PreprocessorParser::NOSQLC:
      case Cobol85PreprocessorParser::NOSQLCCSID:
      case Cobol85PreprocessorParser::NOSSR:
      case Cobol85PreprocessorParser::NOSSRANGE:
      case Cobol85PreprocessorParser::NOSTDTRUNC:
      case Cobol85PreprocessorParser::NOSEQUENCE:
      case Cobol85PreprocessorParser::NOTERM:
      case Cobol85PreprocessorParser::NOTERMINAL:
      case Cobol85PreprocessorParser::NOTEST:
      case Cobol85PreprocessorParser::NOTHREAD:
      case Cobol85PreprocessorParser::NOTRIG:
      case Cobol85PreprocessorParser::NOVBREF:
      case Cobol85PreprocessorParser::NOWORD:
      case Cobol85PreprocessorParser::NOX:
      case Cobol85PreprocessorParser::NOXREF:
      case Cobol85PreprocessorParser::NOZWB:
      case Cobol85PreprocessorParser::NS:
      case Cobol85PreprocessorParser::NSEQ:
      case Cobol85PreprocessorParser::NSYMBOL:
      case Cobol85PreprocessorParser::NUM:
      case Cobol85PreprocessorParser::NUMBER:
      case Cobol85PreprocessorParser::NUMPROC:
      case Cobol85PreprocessorParser::OBJ:
      case Cobol85PreprocessorParser::OBJECT:
      case Cobol85PreprocessorParser::OF:
      case Cobol85PreprocessorParser::OFF:
      case Cobol85PreprocessorParser::OFFSET:
      case Cobol85PreprocessorParser::ON:
      case Cobol85PreprocessorParser::OP:
      case Cobol85PreprocessorParser::OPMARGINS:
      case Cobol85PreprocessorParser::OPSEQUENCE:
      case Cobol85PreprocessorParser::OPT:
      case Cobol85PreprocessorParser::OPTFILE:
      case Cobol85PreprocessorParser::OPTIMIZE:
      case Cobol85PreprocessorParser::OPTIONS:
      case Cobol85PreprocessorParser::OUT:
      case Cobol85PreprocessorParser::OUTDD:
      case Cobol85PreprocessorParser::PFD:
      case Cobol85PreprocessorParser::PPTDBG:
      case Cobol85PreprocessorParser::PGMN:
      case Cobol85PreprocessorParser::PGMNAME:
      case Cobol85PreprocessorParser::PROCESS:
      case Cobol85PreprocessorParser::PROLOG:
      case Cobol85PreprocessorParser::QUOTE:
      case Cobol85PreprocessorParser::RENT:
      case Cobol85PreprocessorParser::REPLACING:
      case Cobol85PreprocessorParser::RMODE:
      case Cobol85PreprocessorParser::SEP:
      case Cobol85PreprocessorParser::SEPARATE:
      case Cobol85PreprocessorParser::SEQ:
      case Cobol85PreprocessorParser::SEQUENCE:
      case Cobol85PreprocessorParser::SHORT:
      case Cobol85PreprocessorParser::SIZE:
      case Cobol85PreprocessorParser::SOURCE:
      case Cobol85PreprocessorParser::SP:
      case Cobol85PreprocessorParser::SPACE:
      case Cobol85PreprocessorParser::SPIE:
      case Cobol85PreprocessorParser::SQL:
      case Cobol85PreprocessorParser::SQLC:
      case Cobol85PreprocessorParser::SQLCCSID:
      case Cobol85PreprocessorParser::SS:
      case Cobol85PreprocessorParser::SSR:
      case Cobol85PreprocessorParser::SSRANGE:
      case Cobol85PreprocessorParser::STD:
      case Cobol85PreprocessorParser::SYSEIB:
      case Cobol85PreprocessorParser::SZ:
      case Cobol85PreprocessorParser::TERM:
      case Cobol85PreprocessorParser::TERMINAL:
      case Cobol85PreprocessorParser::TEST:
      case Cobol85PreprocessorParser::THREAD:
      case Cobol85PreprocessorParser::TITLE:
      case Cobol85PreprocessorParser::TRIG:
      case Cobol85PreprocessorParser::TRUNC:
      case Cobol85PreprocessorParser::UE:
      case Cobol85PreprocessorParser::UPPER:
      case Cobol85PreprocessorParser::VBREF:
      case Cobol85PreprocessorParser::WD:
      case Cobol85PreprocessorParser::XMLPARSE:
      case Cobol85PreprocessorParser::XMLSS:
      case Cobol85PreprocessorParser::XOPTS:
      case Cobol85PreprocessorParser::XREF:
      case Cobol85PreprocessorParser::YEARWINDOW:
      case Cobol85PreprocessorParser::YW:
      case Cobol85PreprocessorParser::ZWB:
      case Cobol85PreprocessorParser::C_CHAR:
      case Cobol85PreprocessorParser::D_CHAR:
      case Cobol85PreprocessorParser::E_CHAR:
      case Cobol85PreprocessorParser::F_CHAR:
      case Cobol85PreprocessorParser::H_CHAR:
      case Cobol85PreprocessorParser::I_CHAR:
      case Cobol85PreprocessorParser::M_CHAR:
      case Cobol85PreprocessorParser::N_CHAR:
      case Cobol85PreprocessorParser::Q_CHAR:
      case Cobol85PreprocessorParser::S_CHAR:
      case Cobol85PreprocessorParser::U_CHAR:
      case Cobol85PreprocessorParser::W_CHAR:
      case Cobol85PreprocessorParser::X_CHAR:
      case Cobol85PreprocessorParser::COMMACHAR:
      case Cobol85PreprocessorParser::IDENTIFIER: {
        setState(597);
        cobolWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FamilyPhraseContext ------------------------------------------------------------------

Cobol85PreprocessorParser::FamilyPhraseContext::FamilyPhraseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::FamilyPhraseContext::ON() {
  return getToken(Cobol85PreprocessorParser::ON, 0);
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::FamilyPhraseContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::FamilyPhraseContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::FamilyPhraseContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::FamilyPhraseContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::FamilyPhraseContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleFamilyPhrase;
}

void Cobol85PreprocessorParser::FamilyPhraseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFamilyPhrase(this);
}

void Cobol85PreprocessorParser::FamilyPhraseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFamilyPhrase(this);
}

Cobol85PreprocessorParser::FamilyPhraseContext* Cobol85PreprocessorParser::familyPhrase() {
  FamilyPhraseContext *_localctx = _tracker.createInstance<FamilyPhraseContext>(_ctx, getState());
  enterRule(_localctx, 32, Cobol85PreprocessorParser::RuleFamilyPhrase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(Cobol85PreprocessorParser::ON);
    setState(604);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Cobol85PreprocessorParser::NEWLINE) {
      setState(601);
      match(Cobol85PreprocessorParser::NEWLINE);
      setState(606);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(609);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Cobol85PreprocessorParser::NONNUMERICLITERAL:
      case Cobol85PreprocessorParser::NUMERICLITERAL: {
        setState(607);
        literal();
        break;
      }

      case Cobol85PreprocessorParser::ADATA:
      case Cobol85PreprocessorParser::ADV:
      case Cobol85PreprocessorParser::ALIAS:
      case Cobol85PreprocessorParser::ANSI:
      case Cobol85PreprocessorParser::ANY:
      case Cobol85PreprocessorParser::APOST:
      case Cobol85PreprocessorParser::AR:
      case Cobol85PreprocessorParser::ARITH:
      case Cobol85PreprocessorParser::AUTO:
      case Cobol85PreprocessorParser::AWO:
      case Cobol85PreprocessorParser::BIN:
      case Cobol85PreprocessorParser::BLOCK0:
      case Cobol85PreprocessorParser::BUF:
      case Cobol85PreprocessorParser::BUFSIZE:
      case Cobol85PreprocessorParser::BY:
      case Cobol85PreprocessorParser::CBL:
      case Cobol85PreprocessorParser::CBLCARD:
      case Cobol85PreprocessorParser::CO:
      case Cobol85PreprocessorParser::COBOL2:
      case Cobol85PreprocessorParser::COBOL3:
      case Cobol85PreprocessorParser::CODEPAGE:
      case Cobol85PreprocessorParser::COMPAT:
      case Cobol85PreprocessorParser::COMPILE:
      case Cobol85PreprocessorParser::CP:
      case Cobol85PreprocessorParser::CPP:
      case Cobol85PreprocessorParser::CPSM:
      case Cobol85PreprocessorParser::CS:
      case Cobol85PreprocessorParser::CURR:
      case Cobol85PreprocessorParser::CURRENCY:
      case Cobol85PreprocessorParser::DATA:
      case Cobol85PreprocessorParser::DATEPROC:
      case Cobol85PreprocessorParser::DBCS:
      case Cobol85PreprocessorParser::DD:
      case Cobol85PreprocessorParser::DEBUG:
      case Cobol85PreprocessorParser::DECK:
      case Cobol85PreprocessorParser::DIAGTRUNC:
      case Cobol85PreprocessorParser::DLI:
      case Cobol85PreprocessorParser::DLL:
      case Cobol85PreprocessorParser::DP:
      case Cobol85PreprocessorParser::DTR:
      case Cobol85PreprocessorParser::DU:
      case Cobol85PreprocessorParser::DUMP:
      case Cobol85PreprocessorParser::DYN:
      case Cobol85PreprocessorParser::DYNAM:
      case Cobol85PreprocessorParser::EDF:
      case Cobol85PreprocessorParser::EJECT:
      case Cobol85PreprocessorParser::EJPD:
      case Cobol85PreprocessorParser::EN:
      case Cobol85PreprocessorParser::ENGLISH:
      case Cobol85PreprocessorParser::EPILOG:
      case Cobol85PreprocessorParser::EXCI:
      case Cobol85PreprocessorParser::EXIT:
      case Cobol85PreprocessorParser::EXP:
      case Cobol85PreprocessorParser::EXPORTALL:
      case Cobol85PreprocessorParser::EXTEND:
      case Cobol85PreprocessorParser::FASTSRT:
      case Cobol85PreprocessorParser::FLAG:
      case Cobol85PreprocessorParser::FLAGSTD:
      case Cobol85PreprocessorParser::FSRT:
      case Cobol85PreprocessorParser::FULL:
      case Cobol85PreprocessorParser::GDS:
      case Cobol85PreprocessorParser::GRAPHIC:
      case Cobol85PreprocessorParser::HOOK:
      case Cobol85PreprocessorParser::IN:
      case Cobol85PreprocessorParser::INTDATE:
      case Cobol85PreprocessorParser::JA:
      case Cobol85PreprocessorParser::JP:
      case Cobol85PreprocessorParser::KA:
      case Cobol85PreprocessorParser::LANG:
      case Cobol85PreprocessorParser::LANGUAGE:
      case Cobol85PreprocessorParser::LC:
      case Cobol85PreprocessorParser::LENGTH:
      case Cobol85PreprocessorParser::LIB:
      case Cobol85PreprocessorParser::LILIAN:
      case Cobol85PreprocessorParser::LIN:
      case Cobol85PreprocessorParser::LINECOUNT:
      case Cobol85PreprocessorParser::LINKAGE:
      case Cobol85PreprocessorParser::LIST:
      case Cobol85PreprocessorParser::LM:
      case Cobol85PreprocessorParser::LONGMIXED:
      case Cobol85PreprocessorParser::LONGUPPER:
      case Cobol85PreprocessorParser::LU:
      case Cobol85PreprocessorParser::MAP:
      case Cobol85PreprocessorParser::MARGINS:
      case Cobol85PreprocessorParser::MAX:
      case Cobol85PreprocessorParser::MD:
      case Cobol85PreprocessorParser::MDECK:
      case Cobol85PreprocessorParser::MIG:
      case Cobol85PreprocessorParser::MIXED:
      case Cobol85PreprocessorParser::NAME:
      case Cobol85PreprocessorParser::NAT:
      case Cobol85PreprocessorParser::NATIONAL:
      case Cobol85PreprocessorParser::NATLANG:
      case Cobol85PreprocessorParser::NN:
      case Cobol85PreprocessorParser::NO:
      case Cobol85PreprocessorParser::NOADATA:
      case Cobol85PreprocessorParser::NOADV:
      case Cobol85PreprocessorParser::NOALIAS:
      case Cobol85PreprocessorParser::NOAWO:
      case Cobol85PreprocessorParser::NOBLOCK0:
      case Cobol85PreprocessorParser::NOC:
      case Cobol85PreprocessorParser::NOCBLCARD:
      case Cobol85PreprocessorParser::NOCICS:
      case Cobol85PreprocessorParser::NOCMPR2:
      case Cobol85PreprocessorParser::NOCOMPILE:
      case Cobol85PreprocessorParser::NOCPSM:
      case Cobol85PreprocessorParser::NOCURR:
      case Cobol85PreprocessorParser::NOCURRENCY:
      case Cobol85PreprocessorParser::NOD:
      case Cobol85PreprocessorParser::NODATEPROC:
      case Cobol85PreprocessorParser::NODBCS:
      case Cobol85PreprocessorParser::NODE:
      case Cobol85PreprocessorParser::NODEBUG:
      case Cobol85PreprocessorParser::NODECK:
      case Cobol85PreprocessorParser::NODIAGTRUNC:
      case Cobol85PreprocessorParser::NODLL:
      case Cobol85PreprocessorParser::NODU:
      case Cobol85PreprocessorParser::NODUMP:
      case Cobol85PreprocessorParser::NODP:
      case Cobol85PreprocessorParser::NODTR:
      case Cobol85PreprocessorParser::NODYN:
      case Cobol85PreprocessorParser::NODYNAM:
      case Cobol85PreprocessorParser::NOEDF:
      case Cobol85PreprocessorParser::NOEJPD:
      case Cobol85PreprocessorParser::NOEPILOG:
      case Cobol85PreprocessorParser::NOEXIT:
      case Cobol85PreprocessorParser::NOEXP:
      case Cobol85PreprocessorParser::NOEXPORTALL:
      case Cobol85PreprocessorParser::NOF:
      case Cobol85PreprocessorParser::NOFASTSRT:
      case Cobol85PreprocessorParser::NOFEPI:
      case Cobol85PreprocessorParser::NOFLAG:
      case Cobol85PreprocessorParser::NOFLAGMIG:
      case Cobol85PreprocessorParser::NOFLAGSTD:
      case Cobol85PreprocessorParser::NOFSRT:
      case Cobol85PreprocessorParser::NOGRAPHIC:
      case Cobol85PreprocessorParser::NOHOOK:
      case Cobol85PreprocessorParser::NOLENGTH:
      case Cobol85PreprocessorParser::NOLIB:
      case Cobol85PreprocessorParser::NOLINKAGE:
      case Cobol85PreprocessorParser::NOLIST:
      case Cobol85PreprocessorParser::NOMAP:
      case Cobol85PreprocessorParser::NOMD:
      case Cobol85PreprocessorParser::NOMDECK:
      case Cobol85PreprocessorParser::NONAME:
      case Cobol85PreprocessorParser::NONUM:
      case Cobol85PreprocessorParser::NONUMBER:
      case Cobol85PreprocessorParser::NOOBJ:
      case Cobol85PreprocessorParser::NOOBJECT:
      case Cobol85PreprocessorParser::NOOFF:
      case Cobol85PreprocessorParser::NOOFFSET:
      case Cobol85PreprocessorParser::NOOPSEQUENCE:
      case Cobol85PreprocessorParser::NOOPT:
      case Cobol85PreprocessorParser::NOOPTIMIZE:
      case Cobol85PreprocessorParser::NOOPTIONS:
      case Cobol85PreprocessorParser::NOP:
      case Cobol85PreprocessorParser::NOPFD:
      case Cobol85PreprocessorParser::NOPROLOG:
      case Cobol85PreprocessorParser::NORENT:
      case Cobol85PreprocessorParser::NOS:
      case Cobol85PreprocessorParser::NOSEP:
      case Cobol85PreprocessorParser::NOSEPARATE:
      case Cobol85PreprocessorParser::NOSEQ:
      case Cobol85PreprocessorParser::NOSOURCE:
      case Cobol85PreprocessorParser::NOSPIE:
      case Cobol85PreprocessorParser::NOSQL:
      case Cobol85PreprocessorParser::NOSQLC:
      case Cobol85PreprocessorParser::NOSQLCCSID:
      case Cobol85PreprocessorParser::NOSSR:
      case Cobol85PreprocessorParser::NOSSRANGE:
      case Cobol85PreprocessorParser::NOSTDTRUNC:
      case Cobol85PreprocessorParser::NOSEQUENCE:
      case Cobol85PreprocessorParser::NOTERM:
      case Cobol85PreprocessorParser::NOTERMINAL:
      case Cobol85PreprocessorParser::NOTEST:
      case Cobol85PreprocessorParser::NOTHREAD:
      case Cobol85PreprocessorParser::NOTRIG:
      case Cobol85PreprocessorParser::NOVBREF:
      case Cobol85PreprocessorParser::NOWORD:
      case Cobol85PreprocessorParser::NOX:
      case Cobol85PreprocessorParser::NOXREF:
      case Cobol85PreprocessorParser::NOZWB:
      case Cobol85PreprocessorParser::NS:
      case Cobol85PreprocessorParser::NSEQ:
      case Cobol85PreprocessorParser::NSYMBOL:
      case Cobol85PreprocessorParser::NUM:
      case Cobol85PreprocessorParser::NUMBER:
      case Cobol85PreprocessorParser::NUMPROC:
      case Cobol85PreprocessorParser::OBJ:
      case Cobol85PreprocessorParser::OBJECT:
      case Cobol85PreprocessorParser::OF:
      case Cobol85PreprocessorParser::OFF:
      case Cobol85PreprocessorParser::OFFSET:
      case Cobol85PreprocessorParser::ON:
      case Cobol85PreprocessorParser::OP:
      case Cobol85PreprocessorParser::OPMARGINS:
      case Cobol85PreprocessorParser::OPSEQUENCE:
      case Cobol85PreprocessorParser::OPT:
      case Cobol85PreprocessorParser::OPTFILE:
      case Cobol85PreprocessorParser::OPTIMIZE:
      case Cobol85PreprocessorParser::OPTIONS:
      case Cobol85PreprocessorParser::OUT:
      case Cobol85PreprocessorParser::OUTDD:
      case Cobol85PreprocessorParser::PFD:
      case Cobol85PreprocessorParser::PPTDBG:
      case Cobol85PreprocessorParser::PGMN:
      case Cobol85PreprocessorParser::PGMNAME:
      case Cobol85PreprocessorParser::PROCESS:
      case Cobol85PreprocessorParser::PROLOG:
      case Cobol85PreprocessorParser::QUOTE:
      case Cobol85PreprocessorParser::RENT:
      case Cobol85PreprocessorParser::REPLACING:
      case Cobol85PreprocessorParser::RMODE:
      case Cobol85PreprocessorParser::SEP:
      case Cobol85PreprocessorParser::SEPARATE:
      case Cobol85PreprocessorParser::SEQ:
      case Cobol85PreprocessorParser::SEQUENCE:
      case Cobol85PreprocessorParser::SHORT:
      case Cobol85PreprocessorParser::SIZE:
      case Cobol85PreprocessorParser::SOURCE:
      case Cobol85PreprocessorParser::SP:
      case Cobol85PreprocessorParser::SPACE:
      case Cobol85PreprocessorParser::SPIE:
      case Cobol85PreprocessorParser::SQL:
      case Cobol85PreprocessorParser::SQLC:
      case Cobol85PreprocessorParser::SQLCCSID:
      case Cobol85PreprocessorParser::SS:
      case Cobol85PreprocessorParser::SSR:
      case Cobol85PreprocessorParser::SSRANGE:
      case Cobol85PreprocessorParser::STD:
      case Cobol85PreprocessorParser::SYSEIB:
      case Cobol85PreprocessorParser::SZ:
      case Cobol85PreprocessorParser::TERM:
      case Cobol85PreprocessorParser::TERMINAL:
      case Cobol85PreprocessorParser::TEST:
      case Cobol85PreprocessorParser::THREAD:
      case Cobol85PreprocessorParser::TITLE:
      case Cobol85PreprocessorParser::TRIG:
      case Cobol85PreprocessorParser::TRUNC:
      case Cobol85PreprocessorParser::UE:
      case Cobol85PreprocessorParser::UPPER:
      case Cobol85PreprocessorParser::VBREF:
      case Cobol85PreprocessorParser::WD:
      case Cobol85PreprocessorParser::XMLPARSE:
      case Cobol85PreprocessorParser::XMLSS:
      case Cobol85PreprocessorParser::XOPTS:
      case Cobol85PreprocessorParser::XREF:
      case Cobol85PreprocessorParser::YEARWINDOW:
      case Cobol85PreprocessorParser::YW:
      case Cobol85PreprocessorParser::ZWB:
      case Cobol85PreprocessorParser::C_CHAR:
      case Cobol85PreprocessorParser::D_CHAR:
      case Cobol85PreprocessorParser::E_CHAR:
      case Cobol85PreprocessorParser::F_CHAR:
      case Cobol85PreprocessorParser::H_CHAR:
      case Cobol85PreprocessorParser::I_CHAR:
      case Cobol85PreprocessorParser::M_CHAR:
      case Cobol85PreprocessorParser::N_CHAR:
      case Cobol85PreprocessorParser::Q_CHAR:
      case Cobol85PreprocessorParser::S_CHAR:
      case Cobol85PreprocessorParser::U_CHAR:
      case Cobol85PreprocessorParser::W_CHAR:
      case Cobol85PreprocessorParser::X_CHAR:
      case Cobol85PreprocessorParser::COMMACHAR:
      case Cobol85PreprocessorParser::IDENTIFIER: {
        setState(608);
        cobolWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplaceableContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplaceableContext::ReplaceableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::ReplaceableContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::ReplaceableContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

Cobol85PreprocessorParser::PseudoTextContext* Cobol85PreprocessorParser::ReplaceableContext::pseudoText() {
  return getRuleContext<Cobol85PreprocessorParser::PseudoTextContext>(0);
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::ReplaceableContext::charDataLine() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataLineContext>(0);
}


size_t Cobol85PreprocessorParser::ReplaceableContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplaceable;
}

void Cobol85PreprocessorParser::ReplaceableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplaceable(this);
}

void Cobol85PreprocessorParser::ReplaceableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplaceable(this);
}

Cobol85PreprocessorParser::ReplaceableContext* Cobol85PreprocessorParser::replaceable() {
  ReplaceableContext *_localctx = _tracker.createInstance<ReplaceableContext>(_ctx, getState());
  enterRule(_localctx, 34, Cobol85PreprocessorParser::RuleReplaceable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(615);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(611);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(612);
      cobolWord();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(613);
      pseudoText();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(614);
      charDataLine();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::ReplacementContext::ReplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::ReplacementContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::ReplacementContext::cobolWord() {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(0);
}

Cobol85PreprocessorParser::PseudoTextContext* Cobol85PreprocessorParser::ReplacementContext::pseudoText() {
  return getRuleContext<Cobol85PreprocessorParser::PseudoTextContext>(0);
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::ReplacementContext::charDataLine() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataLineContext>(0);
}


size_t Cobol85PreprocessorParser::ReplacementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleReplacement;
}

void Cobol85PreprocessorParser::ReplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplacement(this);
}

void Cobol85PreprocessorParser::ReplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplacement(this);
}

Cobol85PreprocessorParser::ReplacementContext* Cobol85PreprocessorParser::replacement() {
  ReplacementContext *_localctx = _tracker.createInstance<ReplacementContext>(_ctx, getState());
  enterRule(_localctx, 36, Cobol85PreprocessorParser::RuleReplacement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(621);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(617);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(618);
      cobolWord();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(619);
      pseudoText();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(620);
      charDataLine();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EjectStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::EjectStatementContext::EjectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::EjectStatementContext::EJECT() {
  return getToken(Cobol85PreprocessorParser::EJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::EjectStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::EjectStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleEjectStatement;
}

void Cobol85PreprocessorParser::EjectStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEjectStatement(this);
}

void Cobol85PreprocessorParser::EjectStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEjectStatement(this);
}

Cobol85PreprocessorParser::EjectStatementContext* Cobol85PreprocessorParser::ejectStatement() {
  EjectStatementContext *_localctx = _tracker.createInstance<EjectStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, Cobol85PreprocessorParser::RuleEjectStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(Cobol85PreprocessorParser::EJECT);
    setState(625);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(624);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SkipStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::SkipStatementContext::SkipStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::SkipStatementContext::SKIP1() {
  return getToken(Cobol85PreprocessorParser::SKIP1, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::SkipStatementContext::SKIP2() {
  return getToken(Cobol85PreprocessorParser::SKIP2, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::SkipStatementContext::SKIP3() {
  return getToken(Cobol85PreprocessorParser::SKIP3, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::SkipStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::SkipStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleSkipStatement;
}

void Cobol85PreprocessorParser::SkipStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkipStatement(this);
}

void Cobol85PreprocessorParser::SkipStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkipStatement(this);
}

Cobol85PreprocessorParser::SkipStatementContext* Cobol85PreprocessorParser::skipStatement() {
  SkipStatementContext *_localctx = _tracker.createInstance<SkipStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, Cobol85PreprocessorParser::RuleSkipStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    _la = _input->LA(1);
    if (!(((((_la - 238) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 238)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(629);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(628);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TitleStatementContext ------------------------------------------------------------------

Cobol85PreprocessorParser::TitleStatementContext::TitleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::TitleStatementContext::TITLE() {
  return getToken(Cobol85PreprocessorParser::TITLE, 0);
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::TitleStatementContext::literal() {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(0);
}

tree::TerminalNode* Cobol85PreprocessorParser::TitleStatementContext::DOT() {
  return getToken(Cobol85PreprocessorParser::DOT, 0);
}


size_t Cobol85PreprocessorParser::TitleStatementContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleTitleStatement;
}

void Cobol85PreprocessorParser::TitleStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTitleStatement(this);
}

void Cobol85PreprocessorParser::TitleStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTitleStatement(this);
}

Cobol85PreprocessorParser::TitleStatementContext* Cobol85PreprocessorParser::titleStatement() {
  TitleStatementContext *_localctx = _tracker.createInstance<TitleStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, Cobol85PreprocessorParser::RuleTitleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(Cobol85PreprocessorParser::TITLE);
    setState(632);
    literal();
    setState(634);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(633);
      match(Cobol85PreprocessorParser::DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoTextContext ------------------------------------------------------------------

Cobol85PreprocessorParser::PseudoTextContext::PseudoTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::PseudoTextContext::DOUBLEEQUALCHAR() {
  return getTokens(Cobol85PreprocessorParser::DOUBLEEQUALCHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::PseudoTextContext::DOUBLEEQUALCHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::DOUBLEEQUALCHAR, i);
}

Cobol85PreprocessorParser::CharDataContext* Cobol85PreprocessorParser::PseudoTextContext::charData() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataContext>(0);
}


size_t Cobol85PreprocessorParser::PseudoTextContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RulePseudoText;
}

void Cobol85PreprocessorParser::PseudoTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudoText(this);
}

void Cobol85PreprocessorParser::PseudoTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudoText(this);
}

Cobol85PreprocessorParser::PseudoTextContext* Cobol85PreprocessorParser::pseudoText() {
  PseudoTextContext *_localctx = _tracker.createInstance<PseudoTextContext>(_ctx, getState());
  enterRule(_localctx, 44, Cobol85PreprocessorParser::RulePseudoText);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    match(Cobol85PreprocessorParser::DOUBLEEQUALCHAR);
    setState(638);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2346375405893844994) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -8193) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -288230376151711745) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & -9534965104508929) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & 85597355895) != 0)) {
      setState(637);
      charData();
    }
    setState(640);
    match(Cobol85PreprocessorParser::DOUBLEEQUALCHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharDataContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CharDataContext::CharDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Cobol85PreprocessorParser::CharDataLineContext *> Cobol85PreprocessorParser::CharDataContext::charDataLine() {
  return getRuleContexts<Cobol85PreprocessorParser::CharDataLineContext>();
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::CharDataContext::charDataLine(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CharDataLineContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::CharDataContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCharData;
}

void Cobol85PreprocessorParser::CharDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharData(this);
}

void Cobol85PreprocessorParser::CharDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharData(this);
}

Cobol85PreprocessorParser::CharDataContext* Cobol85PreprocessorParser::charData() {
  CharDataContext *_localctx = _tracker.createInstance<CharDataContext>(_ctx, getState());
  enterRule(_localctx, 46, Cobol85PreprocessorParser::RuleCharData);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(644); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(644);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case Cobol85PreprocessorParser::ADATA:
                case Cobol85PreprocessorParser::ADV:
                case Cobol85PreprocessorParser::ALIAS:
                case Cobol85PreprocessorParser::ANSI:
                case Cobol85PreprocessorParser::ANY:
                case Cobol85PreprocessorParser::APOST:
                case Cobol85PreprocessorParser::AR:
                case Cobol85PreprocessorParser::ARITH:
                case Cobol85PreprocessorParser::AUTO:
                case Cobol85PreprocessorParser::AWO:
                case Cobol85PreprocessorParser::BIN:
                case Cobol85PreprocessorParser::BLOCK0:
                case Cobol85PreprocessorParser::BUF:
                case Cobol85PreprocessorParser::BUFSIZE:
                case Cobol85PreprocessorParser::BY:
                case Cobol85PreprocessorParser::CBL:
                case Cobol85PreprocessorParser::CBLCARD:
                case Cobol85PreprocessorParser::CO:
                case Cobol85PreprocessorParser::COBOL2:
                case Cobol85PreprocessorParser::COBOL3:
                case Cobol85PreprocessorParser::CODEPAGE:
                case Cobol85PreprocessorParser::COMPAT:
                case Cobol85PreprocessorParser::COMPILE:
                case Cobol85PreprocessorParser::CP:
                case Cobol85PreprocessorParser::CPP:
                case Cobol85PreprocessorParser::CPSM:
                case Cobol85PreprocessorParser::CS:
                case Cobol85PreprocessorParser::CURR:
                case Cobol85PreprocessorParser::CURRENCY:
                case Cobol85PreprocessorParser::DATA:
                case Cobol85PreprocessorParser::DATEPROC:
                case Cobol85PreprocessorParser::DBCS:
                case Cobol85PreprocessorParser::DD:
                case Cobol85PreprocessorParser::DEBUG:
                case Cobol85PreprocessorParser::DECK:
                case Cobol85PreprocessorParser::DIAGTRUNC:
                case Cobol85PreprocessorParser::DLI:
                case Cobol85PreprocessorParser::DLL:
                case Cobol85PreprocessorParser::DP:
                case Cobol85PreprocessorParser::DTR:
                case Cobol85PreprocessorParser::DU:
                case Cobol85PreprocessorParser::DUMP:
                case Cobol85PreprocessorParser::DYN:
                case Cobol85PreprocessorParser::DYNAM:
                case Cobol85PreprocessorParser::EDF:
                case Cobol85PreprocessorParser::EJECT:
                case Cobol85PreprocessorParser::EJPD:
                case Cobol85PreprocessorParser::EN:
                case Cobol85PreprocessorParser::ENGLISH:
                case Cobol85PreprocessorParser::EPILOG:
                case Cobol85PreprocessorParser::EXCI:
                case Cobol85PreprocessorParser::EXIT:
                case Cobol85PreprocessorParser::EXP:
                case Cobol85PreprocessorParser::EXPORTALL:
                case Cobol85PreprocessorParser::EXTEND:
                case Cobol85PreprocessorParser::FASTSRT:
                case Cobol85PreprocessorParser::FLAG:
                case Cobol85PreprocessorParser::FLAGSTD:
                case Cobol85PreprocessorParser::FSRT:
                case Cobol85PreprocessorParser::FULL:
                case Cobol85PreprocessorParser::GDS:
                case Cobol85PreprocessorParser::GRAPHIC:
                case Cobol85PreprocessorParser::HOOK:
                case Cobol85PreprocessorParser::IN:
                case Cobol85PreprocessorParser::INTDATE:
                case Cobol85PreprocessorParser::JA:
                case Cobol85PreprocessorParser::JP:
                case Cobol85PreprocessorParser::KA:
                case Cobol85PreprocessorParser::LANG:
                case Cobol85PreprocessorParser::LANGUAGE:
                case Cobol85PreprocessorParser::LC:
                case Cobol85PreprocessorParser::LENGTH:
                case Cobol85PreprocessorParser::LIB:
                case Cobol85PreprocessorParser::LILIAN:
                case Cobol85PreprocessorParser::LIN:
                case Cobol85PreprocessorParser::LINECOUNT:
                case Cobol85PreprocessorParser::LINKAGE:
                case Cobol85PreprocessorParser::LIST:
                case Cobol85PreprocessorParser::LM:
                case Cobol85PreprocessorParser::LONGMIXED:
                case Cobol85PreprocessorParser::LONGUPPER:
                case Cobol85PreprocessorParser::LPARENCHAR:
                case Cobol85PreprocessorParser::LU:
                case Cobol85PreprocessorParser::MAP:
                case Cobol85PreprocessorParser::MARGINS:
                case Cobol85PreprocessorParser::MAX:
                case Cobol85PreprocessorParser::MD:
                case Cobol85PreprocessorParser::MDECK:
                case Cobol85PreprocessorParser::MIG:
                case Cobol85PreprocessorParser::MIXED:
                case Cobol85PreprocessorParser::NAME:
                case Cobol85PreprocessorParser::NAT:
                case Cobol85PreprocessorParser::NATIONAL:
                case Cobol85PreprocessorParser::NATLANG:
                case Cobol85PreprocessorParser::NN:
                case Cobol85PreprocessorParser::NO:
                case Cobol85PreprocessorParser::NOADATA:
                case Cobol85PreprocessorParser::NOADV:
                case Cobol85PreprocessorParser::NOALIAS:
                case Cobol85PreprocessorParser::NOAWO:
                case Cobol85PreprocessorParser::NOBLOCK0:
                case Cobol85PreprocessorParser::NOC:
                case Cobol85PreprocessorParser::NOCBLCARD:
                case Cobol85PreprocessorParser::NOCICS:
                case Cobol85PreprocessorParser::NOCMPR2:
                case Cobol85PreprocessorParser::NOCOMPILE:
                case Cobol85PreprocessorParser::NOCPSM:
                case Cobol85PreprocessorParser::NOCURR:
                case Cobol85PreprocessorParser::NOCURRENCY:
                case Cobol85PreprocessorParser::NOD:
                case Cobol85PreprocessorParser::NODATEPROC:
                case Cobol85PreprocessorParser::NODBCS:
                case Cobol85PreprocessorParser::NODE:
                case Cobol85PreprocessorParser::NODEBUG:
                case Cobol85PreprocessorParser::NODECK:
                case Cobol85PreprocessorParser::NODIAGTRUNC:
                case Cobol85PreprocessorParser::NODLL:
                case Cobol85PreprocessorParser::NODU:
                case Cobol85PreprocessorParser::NODUMP:
                case Cobol85PreprocessorParser::NODP:
                case Cobol85PreprocessorParser::NODTR:
                case Cobol85PreprocessorParser::NODYN:
                case Cobol85PreprocessorParser::NODYNAM:
                case Cobol85PreprocessorParser::NOEDF:
                case Cobol85PreprocessorParser::NOEJPD:
                case Cobol85PreprocessorParser::NOEPILOG:
                case Cobol85PreprocessorParser::NOEXIT:
                case Cobol85PreprocessorParser::NOEXP:
                case Cobol85PreprocessorParser::NOEXPORTALL:
                case Cobol85PreprocessorParser::NOF:
                case Cobol85PreprocessorParser::NOFASTSRT:
                case Cobol85PreprocessorParser::NOFEPI:
                case Cobol85PreprocessorParser::NOFLAG:
                case Cobol85PreprocessorParser::NOFLAGMIG:
                case Cobol85PreprocessorParser::NOFLAGSTD:
                case Cobol85PreprocessorParser::NOFSRT:
                case Cobol85PreprocessorParser::NOGRAPHIC:
                case Cobol85PreprocessorParser::NOHOOK:
                case Cobol85PreprocessorParser::NOLENGTH:
                case Cobol85PreprocessorParser::NOLIB:
                case Cobol85PreprocessorParser::NOLINKAGE:
                case Cobol85PreprocessorParser::NOLIST:
                case Cobol85PreprocessorParser::NOMAP:
                case Cobol85PreprocessorParser::NOMD:
                case Cobol85PreprocessorParser::NOMDECK:
                case Cobol85PreprocessorParser::NONAME:
                case Cobol85PreprocessorParser::NONUM:
                case Cobol85PreprocessorParser::NONUMBER:
                case Cobol85PreprocessorParser::NOOBJ:
                case Cobol85PreprocessorParser::NOOBJECT:
                case Cobol85PreprocessorParser::NOOFF:
                case Cobol85PreprocessorParser::NOOFFSET:
                case Cobol85PreprocessorParser::NOOPSEQUENCE:
                case Cobol85PreprocessorParser::NOOPT:
                case Cobol85PreprocessorParser::NOOPTIMIZE:
                case Cobol85PreprocessorParser::NOOPTIONS:
                case Cobol85PreprocessorParser::NOP:
                case Cobol85PreprocessorParser::NOPFD:
                case Cobol85PreprocessorParser::NOPROLOG:
                case Cobol85PreprocessorParser::NORENT:
                case Cobol85PreprocessorParser::NOS:
                case Cobol85PreprocessorParser::NOSEP:
                case Cobol85PreprocessorParser::NOSEPARATE:
                case Cobol85PreprocessorParser::NOSEQ:
                case Cobol85PreprocessorParser::NOSOURCE:
                case Cobol85PreprocessorParser::NOSPIE:
                case Cobol85PreprocessorParser::NOSQL:
                case Cobol85PreprocessorParser::NOSQLC:
                case Cobol85PreprocessorParser::NOSQLCCSID:
                case Cobol85PreprocessorParser::NOSSR:
                case Cobol85PreprocessorParser::NOSSRANGE:
                case Cobol85PreprocessorParser::NOSTDTRUNC:
                case Cobol85PreprocessorParser::NOSEQUENCE:
                case Cobol85PreprocessorParser::NOTERM:
                case Cobol85PreprocessorParser::NOTERMINAL:
                case Cobol85PreprocessorParser::NOTEST:
                case Cobol85PreprocessorParser::NOTHREAD:
                case Cobol85PreprocessorParser::NOTRIG:
                case Cobol85PreprocessorParser::NOVBREF:
                case Cobol85PreprocessorParser::NOWORD:
                case Cobol85PreprocessorParser::NOX:
                case Cobol85PreprocessorParser::NOXREF:
                case Cobol85PreprocessorParser::NOZWB:
                case Cobol85PreprocessorParser::NS:
                case Cobol85PreprocessorParser::NSEQ:
                case Cobol85PreprocessorParser::NSYMBOL:
                case Cobol85PreprocessorParser::NUM:
                case Cobol85PreprocessorParser::NUMBER:
                case Cobol85PreprocessorParser::NUMPROC:
                case Cobol85PreprocessorParser::OBJ:
                case Cobol85PreprocessorParser::OBJECT:
                case Cobol85PreprocessorParser::OF:
                case Cobol85PreprocessorParser::OFF:
                case Cobol85PreprocessorParser::OFFSET:
                case Cobol85PreprocessorParser::ON:
                case Cobol85PreprocessorParser::OP:
                case Cobol85PreprocessorParser::OPMARGINS:
                case Cobol85PreprocessorParser::OPSEQUENCE:
                case Cobol85PreprocessorParser::OPT:
                case Cobol85PreprocessorParser::OPTFILE:
                case Cobol85PreprocessorParser::OPTIMIZE:
                case Cobol85PreprocessorParser::OPTIONS:
                case Cobol85PreprocessorParser::OUT:
                case Cobol85PreprocessorParser::OUTDD:
                case Cobol85PreprocessorParser::PFD:
                case Cobol85PreprocessorParser::PPTDBG:
                case Cobol85PreprocessorParser::PGMN:
                case Cobol85PreprocessorParser::PGMNAME:
                case Cobol85PreprocessorParser::PROCESS:
                case Cobol85PreprocessorParser::PROLOG:
                case Cobol85PreprocessorParser::QUOTE:
                case Cobol85PreprocessorParser::RENT:
                case Cobol85PreprocessorParser::REPLACING:
                case Cobol85PreprocessorParser::RMODE:
                case Cobol85PreprocessorParser::RPARENCHAR:
                case Cobol85PreprocessorParser::SEP:
                case Cobol85PreprocessorParser::SEPARATE:
                case Cobol85PreprocessorParser::SEQ:
                case Cobol85PreprocessorParser::SEQUENCE:
                case Cobol85PreprocessorParser::SHORT:
                case Cobol85PreprocessorParser::SIZE:
                case Cobol85PreprocessorParser::SOURCE:
                case Cobol85PreprocessorParser::SP:
                case Cobol85PreprocessorParser::SPACE:
                case Cobol85PreprocessorParser::SPIE:
                case Cobol85PreprocessorParser::SQL:
                case Cobol85PreprocessorParser::SQLC:
                case Cobol85PreprocessorParser::SQLCCSID:
                case Cobol85PreprocessorParser::SS:
                case Cobol85PreprocessorParser::SSR:
                case Cobol85PreprocessorParser::SSRANGE:
                case Cobol85PreprocessorParser::STD:
                case Cobol85PreprocessorParser::SYSEIB:
                case Cobol85PreprocessorParser::SZ:
                case Cobol85PreprocessorParser::TERM:
                case Cobol85PreprocessorParser::TERMINAL:
                case Cobol85PreprocessorParser::TEST:
                case Cobol85PreprocessorParser::THREAD:
                case Cobol85PreprocessorParser::TITLE:
                case Cobol85PreprocessorParser::TRIG:
                case Cobol85PreprocessorParser::TRUNC:
                case Cobol85PreprocessorParser::UE:
                case Cobol85PreprocessorParser::UPPER:
                case Cobol85PreprocessorParser::VBREF:
                case Cobol85PreprocessorParser::WD:
                case Cobol85PreprocessorParser::XMLPARSE:
                case Cobol85PreprocessorParser::XMLSS:
                case Cobol85PreprocessorParser::XOPTS:
                case Cobol85PreprocessorParser::XREF:
                case Cobol85PreprocessorParser::YEARWINDOW:
                case Cobol85PreprocessorParser::YW:
                case Cobol85PreprocessorParser::ZWB:
                case Cobol85PreprocessorParser::C_CHAR:
                case Cobol85PreprocessorParser::D_CHAR:
                case Cobol85PreprocessorParser::E_CHAR:
                case Cobol85PreprocessorParser::F_CHAR:
                case Cobol85PreprocessorParser::H_CHAR:
                case Cobol85PreprocessorParser::I_CHAR:
                case Cobol85PreprocessorParser::M_CHAR:
                case Cobol85PreprocessorParser::N_CHAR:
                case Cobol85PreprocessorParser::Q_CHAR:
                case Cobol85PreprocessorParser::S_CHAR:
                case Cobol85PreprocessorParser::U_CHAR:
                case Cobol85PreprocessorParser::W_CHAR:
                case Cobol85PreprocessorParser::X_CHAR:
                case Cobol85PreprocessorParser::COMMACHAR:
                case Cobol85PreprocessorParser::DOT:
                case Cobol85PreprocessorParser::NONNUMERICLITERAL:
                case Cobol85PreprocessorParser::NUMERICLITERAL:
                case Cobol85PreprocessorParser::IDENTIFIER:
                case Cobol85PreprocessorParser::FILENAME:
                case Cobol85PreprocessorParser::TEXT: {
                  setState(642);
                  charDataLine();
                  break;
                }

                case Cobol85PreprocessorParser::NEWLINE: {
                  setState(643);
                  match(Cobol85PreprocessorParser::NEWLINE);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(646); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharDataSqlContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CharDataSqlContext::CharDataSqlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Cobol85PreprocessorParser::CharDataLineContext *> Cobol85PreprocessorParser::CharDataSqlContext::charDataLine() {
  return getRuleContexts<Cobol85PreprocessorParser::CharDataLineContext>();
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::CharDataSqlContext::charDataLine(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CharDataLineContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataSqlContext::COPY() {
  return getTokens(Cobol85PreprocessorParser::COPY);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataSqlContext::COPY(size_t i) {
  return getToken(Cobol85PreprocessorParser::COPY, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataSqlContext::REPLACE() {
  return getTokens(Cobol85PreprocessorParser::REPLACE);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataSqlContext::REPLACE(size_t i) {
  return getToken(Cobol85PreprocessorParser::REPLACE, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataSqlContext::NEWLINE() {
  return getTokens(Cobol85PreprocessorParser::NEWLINE);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataSqlContext::NEWLINE(size_t i) {
  return getToken(Cobol85PreprocessorParser::NEWLINE, i);
}


size_t Cobol85PreprocessorParser::CharDataSqlContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCharDataSql;
}

void Cobol85PreprocessorParser::CharDataSqlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharDataSql(this);
}

void Cobol85PreprocessorParser::CharDataSqlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharDataSql(this);
}

Cobol85PreprocessorParser::CharDataSqlContext* Cobol85PreprocessorParser::charDataSql() {
  CharDataSqlContext *_localctx = _tracker.createInstance<CharDataSqlContext>(_ctx, getState());
  enterRule(_localctx, 48, Cobol85PreprocessorParser::RuleCharDataSql);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(652); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(652);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Cobol85PreprocessorParser::ADATA:
        case Cobol85PreprocessorParser::ADV:
        case Cobol85PreprocessorParser::ALIAS:
        case Cobol85PreprocessorParser::ANSI:
        case Cobol85PreprocessorParser::ANY:
        case Cobol85PreprocessorParser::APOST:
        case Cobol85PreprocessorParser::AR:
        case Cobol85PreprocessorParser::ARITH:
        case Cobol85PreprocessorParser::AUTO:
        case Cobol85PreprocessorParser::AWO:
        case Cobol85PreprocessorParser::BIN:
        case Cobol85PreprocessorParser::BLOCK0:
        case Cobol85PreprocessorParser::BUF:
        case Cobol85PreprocessorParser::BUFSIZE:
        case Cobol85PreprocessorParser::BY:
        case Cobol85PreprocessorParser::CBL:
        case Cobol85PreprocessorParser::CBLCARD:
        case Cobol85PreprocessorParser::CO:
        case Cobol85PreprocessorParser::COBOL2:
        case Cobol85PreprocessorParser::COBOL3:
        case Cobol85PreprocessorParser::CODEPAGE:
        case Cobol85PreprocessorParser::COMPAT:
        case Cobol85PreprocessorParser::COMPILE:
        case Cobol85PreprocessorParser::CP:
        case Cobol85PreprocessorParser::CPP:
        case Cobol85PreprocessorParser::CPSM:
        case Cobol85PreprocessorParser::CS:
        case Cobol85PreprocessorParser::CURR:
        case Cobol85PreprocessorParser::CURRENCY:
        case Cobol85PreprocessorParser::DATA:
        case Cobol85PreprocessorParser::DATEPROC:
        case Cobol85PreprocessorParser::DBCS:
        case Cobol85PreprocessorParser::DD:
        case Cobol85PreprocessorParser::DEBUG:
        case Cobol85PreprocessorParser::DECK:
        case Cobol85PreprocessorParser::DIAGTRUNC:
        case Cobol85PreprocessorParser::DLI:
        case Cobol85PreprocessorParser::DLL:
        case Cobol85PreprocessorParser::DP:
        case Cobol85PreprocessorParser::DTR:
        case Cobol85PreprocessorParser::DU:
        case Cobol85PreprocessorParser::DUMP:
        case Cobol85PreprocessorParser::DYN:
        case Cobol85PreprocessorParser::DYNAM:
        case Cobol85PreprocessorParser::EDF:
        case Cobol85PreprocessorParser::EJECT:
        case Cobol85PreprocessorParser::EJPD:
        case Cobol85PreprocessorParser::EN:
        case Cobol85PreprocessorParser::ENGLISH:
        case Cobol85PreprocessorParser::EPILOG:
        case Cobol85PreprocessorParser::EXCI:
        case Cobol85PreprocessorParser::EXIT:
        case Cobol85PreprocessorParser::EXP:
        case Cobol85PreprocessorParser::EXPORTALL:
        case Cobol85PreprocessorParser::EXTEND:
        case Cobol85PreprocessorParser::FASTSRT:
        case Cobol85PreprocessorParser::FLAG:
        case Cobol85PreprocessorParser::FLAGSTD:
        case Cobol85PreprocessorParser::FSRT:
        case Cobol85PreprocessorParser::FULL:
        case Cobol85PreprocessorParser::GDS:
        case Cobol85PreprocessorParser::GRAPHIC:
        case Cobol85PreprocessorParser::HOOK:
        case Cobol85PreprocessorParser::IN:
        case Cobol85PreprocessorParser::INTDATE:
        case Cobol85PreprocessorParser::JA:
        case Cobol85PreprocessorParser::JP:
        case Cobol85PreprocessorParser::KA:
        case Cobol85PreprocessorParser::LANG:
        case Cobol85PreprocessorParser::LANGUAGE:
        case Cobol85PreprocessorParser::LC:
        case Cobol85PreprocessorParser::LENGTH:
        case Cobol85PreprocessorParser::LIB:
        case Cobol85PreprocessorParser::LILIAN:
        case Cobol85PreprocessorParser::LIN:
        case Cobol85PreprocessorParser::LINECOUNT:
        case Cobol85PreprocessorParser::LINKAGE:
        case Cobol85PreprocessorParser::LIST:
        case Cobol85PreprocessorParser::LM:
        case Cobol85PreprocessorParser::LONGMIXED:
        case Cobol85PreprocessorParser::LONGUPPER:
        case Cobol85PreprocessorParser::LPARENCHAR:
        case Cobol85PreprocessorParser::LU:
        case Cobol85PreprocessorParser::MAP:
        case Cobol85PreprocessorParser::MARGINS:
        case Cobol85PreprocessorParser::MAX:
        case Cobol85PreprocessorParser::MD:
        case Cobol85PreprocessorParser::MDECK:
        case Cobol85PreprocessorParser::MIG:
        case Cobol85PreprocessorParser::MIXED:
        case Cobol85PreprocessorParser::NAME:
        case Cobol85PreprocessorParser::NAT:
        case Cobol85PreprocessorParser::NATIONAL:
        case Cobol85PreprocessorParser::NATLANG:
        case Cobol85PreprocessorParser::NN:
        case Cobol85PreprocessorParser::NO:
        case Cobol85PreprocessorParser::NOADATA:
        case Cobol85PreprocessorParser::NOADV:
        case Cobol85PreprocessorParser::NOALIAS:
        case Cobol85PreprocessorParser::NOAWO:
        case Cobol85PreprocessorParser::NOBLOCK0:
        case Cobol85PreprocessorParser::NOC:
        case Cobol85PreprocessorParser::NOCBLCARD:
        case Cobol85PreprocessorParser::NOCICS:
        case Cobol85PreprocessorParser::NOCMPR2:
        case Cobol85PreprocessorParser::NOCOMPILE:
        case Cobol85PreprocessorParser::NOCPSM:
        case Cobol85PreprocessorParser::NOCURR:
        case Cobol85PreprocessorParser::NOCURRENCY:
        case Cobol85PreprocessorParser::NOD:
        case Cobol85PreprocessorParser::NODATEPROC:
        case Cobol85PreprocessorParser::NODBCS:
        case Cobol85PreprocessorParser::NODE:
        case Cobol85PreprocessorParser::NODEBUG:
        case Cobol85PreprocessorParser::NODECK:
        case Cobol85PreprocessorParser::NODIAGTRUNC:
        case Cobol85PreprocessorParser::NODLL:
        case Cobol85PreprocessorParser::NODU:
        case Cobol85PreprocessorParser::NODUMP:
        case Cobol85PreprocessorParser::NODP:
        case Cobol85PreprocessorParser::NODTR:
        case Cobol85PreprocessorParser::NODYN:
        case Cobol85PreprocessorParser::NODYNAM:
        case Cobol85PreprocessorParser::NOEDF:
        case Cobol85PreprocessorParser::NOEJPD:
        case Cobol85PreprocessorParser::NOEPILOG:
        case Cobol85PreprocessorParser::NOEXIT:
        case Cobol85PreprocessorParser::NOEXP:
        case Cobol85PreprocessorParser::NOEXPORTALL:
        case Cobol85PreprocessorParser::NOF:
        case Cobol85PreprocessorParser::NOFASTSRT:
        case Cobol85PreprocessorParser::NOFEPI:
        case Cobol85PreprocessorParser::NOFLAG:
        case Cobol85PreprocessorParser::NOFLAGMIG:
        case Cobol85PreprocessorParser::NOFLAGSTD:
        case Cobol85PreprocessorParser::NOFSRT:
        case Cobol85PreprocessorParser::NOGRAPHIC:
        case Cobol85PreprocessorParser::NOHOOK:
        case Cobol85PreprocessorParser::NOLENGTH:
        case Cobol85PreprocessorParser::NOLIB:
        case Cobol85PreprocessorParser::NOLINKAGE:
        case Cobol85PreprocessorParser::NOLIST:
        case Cobol85PreprocessorParser::NOMAP:
        case Cobol85PreprocessorParser::NOMD:
        case Cobol85PreprocessorParser::NOMDECK:
        case Cobol85PreprocessorParser::NONAME:
        case Cobol85PreprocessorParser::NONUM:
        case Cobol85PreprocessorParser::NONUMBER:
        case Cobol85PreprocessorParser::NOOBJ:
        case Cobol85PreprocessorParser::NOOBJECT:
        case Cobol85PreprocessorParser::NOOFF:
        case Cobol85PreprocessorParser::NOOFFSET:
        case Cobol85PreprocessorParser::NOOPSEQUENCE:
        case Cobol85PreprocessorParser::NOOPT:
        case Cobol85PreprocessorParser::NOOPTIMIZE:
        case Cobol85PreprocessorParser::NOOPTIONS:
        case Cobol85PreprocessorParser::NOP:
        case Cobol85PreprocessorParser::NOPFD:
        case Cobol85PreprocessorParser::NOPROLOG:
        case Cobol85PreprocessorParser::NORENT:
        case Cobol85PreprocessorParser::NOS:
        case Cobol85PreprocessorParser::NOSEP:
        case Cobol85PreprocessorParser::NOSEPARATE:
        case Cobol85PreprocessorParser::NOSEQ:
        case Cobol85PreprocessorParser::NOSOURCE:
        case Cobol85PreprocessorParser::NOSPIE:
        case Cobol85PreprocessorParser::NOSQL:
        case Cobol85PreprocessorParser::NOSQLC:
        case Cobol85PreprocessorParser::NOSQLCCSID:
        case Cobol85PreprocessorParser::NOSSR:
        case Cobol85PreprocessorParser::NOSSRANGE:
        case Cobol85PreprocessorParser::NOSTDTRUNC:
        case Cobol85PreprocessorParser::NOSEQUENCE:
        case Cobol85PreprocessorParser::NOTERM:
        case Cobol85PreprocessorParser::NOTERMINAL:
        case Cobol85PreprocessorParser::NOTEST:
        case Cobol85PreprocessorParser::NOTHREAD:
        case Cobol85PreprocessorParser::NOTRIG:
        case Cobol85PreprocessorParser::NOVBREF:
        case Cobol85PreprocessorParser::NOWORD:
        case Cobol85PreprocessorParser::NOX:
        case Cobol85PreprocessorParser::NOXREF:
        case Cobol85PreprocessorParser::NOZWB:
        case Cobol85PreprocessorParser::NS:
        case Cobol85PreprocessorParser::NSEQ:
        case Cobol85PreprocessorParser::NSYMBOL:
        case Cobol85PreprocessorParser::NUM:
        case Cobol85PreprocessorParser::NUMBER:
        case Cobol85PreprocessorParser::NUMPROC:
        case Cobol85PreprocessorParser::OBJ:
        case Cobol85PreprocessorParser::OBJECT:
        case Cobol85PreprocessorParser::OF:
        case Cobol85PreprocessorParser::OFF:
        case Cobol85PreprocessorParser::OFFSET:
        case Cobol85PreprocessorParser::ON:
        case Cobol85PreprocessorParser::OP:
        case Cobol85PreprocessorParser::OPMARGINS:
        case Cobol85PreprocessorParser::OPSEQUENCE:
        case Cobol85PreprocessorParser::OPT:
        case Cobol85PreprocessorParser::OPTFILE:
        case Cobol85PreprocessorParser::OPTIMIZE:
        case Cobol85PreprocessorParser::OPTIONS:
        case Cobol85PreprocessorParser::OUT:
        case Cobol85PreprocessorParser::OUTDD:
        case Cobol85PreprocessorParser::PFD:
        case Cobol85PreprocessorParser::PPTDBG:
        case Cobol85PreprocessorParser::PGMN:
        case Cobol85PreprocessorParser::PGMNAME:
        case Cobol85PreprocessorParser::PROCESS:
        case Cobol85PreprocessorParser::PROLOG:
        case Cobol85PreprocessorParser::QUOTE:
        case Cobol85PreprocessorParser::RENT:
        case Cobol85PreprocessorParser::REPLACING:
        case Cobol85PreprocessorParser::RMODE:
        case Cobol85PreprocessorParser::RPARENCHAR:
        case Cobol85PreprocessorParser::SEP:
        case Cobol85PreprocessorParser::SEPARATE:
        case Cobol85PreprocessorParser::SEQ:
        case Cobol85PreprocessorParser::SEQUENCE:
        case Cobol85PreprocessorParser::SHORT:
        case Cobol85PreprocessorParser::SIZE:
        case Cobol85PreprocessorParser::SOURCE:
        case Cobol85PreprocessorParser::SP:
        case Cobol85PreprocessorParser::SPACE:
        case Cobol85PreprocessorParser::SPIE:
        case Cobol85PreprocessorParser::SQL:
        case Cobol85PreprocessorParser::SQLC:
        case Cobol85PreprocessorParser::SQLCCSID:
        case Cobol85PreprocessorParser::SS:
        case Cobol85PreprocessorParser::SSR:
        case Cobol85PreprocessorParser::SSRANGE:
        case Cobol85PreprocessorParser::STD:
        case Cobol85PreprocessorParser::SYSEIB:
        case Cobol85PreprocessorParser::SZ:
        case Cobol85PreprocessorParser::TERM:
        case Cobol85PreprocessorParser::TERMINAL:
        case Cobol85PreprocessorParser::TEST:
        case Cobol85PreprocessorParser::THREAD:
        case Cobol85PreprocessorParser::TITLE:
        case Cobol85PreprocessorParser::TRIG:
        case Cobol85PreprocessorParser::TRUNC:
        case Cobol85PreprocessorParser::UE:
        case Cobol85PreprocessorParser::UPPER:
        case Cobol85PreprocessorParser::VBREF:
        case Cobol85PreprocessorParser::WD:
        case Cobol85PreprocessorParser::XMLPARSE:
        case Cobol85PreprocessorParser::XMLSS:
        case Cobol85PreprocessorParser::XOPTS:
        case Cobol85PreprocessorParser::XREF:
        case Cobol85PreprocessorParser::YEARWINDOW:
        case Cobol85PreprocessorParser::YW:
        case Cobol85PreprocessorParser::ZWB:
        case Cobol85PreprocessorParser::C_CHAR:
        case Cobol85PreprocessorParser::D_CHAR:
        case Cobol85PreprocessorParser::E_CHAR:
        case Cobol85PreprocessorParser::F_CHAR:
        case Cobol85PreprocessorParser::H_CHAR:
        case Cobol85PreprocessorParser::I_CHAR:
        case Cobol85PreprocessorParser::M_CHAR:
        case Cobol85PreprocessorParser::N_CHAR:
        case Cobol85PreprocessorParser::Q_CHAR:
        case Cobol85PreprocessorParser::S_CHAR:
        case Cobol85PreprocessorParser::U_CHAR:
        case Cobol85PreprocessorParser::W_CHAR:
        case Cobol85PreprocessorParser::X_CHAR:
        case Cobol85PreprocessorParser::COMMACHAR:
        case Cobol85PreprocessorParser::DOT:
        case Cobol85PreprocessorParser::NONNUMERICLITERAL:
        case Cobol85PreprocessorParser::NUMERICLITERAL:
        case Cobol85PreprocessorParser::IDENTIFIER:
        case Cobol85PreprocessorParser::FILENAME:
        case Cobol85PreprocessorParser::TEXT: {
          setState(648);
          charDataLine();
          break;
        }

        case Cobol85PreprocessorParser::COPY: {
          setState(649);
          match(Cobol85PreprocessorParser::COPY);
          break;
        }

        case Cobol85PreprocessorParser::REPLACE: {
          setState(650);
          match(Cobol85PreprocessorParser::REPLACE);
          break;
        }

        case Cobol85PreprocessorParser::NEWLINE: {
          setState(651);
          match(Cobol85PreprocessorParser::NEWLINE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(654); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2346375405860290562) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -8193) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -288230376151711745) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & -9534964836073473) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & 85597355895) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharDataLineContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CharDataLineContext::CharDataLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Cobol85PreprocessorParser::CobolWordContext *> Cobol85PreprocessorParser::CharDataLineContext::cobolWord() {
  return getRuleContexts<Cobol85PreprocessorParser::CobolWordContext>();
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::CharDataLineContext::cobolWord(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::CobolWordContext>(i);
}

std::vector<Cobol85PreprocessorParser::LiteralContext *> Cobol85PreprocessorParser::CharDataLineContext::literal() {
  return getRuleContexts<Cobol85PreprocessorParser::LiteralContext>();
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::CharDataLineContext::literal(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::LiteralContext>(i);
}

std::vector<Cobol85PreprocessorParser::FilenameContext *> Cobol85PreprocessorParser::CharDataLineContext::filename() {
  return getRuleContexts<Cobol85PreprocessorParser::FilenameContext>();
}

Cobol85PreprocessorParser::FilenameContext* Cobol85PreprocessorParser::CharDataLineContext::filename(size_t i) {
  return getRuleContext<Cobol85PreprocessorParser::FilenameContext>(i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataLineContext::TEXT() {
  return getTokens(Cobol85PreprocessorParser::TEXT);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataLineContext::TEXT(size_t i) {
  return getToken(Cobol85PreprocessorParser::TEXT, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataLineContext::DOT() {
  return getTokens(Cobol85PreprocessorParser::DOT);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataLineContext::DOT(size_t i) {
  return getToken(Cobol85PreprocessorParser::DOT, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataLineContext::LPARENCHAR() {
  return getTokens(Cobol85PreprocessorParser::LPARENCHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataLineContext::LPARENCHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::LPARENCHAR, i);
}

std::vector<tree::TerminalNode *> Cobol85PreprocessorParser::CharDataLineContext::RPARENCHAR() {
  return getTokens(Cobol85PreprocessorParser::RPARENCHAR);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataLineContext::RPARENCHAR(size_t i) {
  return getToken(Cobol85PreprocessorParser::RPARENCHAR, i);
}


size_t Cobol85PreprocessorParser::CharDataLineContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCharDataLine;
}

void Cobol85PreprocessorParser::CharDataLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharDataLine(this);
}

void Cobol85PreprocessorParser::CharDataLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharDataLine(this);
}

Cobol85PreprocessorParser::CharDataLineContext* Cobol85PreprocessorParser::charDataLine() {
  CharDataLineContext *_localctx = _tracker.createInstance<CharDataLineContext>(_ctx, getState());
  enterRule(_localctx, 50, Cobol85PreprocessorParser::RuleCharDataLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(663); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(663);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case Cobol85PreprocessorParser::ADATA:
                case Cobol85PreprocessorParser::ADV:
                case Cobol85PreprocessorParser::ALIAS:
                case Cobol85PreprocessorParser::ANSI:
                case Cobol85PreprocessorParser::ANY:
                case Cobol85PreprocessorParser::APOST:
                case Cobol85PreprocessorParser::AR:
                case Cobol85PreprocessorParser::ARITH:
                case Cobol85PreprocessorParser::AUTO:
                case Cobol85PreprocessorParser::AWO:
                case Cobol85PreprocessorParser::BIN:
                case Cobol85PreprocessorParser::BLOCK0:
                case Cobol85PreprocessorParser::BUF:
                case Cobol85PreprocessorParser::BUFSIZE:
                case Cobol85PreprocessorParser::BY:
                case Cobol85PreprocessorParser::CBL:
                case Cobol85PreprocessorParser::CBLCARD:
                case Cobol85PreprocessorParser::CO:
                case Cobol85PreprocessorParser::COBOL2:
                case Cobol85PreprocessorParser::COBOL3:
                case Cobol85PreprocessorParser::CODEPAGE:
                case Cobol85PreprocessorParser::COMPAT:
                case Cobol85PreprocessorParser::COMPILE:
                case Cobol85PreprocessorParser::CP:
                case Cobol85PreprocessorParser::CPP:
                case Cobol85PreprocessorParser::CPSM:
                case Cobol85PreprocessorParser::CS:
                case Cobol85PreprocessorParser::CURR:
                case Cobol85PreprocessorParser::CURRENCY:
                case Cobol85PreprocessorParser::DATA:
                case Cobol85PreprocessorParser::DATEPROC:
                case Cobol85PreprocessorParser::DBCS:
                case Cobol85PreprocessorParser::DD:
                case Cobol85PreprocessorParser::DEBUG:
                case Cobol85PreprocessorParser::DECK:
                case Cobol85PreprocessorParser::DIAGTRUNC:
                case Cobol85PreprocessorParser::DLI:
                case Cobol85PreprocessorParser::DLL:
                case Cobol85PreprocessorParser::DP:
                case Cobol85PreprocessorParser::DTR:
                case Cobol85PreprocessorParser::DU:
                case Cobol85PreprocessorParser::DUMP:
                case Cobol85PreprocessorParser::DYN:
                case Cobol85PreprocessorParser::DYNAM:
                case Cobol85PreprocessorParser::EDF:
                case Cobol85PreprocessorParser::EJECT:
                case Cobol85PreprocessorParser::EJPD:
                case Cobol85PreprocessorParser::EN:
                case Cobol85PreprocessorParser::ENGLISH:
                case Cobol85PreprocessorParser::EPILOG:
                case Cobol85PreprocessorParser::EXCI:
                case Cobol85PreprocessorParser::EXIT:
                case Cobol85PreprocessorParser::EXP:
                case Cobol85PreprocessorParser::EXPORTALL:
                case Cobol85PreprocessorParser::EXTEND:
                case Cobol85PreprocessorParser::FASTSRT:
                case Cobol85PreprocessorParser::FLAG:
                case Cobol85PreprocessorParser::FLAGSTD:
                case Cobol85PreprocessorParser::FSRT:
                case Cobol85PreprocessorParser::FULL:
                case Cobol85PreprocessorParser::GDS:
                case Cobol85PreprocessorParser::GRAPHIC:
                case Cobol85PreprocessorParser::HOOK:
                case Cobol85PreprocessorParser::IN:
                case Cobol85PreprocessorParser::INTDATE:
                case Cobol85PreprocessorParser::JA:
                case Cobol85PreprocessorParser::JP:
                case Cobol85PreprocessorParser::KA:
                case Cobol85PreprocessorParser::LANG:
                case Cobol85PreprocessorParser::LANGUAGE:
                case Cobol85PreprocessorParser::LC:
                case Cobol85PreprocessorParser::LENGTH:
                case Cobol85PreprocessorParser::LIB:
                case Cobol85PreprocessorParser::LILIAN:
                case Cobol85PreprocessorParser::LIN:
                case Cobol85PreprocessorParser::LINECOUNT:
                case Cobol85PreprocessorParser::LINKAGE:
                case Cobol85PreprocessorParser::LIST:
                case Cobol85PreprocessorParser::LM:
                case Cobol85PreprocessorParser::LONGMIXED:
                case Cobol85PreprocessorParser::LONGUPPER:
                case Cobol85PreprocessorParser::LU:
                case Cobol85PreprocessorParser::MAP:
                case Cobol85PreprocessorParser::MARGINS:
                case Cobol85PreprocessorParser::MAX:
                case Cobol85PreprocessorParser::MD:
                case Cobol85PreprocessorParser::MDECK:
                case Cobol85PreprocessorParser::MIG:
                case Cobol85PreprocessorParser::MIXED:
                case Cobol85PreprocessorParser::NAME:
                case Cobol85PreprocessorParser::NAT:
                case Cobol85PreprocessorParser::NATIONAL:
                case Cobol85PreprocessorParser::NATLANG:
                case Cobol85PreprocessorParser::NN:
                case Cobol85PreprocessorParser::NO:
                case Cobol85PreprocessorParser::NOADATA:
                case Cobol85PreprocessorParser::NOADV:
                case Cobol85PreprocessorParser::NOALIAS:
                case Cobol85PreprocessorParser::NOAWO:
                case Cobol85PreprocessorParser::NOBLOCK0:
                case Cobol85PreprocessorParser::NOC:
                case Cobol85PreprocessorParser::NOCBLCARD:
                case Cobol85PreprocessorParser::NOCICS:
                case Cobol85PreprocessorParser::NOCMPR2:
                case Cobol85PreprocessorParser::NOCOMPILE:
                case Cobol85PreprocessorParser::NOCPSM:
                case Cobol85PreprocessorParser::NOCURR:
                case Cobol85PreprocessorParser::NOCURRENCY:
                case Cobol85PreprocessorParser::NOD:
                case Cobol85PreprocessorParser::NODATEPROC:
                case Cobol85PreprocessorParser::NODBCS:
                case Cobol85PreprocessorParser::NODE:
                case Cobol85PreprocessorParser::NODEBUG:
                case Cobol85PreprocessorParser::NODECK:
                case Cobol85PreprocessorParser::NODIAGTRUNC:
                case Cobol85PreprocessorParser::NODLL:
                case Cobol85PreprocessorParser::NODU:
                case Cobol85PreprocessorParser::NODUMP:
                case Cobol85PreprocessorParser::NODP:
                case Cobol85PreprocessorParser::NODTR:
                case Cobol85PreprocessorParser::NODYN:
                case Cobol85PreprocessorParser::NODYNAM:
                case Cobol85PreprocessorParser::NOEDF:
                case Cobol85PreprocessorParser::NOEJPD:
                case Cobol85PreprocessorParser::NOEPILOG:
                case Cobol85PreprocessorParser::NOEXIT:
                case Cobol85PreprocessorParser::NOEXP:
                case Cobol85PreprocessorParser::NOEXPORTALL:
                case Cobol85PreprocessorParser::NOF:
                case Cobol85PreprocessorParser::NOFASTSRT:
                case Cobol85PreprocessorParser::NOFEPI:
                case Cobol85PreprocessorParser::NOFLAG:
                case Cobol85PreprocessorParser::NOFLAGMIG:
                case Cobol85PreprocessorParser::NOFLAGSTD:
                case Cobol85PreprocessorParser::NOFSRT:
                case Cobol85PreprocessorParser::NOGRAPHIC:
                case Cobol85PreprocessorParser::NOHOOK:
                case Cobol85PreprocessorParser::NOLENGTH:
                case Cobol85PreprocessorParser::NOLIB:
                case Cobol85PreprocessorParser::NOLINKAGE:
                case Cobol85PreprocessorParser::NOLIST:
                case Cobol85PreprocessorParser::NOMAP:
                case Cobol85PreprocessorParser::NOMD:
                case Cobol85PreprocessorParser::NOMDECK:
                case Cobol85PreprocessorParser::NONAME:
                case Cobol85PreprocessorParser::NONUM:
                case Cobol85PreprocessorParser::NONUMBER:
                case Cobol85PreprocessorParser::NOOBJ:
                case Cobol85PreprocessorParser::NOOBJECT:
                case Cobol85PreprocessorParser::NOOFF:
                case Cobol85PreprocessorParser::NOOFFSET:
                case Cobol85PreprocessorParser::NOOPSEQUENCE:
                case Cobol85PreprocessorParser::NOOPT:
                case Cobol85PreprocessorParser::NOOPTIMIZE:
                case Cobol85PreprocessorParser::NOOPTIONS:
                case Cobol85PreprocessorParser::NOP:
                case Cobol85PreprocessorParser::NOPFD:
                case Cobol85PreprocessorParser::NOPROLOG:
                case Cobol85PreprocessorParser::NORENT:
                case Cobol85PreprocessorParser::NOS:
                case Cobol85PreprocessorParser::NOSEP:
                case Cobol85PreprocessorParser::NOSEPARATE:
                case Cobol85PreprocessorParser::NOSEQ:
                case Cobol85PreprocessorParser::NOSOURCE:
                case Cobol85PreprocessorParser::NOSPIE:
                case Cobol85PreprocessorParser::NOSQL:
                case Cobol85PreprocessorParser::NOSQLC:
                case Cobol85PreprocessorParser::NOSQLCCSID:
                case Cobol85PreprocessorParser::NOSSR:
                case Cobol85PreprocessorParser::NOSSRANGE:
                case Cobol85PreprocessorParser::NOSTDTRUNC:
                case Cobol85PreprocessorParser::NOSEQUENCE:
                case Cobol85PreprocessorParser::NOTERM:
                case Cobol85PreprocessorParser::NOTERMINAL:
                case Cobol85PreprocessorParser::NOTEST:
                case Cobol85PreprocessorParser::NOTHREAD:
                case Cobol85PreprocessorParser::NOTRIG:
                case Cobol85PreprocessorParser::NOVBREF:
                case Cobol85PreprocessorParser::NOWORD:
                case Cobol85PreprocessorParser::NOX:
                case Cobol85PreprocessorParser::NOXREF:
                case Cobol85PreprocessorParser::NOZWB:
                case Cobol85PreprocessorParser::NS:
                case Cobol85PreprocessorParser::NSEQ:
                case Cobol85PreprocessorParser::NSYMBOL:
                case Cobol85PreprocessorParser::NUM:
                case Cobol85PreprocessorParser::NUMBER:
                case Cobol85PreprocessorParser::NUMPROC:
                case Cobol85PreprocessorParser::OBJ:
                case Cobol85PreprocessorParser::OBJECT:
                case Cobol85PreprocessorParser::OF:
                case Cobol85PreprocessorParser::OFF:
                case Cobol85PreprocessorParser::OFFSET:
                case Cobol85PreprocessorParser::ON:
                case Cobol85PreprocessorParser::OP:
                case Cobol85PreprocessorParser::OPMARGINS:
                case Cobol85PreprocessorParser::OPSEQUENCE:
                case Cobol85PreprocessorParser::OPT:
                case Cobol85PreprocessorParser::OPTFILE:
                case Cobol85PreprocessorParser::OPTIMIZE:
                case Cobol85PreprocessorParser::OPTIONS:
                case Cobol85PreprocessorParser::OUT:
                case Cobol85PreprocessorParser::OUTDD:
                case Cobol85PreprocessorParser::PFD:
                case Cobol85PreprocessorParser::PPTDBG:
                case Cobol85PreprocessorParser::PGMN:
                case Cobol85PreprocessorParser::PGMNAME:
                case Cobol85PreprocessorParser::PROCESS:
                case Cobol85PreprocessorParser::PROLOG:
                case Cobol85PreprocessorParser::QUOTE:
                case Cobol85PreprocessorParser::RENT:
                case Cobol85PreprocessorParser::REPLACING:
                case Cobol85PreprocessorParser::RMODE:
                case Cobol85PreprocessorParser::SEP:
                case Cobol85PreprocessorParser::SEPARATE:
                case Cobol85PreprocessorParser::SEQ:
                case Cobol85PreprocessorParser::SEQUENCE:
                case Cobol85PreprocessorParser::SHORT:
                case Cobol85PreprocessorParser::SIZE:
                case Cobol85PreprocessorParser::SOURCE:
                case Cobol85PreprocessorParser::SP:
                case Cobol85PreprocessorParser::SPACE:
                case Cobol85PreprocessorParser::SPIE:
                case Cobol85PreprocessorParser::SQL:
                case Cobol85PreprocessorParser::SQLC:
                case Cobol85PreprocessorParser::SQLCCSID:
                case Cobol85PreprocessorParser::SS:
                case Cobol85PreprocessorParser::SSR:
                case Cobol85PreprocessorParser::SSRANGE:
                case Cobol85PreprocessorParser::STD:
                case Cobol85PreprocessorParser::SYSEIB:
                case Cobol85PreprocessorParser::SZ:
                case Cobol85PreprocessorParser::TERM:
                case Cobol85PreprocessorParser::TERMINAL:
                case Cobol85PreprocessorParser::TEST:
                case Cobol85PreprocessorParser::THREAD:
                case Cobol85PreprocessorParser::TITLE:
                case Cobol85PreprocessorParser::TRIG:
                case Cobol85PreprocessorParser::TRUNC:
                case Cobol85PreprocessorParser::UE:
                case Cobol85PreprocessorParser::UPPER:
                case Cobol85PreprocessorParser::VBREF:
                case Cobol85PreprocessorParser::WD:
                case Cobol85PreprocessorParser::XMLPARSE:
                case Cobol85PreprocessorParser::XMLSS:
                case Cobol85PreprocessorParser::XOPTS:
                case Cobol85PreprocessorParser::XREF:
                case Cobol85PreprocessorParser::YEARWINDOW:
                case Cobol85PreprocessorParser::YW:
                case Cobol85PreprocessorParser::ZWB:
                case Cobol85PreprocessorParser::C_CHAR:
                case Cobol85PreprocessorParser::D_CHAR:
                case Cobol85PreprocessorParser::E_CHAR:
                case Cobol85PreprocessorParser::F_CHAR:
                case Cobol85PreprocessorParser::H_CHAR:
                case Cobol85PreprocessorParser::I_CHAR:
                case Cobol85PreprocessorParser::M_CHAR:
                case Cobol85PreprocessorParser::N_CHAR:
                case Cobol85PreprocessorParser::Q_CHAR:
                case Cobol85PreprocessorParser::S_CHAR:
                case Cobol85PreprocessorParser::U_CHAR:
                case Cobol85PreprocessorParser::W_CHAR:
                case Cobol85PreprocessorParser::X_CHAR:
                case Cobol85PreprocessorParser::COMMACHAR:
                case Cobol85PreprocessorParser::IDENTIFIER: {
                  setState(656);
                  cobolWord();
                  break;
                }

                case Cobol85PreprocessorParser::NONNUMERICLITERAL:
                case Cobol85PreprocessorParser::NUMERICLITERAL: {
                  setState(657);
                  literal();
                  break;
                }

                case Cobol85PreprocessorParser::FILENAME: {
                  setState(658);
                  filename();
                  break;
                }

                case Cobol85PreprocessorParser::TEXT: {
                  setState(659);
                  match(Cobol85PreprocessorParser::TEXT);
                  break;
                }

                case Cobol85PreprocessorParser::DOT: {
                  setState(660);
                  match(Cobol85PreprocessorParser::DOT);
                  break;
                }

                case Cobol85PreprocessorParser::LPARENCHAR: {
                  setState(661);
                  match(Cobol85PreprocessorParser::LPARENCHAR);
                  break;
                }

                case Cobol85PreprocessorParser::RPARENCHAR: {
                  setState(662);
                  match(Cobol85PreprocessorParser::RPARENCHAR);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(665); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CobolWordContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CobolWordContext::CobolWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CobolWordContext::IDENTIFIER() {
  return getToken(Cobol85PreprocessorParser::IDENTIFIER, 0);
}

Cobol85PreprocessorParser::CharDataKeywordContext* Cobol85PreprocessorParser::CobolWordContext::charDataKeyword() {
  return getRuleContext<Cobol85PreprocessorParser::CharDataKeywordContext>(0);
}


size_t Cobol85PreprocessorParser::CobolWordContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCobolWord;
}

void Cobol85PreprocessorParser::CobolWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCobolWord(this);
}

void Cobol85PreprocessorParser::CobolWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCobolWord(this);
}

Cobol85PreprocessorParser::CobolWordContext* Cobol85PreprocessorParser::cobolWord() {
  CobolWordContext *_localctx = _tracker.createInstance<CobolWordContext>(_ctx, getState());
  enterRule(_localctx, 52, Cobol85PreprocessorParser::RuleCobolWord);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(669);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Cobol85PreprocessorParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(667);
        match(Cobol85PreprocessorParser::IDENTIFIER);
        break;
      }

      case Cobol85PreprocessorParser::ADATA:
      case Cobol85PreprocessorParser::ADV:
      case Cobol85PreprocessorParser::ALIAS:
      case Cobol85PreprocessorParser::ANSI:
      case Cobol85PreprocessorParser::ANY:
      case Cobol85PreprocessorParser::APOST:
      case Cobol85PreprocessorParser::AR:
      case Cobol85PreprocessorParser::ARITH:
      case Cobol85PreprocessorParser::AUTO:
      case Cobol85PreprocessorParser::AWO:
      case Cobol85PreprocessorParser::BIN:
      case Cobol85PreprocessorParser::BLOCK0:
      case Cobol85PreprocessorParser::BUF:
      case Cobol85PreprocessorParser::BUFSIZE:
      case Cobol85PreprocessorParser::BY:
      case Cobol85PreprocessorParser::CBL:
      case Cobol85PreprocessorParser::CBLCARD:
      case Cobol85PreprocessorParser::CO:
      case Cobol85PreprocessorParser::COBOL2:
      case Cobol85PreprocessorParser::COBOL3:
      case Cobol85PreprocessorParser::CODEPAGE:
      case Cobol85PreprocessorParser::COMPAT:
      case Cobol85PreprocessorParser::COMPILE:
      case Cobol85PreprocessorParser::CP:
      case Cobol85PreprocessorParser::CPP:
      case Cobol85PreprocessorParser::CPSM:
      case Cobol85PreprocessorParser::CS:
      case Cobol85PreprocessorParser::CURR:
      case Cobol85PreprocessorParser::CURRENCY:
      case Cobol85PreprocessorParser::DATA:
      case Cobol85PreprocessorParser::DATEPROC:
      case Cobol85PreprocessorParser::DBCS:
      case Cobol85PreprocessorParser::DD:
      case Cobol85PreprocessorParser::DEBUG:
      case Cobol85PreprocessorParser::DECK:
      case Cobol85PreprocessorParser::DIAGTRUNC:
      case Cobol85PreprocessorParser::DLI:
      case Cobol85PreprocessorParser::DLL:
      case Cobol85PreprocessorParser::DP:
      case Cobol85PreprocessorParser::DTR:
      case Cobol85PreprocessorParser::DU:
      case Cobol85PreprocessorParser::DUMP:
      case Cobol85PreprocessorParser::DYN:
      case Cobol85PreprocessorParser::DYNAM:
      case Cobol85PreprocessorParser::EDF:
      case Cobol85PreprocessorParser::EJECT:
      case Cobol85PreprocessorParser::EJPD:
      case Cobol85PreprocessorParser::EN:
      case Cobol85PreprocessorParser::ENGLISH:
      case Cobol85PreprocessorParser::EPILOG:
      case Cobol85PreprocessorParser::EXCI:
      case Cobol85PreprocessorParser::EXIT:
      case Cobol85PreprocessorParser::EXP:
      case Cobol85PreprocessorParser::EXPORTALL:
      case Cobol85PreprocessorParser::EXTEND:
      case Cobol85PreprocessorParser::FASTSRT:
      case Cobol85PreprocessorParser::FLAG:
      case Cobol85PreprocessorParser::FLAGSTD:
      case Cobol85PreprocessorParser::FSRT:
      case Cobol85PreprocessorParser::FULL:
      case Cobol85PreprocessorParser::GDS:
      case Cobol85PreprocessorParser::GRAPHIC:
      case Cobol85PreprocessorParser::HOOK:
      case Cobol85PreprocessorParser::IN:
      case Cobol85PreprocessorParser::INTDATE:
      case Cobol85PreprocessorParser::JA:
      case Cobol85PreprocessorParser::JP:
      case Cobol85PreprocessorParser::KA:
      case Cobol85PreprocessorParser::LANG:
      case Cobol85PreprocessorParser::LANGUAGE:
      case Cobol85PreprocessorParser::LC:
      case Cobol85PreprocessorParser::LENGTH:
      case Cobol85PreprocessorParser::LIB:
      case Cobol85PreprocessorParser::LILIAN:
      case Cobol85PreprocessorParser::LIN:
      case Cobol85PreprocessorParser::LINECOUNT:
      case Cobol85PreprocessorParser::LINKAGE:
      case Cobol85PreprocessorParser::LIST:
      case Cobol85PreprocessorParser::LM:
      case Cobol85PreprocessorParser::LONGMIXED:
      case Cobol85PreprocessorParser::LONGUPPER:
      case Cobol85PreprocessorParser::LU:
      case Cobol85PreprocessorParser::MAP:
      case Cobol85PreprocessorParser::MARGINS:
      case Cobol85PreprocessorParser::MAX:
      case Cobol85PreprocessorParser::MD:
      case Cobol85PreprocessorParser::MDECK:
      case Cobol85PreprocessorParser::MIG:
      case Cobol85PreprocessorParser::MIXED:
      case Cobol85PreprocessorParser::NAME:
      case Cobol85PreprocessorParser::NAT:
      case Cobol85PreprocessorParser::NATIONAL:
      case Cobol85PreprocessorParser::NATLANG:
      case Cobol85PreprocessorParser::NN:
      case Cobol85PreprocessorParser::NO:
      case Cobol85PreprocessorParser::NOADATA:
      case Cobol85PreprocessorParser::NOADV:
      case Cobol85PreprocessorParser::NOALIAS:
      case Cobol85PreprocessorParser::NOAWO:
      case Cobol85PreprocessorParser::NOBLOCK0:
      case Cobol85PreprocessorParser::NOC:
      case Cobol85PreprocessorParser::NOCBLCARD:
      case Cobol85PreprocessorParser::NOCICS:
      case Cobol85PreprocessorParser::NOCMPR2:
      case Cobol85PreprocessorParser::NOCOMPILE:
      case Cobol85PreprocessorParser::NOCPSM:
      case Cobol85PreprocessorParser::NOCURR:
      case Cobol85PreprocessorParser::NOCURRENCY:
      case Cobol85PreprocessorParser::NOD:
      case Cobol85PreprocessorParser::NODATEPROC:
      case Cobol85PreprocessorParser::NODBCS:
      case Cobol85PreprocessorParser::NODE:
      case Cobol85PreprocessorParser::NODEBUG:
      case Cobol85PreprocessorParser::NODECK:
      case Cobol85PreprocessorParser::NODIAGTRUNC:
      case Cobol85PreprocessorParser::NODLL:
      case Cobol85PreprocessorParser::NODU:
      case Cobol85PreprocessorParser::NODUMP:
      case Cobol85PreprocessorParser::NODP:
      case Cobol85PreprocessorParser::NODTR:
      case Cobol85PreprocessorParser::NODYN:
      case Cobol85PreprocessorParser::NODYNAM:
      case Cobol85PreprocessorParser::NOEDF:
      case Cobol85PreprocessorParser::NOEJPD:
      case Cobol85PreprocessorParser::NOEPILOG:
      case Cobol85PreprocessorParser::NOEXIT:
      case Cobol85PreprocessorParser::NOEXP:
      case Cobol85PreprocessorParser::NOEXPORTALL:
      case Cobol85PreprocessorParser::NOF:
      case Cobol85PreprocessorParser::NOFASTSRT:
      case Cobol85PreprocessorParser::NOFEPI:
      case Cobol85PreprocessorParser::NOFLAG:
      case Cobol85PreprocessorParser::NOFLAGMIG:
      case Cobol85PreprocessorParser::NOFLAGSTD:
      case Cobol85PreprocessorParser::NOFSRT:
      case Cobol85PreprocessorParser::NOGRAPHIC:
      case Cobol85PreprocessorParser::NOHOOK:
      case Cobol85PreprocessorParser::NOLENGTH:
      case Cobol85PreprocessorParser::NOLIB:
      case Cobol85PreprocessorParser::NOLINKAGE:
      case Cobol85PreprocessorParser::NOLIST:
      case Cobol85PreprocessorParser::NOMAP:
      case Cobol85PreprocessorParser::NOMD:
      case Cobol85PreprocessorParser::NOMDECK:
      case Cobol85PreprocessorParser::NONAME:
      case Cobol85PreprocessorParser::NONUM:
      case Cobol85PreprocessorParser::NONUMBER:
      case Cobol85PreprocessorParser::NOOBJ:
      case Cobol85PreprocessorParser::NOOBJECT:
      case Cobol85PreprocessorParser::NOOFF:
      case Cobol85PreprocessorParser::NOOFFSET:
      case Cobol85PreprocessorParser::NOOPSEQUENCE:
      case Cobol85PreprocessorParser::NOOPT:
      case Cobol85PreprocessorParser::NOOPTIMIZE:
      case Cobol85PreprocessorParser::NOOPTIONS:
      case Cobol85PreprocessorParser::NOP:
      case Cobol85PreprocessorParser::NOPFD:
      case Cobol85PreprocessorParser::NOPROLOG:
      case Cobol85PreprocessorParser::NORENT:
      case Cobol85PreprocessorParser::NOS:
      case Cobol85PreprocessorParser::NOSEP:
      case Cobol85PreprocessorParser::NOSEPARATE:
      case Cobol85PreprocessorParser::NOSEQ:
      case Cobol85PreprocessorParser::NOSOURCE:
      case Cobol85PreprocessorParser::NOSPIE:
      case Cobol85PreprocessorParser::NOSQL:
      case Cobol85PreprocessorParser::NOSQLC:
      case Cobol85PreprocessorParser::NOSQLCCSID:
      case Cobol85PreprocessorParser::NOSSR:
      case Cobol85PreprocessorParser::NOSSRANGE:
      case Cobol85PreprocessorParser::NOSTDTRUNC:
      case Cobol85PreprocessorParser::NOSEQUENCE:
      case Cobol85PreprocessorParser::NOTERM:
      case Cobol85PreprocessorParser::NOTERMINAL:
      case Cobol85PreprocessorParser::NOTEST:
      case Cobol85PreprocessorParser::NOTHREAD:
      case Cobol85PreprocessorParser::NOTRIG:
      case Cobol85PreprocessorParser::NOVBREF:
      case Cobol85PreprocessorParser::NOWORD:
      case Cobol85PreprocessorParser::NOX:
      case Cobol85PreprocessorParser::NOXREF:
      case Cobol85PreprocessorParser::NOZWB:
      case Cobol85PreprocessorParser::NS:
      case Cobol85PreprocessorParser::NSEQ:
      case Cobol85PreprocessorParser::NSYMBOL:
      case Cobol85PreprocessorParser::NUM:
      case Cobol85PreprocessorParser::NUMBER:
      case Cobol85PreprocessorParser::NUMPROC:
      case Cobol85PreprocessorParser::OBJ:
      case Cobol85PreprocessorParser::OBJECT:
      case Cobol85PreprocessorParser::OF:
      case Cobol85PreprocessorParser::OFF:
      case Cobol85PreprocessorParser::OFFSET:
      case Cobol85PreprocessorParser::ON:
      case Cobol85PreprocessorParser::OP:
      case Cobol85PreprocessorParser::OPMARGINS:
      case Cobol85PreprocessorParser::OPSEQUENCE:
      case Cobol85PreprocessorParser::OPT:
      case Cobol85PreprocessorParser::OPTFILE:
      case Cobol85PreprocessorParser::OPTIMIZE:
      case Cobol85PreprocessorParser::OPTIONS:
      case Cobol85PreprocessorParser::OUT:
      case Cobol85PreprocessorParser::OUTDD:
      case Cobol85PreprocessorParser::PFD:
      case Cobol85PreprocessorParser::PPTDBG:
      case Cobol85PreprocessorParser::PGMN:
      case Cobol85PreprocessorParser::PGMNAME:
      case Cobol85PreprocessorParser::PROCESS:
      case Cobol85PreprocessorParser::PROLOG:
      case Cobol85PreprocessorParser::QUOTE:
      case Cobol85PreprocessorParser::RENT:
      case Cobol85PreprocessorParser::REPLACING:
      case Cobol85PreprocessorParser::RMODE:
      case Cobol85PreprocessorParser::SEP:
      case Cobol85PreprocessorParser::SEPARATE:
      case Cobol85PreprocessorParser::SEQ:
      case Cobol85PreprocessorParser::SEQUENCE:
      case Cobol85PreprocessorParser::SHORT:
      case Cobol85PreprocessorParser::SIZE:
      case Cobol85PreprocessorParser::SOURCE:
      case Cobol85PreprocessorParser::SP:
      case Cobol85PreprocessorParser::SPACE:
      case Cobol85PreprocessorParser::SPIE:
      case Cobol85PreprocessorParser::SQL:
      case Cobol85PreprocessorParser::SQLC:
      case Cobol85PreprocessorParser::SQLCCSID:
      case Cobol85PreprocessorParser::SS:
      case Cobol85PreprocessorParser::SSR:
      case Cobol85PreprocessorParser::SSRANGE:
      case Cobol85PreprocessorParser::STD:
      case Cobol85PreprocessorParser::SYSEIB:
      case Cobol85PreprocessorParser::SZ:
      case Cobol85PreprocessorParser::TERM:
      case Cobol85PreprocessorParser::TERMINAL:
      case Cobol85PreprocessorParser::TEST:
      case Cobol85PreprocessorParser::THREAD:
      case Cobol85PreprocessorParser::TITLE:
      case Cobol85PreprocessorParser::TRIG:
      case Cobol85PreprocessorParser::TRUNC:
      case Cobol85PreprocessorParser::UE:
      case Cobol85PreprocessorParser::UPPER:
      case Cobol85PreprocessorParser::VBREF:
      case Cobol85PreprocessorParser::WD:
      case Cobol85PreprocessorParser::XMLPARSE:
      case Cobol85PreprocessorParser::XMLSS:
      case Cobol85PreprocessorParser::XOPTS:
      case Cobol85PreprocessorParser::XREF:
      case Cobol85PreprocessorParser::YEARWINDOW:
      case Cobol85PreprocessorParser::YW:
      case Cobol85PreprocessorParser::ZWB:
      case Cobol85PreprocessorParser::C_CHAR:
      case Cobol85PreprocessorParser::D_CHAR:
      case Cobol85PreprocessorParser::E_CHAR:
      case Cobol85PreprocessorParser::F_CHAR:
      case Cobol85PreprocessorParser::H_CHAR:
      case Cobol85PreprocessorParser::I_CHAR:
      case Cobol85PreprocessorParser::M_CHAR:
      case Cobol85PreprocessorParser::N_CHAR:
      case Cobol85PreprocessorParser::Q_CHAR:
      case Cobol85PreprocessorParser::S_CHAR:
      case Cobol85PreprocessorParser::U_CHAR:
      case Cobol85PreprocessorParser::W_CHAR:
      case Cobol85PreprocessorParser::X_CHAR:
      case Cobol85PreprocessorParser::COMMACHAR: {
        enterOuterAlt(_localctx, 2);
        setState(668);
        charDataKeyword();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

Cobol85PreprocessorParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::LiteralContext::NONNUMERICLITERAL() {
  return getToken(Cobol85PreprocessorParser::NONNUMERICLITERAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::LiteralContext::NUMERICLITERAL() {
  return getToken(Cobol85PreprocessorParser::NUMERICLITERAL, 0);
}


size_t Cobol85PreprocessorParser::LiteralContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleLiteral;
}

void Cobol85PreprocessorParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Cobol85PreprocessorParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

Cobol85PreprocessorParser::LiteralContext* Cobol85PreprocessorParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, Cobol85PreprocessorParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    _la = _input->LA(1);
    if (!(_la == Cobol85PreprocessorParser::NONNUMERICLITERAL

    || _la == Cobol85PreprocessorParser::NUMERICLITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilenameContext ------------------------------------------------------------------

Cobol85PreprocessorParser::FilenameContext::FilenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::FilenameContext::FILENAME() {
  return getToken(Cobol85PreprocessorParser::FILENAME, 0);
}


size_t Cobol85PreprocessorParser::FilenameContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleFilename;
}

void Cobol85PreprocessorParser::FilenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilename(this);
}

void Cobol85PreprocessorParser::FilenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilename(this);
}

Cobol85PreprocessorParser::FilenameContext* Cobol85PreprocessorParser::filename() {
  FilenameContext *_localctx = _tracker.createInstance<FilenameContext>(_ctx, getState());
  enterRule(_localctx, 56, Cobol85PreprocessorParser::RuleFilename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(673);
    match(Cobol85PreprocessorParser::FILENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharDataKeywordContext ------------------------------------------------------------------

Cobol85PreprocessorParser::CharDataKeywordContext::CharDataKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ADATA() {
  return getToken(Cobol85PreprocessorParser::ADATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ADV() {
  return getToken(Cobol85PreprocessorParser::ADV, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ALIAS() {
  return getToken(Cobol85PreprocessorParser::ALIAS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ANSI() {
  return getToken(Cobol85PreprocessorParser::ANSI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ANY() {
  return getToken(Cobol85PreprocessorParser::ANY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::APOST() {
  return getToken(Cobol85PreprocessorParser::APOST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::AR() {
  return getToken(Cobol85PreprocessorParser::AR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ARITH() {
  return getToken(Cobol85PreprocessorParser::ARITH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::AUTO() {
  return getToken(Cobol85PreprocessorParser::AUTO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::AWO() {
  return getToken(Cobol85PreprocessorParser::AWO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::BIN() {
  return getToken(Cobol85PreprocessorParser::BIN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::BLOCK0() {
  return getToken(Cobol85PreprocessorParser::BLOCK0, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::BUF() {
  return getToken(Cobol85PreprocessorParser::BUF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::BUFSIZE() {
  return getToken(Cobol85PreprocessorParser::BUFSIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::BY() {
  return getToken(Cobol85PreprocessorParser::BY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CBL() {
  return getToken(Cobol85PreprocessorParser::CBL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CBLCARD() {
  return getToken(Cobol85PreprocessorParser::CBLCARD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CO() {
  return getToken(Cobol85PreprocessorParser::CO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::COBOL2() {
  return getToken(Cobol85PreprocessorParser::COBOL2, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::COBOL3() {
  return getToken(Cobol85PreprocessorParser::COBOL3, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CODEPAGE() {
  return getToken(Cobol85PreprocessorParser::CODEPAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::COMMACHAR() {
  return getToken(Cobol85PreprocessorParser::COMMACHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::COMPAT() {
  return getToken(Cobol85PreprocessorParser::COMPAT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::COMPILE() {
  return getToken(Cobol85PreprocessorParser::COMPILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CP() {
  return getToken(Cobol85PreprocessorParser::CP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CPP() {
  return getToken(Cobol85PreprocessorParser::CPP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CPSM() {
  return getToken(Cobol85PreprocessorParser::CPSM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CS() {
  return getToken(Cobol85PreprocessorParser::CS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CURR() {
  return getToken(Cobol85PreprocessorParser::CURR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::CURRENCY() {
  return getToken(Cobol85PreprocessorParser::CURRENCY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DATA() {
  return getToken(Cobol85PreprocessorParser::DATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DATEPROC() {
  return getToken(Cobol85PreprocessorParser::DATEPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DBCS() {
  return getToken(Cobol85PreprocessorParser::DBCS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DD() {
  return getToken(Cobol85PreprocessorParser::DD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DEBUG() {
  return getToken(Cobol85PreprocessorParser::DEBUG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DECK() {
  return getToken(Cobol85PreprocessorParser::DECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DIAGTRUNC() {
  return getToken(Cobol85PreprocessorParser::DIAGTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DLI() {
  return getToken(Cobol85PreprocessorParser::DLI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DLL() {
  return getToken(Cobol85PreprocessorParser::DLL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DP() {
  return getToken(Cobol85PreprocessorParser::DP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DTR() {
  return getToken(Cobol85PreprocessorParser::DTR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DU() {
  return getToken(Cobol85PreprocessorParser::DU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DUMP() {
  return getToken(Cobol85PreprocessorParser::DUMP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DYN() {
  return getToken(Cobol85PreprocessorParser::DYN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::DYNAM() {
  return getToken(Cobol85PreprocessorParser::DYNAM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EDF() {
  return getToken(Cobol85PreprocessorParser::EDF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EJECT() {
  return getToken(Cobol85PreprocessorParser::EJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EJPD() {
  return getToken(Cobol85PreprocessorParser::EJPD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EN() {
  return getToken(Cobol85PreprocessorParser::EN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ENGLISH() {
  return getToken(Cobol85PreprocessorParser::ENGLISH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EPILOG() {
  return getToken(Cobol85PreprocessorParser::EPILOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EXCI() {
  return getToken(Cobol85PreprocessorParser::EXCI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EXIT() {
  return getToken(Cobol85PreprocessorParser::EXIT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EXP() {
  return getToken(Cobol85PreprocessorParser::EXP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EXPORTALL() {
  return getToken(Cobol85PreprocessorParser::EXPORTALL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::EXTEND() {
  return getToken(Cobol85PreprocessorParser::EXTEND, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::FASTSRT() {
  return getToken(Cobol85PreprocessorParser::FASTSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::FLAG() {
  return getToken(Cobol85PreprocessorParser::FLAG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::FLAGSTD() {
  return getToken(Cobol85PreprocessorParser::FLAGSTD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::FULL() {
  return getToken(Cobol85PreprocessorParser::FULL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::FSRT() {
  return getToken(Cobol85PreprocessorParser::FSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::GDS() {
  return getToken(Cobol85PreprocessorParser::GDS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::GRAPHIC() {
  return getToken(Cobol85PreprocessorParser::GRAPHIC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::HOOK() {
  return getToken(Cobol85PreprocessorParser::HOOK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::IN() {
  return getToken(Cobol85PreprocessorParser::IN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::INTDATE() {
  return getToken(Cobol85PreprocessorParser::INTDATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::JA() {
  return getToken(Cobol85PreprocessorParser::JA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::JP() {
  return getToken(Cobol85PreprocessorParser::JP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::KA() {
  return getToken(Cobol85PreprocessorParser::KA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LANG() {
  return getToken(Cobol85PreprocessorParser::LANG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LANGUAGE() {
  return getToken(Cobol85PreprocessorParser::LANGUAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LC() {
  return getToken(Cobol85PreprocessorParser::LC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LENGTH() {
  return getToken(Cobol85PreprocessorParser::LENGTH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LIB() {
  return getToken(Cobol85PreprocessorParser::LIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LILIAN() {
  return getToken(Cobol85PreprocessorParser::LILIAN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LIN() {
  return getToken(Cobol85PreprocessorParser::LIN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LINECOUNT() {
  return getToken(Cobol85PreprocessorParser::LINECOUNT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LINKAGE() {
  return getToken(Cobol85PreprocessorParser::LINKAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LIST() {
  return getToken(Cobol85PreprocessorParser::LIST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LM() {
  return getToken(Cobol85PreprocessorParser::LM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LONGMIXED() {
  return getToken(Cobol85PreprocessorParser::LONGMIXED, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LONGUPPER() {
  return getToken(Cobol85PreprocessorParser::LONGUPPER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::LU() {
  return getToken(Cobol85PreprocessorParser::LU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MAP() {
  return getToken(Cobol85PreprocessorParser::MAP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MARGINS() {
  return getToken(Cobol85PreprocessorParser::MARGINS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MAX() {
  return getToken(Cobol85PreprocessorParser::MAX, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MD() {
  return getToken(Cobol85PreprocessorParser::MD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MDECK() {
  return getToken(Cobol85PreprocessorParser::MDECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MIG() {
  return getToken(Cobol85PreprocessorParser::MIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::MIXED() {
  return getToken(Cobol85PreprocessorParser::MIXED, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NAME() {
  return getToken(Cobol85PreprocessorParser::NAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NAT() {
  return getToken(Cobol85PreprocessorParser::NAT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NATIONAL() {
  return getToken(Cobol85PreprocessorParser::NATIONAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NATLANG() {
  return getToken(Cobol85PreprocessorParser::NATLANG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NN() {
  return getToken(Cobol85PreprocessorParser::NN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NO() {
  return getToken(Cobol85PreprocessorParser::NO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOADATA() {
  return getToken(Cobol85PreprocessorParser::NOADATA, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOADV() {
  return getToken(Cobol85PreprocessorParser::NOADV, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOALIAS() {
  return getToken(Cobol85PreprocessorParser::NOALIAS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOAWO() {
  return getToken(Cobol85PreprocessorParser::NOAWO, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOBLOCK0() {
  return getToken(Cobol85PreprocessorParser::NOBLOCK0, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOC() {
  return getToken(Cobol85PreprocessorParser::NOC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCBLCARD() {
  return getToken(Cobol85PreprocessorParser::NOCBLCARD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCICS() {
  return getToken(Cobol85PreprocessorParser::NOCICS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCMPR2() {
  return getToken(Cobol85PreprocessorParser::NOCMPR2, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCOMPILE() {
  return getToken(Cobol85PreprocessorParser::NOCOMPILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCPSM() {
  return getToken(Cobol85PreprocessorParser::NOCPSM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCURR() {
  return getToken(Cobol85PreprocessorParser::NOCURR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOCURRENCY() {
  return getToken(Cobol85PreprocessorParser::NOCURRENCY, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOD() {
  return getToken(Cobol85PreprocessorParser::NOD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODATEPROC() {
  return getToken(Cobol85PreprocessorParser::NODATEPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODBCS() {
  return getToken(Cobol85PreprocessorParser::NODBCS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODE() {
  return getToken(Cobol85PreprocessorParser::NODE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODEBUG() {
  return getToken(Cobol85PreprocessorParser::NODEBUG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODECK() {
  return getToken(Cobol85PreprocessorParser::NODECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODIAGTRUNC() {
  return getToken(Cobol85PreprocessorParser::NODIAGTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODLL() {
  return getToken(Cobol85PreprocessorParser::NODLL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODU() {
  return getToken(Cobol85PreprocessorParser::NODU, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODUMP() {
  return getToken(Cobol85PreprocessorParser::NODUMP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODP() {
  return getToken(Cobol85PreprocessorParser::NODP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODTR() {
  return getToken(Cobol85PreprocessorParser::NODTR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODYN() {
  return getToken(Cobol85PreprocessorParser::NODYN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NODYNAM() {
  return getToken(Cobol85PreprocessorParser::NODYNAM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEDF() {
  return getToken(Cobol85PreprocessorParser::NOEDF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEJPD() {
  return getToken(Cobol85PreprocessorParser::NOEJPD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEPILOG() {
  return getToken(Cobol85PreprocessorParser::NOEPILOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEXIT() {
  return getToken(Cobol85PreprocessorParser::NOEXIT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEXP() {
  return getToken(Cobol85PreprocessorParser::NOEXP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOEXPORTALL() {
  return getToken(Cobol85PreprocessorParser::NOEXPORTALL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOF() {
  return getToken(Cobol85PreprocessorParser::NOF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFASTSRT() {
  return getToken(Cobol85PreprocessorParser::NOFASTSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFEPI() {
  return getToken(Cobol85PreprocessorParser::NOFEPI, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFLAG() {
  return getToken(Cobol85PreprocessorParser::NOFLAG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFLAGMIG() {
  return getToken(Cobol85PreprocessorParser::NOFLAGMIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFLAGSTD() {
  return getToken(Cobol85PreprocessorParser::NOFLAGSTD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOFSRT() {
  return getToken(Cobol85PreprocessorParser::NOFSRT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOGRAPHIC() {
  return getToken(Cobol85PreprocessorParser::NOGRAPHIC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOHOOK() {
  return getToken(Cobol85PreprocessorParser::NOHOOK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOLENGTH() {
  return getToken(Cobol85PreprocessorParser::NOLENGTH, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOLIB() {
  return getToken(Cobol85PreprocessorParser::NOLIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOLINKAGE() {
  return getToken(Cobol85PreprocessorParser::NOLINKAGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOLIST() {
  return getToken(Cobol85PreprocessorParser::NOLIST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOMAP() {
  return getToken(Cobol85PreprocessorParser::NOMAP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOMD() {
  return getToken(Cobol85PreprocessorParser::NOMD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOMDECK() {
  return getToken(Cobol85PreprocessorParser::NOMDECK, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NONAME() {
  return getToken(Cobol85PreprocessorParser::NONAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NONUM() {
  return getToken(Cobol85PreprocessorParser::NONUM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NONUMBER() {
  return getToken(Cobol85PreprocessorParser::NONUMBER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOBJ() {
  return getToken(Cobol85PreprocessorParser::NOOBJ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOBJECT() {
  return getToken(Cobol85PreprocessorParser::NOOBJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOFF() {
  return getToken(Cobol85PreprocessorParser::NOOFF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOFFSET() {
  return getToken(Cobol85PreprocessorParser::NOOFFSET, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOPSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::NOOPSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOPT() {
  return getToken(Cobol85PreprocessorParser::NOOPT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOPTIMIZE() {
  return getToken(Cobol85PreprocessorParser::NOOPTIMIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOOPTIONS() {
  return getToken(Cobol85PreprocessorParser::NOOPTIONS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOP() {
  return getToken(Cobol85PreprocessorParser::NOP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOPFD() {
  return getToken(Cobol85PreprocessorParser::NOPFD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOPROLOG() {
  return getToken(Cobol85PreprocessorParser::NOPROLOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NORENT() {
  return getToken(Cobol85PreprocessorParser::NORENT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOS() {
  return getToken(Cobol85PreprocessorParser::NOS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSEP() {
  return getToken(Cobol85PreprocessorParser::NOSEP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSEPARATE() {
  return getToken(Cobol85PreprocessorParser::NOSEPARATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSEQ() {
  return getToken(Cobol85PreprocessorParser::NOSEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::NOSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSOURCE() {
  return getToken(Cobol85PreprocessorParser::NOSOURCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSPIE() {
  return getToken(Cobol85PreprocessorParser::NOSPIE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSQL() {
  return getToken(Cobol85PreprocessorParser::NOSQL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSQLC() {
  return getToken(Cobol85PreprocessorParser::NOSQLC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSQLCCSID() {
  return getToken(Cobol85PreprocessorParser::NOSQLCCSID, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSSR() {
  return getToken(Cobol85PreprocessorParser::NOSSR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSSRANGE() {
  return getToken(Cobol85PreprocessorParser::NOSSRANGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOSTDTRUNC() {
  return getToken(Cobol85PreprocessorParser::NOSTDTRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOTERM() {
  return getToken(Cobol85PreprocessorParser::NOTERM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOTERMINAL() {
  return getToken(Cobol85PreprocessorParser::NOTERMINAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOTEST() {
  return getToken(Cobol85PreprocessorParser::NOTEST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOTHREAD() {
  return getToken(Cobol85PreprocessorParser::NOTHREAD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOTRIG() {
  return getToken(Cobol85PreprocessorParser::NOTRIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOVBREF() {
  return getToken(Cobol85PreprocessorParser::NOVBREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOWORD() {
  return getToken(Cobol85PreprocessorParser::NOWORD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOX() {
  return getToken(Cobol85PreprocessorParser::NOX, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOXREF() {
  return getToken(Cobol85PreprocessorParser::NOXREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NOZWB() {
  return getToken(Cobol85PreprocessorParser::NOZWB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NSEQ() {
  return getToken(Cobol85PreprocessorParser::NSEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NSYMBOL() {
  return getToken(Cobol85PreprocessorParser::NSYMBOL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NS() {
  return getToken(Cobol85PreprocessorParser::NS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NUM() {
  return getToken(Cobol85PreprocessorParser::NUM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NUMBER() {
  return getToken(Cobol85PreprocessorParser::NUMBER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::NUMPROC() {
  return getToken(Cobol85PreprocessorParser::NUMPROC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OBJ() {
  return getToken(Cobol85PreprocessorParser::OBJ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OBJECT() {
  return getToken(Cobol85PreprocessorParser::OBJECT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ON() {
  return getToken(Cobol85PreprocessorParser::ON, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OF() {
  return getToken(Cobol85PreprocessorParser::OF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OFF() {
  return getToken(Cobol85PreprocessorParser::OFF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OFFSET() {
  return getToken(Cobol85PreprocessorParser::OFFSET, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPMARGINS() {
  return getToken(Cobol85PreprocessorParser::OPMARGINS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPSEQUENCE() {
  return getToken(Cobol85PreprocessorParser::OPSEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPTIMIZE() {
  return getToken(Cobol85PreprocessorParser::OPTIMIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OP() {
  return getToken(Cobol85PreprocessorParser::OP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPT() {
  return getToken(Cobol85PreprocessorParser::OPT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPTFILE() {
  return getToken(Cobol85PreprocessorParser::OPTFILE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OPTIONS() {
  return getToken(Cobol85PreprocessorParser::OPTIONS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OUT() {
  return getToken(Cobol85PreprocessorParser::OUT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::OUTDD() {
  return getToken(Cobol85PreprocessorParser::OUTDD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PFD() {
  return getToken(Cobol85PreprocessorParser::PFD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PGMN() {
  return getToken(Cobol85PreprocessorParser::PGMN, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PGMNAME() {
  return getToken(Cobol85PreprocessorParser::PGMNAME, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PPTDBG() {
  return getToken(Cobol85PreprocessorParser::PPTDBG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PROCESS() {
  return getToken(Cobol85PreprocessorParser::PROCESS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::PROLOG() {
  return getToken(Cobol85PreprocessorParser::PROLOG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::QUOTE() {
  return getToken(Cobol85PreprocessorParser::QUOTE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::RENT() {
  return getToken(Cobol85PreprocessorParser::RENT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::REPLACING() {
  return getToken(Cobol85PreprocessorParser::REPLACING, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::RMODE() {
  return getToken(Cobol85PreprocessorParser::RMODE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SEQ() {
  return getToken(Cobol85PreprocessorParser::SEQ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SEQUENCE() {
  return getToken(Cobol85PreprocessorParser::SEQUENCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SEP() {
  return getToken(Cobol85PreprocessorParser::SEP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SEPARATE() {
  return getToken(Cobol85PreprocessorParser::SEPARATE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SHORT() {
  return getToken(Cobol85PreprocessorParser::SHORT, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SIZE() {
  return getToken(Cobol85PreprocessorParser::SIZE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SOURCE() {
  return getToken(Cobol85PreprocessorParser::SOURCE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SP() {
  return getToken(Cobol85PreprocessorParser::SP, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SPACE() {
  return getToken(Cobol85PreprocessorParser::SPACE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SPIE() {
  return getToken(Cobol85PreprocessorParser::SPIE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SQL() {
  return getToken(Cobol85PreprocessorParser::SQL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SQLC() {
  return getToken(Cobol85PreprocessorParser::SQLC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SQLCCSID() {
  return getToken(Cobol85PreprocessorParser::SQLCCSID, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SS() {
  return getToken(Cobol85PreprocessorParser::SS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SSR() {
  return getToken(Cobol85PreprocessorParser::SSR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SSRANGE() {
  return getToken(Cobol85PreprocessorParser::SSRANGE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::STD() {
  return getToken(Cobol85PreprocessorParser::STD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SYSEIB() {
  return getToken(Cobol85PreprocessorParser::SYSEIB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::SZ() {
  return getToken(Cobol85PreprocessorParser::SZ, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TERM() {
  return getToken(Cobol85PreprocessorParser::TERM, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TERMINAL() {
  return getToken(Cobol85PreprocessorParser::TERMINAL, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TEST() {
  return getToken(Cobol85PreprocessorParser::TEST, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::THREAD() {
  return getToken(Cobol85PreprocessorParser::THREAD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TITLE() {
  return getToken(Cobol85PreprocessorParser::TITLE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TRIG() {
  return getToken(Cobol85PreprocessorParser::TRIG, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::TRUNC() {
  return getToken(Cobol85PreprocessorParser::TRUNC, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::UE() {
  return getToken(Cobol85PreprocessorParser::UE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::UPPER() {
  return getToken(Cobol85PreprocessorParser::UPPER, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::VBREF() {
  return getToken(Cobol85PreprocessorParser::VBREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::WD() {
  return getToken(Cobol85PreprocessorParser::WD, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::XMLPARSE() {
  return getToken(Cobol85PreprocessorParser::XMLPARSE, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::XMLSS() {
  return getToken(Cobol85PreprocessorParser::XMLSS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::XOPTS() {
  return getToken(Cobol85PreprocessorParser::XOPTS, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::XREF() {
  return getToken(Cobol85PreprocessorParser::XREF, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::YEARWINDOW() {
  return getToken(Cobol85PreprocessorParser::YEARWINDOW, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::YW() {
  return getToken(Cobol85PreprocessorParser::YW, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::ZWB() {
  return getToken(Cobol85PreprocessorParser::ZWB, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::C_CHAR() {
  return getToken(Cobol85PreprocessorParser::C_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::D_CHAR() {
  return getToken(Cobol85PreprocessorParser::D_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::E_CHAR() {
  return getToken(Cobol85PreprocessorParser::E_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::F_CHAR() {
  return getToken(Cobol85PreprocessorParser::F_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::H_CHAR() {
  return getToken(Cobol85PreprocessorParser::H_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::I_CHAR() {
  return getToken(Cobol85PreprocessorParser::I_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::M_CHAR() {
  return getToken(Cobol85PreprocessorParser::M_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::N_CHAR() {
  return getToken(Cobol85PreprocessorParser::N_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::Q_CHAR() {
  return getToken(Cobol85PreprocessorParser::Q_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::S_CHAR() {
  return getToken(Cobol85PreprocessorParser::S_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::U_CHAR() {
  return getToken(Cobol85PreprocessorParser::U_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::W_CHAR() {
  return getToken(Cobol85PreprocessorParser::W_CHAR, 0);
}

tree::TerminalNode* Cobol85PreprocessorParser::CharDataKeywordContext::X_CHAR() {
  return getToken(Cobol85PreprocessorParser::X_CHAR, 0);
}


size_t Cobol85PreprocessorParser::CharDataKeywordContext::getRuleIndex() const {
  return Cobol85PreprocessorParser::RuleCharDataKeyword;
}

void Cobol85PreprocessorParser::CharDataKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharDataKeyword(this);
}

void Cobol85PreprocessorParser::CharDataKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Cobol85PreprocessorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharDataKeyword(this);
}

Cobol85PreprocessorParser::CharDataKeywordContext* Cobol85PreprocessorParser::charDataKeyword() {
  CharDataKeywordContext *_localctx = _tracker.createInstance<CharDataKeywordContext>(_ctx, getState());
  enterRule(_localctx, 58, Cobol85PreprocessorParser::RuleCharDataKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(675);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2346375405893844994) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -16785409) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -288230376151711745) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & -9534967251992577) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & 100663159) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void Cobol85PreprocessorParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cobol85preprocessorParserInitialize();
#else
  ::antlr4::internal::call_once(cobol85preprocessorParserOnceFlag, cobol85preprocessorParserInitialize);
#endif
}
