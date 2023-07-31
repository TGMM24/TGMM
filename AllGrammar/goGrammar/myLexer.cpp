
// Generated from my.g4 by ANTLR 4.11.1


#include "myLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MyLexerStaticData final {
  MyLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyLexerStaticData(const MyLexerStaticData&) = delete;
  MyLexerStaticData(MyLexerStaticData&&) = delete;
  MyLexerStaticData& operator=(const MyLexerStaticData&) = delete;
  MyLexerStaticData& operator=(MyLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mylexerLexerOnceFlag;
MyLexerStaticData *mylexerLexerStaticData = nullptr;

void mylexerLexerInitialize() {
  assert(mylexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MyLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "T__37", "T__38", "T__39", "T__40", 
      "T__41", "T__42", "T__43", "T__44", "T__45", "T__46", "T__47", "T__48", 
      "T__49", "T__50", "T__51", "T__52", "T__53", "T__54", "T__55", "T__56", 
      "T__57", "T__58", "T__59", "T__60", "COMMENT", "LINE_COMMENT", "IDENTIFIER", 
      "KEYWORD", "BINARY_OP", "REL_OP", "ADD_OP", "MUL_OP", "UNARY_OP", 
      "INT_LIT", "DECIMAL_LIT", "OCTAL_LIT", "HEX_LIT", "FLOAT_LIT", "DECIMALS", 
      "EXPONENT", "IMAGINARY_LIT", "RUNE_LIT", "UNICODE_VALUE", "BYTE_VALUE", 
      "OCTAL_BYTE_VALUE", "HEX_BYTE_VALUE", "LITTLE_U_VALUE", "BIG_U_VALUE", 
      "ESCAPED_CHAR", "STRING_LIT", "RAW_STRING_LIT", "INTERPRETED_STRING_LIT", 
      "LETTER", "DECIMAL_DIGIT", "OCTAL_DIGIT", "HEX_DIGIT", "NEWLINE", 
      "UNICODE_CHAR", "UNICODE_DIGIT", "UNICODE_LETTER", "WS", "TERMINATOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'package'", "'import'", "'('", "')'", "'.'", "'const'", "'='", 
      "','", "'type'", "';'", "'func'", "'var'", "'{'", "'}'", "'<-'", "'++'", 
      "'--'", "'+'", "'-'", "'|'", "'^'", "'*'", "'/'", "'%'", "'<<'", "'>>'", 
      "'&'", "'&^'", "':='", "':'", "'return'", "'break'", "'continue'", 
      "'goto'", "'fallthrough'", "'defer'", "'if'", "'else'", "'switch'", 
      "'case'", "'default'", "'select'", "'for'", "'range'", "'go'", "'['", 
      "']'", "'interface'", "'map'", "'chan'", "'...'", "'struct'", "'||'", 
      "'&&'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "COMMENT", "LINE_COMMENT", 
      "IDENTIFIER", "KEYWORD", "BINARY_OP", "INT_LIT", "FLOAT_LIT", "IMAGINARY_LIT", 
      "RUNE_LIT", "LITTLE_U_VALUE", "BIG_U_VALUE", "STRING_LIT", "WS", "TERMINATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,75,807,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,
  	1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,
  	12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,
  	18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,
  	24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,
  	30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,32,1,
  	32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,
  	35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,45,1,45,1,46,1,46,1,47,1,
  	47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,1,
  	49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,51,1,51,1,
  	51,1,52,1,52,1,52,1,53,1,53,1,53,1,54,1,54,1,54,1,55,1,55,1,55,1,56,1,
  	56,1,57,1,57,1,57,1,58,1,58,1,59,1,59,1,59,1,60,1,60,1,61,1,61,1,61,1,
  	61,5,61,445,8,61,10,61,12,61,448,9,61,1,61,1,61,1,61,3,61,453,8,61,1,
  	62,1,62,1,62,1,62,5,62,459,8,62,10,62,12,62,462,9,62,1,62,1,62,1,63,1,
  	63,1,63,5,63,469,8,63,10,63,12,63,472,9,63,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,3,64,603,8,
  	64,1,65,1,65,1,65,1,65,1,65,1,65,1,65,3,65,612,8,65,1,66,1,66,1,66,1,
  	66,1,66,1,66,1,66,1,66,1,66,1,66,3,66,624,8,66,1,67,1,67,1,68,1,68,1,
  	68,1,68,1,68,1,68,1,68,1,68,3,68,636,8,68,1,69,1,69,1,69,3,69,641,8,69,
  	1,70,1,70,1,70,3,70,646,8,70,1,71,1,71,5,71,650,8,71,10,71,12,71,653,
  	9,71,1,72,1,72,5,72,657,8,72,10,72,12,72,660,9,72,1,73,1,73,1,73,4,73,
  	665,8,73,11,73,12,73,666,1,74,1,74,1,74,3,74,672,8,74,1,74,3,74,675,8,
  	74,1,74,1,74,1,74,1,74,1,74,1,74,3,74,683,8,74,3,74,685,8,74,1,75,4,75,
  	688,8,75,11,75,12,75,689,1,76,1,76,3,76,694,8,76,1,76,1,76,1,77,1,77,
  	3,77,700,8,77,1,77,1,77,1,78,1,78,1,78,3,78,707,8,78,1,78,1,78,1,79,1,
  	79,1,79,1,79,3,79,715,8,79,1,80,1,80,3,80,719,8,80,1,81,1,81,1,81,1,81,
  	1,81,1,82,1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,1,83,1,83,1,83,
  	1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,85,1,85,
  	1,85,1,86,1,86,3,86,756,8,86,1,87,1,87,1,87,5,87,761,8,87,10,87,12,87,
  	764,9,87,1,87,1,87,1,88,1,88,1,88,5,88,771,8,88,10,88,12,88,774,9,88,
  	1,88,1,88,1,89,1,89,3,89,780,8,89,1,90,1,90,1,91,1,91,1,92,1,92,1,93,
  	1,93,1,94,1,94,1,95,3,95,793,8,95,1,96,3,96,796,8,96,1,97,4,97,799,8,
  	97,11,97,12,97,800,1,98,4,98,804,8,98,11,98,12,98,805,1,446,0,99,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,
  	38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,48,97,49,
  	99,50,101,51,103,52,105,53,107,54,109,55,111,56,113,57,115,58,117,59,
  	119,60,121,61,123,62,125,63,127,64,129,65,131,66,133,0,135,0,137,0,139,
  	0,141,67,143,0,145,0,147,0,149,68,151,0,153,0,155,69,157,70,159,0,161,
  	0,163,0,165,0,167,71,169,72,171,0,173,73,175,0,177,0,179,0,181,0,183,
  	0,185,0,187,0,189,0,191,0,193,0,195,74,197,75,1,0,16,2,0,10,10,13,13,
  	4,0,43,43,45,45,94,94,124,124,3,0,37,37,42,42,47,47,5,0,33,33,38,38,42,
  	43,45,45,94,94,1,0,49,57,2,0,88,88,120,120,2,0,69,69,101,101,2,0,43,43,
  	45,45,9,0,34,34,39,39,92,92,97,98,102,102,110,110,114,114,116,116,118,
  	118,1,0,48,57,1,0,48,55,3,0,48,57,65,70,97,102,1,0,10,10,20,0,48,57,1632,
  	1641,1776,1785,2406,2415,2534,2543,2662,2671,2790,2799,2918,2927,3047,
  	3055,3174,3183,3302,3311,3430,3439,3664,3673,3792,3801,3872,3881,4160,
  	4169,4969,4977,6112,6121,6160,6169,65296,65305,258,0,65,90,97,122,170,
  	170,181,181,186,186,192,214,216,246,248,543,546,563,592,685,688,696,699,
  	705,720,721,736,740,750,750,890,890,902,902,904,906,908,908,910,929,931,
  	974,976,983,986,1011,1024,1153,1164,1220,1223,1224,1227,1228,1232,1269,
  	1272,1273,1329,1366,1369,1369,1377,1415,1488,1514,1520,1522,1569,1594,
  	1600,1610,1649,1747,1749,1749,1765,1766,1786,1788,1808,1808,1810,1836,
  	1920,1957,2309,2361,2365,2365,2384,2384,2392,2401,2437,2444,2447,2448,
  	2451,2472,2474,2480,2482,2482,2486,2489,2524,2525,2527,2529,2544,2545,
  	2565,2570,2575,2576,2579,2600,2602,2608,2610,2611,2613,2614,2616,2617,
  	2649,2652,2654,2654,2674,2676,2693,2699,2701,2701,2703,2705,2707,2728,
  	2730,2736,2738,2739,2741,2745,2749,2749,2768,2768,2784,2784,2821,2828,
  	2831,2832,2835,2856,2858,2864,2866,2867,2870,2873,2877,2877,2908,2909,
  	2911,2913,2949,2954,2958,2960,2962,2965,2969,2970,2972,2972,2974,2975,
  	2979,2980,2984,2986,2990,2997,2999,3001,3077,3084,3086,3088,3090,3112,
  	3114,3123,3125,3129,3168,3169,3205,3212,3214,3216,3218,3240,3242,3251,
  	3253,3257,3294,3294,3296,3297,3333,3340,3342,3344,3346,3368,3370,3385,
  	3424,3425,3461,3478,3482,3505,3507,3515,3517,3517,3520,3526,3585,3632,
  	3634,3635,3648,3654,3713,3714,3716,3716,3719,3720,3722,3722,3725,3725,
  	3732,3735,3737,3743,3745,3747,3749,3749,3751,3751,3754,3755,3757,3760,
  	3762,3763,3773,3780,3782,3782,3804,3805,3840,3840,3904,3946,3976,3979,
  	4096,4129,4131,4135,4137,4138,4176,4181,4256,4293,4304,4342,4352,4441,
  	4447,4514,4520,4601,4608,4614,4616,4678,4680,4680,4682,4685,4688,4694,
  	4696,4696,4698,4701,4704,4742,4744,4744,4746,4749,4752,4782,4784,4784,
  	4786,4789,4792,4798,4800,4800,4802,4805,4808,4814,4816,4822,4824,4846,
  	4848,4878,4880,4880,4882,4885,4888,4894,4896,4934,4936,4954,5024,5108,
  	5121,5750,5761,5786,5792,5866,6016,6067,6176,6263,6272,6312,7680,7835,
  	7840,7929,7936,7957,7960,7965,7968,8005,8008,8013,8016,8023,8025,8025,
  	8027,8027,8029,8029,8031,8061,8064,8116,8118,8124,8126,8126,8130,8132,
  	8134,8140,8144,8147,8150,8155,8160,8172,8178,8180,8182,8188,8319,8319,
  	8450,8450,8455,8455,8458,8467,8469,8469,8473,8477,8484,8484,8486,8486,
  	8488,8488,8490,8493,8495,8497,8499,8505,8544,8579,12293,12295,12321,12329,
  	12337,12341,12344,12346,12353,12436,12445,12446,12449,12538,12540,12542,
  	12549,12588,12593,12686,12704,12727,13312,13312,19893,19893,19968,19968,
  	40869,40869,40960,42124,44032,44032,55203,55203,63744,64045,64256,64262,
  	64275,64279,64285,64285,64287,64296,64298,64310,64312,64316,64318,64318,
  	64320,64321,64323,64324,64326,64433,64467,64829,64848,64911,64914,64967,
  	65008,65019,65136,65138,65140,65140,65142,65276,65313,65338,65345,65370,
  	65382,65470,65474,65479,65482,65487,65490,65495,65498,65500,2,0,9,9,32,
  	32,851,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,
  	0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,
  	75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,
  	0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,
  	0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,
  	0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,
  	0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,
  	0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,141,1,0,0,0,0,149,1,0,0,0,
  	0,155,1,0,0,0,0,157,1,0,0,0,0,167,1,0,0,0,0,169,1,0,0,0,0,173,1,0,0,0,
  	0,195,1,0,0,0,0,197,1,0,0,0,1,199,1,0,0,0,3,207,1,0,0,0,5,214,1,0,0,0,
  	7,216,1,0,0,0,9,218,1,0,0,0,11,220,1,0,0,0,13,226,1,0,0,0,15,228,1,0,
  	0,0,17,230,1,0,0,0,19,235,1,0,0,0,21,237,1,0,0,0,23,242,1,0,0,0,25,246,
  	1,0,0,0,27,248,1,0,0,0,29,250,1,0,0,0,31,253,1,0,0,0,33,256,1,0,0,0,35,
  	259,1,0,0,0,37,261,1,0,0,0,39,263,1,0,0,0,41,265,1,0,0,0,43,267,1,0,0,
  	0,45,269,1,0,0,0,47,271,1,0,0,0,49,273,1,0,0,0,51,276,1,0,0,0,53,279,
  	1,0,0,0,55,281,1,0,0,0,57,284,1,0,0,0,59,287,1,0,0,0,61,289,1,0,0,0,63,
  	296,1,0,0,0,65,302,1,0,0,0,67,311,1,0,0,0,69,316,1,0,0,0,71,328,1,0,0,
  	0,73,334,1,0,0,0,75,337,1,0,0,0,77,342,1,0,0,0,79,349,1,0,0,0,81,354,
  	1,0,0,0,83,362,1,0,0,0,85,369,1,0,0,0,87,373,1,0,0,0,89,379,1,0,0,0,91,
  	382,1,0,0,0,93,384,1,0,0,0,95,386,1,0,0,0,97,396,1,0,0,0,99,400,1,0,0,
  	0,101,405,1,0,0,0,103,409,1,0,0,0,105,416,1,0,0,0,107,419,1,0,0,0,109,
  	422,1,0,0,0,111,425,1,0,0,0,113,428,1,0,0,0,115,430,1,0,0,0,117,433,1,
  	0,0,0,119,435,1,0,0,0,121,438,1,0,0,0,123,452,1,0,0,0,125,454,1,0,0,0,
  	127,465,1,0,0,0,129,602,1,0,0,0,131,611,1,0,0,0,133,623,1,0,0,0,135,625,
  	1,0,0,0,137,635,1,0,0,0,139,640,1,0,0,0,141,645,1,0,0,0,143,647,1,0,0,
  	0,145,654,1,0,0,0,147,661,1,0,0,0,149,684,1,0,0,0,151,687,1,0,0,0,153,
  	691,1,0,0,0,155,699,1,0,0,0,157,703,1,0,0,0,159,714,1,0,0,0,161,718,1,
  	0,0,0,163,720,1,0,0,0,165,725,1,0,0,0,167,730,1,0,0,0,169,738,1,0,0,0,
  	171,750,1,0,0,0,173,755,1,0,0,0,175,757,1,0,0,0,177,767,1,0,0,0,179,779,
  	1,0,0,0,181,781,1,0,0,0,183,783,1,0,0,0,185,785,1,0,0,0,187,787,1,0,0,
  	0,189,789,1,0,0,0,191,792,1,0,0,0,193,795,1,0,0,0,195,798,1,0,0,0,197,
  	803,1,0,0,0,199,200,5,112,0,0,200,201,5,97,0,0,201,202,5,99,0,0,202,203,
  	5,107,0,0,203,204,5,97,0,0,204,205,5,103,0,0,205,206,5,101,0,0,206,2,
  	1,0,0,0,207,208,5,105,0,0,208,209,5,109,0,0,209,210,5,112,0,0,210,211,
  	5,111,0,0,211,212,5,114,0,0,212,213,5,116,0,0,213,4,1,0,0,0,214,215,5,
  	40,0,0,215,6,1,0,0,0,216,217,5,41,0,0,217,8,1,0,0,0,218,219,5,46,0,0,
  	219,10,1,0,0,0,220,221,5,99,0,0,221,222,5,111,0,0,222,223,5,110,0,0,223,
  	224,5,115,0,0,224,225,5,116,0,0,225,12,1,0,0,0,226,227,5,61,0,0,227,14,
  	1,0,0,0,228,229,5,44,0,0,229,16,1,0,0,0,230,231,5,116,0,0,231,232,5,121,
  	0,0,232,233,5,112,0,0,233,234,5,101,0,0,234,18,1,0,0,0,235,236,5,59,0,
  	0,236,20,1,0,0,0,237,238,5,102,0,0,238,239,5,117,0,0,239,240,5,110,0,
  	0,240,241,5,99,0,0,241,22,1,0,0,0,242,243,5,118,0,0,243,244,5,97,0,0,
  	244,245,5,114,0,0,245,24,1,0,0,0,246,247,5,123,0,0,247,26,1,0,0,0,248,
  	249,5,125,0,0,249,28,1,0,0,0,250,251,5,60,0,0,251,252,5,45,0,0,252,30,
  	1,0,0,0,253,254,5,43,0,0,254,255,5,43,0,0,255,32,1,0,0,0,256,257,5,45,
  	0,0,257,258,5,45,0,0,258,34,1,0,0,0,259,260,5,43,0,0,260,36,1,0,0,0,261,
  	262,5,45,0,0,262,38,1,0,0,0,263,264,5,124,0,0,264,40,1,0,0,0,265,266,
  	5,94,0,0,266,42,1,0,0,0,267,268,5,42,0,0,268,44,1,0,0,0,269,270,5,47,
  	0,0,270,46,1,0,0,0,271,272,5,37,0,0,272,48,1,0,0,0,273,274,5,60,0,0,274,
  	275,5,60,0,0,275,50,1,0,0,0,276,277,5,62,0,0,277,278,5,62,0,0,278,52,
  	1,0,0,0,279,280,5,38,0,0,280,54,1,0,0,0,281,282,5,38,0,0,282,283,5,94,
  	0,0,283,56,1,0,0,0,284,285,5,58,0,0,285,286,5,61,0,0,286,58,1,0,0,0,287,
  	288,5,58,0,0,288,60,1,0,0,0,289,290,5,114,0,0,290,291,5,101,0,0,291,292,
  	5,116,0,0,292,293,5,117,0,0,293,294,5,114,0,0,294,295,5,110,0,0,295,62,
  	1,0,0,0,296,297,5,98,0,0,297,298,5,114,0,0,298,299,5,101,0,0,299,300,
  	5,97,0,0,300,301,5,107,0,0,301,64,1,0,0,0,302,303,5,99,0,0,303,304,5,
  	111,0,0,304,305,5,110,0,0,305,306,5,116,0,0,306,307,5,105,0,0,307,308,
  	5,110,0,0,308,309,5,117,0,0,309,310,5,101,0,0,310,66,1,0,0,0,311,312,
  	5,103,0,0,312,313,5,111,0,0,313,314,5,116,0,0,314,315,5,111,0,0,315,68,
  	1,0,0,0,316,317,5,102,0,0,317,318,5,97,0,0,318,319,5,108,0,0,319,320,
  	5,108,0,0,320,321,5,116,0,0,321,322,5,104,0,0,322,323,5,114,0,0,323,324,
  	5,111,0,0,324,325,5,117,0,0,325,326,5,103,0,0,326,327,5,104,0,0,327,70,
  	1,0,0,0,328,329,5,100,0,0,329,330,5,101,0,0,330,331,5,102,0,0,331,332,
  	5,101,0,0,332,333,5,114,0,0,333,72,1,0,0,0,334,335,5,105,0,0,335,336,
  	5,102,0,0,336,74,1,0,0,0,337,338,5,101,0,0,338,339,5,108,0,0,339,340,
  	5,115,0,0,340,341,5,101,0,0,341,76,1,0,0,0,342,343,5,115,0,0,343,344,
  	5,119,0,0,344,345,5,105,0,0,345,346,5,116,0,0,346,347,5,99,0,0,347,348,
  	5,104,0,0,348,78,1,0,0,0,349,350,5,99,0,0,350,351,5,97,0,0,351,352,5,
  	115,0,0,352,353,5,101,0,0,353,80,1,0,0,0,354,355,5,100,0,0,355,356,5,
  	101,0,0,356,357,5,102,0,0,357,358,5,97,0,0,358,359,5,117,0,0,359,360,
  	5,108,0,0,360,361,5,116,0,0,361,82,1,0,0,0,362,363,5,115,0,0,363,364,
  	5,101,0,0,364,365,5,108,0,0,365,366,5,101,0,0,366,367,5,99,0,0,367,368,
  	5,116,0,0,368,84,1,0,0,0,369,370,5,102,0,0,370,371,5,111,0,0,371,372,
  	5,114,0,0,372,86,1,0,0,0,373,374,5,114,0,0,374,375,5,97,0,0,375,376,5,
  	110,0,0,376,377,5,103,0,0,377,378,5,101,0,0,378,88,1,0,0,0,379,380,5,
  	103,0,0,380,381,5,111,0,0,381,90,1,0,0,0,382,383,5,91,0,0,383,92,1,0,
  	0,0,384,385,5,93,0,0,385,94,1,0,0,0,386,387,5,105,0,0,387,388,5,110,0,
  	0,388,389,5,116,0,0,389,390,5,101,0,0,390,391,5,114,0,0,391,392,5,102,
  	0,0,392,393,5,97,0,0,393,394,5,99,0,0,394,395,5,101,0,0,395,96,1,0,0,
  	0,396,397,5,109,0,0,397,398,5,97,0,0,398,399,5,112,0,0,399,98,1,0,0,0,
  	400,401,5,99,0,0,401,402,5,104,0,0,402,403,5,97,0,0,403,404,5,110,0,0,
  	404,100,1,0,0,0,405,406,5,46,0,0,406,407,5,46,0,0,407,408,5,46,0,0,408,
  	102,1,0,0,0,409,410,5,115,0,0,410,411,5,116,0,0,411,412,5,114,0,0,412,
  	413,5,117,0,0,413,414,5,99,0,0,414,415,5,116,0,0,415,104,1,0,0,0,416,
  	417,5,124,0,0,417,418,5,124,0,0,418,106,1,0,0,0,419,420,5,38,0,0,420,
  	421,5,38,0,0,421,108,1,0,0,0,422,423,5,61,0,0,423,424,5,61,0,0,424,110,
  	1,0,0,0,425,426,5,33,0,0,426,427,5,61,0,0,427,112,1,0,0,0,428,429,5,60,
  	0,0,429,114,1,0,0,0,430,431,5,60,0,0,431,432,5,61,0,0,432,116,1,0,0,0,
  	433,434,5,62,0,0,434,118,1,0,0,0,435,436,5,62,0,0,436,437,5,61,0,0,437,
  	120,1,0,0,0,438,439,5,33,0,0,439,122,1,0,0,0,440,441,5,47,0,0,441,442,
  	5,42,0,0,442,446,1,0,0,0,443,445,9,0,0,0,444,443,1,0,0,0,445,448,1,0,
  	0,0,446,447,1,0,0,0,446,444,1,0,0,0,447,449,1,0,0,0,448,446,1,0,0,0,449,
  	450,5,42,0,0,450,453,5,47,0,0,451,453,3,125,62,0,452,440,1,0,0,0,452,
  	451,1,0,0,0,453,124,1,0,0,0,454,455,5,47,0,0,455,456,5,47,0,0,456,460,
  	1,0,0,0,457,459,8,0,0,0,458,457,1,0,0,0,459,462,1,0,0,0,460,458,1,0,0,
  	0,460,461,1,0,0,0,461,463,1,0,0,0,462,460,1,0,0,0,463,464,7,0,0,0,464,
  	126,1,0,0,0,465,470,3,179,89,0,466,469,3,179,89,0,467,469,3,191,95,0,
  	468,466,1,0,0,0,468,467,1,0,0,0,469,472,1,0,0,0,470,468,1,0,0,0,470,471,
  	1,0,0,0,471,128,1,0,0,0,472,470,1,0,0,0,473,474,5,98,0,0,474,475,5,114,
  	0,0,475,476,5,101,0,0,476,477,5,97,0,0,477,603,5,107,0,0,478,479,5,100,
  	0,0,479,480,5,101,0,0,480,481,5,102,0,0,481,482,5,97,0,0,482,483,5,117,
  	0,0,483,484,5,108,0,0,484,603,5,116,0,0,485,486,5,102,0,0,486,487,5,117,
  	0,0,487,488,5,110,0,0,488,603,5,99,0,0,489,490,5,105,0,0,490,491,5,110,
  	0,0,491,492,5,116,0,0,492,493,5,101,0,0,493,494,5,114,0,0,494,495,5,102,
  	0,0,495,496,5,97,0,0,496,497,5,99,0,0,497,603,5,101,0,0,498,499,5,115,
  	0,0,499,500,5,101,0,0,500,501,5,108,0,0,501,502,5,101,0,0,502,503,5,99,
  	0,0,503,603,5,116,0,0,504,505,5,99,0,0,505,506,5,97,0,0,506,507,5,115,
  	0,0,507,603,5,101,0,0,508,509,5,100,0,0,509,510,5,101,0,0,510,511,5,102,
  	0,0,511,512,5,101,0,0,512,603,5,114,0,0,513,514,5,103,0,0,514,603,5,111,
  	0,0,515,516,5,109,0,0,516,517,5,97,0,0,517,603,5,112,0,0,518,519,5,115,
  	0,0,519,520,5,116,0,0,520,521,5,114,0,0,521,522,5,117,0,0,522,523,5,99,
  	0,0,523,603,5,116,0,0,524,525,5,99,0,0,525,526,5,104,0,0,526,527,5,97,
  	0,0,527,603,5,110,0,0,528,529,5,101,0,0,529,530,5,108,0,0,530,531,5,115,
  	0,0,531,603,5,101,0,0,532,533,5,103,0,0,533,534,5,111,0,0,534,535,5,116,
  	0,0,535,603,5,111,0,0,536,537,5,112,0,0,537,538,5,97,0,0,538,539,5,99,
  	0,0,539,540,5,107,0,0,540,541,5,97,0,0,541,542,5,103,0,0,542,603,5,101,
  	0,0,543,544,5,115,0,0,544,545,5,119,0,0,545,546,5,105,0,0,546,547,5,116,
  	0,0,547,548,5,99,0,0,548,603,5,104,0,0,549,550,5,99,0,0,550,551,5,111,
  	0,0,551,552,5,110,0,0,552,553,5,115,0,0,553,603,5,116,0,0,554,555,5,102,
  	0,0,555,556,5,97,0,0,556,557,5,108,0,0,557,558,5,108,0,0,558,559,5,116,
  	0,0,559,560,5,104,0,0,560,561,5,114,0,0,561,562,5,111,0,0,562,563,5,117,
  	0,0,563,564,5,103,0,0,564,603,5,104,0,0,565,566,5,105,0,0,566,603,5,102,
  	0,0,567,568,5,114,0,0,568,569,5,97,0,0,569,570,5,110,0,0,570,571,5,103,
  	0,0,571,603,5,101,0,0,572,573,5,116,0,0,573,574,5,121,0,0,574,575,5,112,
  	0,0,575,603,5,101,0,0,576,577,5,99,0,0,577,578,5,111,0,0,578,579,5,110,
  	0,0,579,580,5,116,0,0,580,581,5,105,0,0,581,582,5,110,0,0,582,583,5,117,
  	0,0,583,603,5,101,0,0,584,585,5,102,0,0,585,586,5,111,0,0,586,603,5,114,
  	0,0,587,588,5,105,0,0,588,589,5,109,0,0,589,590,5,112,0,0,590,591,5,111,
  	0,0,591,592,5,114,0,0,592,603,5,116,0,0,593,594,5,114,0,0,594,595,5,101,
  	0,0,595,596,5,116,0,0,596,597,5,117,0,0,597,598,5,114,0,0,598,603,5,110,
  	0,0,599,600,5,118,0,0,600,601,5,97,0,0,601,603,5,114,0,0,602,473,1,0,
  	0,0,602,478,1,0,0,0,602,485,1,0,0,0,602,489,1,0,0,0,602,498,1,0,0,0,602,
  	504,1,0,0,0,602,508,1,0,0,0,602,513,1,0,0,0,602,515,1,0,0,0,602,518,1,
  	0,0,0,602,524,1,0,0,0,602,528,1,0,0,0,602,532,1,0,0,0,602,536,1,0,0,0,
  	602,543,1,0,0,0,602,549,1,0,0,0,602,554,1,0,0,0,602,565,1,0,0,0,602,567,
  	1,0,0,0,602,572,1,0,0,0,602,576,1,0,0,0,602,584,1,0,0,0,602,587,1,0,0,
  	0,602,593,1,0,0,0,602,599,1,0,0,0,603,130,1,0,0,0,604,605,5,124,0,0,605,
  	612,5,124,0,0,606,607,5,38,0,0,607,612,5,38,0,0,608,612,3,133,66,0,609,
  	612,3,135,67,0,610,612,3,137,68,0,611,604,1,0,0,0,611,606,1,0,0,0,611,
  	608,1,0,0,0,611,609,1,0,0,0,611,610,1,0,0,0,612,132,1,0,0,0,613,614,5,
  	61,0,0,614,624,5,61,0,0,615,616,5,33,0,0,616,624,5,61,0,0,617,624,5,60,
  	0,0,618,619,5,60,0,0,619,624,5,61,0,0,620,624,5,62,0,0,621,622,5,62,0,
  	0,622,624,5,61,0,0,623,613,1,0,0,0,623,615,1,0,0,0,623,617,1,0,0,0,623,
  	618,1,0,0,0,623,620,1,0,0,0,623,621,1,0,0,0,624,134,1,0,0,0,625,626,7,
  	1,0,0,626,136,1,0,0,0,627,636,7,2,0,0,628,629,5,60,0,0,629,636,5,60,0,
  	0,630,631,5,62,0,0,631,636,5,62,0,0,632,636,5,38,0,0,633,634,5,38,0,0,
  	634,636,5,94,0,0,635,627,1,0,0,0,635,628,1,0,0,0,635,630,1,0,0,0,635,
  	632,1,0,0,0,635,633,1,0,0,0,636,138,1,0,0,0,637,641,7,3,0,0,638,639,5,
  	60,0,0,639,641,5,45,0,0,640,637,1,0,0,0,640,638,1,0,0,0,641,140,1,0,0,
  	0,642,646,3,143,71,0,643,646,3,145,72,0,644,646,3,147,73,0,645,642,1,
  	0,0,0,645,643,1,0,0,0,645,644,1,0,0,0,646,142,1,0,0,0,647,651,7,4,0,0,
  	648,650,3,181,90,0,649,648,1,0,0,0,650,653,1,0,0,0,651,649,1,0,0,0,651,
  	652,1,0,0,0,652,144,1,0,0,0,653,651,1,0,0,0,654,658,5,48,0,0,655,657,
  	3,183,91,0,656,655,1,0,0,0,657,660,1,0,0,0,658,656,1,0,0,0,658,659,1,
  	0,0,0,659,146,1,0,0,0,660,658,1,0,0,0,661,662,5,48,0,0,662,664,7,5,0,
  	0,663,665,3,185,92,0,664,663,1,0,0,0,665,666,1,0,0,0,666,664,1,0,0,0,
  	666,667,1,0,0,0,667,148,1,0,0,0,668,669,3,151,75,0,669,671,5,46,0,0,670,
  	672,3,151,75,0,671,670,1,0,0,0,671,672,1,0,0,0,672,674,1,0,0,0,673,675,
  	3,153,76,0,674,673,1,0,0,0,674,675,1,0,0,0,675,685,1,0,0,0,676,677,3,
  	151,75,0,677,678,3,153,76,0,678,685,1,0,0,0,679,680,5,46,0,0,680,682,
  	3,151,75,0,681,683,3,153,76,0,682,681,1,0,0,0,682,683,1,0,0,0,683,685,
  	1,0,0,0,684,668,1,0,0,0,684,676,1,0,0,0,684,679,1,0,0,0,685,150,1,0,0,
  	0,686,688,3,181,90,0,687,686,1,0,0,0,688,689,1,0,0,0,689,687,1,0,0,0,
  	689,690,1,0,0,0,690,152,1,0,0,0,691,693,7,6,0,0,692,694,7,7,0,0,693,692,
  	1,0,0,0,693,694,1,0,0,0,694,695,1,0,0,0,695,696,3,151,75,0,696,154,1,
  	0,0,0,697,700,3,151,75,0,698,700,3,149,74,0,699,697,1,0,0,0,699,698,1,
  	0,0,0,700,701,1,0,0,0,701,702,5,105,0,0,702,156,1,0,0,0,703,706,5,39,
  	0,0,704,707,3,159,79,0,705,707,3,161,80,0,706,704,1,0,0,0,706,705,1,0,
  	0,0,707,708,1,0,0,0,708,709,5,39,0,0,709,158,1,0,0,0,710,715,3,189,94,
  	0,711,715,3,167,83,0,712,715,3,169,84,0,713,715,3,171,85,0,714,710,1,
  	0,0,0,714,711,1,0,0,0,714,712,1,0,0,0,714,713,1,0,0,0,715,160,1,0,0,0,
  	716,719,3,163,81,0,717,719,3,165,82,0,718,716,1,0,0,0,718,717,1,0,0,0,
  	719,162,1,0,0,0,720,721,5,92,0,0,721,722,3,183,91,0,722,723,3,183,91,
  	0,723,724,3,183,91,0,724,164,1,0,0,0,725,726,5,92,0,0,726,727,5,120,0,
  	0,727,728,3,185,92,0,728,729,3,185,92,0,729,166,1,0,0,0,730,731,5,92,
  	0,0,731,732,5,117,0,0,732,733,1,0,0,0,733,734,3,185,92,0,734,735,3,185,
  	92,0,735,736,3,185,92,0,736,737,3,185,92,0,737,168,1,0,0,0,738,739,5,
  	92,0,0,739,740,5,85,0,0,740,741,1,0,0,0,741,742,3,185,92,0,742,743,3,
  	185,92,0,743,744,3,185,92,0,744,745,3,185,92,0,745,746,3,185,92,0,746,
  	747,3,185,92,0,747,748,3,185,92,0,748,749,3,185,92,0,749,170,1,0,0,0,
  	750,751,5,92,0,0,751,752,7,8,0,0,752,172,1,0,0,0,753,756,3,175,87,0,754,
  	756,3,177,88,0,755,753,1,0,0,0,755,754,1,0,0,0,756,174,1,0,0,0,757,762,
  	5,96,0,0,758,761,3,189,94,0,759,761,3,187,93,0,760,758,1,0,0,0,760,759,
  	1,0,0,0,761,764,1,0,0,0,762,760,1,0,0,0,762,763,1,0,0,0,763,765,1,0,0,
  	0,764,762,1,0,0,0,765,766,5,96,0,0,766,176,1,0,0,0,767,772,5,34,0,0,768,
  	771,3,159,79,0,769,771,3,161,80,0,770,768,1,0,0,0,770,769,1,0,0,0,771,
  	774,1,0,0,0,772,770,1,0,0,0,772,773,1,0,0,0,773,775,1,0,0,0,774,772,1,
  	0,0,0,775,776,5,34,0,0,776,178,1,0,0,0,777,780,3,193,96,0,778,780,5,95,
  	0,0,779,777,1,0,0,0,779,778,1,0,0,0,780,180,1,0,0,0,781,782,7,9,0,0,782,
  	182,1,0,0,0,783,784,7,10,0,0,784,184,1,0,0,0,785,786,7,11,0,0,786,186,
  	1,0,0,0,787,788,7,12,0,0,788,188,1,0,0,0,789,790,8,12,0,0,790,190,1,0,
  	0,0,791,793,7,13,0,0,792,791,1,0,0,0,793,192,1,0,0,0,794,796,7,14,0,0,
  	795,794,1,0,0,0,796,194,1,0,0,0,797,799,7,15,0,0,798,797,1,0,0,0,799,
  	800,1,0,0,0,800,798,1,0,0,0,800,801,1,0,0,0,801,196,1,0,0,0,802,804,7,
  	0,0,0,803,802,1,0,0,0,804,805,1,0,0,0,805,803,1,0,0,0,805,806,1,0,0,0,
  	806,198,1,0,0,0,35,0,446,452,460,468,470,602,611,623,635,640,645,651,
  	658,666,671,674,682,684,689,693,699,706,714,718,755,760,762,770,772,779,
  	792,795,800,805,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mylexerLexerStaticData = staticData.release();
}

}

myLexer::myLexer(CharStream *input) : Lexer(input) {
  myLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mylexerLexerStaticData->atn, mylexerLexerStaticData->decisionToDFA, mylexerLexerStaticData->sharedContextCache);
}

myLexer::~myLexer() {
  delete _interpreter;
}

std::string myLexer::getGrammarFileName() const {
  return "my.g4";
}

const std::vector<std::string>& myLexer::getRuleNames() const {
  return mylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& myLexer::getChannelNames() const {
  return mylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& myLexer::getModeNames() const {
  return mylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& myLexer::getVocabulary() const {
  return mylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myLexer::getSerializedATN() const {
  return mylexerLexerStaticData->serializedATN;
}

const atn::ATN& myLexer::getATN() const {
  return *mylexerLexerStaticData->atn;
}




void myLexer::initialize() {
  ::antlr4::internal::call_once(mylexerLexerOnceFlag, mylexerLexerInitialize);
}