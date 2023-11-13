
// Generated from myLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  myLexer : public myLexerBase {
public:
  enum {
    HashBangLine = 1, MultiLineComment = 2, SingleLineComment = 3, RegularExpressionLiteral = 4, 
    OpenBracket = 5, CloseBracket = 6, OpenParen = 7, CloseParen = 8, OpenBrace = 9, 
    TemplateCloseBrace = 10, CloseBrace = 11, SemiColon = 12, Comma = 13, 
    Assign = 14, QuestionMark = 15, QuestionMarkDot = 16, Colon = 17, Ellipsis = 18, 
    Dot = 19, PlusPlus = 20, MinusMinus = 21, Plus = 22, Minus = 23, BitNot = 24, 
    Not = 25, Multiply = 26, Divide = 27, Modulus = 28, Power = 29, NullCoalesce = 30, 
    Hashtag = 31, RightShiftArithmetic = 32, LeftShiftArithmetic = 33, RightShiftLogical = 34, 
    LessThan = 35, MoreThan = 36, LessThanEquals = 37, GreaterThanEquals = 38, 
    Equals_ = 39, NotEquals = 40, IdentityEquals = 41, IdentityNotEquals = 42, 
    BitAnd = 43, BitXOr = 44, BitOr = 45, And = 46, Or = 47, MultiplyAssign = 48, 
    DivideAssign = 49, ModulusAssign = 50, PlusAssign = 51, MinusAssign = 52, 
    LeftShiftArithmeticAssign = 53, RightShiftArithmeticAssign = 54, RightShiftLogicalAssign = 55, 
    BitAndAssign = 56, BitXorAssign = 57, BitOrAssign = 58, PowerAssign = 59, 
    ARROW = 60, NullLiteral = 61, BooleanLiteral = 62, DecimalLiteral = 63, 
    HexIntegerLiteral = 64, OctalIntegerLiteral = 65, OctalIntegerLiteral2 = 66, 
    BinaryIntegerLiteral = 67, BigHexIntegerLiteral = 68, BigOctalIntegerLiteral = 69, 
    BigBinaryIntegerLiteral = 70, BigDecimalIntegerLiteral = 71, Break = 72, 
    Do = 73, Instanceof = 74, Typeof = 75, Case = 76, Else = 77, New = 78, 
    Var = 79, Catch = 80, Finally = 81, Return = 82, Void = 83, Continue = 84, 
    For = 85, Switch = 86, While = 87, Debugger = 88, Function_ = 89, This = 90, 
    With = 91, Default = 92, If = 93, Throw = 94, Delete = 95, In = 96, 
    Try = 97, As = 98, From = 99, Class = 100, Enum = 101, Extends = 102, 
    Super = 103, Const = 104, Export = 105, Import = 106, Async = 107, Await = 108, 
    Yield = 109, Implements = 110, StrictLet = 111, NonStrictLet = 112, 
    Private = 113, Public = 114, Interface = 115, Package = 116, Protected = 117, 
    Static = 118, Identifier = 119, StringLiteral = 120, BackTick = 121, 
    WhiteSpaces = 122, LineTerminator = 123, HtmlComment = 124, CDataComment = 125, 
    UnexpectedCharacter = 126, TemplateStringStartExpression = 127, TemplateStringAtom = 128
  };

  enum {
    ERROR = 2
  };

  enum {
    TEMPLATE = 1
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

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void OpenBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void CloseBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void StringLiteralAction(antlr4::RuleContext *context, size_t actionIndex);
  void BackTickAction(antlr4::RuleContext *context, size_t actionIndex);
  void BackTickInsideAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool HashBangLineSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RegularExpressionLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TemplateCloseBraceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OctalIntegerLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ImplementsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StrictLetSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NonStrictLetSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PrivateSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PublicSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InterfaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PackageSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ProtectedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StaticSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

