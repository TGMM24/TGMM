
// Generated from AdaLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  AdaLexer : public antlr4::Lexer {
public:
  enum {
    ABORT = 1, ABS = 2, ABSTRACT = 3, ACCEPT_ = 4, ACCESS = 5, ALIASED = 6, 
    ALL = 7, AND = 8, ARRAY = 9, AT = 10, BEGIN = 11, BODY_ = 12, CASE = 13, 
    CONSTANT = 14, DECLARE = 15, DELAY = 16, DELTA = 17, DIGITS = 18, DO = 19, 
    ELSE = 20, ELSIF = 21, END = 22, ENTRY = 23, EXCEPTION = 24, EXIT = 25, 
    FOR = 26, FUNCTION = 27, GENERIC = 28, GOTO = 29, IF = 30, IN = 31, 
    INTERFACE = 32, IS = 33, LIMITED = 34, LOOP = 35, MOD = 36, NEW = 37, 
    NOT = 38, NULL_ = 39, OF = 40, OR = 41, OTHERS = 42, OUT = 43, OVERRIDING = 44, 
    PACKAGE = 45, PRAGMA = 46, PRIVATE = 47, PROCEDURE = 48, PROTECTED = 49, 
    RAISE = 50, RANGE_ = 51, RECORD = 52, REM = 53, RENAMES = 54, REQUEUE = 55, 
    RETURN = 56, REVERSE = 57, SELECT = 58, SEPARATE = 59, SOME = 60, SUBTYPE = 61, 
    SYNCHRONIZED = 62, TAGGED = 63, TASK = 64, TERMINATE = 65, THEN = 66, 
    TYPE = 67, UNTIL = 68, USE = 69, WHEN = 70, WHILE = 71, WITH = 72, XOR = 73, 
    CLASS__ = 74, ACCESS__ = 75, DELTA__ = 76, DIGITS__ = 77, MOD__ = 78, 
    WHITESPACE = 79, LINE_COMMENT = 80, IDENTIFIER_ = 81, NUMERIC_LITERAL_ = 82, 
    DECIMAL_LITERAL_ = 83, NUMERAL = 84, EXPONENT = 85, BASED_LITERAL = 86, 
    BASED_NUMERAL = 87, EXTENDED_DIGIT = 88, BASE = 89, CHARACTER_LITERAL_ = 90, 
    STRING_LITERAL_ = 91, HASH = 92, AMPERSAND = 93, LP = 94, RP = 95, MULT = 96, 
    PLUS = 97, COMMA = 98, MINUS = 99, DOT = 100, COLON = 101, SEMI = 102, 
    LT = 103, EQ = 104, GT = 105, US = 106, VL = 107, DIV = 108, EP = 109, 
    PS = 110, ARROW = 111, DOTDOT = 112, EXPON = 113, ASSIGN = 114, NE = 115, 
    GE = 116, LE = 117, LLB = 118, RLB = 119, BOX = 120, SQ = 121
  };

  explicit AdaLexer(antlr4::CharStream *input);

  ~AdaLexer() override;


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

