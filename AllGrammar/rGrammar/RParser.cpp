
// Generated from R.g4 by ANTLR 4.13.0


#include "RListener.h"

#include "RParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RParserStaticData final {
  RParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RParserStaticData(const RParserStaticData&) = delete;
  RParserStaticData(RParserStaticData&&) = delete;
  RParserStaticData& operator=(const RParserStaticData&) = delete;
  RParserStaticData& operator=(RParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
RParserStaticData *rParserStaticData = nullptr;

void rParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rParserStaticData != nullptr) {
    return;
  }
#else
  assert(rParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RParserStaticData>(
    std::vector<std::string>{
      "prog", "expr", "exprlist", "formlist", "form", "sublist", "sub"
    },
    std::vector<std::string>{
      "", "';'", "'[['", "']'", "'['", "'::'", "':::'", "'$'", "'@'", "'^'", 
      "'-'", "'+'", "':'", "'*'", "'/'", "'>'", "'>='", "'<'", "'<='", "'=='", 
      "'!='", "'!'", "'&'", "'&&'", "'|'", "'||'", "'~'", "'<-'", "'<<-'", 
      "'='", "'->'", "'->>'", "':='", "'function'", "'('", "')'", "'{'", 
      "'}'", "'if'", "'else'", "'for'", "'in'", "'while'", "'repeat'", "'\\u003F'", 
      "'next'", "'break'", "'NULL'", "'NA'", "'Inf'", "'NaN'", "'TRUE'", 
      "'FALSE'", "','", "'...'", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "HEX", "INT", "FLOAT", "COMPLEX", "STRING", "ID", 
      "USER_OP", "NL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,64,215,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,
  	0,1,0,5,0,17,8,0,10,0,12,0,20,9,0,1,0,5,0,23,8,0,10,0,12,0,26,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,40,8,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	3,1,98,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,5,1,152,8,1,10,1,12,1,155,9,1,1,2,1,2,1,2,3,2,160,8,2,5,2,162,
  	8,2,10,2,12,2,165,9,2,1,2,3,2,168,8,2,1,3,1,3,1,3,5,3,173,8,3,10,3,12,
  	3,176,9,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,184,8,4,1,5,1,5,1,5,5,5,189,8,5,
  	10,5,12,5,192,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,3,6,213,8,6,1,6,0,1,2,7,0,2,4,6,8,10,12,0,9,2,
  	0,1,1,63,63,1,0,10,11,1,0,5,6,1,0,7,8,1,0,13,14,1,0,15,20,1,0,22,23,1,
  	0,24,25,1,0,27,32,268,0,24,1,0,0,0,2,97,1,0,0,0,4,167,1,0,0,0,6,169,1,
  	0,0,0,8,183,1,0,0,0,10,185,1,0,0,0,12,212,1,0,0,0,14,18,3,2,1,0,15,17,
  	7,0,0,0,16,15,1,0,0,0,17,20,1,0,0,0,18,16,1,0,0,0,18,19,1,0,0,0,19,23,
  	1,0,0,0,20,18,1,0,0,0,21,23,5,63,0,0,22,14,1,0,0,0,22,21,1,0,0,0,23,26,
  	1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,27,1,0,0,0,26,24,1,0,0,0,27,28,
  	5,0,0,1,28,1,1,0,0,0,29,30,6,1,-1,0,30,31,7,1,0,0,31,98,3,2,1,36,32,33,
  	5,21,0,0,33,98,3,2,1,30,34,35,5,26,0,0,35,98,3,2,1,27,36,37,5,33,0,0,
  	37,39,5,34,0,0,38,40,3,6,3,0,39,38,1,0,0,0,39,40,1,0,0,0,40,41,1,0,0,
  	0,41,42,5,35,0,0,42,98,3,2,1,24,43,44,5,36,0,0,44,45,3,4,2,0,45,46,5,
  	37,0,0,46,98,1,0,0,0,47,48,5,38,0,0,48,49,5,34,0,0,49,50,3,2,1,0,50,51,
  	5,35,0,0,51,52,3,2,1,21,52,98,1,0,0,0,53,54,5,38,0,0,54,55,5,34,0,0,55,
  	56,3,2,1,0,56,57,5,35,0,0,57,58,3,2,1,0,58,59,5,39,0,0,59,60,3,2,1,20,
  	60,98,1,0,0,0,61,62,5,40,0,0,62,63,5,34,0,0,63,64,5,61,0,0,64,65,5,41,
  	0,0,65,66,3,2,1,0,66,67,5,35,0,0,67,68,3,2,1,19,68,98,1,0,0,0,69,70,5,
  	42,0,0,70,71,5,34,0,0,71,72,3,2,1,0,72,73,5,35,0,0,73,74,3,2,1,18,74,
  	98,1,0,0,0,75,76,5,43,0,0,76,98,3,2,1,17,77,78,5,44,0,0,78,98,3,2,1,16,
  	79,98,5,45,0,0,80,98,5,46,0,0,81,82,5,34,0,0,82,83,3,2,1,0,83,84,5,35,
  	0,0,84,98,1,0,0,0,85,98,5,61,0,0,86,98,5,60,0,0,87,98,5,56,0,0,88,98,
  	5,57,0,0,89,98,5,58,0,0,90,98,5,59,0,0,91,98,5,47,0,0,92,98,5,48,0,0,
  	93,98,5,49,0,0,94,98,5,50,0,0,95,98,5,51,0,0,96,98,5,52,0,0,97,29,1,0,
  	0,0,97,32,1,0,0,0,97,34,1,0,0,0,97,36,1,0,0,0,97,43,1,0,0,0,97,47,1,0,
  	0,0,97,53,1,0,0,0,97,61,1,0,0,0,97,69,1,0,0,0,97,75,1,0,0,0,97,77,1,0,
  	0,0,97,79,1,0,0,0,97,80,1,0,0,0,97,81,1,0,0,0,97,85,1,0,0,0,97,86,1,0,
  	0,0,97,87,1,0,0,0,97,88,1,0,0,0,97,89,1,0,0,0,97,90,1,0,0,0,97,91,1,0,
  	0,0,97,92,1,0,0,0,97,93,1,0,0,0,97,94,1,0,0,0,97,95,1,0,0,0,97,96,1,0,
  	0,0,98,153,1,0,0,0,99,100,10,39,0,0,100,101,7,2,0,0,101,152,3,2,1,40,
  	102,103,10,38,0,0,103,104,7,3,0,0,104,152,3,2,1,39,105,106,10,37,0,0,
  	106,107,5,9,0,0,107,152,3,2,1,37,108,109,10,35,0,0,109,110,5,12,0,0,110,
  	152,3,2,1,36,111,112,10,34,0,0,112,113,5,62,0,0,113,152,3,2,1,35,114,
  	115,10,33,0,0,115,116,7,4,0,0,116,152,3,2,1,34,117,118,10,32,0,0,118,
  	119,7,1,0,0,119,152,3,2,1,33,120,121,10,31,0,0,121,122,7,5,0,0,122,152,
  	3,2,1,32,123,124,10,29,0,0,124,125,7,6,0,0,125,152,3,2,1,30,126,127,10,
  	28,0,0,127,128,7,7,0,0,128,152,3,2,1,29,129,130,10,26,0,0,130,131,5,26,
  	0,0,131,152,3,2,1,27,132,133,10,25,0,0,133,134,7,8,0,0,134,152,3,2,1,
  	26,135,136,10,41,0,0,136,137,5,2,0,0,137,138,3,10,5,0,138,139,5,3,0,0,
  	139,140,5,3,0,0,140,152,1,0,0,0,141,142,10,40,0,0,142,143,5,4,0,0,143,
  	144,3,10,5,0,144,145,5,3,0,0,145,152,1,0,0,0,146,147,10,23,0,0,147,148,
  	5,34,0,0,148,149,3,10,5,0,149,150,5,35,0,0,150,152,1,0,0,0,151,99,1,0,
  	0,0,151,102,1,0,0,0,151,105,1,0,0,0,151,108,1,0,0,0,151,111,1,0,0,0,151,
  	114,1,0,0,0,151,117,1,0,0,0,151,120,1,0,0,0,151,123,1,0,0,0,151,126,1,
  	0,0,0,151,129,1,0,0,0,151,132,1,0,0,0,151,135,1,0,0,0,151,141,1,0,0,0,
  	151,146,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,3,
  	1,0,0,0,155,153,1,0,0,0,156,163,3,2,1,0,157,159,7,0,0,0,158,160,3,2,1,
  	0,159,158,1,0,0,0,159,160,1,0,0,0,160,162,1,0,0,0,161,157,1,0,0,0,162,
  	165,1,0,0,0,163,161,1,0,0,0,163,164,1,0,0,0,164,168,1,0,0,0,165,163,1,
  	0,0,0,166,168,1,0,0,0,167,156,1,0,0,0,167,166,1,0,0,0,168,5,1,0,0,0,169,
  	174,3,8,4,0,170,171,5,53,0,0,171,173,3,8,4,0,172,170,1,0,0,0,173,176,
  	1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,7,1,0,0,0,176,174,1,0,0,0,
  	177,184,5,61,0,0,178,179,5,61,0,0,179,180,5,29,0,0,180,184,3,2,1,0,181,
  	184,5,54,0,0,182,184,5,55,0,0,183,177,1,0,0,0,183,178,1,0,0,0,183,181,
  	1,0,0,0,183,182,1,0,0,0,184,9,1,0,0,0,185,190,3,12,6,0,186,187,5,53,0,
  	0,187,189,3,12,6,0,188,186,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,
  	191,1,0,0,0,191,11,1,0,0,0,192,190,1,0,0,0,193,213,3,2,1,0,194,195,5,
  	61,0,0,195,213,5,29,0,0,196,197,5,61,0,0,197,198,5,29,0,0,198,213,3,2,
  	1,0,199,200,5,60,0,0,200,213,5,29,0,0,201,202,5,60,0,0,202,203,5,29,0,
  	0,203,213,3,2,1,0,204,205,5,47,0,0,205,213,5,29,0,0,206,207,5,47,0,0,
  	207,208,5,29,0,0,208,213,3,2,1,0,209,213,5,54,0,0,210,213,5,55,0,0,211,
  	213,1,0,0,0,212,193,1,0,0,0,212,194,1,0,0,0,212,196,1,0,0,0,212,199,1,
  	0,0,0,212,201,1,0,0,0,212,204,1,0,0,0,212,206,1,0,0,0,212,209,1,0,0,0,
  	212,210,1,0,0,0,212,211,1,0,0,0,213,13,1,0,0,0,14,18,22,24,39,97,151,
  	153,159,163,167,174,183,190,212
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rParserStaticData = staticData.release();
}

}

RParser::RParser(TokenStream *input) : RParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RParser::RParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rParserStaticData->atn, rParserStaticData->decisionToDFA, rParserStaticData->sharedContextCache, options);
}

RParser::~RParser() {
  delete _interpreter;
}

const atn::ATN& RParser::getATN() const {
  return *rParserStaticData->atn;
}

std::string RParser::getGrammarFileName() const {
  return "R.g4";
}

const std::vector<std::string>& RParser::getRuleNames() const {
  return rParserStaticData->ruleNames;
}

const dfa::Vocabulary& RParser::getVocabulary() const {
  return rParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RParser::getSerializedATN() const {
  return rParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

RParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RParser::ProgContext::EOF() {
  return getToken(RParser::EOF, 0);
}

std::vector<RParser::ExprContext *> RParser::ProgContext::expr() {
  return getRuleContexts<RParser::ExprContext>();
}

RParser::ExprContext* RParser::ProgContext::expr(size_t i) {
  return getRuleContext<RParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> RParser::ProgContext::NL() {
  return getTokens(RParser::NL);
}

tree::TerminalNode* RParser::ProgContext::NL(size_t i) {
  return getToken(RParser::NL, i);
}


size_t RParser::ProgContext::getRuleIndex() const {
  return RParser::RuleProg;
}

void RParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void RParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

RParser::ProgContext* RParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, RParser::RuleProg);
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
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -4674739342309061632) != 0)) {
      setState(22);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RParser::T__9:
        case RParser::T__10:
        case RParser::T__20:
        case RParser::T__25:
        case RParser::T__32:
        case RParser::T__33:
        case RParser::T__35:
        case RParser::T__37:
        case RParser::T__39:
        case RParser::T__41:
        case RParser::T__42:
        case RParser::T__43:
        case RParser::T__44:
        case RParser::T__45:
        case RParser::T__46:
        case RParser::T__47:
        case RParser::T__48:
        case RParser::T__49:
        case RParser::T__50:
        case RParser::T__51:
        case RParser::HEX:
        case RParser::INT:
        case RParser::FLOAT:
        case RParser::COMPLEX:
        case RParser::STRING:
        case RParser::ID: {
          setState(14);
          expr(0);
          setState(18);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(15);
              _la = _input->LA(1);
              if (!(_la == RParser::T__0

              || _la == RParser::NL)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              } 
            }
            setState(20);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
          }
          break;
        }

        case RParser::NL: {
          setState(21);
          match(RParser::NL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(27);
    match(RParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

RParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RParser::ExprContext *> RParser::ExprContext::expr() {
  return getRuleContexts<RParser::ExprContext>();
}

RParser::ExprContext* RParser::ExprContext::expr(size_t i) {
  return getRuleContext<RParser::ExprContext>(i);
}

RParser::FormlistContext* RParser::ExprContext::formlist() {
  return getRuleContext<RParser::FormlistContext>(0);
}

RParser::ExprlistContext* RParser::ExprContext::exprlist() {
  return getRuleContext<RParser::ExprlistContext>(0);
}

tree::TerminalNode* RParser::ExprContext::ID() {
  return getToken(RParser::ID, 0);
}

tree::TerminalNode* RParser::ExprContext::STRING() {
  return getToken(RParser::STRING, 0);
}

tree::TerminalNode* RParser::ExprContext::HEX() {
  return getToken(RParser::HEX, 0);
}

tree::TerminalNode* RParser::ExprContext::INT() {
  return getToken(RParser::INT, 0);
}

tree::TerminalNode* RParser::ExprContext::FLOAT() {
  return getToken(RParser::FLOAT, 0);
}

tree::TerminalNode* RParser::ExprContext::COMPLEX() {
  return getToken(RParser::COMPLEX, 0);
}

tree::TerminalNode* RParser::ExprContext::USER_OP() {
  return getToken(RParser::USER_OP, 0);
}

RParser::SublistContext* RParser::ExprContext::sublist() {
  return getRuleContext<RParser::SublistContext>(0);
}


size_t RParser::ExprContext::getRuleIndex() const {
  return RParser::RuleExpr;
}

void RParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void RParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


RParser::ExprContext* RParser::expr() {
   return expr(0);
}

RParser::ExprContext* RParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  RParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, RParser::RuleExpr, precedence);

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
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(30);
      _la = _input->LA(1);
      if (!(_la == RParser::T__9

      || _la == RParser::T__10)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(31);
      expr(36);
      break;
    }

    case 2: {
      setState(32);
      match(RParser::T__20);
      setState(33);
      expr(30);
      break;
    }

    case 3: {
      setState(34);
      match(RParser::T__25);
      setState(35);
      expr(27);
      break;
    }

    case 4: {
      setState(36);
      match(RParser::T__32);
      setState(37);
      match(RParser::T__33);
      setState(39);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2359886204742139904) != 0)) {
        setState(38);
        formlist();
      }
      setState(41);
      match(RParser::T__34);
      setState(42);
      expr(24);
      break;
    }

    case 5: {
      setState(43);
      match(RParser::T__35);
      setState(44);
      exprlist();
      setState(45);
      match(RParser::T__36);
      break;
    }

    case 6: {
      setState(47);
      match(RParser::T__37);
      setState(48);
      match(RParser::T__33);
      setState(49);
      expr(0);
      setState(50);
      match(RParser::T__34);
      setState(51);
      expr(21);
      break;
    }

    case 7: {
      setState(53);
      match(RParser::T__37);
      setState(54);
      match(RParser::T__33);
      setState(55);
      expr(0);
      setState(56);
      match(RParser::T__34);
      setState(57);
      expr(0);
      setState(58);
      match(RParser::T__38);
      setState(59);
      expr(20);
      break;
    }

    case 8: {
      setState(61);
      match(RParser::T__39);
      setState(62);
      match(RParser::T__33);
      setState(63);
      match(RParser::ID);
      setState(64);
      match(RParser::T__40);
      setState(65);
      expr(0);
      setState(66);
      match(RParser::T__34);
      setState(67);
      expr(19);
      break;
    }

    case 9: {
      setState(69);
      match(RParser::T__41);
      setState(70);
      match(RParser::T__33);
      setState(71);
      expr(0);
      setState(72);
      match(RParser::T__34);
      setState(73);
      expr(18);
      break;
    }

    case 10: {
      setState(75);
      match(RParser::T__42);
      setState(76);
      expr(17);
      break;
    }

    case 11: {
      setState(77);
      match(RParser::T__43);
      setState(78);
      expr(16);
      break;
    }

    case 12: {
      setState(79);
      match(RParser::T__44);
      break;
    }

    case 13: {
      setState(80);
      match(RParser::T__45);
      break;
    }

    case 14: {
      setState(81);
      match(RParser::T__33);
      setState(82);
      expr(0);
      setState(83);
      match(RParser::T__34);
      break;
    }

    case 15: {
      setState(85);
      match(RParser::ID);
      break;
    }

    case 16: {
      setState(86);
      match(RParser::STRING);
      break;
    }

    case 17: {
      setState(87);
      match(RParser::HEX);
      break;
    }

    case 18: {
      setState(88);
      match(RParser::INT);
      break;
    }

    case 19: {
      setState(89);
      match(RParser::FLOAT);
      break;
    }

    case 20: {
      setState(90);
      match(RParser::COMPLEX);
      break;
    }

    case 21: {
      setState(91);
      match(RParser::T__46);
      break;
    }

    case 22: {
      setState(92);
      match(RParser::T__47);
      break;
    }

    case 23: {
      setState(93);
      match(RParser::T__48);
      break;
    }

    case 24: {
      setState(94);
      match(RParser::T__49);
      break;
    }

    case 25: {
      setState(95);
      match(RParser::T__50);
      break;
    }

    case 26: {
      setState(96);
      match(RParser::T__51);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(151);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(99);

          if (!(precpred(_ctx, 39))) throw FailedPredicateException(this, "precpred(_ctx, 39)");
          setState(100);
          _la = _input->LA(1);
          if (!(_la == RParser::T__4

          || _la == RParser::T__5)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(101);
          expr(40);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(102);

          if (!(precpred(_ctx, 38))) throw FailedPredicateException(this, "precpred(_ctx, 38)");
          setState(103);
          _la = _input->LA(1);
          if (!(_la == RParser::T__6

          || _la == RParser::T__7)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(104);
          expr(39);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(105);

          if (!(precpred(_ctx, 37))) throw FailedPredicateException(this, "precpred(_ctx, 37)");
          setState(106);
          match(RParser::T__8);
          setState(107);
          expr(37);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(108);

          if (!(precpred(_ctx, 35))) throw FailedPredicateException(this, "precpred(_ctx, 35)");
          setState(109);
          match(RParser::T__11);
          setState(110);
          expr(36);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(111);

          if (!(precpred(_ctx, 34))) throw FailedPredicateException(this, "precpred(_ctx, 34)");
          setState(112);
          match(RParser::USER_OP);
          setState(113);
          expr(35);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(114);

          if (!(precpred(_ctx, 33))) throw FailedPredicateException(this, "precpred(_ctx, 33)");
          setState(115);
          _la = _input->LA(1);
          if (!(_la == RParser::T__12

          || _la == RParser::T__13)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(116);
          expr(34);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(117);

          if (!(precpred(_ctx, 32))) throw FailedPredicateException(this, "precpred(_ctx, 32)");
          setState(118);
          _la = _input->LA(1);
          if (!(_la == RParser::T__9

          || _la == RParser::T__10)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(119);
          expr(33);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(121);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2064384) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          expr(32);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(123);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(124);
          _la = _input->LA(1);
          if (!(_la == RParser::T__21

          || _la == RParser::T__22)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(125);
          expr(30);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(126);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(127);
          _la = _input->LA(1);
          if (!(_la == RParser::T__23

          || _la == RParser::T__24)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(128);
          expr(29);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(130);
          match(RParser::T__25);
          setState(131);
          expr(27);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(132);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(133);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8455716864) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(134);
          expr(26);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(135);

          if (!(precpred(_ctx, 41))) throw FailedPredicateException(this, "precpred(_ctx, 41)");
          setState(136);
          match(RParser::T__1);
          setState(137);
          sublist();
          setState(138);
          match(RParser::T__2);
          setState(139);
          match(RParser::T__2);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(141);

          if (!(precpred(_ctx, 40))) throw FailedPredicateException(this, "precpred(_ctx, 40)");
          setState(142);
          match(RParser::T__3);
          setState(143);
          sublist();
          setState(144);
          match(RParser::T__2);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(146);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(147);
          match(RParser::T__33);
          setState(148);
          sublist();
          setState(149);
          match(RParser::T__34);
          break;
        }

        default:
          break;
        } 
      }
      setState(155);
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

//----------------- ExprlistContext ------------------------------------------------------------------

RParser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RParser::ExprContext *> RParser::ExprlistContext::expr() {
  return getRuleContexts<RParser::ExprContext>();
}

RParser::ExprContext* RParser::ExprlistContext::expr(size_t i) {
  return getRuleContext<RParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> RParser::ExprlistContext::NL() {
  return getTokens(RParser::NL);
}

tree::TerminalNode* RParser::ExprlistContext::NL(size_t i) {
  return getToken(RParser::NL, i);
}


size_t RParser::ExprlistContext::getRuleIndex() const {
  return RParser::RuleExprlist;
}

void RParser::ExprlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprlist(this);
}

void RParser::ExprlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprlist(this);
}

RParser::ExprlistContext* RParser::exprlist() {
  ExprlistContext *_localctx = _tracker.createInstance<ExprlistContext>(_ctx, getState());
  enterRule(_localctx, 4, RParser::RuleExprlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RParser::T__9:
      case RParser::T__10:
      case RParser::T__20:
      case RParser::T__25:
      case RParser::T__32:
      case RParser::T__33:
      case RParser::T__35:
      case RParser::T__37:
      case RParser::T__39:
      case RParser::T__41:
      case RParser::T__42:
      case RParser::T__43:
      case RParser::T__44:
      case RParser::T__45:
      case RParser::T__46:
      case RParser::T__47:
      case RParser::T__48:
      case RParser::T__49:
      case RParser::T__50:
      case RParser::T__51:
      case RParser::HEX:
      case RParser::INT:
      case RParser::FLOAT:
      case RParser::COMPLEX:
      case RParser::STRING:
      case RParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        expr(0);
        setState(163);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RParser::T__0

        || _la == RParser::NL) {
          setState(157);
          _la = _input->LA(1);
          if (!(_la == RParser::T__0

          || _la == RParser::NL)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(159);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4548632694545714176) != 0)) {
            setState(158);
            expr(0);
          }
          setState(165);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case RParser::T__36: {
        enterOuterAlt(_localctx, 2);

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

//----------------- FormlistContext ------------------------------------------------------------------

RParser::FormlistContext::FormlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RParser::FormContext *> RParser::FormlistContext::form() {
  return getRuleContexts<RParser::FormContext>();
}

RParser::FormContext* RParser::FormlistContext::form(size_t i) {
  return getRuleContext<RParser::FormContext>(i);
}


size_t RParser::FormlistContext::getRuleIndex() const {
  return RParser::RuleFormlist;
}

void RParser::FormlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormlist(this);
}

void RParser::FormlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormlist(this);
}

RParser::FormlistContext* RParser::formlist() {
  FormlistContext *_localctx = _tracker.createInstance<FormlistContext>(_ctx, getState());
  enterRule(_localctx, 6, RParser::RuleFormlist);
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
    setState(169);
    form();
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RParser::T__52) {
      setState(170);
      match(RParser::T__52);
      setState(171);
      form();
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormContext ------------------------------------------------------------------

RParser::FormContext::FormContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RParser::FormContext::ID() {
  return getToken(RParser::ID, 0);
}

RParser::ExprContext* RParser::FormContext::expr() {
  return getRuleContext<RParser::ExprContext>(0);
}


size_t RParser::FormContext::getRuleIndex() const {
  return RParser::RuleForm;
}

void RParser::FormContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForm(this);
}

void RParser::FormContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForm(this);
}

RParser::FormContext* RParser::form() {
  FormContext *_localctx = _tracker.createInstance<FormContext>(_ctx, getState());
  enterRule(_localctx, 8, RParser::RuleForm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(177);
      match(RParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(178);
      match(RParser::ID);
      setState(179);
      match(RParser::T__28);
      setState(180);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(181);
      match(RParser::T__53);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(182);
      match(RParser::T__54);
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

//----------------- SublistContext ------------------------------------------------------------------

RParser::SublistContext::SublistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RParser::SubContext *> RParser::SublistContext::sub() {
  return getRuleContexts<RParser::SubContext>();
}

RParser::SubContext* RParser::SublistContext::sub(size_t i) {
  return getRuleContext<RParser::SubContext>(i);
}


size_t RParser::SublistContext::getRuleIndex() const {
  return RParser::RuleSublist;
}

void RParser::SublistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSublist(this);
}

void RParser::SublistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSublist(this);
}

RParser::SublistContext* RParser::sublist() {
  SublistContext *_localctx = _tracker.createInstance<SublistContext>(_ctx, getState());
  enterRule(_localctx, 10, RParser::RuleSublist);
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
    setState(185);
    sub();
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RParser::T__52) {
      setState(186);
      match(RParser::T__52);
      setState(187);
      sub();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubContext ------------------------------------------------------------------

RParser::SubContext::SubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RParser::ExprContext* RParser::SubContext::expr() {
  return getRuleContext<RParser::ExprContext>(0);
}

tree::TerminalNode* RParser::SubContext::ID() {
  return getToken(RParser::ID, 0);
}

tree::TerminalNode* RParser::SubContext::STRING() {
  return getToken(RParser::STRING, 0);
}


size_t RParser::SubContext::getRuleIndex() const {
  return RParser::RuleSub;
}

void RParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}

void RParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

RParser::SubContext* RParser::sub() {
  SubContext *_localctx = _tracker.createInstance<SubContext>(_ctx, getState());
  enterRule(_localctx, 12, RParser::RuleSub);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(193);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      match(RParser::ID);
      setState(195);
      match(RParser::T__28);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(196);
      match(RParser::ID);
      setState(197);
      match(RParser::T__28);
      setState(198);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(199);
      match(RParser::STRING);
      setState(200);
      match(RParser::T__28);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(201);
      match(RParser::STRING);
      setState(202);
      match(RParser::T__28);
      setState(203);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(204);
      match(RParser::T__46);
      setState(205);
      match(RParser::T__28);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(206);
      match(RParser::T__46);
      setState(207);
      match(RParser::T__28);
      setState(208);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(209);
      match(RParser::T__53);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(210);
      match(RParser::T__54);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);

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

bool RParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 39);
    case 1: return precpred(_ctx, 38);
    case 2: return precpred(_ctx, 37);
    case 3: return precpred(_ctx, 35);
    case 4: return precpred(_ctx, 34);
    case 5: return precpred(_ctx, 33);
    case 6: return precpred(_ctx, 32);
    case 7: return precpred(_ctx, 31);
    case 8: return precpred(_ctx, 29);
    case 9: return precpred(_ctx, 28);
    case 10: return precpred(_ctx, 26);
    case 11: return precpred(_ctx, 25);
    case 12: return precpred(_ctx, 41);
    case 13: return precpred(_ctx, 40);
    case 14: return precpred(_ctx, 23);

  default:
    break;
  }
  return true;
}

void RParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rParserInitialize();
#else
  ::antlr4::internal::call_once(rParserOnceFlag, rParserInitialize);
#endif
}
