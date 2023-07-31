
// Generated from Corundum.g4 by ANTLR 4.13.0


#include "CorundumListener.h"

#include "CorundumParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CorundumParserStaticData final {
  CorundumParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CorundumParserStaticData(const CorundumParserStaticData&) = delete;
  CorundumParserStaticData(CorundumParserStaticData&&) = delete;
  CorundumParserStaticData& operator=(const CorundumParserStaticData&) = delete;
  CorundumParserStaticData& operator=(CorundumParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag corundumParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CorundumParserStaticData *corundumParserStaticData = nullptr;

void corundumParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (corundumParserStaticData != nullptr) {
    return;
  }
#else
  assert(corundumParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CorundumParserStaticData>(
    std::vector<std::string>{
      "prog", "expression_list", "expression", "global_get", "global_set", 
      "global_result", "function_inline_call", "require_block", "pir_inline", 
      "pir_expression_list", "function_definition", "function_definition_body", 
      "function_definition_header", "function_name", "function_definition_params", 
      "function_definition_params_list", "function_definition_param_id", 
      "return_statement", "function_call", "function_call_param_list", "function_call_params", 
      "function_param", "function_unnamed_param", "function_named_param", 
      "function_call_assignment", "all_result", "elsif_statement", "if_elsif_statement", 
      "if_statement", "unless_statement", "while_statement", "for_statement", 
      "init_expression", "all_assignment", "for_init_list", "cond_expression", 
      "loop_expression", "for_loop_list", "statement_body", "statement_expression_list", 
      "assignment", "dynamic_assignment", "int_assignment", "float_assignment", 
      "string_assignment", "initial_array_assignment", "array_assignment", 
      "array_definition", "array_definition_elements", "array_selector", 
      "dynamic_result", "dynamic_", "int_result", "float_result", "string_result", 
      "comparison_list", "comparison", "comp_var", "lvalue", "rvalue", "break_expression", 
      "literal_t", "float_t", "int_t", "bool_t", "nil_t", "id_", "id_global", 
      "id_function", "terminator", "else_token", "crlf"
    },
    std::vector<std::string>{
      "", "", "','", "';'", "", "'require'", "'end'", "'def'", "'return'", 
      "'pir'", "'if'", "'else'", "'elsif'", "'unless'", "'while'", "'retry'", 
      "'break'", "'for'", "'true'", "'false'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'**'", "'=='", "'!='", "'>'", "'<'", "'<='", "'>='", "'='", 
      "'+='", "'-='", "'*='", "'/='", "'%='", "'**='", "'&'", "'|'", "'^'", 
      "'~'", "'<<'", "'>>'", "", "", "", "'('", "')'", "'['", "']'", "'nil'"
    },
    std::vector<std::string>{
      "", "LITERAL", "COMMA", "SEMICOLON", "CRLF", "REQUIRE", "END", "DEF", 
      "RETURN", "PIR", "IF", "ELSE", "ELSIF", "UNLESS", "WHILE", "RETRY", 
      "BREAK", "FOR", "TRUE", "FALSE", "PLUS", "MINUS", "MUL", "DIV", "MOD", 
      "EXP", "EQUAL", "NOT_EQUAL", "GREATER", "LESS", "LESS_EQUAL", "GREATER_EQUAL", 
      "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
      "MOD_ASSIGN", "EXP_ASSIGN", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", 
      "BIT_SHL", "BIT_SHR", "AND", "OR", "NOT", "LEFT_RBRACKET", "RIGHT_RBRACKET", 
      "LEFT_SBRACKET", "RIGHT_SBRACKET", "NIL", "SL_COMMENT", "ML_COMMENT", 
      "WS", "INT", "FLOAT", "ID", "ID_GLOBAL", "ID_FUNCTION"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,60,825,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,153,8,1,1,1,1,1,1,1,
  	1,1,5,1,159,8,1,10,1,12,1,162,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,3,2,174,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,
  	7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,213,8,12,1,13,1,13,3,13,
  	217,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,226,8,14,1,15,1,15,1,
  	15,1,15,1,15,1,15,5,15,234,8,15,10,15,12,15,237,9,15,1,16,1,16,1,17,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,
  	18,256,8,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,5,20,266,8,20,10,
  	20,12,20,269,9,20,1,21,1,21,3,21,273,8,21,1,22,1,22,1,22,1,22,3,22,279,
  	8,22,1,23,1,23,1,23,1,23,1,23,1,23,3,23,287,8,23,1,24,1,24,1,25,1,25,
  	1,25,1,25,1,25,3,25,296,8,25,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,
  	319,8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,343,8,28,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,367,8,29,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,3,31,397,8,31,1,32,
  	1,32,1,33,1,33,1,33,1,33,3,33,405,8,33,1,34,1,34,1,34,1,34,1,34,1,34,
  	5,34,413,8,34,10,34,12,34,416,9,34,1,35,1,35,1,36,1,36,1,37,1,37,1,37,
  	1,37,1,37,1,37,5,37,428,8,37,10,37,12,37,431,9,37,1,38,1,38,1,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,3,39,444,8,39,1,39,1,39,1,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,5,39,457,8,39,10,39,12,39,460,9,39,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,3,40,470,8,40,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,3,41,480,8,41,1,42,1,42,1,42,1,42,1,42,1,42,
  	1,42,1,42,3,42,490,8,42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,
  	500,8,43,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,3,44,510,8,44,1,45,1,
  	45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,
  	48,3,48,528,8,48,1,48,1,48,1,48,1,48,3,48,534,8,48,5,48,536,8,48,10,48,
  	12,48,539,9,48,1,49,1,49,1,49,1,49,3,49,545,8,49,1,49,1,49,1,49,1,49,
  	1,49,1,49,3,49,553,8,49,1,49,1,49,3,49,557,8,49,1,50,1,50,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,3,50,585,8,50,1,50,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,
  	50,1,50,1,50,1,50,5,50,608,8,50,10,50,12,50,611,9,50,1,51,1,51,1,51,3,
  	51,616,8,51,1,52,1,52,1,52,1,52,1,52,1,52,3,52,624,8,52,1,52,1,52,1,52,
  	1,52,1,52,1,52,5,52,632,8,52,10,52,12,52,635,9,52,1,53,1,53,1,53,1,53,
  	1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,3,53,651,8,53,1,53,
  	1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,5,53,665,8,53,
  	10,53,12,53,668,9,53,1,54,1,54,1,54,1,54,1,54,1,54,3,54,676,8,54,1,54,
  	1,54,1,54,1,54,1,54,1,54,5,54,684,8,54,10,54,12,54,687,9,54,1,55,1,55,
  	1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,
  	1,55,1,55,1,55,1,55,1,55,3,55,710,8,55,1,56,1,56,1,56,1,56,1,56,1,56,
  	1,56,1,56,3,56,720,8,56,1,57,1,57,1,57,3,57,725,8,57,1,58,1,58,1,59,1,
  	59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,
  	59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,3,59,755,8,59,1,
  	59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,
  	59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,5,59,784,
  	8,59,10,59,12,59,787,9,59,1,60,1,60,1,61,1,61,1,62,1,62,1,63,1,63,1,64,
  	1,64,1,65,1,65,1,66,1,66,1,67,1,67,1,68,1,68,1,69,1,69,1,69,3,69,810,
  	8,69,1,69,1,69,1,69,1,69,5,69,816,8,69,10,69,12,69,819,9,69,1,70,1,70,
  	1,71,1,71,1,71,0,13,2,30,40,68,74,78,96,100,104,106,108,118,138,72,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,
  	98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,
  	134,136,138,140,142,0,10,1,0,33,38,1,0,22,24,1,0,20,21,1,0,28,31,1,0,
  	26,27,2,0,42,42,47,47,1,0,43,44,1,0,40,41,1,0,45,46,1,0,18,19,878,0,144,
  	1,0,0,0,2,152,1,0,0,0,4,173,1,0,0,0,6,175,1,0,0,0,8,179,1,0,0,0,10,183,
  	1,0,0,0,12,185,1,0,0,0,14,187,1,0,0,0,16,190,1,0,0,0,18,195,1,0,0,0,20,
  	197,1,0,0,0,22,201,1,0,0,0,24,212,1,0,0,0,26,216,1,0,0,0,28,225,1,0,0,
  	0,30,227,1,0,0,0,32,238,1,0,0,0,34,240,1,0,0,0,36,255,1,0,0,0,38,257,
  	1,0,0,0,40,259,1,0,0,0,42,272,1,0,0,0,44,278,1,0,0,0,46,280,1,0,0,0,48,
  	288,1,0,0,0,50,295,1,0,0,0,52,297,1,0,0,0,54,318,1,0,0,0,56,342,1,0,0,
  	0,58,366,1,0,0,0,60,368,1,0,0,0,62,396,1,0,0,0,64,398,1,0,0,0,66,404,
  	1,0,0,0,68,406,1,0,0,0,70,417,1,0,0,0,72,419,1,0,0,0,74,421,1,0,0,0,76,
  	432,1,0,0,0,78,443,1,0,0,0,80,469,1,0,0,0,82,479,1,0,0,0,84,489,1,0,0,
  	0,86,499,1,0,0,0,88,509,1,0,0,0,90,511,1,0,0,0,92,516,1,0,0,0,94,520,
  	1,0,0,0,96,524,1,0,0,0,98,556,1,0,0,0,100,584,1,0,0,0,102,615,1,0,0,0,
  	104,623,1,0,0,0,106,650,1,0,0,0,108,675,1,0,0,0,110,709,1,0,0,0,112,719,
  	1,0,0,0,114,724,1,0,0,0,116,726,1,0,0,0,118,754,1,0,0,0,120,788,1,0,0,
  	0,122,790,1,0,0,0,124,792,1,0,0,0,126,794,1,0,0,0,128,796,1,0,0,0,130,
  	798,1,0,0,0,132,800,1,0,0,0,134,802,1,0,0,0,136,804,1,0,0,0,138,809,1,
  	0,0,0,140,820,1,0,0,0,142,822,1,0,0,0,144,145,3,2,1,0,145,146,5,0,0,1,
  	146,1,1,0,0,0,147,148,6,1,-1,0,148,149,3,4,2,0,149,150,3,138,69,0,150,
  	153,1,0,0,0,151,153,3,138,69,0,152,147,1,0,0,0,152,151,1,0,0,0,153,160,
  	1,0,0,0,154,155,10,2,0,0,155,156,3,4,2,0,156,157,3,138,69,0,157,159,1,
  	0,0,0,158,154,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,
  	161,3,1,0,0,0,162,160,1,0,0,0,163,174,3,20,10,0,164,174,3,12,6,0,165,
  	174,3,14,7,0,166,174,3,56,28,0,167,174,3,58,29,0,168,174,3,118,59,0,169,
  	174,3,34,17,0,170,174,3,60,30,0,171,174,3,62,31,0,172,174,3,16,8,0,173,
  	163,1,0,0,0,173,164,1,0,0,0,173,165,1,0,0,0,173,166,1,0,0,0,173,167,1,
  	0,0,0,173,168,1,0,0,0,173,169,1,0,0,0,173,170,1,0,0,0,173,171,1,0,0,0,
  	173,172,1,0,0,0,174,5,1,0,0,0,175,176,3,116,58,0,176,177,5,32,0,0,177,
  	178,3,134,67,0,178,7,1,0,0,0,179,180,3,134,67,0,180,181,5,32,0,0,181,
  	182,3,50,25,0,182,9,1,0,0,0,183,184,3,134,67,0,184,11,1,0,0,0,185,186,
  	3,36,18,0,186,13,1,0,0,0,187,188,5,5,0,0,188,189,3,122,61,0,189,15,1,
  	0,0,0,190,191,5,9,0,0,191,192,3,142,71,0,192,193,3,18,9,0,193,194,5,6,
  	0,0,194,17,1,0,0,0,195,196,3,2,1,0,196,19,1,0,0,0,197,198,3,24,12,0,198,
  	199,3,22,11,0,199,200,5,6,0,0,200,21,1,0,0,0,201,202,3,2,1,0,202,23,1,
  	0,0,0,203,204,5,7,0,0,204,205,3,26,13,0,205,206,3,142,71,0,206,213,1,
  	0,0,0,207,208,5,7,0,0,208,209,3,26,13,0,209,210,3,28,14,0,210,211,3,142,
  	71,0,211,213,1,0,0,0,212,203,1,0,0,0,212,207,1,0,0,0,213,25,1,0,0,0,214,
  	217,3,136,68,0,215,217,3,132,66,0,216,214,1,0,0,0,216,215,1,0,0,0,217,
  	27,1,0,0,0,218,219,5,48,0,0,219,226,5,49,0,0,220,221,5,48,0,0,221,222,
  	3,30,15,0,222,223,5,49,0,0,223,226,1,0,0,0,224,226,3,30,15,0,225,218,
  	1,0,0,0,225,220,1,0,0,0,225,224,1,0,0,0,226,29,1,0,0,0,227,228,6,15,-1,
  	0,228,229,3,32,16,0,229,235,1,0,0,0,230,231,10,1,0,0,231,232,5,2,0,0,
  	232,234,3,32,16,0,233,230,1,0,0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,
  	236,1,0,0,0,236,31,1,0,0,0,237,235,1,0,0,0,238,239,3,132,66,0,239,33,
  	1,0,0,0,240,241,5,8,0,0,241,242,3,50,25,0,242,35,1,0,0,0,243,244,3,26,
  	13,0,244,245,5,48,0,0,245,246,3,38,19,0,246,247,5,49,0,0,247,256,1,0,
  	0,0,248,249,3,26,13,0,249,250,3,38,19,0,250,256,1,0,0,0,251,252,3,26,
  	13,0,252,253,5,48,0,0,253,254,5,49,0,0,254,256,1,0,0,0,255,243,1,0,0,
  	0,255,248,1,0,0,0,255,251,1,0,0,0,256,37,1,0,0,0,257,258,3,40,20,0,258,
  	39,1,0,0,0,259,260,6,20,-1,0,260,261,3,42,21,0,261,267,1,0,0,0,262,263,
  	10,1,0,0,263,264,5,2,0,0,264,266,3,42,21,0,265,262,1,0,0,0,266,269,1,
  	0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,41,1,0,0,0,269,267,1,0,0,0,
  	270,273,3,44,22,0,271,273,3,46,23,0,272,270,1,0,0,0,272,271,1,0,0,0,273,
  	43,1,0,0,0,274,279,3,104,52,0,275,279,3,106,53,0,276,279,3,108,54,0,277,
  	279,3,100,50,0,278,274,1,0,0,0,278,275,1,0,0,0,278,276,1,0,0,0,278,277,
  	1,0,0,0,279,45,1,0,0,0,280,281,3,132,66,0,281,286,5,32,0,0,282,287,3,
  	104,52,0,283,287,3,106,53,0,284,287,3,108,54,0,285,287,3,100,50,0,286,
  	282,1,0,0,0,286,283,1,0,0,0,286,284,1,0,0,0,286,285,1,0,0,0,287,47,1,
  	0,0,0,288,289,3,36,18,0,289,49,1,0,0,0,290,296,3,104,52,0,291,296,3,106,
  	53,0,292,296,3,108,54,0,293,296,3,100,50,0,294,296,3,10,5,0,295,290,1,
  	0,0,0,295,291,1,0,0,0,295,292,1,0,0,0,295,293,1,0,0,0,295,294,1,0,0,0,
  	296,51,1,0,0,0,297,298,3,54,27,0,298,53,1,0,0,0,299,300,5,12,0,0,300,
  	301,3,70,35,0,301,302,3,142,71,0,302,303,3,76,38,0,303,319,1,0,0,0,304,
  	305,5,12,0,0,305,306,3,70,35,0,306,307,3,142,71,0,307,308,3,76,38,0,308,
  	309,3,140,70,0,309,310,3,142,71,0,310,311,3,76,38,0,311,319,1,0,0,0,312,
  	313,5,12,0,0,313,314,3,70,35,0,314,315,3,142,71,0,315,316,3,76,38,0,316,
  	317,3,54,27,0,317,319,1,0,0,0,318,299,1,0,0,0,318,304,1,0,0,0,318,312,
  	1,0,0,0,319,55,1,0,0,0,320,321,5,10,0,0,321,322,3,70,35,0,322,323,3,142,
  	71,0,323,324,3,76,38,0,324,325,5,6,0,0,325,343,1,0,0,0,326,327,5,10,0,
  	0,327,328,3,70,35,0,328,329,3,142,71,0,329,330,3,76,38,0,330,331,3,140,
  	70,0,331,332,3,142,71,0,332,333,3,76,38,0,333,334,5,6,0,0,334,343,1,0,
  	0,0,335,336,5,10,0,0,336,337,3,70,35,0,337,338,3,142,71,0,338,339,3,76,
  	38,0,339,340,3,52,26,0,340,341,5,6,0,0,341,343,1,0,0,0,342,320,1,0,0,
  	0,342,326,1,0,0,0,342,335,1,0,0,0,343,57,1,0,0,0,344,345,5,13,0,0,345,
  	346,3,70,35,0,346,347,3,142,71,0,347,348,3,76,38,0,348,349,5,6,0,0,349,
  	367,1,0,0,0,350,351,5,13,0,0,351,352,3,70,35,0,352,353,3,142,71,0,353,
  	354,3,76,38,0,354,355,3,140,70,0,355,356,3,142,71,0,356,357,3,76,38,0,
  	357,358,5,6,0,0,358,367,1,0,0,0,359,360,5,13,0,0,360,361,3,70,35,0,361,
  	362,3,142,71,0,362,363,3,76,38,0,363,364,3,52,26,0,364,365,5,6,0,0,365,
  	367,1,0,0,0,366,344,1,0,0,0,366,350,1,0,0,0,366,359,1,0,0,0,367,59,1,
  	0,0,0,368,369,5,14,0,0,369,370,3,70,35,0,370,371,3,142,71,0,371,372,3,
  	76,38,0,372,373,5,6,0,0,373,61,1,0,0,0,374,375,5,17,0,0,375,376,5,48,
  	0,0,376,377,3,64,32,0,377,378,5,3,0,0,378,379,3,70,35,0,379,380,5,3,0,
  	0,380,381,3,72,36,0,381,382,5,49,0,0,382,383,3,142,71,0,383,384,3,76,
  	38,0,384,385,5,6,0,0,385,397,1,0,0,0,386,387,5,17,0,0,387,388,3,64,32,
  	0,388,389,5,3,0,0,389,390,3,70,35,0,390,391,5,3,0,0,391,392,3,72,36,0,
  	392,393,3,142,71,0,393,394,3,76,38,0,394,395,5,6,0,0,395,397,1,0,0,0,
  	396,374,1,0,0,0,396,386,1,0,0,0,397,63,1,0,0,0,398,399,3,68,34,0,399,
  	65,1,0,0,0,400,405,3,84,42,0,401,405,3,86,43,0,402,405,3,88,44,0,403,
  	405,3,82,41,0,404,400,1,0,0,0,404,401,1,0,0,0,404,402,1,0,0,0,404,403,
  	1,0,0,0,405,67,1,0,0,0,406,407,6,34,-1,0,407,408,3,66,33,0,408,414,1,
  	0,0,0,409,410,10,2,0,0,410,411,5,2,0,0,411,413,3,66,33,0,412,409,1,0,
  	0,0,413,416,1,0,0,0,414,412,1,0,0,0,414,415,1,0,0,0,415,69,1,0,0,0,416,
  	414,1,0,0,0,417,418,3,110,55,0,418,71,1,0,0,0,419,420,3,74,37,0,420,73,
  	1,0,0,0,421,422,6,37,-1,0,422,423,3,66,33,0,423,429,1,0,0,0,424,425,10,
  	2,0,0,425,426,5,2,0,0,426,428,3,66,33,0,427,424,1,0,0,0,428,431,1,0,0,
  	0,429,427,1,0,0,0,429,430,1,0,0,0,430,75,1,0,0,0,431,429,1,0,0,0,432,
  	433,3,78,39,0,433,77,1,0,0,0,434,435,6,39,-1,0,435,436,3,4,2,0,436,437,
  	3,138,69,0,437,444,1,0,0,0,438,439,5,15,0,0,439,444,3,138,69,0,440,441,
  	3,120,60,0,441,442,3,138,69,0,442,444,1,0,0,0,443,434,1,0,0,0,443,438,
  	1,0,0,0,443,440,1,0,0,0,444,458,1,0,0,0,445,446,10,3,0,0,446,447,3,4,
  	2,0,447,448,3,138,69,0,448,457,1,0,0,0,449,450,10,2,0,0,450,451,5,15,
  	0,0,451,457,3,138,69,0,452,453,10,1,0,0,453,454,3,120,60,0,454,455,3,
  	138,69,0,455,457,1,0,0,0,456,445,1,0,0,0,456,449,1,0,0,0,456,452,1,0,
  	0,0,457,460,1,0,0,0,458,456,1,0,0,0,458,459,1,0,0,0,459,79,1,0,0,0,460,
  	458,1,0,0,0,461,462,3,116,58,0,462,463,5,32,0,0,463,464,3,118,59,0,464,
  	470,1,0,0,0,465,466,3,116,58,0,466,467,7,0,0,0,467,468,3,118,59,0,468,
  	470,1,0,0,0,469,461,1,0,0,0,469,465,1,0,0,0,470,81,1,0,0,0,471,472,3,
  	116,58,0,472,473,5,32,0,0,473,474,3,100,50,0,474,480,1,0,0,0,475,476,
  	3,116,58,0,476,477,7,0,0,0,477,478,3,100,50,0,478,480,1,0,0,0,479,471,
  	1,0,0,0,479,475,1,0,0,0,480,83,1,0,0,0,481,482,3,116,58,0,482,483,5,32,
  	0,0,483,484,3,104,52,0,484,490,1,0,0,0,485,486,3,116,58,0,486,487,7,0,
  	0,0,487,488,3,104,52,0,488,490,1,0,0,0,489,481,1,0,0,0,489,485,1,0,0,
  	0,490,85,1,0,0,0,491,492,3,116,58,0,492,493,5,32,0,0,493,494,3,106,53,
  	0,494,500,1,0,0,0,495,496,3,116,58,0,496,497,7,0,0,0,497,498,3,106,53,
  	0,498,500,1,0,0,0,499,491,1,0,0,0,499,495,1,0,0,0,500,87,1,0,0,0,501,
  	502,3,116,58,0,502,503,5,32,0,0,503,504,3,108,54,0,504,510,1,0,0,0,505,
  	506,3,116,58,0,506,507,5,33,0,0,507,508,3,108,54,0,508,510,1,0,0,0,509,
  	501,1,0,0,0,509,505,1,0,0,0,510,89,1,0,0,0,511,512,3,116,58,0,512,513,
  	5,32,0,0,513,514,5,50,0,0,514,515,5,51,0,0,515,91,1,0,0,0,516,517,3,98,
  	49,0,517,518,5,32,0,0,518,519,3,50,25,0,519,93,1,0,0,0,520,521,5,50,0,
  	0,521,522,3,96,48,0,522,523,5,51,0,0,523,95,1,0,0,0,524,527,6,48,-1,0,
  	525,528,3,104,52,0,526,528,3,100,50,0,527,525,1,0,0,0,527,526,1,0,0,0,
  	528,537,1,0,0,0,529,530,10,1,0,0,530,533,5,2,0,0,531,534,3,104,52,0,532,
  	534,3,100,50,0,533,531,1,0,0,0,533,532,1,0,0,0,534,536,1,0,0,0,535,529,
  	1,0,0,0,536,539,1,0,0,0,537,535,1,0,0,0,537,538,1,0,0,0,538,97,1,0,0,
  	0,539,537,1,0,0,0,540,541,3,132,66,0,541,544,5,50,0,0,542,545,3,104,52,
  	0,543,545,3,100,50,0,544,542,1,0,0,0,544,543,1,0,0,0,545,546,1,0,0,0,
  	546,547,5,51,0,0,547,557,1,0,0,0,548,549,3,134,67,0,549,552,5,50,0,0,
  	550,553,3,104,52,0,551,553,3,100,50,0,552,550,1,0,0,0,552,551,1,0,0,0,
  	553,554,1,0,0,0,554,555,5,51,0,0,555,557,1,0,0,0,556,540,1,0,0,0,556,
  	548,1,0,0,0,557,99,1,0,0,0,558,559,6,50,-1,0,559,560,3,104,52,0,560,561,
  	7,1,0,0,561,562,3,100,50,13,562,585,1,0,0,0,563,564,3,106,53,0,564,565,
  	7,1,0,0,565,566,3,100,50,11,566,585,1,0,0,0,567,568,3,108,54,0,568,569,
  	5,22,0,0,569,570,3,100,50,8,570,585,1,0,0,0,571,572,3,104,52,0,572,573,
  	7,2,0,0,573,574,3,100,50,6,574,585,1,0,0,0,575,576,3,106,53,0,576,577,
  	7,2,0,0,577,578,3,100,50,4,578,585,1,0,0,0,579,580,5,48,0,0,580,581,3,
  	100,50,0,581,582,5,49,0,0,582,585,1,0,0,0,583,585,3,102,51,0,584,558,
  	1,0,0,0,584,563,1,0,0,0,584,567,1,0,0,0,584,571,1,0,0,0,584,575,1,0,0,
  	0,584,579,1,0,0,0,584,583,1,0,0,0,585,609,1,0,0,0,586,587,10,10,0,0,587,
  	588,7,1,0,0,588,608,3,100,50,11,589,590,10,3,0,0,590,591,7,2,0,0,591,
  	608,3,100,50,4,592,593,10,14,0,0,593,594,7,1,0,0,594,608,3,104,52,0,595,
  	596,10,12,0,0,596,597,7,1,0,0,597,608,3,106,53,0,598,599,10,9,0,0,599,
  	600,5,22,0,0,600,608,3,108,54,0,601,602,10,7,0,0,602,603,7,2,0,0,603,
  	608,3,104,52,0,604,605,10,5,0,0,605,606,7,2,0,0,606,608,3,106,53,0,607,
  	586,1,0,0,0,607,589,1,0,0,0,607,592,1,0,0,0,607,595,1,0,0,0,607,598,1,
  	0,0,0,607,601,1,0,0,0,607,604,1,0,0,0,608,611,1,0,0,0,609,607,1,0,0,0,
  	609,610,1,0,0,0,610,101,1,0,0,0,611,609,1,0,0,0,612,616,3,132,66,0,613,
  	616,3,48,24,0,614,616,3,98,49,0,615,612,1,0,0,0,615,613,1,0,0,0,615,614,
  	1,0,0,0,616,103,1,0,0,0,617,618,6,52,-1,0,618,619,5,48,0,0,619,620,3,
  	104,52,0,620,621,5,49,0,0,621,624,1,0,0,0,622,624,3,126,63,0,623,617,
  	1,0,0,0,623,622,1,0,0,0,624,633,1,0,0,0,625,626,10,4,0,0,626,627,7,1,
  	0,0,627,632,3,104,52,5,628,629,10,3,0,0,629,630,7,2,0,0,630,632,3,104,
  	52,4,631,625,1,0,0,0,631,628,1,0,0,0,632,635,1,0,0,0,633,631,1,0,0,0,
  	633,634,1,0,0,0,634,105,1,0,0,0,635,633,1,0,0,0,636,637,6,53,-1,0,637,
  	638,3,104,52,0,638,639,7,1,0,0,639,640,3,106,53,7,640,651,1,0,0,0,641,
  	642,3,104,52,0,642,643,7,2,0,0,643,644,3,106,53,4,644,651,1,0,0,0,645,
  	646,5,48,0,0,646,647,3,106,53,0,647,648,5,49,0,0,648,651,1,0,0,0,649,
  	651,3,124,62,0,650,636,1,0,0,0,650,641,1,0,0,0,650,645,1,0,0,0,650,649,
  	1,0,0,0,651,666,1,0,0,0,652,653,10,8,0,0,653,654,7,1,0,0,654,665,3,106,
  	53,9,655,656,10,5,0,0,656,657,7,2,0,0,657,665,3,106,53,6,658,659,10,6,
  	0,0,659,660,7,1,0,0,660,665,3,104,52,0,661,662,10,3,0,0,662,663,7,2,0,
  	0,663,665,3,104,52,0,664,652,1,0,0,0,664,655,1,0,0,0,664,658,1,0,0,0,
  	664,661,1,0,0,0,665,668,1,0,0,0,666,664,1,0,0,0,666,667,1,0,0,0,667,107,
  	1,0,0,0,668,666,1,0,0,0,669,670,6,54,-1,0,670,671,3,104,52,0,671,672,
  	5,22,0,0,672,673,3,108,54,3,673,676,1,0,0,0,674,676,3,122,61,0,675,669,
  	1,0,0,0,675,674,1,0,0,0,676,685,1,0,0,0,677,678,10,2,0,0,678,679,5,20,
  	0,0,679,684,3,108,54,3,680,681,10,4,0,0,681,682,5,22,0,0,682,684,3,104,
  	52,0,683,677,1,0,0,0,683,680,1,0,0,0,684,687,1,0,0,0,685,683,1,0,0,0,
  	685,686,1,0,0,0,686,109,1,0,0,0,687,685,1,0,0,0,688,689,3,112,56,0,689,
  	690,5,39,0,0,690,691,3,110,55,0,691,710,1,0,0,0,692,693,3,112,56,0,693,
  	694,5,45,0,0,694,695,3,110,55,0,695,710,1,0,0,0,696,697,3,112,56,0,697,
  	698,5,40,0,0,698,699,3,110,55,0,699,710,1,0,0,0,700,701,3,112,56,0,701,
  	702,5,46,0,0,702,703,3,110,55,0,703,710,1,0,0,0,704,705,5,48,0,0,705,
  	706,3,110,55,0,706,707,5,49,0,0,707,710,1,0,0,0,708,710,3,112,56,0,709,
  	688,1,0,0,0,709,692,1,0,0,0,709,696,1,0,0,0,709,700,1,0,0,0,709,704,1,
  	0,0,0,709,708,1,0,0,0,710,111,1,0,0,0,711,712,3,114,57,0,712,713,7,3,
  	0,0,713,714,3,114,57,0,714,720,1,0,0,0,715,716,3,114,57,0,716,717,7,4,
  	0,0,717,718,3,114,57,0,718,720,1,0,0,0,719,711,1,0,0,0,719,715,1,0,0,
  	0,720,113,1,0,0,0,721,725,3,50,25,0,722,725,3,98,49,0,723,725,3,132,66,
  	0,724,721,1,0,0,0,724,722,1,0,0,0,724,723,1,0,0,0,725,115,1,0,0,0,726,
  	727,3,132,66,0,727,117,1,0,0,0,728,729,6,59,-1,0,729,755,3,116,58,0,730,
  	755,3,90,45,0,731,755,3,92,46,0,732,755,3,104,52,0,733,755,3,106,53,0,
  	734,755,3,108,54,0,735,755,3,8,4,0,736,755,3,6,3,0,737,755,3,82,41,0,
  	738,755,3,88,44,0,739,755,3,86,43,0,740,755,3,84,42,0,741,755,3,80,40,
  	0,742,755,3,36,18,0,743,755,3,122,61,0,744,755,3,128,64,0,745,755,3,124,
  	62,0,746,755,3,126,63,0,747,755,3,130,65,0,748,749,7,5,0,0,749,755,3,
  	118,59,10,750,751,5,48,0,0,751,752,3,118,59,0,752,753,5,49,0,0,753,755,
  	1,0,0,0,754,728,1,0,0,0,754,730,1,0,0,0,754,731,1,0,0,0,754,732,1,0,0,
  	0,754,733,1,0,0,0,754,734,1,0,0,0,754,735,1,0,0,0,754,736,1,0,0,0,754,
  	737,1,0,0,0,754,738,1,0,0,0,754,739,1,0,0,0,754,740,1,0,0,0,754,741,1,
  	0,0,0,754,742,1,0,0,0,754,743,1,0,0,0,754,744,1,0,0,0,754,745,1,0,0,0,
  	754,746,1,0,0,0,754,747,1,0,0,0,754,748,1,0,0,0,754,750,1,0,0,0,755,785,
  	1,0,0,0,756,757,10,11,0,0,757,758,5,25,0,0,758,784,3,118,59,12,759,760,
  	10,9,0,0,760,761,7,1,0,0,761,784,3,118,59,10,762,763,10,8,0,0,763,764,
  	7,2,0,0,764,784,3,118,59,9,765,766,10,7,0,0,766,767,7,6,0,0,767,784,3,
  	118,59,8,768,769,10,6,0,0,769,770,5,39,0,0,770,784,3,118,59,7,771,772,
  	10,5,0,0,772,773,7,7,0,0,773,784,3,118,59,6,774,775,10,4,0,0,775,776,
  	7,3,0,0,776,784,3,118,59,5,777,778,10,3,0,0,778,779,7,4,0,0,779,784,3,
  	118,59,4,780,781,10,2,0,0,781,782,7,8,0,0,782,784,3,118,59,3,783,756,
  	1,0,0,0,783,759,1,0,0,0,783,762,1,0,0,0,783,765,1,0,0,0,783,768,1,0,0,
  	0,783,771,1,0,0,0,783,774,1,0,0,0,783,777,1,0,0,0,783,780,1,0,0,0,784,
  	787,1,0,0,0,785,783,1,0,0,0,785,786,1,0,0,0,786,119,1,0,0,0,787,785,1,
  	0,0,0,788,789,5,16,0,0,789,121,1,0,0,0,790,791,5,1,0,0,791,123,1,0,0,
  	0,792,793,5,57,0,0,793,125,1,0,0,0,794,795,5,56,0,0,795,127,1,0,0,0,796,
  	797,7,9,0,0,797,129,1,0,0,0,798,799,5,52,0,0,799,131,1,0,0,0,800,801,
  	5,58,0,0,801,133,1,0,0,0,802,803,5,59,0,0,803,135,1,0,0,0,804,805,5,60,
  	0,0,805,137,1,0,0,0,806,807,6,69,-1,0,807,810,5,3,0,0,808,810,3,142,71,
  	0,809,806,1,0,0,0,809,808,1,0,0,0,810,817,1,0,0,0,811,812,10,4,0,0,812,
  	816,5,3,0,0,813,814,10,3,0,0,814,816,3,142,71,0,815,811,1,0,0,0,815,813,
  	1,0,0,0,816,819,1,0,0,0,817,815,1,0,0,0,817,818,1,0,0,0,818,139,1,0,0,
  	0,819,817,1,0,0,0,820,821,5,11,0,0,821,141,1,0,0,0,822,823,5,4,0,0,823,
  	143,1,0,0,0,56,152,160,173,212,216,225,235,255,267,272,278,286,295,318,
  	342,366,396,404,414,429,443,456,458,469,479,489,499,509,527,533,537,544,
  	552,556,584,607,609,615,623,631,633,650,664,666,675,683,685,709,719,724,
  	754,783,785,809,815,817
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  corundumParserStaticData = staticData.release();
}

}

CorundumParser::CorundumParser(TokenStream *input) : CorundumParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CorundumParser::CorundumParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CorundumParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *corundumParserStaticData->atn, corundumParserStaticData->decisionToDFA, corundumParserStaticData->sharedContextCache, options);
}

CorundumParser::~CorundumParser() {
  delete _interpreter;
}

const atn::ATN& CorundumParser::getATN() const {
  return *corundumParserStaticData->atn;
}

std::string CorundumParser::getGrammarFileName() const {
  return "Corundum.g4";
}

const std::vector<std::string>& CorundumParser::getRuleNames() const {
  return corundumParserStaticData->ruleNames;
}

const dfa::Vocabulary& CorundumParser::getVocabulary() const {
  return corundumParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CorundumParser::getSerializedATN() const {
  return corundumParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

CorundumParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Expression_listContext* CorundumParser::ProgContext::expression_list() {
  return getRuleContext<CorundumParser::Expression_listContext>(0);
}

tree::TerminalNode* CorundumParser::ProgContext::EOF() {
  return getToken(CorundumParser::EOF, 0);
}


size_t CorundumParser::ProgContext::getRuleIndex() const {
  return CorundumParser::RuleProg;
}

void CorundumParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void CorundumParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

CorundumParser::ProgContext* CorundumParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CorundumParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    expression_list(0);
    setState(145);
    match(CorundumParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

CorundumParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::ExpressionContext* CorundumParser::Expression_listContext::expression() {
  return getRuleContext<CorundumParser::ExpressionContext>(0);
}

CorundumParser::TerminatorContext* CorundumParser::Expression_listContext::terminator() {
  return getRuleContext<CorundumParser::TerminatorContext>(0);
}

CorundumParser::Expression_listContext* CorundumParser::Expression_listContext::expression_list() {
  return getRuleContext<CorundumParser::Expression_listContext>(0);
}


size_t CorundumParser::Expression_listContext::getRuleIndex() const {
  return CorundumParser::RuleExpression_list;
}

void CorundumParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void CorundumParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}


CorundumParser::Expression_listContext* CorundumParser::expression_list() {
   return expression_list(0);
}

CorundumParser::Expression_listContext* CorundumParser::expression_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, parentState);
  CorundumParser::Expression_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CorundumParser::RuleExpression_list, precedence);

    

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
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::LITERAL:
      case CorundumParser::REQUIRE:
      case CorundumParser::DEF:
      case CorundumParser::RETURN:
      case CorundumParser::PIR:
      case CorundumParser::IF:
      case CorundumParser::UNLESS:
      case CorundumParser::WHILE:
      case CorundumParser::FOR:
      case CorundumParser::TRUE:
      case CorundumParser::FALSE:
      case CorundumParser::BIT_NOT:
      case CorundumParser::NOT:
      case CorundumParser::LEFT_RBRACKET:
      case CorundumParser::NIL:
      case CorundumParser::INT:
      case CorundumParser::FLOAT:
      case CorundumParser::ID:
      case CorundumParser::ID_GLOBAL:
      case CorundumParser::ID_FUNCTION: {
        setState(148);
        expression();
        setState(149);
        terminator(0);
        break;
      }

      case CorundumParser::SEMICOLON:
      case CorundumParser::CRLF: {
        setState(151);
        terminator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(160);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Expression_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression_list);
        setState(154);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(155);
        expression();
        setState(156);
        terminator(0); 
      }
      setState(162);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
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

CorundumParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_definitionContext* CorundumParser::ExpressionContext::function_definition() {
  return getRuleContext<CorundumParser::Function_definitionContext>(0);
}

CorundumParser::Function_inline_callContext* CorundumParser::ExpressionContext::function_inline_call() {
  return getRuleContext<CorundumParser::Function_inline_callContext>(0);
}

CorundumParser::Require_blockContext* CorundumParser::ExpressionContext::require_block() {
  return getRuleContext<CorundumParser::Require_blockContext>(0);
}

CorundumParser::If_statementContext* CorundumParser::ExpressionContext::if_statement() {
  return getRuleContext<CorundumParser::If_statementContext>(0);
}

CorundumParser::Unless_statementContext* CorundumParser::ExpressionContext::unless_statement() {
  return getRuleContext<CorundumParser::Unless_statementContext>(0);
}

CorundumParser::RvalueContext* CorundumParser::ExpressionContext::rvalue() {
  return getRuleContext<CorundumParser::RvalueContext>(0);
}

CorundumParser::Return_statementContext* CorundumParser::ExpressionContext::return_statement() {
  return getRuleContext<CorundumParser::Return_statementContext>(0);
}

CorundumParser::While_statementContext* CorundumParser::ExpressionContext::while_statement() {
  return getRuleContext<CorundumParser::While_statementContext>(0);
}

CorundumParser::For_statementContext* CorundumParser::ExpressionContext::for_statement() {
  return getRuleContext<CorundumParser::For_statementContext>(0);
}

CorundumParser::Pir_inlineContext* CorundumParser::ExpressionContext::pir_inline() {
  return getRuleContext<CorundumParser::Pir_inlineContext>(0);
}


size_t CorundumParser::ExpressionContext::getRuleIndex() const {
  return CorundumParser::RuleExpression;
}

void CorundumParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CorundumParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

CorundumParser::ExpressionContext* CorundumParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CorundumParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      function_definition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      function_inline_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(165);
      require_block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(166);
      if_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(167);
      unless_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(168);
      rvalue(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(169);
      return_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(170);
      while_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(171);
      for_statement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(172);
      pir_inline();
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

//----------------- Global_getContext ------------------------------------------------------------------

CorundumParser::Global_getContext::Global_getContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::LvalueContext* CorundumParser::Global_getContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::Global_getContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

CorundumParser::Id_globalContext* CorundumParser::Global_getContext::id_global() {
  return getRuleContext<CorundumParser::Id_globalContext>(0);
}


size_t CorundumParser::Global_getContext::getRuleIndex() const {
  return CorundumParser::RuleGlobal_get;
}

void CorundumParser::Global_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_get(this);
}

void CorundumParser::Global_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_get(this);
}

CorundumParser::Global_getContext* CorundumParser::global_get() {
  Global_getContext *_localctx = _tracker.createInstance<Global_getContext>(_ctx, getState());
  enterRule(_localctx, 6, CorundumParser::RuleGlobal_get);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    antlrcpp::downCast<Global_getContext *>(_localctx)->var_name = lvalue();
    setState(176);
    antlrcpp::downCast<Global_getContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
    setState(177);
    antlrcpp::downCast<Global_getContext *>(_localctx)->global_name = id_global();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_setContext ------------------------------------------------------------------

CorundumParser::Global_setContext::Global_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_globalContext* CorundumParser::Global_setContext::id_global() {
  return getRuleContext<CorundumParser::Id_globalContext>(0);
}

tree::TerminalNode* CorundumParser::Global_setContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

CorundumParser::All_resultContext* CorundumParser::Global_setContext::all_result() {
  return getRuleContext<CorundumParser::All_resultContext>(0);
}


size_t CorundumParser::Global_setContext::getRuleIndex() const {
  return CorundumParser::RuleGlobal_set;
}

void CorundumParser::Global_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_set(this);
}

void CorundumParser::Global_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_set(this);
}

CorundumParser::Global_setContext* CorundumParser::global_set() {
  Global_setContext *_localctx = _tracker.createInstance<Global_setContext>(_ctx, getState());
  enterRule(_localctx, 8, CorundumParser::RuleGlobal_set);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    antlrcpp::downCast<Global_setContext *>(_localctx)->global_name = id_global();
    setState(180);
    antlrcpp::downCast<Global_setContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
    setState(181);
    antlrcpp::downCast<Global_setContext *>(_localctx)->result = all_result();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_resultContext ------------------------------------------------------------------

CorundumParser::Global_resultContext::Global_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_globalContext* CorundumParser::Global_resultContext::id_global() {
  return getRuleContext<CorundumParser::Id_globalContext>(0);
}


size_t CorundumParser::Global_resultContext::getRuleIndex() const {
  return CorundumParser::RuleGlobal_result;
}

void CorundumParser::Global_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_result(this);
}

void CorundumParser::Global_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_result(this);
}

CorundumParser::Global_resultContext* CorundumParser::global_result() {
  Global_resultContext *_localctx = _tracker.createInstance<Global_resultContext>(_ctx, getState());
  enterRule(_localctx, 10, CorundumParser::RuleGlobal_result);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    id_global();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_inline_callContext ------------------------------------------------------------------

CorundumParser::Function_inline_callContext::Function_inline_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_callContext* CorundumParser::Function_inline_callContext::function_call() {
  return getRuleContext<CorundumParser::Function_callContext>(0);
}


size_t CorundumParser::Function_inline_callContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_inline_call;
}

void CorundumParser::Function_inline_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_inline_call(this);
}

void CorundumParser::Function_inline_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_inline_call(this);
}

CorundumParser::Function_inline_callContext* CorundumParser::function_inline_call() {
  Function_inline_callContext *_localctx = _tracker.createInstance<Function_inline_callContext>(_ctx, getState());
  enterRule(_localctx, 12, CorundumParser::RuleFunction_inline_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    function_call();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Require_blockContext ------------------------------------------------------------------

CorundumParser::Require_blockContext::Require_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Require_blockContext::REQUIRE() {
  return getToken(CorundumParser::REQUIRE, 0);
}

CorundumParser::Literal_tContext* CorundumParser::Require_blockContext::literal_t() {
  return getRuleContext<CorundumParser::Literal_tContext>(0);
}


size_t CorundumParser::Require_blockContext::getRuleIndex() const {
  return CorundumParser::RuleRequire_block;
}

void CorundumParser::Require_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequire_block(this);
}

void CorundumParser::Require_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequire_block(this);
}

CorundumParser::Require_blockContext* CorundumParser::require_block() {
  Require_blockContext *_localctx = _tracker.createInstance<Require_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, CorundumParser::RuleRequire_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(CorundumParser::REQUIRE);
    setState(188);
    literal_t();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pir_inlineContext ------------------------------------------------------------------

CorundumParser::Pir_inlineContext::Pir_inlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Pir_inlineContext::PIR() {
  return getToken(CorundumParser::PIR, 0);
}

CorundumParser::CrlfContext* CorundumParser::Pir_inlineContext::crlf() {
  return getRuleContext<CorundumParser::CrlfContext>(0);
}

CorundumParser::Pir_expression_listContext* CorundumParser::Pir_inlineContext::pir_expression_list() {
  return getRuleContext<CorundumParser::Pir_expression_listContext>(0);
}

tree::TerminalNode* CorundumParser::Pir_inlineContext::END() {
  return getToken(CorundumParser::END, 0);
}


size_t CorundumParser::Pir_inlineContext::getRuleIndex() const {
  return CorundumParser::RulePir_inline;
}

void CorundumParser::Pir_inlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPir_inline(this);
}

void CorundumParser::Pir_inlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPir_inline(this);
}

CorundumParser::Pir_inlineContext* CorundumParser::pir_inline() {
  Pir_inlineContext *_localctx = _tracker.createInstance<Pir_inlineContext>(_ctx, getState());
  enterRule(_localctx, 16, CorundumParser::RulePir_inline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(CorundumParser::PIR);
    setState(191);
    crlf();
    setState(192);
    pir_expression_list();
    setState(193);
    match(CorundumParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pir_expression_listContext ------------------------------------------------------------------

CorundumParser::Pir_expression_listContext::Pir_expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Expression_listContext* CorundumParser::Pir_expression_listContext::expression_list() {
  return getRuleContext<CorundumParser::Expression_listContext>(0);
}


size_t CorundumParser::Pir_expression_listContext::getRuleIndex() const {
  return CorundumParser::RulePir_expression_list;
}

void CorundumParser::Pir_expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPir_expression_list(this);
}

void CorundumParser::Pir_expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPir_expression_list(this);
}

CorundumParser::Pir_expression_listContext* CorundumParser::pir_expression_list() {
  Pir_expression_listContext *_localctx = _tracker.createInstance<Pir_expression_listContext>(_ctx, getState());
  enterRule(_localctx, 18, CorundumParser::RulePir_expression_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    expression_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definitionContext ------------------------------------------------------------------

CorundumParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_definition_headerContext* CorundumParser::Function_definitionContext::function_definition_header() {
  return getRuleContext<CorundumParser::Function_definition_headerContext>(0);
}

CorundumParser::Function_definition_bodyContext* CorundumParser::Function_definitionContext::function_definition_body() {
  return getRuleContext<CorundumParser::Function_definition_bodyContext>(0);
}

tree::TerminalNode* CorundumParser::Function_definitionContext::END() {
  return getToken(CorundumParser::END, 0);
}


size_t CorundumParser::Function_definitionContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition;
}

void CorundumParser::Function_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition(this);
}

void CorundumParser::Function_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition(this);
}

CorundumParser::Function_definitionContext* CorundumParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 20, CorundumParser::RuleFunction_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    function_definition_header();
    setState(198);
    function_definition_body();
    setState(199);
    match(CorundumParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definition_bodyContext ------------------------------------------------------------------

CorundumParser::Function_definition_bodyContext::Function_definition_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Expression_listContext* CorundumParser::Function_definition_bodyContext::expression_list() {
  return getRuleContext<CorundumParser::Expression_listContext>(0);
}


size_t CorundumParser::Function_definition_bodyContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition_body;
}

void CorundumParser::Function_definition_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition_body(this);
}

void CorundumParser::Function_definition_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition_body(this);
}

CorundumParser::Function_definition_bodyContext* CorundumParser::function_definition_body() {
  Function_definition_bodyContext *_localctx = _tracker.createInstance<Function_definition_bodyContext>(_ctx, getState());
  enterRule(_localctx, 22, CorundumParser::RuleFunction_definition_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    expression_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definition_headerContext ------------------------------------------------------------------

CorundumParser::Function_definition_headerContext::Function_definition_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Function_definition_headerContext::DEF() {
  return getToken(CorundumParser::DEF, 0);
}

CorundumParser::Function_nameContext* CorundumParser::Function_definition_headerContext::function_name() {
  return getRuleContext<CorundumParser::Function_nameContext>(0);
}

CorundumParser::CrlfContext* CorundumParser::Function_definition_headerContext::crlf() {
  return getRuleContext<CorundumParser::CrlfContext>(0);
}

CorundumParser::Function_definition_paramsContext* CorundumParser::Function_definition_headerContext::function_definition_params() {
  return getRuleContext<CorundumParser::Function_definition_paramsContext>(0);
}


size_t CorundumParser::Function_definition_headerContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition_header;
}

void CorundumParser::Function_definition_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition_header(this);
}

void CorundumParser::Function_definition_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition_header(this);
}

CorundumParser::Function_definition_headerContext* CorundumParser::function_definition_header() {
  Function_definition_headerContext *_localctx = _tracker.createInstance<Function_definition_headerContext>(_ctx, getState());
  enterRule(_localctx, 24, CorundumParser::RuleFunction_definition_header);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(203);
      match(CorundumParser::DEF);
      setState(204);
      function_name();
      setState(205);
      crlf();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(207);
      match(CorundumParser::DEF);
      setState(208);
      function_name();
      setState(209);
      function_definition_params();
      setState(210);
      crlf();
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

//----------------- Function_nameContext ------------------------------------------------------------------

CorundumParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_functionContext* CorundumParser::Function_nameContext::id_function() {
  return getRuleContext<CorundumParser::Id_functionContext>(0);
}

CorundumParser::Id_Context* CorundumParser::Function_nameContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}


size_t CorundumParser::Function_nameContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_name;
}

void CorundumParser::Function_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_name(this);
}

void CorundumParser::Function_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_name(this);
}

CorundumParser::Function_nameContext* CorundumParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 26, CorundumParser::RuleFunction_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(216);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::ID_FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(214);
        id_function();
        break;
      }

      case CorundumParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(215);
        id_();
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

//----------------- Function_definition_paramsContext ------------------------------------------------------------------

CorundumParser::Function_definition_paramsContext::Function_definition_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Function_definition_paramsContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Function_definition_paramsContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::Function_definition_params_listContext* CorundumParser::Function_definition_paramsContext::function_definition_params_list() {
  return getRuleContext<CorundumParser::Function_definition_params_listContext>(0);
}


size_t CorundumParser::Function_definition_paramsContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition_params;
}

void CorundumParser::Function_definition_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition_params(this);
}

void CorundumParser::Function_definition_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition_params(this);
}

CorundumParser::Function_definition_paramsContext* CorundumParser::function_definition_params() {
  Function_definition_paramsContext *_localctx = _tracker.createInstance<Function_definition_paramsContext>(_ctx, getState());
  enterRule(_localctx, 28, CorundumParser::RuleFunction_definition_params);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(218);
      match(CorundumParser::LEFT_RBRACKET);
      setState(219);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(220);
      match(CorundumParser::LEFT_RBRACKET);
      setState(221);
      function_definition_params_list(0);
      setState(222);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(224);
      function_definition_params_list(0);
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

//----------------- Function_definition_params_listContext ------------------------------------------------------------------

CorundumParser::Function_definition_params_listContext::Function_definition_params_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_definition_param_idContext* CorundumParser::Function_definition_params_listContext::function_definition_param_id() {
  return getRuleContext<CorundumParser::Function_definition_param_idContext>(0);
}

CorundumParser::Function_definition_params_listContext* CorundumParser::Function_definition_params_listContext::function_definition_params_list() {
  return getRuleContext<CorundumParser::Function_definition_params_listContext>(0);
}

tree::TerminalNode* CorundumParser::Function_definition_params_listContext::COMMA() {
  return getToken(CorundumParser::COMMA, 0);
}


size_t CorundumParser::Function_definition_params_listContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition_params_list;
}

void CorundumParser::Function_definition_params_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition_params_list(this);
}

void CorundumParser::Function_definition_params_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition_params_list(this);
}


CorundumParser::Function_definition_params_listContext* CorundumParser::function_definition_params_list() {
   return function_definition_params_list(0);
}

CorundumParser::Function_definition_params_listContext* CorundumParser::function_definition_params_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Function_definition_params_listContext *_localctx = _tracker.createInstance<Function_definition_params_listContext>(_ctx, parentState);
  CorundumParser::Function_definition_params_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CorundumParser::RuleFunction_definition_params_list, precedence);

    

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
    setState(228);
    function_definition_param_id();
    _ctx->stop = _input->LT(-1);
    setState(235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Function_definition_params_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFunction_definition_params_list);
        setState(230);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(231);
        match(CorundumParser::COMMA);
        setState(232);
        function_definition_param_id(); 
      }
      setState(237);
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

//----------------- Function_definition_param_idContext ------------------------------------------------------------------

CorundumParser::Function_definition_param_idContext::Function_definition_param_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_Context* CorundumParser::Function_definition_param_idContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}


size_t CorundumParser::Function_definition_param_idContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_definition_param_id;
}

void CorundumParser::Function_definition_param_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_definition_param_id(this);
}

void CorundumParser::Function_definition_param_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_definition_param_id(this);
}

CorundumParser::Function_definition_param_idContext* CorundumParser::function_definition_param_id() {
  Function_definition_param_idContext *_localctx = _tracker.createInstance<Function_definition_param_idContext>(_ctx, getState());
  enterRule(_localctx, 32, CorundumParser::RuleFunction_definition_param_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    id_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

CorundumParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Return_statementContext::RETURN() {
  return getToken(CorundumParser::RETURN, 0);
}

CorundumParser::All_resultContext* CorundumParser::Return_statementContext::all_result() {
  return getRuleContext<CorundumParser::All_resultContext>(0);
}


size_t CorundumParser::Return_statementContext::getRuleIndex() const {
  return CorundumParser::RuleReturn_statement;
}

void CorundumParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void CorundumParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}

CorundumParser::Return_statementContext* CorundumParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, CorundumParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(CorundumParser::RETURN);
    setState(241);
    all_result();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

CorundumParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Function_callContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Function_callContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::Function_nameContext* CorundumParser::Function_callContext::function_name() {
  return getRuleContext<CorundumParser::Function_nameContext>(0);
}

CorundumParser::Function_call_param_listContext* CorundumParser::Function_callContext::function_call_param_list() {
  return getRuleContext<CorundumParser::Function_call_param_listContext>(0);
}


size_t CorundumParser::Function_callContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_call;
}

void CorundumParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void CorundumParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}

CorundumParser::Function_callContext* CorundumParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 36, CorundumParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(243);
      antlrcpp::downCast<Function_callContext *>(_localctx)->name = function_name();
      setState(244);
      match(CorundumParser::LEFT_RBRACKET);
      setState(245);
      antlrcpp::downCast<Function_callContext *>(_localctx)->params = function_call_param_list();
      setState(246);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(248);
      antlrcpp::downCast<Function_callContext *>(_localctx)->name = function_name();
      setState(249);
      antlrcpp::downCast<Function_callContext *>(_localctx)->params = function_call_param_list();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(251);
      antlrcpp::downCast<Function_callContext *>(_localctx)->name = function_name();
      setState(252);
      match(CorundumParser::LEFT_RBRACKET);
      setState(253);
      match(CorundumParser::RIGHT_RBRACKET);
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

//----------------- Function_call_param_listContext ------------------------------------------------------------------

CorundumParser::Function_call_param_listContext::Function_call_param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_call_paramsContext* CorundumParser::Function_call_param_listContext::function_call_params() {
  return getRuleContext<CorundumParser::Function_call_paramsContext>(0);
}


size_t CorundumParser::Function_call_param_listContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_call_param_list;
}

void CorundumParser::Function_call_param_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_param_list(this);
}

void CorundumParser::Function_call_param_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_param_list(this);
}

CorundumParser::Function_call_param_listContext* CorundumParser::function_call_param_list() {
  Function_call_param_listContext *_localctx = _tracker.createInstance<Function_call_param_listContext>(_ctx, getState());
  enterRule(_localctx, 38, CorundumParser::RuleFunction_call_param_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    function_call_params(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_paramsContext ------------------------------------------------------------------

CorundumParser::Function_call_paramsContext::Function_call_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_paramContext* CorundumParser::Function_call_paramsContext::function_param() {
  return getRuleContext<CorundumParser::Function_paramContext>(0);
}

CorundumParser::Function_call_paramsContext* CorundumParser::Function_call_paramsContext::function_call_params() {
  return getRuleContext<CorundumParser::Function_call_paramsContext>(0);
}

tree::TerminalNode* CorundumParser::Function_call_paramsContext::COMMA() {
  return getToken(CorundumParser::COMMA, 0);
}


size_t CorundumParser::Function_call_paramsContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_call_params;
}

void CorundumParser::Function_call_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_params(this);
}

void CorundumParser::Function_call_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_params(this);
}


CorundumParser::Function_call_paramsContext* CorundumParser::function_call_params() {
   return function_call_params(0);
}

CorundumParser::Function_call_paramsContext* CorundumParser::function_call_params(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Function_call_paramsContext *_localctx = _tracker.createInstance<Function_call_paramsContext>(_ctx, parentState);
  CorundumParser::Function_call_paramsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CorundumParser::RuleFunction_call_params, precedence);

    

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
    setState(260);
    function_param();
    _ctx->stop = _input->LT(-1);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Function_call_paramsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFunction_call_params);
        setState(262);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(263);
        match(CorundumParser::COMMA);
        setState(264);
        function_param(); 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Function_paramContext ------------------------------------------------------------------

CorundumParser::Function_paramContext::Function_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_unnamed_paramContext* CorundumParser::Function_paramContext::function_unnamed_param() {
  return getRuleContext<CorundumParser::Function_unnamed_paramContext>(0);
}

CorundumParser::Function_named_paramContext* CorundumParser::Function_paramContext::function_named_param() {
  return getRuleContext<CorundumParser::Function_named_paramContext>(0);
}


size_t CorundumParser::Function_paramContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_param;
}

void CorundumParser::Function_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_param(this);
}

void CorundumParser::Function_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_param(this);
}

CorundumParser::Function_paramContext* CorundumParser::function_param() {
  Function_paramContext *_localctx = _tracker.createInstance<Function_paramContext>(_ctx, getState());
  enterRule(_localctx, 42, CorundumParser::RuleFunction_param);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(270);
      function_unnamed_param();
      break;
    }

    case 2: {
      setState(271);
      function_named_param();
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

//----------------- Function_unnamed_paramContext ------------------------------------------------------------------

CorundumParser::Function_unnamed_paramContext::Function_unnamed_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::Function_unnamed_paramContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Float_resultContext* CorundumParser::Function_unnamed_paramContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::String_resultContext* CorundumParser::Function_unnamed_paramContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::Function_unnamed_paramContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}


size_t CorundumParser::Function_unnamed_paramContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_unnamed_param;
}

void CorundumParser::Function_unnamed_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_unnamed_param(this);
}

void CorundumParser::Function_unnamed_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_unnamed_param(this);
}

CorundumParser::Function_unnamed_paramContext* CorundumParser::function_unnamed_param() {
  Function_unnamed_paramContext *_localctx = _tracker.createInstance<Function_unnamed_paramContext>(_ctx, getState());
  enterRule(_localctx, 44, CorundumParser::RuleFunction_unnamed_param);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(274);
      int_result(0);
      break;
    }

    case 2: {
      setState(275);
      float_result(0);
      break;
    }

    case 3: {
      setState(276);
      string_result(0);
      break;
    }

    case 4: {
      setState(277);
      dynamic_result(0);
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

//----------------- Function_named_paramContext ------------------------------------------------------------------

CorundumParser::Function_named_paramContext::Function_named_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_Context* CorundumParser::Function_named_paramContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}

tree::TerminalNode* CorundumParser::Function_named_paramContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

CorundumParser::Int_resultContext* CorundumParser::Function_named_paramContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Float_resultContext* CorundumParser::Function_named_paramContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::String_resultContext* CorundumParser::Function_named_paramContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::Function_named_paramContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}


size_t CorundumParser::Function_named_paramContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_named_param;
}

void CorundumParser::Function_named_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_named_param(this);
}

void CorundumParser::Function_named_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_named_param(this);
}

CorundumParser::Function_named_paramContext* CorundumParser::function_named_param() {
  Function_named_paramContext *_localctx = _tracker.createInstance<Function_named_paramContext>(_ctx, getState());
  enterRule(_localctx, 46, CorundumParser::RuleFunction_named_param);

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
    id_();
    setState(281);
    antlrcpp::downCast<Function_named_paramContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
    setState(286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(282);
      int_result(0);
      break;
    }

    case 2: {
      setState(283);
      float_result(0);
      break;
    }

    case 3: {
      setState(284);
      string_result(0);
      break;
    }

    case 4: {
      setState(285);
      dynamic_result(0);
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

//----------------- Function_call_assignmentContext ------------------------------------------------------------------

CorundumParser::Function_call_assignmentContext::Function_call_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Function_callContext* CorundumParser::Function_call_assignmentContext::function_call() {
  return getRuleContext<CorundumParser::Function_callContext>(0);
}


size_t CorundumParser::Function_call_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleFunction_call_assignment;
}

void CorundumParser::Function_call_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_assignment(this);
}

void CorundumParser::Function_call_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_assignment(this);
}

CorundumParser::Function_call_assignmentContext* CorundumParser::function_call_assignment() {
  Function_call_assignmentContext *_localctx = _tracker.createInstance<Function_call_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 48, CorundumParser::RuleFunction_call_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    function_call();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_resultContext ------------------------------------------------------------------

CorundumParser::All_resultContext::All_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::All_resultContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Float_resultContext* CorundumParser::All_resultContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::String_resultContext* CorundumParser::All_resultContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::All_resultContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}

CorundumParser::Global_resultContext* CorundumParser::All_resultContext::global_result() {
  return getRuleContext<CorundumParser::Global_resultContext>(0);
}


size_t CorundumParser::All_resultContext::getRuleIndex() const {
  return CorundumParser::RuleAll_result;
}

void CorundumParser::All_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_result(this);
}

void CorundumParser::All_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_result(this);
}

CorundumParser::All_resultContext* CorundumParser::all_result() {
  All_resultContext *_localctx = _tracker.createInstance<All_resultContext>(_ctx, getState());
  enterRule(_localctx, 50, CorundumParser::RuleAll_result);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(290);
      int_result(0);
      break;
    }

    case 2: {
      setState(291);
      float_result(0);
      break;
    }

    case 3: {
      setState(292);
      string_result(0);
      break;
    }

    case 4: {
      setState(293);
      dynamic_result(0);
      break;
    }

    case 5: {
      setState(294);
      global_result();
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

//----------------- Elsif_statementContext ------------------------------------------------------------------

CorundumParser::Elsif_statementContext::Elsif_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::If_elsif_statementContext* CorundumParser::Elsif_statementContext::if_elsif_statement() {
  return getRuleContext<CorundumParser::If_elsif_statementContext>(0);
}


size_t CorundumParser::Elsif_statementContext::getRuleIndex() const {
  return CorundumParser::RuleElsif_statement;
}

void CorundumParser::Elsif_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsif_statement(this);
}

void CorundumParser::Elsif_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsif_statement(this);
}

CorundumParser::Elsif_statementContext* CorundumParser::elsif_statement() {
  Elsif_statementContext *_localctx = _tracker.createInstance<Elsif_statementContext>(_ctx, getState());
  enterRule(_localctx, 52, CorundumParser::RuleElsif_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    if_elsif_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_elsif_statementContext ------------------------------------------------------------------

CorundumParser::If_elsif_statementContext::If_elsif_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::If_elsif_statementContext::ELSIF() {
  return getToken(CorundumParser::ELSIF, 0);
}

CorundumParser::Cond_expressionContext* CorundumParser::If_elsif_statementContext::cond_expression() {
  return getRuleContext<CorundumParser::Cond_expressionContext>(0);
}

std::vector<CorundumParser::CrlfContext *> CorundumParser::If_elsif_statementContext::crlf() {
  return getRuleContexts<CorundumParser::CrlfContext>();
}

CorundumParser::CrlfContext* CorundumParser::If_elsif_statementContext::crlf(size_t i) {
  return getRuleContext<CorundumParser::CrlfContext>(i);
}

std::vector<CorundumParser::Statement_bodyContext *> CorundumParser::If_elsif_statementContext::statement_body() {
  return getRuleContexts<CorundumParser::Statement_bodyContext>();
}

CorundumParser::Statement_bodyContext* CorundumParser::If_elsif_statementContext::statement_body(size_t i) {
  return getRuleContext<CorundumParser::Statement_bodyContext>(i);
}

CorundumParser::Else_tokenContext* CorundumParser::If_elsif_statementContext::else_token() {
  return getRuleContext<CorundumParser::Else_tokenContext>(0);
}

CorundumParser::If_elsif_statementContext* CorundumParser::If_elsif_statementContext::if_elsif_statement() {
  return getRuleContext<CorundumParser::If_elsif_statementContext>(0);
}


size_t CorundumParser::If_elsif_statementContext::getRuleIndex() const {
  return CorundumParser::RuleIf_elsif_statement;
}

void CorundumParser::If_elsif_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_elsif_statement(this);
}

void CorundumParser::If_elsif_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_elsif_statement(this);
}

CorundumParser::If_elsif_statementContext* CorundumParser::if_elsif_statement() {
  If_elsif_statementContext *_localctx = _tracker.createInstance<If_elsif_statementContext>(_ctx, getState());
  enterRule(_localctx, 54, CorundumParser::RuleIf_elsif_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(299);
      match(CorundumParser::ELSIF);
      setState(300);
      cond_expression();
      setState(301);
      crlf();
      setState(302);
      statement_body();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(304);
      match(CorundumParser::ELSIF);
      setState(305);
      cond_expression();
      setState(306);
      crlf();
      setState(307);
      statement_body();
      setState(308);
      else_token();
      setState(309);
      crlf();
      setState(310);
      statement_body();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(312);
      match(CorundumParser::ELSIF);
      setState(313);
      cond_expression();
      setState(314);
      crlf();
      setState(315);
      statement_body();
      setState(316);
      if_elsif_statement();
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

//----------------- If_statementContext ------------------------------------------------------------------

CorundumParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::If_statementContext::IF() {
  return getToken(CorundumParser::IF, 0);
}

CorundumParser::Cond_expressionContext* CorundumParser::If_statementContext::cond_expression() {
  return getRuleContext<CorundumParser::Cond_expressionContext>(0);
}

std::vector<CorundumParser::CrlfContext *> CorundumParser::If_statementContext::crlf() {
  return getRuleContexts<CorundumParser::CrlfContext>();
}

CorundumParser::CrlfContext* CorundumParser::If_statementContext::crlf(size_t i) {
  return getRuleContext<CorundumParser::CrlfContext>(i);
}

std::vector<CorundumParser::Statement_bodyContext *> CorundumParser::If_statementContext::statement_body() {
  return getRuleContexts<CorundumParser::Statement_bodyContext>();
}

CorundumParser::Statement_bodyContext* CorundumParser::If_statementContext::statement_body(size_t i) {
  return getRuleContext<CorundumParser::Statement_bodyContext>(i);
}

tree::TerminalNode* CorundumParser::If_statementContext::END() {
  return getToken(CorundumParser::END, 0);
}

CorundumParser::Else_tokenContext* CorundumParser::If_statementContext::else_token() {
  return getRuleContext<CorundumParser::Else_tokenContext>(0);
}

CorundumParser::Elsif_statementContext* CorundumParser::If_statementContext::elsif_statement() {
  return getRuleContext<CorundumParser::Elsif_statementContext>(0);
}


size_t CorundumParser::If_statementContext::getRuleIndex() const {
  return CorundumParser::RuleIf_statement;
}

void CorundumParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void CorundumParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

CorundumParser::If_statementContext* CorundumParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 56, CorundumParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(342);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(320);
      match(CorundumParser::IF);
      setState(321);
      cond_expression();
      setState(322);
      crlf();
      setState(323);
      statement_body();
      setState(324);
      match(CorundumParser::END);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(326);
      match(CorundumParser::IF);
      setState(327);
      cond_expression();
      setState(328);
      crlf();
      setState(329);
      statement_body();
      setState(330);
      else_token();
      setState(331);
      crlf();
      setState(332);
      statement_body();
      setState(333);
      match(CorundumParser::END);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(335);
      match(CorundumParser::IF);
      setState(336);
      cond_expression();
      setState(337);
      crlf();
      setState(338);
      statement_body();
      setState(339);
      elsif_statement();
      setState(340);
      match(CorundumParser::END);
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

//----------------- Unless_statementContext ------------------------------------------------------------------

CorundumParser::Unless_statementContext::Unless_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Unless_statementContext::UNLESS() {
  return getToken(CorundumParser::UNLESS, 0);
}

CorundumParser::Cond_expressionContext* CorundumParser::Unless_statementContext::cond_expression() {
  return getRuleContext<CorundumParser::Cond_expressionContext>(0);
}

std::vector<CorundumParser::CrlfContext *> CorundumParser::Unless_statementContext::crlf() {
  return getRuleContexts<CorundumParser::CrlfContext>();
}

CorundumParser::CrlfContext* CorundumParser::Unless_statementContext::crlf(size_t i) {
  return getRuleContext<CorundumParser::CrlfContext>(i);
}

std::vector<CorundumParser::Statement_bodyContext *> CorundumParser::Unless_statementContext::statement_body() {
  return getRuleContexts<CorundumParser::Statement_bodyContext>();
}

CorundumParser::Statement_bodyContext* CorundumParser::Unless_statementContext::statement_body(size_t i) {
  return getRuleContext<CorundumParser::Statement_bodyContext>(i);
}

tree::TerminalNode* CorundumParser::Unless_statementContext::END() {
  return getToken(CorundumParser::END, 0);
}

CorundumParser::Else_tokenContext* CorundumParser::Unless_statementContext::else_token() {
  return getRuleContext<CorundumParser::Else_tokenContext>(0);
}

CorundumParser::Elsif_statementContext* CorundumParser::Unless_statementContext::elsif_statement() {
  return getRuleContext<CorundumParser::Elsif_statementContext>(0);
}


size_t CorundumParser::Unless_statementContext::getRuleIndex() const {
  return CorundumParser::RuleUnless_statement;
}

void CorundumParser::Unless_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnless_statement(this);
}

void CorundumParser::Unless_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnless_statement(this);
}

CorundumParser::Unless_statementContext* CorundumParser::unless_statement() {
  Unless_statementContext *_localctx = _tracker.createInstance<Unless_statementContext>(_ctx, getState());
  enterRule(_localctx, 58, CorundumParser::RuleUnless_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(344);
      match(CorundumParser::UNLESS);
      setState(345);
      cond_expression();
      setState(346);
      crlf();
      setState(347);
      statement_body();
      setState(348);
      match(CorundumParser::END);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(350);
      match(CorundumParser::UNLESS);
      setState(351);
      cond_expression();
      setState(352);
      crlf();
      setState(353);
      statement_body();
      setState(354);
      else_token();
      setState(355);
      crlf();
      setState(356);
      statement_body();
      setState(357);
      match(CorundumParser::END);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(359);
      match(CorundumParser::UNLESS);
      setState(360);
      cond_expression();
      setState(361);
      crlf();
      setState(362);
      statement_body();
      setState(363);
      elsif_statement();
      setState(364);
      match(CorundumParser::END);
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

//----------------- While_statementContext ------------------------------------------------------------------

CorundumParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::While_statementContext::WHILE() {
  return getToken(CorundumParser::WHILE, 0);
}

CorundumParser::Cond_expressionContext* CorundumParser::While_statementContext::cond_expression() {
  return getRuleContext<CorundumParser::Cond_expressionContext>(0);
}

CorundumParser::CrlfContext* CorundumParser::While_statementContext::crlf() {
  return getRuleContext<CorundumParser::CrlfContext>(0);
}

CorundumParser::Statement_bodyContext* CorundumParser::While_statementContext::statement_body() {
  return getRuleContext<CorundumParser::Statement_bodyContext>(0);
}

tree::TerminalNode* CorundumParser::While_statementContext::END() {
  return getToken(CorundumParser::END, 0);
}


size_t CorundumParser::While_statementContext::getRuleIndex() const {
  return CorundumParser::RuleWhile_statement;
}

void CorundumParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void CorundumParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}

CorundumParser::While_statementContext* CorundumParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 60, CorundumParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(CorundumParser::WHILE);
    setState(369);
    cond_expression();
    setState(370);
    crlf();
    setState(371);
    statement_body();
    setState(372);
    match(CorundumParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

CorundumParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::For_statementContext::FOR() {
  return getToken(CorundumParser::FOR, 0);
}

tree::TerminalNode* CorundumParser::For_statementContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

CorundumParser::Init_expressionContext* CorundumParser::For_statementContext::init_expression() {
  return getRuleContext<CorundumParser::Init_expressionContext>(0);
}

std::vector<tree::TerminalNode *> CorundumParser::For_statementContext::SEMICOLON() {
  return getTokens(CorundumParser::SEMICOLON);
}

tree::TerminalNode* CorundumParser::For_statementContext::SEMICOLON(size_t i) {
  return getToken(CorundumParser::SEMICOLON, i);
}

CorundumParser::Cond_expressionContext* CorundumParser::For_statementContext::cond_expression() {
  return getRuleContext<CorundumParser::Cond_expressionContext>(0);
}

CorundumParser::Loop_expressionContext* CorundumParser::For_statementContext::loop_expression() {
  return getRuleContext<CorundumParser::Loop_expressionContext>(0);
}

tree::TerminalNode* CorundumParser::For_statementContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::CrlfContext* CorundumParser::For_statementContext::crlf() {
  return getRuleContext<CorundumParser::CrlfContext>(0);
}

CorundumParser::Statement_bodyContext* CorundumParser::For_statementContext::statement_body() {
  return getRuleContext<CorundumParser::Statement_bodyContext>(0);
}

tree::TerminalNode* CorundumParser::For_statementContext::END() {
  return getToken(CorundumParser::END, 0);
}


size_t CorundumParser::For_statementContext::getRuleIndex() const {
  return CorundumParser::RuleFor_statement;
}

void CorundumParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void CorundumParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}

CorundumParser::For_statementContext* CorundumParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 62, CorundumParser::RuleFor_statement);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(374);
      match(CorundumParser::FOR);
      setState(375);
      match(CorundumParser::LEFT_RBRACKET);
      setState(376);
      init_expression();
      setState(377);
      match(CorundumParser::SEMICOLON);
      setState(378);
      cond_expression();
      setState(379);
      match(CorundumParser::SEMICOLON);
      setState(380);
      loop_expression();
      setState(381);
      match(CorundumParser::RIGHT_RBRACKET);
      setState(382);
      crlf();
      setState(383);
      statement_body();
      setState(384);
      match(CorundumParser::END);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(386);
      match(CorundumParser::FOR);
      setState(387);
      init_expression();
      setState(388);
      match(CorundumParser::SEMICOLON);
      setState(389);
      cond_expression();
      setState(390);
      match(CorundumParser::SEMICOLON);
      setState(391);
      loop_expression();
      setState(392);
      crlf();
      setState(393);
      statement_body();
      setState(394);
      match(CorundumParser::END);
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

//----------------- Init_expressionContext ------------------------------------------------------------------

CorundumParser::Init_expressionContext::Init_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::For_init_listContext* CorundumParser::Init_expressionContext::for_init_list() {
  return getRuleContext<CorundumParser::For_init_listContext>(0);
}


size_t CorundumParser::Init_expressionContext::getRuleIndex() const {
  return CorundumParser::RuleInit_expression;
}

void CorundumParser::Init_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit_expression(this);
}

void CorundumParser::Init_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit_expression(this);
}

CorundumParser::Init_expressionContext* CorundumParser::init_expression() {
  Init_expressionContext *_localctx = _tracker.createInstance<Init_expressionContext>(_ctx, getState());
  enterRule(_localctx, 64, CorundumParser::RuleInit_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    for_init_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- All_assignmentContext ------------------------------------------------------------------

CorundumParser::All_assignmentContext::All_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_assignmentContext* CorundumParser::All_assignmentContext::int_assignment() {
  return getRuleContext<CorundumParser::Int_assignmentContext>(0);
}

CorundumParser::Float_assignmentContext* CorundumParser::All_assignmentContext::float_assignment() {
  return getRuleContext<CorundumParser::Float_assignmentContext>(0);
}

CorundumParser::String_assignmentContext* CorundumParser::All_assignmentContext::string_assignment() {
  return getRuleContext<CorundumParser::String_assignmentContext>(0);
}

CorundumParser::Dynamic_assignmentContext* CorundumParser::All_assignmentContext::dynamic_assignment() {
  return getRuleContext<CorundumParser::Dynamic_assignmentContext>(0);
}


size_t CorundumParser::All_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleAll_assignment;
}

void CorundumParser::All_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAll_assignment(this);
}

void CorundumParser::All_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAll_assignment(this);
}

CorundumParser::All_assignmentContext* CorundumParser::all_assignment() {
  All_assignmentContext *_localctx = _tracker.createInstance<All_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 66, CorundumParser::RuleAll_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(400);
      int_assignment();
      break;
    }

    case 2: {
      setState(401);
      float_assignment();
      break;
    }

    case 3: {
      setState(402);
      string_assignment();
      break;
    }

    case 4: {
      setState(403);
      dynamic_assignment();
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

//----------------- For_init_listContext ------------------------------------------------------------------

CorundumParser::For_init_listContext::For_init_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::All_assignmentContext* CorundumParser::For_init_listContext::all_assignment() {
  return getRuleContext<CorundumParser::All_assignmentContext>(0);
}

CorundumParser::For_init_listContext* CorundumParser::For_init_listContext::for_init_list() {
  return getRuleContext<CorundumParser::For_init_listContext>(0);
}

tree::TerminalNode* CorundumParser::For_init_listContext::COMMA() {
  return getToken(CorundumParser::COMMA, 0);
}


size_t CorundumParser::For_init_listContext::getRuleIndex() const {
  return CorundumParser::RuleFor_init_list;
}

void CorundumParser::For_init_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_init_list(this);
}

void CorundumParser::For_init_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_init_list(this);
}


CorundumParser::For_init_listContext* CorundumParser::for_init_list() {
   return for_init_list(0);
}

CorundumParser::For_init_listContext* CorundumParser::for_init_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::For_init_listContext *_localctx = _tracker.createInstance<For_init_listContext>(_ctx, parentState);
  CorundumParser::For_init_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, CorundumParser::RuleFor_init_list, precedence);

    

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
    setState(407);
    all_assignment();
    _ctx->stop = _input->LT(-1);
    setState(414);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<For_init_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFor_init_list);
        setState(409);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(410);
        match(CorundumParser::COMMA);
        setState(411);
        all_assignment(); 
      }
      setState(416);
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

//----------------- Cond_expressionContext ------------------------------------------------------------------

CorundumParser::Cond_expressionContext::Cond_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Comparison_listContext* CorundumParser::Cond_expressionContext::comparison_list() {
  return getRuleContext<CorundumParser::Comparison_listContext>(0);
}


size_t CorundumParser::Cond_expressionContext::getRuleIndex() const {
  return CorundumParser::RuleCond_expression;
}

void CorundumParser::Cond_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_expression(this);
}

void CorundumParser::Cond_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_expression(this);
}

CorundumParser::Cond_expressionContext* CorundumParser::cond_expression() {
  Cond_expressionContext *_localctx = _tracker.createInstance<Cond_expressionContext>(_ctx, getState());
  enterRule(_localctx, 70, CorundumParser::RuleCond_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    comparison_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_expressionContext ------------------------------------------------------------------

CorundumParser::Loop_expressionContext::Loop_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::For_loop_listContext* CorundumParser::Loop_expressionContext::for_loop_list() {
  return getRuleContext<CorundumParser::For_loop_listContext>(0);
}


size_t CorundumParser::Loop_expressionContext::getRuleIndex() const {
  return CorundumParser::RuleLoop_expression;
}

void CorundumParser::Loop_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop_expression(this);
}

void CorundumParser::Loop_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop_expression(this);
}

CorundumParser::Loop_expressionContext* CorundumParser::loop_expression() {
  Loop_expressionContext *_localctx = _tracker.createInstance<Loop_expressionContext>(_ctx, getState());
  enterRule(_localctx, 72, CorundumParser::RuleLoop_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    for_loop_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_loop_listContext ------------------------------------------------------------------

CorundumParser::For_loop_listContext::For_loop_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::All_assignmentContext* CorundumParser::For_loop_listContext::all_assignment() {
  return getRuleContext<CorundumParser::All_assignmentContext>(0);
}

CorundumParser::For_loop_listContext* CorundumParser::For_loop_listContext::for_loop_list() {
  return getRuleContext<CorundumParser::For_loop_listContext>(0);
}

tree::TerminalNode* CorundumParser::For_loop_listContext::COMMA() {
  return getToken(CorundumParser::COMMA, 0);
}


size_t CorundumParser::For_loop_listContext::getRuleIndex() const {
  return CorundumParser::RuleFor_loop_list;
}

void CorundumParser::For_loop_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_loop_list(this);
}

void CorundumParser::For_loop_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_loop_list(this);
}


CorundumParser::For_loop_listContext* CorundumParser::for_loop_list() {
   return for_loop_list(0);
}

CorundumParser::For_loop_listContext* CorundumParser::for_loop_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::For_loop_listContext *_localctx = _tracker.createInstance<For_loop_listContext>(_ctx, parentState);
  CorundumParser::For_loop_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CorundumParser::RuleFor_loop_list, precedence);

    

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
    setState(422);
    all_assignment();
    _ctx->stop = _input->LT(-1);
    setState(429);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<For_loop_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFor_loop_list);
        setState(424);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(425);
        match(CorundumParser::COMMA);
        setState(426);
        all_assignment(); 
      }
      setState(431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Statement_bodyContext ------------------------------------------------------------------

CorundumParser::Statement_bodyContext::Statement_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Statement_expression_listContext* CorundumParser::Statement_bodyContext::statement_expression_list() {
  return getRuleContext<CorundumParser::Statement_expression_listContext>(0);
}


size_t CorundumParser::Statement_bodyContext::getRuleIndex() const {
  return CorundumParser::RuleStatement_body;
}

void CorundumParser::Statement_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_body(this);
}

void CorundumParser::Statement_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_body(this);
}

CorundumParser::Statement_bodyContext* CorundumParser::statement_body() {
  Statement_bodyContext *_localctx = _tracker.createInstance<Statement_bodyContext>(_ctx, getState());
  enterRule(_localctx, 76, CorundumParser::RuleStatement_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    statement_expression_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_expression_listContext ------------------------------------------------------------------

CorundumParser::Statement_expression_listContext::Statement_expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::ExpressionContext* CorundumParser::Statement_expression_listContext::expression() {
  return getRuleContext<CorundumParser::ExpressionContext>(0);
}

CorundumParser::TerminatorContext* CorundumParser::Statement_expression_listContext::terminator() {
  return getRuleContext<CorundumParser::TerminatorContext>(0);
}

tree::TerminalNode* CorundumParser::Statement_expression_listContext::RETRY() {
  return getToken(CorundumParser::RETRY, 0);
}

CorundumParser::Break_expressionContext* CorundumParser::Statement_expression_listContext::break_expression() {
  return getRuleContext<CorundumParser::Break_expressionContext>(0);
}

CorundumParser::Statement_expression_listContext* CorundumParser::Statement_expression_listContext::statement_expression_list() {
  return getRuleContext<CorundumParser::Statement_expression_listContext>(0);
}


size_t CorundumParser::Statement_expression_listContext::getRuleIndex() const {
  return CorundumParser::RuleStatement_expression_list;
}

void CorundumParser::Statement_expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_expression_list(this);
}

void CorundumParser::Statement_expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_expression_list(this);
}


CorundumParser::Statement_expression_listContext* CorundumParser::statement_expression_list() {
   return statement_expression_list(0);
}

CorundumParser::Statement_expression_listContext* CorundumParser::statement_expression_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Statement_expression_listContext *_localctx = _tracker.createInstance<Statement_expression_listContext>(_ctx, parentState);
  CorundumParser::Statement_expression_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, CorundumParser::RuleStatement_expression_list, precedence);

    

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
    setState(443);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::LITERAL:
      case CorundumParser::REQUIRE:
      case CorundumParser::DEF:
      case CorundumParser::RETURN:
      case CorundumParser::PIR:
      case CorundumParser::IF:
      case CorundumParser::UNLESS:
      case CorundumParser::WHILE:
      case CorundumParser::FOR:
      case CorundumParser::TRUE:
      case CorundumParser::FALSE:
      case CorundumParser::BIT_NOT:
      case CorundumParser::NOT:
      case CorundumParser::LEFT_RBRACKET:
      case CorundumParser::NIL:
      case CorundumParser::INT:
      case CorundumParser::FLOAT:
      case CorundumParser::ID:
      case CorundumParser::ID_GLOBAL:
      case CorundumParser::ID_FUNCTION: {
        setState(435);
        expression();
        setState(436);
        terminator(0);
        break;
      }

      case CorundumParser::RETRY: {
        setState(438);
        match(CorundumParser::RETRY);
        setState(439);
        terminator(0);
        break;
      }

      case CorundumParser::BREAK: {
        setState(440);
        break_expression();
        setState(441);
        terminator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(458);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(456);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Statement_expression_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleStatement_expression_list);
          setState(445);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(446);
          expression();
          setState(447);
          terminator(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Statement_expression_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleStatement_expression_list);
          setState(449);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(450);
          match(CorundumParser::RETRY);
          setState(451);
          terminator(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Statement_expression_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleStatement_expression_list);
          setState(452);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(453);
          break_expression();
          setState(454);
          terminator(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(460);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CorundumParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::RvalueContext* CorundumParser::AssignmentContext::rvalue() {
  return getRuleContext<CorundumParser::RvalueContext>(0);
}

CorundumParser::LvalueContext* CorundumParser::AssignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::PLUS_ASSIGN() {
  return getToken(CorundumParser::PLUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::MINUS_ASSIGN() {
  return getToken(CorundumParser::MINUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::MUL_ASSIGN() {
  return getToken(CorundumParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::DIV_ASSIGN() {
  return getToken(CorundumParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::MOD_ASSIGN() {
  return getToken(CorundumParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::AssignmentContext::EXP_ASSIGN() {
  return getToken(CorundumParser::EXP_ASSIGN, 0);
}


size_t CorundumParser::AssignmentContext::getRuleIndex() const {
  return CorundumParser::RuleAssignment;
}

void CorundumParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CorundumParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

CorundumParser::AssignmentContext* CorundumParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 80, CorundumParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(461);
      antlrcpp::downCast<AssignmentContext *>(_localctx)->var_id = lvalue();
      setState(462);
      antlrcpp::downCast<AssignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
      setState(463);
      rvalue(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(465);
      antlrcpp::downCast<AssignmentContext *>(_localctx)->var_id = lvalue();
      setState(466);
      antlrcpp::downCast<AssignmentContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 541165879296) != 0))) {
        antlrcpp::downCast<AssignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(467);
      rvalue(0);
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

//----------------- Dynamic_assignmentContext ------------------------------------------------------------------

CorundumParser::Dynamic_assignmentContext::Dynamic_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Dynamic_resultContext* CorundumParser::Dynamic_assignmentContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}

CorundumParser::LvalueContext* CorundumParser::Dynamic_assignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::PLUS_ASSIGN() {
  return getToken(CorundumParser::PLUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::MINUS_ASSIGN() {
  return getToken(CorundumParser::MINUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::MUL_ASSIGN() {
  return getToken(CorundumParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::DIV_ASSIGN() {
  return getToken(CorundumParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::MOD_ASSIGN() {
  return getToken(CorundumParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_assignmentContext::EXP_ASSIGN() {
  return getToken(CorundumParser::EXP_ASSIGN, 0);
}


size_t CorundumParser::Dynamic_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleDynamic_assignment;
}

void CorundumParser::Dynamic_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamic_assignment(this);
}

void CorundumParser::Dynamic_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamic_assignment(this);
}

CorundumParser::Dynamic_assignmentContext* CorundumParser::dynamic_assignment() {
  Dynamic_assignmentContext *_localctx = _tracker.createInstance<Dynamic_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 82, CorundumParser::RuleDynamic_assignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(479);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(471);
      antlrcpp::downCast<Dynamic_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(472);
      antlrcpp::downCast<Dynamic_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
      setState(473);
      dynamic_result(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(475);
      antlrcpp::downCast<Dynamic_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(476);
      antlrcpp::downCast<Dynamic_assignmentContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 541165879296) != 0))) {
        antlrcpp::downCast<Dynamic_assignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(477);
      dynamic_result(0);
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

//----------------- Int_assignmentContext ------------------------------------------------------------------

CorundumParser::Int_assignmentContext::Int_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::Int_assignmentContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::LvalueContext* CorundumParser::Int_assignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::PLUS_ASSIGN() {
  return getToken(CorundumParser::PLUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::MINUS_ASSIGN() {
  return getToken(CorundumParser::MINUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::MUL_ASSIGN() {
  return getToken(CorundumParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::DIV_ASSIGN() {
  return getToken(CorundumParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::MOD_ASSIGN() {
  return getToken(CorundumParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Int_assignmentContext::EXP_ASSIGN() {
  return getToken(CorundumParser::EXP_ASSIGN, 0);
}


size_t CorundumParser::Int_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleInt_assignment;
}

void CorundumParser::Int_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_assignment(this);
}

void CorundumParser::Int_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_assignment(this);
}

CorundumParser::Int_assignmentContext* CorundumParser::int_assignment() {
  Int_assignmentContext *_localctx = _tracker.createInstance<Int_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 84, CorundumParser::RuleInt_assignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(481);
      antlrcpp::downCast<Int_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(482);
      antlrcpp::downCast<Int_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
      setState(483);
      int_result(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(485);
      antlrcpp::downCast<Int_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(486);
      antlrcpp::downCast<Int_assignmentContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 541165879296) != 0))) {
        antlrcpp::downCast<Int_assignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(487);
      int_result(0);
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

//----------------- Float_assignmentContext ------------------------------------------------------------------

CorundumParser::Float_assignmentContext::Float_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Float_resultContext* CorundumParser::Float_assignmentContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::LvalueContext* CorundumParser::Float_assignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::PLUS_ASSIGN() {
  return getToken(CorundumParser::PLUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::MINUS_ASSIGN() {
  return getToken(CorundumParser::MINUS_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::MUL_ASSIGN() {
  return getToken(CorundumParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::DIV_ASSIGN() {
  return getToken(CorundumParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::MOD_ASSIGN() {
  return getToken(CorundumParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::Float_assignmentContext::EXP_ASSIGN() {
  return getToken(CorundumParser::EXP_ASSIGN, 0);
}


size_t CorundumParser::Float_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleFloat_assignment;
}

void CorundumParser::Float_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_assignment(this);
}

void CorundumParser::Float_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_assignment(this);
}

CorundumParser::Float_assignmentContext* CorundumParser::float_assignment() {
  Float_assignmentContext *_localctx = _tracker.createInstance<Float_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 86, CorundumParser::RuleFloat_assignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(499);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(491);
      antlrcpp::downCast<Float_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(492);
      antlrcpp::downCast<Float_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
      setState(493);
      float_result(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(495);
      antlrcpp::downCast<Float_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(496);
      antlrcpp::downCast<Float_assignmentContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 541165879296) != 0))) {
        antlrcpp::downCast<Float_assignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(497);
      float_result(0);
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

//----------------- String_assignmentContext ------------------------------------------------------------------

CorundumParser::String_assignmentContext::String_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::String_resultContext* CorundumParser::String_assignmentContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

CorundumParser::LvalueContext* CorundumParser::String_assignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::String_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

tree::TerminalNode* CorundumParser::String_assignmentContext::PLUS_ASSIGN() {
  return getToken(CorundumParser::PLUS_ASSIGN, 0);
}


size_t CorundumParser::String_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleString_assignment;
}

void CorundumParser::String_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_assignment(this);
}

void CorundumParser::String_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_assignment(this);
}

CorundumParser::String_assignmentContext* CorundumParser::string_assignment() {
  String_assignmentContext *_localctx = _tracker.createInstance<String_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 88, CorundumParser::RuleString_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(509);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(501);
      antlrcpp::downCast<String_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(502);
      antlrcpp::downCast<String_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
      setState(503);
      string_result(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(505);
      antlrcpp::downCast<String_assignmentContext *>(_localctx)->var_id = lvalue();
      setState(506);
      antlrcpp::downCast<String_assignmentContext *>(_localctx)->op = match(CorundumParser::PLUS_ASSIGN);
      setState(507);
      string_result(0);
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

//----------------- Initial_array_assignmentContext ------------------------------------------------------------------

CorundumParser::Initial_array_assignmentContext::Initial_array_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Initial_array_assignmentContext::LEFT_SBRACKET() {
  return getToken(CorundumParser::LEFT_SBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Initial_array_assignmentContext::RIGHT_SBRACKET() {
  return getToken(CorundumParser::RIGHT_SBRACKET, 0);
}

CorundumParser::LvalueContext* CorundumParser::Initial_array_assignmentContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

tree::TerminalNode* CorundumParser::Initial_array_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}


size_t CorundumParser::Initial_array_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleInitial_array_assignment;
}

void CorundumParser::Initial_array_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitial_array_assignment(this);
}

void CorundumParser::Initial_array_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitial_array_assignment(this);
}

CorundumParser::Initial_array_assignmentContext* CorundumParser::initial_array_assignment() {
  Initial_array_assignmentContext *_localctx = _tracker.createInstance<Initial_array_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 90, CorundumParser::RuleInitial_array_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    antlrcpp::downCast<Initial_array_assignmentContext *>(_localctx)->var_id = lvalue();
    setState(512);
    antlrcpp::downCast<Initial_array_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
    setState(513);
    match(CorundumParser::LEFT_SBRACKET);
    setState(514);
    match(CorundumParser::RIGHT_SBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_assignmentContext ------------------------------------------------------------------

CorundumParser::Array_assignmentContext::Array_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Array_selectorContext* CorundumParser::Array_assignmentContext::array_selector() {
  return getRuleContext<CorundumParser::Array_selectorContext>(0);
}

tree::TerminalNode* CorundumParser::Array_assignmentContext::ASSIGN() {
  return getToken(CorundumParser::ASSIGN, 0);
}

CorundumParser::All_resultContext* CorundumParser::Array_assignmentContext::all_result() {
  return getRuleContext<CorundumParser::All_resultContext>(0);
}


size_t CorundumParser::Array_assignmentContext::getRuleIndex() const {
  return CorundumParser::RuleArray_assignment;
}

void CorundumParser::Array_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_assignment(this);
}

void CorundumParser::Array_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_assignment(this);
}

CorundumParser::Array_assignmentContext* CorundumParser::array_assignment() {
  Array_assignmentContext *_localctx = _tracker.createInstance<Array_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 92, CorundumParser::RuleArray_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    antlrcpp::downCast<Array_assignmentContext *>(_localctx)->arr_def = array_selector();
    setState(517);
    antlrcpp::downCast<Array_assignmentContext *>(_localctx)->op = match(CorundumParser::ASSIGN);
    setState(518);
    antlrcpp::downCast<Array_assignmentContext *>(_localctx)->arr_val = all_result();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_definitionContext ------------------------------------------------------------------

CorundumParser::Array_definitionContext::Array_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Array_definitionContext::LEFT_SBRACKET() {
  return getToken(CorundumParser::LEFT_SBRACKET, 0);
}

CorundumParser::Array_definition_elementsContext* CorundumParser::Array_definitionContext::array_definition_elements() {
  return getRuleContext<CorundumParser::Array_definition_elementsContext>(0);
}

tree::TerminalNode* CorundumParser::Array_definitionContext::RIGHT_SBRACKET() {
  return getToken(CorundumParser::RIGHT_SBRACKET, 0);
}


size_t CorundumParser::Array_definitionContext::getRuleIndex() const {
  return CorundumParser::RuleArray_definition;
}

void CorundumParser::Array_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_definition(this);
}

void CorundumParser::Array_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_definition(this);
}

CorundumParser::Array_definitionContext* CorundumParser::array_definition() {
  Array_definitionContext *_localctx = _tracker.createInstance<Array_definitionContext>(_ctx, getState());
  enterRule(_localctx, 94, CorundumParser::RuleArray_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(CorundumParser::LEFT_SBRACKET);
    setState(521);
    array_definition_elements(0);
    setState(522);
    match(CorundumParser::RIGHT_SBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_definition_elementsContext ------------------------------------------------------------------

CorundumParser::Array_definition_elementsContext::Array_definition_elementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::Array_definition_elementsContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::Array_definition_elementsContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}

CorundumParser::Array_definition_elementsContext* CorundumParser::Array_definition_elementsContext::array_definition_elements() {
  return getRuleContext<CorundumParser::Array_definition_elementsContext>(0);
}

tree::TerminalNode* CorundumParser::Array_definition_elementsContext::COMMA() {
  return getToken(CorundumParser::COMMA, 0);
}


size_t CorundumParser::Array_definition_elementsContext::getRuleIndex() const {
  return CorundumParser::RuleArray_definition_elements;
}

void CorundumParser::Array_definition_elementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_definition_elements(this);
}

void CorundumParser::Array_definition_elementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_definition_elements(this);
}


CorundumParser::Array_definition_elementsContext* CorundumParser::array_definition_elements() {
   return array_definition_elements(0);
}

CorundumParser::Array_definition_elementsContext* CorundumParser::array_definition_elements(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Array_definition_elementsContext *_localctx = _tracker.createInstance<Array_definition_elementsContext>(_ctx, parentState);
  CorundumParser::Array_definition_elementsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 96;
  enterRecursionRule(_localctx, 96, CorundumParser::RuleArray_definition_elements, precedence);

    

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
    setState(527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(525);
      int_result(0);
      break;
    }

    case 2: {
      setState(526);
      dynamic_result(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(537);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Array_definition_elementsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArray_definition_elements);
        setState(529);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(530);
        match(CorundumParser::COMMA);
        setState(533);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          setState(531);
          int_result(0);
          break;
        }

        case 2: {
          setState(532);
          dynamic_result(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(539);
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

//----------------- Array_selectorContext ------------------------------------------------------------------

CorundumParser::Array_selectorContext::Array_selectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_Context* CorundumParser::Array_selectorContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}

tree::TerminalNode* CorundumParser::Array_selectorContext::LEFT_SBRACKET() {
  return getToken(CorundumParser::LEFT_SBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Array_selectorContext::RIGHT_SBRACKET() {
  return getToken(CorundumParser::RIGHT_SBRACKET, 0);
}

CorundumParser::Int_resultContext* CorundumParser::Array_selectorContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::Array_selectorContext::dynamic_result() {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(0);
}

CorundumParser::Id_globalContext* CorundumParser::Array_selectorContext::id_global() {
  return getRuleContext<CorundumParser::Id_globalContext>(0);
}


size_t CorundumParser::Array_selectorContext::getRuleIndex() const {
  return CorundumParser::RuleArray_selector;
}

void CorundumParser::Array_selectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_selector(this);
}

void CorundumParser::Array_selectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_selector(this);
}

CorundumParser::Array_selectorContext* CorundumParser::array_selector() {
  Array_selectorContext *_localctx = _tracker.createInstance<Array_selectorContext>(_ctx, getState());
  enterRule(_localctx, 98, CorundumParser::RuleArray_selector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(556);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(540);
        id_();
        setState(541);
        match(CorundumParser::LEFT_SBRACKET);
        setState(544);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          setState(542);
          int_result(0);
          break;
        }

        case 2: {
          setState(543);
          dynamic_result(0);
          break;
        }

        default:
          break;
        }
        setState(546);
        match(CorundumParser::RIGHT_SBRACKET);
        break;
      }

      case CorundumParser::ID_GLOBAL: {
        enterOuterAlt(_localctx, 2);
        setState(548);
        id_global();
        setState(549);
        match(CorundumParser::LEFT_SBRACKET);
        setState(552);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          setState(550);
          int_result(0);
          break;
        }

        case 2: {
          setState(551);
          dynamic_result(0);
          break;
        }

        default:
          break;
        }
        setState(554);
        match(CorundumParser::RIGHT_SBRACKET);
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

//----------------- Dynamic_resultContext ------------------------------------------------------------------

CorundumParser::Dynamic_resultContext::Dynamic_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::Dynamic_resultContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

std::vector<CorundumParser::Dynamic_resultContext *> CorundumParser::Dynamic_resultContext::dynamic_result() {
  return getRuleContexts<CorundumParser::Dynamic_resultContext>();
}

CorundumParser::Dynamic_resultContext* CorundumParser::Dynamic_resultContext::dynamic_result(size_t i) {
  return getRuleContext<CorundumParser::Dynamic_resultContext>(i);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::MUL() {
  return getToken(CorundumParser::MUL, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::DIV() {
  return getToken(CorundumParser::DIV, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::MOD() {
  return getToken(CorundumParser::MOD, 0);
}

CorundumParser::Float_resultContext* CorundumParser::Dynamic_resultContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::String_resultContext* CorundumParser::Dynamic_resultContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::PLUS() {
  return getToken(CorundumParser::PLUS, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::MINUS() {
  return getToken(CorundumParser::MINUS, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Dynamic_resultContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::Dynamic_Context* CorundumParser::Dynamic_resultContext::dynamic_() {
  return getRuleContext<CorundumParser::Dynamic_Context>(0);
}


size_t CorundumParser::Dynamic_resultContext::getRuleIndex() const {
  return CorundumParser::RuleDynamic_result;
}

void CorundumParser::Dynamic_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamic_result(this);
}

void CorundumParser::Dynamic_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamic_result(this);
}


CorundumParser::Dynamic_resultContext* CorundumParser::dynamic_result() {
   return dynamic_result(0);
}

CorundumParser::Dynamic_resultContext* CorundumParser::dynamic_result(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Dynamic_resultContext *_localctx = _tracker.createInstance<Dynamic_resultContext>(_ctx, parentState);
  CorundumParser::Dynamic_resultContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, CorundumParser::RuleDynamic_result, precedence);

    size_t _la = 0;

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
    setState(584);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(559);
      int_result(0);
      setState(560);
      antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 29360128) != 0))) {
        antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(561);
      dynamic_result(13);
      break;
    }

    case 2: {
      setState(563);
      float_result(0);
      setState(564);
      antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 29360128) != 0))) {
        antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(565);
      dynamic_result(11);
      break;
    }

    case 3: {
      setState(567);
      string_result(0);
      setState(568);
      antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = match(CorundumParser::MUL);
      setState(569);
      dynamic_result(8);
      break;
    }

    case 4: {
      setState(571);
      int_result(0);
      setState(572);
      antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == CorundumParser::PLUS

      || _la == CorundumParser::MINUS)) {
        antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(573);
      dynamic_result(6);
      break;
    }

    case 5: {
      setState(575);
      float_result(0);
      setState(576);
      antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == CorundumParser::PLUS

      || _la == CorundumParser::MINUS)) {
        antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(577);
      dynamic_result(4);
      break;
    }

    case 6: {
      setState(579);
      match(CorundumParser::LEFT_RBRACKET);
      setState(580);
      dynamic_result(0);
      setState(581);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 7: {
      setState(583);
      dynamic_();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(609);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(607);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(586);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(587);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(588);
          dynamic_result(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(589);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(590);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(591);
          dynamic_result(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(592);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(593);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(594);
          int_result(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(595);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(596);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(597);
          float_result(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(598);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(599);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = match(CorundumParser::MUL);
          setState(600);
          string_result(0);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(601);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(602);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(603);
          int_result(0);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Dynamic_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDynamic_result);
          setState(604);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(605);
          antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Dynamic_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(606);
          float_result(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(611);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Dynamic_Context ------------------------------------------------------------------

CorundumParser::Dynamic_Context::Dynamic_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_Context* CorundumParser::Dynamic_Context::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}

CorundumParser::Function_call_assignmentContext* CorundumParser::Dynamic_Context::function_call_assignment() {
  return getRuleContext<CorundumParser::Function_call_assignmentContext>(0);
}

CorundumParser::Array_selectorContext* CorundumParser::Dynamic_Context::array_selector() {
  return getRuleContext<CorundumParser::Array_selectorContext>(0);
}


size_t CorundumParser::Dynamic_Context::getRuleIndex() const {
  return CorundumParser::RuleDynamic_;
}

void CorundumParser::Dynamic_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamic_(this);
}

void CorundumParser::Dynamic_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamic_(this);
}

CorundumParser::Dynamic_Context* CorundumParser::dynamic_() {
  Dynamic_Context *_localctx = _tracker.createInstance<Dynamic_Context>(_ctx, getState());
  enterRule(_localctx, 102, CorundumParser::RuleDynamic_);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(612);
      id_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(613);
      function_call_assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(614);
      array_selector();
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

//----------------- Int_resultContext ------------------------------------------------------------------

CorundumParser::Int_resultContext::Int_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Int_resultContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

std::vector<CorundumParser::Int_resultContext *> CorundumParser::Int_resultContext::int_result() {
  return getRuleContexts<CorundumParser::Int_resultContext>();
}

CorundumParser::Int_resultContext* CorundumParser::Int_resultContext::int_result(size_t i) {
  return getRuleContext<CorundumParser::Int_resultContext>(i);
}

tree::TerminalNode* CorundumParser::Int_resultContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::Int_tContext* CorundumParser::Int_resultContext::int_t() {
  return getRuleContext<CorundumParser::Int_tContext>(0);
}

tree::TerminalNode* CorundumParser::Int_resultContext::MUL() {
  return getToken(CorundumParser::MUL, 0);
}

tree::TerminalNode* CorundumParser::Int_resultContext::DIV() {
  return getToken(CorundumParser::DIV, 0);
}

tree::TerminalNode* CorundumParser::Int_resultContext::MOD() {
  return getToken(CorundumParser::MOD, 0);
}

tree::TerminalNode* CorundumParser::Int_resultContext::PLUS() {
  return getToken(CorundumParser::PLUS, 0);
}

tree::TerminalNode* CorundumParser::Int_resultContext::MINUS() {
  return getToken(CorundumParser::MINUS, 0);
}


size_t CorundumParser::Int_resultContext::getRuleIndex() const {
  return CorundumParser::RuleInt_result;
}

void CorundumParser::Int_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_result(this);
}

void CorundumParser::Int_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_result(this);
}


CorundumParser::Int_resultContext* CorundumParser::int_result() {
   return int_result(0);
}

CorundumParser::Int_resultContext* CorundumParser::int_result(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Int_resultContext *_localctx = _tracker.createInstance<Int_resultContext>(_ctx, parentState);
  CorundumParser::Int_resultContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, CorundumParser::RuleInt_result, precedence);

    size_t _la = 0;

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
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::LEFT_RBRACKET: {
        setState(618);
        match(CorundumParser::LEFT_RBRACKET);
        setState(619);
        int_result(0);
        setState(620);
        match(CorundumParser::RIGHT_RBRACKET);
        break;
      }

      case CorundumParser::INT: {
        setState(622);
        int_t();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(633);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(631);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Int_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInt_result);
          setState(625);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(626);
          antlrcpp::downCast<Int_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Int_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(627);
          int_result(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Int_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInt_result);
          setState(628);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(629);
          antlrcpp::downCast<Int_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Int_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(630);
          int_result(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(635);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Float_resultContext ------------------------------------------------------------------

CorundumParser::Float_resultContext::Float_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::Float_resultContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

std::vector<CorundumParser::Float_resultContext *> CorundumParser::Float_resultContext::float_result() {
  return getRuleContexts<CorundumParser::Float_resultContext>();
}

CorundumParser::Float_resultContext* CorundumParser::Float_resultContext::float_result(size_t i) {
  return getRuleContext<CorundumParser::Float_resultContext>(i);
}

tree::TerminalNode* CorundumParser::Float_resultContext::MUL() {
  return getToken(CorundumParser::MUL, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::DIV() {
  return getToken(CorundumParser::DIV, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::MOD() {
  return getToken(CorundumParser::MOD, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::PLUS() {
  return getToken(CorundumParser::PLUS, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::MINUS() {
  return getToken(CorundumParser::MINUS, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Float_resultContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

CorundumParser::Float_tContext* CorundumParser::Float_resultContext::float_t() {
  return getRuleContext<CorundumParser::Float_tContext>(0);
}


size_t CorundumParser::Float_resultContext::getRuleIndex() const {
  return CorundumParser::RuleFloat_result;
}

void CorundumParser::Float_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_result(this);
}

void CorundumParser::Float_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_result(this);
}


CorundumParser::Float_resultContext* CorundumParser::float_result() {
   return float_result(0);
}

CorundumParser::Float_resultContext* CorundumParser::float_result(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::Float_resultContext *_localctx = _tracker.createInstance<Float_resultContext>(_ctx, parentState);
  CorundumParser::Float_resultContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 106;
  enterRecursionRule(_localctx, 106, CorundumParser::RuleFloat_result, precedence);

    size_t _la = 0;

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
    setState(650);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(637);
      int_result(0);
      setState(638);
      antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 29360128) != 0))) {
        antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(639);
      float_result(7);
      break;
    }

    case 2: {
      setState(641);
      int_result(0);
      setState(642);
      antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == CorundumParser::PLUS

      || _la == CorundumParser::MINUS)) {
        antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(643);
      float_result(4);
      break;
    }

    case 3: {
      setState(645);
      match(CorundumParser::LEFT_RBRACKET);
      setState(646);
      float_result(0);
      setState(647);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 4: {
      setState(649);
      float_t();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(666);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(664);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Float_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFloat_result);
          setState(652);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(653);
          antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(654);
          float_result(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Float_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFloat_result);
          setState(655);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(656);
          antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(657);
          float_result(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Float_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFloat_result);
          setState(658);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(659);
          antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
            antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(660);
          int_result(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Float_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFloat_result);
          setState(661);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(662);
          antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
            antlrcpp::downCast<Float_resultContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(663);
          int_result(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(668);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- String_resultContext ------------------------------------------------------------------

CorundumParser::String_resultContext::String_resultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Int_resultContext* CorundumParser::String_resultContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

std::vector<CorundumParser::String_resultContext *> CorundumParser::String_resultContext::string_result() {
  return getRuleContexts<CorundumParser::String_resultContext>();
}

CorundumParser::String_resultContext* CorundumParser::String_resultContext::string_result(size_t i) {
  return getRuleContext<CorundumParser::String_resultContext>(i);
}

tree::TerminalNode* CorundumParser::String_resultContext::MUL() {
  return getToken(CorundumParser::MUL, 0);
}

CorundumParser::Literal_tContext* CorundumParser::String_resultContext::literal_t() {
  return getRuleContext<CorundumParser::Literal_tContext>(0);
}

tree::TerminalNode* CorundumParser::String_resultContext::PLUS() {
  return getToken(CorundumParser::PLUS, 0);
}


size_t CorundumParser::String_resultContext::getRuleIndex() const {
  return CorundumParser::RuleString_result;
}

void CorundumParser::String_resultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_result(this);
}

void CorundumParser::String_resultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_result(this);
}


CorundumParser::String_resultContext* CorundumParser::string_result() {
   return string_result(0);
}

CorundumParser::String_resultContext* CorundumParser::string_result(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::String_resultContext *_localctx = _tracker.createInstance<String_resultContext>(_ctx, parentState);
  CorundumParser::String_resultContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 108;
  enterRecursionRule(_localctx, 108, CorundumParser::RuleString_result, precedence);

    

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
    setState(675);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::LEFT_RBRACKET:
      case CorundumParser::INT: {
        setState(670);
        int_result(0);
        setState(671);
        antlrcpp::downCast<String_resultContext *>(_localctx)->op = match(CorundumParser::MUL);
        setState(672);
        string_result(3);
        break;
      }

      case CorundumParser::LITERAL: {
        setState(674);
        literal_t();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(685);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(683);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<String_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleString_result);
          setState(677);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(678);
          antlrcpp::downCast<String_resultContext *>(_localctx)->op = match(CorundumParser::PLUS);
          setState(679);
          string_result(3);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<String_resultContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleString_result);
          setState(680);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(681);
          antlrcpp::downCast<String_resultContext *>(_localctx)->op = match(CorundumParser::MUL);
          setState(682);
          int_result(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(687);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Comparison_listContext ------------------------------------------------------------------

CorundumParser::Comparison_listContext::Comparison_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::ComparisonContext* CorundumParser::Comparison_listContext::comparison() {
  return getRuleContext<CorundumParser::ComparisonContext>(0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::BIT_AND() {
  return getToken(CorundumParser::BIT_AND, 0);
}

CorundumParser::Comparison_listContext* CorundumParser::Comparison_listContext::comparison_list() {
  return getRuleContext<CorundumParser::Comparison_listContext>(0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::AND() {
  return getToken(CorundumParser::AND, 0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::BIT_OR() {
  return getToken(CorundumParser::BIT_OR, 0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::OR() {
  return getToken(CorundumParser::OR, 0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::Comparison_listContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}


size_t CorundumParser::Comparison_listContext::getRuleIndex() const {
  return CorundumParser::RuleComparison_list;
}

void CorundumParser::Comparison_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_list(this);
}

void CorundumParser::Comparison_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_list(this);
}

CorundumParser::Comparison_listContext* CorundumParser::comparison_list() {
  Comparison_listContext *_localctx = _tracker.createInstance<Comparison_listContext>(_ctx, getState());
  enterRule(_localctx, 110, CorundumParser::RuleComparison_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(709);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(688);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->left = comparison();
      setState(689);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->op = match(CorundumParser::BIT_AND);
      setState(690);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->right = comparison_list();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(692);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->left = comparison();
      setState(693);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->op = match(CorundumParser::AND);
      setState(694);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->right = comparison_list();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(696);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->left = comparison();
      setState(697);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->op = match(CorundumParser::BIT_OR);
      setState(698);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->right = comparison_list();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(700);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->left = comparison();
      setState(701);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->op = match(CorundumParser::OR);
      setState(702);
      antlrcpp::downCast<Comparison_listContext *>(_localctx)->right = comparison_list();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(704);
      match(CorundumParser::LEFT_RBRACKET);
      setState(705);
      comparison_list();
      setState(706);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(708);
      comparison();
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

//----------------- ComparisonContext ------------------------------------------------------------------

CorundumParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CorundumParser::Comp_varContext *> CorundumParser::ComparisonContext::comp_var() {
  return getRuleContexts<CorundumParser::Comp_varContext>();
}

CorundumParser::Comp_varContext* CorundumParser::ComparisonContext::comp_var(size_t i) {
  return getRuleContext<CorundumParser::Comp_varContext>(i);
}

tree::TerminalNode* CorundumParser::ComparisonContext::LESS() {
  return getToken(CorundumParser::LESS, 0);
}

tree::TerminalNode* CorundumParser::ComparisonContext::GREATER() {
  return getToken(CorundumParser::GREATER, 0);
}

tree::TerminalNode* CorundumParser::ComparisonContext::LESS_EQUAL() {
  return getToken(CorundumParser::LESS_EQUAL, 0);
}

tree::TerminalNode* CorundumParser::ComparisonContext::GREATER_EQUAL() {
  return getToken(CorundumParser::GREATER_EQUAL, 0);
}

tree::TerminalNode* CorundumParser::ComparisonContext::EQUAL() {
  return getToken(CorundumParser::EQUAL, 0);
}

tree::TerminalNode* CorundumParser::ComparisonContext::NOT_EQUAL() {
  return getToken(CorundumParser::NOT_EQUAL, 0);
}


size_t CorundumParser::ComparisonContext::getRuleIndex() const {
  return CorundumParser::RuleComparison;
}

void CorundumParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void CorundumParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

CorundumParser::ComparisonContext* CorundumParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 112, CorundumParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(719);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(711);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->left = comp_var();
      setState(712);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4026531840) != 0))) {
        antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(713);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->right = comp_var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(715);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->left = comp_var();
      setState(716);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == CorundumParser::EQUAL

      || _la == CorundumParser::NOT_EQUAL)) {
        antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(717);
      antlrcpp::downCast<ComparisonContext *>(_localctx)->right = comp_var();
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

//----------------- Comp_varContext ------------------------------------------------------------------

CorundumParser::Comp_varContext::Comp_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::All_resultContext* CorundumParser::Comp_varContext::all_result() {
  return getRuleContext<CorundumParser::All_resultContext>(0);
}

CorundumParser::Array_selectorContext* CorundumParser::Comp_varContext::array_selector() {
  return getRuleContext<CorundumParser::Array_selectorContext>(0);
}

CorundumParser::Id_Context* CorundumParser::Comp_varContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}


size_t CorundumParser::Comp_varContext::getRuleIndex() const {
  return CorundumParser::RuleComp_var;
}

void CorundumParser::Comp_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_var(this);
}

void CorundumParser::Comp_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_var(this);
}

CorundumParser::Comp_varContext* CorundumParser::comp_var() {
  Comp_varContext *_localctx = _tracker.createInstance<Comp_varContext>(_ctx, getState());
  enterRule(_localctx, 114, CorundumParser::RuleComp_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(724);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(721);
      all_result();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(722);
      array_selector();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(723);
      id_();
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

//----------------- LvalueContext ------------------------------------------------------------------

CorundumParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::Id_Context* CorundumParser::LvalueContext::id_() {
  return getRuleContext<CorundumParser::Id_Context>(0);
}


size_t CorundumParser::LvalueContext::getRuleIndex() const {
  return CorundumParser::RuleLvalue;
}

void CorundumParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void CorundumParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}

CorundumParser::LvalueContext* CorundumParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 116, CorundumParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(726);
    id_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RvalueContext ------------------------------------------------------------------

CorundumParser::RvalueContext::RvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CorundumParser::LvalueContext* CorundumParser::RvalueContext::lvalue() {
  return getRuleContext<CorundumParser::LvalueContext>(0);
}

CorundumParser::Initial_array_assignmentContext* CorundumParser::RvalueContext::initial_array_assignment() {
  return getRuleContext<CorundumParser::Initial_array_assignmentContext>(0);
}

CorundumParser::Array_assignmentContext* CorundumParser::RvalueContext::array_assignment() {
  return getRuleContext<CorundumParser::Array_assignmentContext>(0);
}

CorundumParser::Int_resultContext* CorundumParser::RvalueContext::int_result() {
  return getRuleContext<CorundumParser::Int_resultContext>(0);
}

CorundumParser::Float_resultContext* CorundumParser::RvalueContext::float_result() {
  return getRuleContext<CorundumParser::Float_resultContext>(0);
}

CorundumParser::String_resultContext* CorundumParser::RvalueContext::string_result() {
  return getRuleContext<CorundumParser::String_resultContext>(0);
}

CorundumParser::Global_setContext* CorundumParser::RvalueContext::global_set() {
  return getRuleContext<CorundumParser::Global_setContext>(0);
}

CorundumParser::Global_getContext* CorundumParser::RvalueContext::global_get() {
  return getRuleContext<CorundumParser::Global_getContext>(0);
}

CorundumParser::Dynamic_assignmentContext* CorundumParser::RvalueContext::dynamic_assignment() {
  return getRuleContext<CorundumParser::Dynamic_assignmentContext>(0);
}

CorundumParser::String_assignmentContext* CorundumParser::RvalueContext::string_assignment() {
  return getRuleContext<CorundumParser::String_assignmentContext>(0);
}

CorundumParser::Float_assignmentContext* CorundumParser::RvalueContext::float_assignment() {
  return getRuleContext<CorundumParser::Float_assignmentContext>(0);
}

CorundumParser::Int_assignmentContext* CorundumParser::RvalueContext::int_assignment() {
  return getRuleContext<CorundumParser::Int_assignmentContext>(0);
}

CorundumParser::AssignmentContext* CorundumParser::RvalueContext::assignment() {
  return getRuleContext<CorundumParser::AssignmentContext>(0);
}

CorundumParser::Function_callContext* CorundumParser::RvalueContext::function_call() {
  return getRuleContext<CorundumParser::Function_callContext>(0);
}

CorundumParser::Literal_tContext* CorundumParser::RvalueContext::literal_t() {
  return getRuleContext<CorundumParser::Literal_tContext>(0);
}

CorundumParser::Bool_tContext* CorundumParser::RvalueContext::bool_t() {
  return getRuleContext<CorundumParser::Bool_tContext>(0);
}

CorundumParser::Float_tContext* CorundumParser::RvalueContext::float_t() {
  return getRuleContext<CorundumParser::Float_tContext>(0);
}

CorundumParser::Int_tContext* CorundumParser::RvalueContext::int_t() {
  return getRuleContext<CorundumParser::Int_tContext>(0);
}

CorundumParser::Nil_tContext* CorundumParser::RvalueContext::nil_t() {
  return getRuleContext<CorundumParser::Nil_tContext>(0);
}

std::vector<CorundumParser::RvalueContext *> CorundumParser::RvalueContext::rvalue() {
  return getRuleContexts<CorundumParser::RvalueContext>();
}

CorundumParser::RvalueContext* CorundumParser::RvalueContext::rvalue(size_t i) {
  return getRuleContext<CorundumParser::RvalueContext>(i);
}

tree::TerminalNode* CorundumParser::RvalueContext::NOT() {
  return getToken(CorundumParser::NOT, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_NOT() {
  return getToken(CorundumParser::BIT_NOT, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::LEFT_RBRACKET() {
  return getToken(CorundumParser::LEFT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::RIGHT_RBRACKET() {
  return getToken(CorundumParser::RIGHT_RBRACKET, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::EXP() {
  return getToken(CorundumParser::EXP, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::MUL() {
  return getToken(CorundumParser::MUL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::DIV() {
  return getToken(CorundumParser::DIV, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::MOD() {
  return getToken(CorundumParser::MOD, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::PLUS() {
  return getToken(CorundumParser::PLUS, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::MINUS() {
  return getToken(CorundumParser::MINUS, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_SHL() {
  return getToken(CorundumParser::BIT_SHL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_SHR() {
  return getToken(CorundumParser::BIT_SHR, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_AND() {
  return getToken(CorundumParser::BIT_AND, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_OR() {
  return getToken(CorundumParser::BIT_OR, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::BIT_XOR() {
  return getToken(CorundumParser::BIT_XOR, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::LESS() {
  return getToken(CorundumParser::LESS, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::GREATER() {
  return getToken(CorundumParser::GREATER, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::LESS_EQUAL() {
  return getToken(CorundumParser::LESS_EQUAL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::GREATER_EQUAL() {
  return getToken(CorundumParser::GREATER_EQUAL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::EQUAL() {
  return getToken(CorundumParser::EQUAL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::NOT_EQUAL() {
  return getToken(CorundumParser::NOT_EQUAL, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::OR() {
  return getToken(CorundumParser::OR, 0);
}

tree::TerminalNode* CorundumParser::RvalueContext::AND() {
  return getToken(CorundumParser::AND, 0);
}


size_t CorundumParser::RvalueContext::getRuleIndex() const {
  return CorundumParser::RuleRvalue;
}

void CorundumParser::RvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRvalue(this);
}

void CorundumParser::RvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRvalue(this);
}


CorundumParser::RvalueContext* CorundumParser::rvalue() {
   return rvalue(0);
}

CorundumParser::RvalueContext* CorundumParser::rvalue(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::RvalueContext *_localctx = _tracker.createInstance<RvalueContext>(_ctx, parentState);
  CorundumParser::RvalueContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 118;
  enterRecursionRule(_localctx, 118, CorundumParser::RuleRvalue, precedence);

    size_t _la = 0;

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
    setState(754);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(729);
      lvalue();
      break;
    }

    case 2: {
      setState(730);
      initial_array_assignment();
      break;
    }

    case 3: {
      setState(731);
      array_assignment();
      break;
    }

    case 4: {
      setState(732);
      int_result(0);
      break;
    }

    case 5: {
      setState(733);
      float_result(0);
      break;
    }

    case 6: {
      setState(734);
      string_result(0);
      break;
    }

    case 7: {
      setState(735);
      global_set();
      break;
    }

    case 8: {
      setState(736);
      global_get();
      break;
    }

    case 9: {
      setState(737);
      dynamic_assignment();
      break;
    }

    case 10: {
      setState(738);
      string_assignment();
      break;
    }

    case 11: {
      setState(739);
      float_assignment();
      break;
    }

    case 12: {
      setState(740);
      int_assignment();
      break;
    }

    case 13: {
      setState(741);
      assignment();
      break;
    }

    case 14: {
      setState(742);
      function_call();
      break;
    }

    case 15: {
      setState(743);
      literal_t();
      break;
    }

    case 16: {
      setState(744);
      bool_t();
      break;
    }

    case 17: {
      setState(745);
      float_t();
      break;
    }

    case 18: {
      setState(746);
      int_t();
      break;
    }

    case 19: {
      setState(747);
      nil_t();
      break;
    }

    case 20: {
      setState(748);
      _la = _input->LA(1);
      if (!(_la == CorundumParser::BIT_NOT

      || _la == CorundumParser::NOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(749);
      rvalue(10);
      break;
    }

    case 21: {
      setState(750);
      match(CorundumParser::LEFT_RBRACKET);
      setState(751);
      rvalue(0);
      setState(752);
      match(CorundumParser::RIGHT_RBRACKET);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(785);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(783);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(756);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(757);
          match(CorundumParser::EXP);
          setState(758);
          rvalue(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(759);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(760);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 29360128) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(761);
          rvalue(10);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(762);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(763);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::PLUS

          || _la == CorundumParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(764);
          rvalue(9);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(765);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(766);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::BIT_SHL

          || _la == CorundumParser::BIT_SHR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(767);
          rvalue(8);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(768);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(769);
          match(CorundumParser::BIT_AND);
          setState(770);
          rvalue(7);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(771);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(772);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::BIT_OR

          || _la == CorundumParser::BIT_XOR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(773);
          rvalue(6);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(774);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(775);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4026531840) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(776);
          rvalue(5);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(777);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(778);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::EQUAL

          || _la == CorundumParser::NOT_EQUAL)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(779);
          rvalue(4);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<RvalueContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRvalue);
          setState(780);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(781);
          _la = _input->LA(1);
          if (!(_la == CorundumParser::AND

          || _la == CorundumParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(782);
          rvalue(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(787);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Break_expressionContext ------------------------------------------------------------------

CorundumParser::Break_expressionContext::Break_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Break_expressionContext::BREAK() {
  return getToken(CorundumParser::BREAK, 0);
}


size_t CorundumParser::Break_expressionContext::getRuleIndex() const {
  return CorundumParser::RuleBreak_expression;
}

void CorundumParser::Break_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_expression(this);
}

void CorundumParser::Break_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_expression(this);
}

CorundumParser::Break_expressionContext* CorundumParser::break_expression() {
  Break_expressionContext *_localctx = _tracker.createInstance<Break_expressionContext>(_ctx, getState());
  enterRule(_localctx, 120, CorundumParser::RuleBreak_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(788);
    match(CorundumParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_tContext ------------------------------------------------------------------

CorundumParser::Literal_tContext::Literal_tContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Literal_tContext::LITERAL() {
  return getToken(CorundumParser::LITERAL, 0);
}


size_t CorundumParser::Literal_tContext::getRuleIndex() const {
  return CorundumParser::RuleLiteral_t;
}

void CorundumParser::Literal_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral_t(this);
}

void CorundumParser::Literal_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral_t(this);
}

CorundumParser::Literal_tContext* CorundumParser::literal_t() {
  Literal_tContext *_localctx = _tracker.createInstance<Literal_tContext>(_ctx, getState());
  enterRule(_localctx, 122, CorundumParser::RuleLiteral_t);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    match(CorundumParser::LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Float_tContext ------------------------------------------------------------------

CorundumParser::Float_tContext::Float_tContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Float_tContext::FLOAT() {
  return getToken(CorundumParser::FLOAT, 0);
}


size_t CorundumParser::Float_tContext::getRuleIndex() const {
  return CorundumParser::RuleFloat_t;
}

void CorundumParser::Float_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_t(this);
}

void CorundumParser::Float_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_t(this);
}

CorundumParser::Float_tContext* CorundumParser::float_t() {
  Float_tContext *_localctx = _tracker.createInstance<Float_tContext>(_ctx, getState());
  enterRule(_localctx, 124, CorundumParser::RuleFloat_t);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(792);
    match(CorundumParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_tContext ------------------------------------------------------------------

CorundumParser::Int_tContext::Int_tContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Int_tContext::INT() {
  return getToken(CorundumParser::INT, 0);
}


size_t CorundumParser::Int_tContext::getRuleIndex() const {
  return CorundumParser::RuleInt_t;
}

void CorundumParser::Int_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_t(this);
}

void CorundumParser::Int_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_t(this);
}

CorundumParser::Int_tContext* CorundumParser::int_t() {
  Int_tContext *_localctx = _tracker.createInstance<Int_tContext>(_ctx, getState());
  enterRule(_localctx, 126, CorundumParser::RuleInt_t);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(794);
    match(CorundumParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_tContext ------------------------------------------------------------------

CorundumParser::Bool_tContext::Bool_tContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Bool_tContext::TRUE() {
  return getToken(CorundumParser::TRUE, 0);
}

tree::TerminalNode* CorundumParser::Bool_tContext::FALSE() {
  return getToken(CorundumParser::FALSE, 0);
}


size_t CorundumParser::Bool_tContext::getRuleIndex() const {
  return CorundumParser::RuleBool_t;
}

void CorundumParser::Bool_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_t(this);
}

void CorundumParser::Bool_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_t(this);
}

CorundumParser::Bool_tContext* CorundumParser::bool_t() {
  Bool_tContext *_localctx = _tracker.createInstance<Bool_tContext>(_ctx, getState());
  enterRule(_localctx, 128, CorundumParser::RuleBool_t);
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
    setState(796);
    _la = _input->LA(1);
    if (!(_la == CorundumParser::TRUE

    || _la == CorundumParser::FALSE)) {
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

//----------------- Nil_tContext ------------------------------------------------------------------

CorundumParser::Nil_tContext::Nil_tContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Nil_tContext::NIL() {
  return getToken(CorundumParser::NIL, 0);
}


size_t CorundumParser::Nil_tContext::getRuleIndex() const {
  return CorundumParser::RuleNil_t;
}

void CorundumParser::Nil_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNil_t(this);
}

void CorundumParser::Nil_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNil_t(this);
}

CorundumParser::Nil_tContext* CorundumParser::nil_t() {
  Nil_tContext *_localctx = _tracker.createInstance<Nil_tContext>(_ctx, getState());
  enterRule(_localctx, 130, CorundumParser::RuleNil_t);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(CorundumParser::NIL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_Context ------------------------------------------------------------------

CorundumParser::Id_Context::Id_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Id_Context::ID() {
  return getToken(CorundumParser::ID, 0);
}


size_t CorundumParser::Id_Context::getRuleIndex() const {
  return CorundumParser::RuleId_;
}

void CorundumParser::Id_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_(this);
}

void CorundumParser::Id_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_(this);
}

CorundumParser::Id_Context* CorundumParser::id_() {
  Id_Context *_localctx = _tracker.createInstance<Id_Context>(_ctx, getState());
  enterRule(_localctx, 132, CorundumParser::RuleId_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(800);
    match(CorundumParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_globalContext ------------------------------------------------------------------

CorundumParser::Id_globalContext::Id_globalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Id_globalContext::ID_GLOBAL() {
  return getToken(CorundumParser::ID_GLOBAL, 0);
}


size_t CorundumParser::Id_globalContext::getRuleIndex() const {
  return CorundumParser::RuleId_global;
}

void CorundumParser::Id_globalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_global(this);
}

void CorundumParser::Id_globalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_global(this);
}

CorundumParser::Id_globalContext* CorundumParser::id_global() {
  Id_globalContext *_localctx = _tracker.createInstance<Id_globalContext>(_ctx, getState());
  enterRule(_localctx, 134, CorundumParser::RuleId_global);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(802);
    match(CorundumParser::ID_GLOBAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_functionContext ------------------------------------------------------------------

CorundumParser::Id_functionContext::Id_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Id_functionContext::ID_FUNCTION() {
  return getToken(CorundumParser::ID_FUNCTION, 0);
}


size_t CorundumParser::Id_functionContext::getRuleIndex() const {
  return CorundumParser::RuleId_function;
}

void CorundumParser::Id_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_function(this);
}

void CorundumParser::Id_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_function(this);
}

CorundumParser::Id_functionContext* CorundumParser::id_function() {
  Id_functionContext *_localctx = _tracker.createInstance<Id_functionContext>(_ctx, getState());
  enterRule(_localctx, 136, CorundumParser::RuleId_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    match(CorundumParser::ID_FUNCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminatorContext ------------------------------------------------------------------

CorundumParser::TerminatorContext::TerminatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::TerminatorContext::SEMICOLON() {
  return getToken(CorundumParser::SEMICOLON, 0);
}

CorundumParser::CrlfContext* CorundumParser::TerminatorContext::crlf() {
  return getRuleContext<CorundumParser::CrlfContext>(0);
}

CorundumParser::TerminatorContext* CorundumParser::TerminatorContext::terminator() {
  return getRuleContext<CorundumParser::TerminatorContext>(0);
}


size_t CorundumParser::TerminatorContext::getRuleIndex() const {
  return CorundumParser::RuleTerminator;
}

void CorundumParser::TerminatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminator(this);
}

void CorundumParser::TerminatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminator(this);
}


CorundumParser::TerminatorContext* CorundumParser::terminator() {
   return terminator(0);
}

CorundumParser::TerminatorContext* CorundumParser::terminator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CorundumParser::TerminatorContext *_localctx = _tracker.createInstance<TerminatorContext>(_ctx, parentState);
  CorundumParser::TerminatorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 138;
  enterRecursionRule(_localctx, 138, CorundumParser::RuleTerminator, precedence);

    

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
    setState(809);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CorundumParser::SEMICOLON: {
        setState(807);
        match(CorundumParser::SEMICOLON);
        break;
      }

      case CorundumParser::CRLF: {
        setState(808);
        crlf();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(817);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(815);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TerminatorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerminator);
          setState(811);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(812);
          match(CorundumParser::SEMICOLON);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TerminatorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerminator);
          setState(813);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(814);
          crlf();
          break;
        }

        default:
          break;
        } 
      }
      setState(819);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Else_tokenContext ------------------------------------------------------------------

CorundumParser::Else_tokenContext::Else_tokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::Else_tokenContext::ELSE() {
  return getToken(CorundumParser::ELSE, 0);
}


size_t CorundumParser::Else_tokenContext::getRuleIndex() const {
  return CorundumParser::RuleElse_token;
}

void CorundumParser::Else_tokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_token(this);
}

void CorundumParser::Else_tokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_token(this);
}

CorundumParser::Else_tokenContext* CorundumParser::else_token() {
  Else_tokenContext *_localctx = _tracker.createInstance<Else_tokenContext>(_ctx, getState());
  enterRule(_localctx, 140, CorundumParser::RuleElse_token);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    match(CorundumParser::ELSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CrlfContext ------------------------------------------------------------------

CorundumParser::CrlfContext::CrlfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CorundumParser::CrlfContext::CRLF() {
  return getToken(CorundumParser::CRLF, 0);
}


size_t CorundumParser::CrlfContext::getRuleIndex() const {
  return CorundumParser::RuleCrlf;
}

void CorundumParser::CrlfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCrlf(this);
}

void CorundumParser::CrlfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CorundumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCrlf(this);
}

CorundumParser::CrlfContext* CorundumParser::crlf() {
  CrlfContext *_localctx = _tracker.createInstance<CrlfContext>(_ctx, getState());
  enterRule(_localctx, 142, CorundumParser::RuleCrlf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
    match(CorundumParser::CRLF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CorundumParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expression_listSempred(antlrcpp::downCast<Expression_listContext *>(context), predicateIndex);
    case 15: return function_definition_params_listSempred(antlrcpp::downCast<Function_definition_params_listContext *>(context), predicateIndex);
    case 20: return function_call_paramsSempred(antlrcpp::downCast<Function_call_paramsContext *>(context), predicateIndex);
    case 34: return for_init_listSempred(antlrcpp::downCast<For_init_listContext *>(context), predicateIndex);
    case 37: return for_loop_listSempred(antlrcpp::downCast<For_loop_listContext *>(context), predicateIndex);
    case 39: return statement_expression_listSempred(antlrcpp::downCast<Statement_expression_listContext *>(context), predicateIndex);
    case 48: return array_definition_elementsSempred(antlrcpp::downCast<Array_definition_elementsContext *>(context), predicateIndex);
    case 50: return dynamic_resultSempred(antlrcpp::downCast<Dynamic_resultContext *>(context), predicateIndex);
    case 52: return int_resultSempred(antlrcpp::downCast<Int_resultContext *>(context), predicateIndex);
    case 53: return float_resultSempred(antlrcpp::downCast<Float_resultContext *>(context), predicateIndex);
    case 54: return string_resultSempred(antlrcpp::downCast<String_resultContext *>(context), predicateIndex);
    case 59: return rvalueSempred(antlrcpp::downCast<RvalueContext *>(context), predicateIndex);
    case 69: return terminatorSempred(antlrcpp::downCast<TerminatorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CorundumParser::expression_listSempred(Expression_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CorundumParser::function_definition_params_listSempred(Function_definition_params_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CorundumParser::function_call_paramsSempred(Function_call_paramsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CorundumParser::for_init_listSempred(For_init_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CorundumParser::for_loop_listSempred(For_loop_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CorundumParser::statement_expression_listSempred(Statement_expression_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CorundumParser::array_definition_elementsSempred(Array_definition_elementsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CorundumParser::dynamic_resultSempred(Dynamic_resultContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 10);
    case 10: return precpred(_ctx, 3);
    case 11: return precpred(_ctx, 14);
    case 12: return precpred(_ctx, 12);
    case 13: return precpred(_ctx, 9);
    case 14: return precpred(_ctx, 7);
    case 15: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool CorundumParser::int_resultSempred(Int_resultContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 16: return precpred(_ctx, 4);
    case 17: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CorundumParser::float_resultSempred(Float_resultContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 8);
    case 19: return precpred(_ctx, 5);
    case 20: return precpred(_ctx, 6);
    case 21: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CorundumParser::string_resultSempred(String_resultContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 22: return precpred(_ctx, 2);
    case 23: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CorundumParser::rvalueSempred(RvalueContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 24: return precpred(_ctx, 11);
    case 25: return precpred(_ctx, 9);
    case 26: return precpred(_ctx, 8);
    case 27: return precpred(_ctx, 7);
    case 28: return precpred(_ctx, 6);
    case 29: return precpred(_ctx, 5);
    case 30: return precpred(_ctx, 4);
    case 31: return precpred(_ctx, 3);
    case 32: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CorundumParser::terminatorSempred(TerminatorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 4);
    case 34: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void CorundumParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  corundumParserInitialize();
#else
  ::antlr4::internal::call_once(corundumParserOnceFlag, corundumParserInitialize);
#endif
}
