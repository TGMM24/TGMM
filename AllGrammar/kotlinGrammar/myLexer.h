
// Generated from myLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  myLexer : public antlr4::Lexer {
public:
  enum {
    ShebangLine = 1, DelimitedComment = 2, LineComment = 3, WS = 4, NL = 5, 
    RESERVED = 6, DOT = 7, COMMA = 8, LPAREN = 9, RPAREN = 10, LSQUARE = 11, 
    RSQUARE = 12, LCURL = 13, RCURL = 14, MULT = 15, MOD = 16, DIV = 17, 
    ADD = 18, SUB = 19, INCR = 20, DECR = 21, CONJ = 22, DISJ = 23, EXCL = 24, 
    COLON = 25, SEMICOLON = 26, ASSIGNMENT = 27, ADD_ASSIGNMENT = 28, SUB_ASSIGNMENT = 29, 
    MULT_ASSIGNMENT = 30, DIV_ASSIGNMENT = 31, MOD_ASSIGNMENT = 32, ARROW = 33, 
    DOUBLE_ARROW = 34, RANGE = 35, COLONCOLON = 36, Q_COLONCOLON = 37, DOUBLE_SEMICOLON = 38, 
    HASH = 39, AT = 40, QUEST = 41, ELVIS = 42, LANGLE = 43, RANGLE = 44, 
    LE = 45, GE = 46, EXCL_EQ = 47, EXCL_EQEQ = 48, AS_SAFE = 49, EQEQ = 50, 
    EQEQEQ = 51, SINGLE_QUOTE = 52, RETURN_AT = 53, CONTINUE_AT = 54, BREAK_AT = 55, 
    FILE = 56, PACKAGE = 57, IMPORT = 58, CLASS = 59, INTERFACE = 60, FUN = 61, 
    OBJECT = 62, VAL = 63, VAR = 64, TYPE_ALIAS = 65, CONSTRUCTOR = 66, 
    BY = 67, COMPANION = 68, INIT = 69, THIS = 70, SUPER = 71, TYPEOF = 72, 
    WHERE = 73, IF = 74, ELSE = 75, WHEN = 76, TRY = 77, CATCH = 78, FINALLY = 79, 
    FOR = 80, DO = 81, WHILE = 82, THROW = 83, RETURN = 84, CONTINUE = 85, 
    BREAK = 86, AS = 87, IS = 88, IN = 89, NOT_IS = 90, NOT_IN = 91, OUT = 92, 
    FIELD = 93, PROPERTY = 94, GET = 95, SET = 96, GETTER = 97, SETTER = 98, 
    RECEIVER = 99, PARAM = 100, SETPARAM = 101, DELEGATE = 102, DYNAMIC = 103, 
    PUBLIC = 104, PRIVATE = 105, PROTECTED = 106, INTERNAL = 107, ENUM = 108, 
    SEALED = 109, ANNOTATION = 110, DATA = 111, INNER = 112, TAILREC = 113, 
    OPERATOR = 114, INLINE = 115, INFIX = 116, EXTERNAL = 117, SUSPEND = 118, 
    OVERRIDE = 119, ABSTRACT = 120, FINAL = 121, OPEN = 122, CONST = 123, 
    LATEINIT = 124, VARARG = 125, NOINLINE = 126, CROSSINLINE = 127, REIFIED = 128, 
    QUOTE_OPEN = 129, TRIPLE_QUOTE_OPEN = 130, RealLiteral = 131, FloatLiteral = 132, 
    DoubleLiteral = 133, LongLiteral = 134, IntegerLiteral = 135, HexLiteral = 136, 
    BinLiteral = 137, BooleanLiteral = 138, NullLiteral = 139, Identifier = 140, 
    LabelReference = 141, LabelDefinition = 142, FieldIdentifier = 143, 
    CharacterLiteral = 144, UNICODE_CLASS_LL = 145, UNICODE_CLASS_LM = 146, 
    UNICODE_CLASS_LO = 147, UNICODE_CLASS_LT = 148, UNICODE_CLASS_LU = 149, 
    UNICODE_CLASS_ND = 150, UNICODE_CLASS_NL = 151, Inside_Comment = 152, 
    Inside_WS = 153, Inside_NL = 154, QUOTE_CLOSE = 155, LineStrRef = 156, 
    LineStrText = 157, LineStrEscapedChar = 158, LineStrExprStart = 159, 
    TRIPLE_QUOTE_CLOSE = 160, MultiLineStringQuote = 161, MultiLineStrRef = 162, 
    MultiLineStrText = 163, MultiLineStrEscapedChar = 164, MultiLineStrExprStart = 165, 
    MultiLineNL = 166, StrExpr_IN = 167, StrExpr_Comment = 168, StrExpr_WS = 169, 
    StrExpr_NL = 170
  };

  enum {
    Inside = 1, LineString = 2, MultiLineString = 3, StringExpression = 4
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

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

