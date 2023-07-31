
from Python2Parser import Python2Parser
from antlr4.Token  import CommonToken

class IndentStack:
    def __init__(self)    : self._s = []
    def empty(self)       : return len(self._s) == 0
    def push(self, wsval) : self._s.append(wsval)
    def pop(self)         : self._s.pop()
    def wsval(self)       : return self._s[-1] if len(self._s) > 0 else 0

class TokenQueue:
    def __init__(self)  : self._q = []
    def empty(self)     : return len(self._q) == 0
    def enq(self, t)    : self._q.append(t)
    def deq(self)       : return self._q.pop(0)


// Generated from Python2.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  Python2Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, NAME = 70, NUMBER = 71, STRING = 72, LINENDING = 73, WHITESPACE = 74, 
    COMMENT = 75, OPEN_PAREN = 76, CLOSE_PAREN = 77, OPEN_BRACE = 78, CLOSE_BRACE = 79, 
    OPEN_BRACKET = 80, CLOSE_BRACKET = 81, UNKNOWN = 82
  };

  explicit Python2Lexer(antlr4::CharStream *input);

  ~Python2Lexer() override;


      # Indented to append code to the constructor.
      self._openBRCount       = 0
      self._suppressNewlines  = False
      self._lineContinuation  = False
      self._tokens            = TokenQueue()
      self._indents           = IndentStack()

  def nextToken(self):
      if not self._tokens.empty():
          return self._tokens.deq()
      else:
          t = super(Python2Lexer, self).nextToken()
          if t.type != Token.EOF:
              return t
          else:
              if not self._suppressNewlines:
                  self.emitNewline()
              self.emitFullDedent()
              self.emitEndmarker()
              self.emitEndToken(t)
              return self._tokens.deq()
              
  def emitEndToken(self, token):
      self._tokens.enq(token)

  def emitIndent(self, length=0, text='INDENT'):
      t = self.createToken(Python2Parser.INDENT, text, length)
      self._tokens.enq(t)

  def emitDedent(self):
      t = self.createToken(Python2Parser.DEDENT, 'DEDENT')
      self._tokens.enq(t)

  def emitFullDedent(self):
      while not self._indents.empty():
          self._indents.pop()
          self.emitDedent()

  def emitEndmarker(self):
      t = self.createToken(Python2Parser.ENDMARKER, 'ENDMARKER')
      self._tokens.enq(t)

  def emitNewline(self):
      t = self.createToken(Python2Parser.NEWLINE, 'NEWLINE')
      self._tokens.enq(t)

  def createToken(self, type_, text="", length=0):
      start = self._tokenStartCharIndex
      stop = start + length
      t = CommonToken(self._tokenFactorySourcePair,
                      type_, self.DEFAULT_TOKEN_CHANNEL,
                      start, stop)
      t.text = text
      return t


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void LINENDINGAction(antlr4::RuleContext *context, size_t actionIndex);
  void WHITESPACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

