
// Generated from matlab.g4 by ANTLR 4.13.0


#include "matlabListener.h"

#include "matlabParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MatlabParserStaticData final {
  MatlabParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MatlabParserStaticData(const MatlabParserStaticData&) = delete;
  MatlabParserStaticData(MatlabParserStaticData&&) = delete;
  MatlabParserStaticData& operator=(const MatlabParserStaticData&) = delete;
  MatlabParserStaticData& operator=(MatlabParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag matlabParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MatlabParserStaticData *matlabParserStaticData = nullptr;

void matlabParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (matlabParserStaticData != nullptr) {
    return;
  }
#else
  assert(matlabParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MatlabParserStaticData>(
    std::vector<std::string>{
      "file_", "primary_expression", "postfix_expression", "index_expression", 
      "index_expression_list", "array_expression", "unary_expression", "unary_operator", 
      "multiplicative_expression", "additive_expression", "relational_expression", 
      "equality_expression", "and_expression", "or_expression", "expression", 
      "assignment_expression", "eostmt", "statement", "statement_list", 
      "identifier_list", "global_statement", "clear_statement", "expression_statement", 
      "assignment_statement", "array_element", "array_list", "selection_statement", 
      "elseif_clause", "iteration_statement", "jump_statement", "translation_unit", 
      "func_ident_list", "func_return_list", "function_declare_lhs", "function_declare"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'['", "']'", "':'", "','", "'+'", "'-'", "'~'", 
      "'*'", "'/'", "'\\'", "'^'", "'<'", "'>'", "'&'", "'|'", "'='", "';'", 
      "'.*'", "'.\\'", "'./'", "'.^'", "'break'", "'return'", "'function'", 
      "'for'", "'while'", "'end'", "'global'", "'if'", "'clear'", "'else'", 
      "'elseif'", "'<='", "'>='", "'=='", "'~='", "'transpose'", "'.''"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "ARRAYMUL", "ARRAYDIV", "ARRAYRDIV", "ARRAYPOW", "BREAK", 
      "RETURN", "FUNCTION", "FOR", "WHILE", "END", "GLOBAL", "IF", "CLEAR", 
      "ELSE", "ELSEIF", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "TRANSPOSE", 
      "NCTRANSPOSE", "STRING_LITERAL", "IDENTIFIER", "CONSTANT", "CR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,435,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,3,
  	0,72,8,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	3,1,89,8,1,1,2,1,2,1,2,3,2,94,8,2,1,2,1,2,1,2,1,2,5,2,100,8,2,10,2,12,
  	2,103,9,2,1,3,1,3,3,3,107,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,115,8,4,10,
  	4,12,4,118,9,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,3,6,129,8,6,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,160,8,8,10,8,12,8,163,9,8,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,174,8,9,10,9,12,9,177,9,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	5,10,194,8,10,10,10,12,10,197,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,5,11,208,8,11,10,11,12,11,211,9,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,5,12,219,8,12,10,12,12,12,222,9,12,1,13,1,13,1,13,1,13,1,13,1,13,
  	5,13,230,8,13,10,13,12,13,233,9,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,
  	241,8,14,10,14,12,14,244,9,14,1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,3,17,259,8,17,1,18,1,18,1,18,1,18,1,18,5,18,
  	266,8,18,10,18,12,18,269,9,18,1,19,1,19,1,19,1,19,1,19,5,19,276,8,19,
  	10,19,12,19,279,9,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,22,3,22,293,8,22,1,23,1,23,1,23,1,24,1,24,3,24,300,8,24,1,25,1,
  	25,1,25,1,25,1,25,5,25,307,8,25,10,25,12,25,310,9,25,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,342,
  	8,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,5,27,354,8,27,
  	10,27,12,27,357,9,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	3,28,383,8,28,1,29,1,29,1,29,1,29,3,29,389,8,29,1,30,1,30,1,30,1,30,1,
  	30,1,30,3,30,397,8,30,1,31,1,31,1,31,1,31,1,31,1,31,5,31,405,8,31,10,
  	31,12,31,408,9,31,1,32,1,32,1,32,1,32,1,32,3,32,415,8,32,1,33,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,426,8,33,1,34,1,34,1,34,1,34,1,
  	34,3,34,433,8,34,1,34,0,14,4,8,16,18,20,22,24,26,28,36,38,50,54,62,35,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,
  	50,52,54,56,58,60,62,64,66,68,0,2,1,0,7,9,3,0,6,6,19,19,44,44,454,0,71,
  	1,0,0,0,2,88,1,0,0,0,4,93,1,0,0,0,6,106,1,0,0,0,8,108,1,0,0,0,10,119,
  	1,0,0,0,12,128,1,0,0,0,14,130,1,0,0,0,16,132,1,0,0,0,18,164,1,0,0,0,20,
  	178,1,0,0,0,22,198,1,0,0,0,24,212,1,0,0,0,26,223,1,0,0,0,28,234,1,0,0,
  	0,30,245,1,0,0,0,32,249,1,0,0,0,34,258,1,0,0,0,36,260,1,0,0,0,38,270,
  	1,0,0,0,40,280,1,0,0,0,42,284,1,0,0,0,44,292,1,0,0,0,46,294,1,0,0,0,48,
  	299,1,0,0,0,50,301,1,0,0,0,52,341,1,0,0,0,54,343,1,0,0,0,56,382,1,0,0,
  	0,58,388,1,0,0,0,60,396,1,0,0,0,62,398,1,0,0,0,64,414,1,0,0,0,66,425,
  	1,0,0,0,68,432,1,0,0,0,70,72,3,36,18,0,71,70,1,0,0,0,71,72,1,0,0,0,72,
  	73,1,0,0,0,73,74,5,0,0,1,74,1,1,0,0,0,75,89,5,42,0,0,76,89,5,43,0,0,77,
  	89,5,41,0,0,78,79,5,1,0,0,79,80,3,28,14,0,80,81,5,2,0,0,81,89,1,0,0,0,
  	82,83,5,3,0,0,83,89,5,4,0,0,84,85,5,3,0,0,85,86,3,50,25,0,86,87,5,4,0,
  	0,87,89,1,0,0,0,88,75,1,0,0,0,88,76,1,0,0,0,88,77,1,0,0,0,88,78,1,0,0,
  	0,88,82,1,0,0,0,88,84,1,0,0,0,89,3,1,0,0,0,90,91,6,2,-1,0,91,94,3,2,1,
  	0,92,94,3,10,5,0,93,90,1,0,0,0,93,92,1,0,0,0,94,101,1,0,0,0,95,96,10,
  	2,0,0,96,100,5,39,0,0,97,98,10,1,0,0,98,100,5,40,0,0,99,95,1,0,0,0,99,
  	97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,5,1,0,0,
  	0,103,101,1,0,0,0,104,107,5,5,0,0,105,107,3,28,14,0,106,104,1,0,0,0,106,
  	105,1,0,0,0,107,7,1,0,0,0,108,109,6,4,-1,0,109,110,3,6,3,0,110,116,1,
  	0,0,0,111,112,10,1,0,0,112,113,5,6,0,0,113,115,3,6,3,0,114,111,1,0,0,
  	0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,9,1,0,0,0,118,116,
  	1,0,0,0,119,120,5,42,0,0,120,121,5,1,0,0,121,122,3,8,4,0,122,123,5,2,
  	0,0,123,11,1,0,0,0,124,129,3,4,2,0,125,126,3,14,7,0,126,127,3,4,2,0,127,
  	129,1,0,0,0,128,124,1,0,0,0,128,125,1,0,0,0,129,13,1,0,0,0,130,131,7,
  	0,0,0,131,15,1,0,0,0,132,133,6,8,-1,0,133,134,3,12,6,0,134,161,1,0,0,
  	0,135,136,10,8,0,0,136,137,5,10,0,0,137,160,3,12,6,0,138,139,10,7,0,0,
  	139,140,5,11,0,0,140,160,3,12,6,0,141,142,10,6,0,0,142,143,5,12,0,0,143,
  	160,3,12,6,0,144,145,10,5,0,0,145,146,5,13,0,0,146,160,3,12,6,0,147,148,
  	10,4,0,0,148,149,5,20,0,0,149,160,3,12,6,0,150,151,10,3,0,0,151,152,5,
  	21,0,0,152,160,3,12,6,0,153,154,10,2,0,0,154,155,5,22,0,0,155,160,3,12,
  	6,0,156,157,10,1,0,0,157,158,5,23,0,0,158,160,3,12,6,0,159,135,1,0,0,
  	0,159,138,1,0,0,0,159,141,1,0,0,0,159,144,1,0,0,0,159,147,1,0,0,0,159,
  	150,1,0,0,0,159,153,1,0,0,0,159,156,1,0,0,0,160,163,1,0,0,0,161,159,1,
  	0,0,0,161,162,1,0,0,0,162,17,1,0,0,0,163,161,1,0,0,0,164,165,6,9,-1,0,
  	165,166,3,16,8,0,166,175,1,0,0,0,167,168,10,2,0,0,168,169,5,7,0,0,169,
  	174,3,16,8,0,170,171,10,1,0,0,171,172,5,8,0,0,172,174,3,16,8,0,173,167,
  	1,0,0,0,173,170,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,
  	0,176,19,1,0,0,0,177,175,1,0,0,0,178,179,6,10,-1,0,179,180,3,18,9,0,180,
  	195,1,0,0,0,181,182,10,4,0,0,182,183,5,14,0,0,183,194,3,18,9,0,184,185,
  	10,3,0,0,185,186,5,15,0,0,186,194,3,18,9,0,187,188,10,2,0,0,188,189,5,
  	35,0,0,189,194,3,18,9,0,190,191,10,1,0,0,191,192,5,36,0,0,192,194,3,18,
  	9,0,193,181,1,0,0,0,193,184,1,0,0,0,193,187,1,0,0,0,193,190,1,0,0,0,194,
  	197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,21,1,0,0,0,197,195,1,
  	0,0,0,198,199,6,11,-1,0,199,200,3,20,10,0,200,209,1,0,0,0,201,202,10,
  	2,0,0,202,203,5,37,0,0,203,208,3,20,10,0,204,205,10,1,0,0,205,206,5,38,
  	0,0,206,208,3,20,10,0,207,201,1,0,0,0,207,204,1,0,0,0,208,211,1,0,0,0,
  	209,207,1,0,0,0,209,210,1,0,0,0,210,23,1,0,0,0,211,209,1,0,0,0,212,213,
  	6,12,-1,0,213,214,3,22,11,0,214,220,1,0,0,0,215,216,10,1,0,0,216,217,
  	5,16,0,0,217,219,3,22,11,0,218,215,1,0,0,0,219,222,1,0,0,0,220,218,1,
  	0,0,0,220,221,1,0,0,0,221,25,1,0,0,0,222,220,1,0,0,0,223,224,6,13,-1,
  	0,224,225,3,24,12,0,225,231,1,0,0,0,226,227,10,1,0,0,227,228,5,17,0,0,
  	228,230,3,24,12,0,229,226,1,0,0,0,230,233,1,0,0,0,231,229,1,0,0,0,231,
  	232,1,0,0,0,232,27,1,0,0,0,233,231,1,0,0,0,234,235,6,14,-1,0,235,236,
  	3,26,13,0,236,242,1,0,0,0,237,238,10,1,0,0,238,239,5,5,0,0,239,241,3,
  	26,13,0,240,237,1,0,0,0,241,244,1,0,0,0,242,240,1,0,0,0,242,243,1,0,0,
  	0,243,29,1,0,0,0,244,242,1,0,0,0,245,246,3,4,2,0,246,247,5,18,0,0,247,
  	248,3,28,14,0,248,31,1,0,0,0,249,250,7,1,0,0,250,33,1,0,0,0,251,259,3,
  	40,20,0,252,259,3,42,21,0,253,259,3,46,23,0,254,259,3,44,22,0,255,259,
  	3,52,26,0,256,259,3,56,28,0,257,259,3,58,29,0,258,251,1,0,0,0,258,252,
  	1,0,0,0,258,253,1,0,0,0,258,254,1,0,0,0,258,255,1,0,0,0,258,256,1,0,0,
  	0,258,257,1,0,0,0,259,35,1,0,0,0,260,261,6,18,-1,0,261,262,3,34,17,0,
  	262,267,1,0,0,0,263,264,10,1,0,0,264,266,3,34,17,0,265,263,1,0,0,0,266,
  	269,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,37,1,0,0,0,269,267,1,
  	0,0,0,270,271,6,19,-1,0,271,272,5,42,0,0,272,277,1,0,0,0,273,274,10,1,
  	0,0,274,276,5,42,0,0,275,273,1,0,0,0,276,279,1,0,0,0,277,275,1,0,0,0,
  	277,278,1,0,0,0,278,39,1,0,0,0,279,277,1,0,0,0,280,281,5,30,0,0,281,282,
  	3,38,19,0,282,283,3,32,16,0,283,41,1,0,0,0,284,285,5,32,0,0,285,286,3,
  	38,19,0,286,287,3,32,16,0,287,43,1,0,0,0,288,293,3,32,16,0,289,290,3,
  	28,14,0,290,291,3,32,16,0,291,293,1,0,0,0,292,288,1,0,0,0,292,289,1,0,
  	0,0,293,45,1,0,0,0,294,295,3,30,15,0,295,296,3,32,16,0,296,47,1,0,0,0,
  	297,300,3,28,14,0,298,300,3,44,22,0,299,297,1,0,0,0,299,298,1,0,0,0,300,
  	49,1,0,0,0,301,302,6,25,-1,0,302,303,3,48,24,0,303,308,1,0,0,0,304,305,
  	10,1,0,0,305,307,3,48,24,0,306,304,1,0,0,0,307,310,1,0,0,0,308,306,1,
  	0,0,0,308,309,1,0,0,0,309,51,1,0,0,0,310,308,1,0,0,0,311,312,5,31,0,0,
  	312,313,3,28,14,0,313,314,3,36,18,0,314,315,5,29,0,0,315,316,3,32,16,
  	0,316,342,1,0,0,0,317,318,5,31,0,0,318,319,3,28,14,0,319,320,3,36,18,
  	0,320,321,5,33,0,0,321,322,3,36,18,0,322,323,5,29,0,0,323,324,3,32,16,
  	0,324,342,1,0,0,0,325,326,5,31,0,0,326,327,3,28,14,0,327,328,3,36,18,
  	0,328,329,3,54,27,0,329,330,5,29,0,0,330,331,3,32,16,0,331,342,1,0,0,
  	0,332,333,5,31,0,0,333,334,3,28,14,0,334,335,3,36,18,0,335,336,3,54,27,
  	0,336,337,5,33,0,0,337,338,3,36,18,0,338,339,5,29,0,0,339,340,3,32,16,
  	0,340,342,1,0,0,0,341,311,1,0,0,0,341,317,1,0,0,0,341,325,1,0,0,0,341,
  	332,1,0,0,0,342,53,1,0,0,0,343,344,6,27,-1,0,344,345,5,34,0,0,345,346,
  	3,28,14,0,346,347,3,36,18,0,347,355,1,0,0,0,348,349,10,1,0,0,349,350,
  	5,34,0,0,350,351,3,28,14,0,351,352,3,36,18,0,352,354,1,0,0,0,353,348,
  	1,0,0,0,354,357,1,0,0,0,355,353,1,0,0,0,355,356,1,0,0,0,356,55,1,0,0,
  	0,357,355,1,0,0,0,358,359,5,28,0,0,359,360,3,28,14,0,360,361,3,36,18,
  	0,361,362,5,29,0,0,362,363,3,32,16,0,363,383,1,0,0,0,364,365,5,27,0,0,
  	365,366,5,42,0,0,366,367,5,18,0,0,367,368,3,28,14,0,368,369,3,36,18,0,
  	369,370,5,29,0,0,370,371,3,32,16,0,371,383,1,0,0,0,372,373,5,27,0,0,373,
  	374,5,1,0,0,374,375,5,42,0,0,375,376,5,18,0,0,376,377,3,28,14,0,377,378,
  	5,2,0,0,378,379,3,36,18,0,379,380,5,29,0,0,380,381,3,32,16,0,381,383,
  	1,0,0,0,382,358,1,0,0,0,382,364,1,0,0,0,382,372,1,0,0,0,383,57,1,0,0,
  	0,384,385,5,24,0,0,385,389,3,32,16,0,386,387,5,25,0,0,387,389,3,32,16,
  	0,388,384,1,0,0,0,388,386,1,0,0,0,389,59,1,0,0,0,390,397,3,36,18,0,391,
  	392,5,26,0,0,392,393,3,68,34,0,393,394,3,32,16,0,394,395,3,36,18,0,395,
  	397,1,0,0,0,396,390,1,0,0,0,396,391,1,0,0,0,397,61,1,0,0,0,398,399,6,
  	31,-1,0,399,400,5,42,0,0,400,406,1,0,0,0,401,402,10,1,0,0,402,403,5,6,
  	0,0,403,405,5,42,0,0,404,401,1,0,0,0,405,408,1,0,0,0,406,404,1,0,0,0,
  	406,407,1,0,0,0,407,63,1,0,0,0,408,406,1,0,0,0,409,415,5,42,0,0,410,411,
  	5,3,0,0,411,412,3,62,31,0,412,413,5,4,0,0,413,415,1,0,0,0,414,409,1,0,
  	0,0,414,410,1,0,0,0,415,65,1,0,0,0,416,426,5,42,0,0,417,418,5,42,0,0,
  	418,419,5,1,0,0,419,426,5,2,0,0,420,421,5,42,0,0,421,422,5,1,0,0,422,
  	423,3,62,31,0,423,424,5,2,0,0,424,426,1,0,0,0,425,416,1,0,0,0,425,417,
  	1,0,0,0,425,420,1,0,0,0,426,67,1,0,0,0,427,433,3,66,33,0,428,429,3,64,
  	32,0,429,430,5,18,0,0,430,431,3,66,33,0,431,433,1,0,0,0,432,427,1,0,0,
  	0,432,428,1,0,0,0,433,69,1,0,0,0,34,71,88,93,99,101,106,116,128,159,161,
  	173,175,193,195,207,209,220,231,242,258,267,277,292,299,308,341,355,382,
  	388,396,406,414,425,432
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  matlabParserStaticData = staticData.release();
}

}

matlabParser::matlabParser(TokenStream *input) : matlabParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

matlabParser::matlabParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  matlabParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *matlabParserStaticData->atn, matlabParserStaticData->decisionToDFA, matlabParserStaticData->sharedContextCache, options);
}

matlabParser::~matlabParser() {
  delete _interpreter;
}

const atn::ATN& matlabParser::getATN() const {
  return *matlabParserStaticData->atn;
}

std::string matlabParser::getGrammarFileName() const {
  return "matlab.g4";
}

const std::vector<std::string>& matlabParser::getRuleNames() const {
  return matlabParserStaticData->ruleNames;
}

const dfa::Vocabulary& matlabParser::getVocabulary() const {
  return matlabParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView matlabParser::getSerializedATN() const {
  return matlabParserStaticData->serializedATN;
}


//----------------- File_Context ------------------------------------------------------------------

matlabParser::File_Context::File_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::File_Context::EOF() {
  return getToken(matlabParser::EOF, 0);
}

matlabParser::Statement_listContext* matlabParser::File_Context::statement_list() {
  return getRuleContext<matlabParser::Statement_listContext>(0);
}


size_t matlabParser::File_Context::getRuleIndex() const {
  return matlabParser::RuleFile_;
}

void matlabParser::File_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_(this);
}

void matlabParser::File_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_(this);
}

matlabParser::File_Context* matlabParser::file_() {
  File_Context *_localctx = _tracker.createInstance<File_Context>(_ctx, getState());
  enterRule(_localctx, 0, matlabParser::RuleFile_);
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
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32993318536138) != 0)) {
      setState(70);
      statement_list(0);
    }
    setState(73);
    match(matlabParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

matlabParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Primary_expressionContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

tree::TerminalNode* matlabParser::Primary_expressionContext::CONSTANT() {
  return getToken(matlabParser::CONSTANT, 0);
}

tree::TerminalNode* matlabParser::Primary_expressionContext::STRING_LITERAL() {
  return getToken(matlabParser::STRING_LITERAL, 0);
}

matlabParser::ExpressionContext* matlabParser::Primary_expressionContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}

matlabParser::Array_listContext* matlabParser::Primary_expressionContext::array_list() {
  return getRuleContext<matlabParser::Array_listContext>(0);
}


size_t matlabParser::Primary_expressionContext::getRuleIndex() const {
  return matlabParser::RulePrimary_expression;
}

void matlabParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void matlabParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}

matlabParser::Primary_expressionContext* matlabParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 2, matlabParser::RulePrimary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      match(matlabParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(76);
      match(matlabParser::CONSTANT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(77);
      match(matlabParser::STRING_LITERAL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(78);
      match(matlabParser::T__0);
      setState(79);
      expression(0);
      setState(80);
      match(matlabParser::T__1);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(82);
      match(matlabParser::T__2);
      setState(83);
      match(matlabParser::T__3);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      match(matlabParser::T__2);
      setState(85);
      array_list(0);
      setState(86);
      match(matlabParser::T__3);
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

//----------------- Postfix_expressionContext ------------------------------------------------------------------

matlabParser::Postfix_expressionContext::Postfix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Primary_expressionContext* matlabParser::Postfix_expressionContext::primary_expression() {
  return getRuleContext<matlabParser::Primary_expressionContext>(0);
}

matlabParser::Array_expressionContext* matlabParser::Postfix_expressionContext::array_expression() {
  return getRuleContext<matlabParser::Array_expressionContext>(0);
}

matlabParser::Postfix_expressionContext* matlabParser::Postfix_expressionContext::postfix_expression() {
  return getRuleContext<matlabParser::Postfix_expressionContext>(0);
}

tree::TerminalNode* matlabParser::Postfix_expressionContext::TRANSPOSE() {
  return getToken(matlabParser::TRANSPOSE, 0);
}

tree::TerminalNode* matlabParser::Postfix_expressionContext::NCTRANSPOSE() {
  return getToken(matlabParser::NCTRANSPOSE, 0);
}


size_t matlabParser::Postfix_expressionContext::getRuleIndex() const {
  return matlabParser::RulePostfix_expression;
}

void matlabParser::Postfix_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_expression(this);
}

void matlabParser::Postfix_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_expression(this);
}


matlabParser::Postfix_expressionContext* matlabParser::postfix_expression() {
   return postfix_expression(0);
}

matlabParser::Postfix_expressionContext* matlabParser::postfix_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Postfix_expressionContext *_localctx = _tracker.createInstance<Postfix_expressionContext>(_ctx, parentState);
  matlabParser::Postfix_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, matlabParser::RulePostfix_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(91);
      primary_expression();
      break;
    }

    case 2: {
      setState(92);
      array_expression();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(99);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(95);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(96);
          match(matlabParser::TRANSPOSE);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(97);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(98);
          match(matlabParser::NCTRANSPOSE);
          break;
        }

        default:
          break;
        } 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Index_expressionContext ------------------------------------------------------------------

matlabParser::Index_expressionContext::Index_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::ExpressionContext* matlabParser::Index_expressionContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}


size_t matlabParser::Index_expressionContext::getRuleIndex() const {
  return matlabParser::RuleIndex_expression;
}

void matlabParser::Index_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_expression(this);
}

void matlabParser::Index_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_expression(this);
}

matlabParser::Index_expressionContext* matlabParser::index_expression() {
  Index_expressionContext *_localctx = _tracker.createInstance<Index_expressionContext>(_ctx, getState());
  enterRule(_localctx, 6, matlabParser::RuleIndex_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(matlabParser::T__4);
        break;
      }

      case matlabParser::T__0:
      case matlabParser::T__2:
      case matlabParser::T__6:
      case matlabParser::T__7:
      case matlabParser::T__8:
      case matlabParser::STRING_LITERAL:
      case matlabParser::IDENTIFIER:
      case matlabParser::CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        expression(0);
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

//----------------- Index_expression_listContext ------------------------------------------------------------------

matlabParser::Index_expression_listContext::Index_expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Index_expressionContext* matlabParser::Index_expression_listContext::index_expression() {
  return getRuleContext<matlabParser::Index_expressionContext>(0);
}

matlabParser::Index_expression_listContext* matlabParser::Index_expression_listContext::index_expression_list() {
  return getRuleContext<matlabParser::Index_expression_listContext>(0);
}


size_t matlabParser::Index_expression_listContext::getRuleIndex() const {
  return matlabParser::RuleIndex_expression_list;
}

void matlabParser::Index_expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_expression_list(this);
}

void matlabParser::Index_expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_expression_list(this);
}


matlabParser::Index_expression_listContext* matlabParser::index_expression_list() {
   return index_expression_list(0);
}

matlabParser::Index_expression_listContext* matlabParser::index_expression_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Index_expression_listContext *_localctx = _tracker.createInstance<Index_expression_listContext>(_ctx, parentState);
  matlabParser::Index_expression_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, matlabParser::RuleIndex_expression_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(109);
    index_expression();
    _ctx->stop = _input->LT(-1);
    setState(116);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Index_expression_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIndex_expression_list);
        setState(111);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(112);
        match(matlabParser::T__5);
        setState(113);
        index_expression(); 
      }
      setState(118);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Array_expressionContext ------------------------------------------------------------------

matlabParser::Array_expressionContext::Array_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Array_expressionContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

matlabParser::Index_expression_listContext* matlabParser::Array_expressionContext::index_expression_list() {
  return getRuleContext<matlabParser::Index_expression_listContext>(0);
}


size_t matlabParser::Array_expressionContext::getRuleIndex() const {
  return matlabParser::RuleArray_expression;
}

void matlabParser::Array_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_expression(this);
}

void matlabParser::Array_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_expression(this);
}

matlabParser::Array_expressionContext* matlabParser::array_expression() {
  Array_expressionContext *_localctx = _tracker.createInstance<Array_expressionContext>(_ctx, getState());
  enterRule(_localctx, 10, matlabParser::RuleArray_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(matlabParser::IDENTIFIER);
    setState(120);
    match(matlabParser::T__0);
    setState(121);
    index_expression_list(0);
    setState(122);
    match(matlabParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

matlabParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Postfix_expressionContext* matlabParser::Unary_expressionContext::postfix_expression() {
  return getRuleContext<matlabParser::Postfix_expressionContext>(0);
}

matlabParser::Unary_operatorContext* matlabParser::Unary_expressionContext::unary_operator() {
  return getRuleContext<matlabParser::Unary_operatorContext>(0);
}


size_t matlabParser::Unary_expressionContext::getRuleIndex() const {
  return matlabParser::RuleUnary_expression;
}

void matlabParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void matlabParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}

matlabParser::Unary_expressionContext* matlabParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 12, matlabParser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::T__0:
      case matlabParser::T__2:
      case matlabParser::STRING_LITERAL:
      case matlabParser::IDENTIFIER:
      case matlabParser::CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(124);
        postfix_expression(0);
        break;
      }

      case matlabParser::T__6:
      case matlabParser::T__7:
      case matlabParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(125);
        unary_operator();
        setState(126);
        postfix_expression(0);
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

//----------------- Unary_operatorContext ------------------------------------------------------------------

matlabParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t matlabParser::Unary_operatorContext::getRuleIndex() const {
  return matlabParser::RuleUnary_operator;
}

void matlabParser::Unary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator(this);
}

void matlabParser::Unary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator(this);
}

matlabParser::Unary_operatorContext* matlabParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 14, matlabParser::RuleUnary_operator);
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
    setState(130);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 896) != 0))) {
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

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

matlabParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Unary_expressionContext* matlabParser::Multiplicative_expressionContext::unary_expression() {
  return getRuleContext<matlabParser::Unary_expressionContext>(0);
}

matlabParser::Multiplicative_expressionContext* matlabParser::Multiplicative_expressionContext::multiplicative_expression() {
  return getRuleContext<matlabParser::Multiplicative_expressionContext>(0);
}

tree::TerminalNode* matlabParser::Multiplicative_expressionContext::ARRAYMUL() {
  return getToken(matlabParser::ARRAYMUL, 0);
}

tree::TerminalNode* matlabParser::Multiplicative_expressionContext::ARRAYDIV() {
  return getToken(matlabParser::ARRAYDIV, 0);
}

tree::TerminalNode* matlabParser::Multiplicative_expressionContext::ARRAYRDIV() {
  return getToken(matlabParser::ARRAYRDIV, 0);
}

tree::TerminalNode* matlabParser::Multiplicative_expressionContext::ARRAYPOW() {
  return getToken(matlabParser::ARRAYPOW, 0);
}


size_t matlabParser::Multiplicative_expressionContext::getRuleIndex() const {
  return matlabParser::RuleMultiplicative_expression;
}

void matlabParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void matlabParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}


matlabParser::Multiplicative_expressionContext* matlabParser::multiplicative_expression() {
   return multiplicative_expression(0);
}

matlabParser::Multiplicative_expressionContext* matlabParser::multiplicative_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, parentState);
  matlabParser::Multiplicative_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, matlabParser::RuleMultiplicative_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(133);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(161);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(159);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(135);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(136);
          match(matlabParser::T__9);
          setState(137);
          unary_expression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(138);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(139);
          match(matlabParser::T__10);
          setState(140);
          unary_expression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(141);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(142);
          match(matlabParser::T__11);
          setState(143);
          unary_expression();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(144);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(145);
          match(matlabParser::T__12);
          setState(146);
          unary_expression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(147);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(148);
          match(matlabParser::ARRAYMUL);
          setState(149);
          unary_expression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(150);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(151);
          match(matlabParser::ARRAYDIV);
          setState(152);
          unary_expression();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(153);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(154);
          match(matlabParser::ARRAYRDIV);
          setState(155);
          unary_expression();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(156);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(157);
          match(matlabParser::ARRAYPOW);
          setState(158);
          unary_expression();
          break;
        }

        default:
          break;
        } 
      }
      setState(163);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

matlabParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Multiplicative_expressionContext* matlabParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContext<matlabParser::Multiplicative_expressionContext>(0);
}

matlabParser::Additive_expressionContext* matlabParser::Additive_expressionContext::additive_expression() {
  return getRuleContext<matlabParser::Additive_expressionContext>(0);
}


size_t matlabParser::Additive_expressionContext::getRuleIndex() const {
  return matlabParser::RuleAdditive_expression;
}

void matlabParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void matlabParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}


matlabParser::Additive_expressionContext* matlabParser::additive_expression() {
   return additive_expression(0);
}

matlabParser::Additive_expressionContext* matlabParser::additive_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, parentState);
  matlabParser::Additive_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, matlabParser::RuleAdditive_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(165);
    multiplicative_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(173);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
          setState(167);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(168);
          match(matlabParser::T__6);
          setState(169);
          multiplicative_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
          setState(170);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(171);
          match(matlabParser::T__7);
          setState(172);
          multiplicative_expression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

matlabParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Additive_expressionContext* matlabParser::Relational_expressionContext::additive_expression() {
  return getRuleContext<matlabParser::Additive_expressionContext>(0);
}

matlabParser::Relational_expressionContext* matlabParser::Relational_expressionContext::relational_expression() {
  return getRuleContext<matlabParser::Relational_expressionContext>(0);
}

tree::TerminalNode* matlabParser::Relational_expressionContext::LE_OP() {
  return getToken(matlabParser::LE_OP, 0);
}

tree::TerminalNode* matlabParser::Relational_expressionContext::GE_OP() {
  return getToken(matlabParser::GE_OP, 0);
}


size_t matlabParser::Relational_expressionContext::getRuleIndex() const {
  return matlabParser::RuleRelational_expression;
}

void matlabParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void matlabParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}


matlabParser::Relational_expressionContext* matlabParser::relational_expression() {
   return relational_expression(0);
}

matlabParser::Relational_expressionContext* matlabParser::relational_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, parentState);
  matlabParser::Relational_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, matlabParser::RuleRelational_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(179);
    additive_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(193);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(181);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(182);
          match(matlabParser::T__13);
          setState(183);
          additive_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(184);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(185);
          match(matlabParser::T__14);
          setState(186);
          additive_expression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(187);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(188);
          match(matlabParser::LE_OP);
          setState(189);
          additive_expression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(190);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(191);
          match(matlabParser::GE_OP);
          setState(192);
          additive_expression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Equality_expressionContext ------------------------------------------------------------------

matlabParser::Equality_expressionContext::Equality_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Relational_expressionContext* matlabParser::Equality_expressionContext::relational_expression() {
  return getRuleContext<matlabParser::Relational_expressionContext>(0);
}

matlabParser::Equality_expressionContext* matlabParser::Equality_expressionContext::equality_expression() {
  return getRuleContext<matlabParser::Equality_expressionContext>(0);
}

tree::TerminalNode* matlabParser::Equality_expressionContext::EQ_OP() {
  return getToken(matlabParser::EQ_OP, 0);
}

tree::TerminalNode* matlabParser::Equality_expressionContext::NE_OP() {
  return getToken(matlabParser::NE_OP, 0);
}


size_t matlabParser::Equality_expressionContext::getRuleIndex() const {
  return matlabParser::RuleEquality_expression;
}

void matlabParser::Equality_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expression(this);
}

void matlabParser::Equality_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expression(this);
}


matlabParser::Equality_expressionContext* matlabParser::equality_expression() {
   return equality_expression(0);
}

matlabParser::Equality_expressionContext* matlabParser::equality_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Equality_expressionContext *_localctx = _tracker.createInstance<Equality_expressionContext>(_ctx, parentState);
  matlabParser::Equality_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, matlabParser::RuleEquality_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(199);
    relational_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(207);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
          setState(201);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(202);
          match(matlabParser::EQ_OP);
          setState(203);
          relational_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
          setState(204);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(205);
          match(matlabParser::NE_OP);
          setState(206);
          relational_expression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- And_expressionContext ------------------------------------------------------------------

matlabParser::And_expressionContext::And_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Equality_expressionContext* matlabParser::And_expressionContext::equality_expression() {
  return getRuleContext<matlabParser::Equality_expressionContext>(0);
}

matlabParser::And_expressionContext* matlabParser::And_expressionContext::and_expression() {
  return getRuleContext<matlabParser::And_expressionContext>(0);
}


size_t matlabParser::And_expressionContext::getRuleIndex() const {
  return matlabParser::RuleAnd_expression;
}

void matlabParser::And_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expression(this);
}

void matlabParser::And_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expression(this);
}


matlabParser::And_expressionContext* matlabParser::and_expression() {
   return and_expression(0);
}

matlabParser::And_expressionContext* matlabParser::and_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::And_expressionContext *_localctx = _tracker.createInstance<And_expressionContext>(_ctx, parentState);
  matlabParser::And_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, matlabParser::RuleAnd_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(213);
    equality_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<And_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd_expression);
        setState(215);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(216);
        match(matlabParser::T__15);
        setState(217);
        equality_expression(0); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Or_expressionContext ------------------------------------------------------------------

matlabParser::Or_expressionContext::Or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::And_expressionContext* matlabParser::Or_expressionContext::and_expression() {
  return getRuleContext<matlabParser::And_expressionContext>(0);
}

matlabParser::Or_expressionContext* matlabParser::Or_expressionContext::or_expression() {
  return getRuleContext<matlabParser::Or_expressionContext>(0);
}


size_t matlabParser::Or_expressionContext::getRuleIndex() const {
  return matlabParser::RuleOr_expression;
}

void matlabParser::Or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_expression(this);
}

void matlabParser::Or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_expression(this);
}


matlabParser::Or_expressionContext* matlabParser::or_expression() {
   return or_expression(0);
}

matlabParser::Or_expressionContext* matlabParser::or_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Or_expressionContext *_localctx = _tracker.createInstance<Or_expressionContext>(_ctx, parentState);
  matlabParser::Or_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, matlabParser::RuleOr_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(224);
    and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(231);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr_expression);
        setState(226);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(227);
        match(matlabParser::T__16);
        setState(228);
        and_expression(0); 
      }
      setState(233);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

matlabParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Or_expressionContext* matlabParser::ExpressionContext::or_expression() {
  return getRuleContext<matlabParser::Or_expressionContext>(0);
}

matlabParser::ExpressionContext* matlabParser::ExpressionContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}


size_t matlabParser::ExpressionContext::getRuleIndex() const {
  return matlabParser::RuleExpression;
}

void matlabParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void matlabParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


matlabParser::ExpressionContext* matlabParser::expression() {
   return expression(0);
}

matlabParser::ExpressionContext* matlabParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  matlabParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, matlabParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    or_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(237);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(238);
        match(matlabParser::T__4);
        setState(239);
        or_expression(0); 
      }
      setState(244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Assignment_expressionContext ------------------------------------------------------------------

matlabParser::Assignment_expressionContext::Assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Postfix_expressionContext* matlabParser::Assignment_expressionContext::postfix_expression() {
  return getRuleContext<matlabParser::Postfix_expressionContext>(0);
}

matlabParser::ExpressionContext* matlabParser::Assignment_expressionContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}


size_t matlabParser::Assignment_expressionContext::getRuleIndex() const {
  return matlabParser::RuleAssignment_expression;
}

void matlabParser::Assignment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_expression(this);
}

void matlabParser::Assignment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_expression(this);
}

matlabParser::Assignment_expressionContext* matlabParser::assignment_expression() {
  Assignment_expressionContext *_localctx = _tracker.createInstance<Assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 30, matlabParser::RuleAssignment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    postfix_expression(0);
    setState(246);
    match(matlabParser::T__17);
    setState(247);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EostmtContext ------------------------------------------------------------------

matlabParser::EostmtContext::EostmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::EostmtContext::CR() {
  return getToken(matlabParser::CR, 0);
}


size_t matlabParser::EostmtContext::getRuleIndex() const {
  return matlabParser::RuleEostmt;
}

void matlabParser::EostmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEostmt(this);
}

void matlabParser::EostmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEostmt(this);
}

matlabParser::EostmtContext* matlabParser::eostmt() {
  EostmtContext *_localctx = _tracker.createInstance<EostmtContext>(_ctx, getState());
  enterRule(_localctx, 32, matlabParser::RuleEostmt);
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
    setState(249);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592186568768) != 0))) {
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

//----------------- StatementContext ------------------------------------------------------------------

matlabParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Global_statementContext* matlabParser::StatementContext::global_statement() {
  return getRuleContext<matlabParser::Global_statementContext>(0);
}

matlabParser::Clear_statementContext* matlabParser::StatementContext::clear_statement() {
  return getRuleContext<matlabParser::Clear_statementContext>(0);
}

matlabParser::Assignment_statementContext* matlabParser::StatementContext::assignment_statement() {
  return getRuleContext<matlabParser::Assignment_statementContext>(0);
}

matlabParser::Expression_statementContext* matlabParser::StatementContext::expression_statement() {
  return getRuleContext<matlabParser::Expression_statementContext>(0);
}

matlabParser::Selection_statementContext* matlabParser::StatementContext::selection_statement() {
  return getRuleContext<matlabParser::Selection_statementContext>(0);
}

matlabParser::Iteration_statementContext* matlabParser::StatementContext::iteration_statement() {
  return getRuleContext<matlabParser::Iteration_statementContext>(0);
}

matlabParser::Jump_statementContext* matlabParser::StatementContext::jump_statement() {
  return getRuleContext<matlabParser::Jump_statementContext>(0);
}


size_t matlabParser::StatementContext::getRuleIndex() const {
  return matlabParser::RuleStatement;
}

void matlabParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void matlabParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

matlabParser::StatementContext* matlabParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 34, matlabParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      global_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      clear_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(253);
      assignment_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(254);
      expression_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(255);
      selection_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(256);
      iteration_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(257);
      jump_statement();
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

//----------------- Statement_listContext ------------------------------------------------------------------

matlabParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::StatementContext* matlabParser::Statement_listContext::statement() {
  return getRuleContext<matlabParser::StatementContext>(0);
}

matlabParser::Statement_listContext* matlabParser::Statement_listContext::statement_list() {
  return getRuleContext<matlabParser::Statement_listContext>(0);
}


size_t matlabParser::Statement_listContext::getRuleIndex() const {
  return matlabParser::RuleStatement_list;
}

void matlabParser::Statement_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_list(this);
}

void matlabParser::Statement_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_list(this);
}


matlabParser::Statement_listContext* matlabParser::statement_list() {
   return statement_list(0);
}

matlabParser::Statement_listContext* matlabParser::statement_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, parentState);
  matlabParser::Statement_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, matlabParser::RuleStatement_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(261);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(263);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(264);
        statement(); 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Identifier_listContext ------------------------------------------------------------------

matlabParser::Identifier_listContext::Identifier_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Identifier_listContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

matlabParser::Identifier_listContext* matlabParser::Identifier_listContext::identifier_list() {
  return getRuleContext<matlabParser::Identifier_listContext>(0);
}


size_t matlabParser::Identifier_listContext::getRuleIndex() const {
  return matlabParser::RuleIdentifier_list;
}

void matlabParser::Identifier_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier_list(this);
}

void matlabParser::Identifier_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier_list(this);
}


matlabParser::Identifier_listContext* matlabParser::identifier_list() {
   return identifier_list(0);
}

matlabParser::Identifier_listContext* matlabParser::identifier_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Identifier_listContext *_localctx = _tracker.createInstance<Identifier_listContext>(_ctx, parentState);
  matlabParser::Identifier_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, matlabParser::RuleIdentifier_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(matlabParser::IDENTIFIER);
    _ctx->stop = _input->LT(-1);
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Identifier_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifier_list);
        setState(273);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(274);
        match(matlabParser::IDENTIFIER); 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Global_statementContext ------------------------------------------------------------------

matlabParser::Global_statementContext::Global_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Global_statementContext::GLOBAL() {
  return getToken(matlabParser::GLOBAL, 0);
}

matlabParser::Identifier_listContext* matlabParser::Global_statementContext::identifier_list() {
  return getRuleContext<matlabParser::Identifier_listContext>(0);
}

matlabParser::EostmtContext* matlabParser::Global_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}


size_t matlabParser::Global_statementContext::getRuleIndex() const {
  return matlabParser::RuleGlobal_statement;
}

void matlabParser::Global_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_statement(this);
}

void matlabParser::Global_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_statement(this);
}

matlabParser::Global_statementContext* matlabParser::global_statement() {
  Global_statementContext *_localctx = _tracker.createInstance<Global_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, matlabParser::RuleGlobal_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(matlabParser::GLOBAL);
    setState(281);
    identifier_list(0);
    setState(282);
    eostmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Clear_statementContext ------------------------------------------------------------------

matlabParser::Clear_statementContext::Clear_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Clear_statementContext::CLEAR() {
  return getToken(matlabParser::CLEAR, 0);
}

matlabParser::Identifier_listContext* matlabParser::Clear_statementContext::identifier_list() {
  return getRuleContext<matlabParser::Identifier_listContext>(0);
}

matlabParser::EostmtContext* matlabParser::Clear_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}


size_t matlabParser::Clear_statementContext::getRuleIndex() const {
  return matlabParser::RuleClear_statement;
}

void matlabParser::Clear_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClear_statement(this);
}

void matlabParser::Clear_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClear_statement(this);
}

matlabParser::Clear_statementContext* matlabParser::clear_statement() {
  Clear_statementContext *_localctx = _tracker.createInstance<Clear_statementContext>(_ctx, getState());
  enterRule(_localctx, 42, matlabParser::RuleClear_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(matlabParser::CLEAR);
    setState(285);
    identifier_list(0);
    setState(286);
    eostmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

matlabParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::EostmtContext* matlabParser::Expression_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}

matlabParser::ExpressionContext* matlabParser::Expression_statementContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}


size_t matlabParser::Expression_statementContext::getRuleIndex() const {
  return matlabParser::RuleExpression_statement;
}

void matlabParser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void matlabParser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}

matlabParser::Expression_statementContext* matlabParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 44, matlabParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::T__5:
      case matlabParser::T__18:
      case matlabParser::CR: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        eostmt();
        break;
      }

      case matlabParser::T__0:
      case matlabParser::T__2:
      case matlabParser::T__6:
      case matlabParser::T__7:
      case matlabParser::T__8:
      case matlabParser::STRING_LITERAL:
      case matlabParser::IDENTIFIER:
      case matlabParser::CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(289);
        expression(0);
        setState(290);
        eostmt();
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

//----------------- Assignment_statementContext ------------------------------------------------------------------

matlabParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Assignment_expressionContext* matlabParser::Assignment_statementContext::assignment_expression() {
  return getRuleContext<matlabParser::Assignment_expressionContext>(0);
}

matlabParser::EostmtContext* matlabParser::Assignment_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}


size_t matlabParser::Assignment_statementContext::getRuleIndex() const {
  return matlabParser::RuleAssignment_statement;
}

void matlabParser::Assignment_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_statement(this);
}

void matlabParser::Assignment_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_statement(this);
}

matlabParser::Assignment_statementContext* matlabParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 46, matlabParser::RuleAssignment_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    assignment_expression();
    setState(295);
    eostmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_elementContext ------------------------------------------------------------------

matlabParser::Array_elementContext::Array_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::ExpressionContext* matlabParser::Array_elementContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}

matlabParser::Expression_statementContext* matlabParser::Array_elementContext::expression_statement() {
  return getRuleContext<matlabParser::Expression_statementContext>(0);
}


size_t matlabParser::Array_elementContext::getRuleIndex() const {
  return matlabParser::RuleArray_element;
}

void matlabParser::Array_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_element(this);
}

void matlabParser::Array_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_element(this);
}

matlabParser::Array_elementContext* matlabParser::array_element() {
  Array_elementContext *_localctx = _tracker.createInstance<Array_elementContext>(_ctx, getState());
  enterRule(_localctx, 48, matlabParser::RuleArray_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(299);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(297);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(298);
      expression_statement();
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

//----------------- Array_listContext ------------------------------------------------------------------

matlabParser::Array_listContext::Array_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Array_elementContext* matlabParser::Array_listContext::array_element() {
  return getRuleContext<matlabParser::Array_elementContext>(0);
}

matlabParser::Array_listContext* matlabParser::Array_listContext::array_list() {
  return getRuleContext<matlabParser::Array_listContext>(0);
}


size_t matlabParser::Array_listContext::getRuleIndex() const {
  return matlabParser::RuleArray_list;
}

void matlabParser::Array_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_list(this);
}

void matlabParser::Array_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_list(this);
}


matlabParser::Array_listContext* matlabParser::array_list() {
   return array_list(0);
}

matlabParser::Array_listContext* matlabParser::array_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Array_listContext *_localctx = _tracker.createInstance<Array_listContext>(_ctx, parentState);
  matlabParser::Array_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, matlabParser::RuleArray_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(302);
    array_element();
    _ctx->stop = _input->LT(-1);
    setState(308);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Array_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArray_list);
        setState(304);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(305);
        array_element(); 
      }
      setState(310);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Selection_statementContext ------------------------------------------------------------------

matlabParser::Selection_statementContext::Selection_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Selection_statementContext::IF() {
  return getToken(matlabParser::IF, 0);
}

matlabParser::ExpressionContext* matlabParser::Selection_statementContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}

std::vector<matlabParser::Statement_listContext *> matlabParser::Selection_statementContext::statement_list() {
  return getRuleContexts<matlabParser::Statement_listContext>();
}

matlabParser::Statement_listContext* matlabParser::Selection_statementContext::statement_list(size_t i) {
  return getRuleContext<matlabParser::Statement_listContext>(i);
}

tree::TerminalNode* matlabParser::Selection_statementContext::END() {
  return getToken(matlabParser::END, 0);
}

matlabParser::EostmtContext* matlabParser::Selection_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}

tree::TerminalNode* matlabParser::Selection_statementContext::ELSE() {
  return getToken(matlabParser::ELSE, 0);
}

matlabParser::Elseif_clauseContext* matlabParser::Selection_statementContext::elseif_clause() {
  return getRuleContext<matlabParser::Elseif_clauseContext>(0);
}


size_t matlabParser::Selection_statementContext::getRuleIndex() const {
  return matlabParser::RuleSelection_statement;
}

void matlabParser::Selection_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelection_statement(this);
}

void matlabParser::Selection_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelection_statement(this);
}

matlabParser::Selection_statementContext* matlabParser::selection_statement() {
  Selection_statementContext *_localctx = _tracker.createInstance<Selection_statementContext>(_ctx, getState());
  enterRule(_localctx, 52, matlabParser::RuleSelection_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(311);
      match(matlabParser::IF);
      setState(312);
      expression(0);
      setState(313);
      statement_list(0);
      setState(314);
      match(matlabParser::END);
      setState(315);
      eostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(317);
      match(matlabParser::IF);
      setState(318);
      expression(0);
      setState(319);
      statement_list(0);
      setState(320);
      match(matlabParser::ELSE);
      setState(321);
      statement_list(0);
      setState(322);
      match(matlabParser::END);
      setState(323);
      eostmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(325);
      match(matlabParser::IF);
      setState(326);
      expression(0);
      setState(327);
      statement_list(0);
      setState(328);
      elseif_clause(0);
      setState(329);
      match(matlabParser::END);
      setState(330);
      eostmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(332);
      match(matlabParser::IF);
      setState(333);
      expression(0);
      setState(334);
      statement_list(0);
      setState(335);
      elseif_clause(0);
      setState(336);
      match(matlabParser::ELSE);
      setState(337);
      statement_list(0);
      setState(338);
      match(matlabParser::END);
      setState(339);
      eostmt();
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

//----------------- Elseif_clauseContext ------------------------------------------------------------------

matlabParser::Elseif_clauseContext::Elseif_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Elseif_clauseContext::ELSEIF() {
  return getToken(matlabParser::ELSEIF, 0);
}

matlabParser::ExpressionContext* matlabParser::Elseif_clauseContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}

matlabParser::Statement_listContext* matlabParser::Elseif_clauseContext::statement_list() {
  return getRuleContext<matlabParser::Statement_listContext>(0);
}

matlabParser::Elseif_clauseContext* matlabParser::Elseif_clauseContext::elseif_clause() {
  return getRuleContext<matlabParser::Elseif_clauseContext>(0);
}


size_t matlabParser::Elseif_clauseContext::getRuleIndex() const {
  return matlabParser::RuleElseif_clause;
}

void matlabParser::Elseif_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseif_clause(this);
}

void matlabParser::Elseif_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseif_clause(this);
}


matlabParser::Elseif_clauseContext* matlabParser::elseif_clause() {
   return elseif_clause(0);
}

matlabParser::Elseif_clauseContext* matlabParser::elseif_clause(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Elseif_clauseContext *_localctx = _tracker.createInstance<Elseif_clauseContext>(_ctx, parentState);
  matlabParser::Elseif_clauseContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, matlabParser::RuleElseif_clause, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(matlabParser::ELSEIF);
    setState(345);
    expression(0);
    setState(346);
    statement_list(0);
    _ctx->stop = _input->LT(-1);
    setState(355);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Elseif_clauseContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleElseif_clause);
        setState(348);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(349);
        match(matlabParser::ELSEIF);
        setState(350);
        expression(0);
        setState(351);
        statement_list(0); 
      }
      setState(357);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Iteration_statementContext ------------------------------------------------------------------

matlabParser::Iteration_statementContext::Iteration_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Iteration_statementContext::WHILE() {
  return getToken(matlabParser::WHILE, 0);
}

matlabParser::ExpressionContext* matlabParser::Iteration_statementContext::expression() {
  return getRuleContext<matlabParser::ExpressionContext>(0);
}

matlabParser::Statement_listContext* matlabParser::Iteration_statementContext::statement_list() {
  return getRuleContext<matlabParser::Statement_listContext>(0);
}

tree::TerminalNode* matlabParser::Iteration_statementContext::END() {
  return getToken(matlabParser::END, 0);
}

matlabParser::EostmtContext* matlabParser::Iteration_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}

tree::TerminalNode* matlabParser::Iteration_statementContext::FOR() {
  return getToken(matlabParser::FOR, 0);
}

tree::TerminalNode* matlabParser::Iteration_statementContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}


size_t matlabParser::Iteration_statementContext::getRuleIndex() const {
  return matlabParser::RuleIteration_statement;
}

void matlabParser::Iteration_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIteration_statement(this);
}

void matlabParser::Iteration_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIteration_statement(this);
}

matlabParser::Iteration_statementContext* matlabParser::iteration_statement() {
  Iteration_statementContext *_localctx = _tracker.createInstance<Iteration_statementContext>(_ctx, getState());
  enterRule(_localctx, 56, matlabParser::RuleIteration_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(382);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(358);
      match(matlabParser::WHILE);
      setState(359);
      expression(0);
      setState(360);
      statement_list(0);
      setState(361);
      match(matlabParser::END);
      setState(362);
      eostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(364);
      match(matlabParser::FOR);
      setState(365);
      match(matlabParser::IDENTIFIER);
      setState(366);
      match(matlabParser::T__17);
      setState(367);
      expression(0);
      setState(368);
      statement_list(0);
      setState(369);
      match(matlabParser::END);
      setState(370);
      eostmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(372);
      match(matlabParser::FOR);
      setState(373);
      match(matlabParser::T__0);
      setState(374);
      match(matlabParser::IDENTIFIER);
      setState(375);
      match(matlabParser::T__17);
      setState(376);
      expression(0);
      setState(377);
      match(matlabParser::T__1);
      setState(378);
      statement_list(0);
      setState(379);
      match(matlabParser::END);
      setState(380);
      eostmt();
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

//----------------- Jump_statementContext ------------------------------------------------------------------

matlabParser::Jump_statementContext::Jump_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Jump_statementContext::BREAK() {
  return getToken(matlabParser::BREAK, 0);
}

matlabParser::EostmtContext* matlabParser::Jump_statementContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}

tree::TerminalNode* matlabParser::Jump_statementContext::RETURN() {
  return getToken(matlabParser::RETURN, 0);
}


size_t matlabParser::Jump_statementContext::getRuleIndex() const {
  return matlabParser::RuleJump_statement;
}

void matlabParser::Jump_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJump_statement(this);
}

void matlabParser::Jump_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJump_statement(this);
}

matlabParser::Jump_statementContext* matlabParser::jump_statement() {
  Jump_statementContext *_localctx = _tracker.createInstance<Jump_statementContext>(_ctx, getState());
  enterRule(_localctx, 58, matlabParser::RuleJump_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(388);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(384);
        match(matlabParser::BREAK);
        setState(385);
        eostmt();
        break;
      }

      case matlabParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(386);
        match(matlabParser::RETURN);
        setState(387);
        eostmt();
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

//----------------- Translation_unitContext ------------------------------------------------------------------

matlabParser::Translation_unitContext::Translation_unitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Statement_listContext* matlabParser::Translation_unitContext::statement_list() {
  return getRuleContext<matlabParser::Statement_listContext>(0);
}

tree::TerminalNode* matlabParser::Translation_unitContext::FUNCTION() {
  return getToken(matlabParser::FUNCTION, 0);
}

matlabParser::Function_declareContext* matlabParser::Translation_unitContext::function_declare() {
  return getRuleContext<matlabParser::Function_declareContext>(0);
}

matlabParser::EostmtContext* matlabParser::Translation_unitContext::eostmt() {
  return getRuleContext<matlabParser::EostmtContext>(0);
}


size_t matlabParser::Translation_unitContext::getRuleIndex() const {
  return matlabParser::RuleTranslation_unit;
}

void matlabParser::Translation_unitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslation_unit(this);
}

void matlabParser::Translation_unitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslation_unit(this);
}

matlabParser::Translation_unitContext* matlabParser::translation_unit() {
  Translation_unitContext *_localctx = _tracker.createInstance<Translation_unitContext>(_ctx, getState());
  enterRule(_localctx, 60, matlabParser::RuleTranslation_unit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::T__0:
      case matlabParser::T__2:
      case matlabParser::T__5:
      case matlabParser::T__6:
      case matlabParser::T__7:
      case matlabParser::T__8:
      case matlabParser::T__18:
      case matlabParser::BREAK:
      case matlabParser::RETURN:
      case matlabParser::FOR:
      case matlabParser::WHILE:
      case matlabParser::GLOBAL:
      case matlabParser::IF:
      case matlabParser::CLEAR:
      case matlabParser::STRING_LITERAL:
      case matlabParser::IDENTIFIER:
      case matlabParser::CONSTANT:
      case matlabParser::CR: {
        enterOuterAlt(_localctx, 1);
        setState(390);
        statement_list(0);
        break;
      }

      case matlabParser::FUNCTION: {
        enterOuterAlt(_localctx, 2);
        setState(391);
        match(matlabParser::FUNCTION);
        setState(392);
        function_declare();
        setState(393);
        eostmt();
        setState(394);
        statement_list(0);
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

//----------------- Func_ident_listContext ------------------------------------------------------------------

matlabParser::Func_ident_listContext::Func_ident_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Func_ident_listContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

matlabParser::Func_ident_listContext* matlabParser::Func_ident_listContext::func_ident_list() {
  return getRuleContext<matlabParser::Func_ident_listContext>(0);
}


size_t matlabParser::Func_ident_listContext::getRuleIndex() const {
  return matlabParser::RuleFunc_ident_list;
}

void matlabParser::Func_ident_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_ident_list(this);
}

void matlabParser::Func_ident_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_ident_list(this);
}


matlabParser::Func_ident_listContext* matlabParser::func_ident_list() {
   return func_ident_list(0);
}

matlabParser::Func_ident_listContext* matlabParser::func_ident_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  matlabParser::Func_ident_listContext *_localctx = _tracker.createInstance<Func_ident_listContext>(_ctx, parentState);
  matlabParser::Func_ident_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, matlabParser::RuleFunc_ident_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(matlabParser::IDENTIFIER);
    _ctx->stop = _input->LT(-1);
    setState(406);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Func_ident_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFunc_ident_list);
        setState(401);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(402);
        match(matlabParser::T__5);
        setState(403);
        match(matlabParser::IDENTIFIER); 
      }
      setState(408);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Func_return_listContext ------------------------------------------------------------------

matlabParser::Func_return_listContext::Func_return_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Func_return_listContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

matlabParser::Func_ident_listContext* matlabParser::Func_return_listContext::func_ident_list() {
  return getRuleContext<matlabParser::Func_ident_listContext>(0);
}


size_t matlabParser::Func_return_listContext::getRuleIndex() const {
  return matlabParser::RuleFunc_return_list;
}

void matlabParser::Func_return_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_return_list(this);
}

void matlabParser::Func_return_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_return_list(this);
}

matlabParser::Func_return_listContext* matlabParser::func_return_list() {
  Func_return_listContext *_localctx = _tracker.createInstance<Func_return_listContext>(_ctx, getState());
  enterRule(_localctx, 64, matlabParser::RuleFunc_return_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(414);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case matlabParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(409);
        match(matlabParser::IDENTIFIER);
        break;
      }

      case matlabParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(410);
        match(matlabParser::T__2);
        setState(411);
        func_ident_list(0);
        setState(412);
        match(matlabParser::T__3);
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

//----------------- Function_declare_lhsContext ------------------------------------------------------------------

matlabParser::Function_declare_lhsContext::Function_declare_lhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* matlabParser::Function_declare_lhsContext::IDENTIFIER() {
  return getToken(matlabParser::IDENTIFIER, 0);
}

matlabParser::Func_ident_listContext* matlabParser::Function_declare_lhsContext::func_ident_list() {
  return getRuleContext<matlabParser::Func_ident_listContext>(0);
}


size_t matlabParser::Function_declare_lhsContext::getRuleIndex() const {
  return matlabParser::RuleFunction_declare_lhs;
}

void matlabParser::Function_declare_lhsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declare_lhs(this);
}

void matlabParser::Function_declare_lhsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declare_lhs(this);
}

matlabParser::Function_declare_lhsContext* matlabParser::function_declare_lhs() {
  Function_declare_lhsContext *_localctx = _tracker.createInstance<Function_declare_lhsContext>(_ctx, getState());
  enterRule(_localctx, 66, matlabParser::RuleFunction_declare_lhs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(425);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(416);
      match(matlabParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(417);
      match(matlabParser::IDENTIFIER);
      setState(418);
      match(matlabParser::T__0);
      setState(419);
      match(matlabParser::T__1);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(420);
      match(matlabParser::IDENTIFIER);
      setState(421);
      match(matlabParser::T__0);
      setState(422);
      func_ident_list(0);
      setState(423);
      match(matlabParser::T__1);
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

//----------------- Function_declareContext ------------------------------------------------------------------

matlabParser::Function_declareContext::Function_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

matlabParser::Function_declare_lhsContext* matlabParser::Function_declareContext::function_declare_lhs() {
  return getRuleContext<matlabParser::Function_declare_lhsContext>(0);
}

matlabParser::Func_return_listContext* matlabParser::Function_declareContext::func_return_list() {
  return getRuleContext<matlabParser::Func_return_listContext>(0);
}


size_t matlabParser::Function_declareContext::getRuleIndex() const {
  return matlabParser::RuleFunction_declare;
}

void matlabParser::Function_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declare(this);
}

void matlabParser::Function_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<matlabListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declare(this);
}

matlabParser::Function_declareContext* matlabParser::function_declare() {
  Function_declareContext *_localctx = _tracker.createInstance<Function_declareContext>(_ctx, getState());
  enterRule(_localctx, 68, matlabParser::RuleFunction_declare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      function_declare_lhs();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
      func_return_list();
      setState(429);
      match(matlabParser::T__17);
      setState(430);
      function_declare_lhs();
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

bool matlabParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return postfix_expressionSempred(antlrcpp::downCast<Postfix_expressionContext *>(context), predicateIndex);
    case 4: return index_expression_listSempred(antlrcpp::downCast<Index_expression_listContext *>(context), predicateIndex);
    case 8: return multiplicative_expressionSempred(antlrcpp::downCast<Multiplicative_expressionContext *>(context), predicateIndex);
    case 9: return additive_expressionSempred(antlrcpp::downCast<Additive_expressionContext *>(context), predicateIndex);
    case 10: return relational_expressionSempred(antlrcpp::downCast<Relational_expressionContext *>(context), predicateIndex);
    case 11: return equality_expressionSempred(antlrcpp::downCast<Equality_expressionContext *>(context), predicateIndex);
    case 12: return and_expressionSempred(antlrcpp::downCast<And_expressionContext *>(context), predicateIndex);
    case 13: return or_expressionSempred(antlrcpp::downCast<Or_expressionContext *>(context), predicateIndex);
    case 14: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 18: return statement_listSempred(antlrcpp::downCast<Statement_listContext *>(context), predicateIndex);
    case 19: return identifier_listSempred(antlrcpp::downCast<Identifier_listContext *>(context), predicateIndex);
    case 25: return array_listSempred(antlrcpp::downCast<Array_listContext *>(context), predicateIndex);
    case 27: return elseif_clauseSempred(antlrcpp::downCast<Elseif_clauseContext *>(context), predicateIndex);
    case 31: return func_ident_listSempred(antlrcpp::downCast<Func_ident_listContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool matlabParser::postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::index_expression_listSempred(Index_expression_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 4);
    case 14: return precpred(_ctx, 3);
    case 15: return precpred(_ctx, 2);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::equality_expressionSempred(Equality_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 2);
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::and_expressionSempred(And_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::or_expressionSempred(Or_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::identifier_listSempred(Identifier_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 23: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::array_listSempred(Array_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::elseif_clauseSempred(Elseif_clauseContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool matlabParser::func_ident_listSempred(Func_ident_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void matlabParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  matlabParserInitialize();
#else
  ::antlr4::internal::call_once(matlabParserOnceFlag, matlabParserInitialize);
#endif
}
