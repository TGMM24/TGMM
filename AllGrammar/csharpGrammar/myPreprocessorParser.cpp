
// Generated from myPreprocessorParser.g4 by ANTLR 4.11.1


#include "myPreprocessorParserListener.h"
#include "myPreprocessorParserBase.h"
#include "myPreprocessorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyPreprocessorParserStaticData final {
  MyPreprocessorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyPreprocessorParserStaticData(const MyPreprocessorParserStaticData&) = delete;
  MyPreprocessorParserStaticData(MyPreprocessorParserStaticData&&) = delete;
  MyPreprocessorParserStaticData& operator=(const MyPreprocessorParserStaticData&) = delete;
  MyPreprocessorParserStaticData& operator=(MyPreprocessorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mypreprocessorparserParserOnceFlag;
MyPreprocessorParserStaticData *mypreprocessorparserParserStaticData = nullptr;

void mypreprocessorparserParserInitialize() {
  assert(mypreprocessorparserParserStaticData == nullptr);
  auto staticData = std::make_unique<MyPreprocessorParserStaticData>(
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
  mypreprocessorparserParserStaticData = staticData.release();
}

}

myPreprocessorParser::myPreprocessorParser(TokenStream *input) : myPreprocessorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

myPreprocessorParser::myPreprocessorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : myPreprocessorParserBase(input) {
  myPreprocessorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mypreprocessorparserParserStaticData->atn, mypreprocessorparserParserStaticData->decisionToDFA, mypreprocessorparserParserStaticData->sharedContextCache, options);
}

myPreprocessorParser::~myPreprocessorParser() {
  delete _interpreter;
}

const atn::ATN& myPreprocessorParser::getATN() const {
  return *mypreprocessorparserParserStaticData->atn;
}

std::string myPreprocessorParser::getGrammarFileName() const {
  return "myPreprocessorParser.g4";
}

const std::vector<std::string>& myPreprocessorParser::getRuleNames() const {
  return mypreprocessorparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& myPreprocessorParser::getVocabulary() const {
  return mypreprocessorparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myPreprocessorParser::getSerializedATN() const {
  return mypreprocessorparserParserStaticData->serializedATN;
}


//----------------- Preprocessor_directiveContext ------------------------------------------------------------------

myPreprocessorParser::Preprocessor_directiveContext::Preprocessor_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myPreprocessorParser::Preprocessor_directiveContext::getRuleIndex() const {
  return myPreprocessorParser::RulePreprocessor_directive;
}

void myPreprocessorParser::Preprocessor_directiveContext::copyFrom(Preprocessor_directiveContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->value = ctx->value;
}

//----------------- PreprocessorDiagnosticContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorDiagnosticContext::ERROR() {
  return getToken(myPreprocessorParser::ERROR, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorDiagnosticContext::TEXT() {
  return getToken(myPreprocessorParser::TEXT, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorDiagnosticContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorDiagnosticContext::WARNING() {
  return getToken(myPreprocessorParser::WARNING, 0);
}

myPreprocessorParser::PreprocessorDiagnosticContext::PreprocessorDiagnosticContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorDiagnosticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDiagnostic(this);
}
void myPreprocessorParser::PreprocessorDiagnosticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDiagnostic(this);
}
//----------------- PreprocessorNullableContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorNullableContext::NULLABLE() {
  return getToken(myPreprocessorParser::NULLABLE, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorNullableContext::TEXT() {
  return getToken(myPreprocessorParser::TEXT, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorNullableContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

myPreprocessorParser::PreprocessorNullableContext::PreprocessorNullableContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorNullableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorNullable(this);
}
void myPreprocessorParser::PreprocessorNullableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorNullable(this);
}
//----------------- PreprocessorRegionContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorRegionContext::REGION() {
  return getToken(myPreprocessorParser::REGION, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorRegionContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorRegionContext::TEXT() {
  return getToken(myPreprocessorParser::TEXT, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorRegionContext::ENDREGION() {
  return getToken(myPreprocessorParser::ENDREGION, 0);
}

myPreprocessorParser::PreprocessorRegionContext::PreprocessorRegionContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorRegionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorRegion(this);
}
void myPreprocessorParser::PreprocessorRegionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorRegion(this);
}
//----------------- PreprocessorDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorDeclarationContext::DEFINE() {
  return getToken(myPreprocessorParser::DEFINE, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorDeclarationContext::CONDITIONAL_SYMBOL() {
  return getToken(myPreprocessorParser::CONDITIONAL_SYMBOL, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorDeclarationContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorDeclarationContext::UNDEF() {
  return getToken(myPreprocessorParser::UNDEF, 0);
}

myPreprocessorParser::PreprocessorDeclarationContext::PreprocessorDeclarationContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDeclaration(this);
}
void myPreprocessorParser::PreprocessorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDeclaration(this);
}
//----------------- PreprocessorConditionalContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorConditionalContext::IF() {
  return getToken(myPreprocessorParser::IF, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorConditionalContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

myPreprocessorParser::Preprocessor_expressionContext* myPreprocessorParser::PreprocessorConditionalContext::preprocessor_expression() {
  return getRuleContext<myPreprocessorParser::Preprocessor_expressionContext>(0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorConditionalContext::ELIF() {
  return getToken(myPreprocessorParser::ELIF, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorConditionalContext::ELSE() {
  return getToken(myPreprocessorParser::ELSE, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorConditionalContext::ENDIF() {
  return getToken(myPreprocessorParser::ENDIF, 0);
}

myPreprocessorParser::PreprocessorConditionalContext::PreprocessorConditionalContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorConditional(this);
}
void myPreprocessorParser::PreprocessorConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorConditional(this);
}
//----------------- PreprocessorPragmaContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorPragmaContext::PRAGMA() {
  return getToken(myPreprocessorParser::PRAGMA, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorPragmaContext::TEXT() {
  return getToken(myPreprocessorParser::TEXT, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorPragmaContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

myPreprocessorParser::PreprocessorPragmaContext::PreprocessorPragmaContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorPragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorPragma(this);
}
void myPreprocessorParser::PreprocessorPragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorPragma(this);
}
//----------------- PreprocessorLineContext ------------------------------------------------------------------

tree::TerminalNode* myPreprocessorParser::PreprocessorLineContext::LINE() {
  return getToken(myPreprocessorParser::LINE, 0);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::PreprocessorLineContext::directive_new_line_or_sharp() {
  return getRuleContext<myPreprocessorParser::Directive_new_line_or_sharpContext>(0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorLineContext::DIGITS() {
  return getToken(myPreprocessorParser::DIGITS, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorLineContext::DEFAULT() {
  return getToken(myPreprocessorParser::DEFAULT, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorLineContext::DIRECTIVE_HIDDEN() {
  return getToken(myPreprocessorParser::DIRECTIVE_HIDDEN, 0);
}

tree::TerminalNode* myPreprocessorParser::PreprocessorLineContext::STRING() {
  return getToken(myPreprocessorParser::STRING, 0);
}

myPreprocessorParser::PreprocessorLineContext::PreprocessorLineContext(Preprocessor_directiveContext *ctx) { copyFrom(ctx); }

void myPreprocessorParser::PreprocessorLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorLine(this);
}
void myPreprocessorParser::PreprocessorLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorLine(this);
}
myPreprocessorParser::Preprocessor_directiveContext* myPreprocessorParser::preprocessor_directive() {
  Preprocessor_directiveContext *_localctx = _tracker.createInstance<Preprocessor_directiveContext>(_ctx, getState());
  enterRule(_localctx, 0, myPreprocessorParser::RulePreprocessor_directive);
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
      case myPreprocessorParser::DEFINE: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorDeclarationContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(6);
        match(myPreprocessorParser::DEFINE);
        setState(7);
        match(myPreprocessorParser::CONDITIONAL_SYMBOL);
        setState(8);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveDefine(); 
        break;
      }

      case myPreprocessorParser::UNDEF: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorDeclarationContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(11);
        match(myPreprocessorParser::UNDEF);
        setState(12);
        match(myPreprocessorParser::CONDITIONAL_SYMBOL);
        setState(13);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveUndef(); 
        break;
      }

      case myPreprocessorParser::IF: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(16);
        match(myPreprocessorParser::IF);
        setState(17);
        antlrcpp::downCast<PreprocessorConditionalContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(18);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveIf(); 
        break;
      }

      case myPreprocessorParser::ELIF: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(21);
        match(myPreprocessorParser::ELIF);
        setState(22);
        antlrcpp::downCast<PreprocessorConditionalContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(23);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveElif(); 
        break;
      }

      case myPreprocessorParser::ELSE: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(26);
        match(myPreprocessorParser::ELSE);
        setState(27);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveElse(); 
        break;
      }

      case myPreprocessorParser::ENDIF: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(30);
        match(myPreprocessorParser::ENDIF);
        setState(31);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveEndif(); 
        break;
      }

      case myPreprocessorParser::LINE: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorLineContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(34);
        match(myPreprocessorParser::LINE);
        setState(41);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case myPreprocessorParser::DIGITS: {
            setState(35);
            match(myPreprocessorParser::DIGITS);
            setState(37);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == myPreprocessorParser::STRING) {
              setState(36);
              match(myPreprocessorParser::STRING);
            }
            break;
          }

          case myPreprocessorParser::DEFAULT: {
            setState(39);
            match(myPreprocessorParser::DEFAULT);
            break;
          }

          case myPreprocessorParser::DIRECTIVE_HIDDEN: {
            setState(40);
            match(myPreprocessorParser::DIRECTIVE_HIDDEN);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(43);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveLine(); 
        break;
      }

      case myPreprocessorParser::ERROR: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorDiagnosticContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(46);
        match(myPreprocessorParser::ERROR);
        setState(47);
        match(myPreprocessorParser::TEXT);
        setState(48);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveError(); 
        break;
      }

      case myPreprocessorParser::WARNING: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorDiagnosticContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(51);
        match(myPreprocessorParser::WARNING);
        setState(52);
        match(myPreprocessorParser::TEXT);
        setState(53);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveWarning(); 
        break;
      }

      case myPreprocessorParser::REGION: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorRegionContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(56);
        match(myPreprocessorParser::REGION);
        setState(58);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myPreprocessorParser::TEXT) {
          setState(57);
          match(myPreprocessorParser::TEXT);
        }
        setState(60);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveRegion(); 
        break;
      }

      case myPreprocessorParser::ENDREGION: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorRegionContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(63);
        match(myPreprocessorParser::ENDREGION);
        setState(65);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myPreprocessorParser::TEXT) {
          setState(64);
          match(myPreprocessorParser::TEXT);
        }
        setState(67);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveEndregion(); 
        break;
      }

      case myPreprocessorParser::PRAGMA: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorPragmaContext>(_localctx);
        enterOuterAlt(_localctx, 12);
        setState(70);
        match(myPreprocessorParser::PRAGMA);
        setState(71);
        match(myPreprocessorParser::TEXT);
        setState(72);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectivePragma(); 
        break;
      }

      case myPreprocessorParser::NULLABLE: {
        _localctx = _tracker.createInstance<myPreprocessorParser::PreprocessorNullableContext>(_localctx);
        enterOuterAlt(_localctx, 13);
        setState(75);
        match(myPreprocessorParser::NULLABLE);
        setState(76);
        match(myPreprocessorParser::TEXT);
        setState(77);
        directive_new_line_or_sharp();
         this->OnPreprocessorDirectiveNullable(); 
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

myPreprocessorParser::Directive_new_line_or_sharpContext::Directive_new_line_or_sharpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myPreprocessorParser::Directive_new_line_or_sharpContext::DIRECTIVE_NEW_LINE() {
  return getToken(myPreprocessorParser::DIRECTIVE_NEW_LINE, 0);
}

tree::TerminalNode* myPreprocessorParser::Directive_new_line_or_sharpContext::EOF() {
  return getToken(myPreprocessorParser::EOF, 0);
}


size_t myPreprocessorParser::Directive_new_line_or_sharpContext::getRuleIndex() const {
  return myPreprocessorParser::RuleDirective_new_line_or_sharp;
}

void myPreprocessorParser::Directive_new_line_or_sharpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirective_new_line_or_sharp(this);
}

void myPreprocessorParser::Directive_new_line_or_sharpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirective_new_line_or_sharp(this);
}

myPreprocessorParser::Directive_new_line_or_sharpContext* myPreprocessorParser::directive_new_line_or_sharp() {
  Directive_new_line_or_sharpContext *_localctx = _tracker.createInstance<Directive_new_line_or_sharpContext>(_ctx, getState());
  enterRule(_localctx, 2, myPreprocessorParser::RuleDirective_new_line_or_sharp);
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
    if (!(_la == myPreprocessorParser::EOF || _la == myPreprocessorParser::DIRECTIVE_NEW_LINE)) {
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

myPreprocessorParser::Preprocessor_expressionContext::Preprocessor_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::TRUE() {
  return getToken(myPreprocessorParser::TRUE, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::FALSE() {
  return getToken(myPreprocessorParser::FALSE, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::CONDITIONAL_SYMBOL() {
  return getToken(myPreprocessorParser::CONDITIONAL_SYMBOL, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::OPEN_PARENS() {
  return getToken(myPreprocessorParser::OPEN_PARENS, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::CLOSE_PARENS() {
  return getToken(myPreprocessorParser::CLOSE_PARENS, 0);
}

std::vector<myPreprocessorParser::Preprocessor_expressionContext *> myPreprocessorParser::Preprocessor_expressionContext::preprocessor_expression() {
  return getRuleContexts<myPreprocessorParser::Preprocessor_expressionContext>();
}

myPreprocessorParser::Preprocessor_expressionContext* myPreprocessorParser::Preprocessor_expressionContext::preprocessor_expression(size_t i) {
  return getRuleContext<myPreprocessorParser::Preprocessor_expressionContext>(i);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::BANG() {
  return getToken(myPreprocessorParser::BANG, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::OP_EQ() {
  return getToken(myPreprocessorParser::OP_EQ, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::OP_NE() {
  return getToken(myPreprocessorParser::OP_NE, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::OP_AND() {
  return getToken(myPreprocessorParser::OP_AND, 0);
}

tree::TerminalNode* myPreprocessorParser::Preprocessor_expressionContext::OP_OR() {
  return getToken(myPreprocessorParser::OP_OR, 0);
}


size_t myPreprocessorParser::Preprocessor_expressionContext::getRuleIndex() const {
  return myPreprocessorParser::RulePreprocessor_expression;
}

void myPreprocessorParser::Preprocessor_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessor_expression(this);
}

void myPreprocessorParser::Preprocessor_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessor_expression(this);
}


myPreprocessorParser::Preprocessor_expressionContext* myPreprocessorParser::preprocessor_expression() {
   return preprocessor_expression(0);
}

myPreprocessorParser::Preprocessor_expressionContext* myPreprocessorParser::preprocessor_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  myPreprocessorParser::Preprocessor_expressionContext *_localctx = _tracker.createInstance<Preprocessor_expressionContext>(_ctx, parentState);
  myPreprocessorParser::Preprocessor_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, myPreprocessorParser::RulePreprocessor_expression, precedence);

    

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
      case myPreprocessorParser::TRUE: {
        setState(85);
        match(myPreprocessorParser::TRUE);
         this->OnPreprocessorExpressionTrue(); 
        break;
      }

      case myPreprocessorParser::FALSE: {
        setState(87);
        match(myPreprocessorParser::FALSE);
         this->OnPreprocessorExpressionFalse(); 
        break;
      }

      case myPreprocessorParser::CONDITIONAL_SYMBOL: {
        setState(89);
        match(myPreprocessorParser::CONDITIONAL_SYMBOL);
         this->OnPreprocessorExpressionConditionalSymbol(); 
        break;
      }

      case myPreprocessorParser::OPEN_PARENS: {
        setState(91);
        match(myPreprocessorParser::OPEN_PARENS);
        setState(92);
        antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr = preprocessor_expression(0);
        setState(93);
        match(myPreprocessorParser::CLOSE_PARENS);
         this->OnPreprocessorExpressionConditionalOpenParens(); 
        break;
      }

      case myPreprocessorParser::BANG: {
        setState(96);
        match(myPreprocessorParser::BANG);
        setState(97);
        antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr = preprocessor_expression(5);
         this->OnPreprocessorExpressionConditionalBang(); 
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
          match(myPreprocessorParser::OP_EQ);
          setState(104);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(5);
           this->OnPreprocessorExpressionConditionalEq(); 
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(107);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(108);
          match(myPreprocessorParser::OP_NE);
          setState(109);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(4);
           this->OnPreprocessorExpressionConditionalNe(); 
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(112);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(113);
          match(myPreprocessorParser::OP_AND);
          setState(114);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(3);
           this->OnPreprocessorExpressionConditionalAnd(); 
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Preprocessor_expressionContext>(parentContext, parentState);
          _localctx->expr1 = previousContext;
          pushNewRecursionContext(_localctx, startState, RulePreprocessor_expression);
          setState(117);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(118);
          match(myPreprocessorParser::OP_OR);
          setState(119);
          antlrcpp::downCast<Preprocessor_expressionContext *>(_localctx)->expr2 = preprocessor_expression(2);
           this->OnPreprocessorExpressionConditionalOr(); 
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

bool myPreprocessorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return preprocessor_expressionSempred(antlrcpp::downCast<Preprocessor_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool myPreprocessorParser::preprocessor_expressionSempred(Preprocessor_expressionContext *_localctx, size_t predicateIndex) {
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

void myPreprocessorParser::initialize() {
  ::antlr4::internal::call_once(mypreprocessorparserParserOnceFlag, mypreprocessorparserParserInitialize);
}
