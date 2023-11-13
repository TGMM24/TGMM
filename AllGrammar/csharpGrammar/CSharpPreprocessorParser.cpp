
// Generated from CSharpPreprocessorParser.g4 by ANTLR 4.13.0


#include "CSharpPreprocessorParserListener.h"

#include "CSharpPreprocessorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CSharpPreprocessorParserStaticData final {
  CSharpPreprocessorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CSharpPreprocessorParserStaticData(const CSharpPreprocessorParserStaticData&) = delete;
  CSharpPreprocessorParserStaticData(CSharpPreprocessorParserStaticData&&) = delete;
  CSharpPreprocessorParserStaticData& operator=(const CSharpPreprocessorParserStaticData&) = delete;
  CSharpPreprocessorParserStaticData& operator=(CSharpPreprocessorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csharppreprocessorparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CSharpPreprocessorParserStaticData *csharppreprocessorparserParserStaticData = nullptr;

void csharppreprocessorparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csharppreprocessorparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(csharppreprocessorparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CSharpPreprocessorParserStaticData>(
    std::vector<std::string>{
      "preprocessor_directive", "directive_new_line_or_sharp", "preprocessor_expression"
    },
    std::vector<std::string>{
      "", "'\\u00EF\\u00BB\\u00BF'", "", "'/***/'", "", "", "", "", "'#'", 
      "'abstract'", "'add'", "'alias'", "'__arglist'", "'as'", "'ascending'", 
      "'async'", "'await'", "'base'", "'bool'", "'break'", "'by'", "'byte'", 
      "'case'", "'catch'", "'char'", "'checked'", "'class'", "'const'", 
      "'continue'", "'decimal'", "'default'", "'delegate'", "'descending'", 
      "'do'", "'double'", "'dynamic'", "'else'", "'enum'", "'equals'", "'event'", 
      "'explicit'", "'extern'", "'false'", "'finally'", "'fixed'", "'float'", 
      "'for'", "'foreach'", "'from'", "'get'", "'goto'", "'group'", "'if'", 
      "'implicit'", "'in'", "'int'", "'interface'", "'internal'", "'into'", 
      "'is'", "'join'", "'let'", "'lock'", "'long'", "'nameof'", "'namespace'", 
      "'new'", "'null'", "'object'", "'on'", "'operator'", "'orderby'", 
      "'out'", "'override'", "'params'", "'partial'", "'private'", "'protected'", 
      "'public'", "'readonly'", "'ref'", "'remove'", "'return'", "'sbyte'", 
      "'sealed'", "'select'", "'set'", "'short'", "'sizeof'", "'stackalloc'", 
      "'static'", "'string'", "'struct'", "'switch'", "'this'", "'throw'", 
      "'true'", "'try'", "'typeof'", "'uint'", "'ulong'", "'unchecked'", 
      "'unmanaged'", "'unsafe'", "'ushort'", "'using'", "'var'", "'virtual'", 
      "'void'", "'volatile'", "'when'", "'where'", "'while'", "'yield'", 
      "", "", "", "", "", "", "", "", "", "", "", "'{'", "'}'", "'['", "']'", 
      "'('", "')'", "'.'", "','", "':'", "';'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'&'", "'|'", "'^'", "'!'", "'~'", "'='", "'<'", "'>'", "'\\u003F'", 
      "'::'", "'\\u003F\\u003F'", "'++'", "'--'", "'&&'", "'||'", "'->'", 
      "'=='", "'!='", "'<='", "'>='", "'+='", "'-='", "'*='", "'/='", "'%='", 
      "'&='", "'|='", "'^='", "'<<'", "'<<='", "'\\u003F\\u003F='", "'..'", 
      "'{{'", "", "", "", "", "", "", "", "", "", "", "'define'", "'undef'", 
      "'elif'", "'endif'", "'line'", "", "", "", "", "", "", "'hidden'", 
      "", "", "", "'}}'"
    },
    std::vector<std::string>{
      "", "BYTE_ORDER_MARK", "SINGLE_LINE_DOC_COMMENT", "EMPTY_DELIMITED_DOC_COMMENT", 
      "DELIMITED_DOC_COMMENT", "SINGLE_LINE_COMMENT", "DELIMITED_COMMENT", 
      "WHITESPACES", "SHARP", "ABSTRACT", "ADD", "ALIAS", "ARGLIST", "AS", 
      "ASCENDING", "ASYNC", "AWAIT", "BASE", "BOOL", "BREAK", "BY", "BYTE", 
      "CASE", "CATCH", "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE", 
      "DECIMAL", "DEFAULT", "DELEGATE", "DESCENDING", "DO", "DOUBLE", "DYNAMIC", 
      "ELSE", "ENUM", "EQUALS", "EVENT", "EXPLICIT", "EXTERN", "FALSE", 
      "FINALLY", "FIXED", "FLOAT", "FOR", "FOREACH", "FROM", "GET", "GOTO", 
      "GROUP", "IF", "IMPLICIT", "IN", "INT", "INTERFACE", "INTERNAL", "INTO", 
      "IS", "JOIN", "LET", "LOCK", "LONG", "NAMEOF", "NAMESPACE", "NEW", 
      "NULL_", "OBJECT", "ON", "OPERATOR", "ORDERBY", "OUT", "OVERRIDE", 
      "PARAMS", "PARTIAL", "PRIVATE", "PROTECTED", "PUBLIC", "READONLY", 
      "REF", "REMOVE", "RETURN", "SBYTE", "SEALED", "SELECT", "SET", "SHORT", 
      "SIZEOF", "STACKALLOC", "STATIC", "STRING", "STRUCT", "SWITCH", "THIS", 
      "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "UNCHECKED", "UNMANAGED", 
      "UNSAFE", "USHORT", "USING", "VAR", "VIRTUAL", "VOID", "VOLATILE", 
      "WHEN", "WHERE", "WHILE", "YIELD", "IDENTIFIER", "LITERAL_ACCESS", 
      "INTEGER_LITERAL", "HEX_INTEGER_LITERAL", "BIN_INTEGER_LITERAL", "REAL_LITERAL", 
      "CHARACTER_LITERAL", "REGULAR_STRING", "VERBATIUM_STRING", "INTERPOLATED_REGULAR_STRING_START", 
      "INTERPOLATED_VERBATIUM_STRING_START", "OPEN_BRACE", "CLOSE_BRACE", 
      "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_PARENS", "CLOSE_PARENS", "DOT", 
      "COMMA", "COLON", "SEMICOLON", "PLUS", "MINUS", "STAR", "DIV", "PERCENT", 
      "AMP", "BITWISE_OR", "CARET", "BANG", "TILDE", "ASSIGNMENT", "LT", 
      "GT", "INTERR", "DOUBLE_COLON", "OP_COALESCING", "OP_INC", "OP_DEC", 
      "OP_AND", "OP_OR", "OP_PTR", "OP_EQ", "OP_NE", "OP_LE", "OP_GE", "OP_ADD_ASSIGNMENT", 
      "OP_SUB_ASSIGNMENT", "OP_MULT_ASSIGNMENT", "OP_DIV_ASSIGNMENT", "OP_MOD_ASSIGNMENT", 
      "OP_AND_ASSIGNMENT", "OP_OR_ASSIGNMENT", "OP_XOR_ASSIGNMENT", "OP_LEFT_SHIFT", 
      "OP_LEFT_SHIFT_ASSIGNMENT", "OP_COALESCING_ASSIGNMENT", "OP_RANGE", 
      "DOUBLE_CURLY_INSIDE", "OPEN_BRACE_INSIDE", "REGULAR_CHAR_INSIDE", 
      "VERBATIUM_DOUBLE_QUOTE_INSIDE", "DOUBLE_QUOTE_INSIDE", "REGULAR_STRING_INSIDE", 
      "VERBATIUM_INSIDE_STRING", "CLOSE_BRACE_INSIDE", "FORMAT_STRING", 
      "DIRECTIVE_WHITESPACES", "DIGITS", "DEFINE", "UNDEF", "ELIF", "ENDIF", 
      "LINE", "ERROR", "WARNING", "REGION", "ENDREGION", "PRAGMA", "NULLABLE", 
      "DIRECTIVE_HIDDEN", "CONDITIONAL_SYMBOL", "DIRECTIVE_NEW_LINE", "TEXT", 
      "DOUBLE_CURLY_CLOSE_INSIDE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,198,128,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,3,0,38,8,0,1,0,1,0,3,0,42,8,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,59,8,0,1,0,1,0,1,0,1,0,1,
  	0,3,0,66,8,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,
  	81,8,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,101,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,123,8,2,10,2,12,2,126,9,2,1,2,0,1,
  	4,3,0,2,4,0,1,1,1,196,196,149,0,80,1,0,0,0,2,82,1,0,0,0,4,100,1,0,0,0,
  	6,7,5,183,0,0,7,8,5,195,0,0,8,9,3,2,1,0,9,10,6,0,-1,0,10,81,1,0,0,0,11,
  	12,5,184,0,0,12,13,5,195,0,0,13,14,3,2,1,0,14,15,6,0,-1,0,15,81,1,0,0,
  	0,16,17,5,52,0,0,17,18,3,4,2,0,18,19,3,2,1,0,19,20,6,0,-1,0,20,81,1,0,
  	0,0,21,22,5,185,0,0,22,23,3,4,2,0,23,24,3,2,1,0,24,25,6,0,-1,0,25,81,
  	1,0,0,0,26,27,5,36,0,0,27,28,3,2,1,0,28,29,6,0,-1,0,29,81,1,0,0,0,30,
  	31,5,186,0,0,31,32,3,2,1,0,32,33,6,0,-1,0,33,81,1,0,0,0,34,41,5,187,0,
  	0,35,37,5,182,0,0,36,38,5,91,0,0,37,36,1,0,0,0,37,38,1,0,0,0,38,42,1,
  	0,0,0,39,42,5,30,0,0,40,42,5,194,0,0,41,35,1,0,0,0,41,39,1,0,0,0,41,40,
  	1,0,0,0,42,43,1,0,0,0,43,44,3,2,1,0,44,45,6,0,-1,0,45,81,1,0,0,0,46,47,
  	5,188,0,0,47,48,5,197,0,0,48,49,3,2,1,0,49,50,6,0,-1,0,50,81,1,0,0,0,
  	51,52,5,189,0,0,52,53,5,197,0,0,53,54,3,2,1,0,54,55,6,0,-1,0,55,81,1,
  	0,0,0,56,58,5,190,0,0,57,59,5,197,0,0,58,57,1,0,0,0,58,59,1,0,0,0,59,
  	60,1,0,0,0,60,61,3,2,1,0,61,62,6,0,-1,0,62,81,1,0,0,0,63,65,5,191,0,0,
  	64,66,5,197,0,0,65,64,1,0,0,0,65,66,1,0,0,0,66,67,1,0,0,0,67,68,3,2,1,
  	0,68,69,6,0,-1,0,69,81,1,0,0,0,70,71,5,192,0,0,71,72,5,197,0,0,72,73,
  	3,2,1,0,73,74,6,0,-1,0,74,81,1,0,0,0,75,76,5,193,0,0,76,77,5,197,0,0,
  	77,78,3,2,1,0,78,79,6,0,-1,0,79,81,1,0,0,0,80,6,1,0,0,0,80,11,1,0,0,0,
  	80,16,1,0,0,0,80,21,1,0,0,0,80,26,1,0,0,0,80,30,1,0,0,0,80,34,1,0,0,0,
  	80,46,1,0,0,0,80,51,1,0,0,0,80,56,1,0,0,0,80,63,1,0,0,0,80,70,1,0,0,0,
  	80,75,1,0,0,0,81,1,1,0,0,0,82,83,7,0,0,0,83,3,1,0,0,0,84,85,6,2,-1,0,
  	85,86,5,96,0,0,86,101,6,2,-1,0,87,88,5,42,0,0,88,101,6,2,-1,0,89,90,5,
  	195,0,0,90,101,6,2,-1,0,91,92,5,129,0,0,92,93,3,4,2,0,93,94,5,130,0,0,
  	94,95,6,2,-1,0,95,101,1,0,0,0,96,97,5,143,0,0,97,98,3,4,2,5,98,99,6,2,
  	-1,0,99,101,1,0,0,0,100,84,1,0,0,0,100,87,1,0,0,0,100,89,1,0,0,0,100,
  	91,1,0,0,0,100,96,1,0,0,0,101,124,1,0,0,0,102,103,10,4,0,0,103,104,5,
  	156,0,0,104,105,3,4,2,5,105,106,6,2,-1,0,106,123,1,0,0,0,107,108,10,3,
  	0,0,108,109,5,157,0,0,109,110,3,4,2,4,110,111,6,2,-1,0,111,123,1,0,0,
  	0,112,113,10,2,0,0,113,114,5,153,0,0,114,115,3,4,2,3,115,116,6,2,-1,0,
  	116,123,1,0,0,0,117,118,10,1,0,0,118,119,5,154,0,0,119,120,3,4,2,2,120,
  	121,6,2,-1,0,121,123,1,0,0,0,122,102,1,0,0,0,122,107,1,0,0,0,122,112,
  	1,0,0,0,122,117,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,
  	0,125,5,1,0,0,0,126,124,1,0,0,0,8,37,41,58,65,80,100,122,124
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csharppreprocessorparserParserStaticData = staticData.release();
}

}

CSharpPreprocessorParser::CSharpPreprocessorParser(TokenStream *input) : CSharpPreprocessorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CSharpPreprocessorParser::CSharpPreprocessorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : CSharpPreprocessorParserBase(input) {
  CSharpPreprocessorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *csharppreprocessorparserParserStaticData->atn, csharppreprocessorparserParserStaticData->decisionToDFA, csharppreprocessorparserParserStaticData->sharedContextCache, options);
}

CSharpPreprocessorParser::~CSharpPreprocessorParser() {
  delete _interpreter;
}

const atn::ATN& CSharpPreprocessorParser::getATN() const {
  return *csharppreprocessorparserParserStaticData->atn;
}

std::string CSharpPreprocessorParser::getGrammarFileName() const {
  return "CSharpPreprocessorParser.g4";
}

const std::vector<std::string>& CSharpPreprocessorParser::getRuleNames() const {
  return csharppreprocessorparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& CSharpPreprocessorParser::getVocabulary() const {
  return csharppreprocessorparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CSharpPreprocessorParser::getSerializedATN() const {
  return csharppreprocessorparserParserStaticData->serializedATN;
}


//----------------- Preprocessor_directiveContext ------------------------------------------------------------------

CSharpPreprocessorParser::Preprocessor_directiveContext::Preprocessor_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSharpPreprocessorParser::Preprocessor_directiveContext::getRuleIndex() const {
  return CSharpPreprocessorParser::RulePreprocessor_directive;
}

void CSharpPreprocessorParser::Preprocessor_directiveContext::copyFrom(Preprocessor_directiveContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->value = ctx->value;
}

//----------------- PreprocessorDiagnosticContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDiagnosticContext::ERROR() {
  return getToken(CSharpPreprocessorParser::ERROR, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDiagnosticContext::TEXT() {
  return getToken(CSharpPreprocessorParser::TEXT, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorDiagnosticContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDiagnosticContext::WARNING() {
  return getToken(CSharpPreprocessorParser::WARNING, 0);
}

CSharpPreprocessorParser::PreprocessorDiagnosticContext::PreprocessorDiagnosticContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorDiagnosticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDiagnostic(this);
}
void CSharpPreprocessorParser::PreprocessorDiagnosticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDiagnostic(this);
}
//----------------- PreprocessorNullableContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorNullableContext::NULLABLE() {
  return getToken(CSharpPreprocessorParser::NULLABLE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorNullableContext::TEXT() {
  return getToken(CSharpPreprocessorParser::TEXT, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorNullableContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

CSharpPreprocessorParser::PreprocessorNullableContext::PreprocessorNullableContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorNullableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorNullable(this);
}
void CSharpPreprocessorParser::PreprocessorNullableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorNullable(this);
}
//----------------- PreprocessorRegionContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorRegionContext::REGION() {
  return getToken(CSharpPreprocessorParser::REGION, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorRegionContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorRegionContext::TEXT() {
  return getToken(CSharpPreprocessorParser::TEXT, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorRegionContext::ENDREGION() {
  return getToken(CSharpPreprocessorParser::ENDREGION, 0);
}

CSharpPreprocessorParser::PreprocessorRegionContext::PreprocessorRegionContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorRegionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorRegion(this);
}
void CSharpPreprocessorParser::PreprocessorRegionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorRegion(this);
}
//----------------- PreprocessorDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDeclarationContext::DEFINE() {
  return getToken(CSharpPreprocessorParser::DEFINE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDeclarationContext::CONDITIONAL_SYMBOL() {
  return getToken(CSharpPreprocessorParser::CONDITIONAL_SYMBOL, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorDeclarationContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorDeclarationContext::UNDEF() {
  return getToken(CSharpPreprocessorParser::UNDEF, 0);
}

CSharpPreprocessorParser::PreprocessorDeclarationContext::PreprocessorDeclarationContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDeclaration(this);
}
void CSharpPreprocessorParser::PreprocessorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDeclaration(this);
}
//----------------- PreprocessorConditionalContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorConditionalContext::IF() {
  return getToken(CSharpPreprocessorParser::IF, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorConditionalContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

CSharpPreprocessorParser::Preprocessor_expressionContext* CSharpPreprocessorParser::PreprocessorConditionalContext::preprocessor_expression() {
  return getRuleContext<CSharpPreprocessorParser::Preprocessor_expressionContext>(0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorConditionalContext::ELIF() {
  return getToken(CSharpPreprocessorParser::ELIF, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorConditionalContext::ELSE() {
  return getToken(CSharpPreprocessorParser::ELSE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorConditionalContext::ENDIF() {
  return getToken(CSharpPreprocessorParser::ENDIF, 0);
}

CSharpPreprocessorParser::PreprocessorConditionalContext::PreprocessorConditionalContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorConditional(this);
}
void CSharpPreprocessorParser::PreprocessorConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorConditional(this);
}
//----------------- PreprocessorPragmaContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorPragmaContext::PRAGMA() {
  return getToken(CSharpPreprocessorParser::PRAGMA, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorPragmaContext::TEXT() {
  return getToken(CSharpPreprocessorParser::TEXT, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorPragmaContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

CSharpPreprocessorParser::PreprocessorPragmaContext::PreprocessorPragmaContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorPragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorPragma(this);
}
void CSharpPreprocessorParser::PreprocessorPragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorPragma(this);
}
//----------------- PreprocessorLineContext ------------------------------------------------------------------

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorLineContext::LINE() {
  return getToken(CSharpPreprocessorParser::LINE, 0);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::PreprocessorLineContext::directive_new_line_or_sharp() {
  return getRuleContext<CSharpPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorLineContext::DIGITS() {
  return getToken(CSharpPreprocessorParser::DIGITS, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorLineContext::DEFAULT() {
  return getToken(CSharpPreprocessorParser::DEFAULT, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorLineContext::DIRECTIVE_HIDDEN() {
  return getToken(CSharpPreprocessorParser::DIRECTIVE_HIDDEN, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::PreprocessorLineContext::STRING() {
  return getToken(CSharpPreprocessorParser::STRING, 0);
}

CSharpPreprocessorParser::PreprocessorLineContext::PreprocessorLineContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void CSharpPreprocessorParser::PreprocessorLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorLine(this);
}
void CSharpPreprocessorParser::PreprocessorLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorLine(this);
}
CSharpPreprocessorParser::Preprocessor_directiveContext* CSharpPreprocessorParser::preprocessor_directive() {
  Preprocessor_directiveContext *_localctx = _tracker.createInstance<Preprocessor_directiveContext>(_ctx, getState());
  enterRule(_localctx, 0, CSharpPreprocessorParser::RulePreprocessor_directive);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSharpPreprocessorParser::DEFINE: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorDeclarationContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(6);
        match(CSharpPreprocessorParser::DEFINE);
        setState(7);
        match(CSharpPreprocessorParser::CONDITIONAL_SYMBOL);
        setState(8);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveDefine(); 
        break;
      }

      case CSharpPreprocessorParser::UNDEF: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorDeclarationContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(11);
        match(CSharpPreprocessorParser::UNDEF);
        setState(12);
        match(CSharpPreprocessorParser::CONDITIONAL_SYMBOL);
        setState(13);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveUndef(); 
        break;
      }

      case CSharpPreprocessorParser::IF: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(16);
        match(CSharpPreprocessorParser::IF);
        setState(17);
        antlrcpp::downCast<PreprocessorConditionalContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(18);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveIf(); 
        break;
      }

      case CSharpPreprocessorParser::ELIF: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(21);
        match(CSharpPreprocessorParser::ELIF);
        setState(22);
        antlrcpp::downCast<PreprocessorConditionalContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(23);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveElif(); 
        break;
      }

      case CSharpPreprocessorParser::ELSE: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(26);
        match(CSharpPreprocessorParser::ELSE);
        setState(27);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveElse(); 
        break;
      }

      case CSharpPreprocessorParser::ENDIF: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(30);
        match(CSharpPreprocessorParser::ENDIF);
        setState(31);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveEndif(); 
        break;
      }

      case CSharpPreprocessorParser::LINE: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorLineContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(34);
        match(CSharpPreprocessorParser::LINE);
        setState(41);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CSharpPreprocessorParser::DIGITS: {
            setState(35);
            match(CSharpPreprocessorParser::DIGITS);
            setState(37);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CSharpPreprocessorParser::STRING) {
              setState(36);
              match(CSharpPreprocessorParser::STRING);
            }
            break;
          }

          case CSharpPreprocessorParser::DEFAULT: {
            setState(39);
            match(CSharpPreprocessorParser::DEFAULT);
            break;
          }

          case CSharpPreprocessorParser::DIRECTIVE_HIDDEN: {
            setState(40);
            match(CSharpPreprocessorParser::DIRECTIVE_HIDDEN);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(43);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveLine(); 
        break;
      }

      case CSharpPreprocessorParser::ERROR: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorDiagnosticContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(46);
        match(CSharpPreprocessorParser::ERROR);
        setState(47);
        match(CSharpPreprocessorParser::TEXT);
        setState(48);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveError(); 
        break;
      }

      case CSharpPreprocessorParser::WARNING: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorDiagnosticContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(51);
        match(CSharpPreprocessorParser::WARNING);
        setState(52);
        match(CSharpPreprocessorParser::TEXT);
        setState(53);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveWarning(); 
        break;
      }

      case CSharpPreprocessorParser::REGION: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorRegionContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(56);
        match(CSharpPreprocessorParser::REGION);
        setState(58);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CSharpPreprocessorParser::TEXT) {
          setState(57);
          match(CSharpPreprocessorParser::TEXT);
        }
        setState(60);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveRegion(); 
        break;
      }

      case CSharpPreprocessorParser::ENDREGION: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorRegionContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(63);
        match(CSharpPreprocessorParser::ENDREGION);
        setState(65);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CSharpPreprocessorParser::TEXT) {
          setState(64);
          match(CSharpPreprocessorParser::TEXT);
        }
        setState(67);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveEndregion(); 
        break;
      }

      case CSharpPreprocessorParser::PRAGMA: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorPragmaContext>(_localctx);
        enterOuterAlt(_localctx, 12);
        setState(70);
        match(CSharpPreprocessorParser::PRAGMA);
        setState(71);
        match(CSharpPreprocessorParser::TEXT);
        setState(72);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectivePragma(); 
        break;
      }

      case CSharpPreprocessorParser::NULLABLE: {
        _localctx = _tracker.createInstance<CSharpPreprocessorParser::PreprocessorNullableContext>(_localctx);
        enterOuterAlt(_localctx, 13);
        setState(75);
        match(CSharpPreprocessorParser::NULLABLE);
        setState(76);
        match(CSharpPreprocessorParser::TEXT);
        setState(77);
        directive_new_line_or_sharp();
         this.OnPreprocessorDirectiveNullable(); 
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

//----------------- Directive_new_line_or_sharpContext ------------------------------------------------------------------

CSharpPreprocessorParser::Directive_new_line_or_sharpContext::Directive_new_line_or_sharpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSharpPreprocessorParser::Directive_new_line_or_sharpContext::DIRECTIVE_NEW_LINE() {
  return getToken(CSharpPreprocessorParser::DIRECTIVE_NEW_LINE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Directive_new_line_or_sharpContext::EOF() {
  return getToken(CSharpPreprocessorParser::EOF, 0);
}


size_t CSharpPreprocessorParser::Directive_new_line_or_sharpContext::getRuleIndex() const {
  return CSharpPreprocessorParser::RuleDirective_new_line_or_sharp;
}

void CSharpPreprocessorParser::Directive_new_line_or_sharpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirective_new_line_or_sharp(this);
}

void CSharpPreprocessorParser::Directive_new_line_or_sharpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirective_new_line_or_sharp(this);
}

CSharpPreprocessorParser::Directive_new_line_or_sharpContext* CSharpPreprocessorParser::directive_new_line_or_sharp() {
  Directive_new_line_or_sharpContext *_localctx = _tracker.createInstance<Directive_new_line_or_sharpContext>(_ctx, getState());
  enterRule(_localctx, 2, CSharpPreprocessorParser::RuleDirective_new_line_or_sharp);
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
    setState(82);
    _la = _input->LA(1);
    if (!(_la == CSharpPreprocessorParser::EOF || _la == CSharpPreprocessorParser::DIRECTIVE_NEW_LINE)) {
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

//----------------- Preprocessor_expressionContext ------------------------------------------------------------------

CSharpPreprocessorParser::Preprocessor_expressionContext::Preprocessor_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::TRUE() {
  return getToken(CSharpPreprocessorParser::TRUE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::FALSE() {
  return getToken(CSharpPreprocessorParser::FALSE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::CONDITIONAL_SYMBOL() {
  return getToken(CSharpPreprocessorParser::CONDITIONAL_SYMBOL, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::OPEN_PARENS() {
  return getToken(CSharpPreprocessorParser::OPEN_PARENS, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::CLOSE_PARENS() {
  return getToken(CSharpPreprocessorParser::CLOSE_PARENS, 0);
}

std::vector<CSharpPreprocessorParser::Preprocessor_expressionContext *> CSharpPreprocessorParser::Preprocessor_expressionContext::preprocessor_expression() {
  return getRuleContexts<CSharpPreprocessorParser::Preprocessor_expressionContext>();
}

CSharpPreprocessorParser::Preprocessor_expressionContext* CSharpPreprocessorParser::Preprocessor_expressionContext::preprocessor_expression(size_t i) {
  return getRuleContext<CSharpPreprocessorParser::Preprocessor_expressionContext>(i);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::BANG() {
  return getToken(CSharpPreprocessorParser::BANG, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::OP_EQ() {
  return getToken(CSharpPreprocessorParser::OP_EQ, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::OP_NE() {
  return getToken(CSharpPreprocessorParser::OP_NE, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::OP_AND() {
  return getToken(CSharpPreprocessorParser::OP_AND, 0);
}

tree::TerminalNode* CSharpPreprocessorParser::Preprocessor_expressionContext::OP_OR() {
  return getToken(CSharpPreprocessorParser::OP_OR, 0);
}


size_t CSharpPreprocessorParser::Preprocessor_expressionContext::getRuleIndex() const {
  return CSharpPreprocessorParser::RulePreprocessor_expression;
}

void CSharpPreprocessorParser::Preprocessor_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessor_expression(this);
}

void CSharpPreprocessorParser::Preprocessor_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CSharpPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessor_expression(this);
}


CSharpPreprocessorParser::Preprocessor_expressionContext* CSharpPreprocessorParser::preprocessor_expression() {
   return preprocessor_expression(0);
}

CSharpPreprocessorParser::Preprocessor_expressionContext* CSharpPreprocessorParser::preprocessor_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSharpPreprocessorParser::Preprocessor_expressionContext *_localctx = _tracker.createInstance<Preprocessor_expressionContext>(_ctx, parentState);
  CSharpPreprocessorParser::Preprocessor_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CSharpPreprocessorParser::RulePreprocessor_expression, precedence);

    

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
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSharpPreprocessorParser::TRUE: {
        setState(85);
        match(CSharpPreprocessorParser::TRUE);
         this.OnPreprocessorExpressionTrue(); 
        break;
      }

      case CSharpPreprocessorParser::FALSE: {
        setState(87);
        match(CSharpPreprocessorParser::FALSE);
         this.OnPreprocessorExpressionFalse(); 
        break;
      }

      case CSharpPreprocessorParser::CONDITIONAL_SYMBOL: {
        setState(89);
        match(CSharpPreprocessorParser::CONDITIONAL_SYMBOL);
         this.OnPreprocessorExpressionConditionalSymbol(); 
        break;
      }

      case CSharpPreprocessorParser::OPEN_PARENS: {
        setState(91);
        match(CSharpPreprocessorParser::OPEN_PARENS);
        setState(92);
        antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(93);
        match(CSharpPreprocessorParser::CLOSE_PARENS);
         this.OnPreprocessorExpressionConditionalOpenParens(); 
        break;
      }

      case CSharpPreprocessorParser::BANG: {
        setState(96);
        match(CSharpPreprocessorParser::BANG);
        setState(97);
        antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr = preprocessor_expression(5);
         this.OnPreprocessorExpressionConditionalBang(); 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(102);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(103);
          match(CSharpPreprocessorParser::OP_EQ);
          setState(104);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(5);
           this.OnPreprocessorExpressionConditionalEq(); 
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(107);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(108);
          match(CSharpPreprocessorParser::OP_NE);
          setState(109);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(4);
           this.OnPreprocessorExpressionConditionalNe(); 
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(112);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(113);
          match(CSharpPreprocessorParser::OP_AND);
          setState(114);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(3);
           this.OnPreprocessorExpressionConditionalAnd(); 
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(117);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(118);
          match(CSharpPreprocessorParser::OP_OR);
          setState(119);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(2);
           this.OnPreprocessorExpressionConditionalOr(); 
          break;
        }

        default:
          break;
        } 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CSharpPreprocessorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return preprocessor_expressionSempred(antlrcpp::downCast<Preprocessor_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CSharpPreprocessorParser::preprocessor_expressionSempred(Preprocessor_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void CSharpPreprocessorParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csharppreprocessorparserParserInitialize();
#else
  ::antlr4::internal::call_once(csharppreprocessorparserParserOnceFlag, csharppreprocessorparserParserInitialize);
#endif
}
