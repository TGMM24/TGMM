
// Generated from matlab.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  matlabLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, ARRAYMUL = 20, 
    ARRAYDIV = 21, ARRAYRDIV = 22, ARRAYPOW = 23, BREAK = 24, RETURN = 25, 
    FUNCTION = 26, FOR = 27, WHILE = 28, END = 29, GLOBAL = 30, IF = 31, 
    CLEAR = 32, ELSE = 33, ELSEIF = 34, LE_OP = 35, GE_OP = 36, EQ_OP = 37, 
    NE_OP = 38, TRANSPOSE = 39, NCTRANSPOSE = 40, STRING_LITERAL = 41, IDENTIFIER = 42, 
    CONSTANT = 43, CR = 44, WS = 45
  };

  explicit matlabLexer(antlr4::CharStream *input);

  ~matlabLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

