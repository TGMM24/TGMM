
    #include "TypeScriptLexerBase.h"


// Generated from TypeScriptLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  TypeScriptLexer : public TypeScriptLexerBase {
public:
  enum {
    MultiLineComment = 1, SingleLineComment = 2, RegularExpressionLiteral = 3, 
    OpenBracket = 4, CloseBracket = 5, OpenParen = 6, CloseParen = 7, OpenBrace = 8, 
    TemplateCloseBrace = 9, CloseBrace = 10, SemiColon = 11, Comma = 12, 
    Assign = 13, QuestionMark = 14, Colon = 15, Ellipsis = 16, Dot = 17, 
    PlusPlus = 18, MinusMinus = 19, Plus = 20, Minus = 21, BitNot = 22, 
    Not = 23, Multiply = 24, Divide = 25, Modulus = 26, RightShiftArithmetic = 27, 
    LeftShiftArithmetic = 28, RightShiftLogical = 29, LessThan = 30, MoreThan = 31, 
    LessThanEquals = 32, GreaterThanEquals = 33, Equals_ = 34, NotEquals = 35, 
    IdentityEquals = 36, IdentityNotEquals = 37, BitAnd = 38, BitXOr = 39, 
    BitOr = 40, And = 41, Or = 42, MultiplyAssign = 43, DivideAssign = 44, 
    ModulusAssign = 45, PlusAssign = 46, MinusAssign = 47, LeftShiftArithmeticAssign = 48, 
    RightShiftArithmeticAssign = 49, RightShiftLogicalAssign = 50, BitAndAssign = 51, 
    BitXorAssign = 52, BitOrAssign = 53, ARROW = 54, NullLiteral = 55, BooleanLiteral = 56, 
    DecimalLiteral = 57, HexIntegerLiteral = 58, OctalIntegerLiteral = 59, 
    OctalIntegerLiteral2 = 60, BinaryIntegerLiteral = 61, Break = 62, Do = 63, 
    Instanceof = 64, Typeof = 65, Case = 66, Else = 67, New = 68, Var = 69, 
    Catch = 70, Finally = 71, Return = 72, Void = 73, Continue = 74, For = 75, 
    Switch = 76, While = 77, Debugger = 78, Function_ = 79, This = 80, With = 81, 
    Default = 82, If = 83, Throw = 84, Delete = 85, In = 86, Try = 87, As = 88, 
    From = 89, ReadOnly = 90, Async = 91, Class = 92, Enum = 93, Extends = 94, 
    Super = 95, Const = 96, Export = 97, Import = 98, Implements = 99, Let = 100, 
    Private = 101, Public = 102, Interface = 103, Package = 104, Protected = 105, 
    Static = 106, Yield = 107, Any = 108, Number = 109, Boolean = 110, String = 111, 
    Symbol = 112, TypeAlias = 113, Get = 114, Set = 115, Constructor = 116, 
    Namespace = 117, Require = 118, Module = 119, Declare = 120, Abstract = 121, 
    Is = 122, At = 123, Identifier = 124, StringLiteral = 125, BackTick = 126, 
    WhiteSpaces = 127, LineTerminator = 128, HtmlComment = 129, CDataComment = 130, 
    UnexpectedCharacter = 131, TemplateStringEscapeAtom = 132, TemplateStringStartExpression = 133, 
    TemplateStringAtom = 134
  };

  enum {
    ERROR = 2
  };

  enum {
    TEMPLATE = 1
  };

  explicit TypeScriptLexer(antlr4::CharStream *input);

  ~TypeScriptLexer() override;


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
  void TemplateStringStartExpressionAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool RegularExpressionLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TemplateCloseBraceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OctalIntegerLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

