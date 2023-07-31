
// Generated from RFilter.g4 by ANTLR 4.13.0


#include "RFilterListener.h"

#include "RFilter.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RFilterStaticData final {
  RFilterStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RFilterStaticData(const RFilterStaticData&) = delete;
  RFilterStaticData(RFilterStaticData&&) = delete;
  RFilterStaticData& operator=(const RFilterStaticData&) = delete;
  RFilterStaticData& operator=(RFilterStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rfilterParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
RFilterStaticData *rfilterParserStaticData = nullptr;

void rfilterParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rfilterParserStaticData != nullptr) {
    return;
  }
#else
  assert(rfilterParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RFilterStaticData>(
    std::vector<std::string>{
      "stream", "eat", "elem", "atom", "op"
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
  	4,1,64,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,5,0,14,
  	8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,4,1,23,8,1,11,1,12,1,24,1,2,1,2,
  	3,2,29,8,2,1,2,1,2,1,2,3,2,34,8,2,1,2,1,2,1,2,1,2,5,2,40,8,2,10,2,12,
  	2,43,9,2,1,2,1,2,1,2,1,2,1,2,5,2,50,8,2,10,2,12,2,53,9,2,1,2,1,2,1,2,
  	1,2,5,2,59,8,2,10,2,12,2,62,9,2,1,2,1,2,1,2,1,2,5,2,68,8,2,10,2,12,2,
  	71,9,2,1,2,1,2,1,2,1,2,3,2,77,8,2,1,2,1,2,1,2,5,2,82,8,2,10,2,12,2,85,
  	9,2,1,2,1,2,3,2,89,8,2,1,2,1,2,3,2,93,8,2,1,2,1,2,1,2,5,2,98,8,2,10,2,
  	12,2,101,9,2,1,2,1,2,3,2,105,8,2,1,2,1,2,3,2,109,8,2,1,2,1,2,1,2,5,2,
  	114,8,2,10,2,12,2,117,9,2,1,2,1,2,3,2,121,8,2,1,2,1,2,3,2,125,8,2,1,2,
  	1,2,1,2,5,2,130,8,2,10,2,12,2,133,9,2,1,2,1,2,3,2,137,8,2,1,2,1,2,3,2,
  	141,8,2,1,3,1,3,1,4,1,4,1,4,0,0,5,0,2,4,6,8,0,2,2,0,45,52,56,61,6,0,5,
  	27,29,30,41,41,43,44,53,54,62,62,182,0,15,1,0,0,0,2,22,1,0,0,0,4,140,
  	1,0,0,0,6,142,1,0,0,0,8,144,1,0,0,0,10,14,3,4,2,0,11,14,5,63,0,0,12,14,
  	5,1,0,0,13,10,1,0,0,0,13,11,1,0,0,0,13,12,1,0,0,0,14,17,1,0,0,0,15,13,
  	1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,0,1,19,1,
  	1,0,0,0,20,21,5,63,0,0,21,23,6,1,-1,0,22,20,1,0,0,0,23,24,1,0,0,0,24,
  	22,1,0,0,0,24,25,1,0,0,0,25,3,1,0,0,0,26,28,3,8,4,0,27,29,3,2,1,0,28,
  	27,1,0,0,0,28,29,1,0,0,0,29,141,1,0,0,0,30,141,3,6,3,0,31,33,5,36,0,0,
  	32,34,3,2,1,0,33,32,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,0,35,41,6,2,-1,
  	0,36,40,3,4,2,0,37,40,5,63,0,0,38,40,5,1,0,0,39,36,1,0,0,0,39,37,1,0,
  	0,0,39,38,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,
  	0,0,43,41,1,0,0,0,44,45,6,2,-1,0,45,141,5,37,0,0,46,51,5,34,0,0,47,50,
  	3,4,2,0,48,50,3,2,1,0,49,47,1,0,0,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,
  	1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,51,1,0,0,0,54,141,5,35,0,0,55,
  	60,5,4,0,0,56,59,3,4,2,0,57,59,3,2,1,0,58,56,1,0,0,0,58,57,1,0,0,0,59,
  	62,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,
  	141,5,3,0,0,64,69,5,2,0,0,65,68,3,4,2,0,66,68,3,2,1,0,67,65,1,0,0,0,67,
  	66,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,72,1,0,0,0,71,
  	69,1,0,0,0,72,73,5,3,0,0,73,141,5,3,0,0,74,76,5,33,0,0,75,77,3,2,1,0,
  	76,75,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,83,5,34,0,0,79,82,3,4,2,
  	0,80,82,3,2,1,0,81,79,1,0,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,
  	0,83,84,1,0,0,0,84,86,1,0,0,0,85,83,1,0,0,0,86,88,5,35,0,0,87,89,3,2,
  	1,0,88,87,1,0,0,0,88,89,1,0,0,0,89,141,1,0,0,0,90,92,5,40,0,0,91,93,3,
  	2,1,0,92,91,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,99,5,34,0,0,95,98,
  	3,4,2,0,96,98,3,2,1,0,97,95,1,0,0,0,97,96,1,0,0,0,98,101,1,0,0,0,99,97,
  	1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,99,1,0,0,0,102,104,5,35,0,
  	0,103,105,3,2,1,0,104,103,1,0,0,0,104,105,1,0,0,0,105,141,1,0,0,0,106,
  	108,5,42,0,0,107,109,3,2,1,0,108,107,1,0,0,0,108,109,1,0,0,0,109,110,
  	1,0,0,0,110,115,5,34,0,0,111,114,3,4,2,0,112,114,3,2,1,0,113,111,1,0,
  	0,0,113,112,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,116,
  	118,1,0,0,0,117,115,1,0,0,0,118,120,5,35,0,0,119,121,3,2,1,0,120,119,
  	1,0,0,0,120,121,1,0,0,0,121,141,1,0,0,0,122,124,5,38,0,0,123,125,3,2,
  	1,0,124,123,1,0,0,0,124,125,1,0,0,0,125,126,1,0,0,0,126,131,5,34,0,0,
  	127,130,3,4,2,0,128,130,3,2,1,0,129,127,1,0,0,0,129,128,1,0,0,0,130,133,
  	1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,134,1,0,0,0,133,131,1,0,0,
  	0,134,136,5,35,0,0,135,137,3,2,1,0,136,135,1,0,0,0,136,137,1,0,0,0,137,
  	141,1,0,0,0,138,139,5,39,0,0,139,141,6,2,-1,0,140,26,1,0,0,0,140,30,1,
  	0,0,0,140,31,1,0,0,0,140,46,1,0,0,0,140,55,1,0,0,0,140,64,1,0,0,0,140,
  	74,1,0,0,0,140,90,1,0,0,0,140,106,1,0,0,0,140,122,1,0,0,0,140,138,1,0,
  	0,0,141,5,1,0,0,0,142,143,7,0,0,0,143,7,1,0,0,0,144,145,7,1,0,0,145,9,
  	1,0,0,0,30,13,15,24,28,33,39,41,49,51,58,60,67,69,76,81,83,88,92,97,99,
  	104,108,113,115,120,124,129,131,136,140
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rfilterParserStaticData = staticData.release();
}

}

RFilter::RFilter(TokenStream *input) : RFilter(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RFilter::RFilter(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RFilter::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rfilterParserStaticData->atn, rfilterParserStaticData->decisionToDFA, rfilterParserStaticData->sharedContextCache, options);
}

RFilter::~RFilter() {
  delete _interpreter;
}

const atn::ATN& RFilter::getATN() const {
  return *rfilterParserStaticData->atn;
}

std::string RFilter::getGrammarFileName() const {
  return "RFilter.g4";
}

const std::vector<std::string>& RFilter::getRuleNames() const {
  return rfilterParserStaticData->ruleNames;
}

const dfa::Vocabulary& RFilter::getVocabulary() const {
  return rfilterParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RFilter::getSerializedATN() const {
  return rfilterParserStaticData->serializedATN;
}


//----------------- StreamContext ------------------------------------------------------------------

RFilter::StreamContext::StreamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RFilter::StreamContext::EOF() {
  return getToken(RFilter::EOF, 0);
}

std::vector<RFilter::ElemContext *> RFilter::StreamContext::elem() {
  return getRuleContexts<RFilter::ElemContext>();
}

RFilter::ElemContext* RFilter::StreamContext::elem(size_t i) {
  return getRuleContext<RFilter::ElemContext>(i);
}

std::vector<tree::TerminalNode *> RFilter::StreamContext::NL() {
  return getTokens(RFilter::NL);
}

tree::TerminalNode* RFilter::StreamContext::NL(size_t i) {
  return getToken(RFilter::NL, i);
}


size_t RFilter::StreamContext::getRuleIndex() const {
  return RFilter::RuleStream;
}

void RFilter::StreamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStream(this);
}

void RFilter::StreamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStream(this);
}

RFilter::StreamContext* RFilter::stream() {
  StreamContext *_localctx = _tracker.createInstance<StreamContext>(_ctx, getState());
  enterRule(_localctx, 0, RFilter::RuleStream);
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
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -36028975528542218) != 0)) {
      setState(13);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RFilter::T__1:
        case RFilter::T__3:
        case RFilter::T__4:
        case RFilter::T__5:
        case RFilter::T__6:
        case RFilter::T__7:
        case RFilter::T__8:
        case RFilter::T__9:
        case RFilter::T__10:
        case RFilter::T__11:
        case RFilter::T__12:
        case RFilter::T__13:
        case RFilter::T__14:
        case RFilter::T__15:
        case RFilter::T__16:
        case RFilter::T__17:
        case RFilter::T__18:
        case RFilter::T__19:
        case RFilter::T__20:
        case RFilter::T__21:
        case RFilter::T__22:
        case RFilter::T__23:
        case RFilter::T__24:
        case RFilter::T__25:
        case RFilter::T__26:
        case RFilter::T__28:
        case RFilter::T__29:
        case RFilter::T__32:
        case RFilter::T__33:
        case RFilter::T__35:
        case RFilter::T__37:
        case RFilter::T__38:
        case RFilter::T__39:
        case RFilter::T__40:
        case RFilter::T__41:
        case RFilter::T__42:
        case RFilter::T__43:
        case RFilter::T__44:
        case RFilter::T__45:
        case RFilter::T__46:
        case RFilter::T__47:
        case RFilter::T__48:
        case RFilter::T__49:
        case RFilter::T__50:
        case RFilter::T__51:
        case RFilter::T__52:
        case RFilter::T__53:
        case RFilter::HEX:
        case RFilter::INT:
        case RFilter::FLOAT:
        case RFilter::COMPLEX:
        case RFilter::STRING:
        case RFilter::ID:
        case RFilter::USER_OP: {
          setState(10);
          elem();
          break;
        }

        case RFilter::NL: {
          setState(11);
          match(RFilter::NL);
          break;
        }

        case RFilter::T__0: {
          setState(12);
          match(RFilter::T__0);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(RFilter::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EatContext ------------------------------------------------------------------

RFilter::EatContext::EatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RFilter::EatContext::NL() {
  return getTokens(RFilter::NL);
}

tree::TerminalNode* RFilter::EatContext::NL(size_t i) {
  return getToken(RFilter::NL, i);
}


size_t RFilter::EatContext::getRuleIndex() const {
  return RFilter::RuleEat;
}

void RFilter::EatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEat(this);
}

void RFilter::EatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEat(this);
}

RFilter::EatContext* RFilter::eat() {
  EatContext *_localctx = _tracker.createInstance<EatContext>(_ctx, getState());
  enterRule(_localctx, 2, RFilter::RuleEat);

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
    setState(22); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(20);
              antlrcpp::downCast<EatContext *>(_localctx)->nlToken = match(RFilter::NL);
              ((WritableToken)antlrcpp::downCast<EatContext *>(_localctx)->nlToken).setChannel(Token.HIDDEN_CHANNEL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(24); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElemContext ------------------------------------------------------------------

RFilter::ElemContext::ElemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RFilter::OpContext* RFilter::ElemContext::op() {
  return getRuleContext<RFilter::OpContext>(0);
}

std::vector<RFilter::EatContext *> RFilter::ElemContext::eat() {
  return getRuleContexts<RFilter::EatContext>();
}

RFilter::EatContext* RFilter::ElemContext::eat(size_t i) {
  return getRuleContext<RFilter::EatContext>(i);
}

RFilter::AtomContext* RFilter::ElemContext::atom() {
  return getRuleContext<RFilter::AtomContext>(0);
}

std::vector<RFilter::ElemContext *> RFilter::ElemContext::elem() {
  return getRuleContexts<RFilter::ElemContext>();
}

RFilter::ElemContext* RFilter::ElemContext::elem(size_t i) {
  return getRuleContext<RFilter::ElemContext>(i);
}

std::vector<tree::TerminalNode *> RFilter::ElemContext::NL() {
  return getTokens(RFilter::NL);
}

tree::TerminalNode* RFilter::ElemContext::NL(size_t i) {
  return getToken(RFilter::NL, i);
}


size_t RFilter::ElemContext::getRuleIndex() const {
  return RFilter::RuleElem;
}

void RFilter::ElemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElem(this);
}

void RFilter::ElemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElem(this);
}

RFilter::ElemContext* RFilter::elem() {
  ElemContext *_localctx = _tracker.createInstance<ElemContext>(_ctx, getState());
  enterRule(_localctx, 4, RFilter::RuleElem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RFilter::T__4:
      case RFilter::T__5:
      case RFilter::T__6:
      case RFilter::T__7:
      case RFilter::T__8:
      case RFilter::T__9:
      case RFilter::T__10:
      case RFilter::T__11:
      case RFilter::T__12:
      case RFilter::T__13:
      case RFilter::T__14:
      case RFilter::T__15:
      case RFilter::T__16:
      case RFilter::T__17:
      case RFilter::T__18:
      case RFilter::T__19:
      case RFilter::T__20:
      case RFilter::T__21:
      case RFilter::T__22:
      case RFilter::T__23:
      case RFilter::T__24:
      case RFilter::T__25:
      case RFilter::T__26:
      case RFilter::T__28:
      case RFilter::T__29:
      case RFilter::T__40:
      case RFilter::T__42:
      case RFilter::T__43:
      case RFilter::T__52:
      case RFilter::T__53:
      case RFilter::USER_OP: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        op();
        setState(28);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(27);
          eat();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RFilter::T__44:
      case RFilter::T__45:
      case RFilter::T__46:
      case RFilter::T__47:
      case RFilter::T__48:
      case RFilter::T__49:
      case RFilter::T__50:
      case RFilter::T__51:
      case RFilter::HEX:
      case RFilter::INT:
      case RFilter::FLOAT:
      case RFilter::COMPLEX:
      case RFilter::STRING:
      case RFilter::ID: {
        enterOuterAlt(_localctx, 2);
        setState(30);
        atom();
        break;
      }

      case RFilter::T__35: {
        enterOuterAlt(_localctx, 3);
        setState(31);
        match(RFilter::T__35);
        setState(33);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(32);
          eat();
          break;
        }

        default:
          break;
        }
        curlies++;
        setState(41);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542218) != 0)) {
          setState(39);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(36);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(37);
              match(RFilter::NL);
              break;
            }

            case RFilter::T__0: {
              setState(38);
              match(RFilter::T__0);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(43);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        curlies--;
        setState(45);
        match(RFilter::T__36);
        break;
      }

      case RFilter::T__33: {
        enterOuterAlt(_localctx, 4);
        setState(46);
        match(RFilter::T__33);
        setState(51);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(49);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(47);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(48);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(53);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(54);
        match(RFilter::T__34);
        break;
      }

      case RFilter::T__3: {
        enterOuterAlt(_localctx, 5);
        setState(55);
        match(RFilter::T__3);
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(58);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(56);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(57);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(62);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(63);
        match(RFilter::T__2);
        break;
      }

      case RFilter::T__1: {
        enterOuterAlt(_localctx, 6);
        setState(64);
        match(RFilter::T__1);
        setState(69);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(67);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(65);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(66);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(71);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(72);
        match(RFilter::T__2);
        setState(73);
        match(RFilter::T__2);
        break;
      }

      case RFilter::T__32: {
        enterOuterAlt(_localctx, 7);
        setState(74);
        match(RFilter::T__32);
        setState(76);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RFilter::NL) {
          setState(75);
          eat();
        }
        setState(78);
        match(RFilter::T__33);
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(81);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(79);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(80);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(85);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(86);
        match(RFilter::T__34);
        setState(88);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(87);
          eat();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RFilter::T__39: {
        enterOuterAlt(_localctx, 8);
        setState(90);
        match(RFilter::T__39);
        setState(92);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RFilter::NL) {
          setState(91);
          eat();
        }
        setState(94);
        match(RFilter::T__33);
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(97);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(95);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(96);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(102);
        match(RFilter::T__34);
        setState(104);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          setState(103);
          eat();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RFilter::T__41: {
        enterOuterAlt(_localctx, 9);
        setState(106);
        match(RFilter::T__41);
        setState(108);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RFilter::NL) {
          setState(107);
          eat();
        }
        setState(110);
        match(RFilter::T__33);
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(113);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(111);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(112);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(117);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(118);
        match(RFilter::T__34);
        setState(120);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          setState(119);
          eat();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RFilter::T__37: {
        enterOuterAlt(_localctx, 10);
        setState(122);
        match(RFilter::T__37);
        setState(124);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RFilter::NL) {
          setState(123);
          eat();
        }
        setState(126);
        match(RFilter::T__33);
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -36028975528542220) != 0)) {
          setState(129);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case RFilter::T__1:
            case RFilter::T__3:
            case RFilter::T__4:
            case RFilter::T__5:
            case RFilter::T__6:
            case RFilter::T__7:
            case RFilter::T__8:
            case RFilter::T__9:
            case RFilter::T__10:
            case RFilter::T__11:
            case RFilter::T__12:
            case RFilter::T__13:
            case RFilter::T__14:
            case RFilter::T__15:
            case RFilter::T__16:
            case RFilter::T__17:
            case RFilter::T__18:
            case RFilter::T__19:
            case RFilter::T__20:
            case RFilter::T__21:
            case RFilter::T__22:
            case RFilter::T__23:
            case RFilter::T__24:
            case RFilter::T__25:
            case RFilter::T__26:
            case RFilter::T__28:
            case RFilter::T__29:
            case RFilter::T__32:
            case RFilter::T__33:
            case RFilter::T__35:
            case RFilter::T__37:
            case RFilter::T__38:
            case RFilter::T__39:
            case RFilter::T__40:
            case RFilter::T__41:
            case RFilter::T__42:
            case RFilter::T__43:
            case RFilter::T__44:
            case RFilter::T__45:
            case RFilter::T__46:
            case RFilter::T__47:
            case RFilter::T__48:
            case RFilter::T__49:
            case RFilter::T__50:
            case RFilter::T__51:
            case RFilter::T__52:
            case RFilter::T__53:
            case RFilter::HEX:
            case RFilter::INT:
            case RFilter::FLOAT:
            case RFilter::COMPLEX:
            case RFilter::STRING:
            case RFilter::ID:
            case RFilter::USER_OP: {
              setState(127);
              elem();
              break;
            }

            case RFilter::NL: {
              setState(128);
              eat();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(133);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(134);
        match(RFilter::T__34);
        setState(136);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          setState(135);
          eat();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RFilter::T__38: {
        enterOuterAlt(_localctx, 11);
        setState(138);
        match(RFilter::T__38);

                // ``inside a compound expression, a newline before else is discarded,
                // whereas at the outermost level, the newline terminates the if
                // construction and a subsequent else causes a syntax error.''
                /*
                Works here
                    if (1==0) { print(1) } else { print(2) }

                and correctly gets error here:

                    if (1==0) { print(1) }
                    else { print(2) }

                this works too:

                    if (1==0) {
                      if (2==0) print(1)
                      else print(2)
                    }
                */
                WritableToken tok = (WritableToken)_input.LT(-2);
                if (curlies>0&&tok.getType()==NL) tok.setChannel(Token.HIDDEN_CHANNEL);
                
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

//----------------- AtomContext ------------------------------------------------------------------

RFilter::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RFilter::AtomContext::ID() {
  return getToken(RFilter::ID, 0);
}

tree::TerminalNode* RFilter::AtomContext::STRING() {
  return getToken(RFilter::STRING, 0);
}

tree::TerminalNode* RFilter::AtomContext::HEX() {
  return getToken(RFilter::HEX, 0);
}

tree::TerminalNode* RFilter::AtomContext::INT() {
  return getToken(RFilter::INT, 0);
}

tree::TerminalNode* RFilter::AtomContext::FLOAT() {
  return getToken(RFilter::FLOAT, 0);
}

tree::TerminalNode* RFilter::AtomContext::COMPLEX() {
  return getToken(RFilter::COMPLEX, 0);
}


size_t RFilter::AtomContext::getRuleIndex() const {
  return RFilter::RuleAtom;
}

void RFilter::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void RFilter::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

RFilter::AtomContext* RFilter::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 6, RFilter::RuleAtom);
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
    setState(142);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4548600439272112128) != 0))) {
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

//----------------- OpContext ------------------------------------------------------------------

RFilter::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RFilter::OpContext::USER_OP() {
  return getToken(RFilter::USER_OP, 0);
}


size_t RFilter::OpContext::getRuleIndex() const {
  return RFilter::RuleOp;
}

void RFilter::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void RFilter::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RFilterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}

RFilter::OpContext* RFilter::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 8, RFilter::RuleOp);
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
    setState(144);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4638736205372981216) != 0))) {
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

void RFilter::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rfilterParserInitialize();
#else
  ::antlr4::internal::call_once(rfilterParserOnceFlag, rfilterParserInitialize);
#endif
}
