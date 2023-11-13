
// Generated from myLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  myLexer : public myLexerBase {
public:
  enum {
    INDENT = 1, DEDENT = 2, LINE_BREAK = 3, DEF = 4, RETURN = 5, RAISE = 6, 
    FROM = 7, IMPORT = 8, NONLOCAL = 9, AS = 10, GLOBAL = 11, ASSERT = 12, 
    IF = 13, ELIF = 14, ELSE = 15, WHILE = 16, FOR = 17, IN = 18, TRY = 19, 
    NONE = 20, FINALLY = 21, WITH = 22, EXCEPT = 23, LAMBDA = 24, OR = 25, 
    AND = 26, NOT = 27, IS = 28, CLASS = 29, YIELD = 30, DEL = 31, PASS = 32, 
    CONTINUE = 33, BREAK = 34, ASYNC = 35, AWAIT = 36, PRINT = 37, EXEC = 38, 
    TRUE = 39, FALSE = 40, DOT = 41, ELLIPSIS = 42, REVERSE_QUOTE = 43, 
    STAR = 44, COMMA = 45, COLON = 46, SEMI_COLON = 47, POWER = 48, ASSIGN = 49, 
    OR_OP = 50, XOR = 51, AND_OP = 52, LEFT_SHIFT = 53, RIGHT_SHIFT = 54, 
    ADD = 55, MINUS = 56, DIV = 57, MOD = 58, IDIV = 59, NOT_OP = 60, LESS_THAN = 61, 
    GREATER_THAN = 62, EQUALS = 63, GT_EQ = 64, LT_EQ = 65, NOT_EQ_1 = 66, 
    NOT_EQ_2 = 67, AT = 68, ARROW = 69, ADD_ASSIGN = 70, SUB_ASSIGN = 71, 
    MULT_ASSIGN = 72, AT_ASSIGN = 73, DIV_ASSIGN = 74, MOD_ASSIGN = 75, 
    AND_ASSIGN = 76, OR_ASSIGN = 77, XOR_ASSIGN = 78, LEFT_SHIFT_ASSIGN = 79, 
    RIGHT_SHIFT_ASSIGN = 80, POWER_ASSIGN = 81, IDIV_ASSIGN = 82, STRING = 83, 
    DECIMAL_INTEGER = 84, OCT_INTEGER = 85, HEX_INTEGER = 86, BIN_INTEGER = 87, 
    IMAG_NUMBER = 88, FLOAT_NUMBER = 89, OPEN_PAREN = 90, CLOSE_PAREN = 91, 
    OPEN_BRACE = 92, CLOSE_BRACE = 93, OPEN_BRACKET = 94, CLOSE_BRACKET = 95, 
    NAME = 96, LINE_JOIN = 97, NEWLINE = 98, WS = 99, COMMENT = 100
  };

  explicit myLexer(antlr4::CharStream *input);

  ~myLexer() override;


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
  void OPEN_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);
  void NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

