
// Generated from Dart2Lexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Dart2Lexer : public Dart2LexerBase {
public:
  enum {
    A = 1, AA = 2, AE = 3, AT = 4, C = 5, CB = 6, CBC = 7, CIR = 8, CIRE = 9, 
    CO = 10, CP = 11, D = 12, DD = 13, DDD = 14, DDDQ = 15, EE = 16, EG = 17, 
    EQ = 18, GT = 19, LT = 20, LTE = 21, LTLT = 22, LTLTE = 23, ME = 24, 
    MINUS = 25, MM = 26, NE = 27, NOT = 28, OB = 29, OBC = 30, OP = 31, 
    P = 32, PC = 33, PE = 34, PL = 35, PLE = 36, PLPL = 37, PO = 38, POE = 39, 
    PP = 40, QU = 41, QUD = 42, QUDD = 43, QUQU = 44, QUQUEQ = 45, SC = 46, 
    SE = 47, SL = 48, SQS = 49, SQSE = 50, SQUIG = 51, ST = 52, STE = 53, 
    ABSTRACT_ = 54, AS_ = 55, ASSERT_ = 56, ASYNC_ = 57, AWAIT_ = 58, BREAK_ = 59, 
    CASE_ = 60, CATCH_ = 61, CLASS_ = 62, CONST_ = 63, CONTINUE_ = 64, COVARIANT_ = 65, 
    DEFAULT_ = 66, DEFERRED_ = 67, DO_ = 68, DYNAMIC_ = 69, ELSE_ = 70, 
    ENUM_ = 71, EXPORT_ = 72, EXTENDS_ = 73, EXTENSION_ = 74, EXTERNAL_ = 75, 
    FACTORY_ = 76, FALSE_ = 77, FINAL_ = 78, FINALLY_ = 79, FOR_ = 80, FUNCTION_ = 81, 
    GET_ = 82, GTILDE_ = 83, HIDE_ = 84, IF_ = 85, IMPLEMENTS_ = 86, IMPORT_ = 87, 
    IN_ = 88, INTERFACE_ = 89, IS_ = 90, LATE_ = 91, LET_ = 92, LIBRARY_ = 93, 
    MIXIN_ = 94, NATIVE_ = 95, NEW_ = 96, NULL_ = 97, OF_ = 98, ON_ = 99, 
    OPERATOR_ = 100, PART_ = 101, REQUIRED_ = 102, RETHROW_ = 103, RETURN_ = 104, 
    SET_ = 105, SHOW_ = 106, STATIC_ = 107, SUPER_ = 108, SWITCH_ = 109, 
    SYNC_ = 110, THIS_ = 111, THROW_ = 112, TRUE_ = 113, TRY_ = 114, TYPEDEF_ = 115, 
    VAR_ = 116, VOID_ = 117, WHILE_ = 118, WITH_ = 119, YIELD_ = 120, NUMBER = 121, 
    HEX_NUMBER = 122, SingleLineString = 123, MultiLineString = 124, IDENTIFIER = 125, 
    WHITESPACE = 126, SINGLE_LINE_COMMENT = 127, MULTI_LINE_COMMENT = 128
  };

  explicit Dart2Lexer(antlr4::CharStream *input);

  ~Dart2Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool StringContentDQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StringContentSQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

