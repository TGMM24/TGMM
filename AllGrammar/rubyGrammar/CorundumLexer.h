
// Generated from Corundum.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  CorundumLexer : public antlr4::Lexer {
public:
  enum {
    LITERAL = 1, COMMA = 2, SEMICOLON = 3, CRLF = 4, REQUIRE = 5, END = 6, 
    DEF = 7, RETURN = 8, PIR = 9, IF = 10, ELSE = 11, ELSIF = 12, UNLESS = 13, 
    WHILE = 14, RETRY = 15, BREAK = 16, FOR = 17, TRUE = 18, FALSE = 19, 
    PLUS = 20, MINUS = 21, MUL = 22, DIV = 23, MOD = 24, EXP = 25, EQUAL = 26, 
    NOT_EQUAL = 27, GREATER = 28, LESS = 29, LESS_EQUAL = 30, GREATER_EQUAL = 31, 
    ASSIGN = 32, PLUS_ASSIGN = 33, MINUS_ASSIGN = 34, MUL_ASSIGN = 35, DIV_ASSIGN = 36, 
    MOD_ASSIGN = 37, EXP_ASSIGN = 38, BIT_AND = 39, BIT_OR = 40, BIT_XOR = 41, 
    BIT_NOT = 42, BIT_SHL = 43, BIT_SHR = 44, AND = 45, OR = 46, NOT = 47, 
    LEFT_RBRACKET = 48, RIGHT_RBRACKET = 49, LEFT_SBRACKET = 50, RIGHT_SBRACKET = 51, 
    NIL = 52, SL_COMMENT = 53, ML_COMMENT = 54, WS = 55, INT = 56, FLOAT = 57, 
    ID = 58, ID_GLOBAL = 59, ID_FUNCTION = 60
  };

  explicit CorundumLexer(antlr4::CharStream *input);

  ~CorundumLexer() override;


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

