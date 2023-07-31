
// Generated from PhpLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  PhpLexer : public PhpLexerBase {
public:
  enum {
    SeaWhitespace = 1, HtmlText = 2, XmlStart = 3, PHPStart = 4, HtmlScriptOpen = 5, 
    HtmlStyleOpen = 6, HtmlComment = 7, HtmlDtd = 8, HtmlOpen = 9, Shebang = 10, 
    Error = 11, XmlText = 12, XmlClose = 13, PHPStartInside = 14, HtmlClose = 15, 
    HtmlSlashClose = 16, HtmlSlash = 17, HtmlEquals = 18, HtmlStartQuoteString = 19, 
    HtmlStartDoubleQuoteString = 20, HtmlHex = 21, HtmlDecimal = 22, HtmlSpace = 23, 
    HtmlName = 24, ErrorInside = 25, PHPStartInsideQuoteString = 26, HtmlEndQuoteString = 27, 
    HtmlQuoteString = 28, ErrorHtmlQuote = 29, PHPStartDoubleQuoteString = 30, 
    HtmlEndDoubleQuoteString = 31, HtmlDoubleQuoteString = 32, ErrorHtmlDoubleQuote = 33, 
    ScriptText = 34, HtmlScriptClose = 35, PHPStartInsideScript = 36, StyleBody = 37, 
    PHPEnd = 38, Whitespace = 39, MultiLineComment = 40, SingleLineComment = 41, 
    ShellStyleComment = 42, AttributeStart = 43, Abstract = 44, Array = 45, 
    As = 46, BinaryCast = 47, BoolType = 48, BooleanConstant = 49, Break = 50, 
    Callable = 51, Case = 52, Catch = 53, Class = 54, Clone = 55, Const = 56, 
    Continue = 57, Declare = 58, Default = 59, Do = 60, DoubleCast = 61, 
    DoubleType = 62, Echo = 63, Else = 64, ElseIf = 65, Empty = 66, Enum_ = 67, 
    EndDeclare = 68, EndFor = 69, EndForeach = 70, EndIf = 71, EndSwitch = 72, 
    EndWhile = 73, Eval = 74, Exit = 75, Extends = 76, Final = 77, Finally = 78, 
    FloatCast = 79, For = 80, Foreach = 81, Function_ = 82, Global = 83, 
    Goto = 84, If = 85, Implements = 86, Import = 87, Include = 88, IncludeOnce = 89, 
    InstanceOf = 90, InsteadOf = 91, Int8Cast = 92, Int16Cast = 93, Int64Type = 94, 
    IntType = 95, Interface = 96, IsSet = 97, List = 98, LogicalAnd = 99, 
    LogicalOr = 100, LogicalXor = 101, Match_ = 102, Namespace = 103, New = 104, 
    Null = 105, ObjectType = 106, Parent_ = 107, Partial = 108, Print = 109, 
    Private = 110, Protected = 111, Public = 112, Readonly = 113, Require = 114, 
    RequireOnce = 115, Resource = 116, Return = 117, Static = 118, StringType = 119, 
    Switch = 120, Throw = 121, Trait = 122, Try = 123, Typeof = 124, UintCast = 125, 
    UnicodeCast = 126, Unset = 127, Use = 128, Var = 129, While = 130, Yield = 131, 
    From = 132, LambdaFn = 133, Ticks = 134, Encoding = 135, StrictTypes = 136, 
    Get = 137, Set = 138, Call = 139, CallStatic = 140, Constructor = 141, 
    Destruct = 142, Wakeup = 143, Sleep = 144, Autoload = 145, IsSet__ = 146, 
    Unset__ = 147, ToString__ = 148, Invoke = 149, SetState = 150, Clone__ = 151, 
    DebugInfo = 152, Namespace__ = 153, Class__ = 154, Traic__ = 155, Function__ = 156, 
    Method__ = 157, Line__ = 158, File__ = 159, Dir__ = 160, Spaceship = 161, 
    Lgeneric = 162, Rgeneric = 163, DoubleArrow = 164, Inc = 165, Dec = 166, 
    IsIdentical = 167, IsNoidentical = 168, IsEqual = 169, IsNotEq = 170, 
    IsSmallerOrEqual = 171, IsGreaterOrEqual = 172, PlusEqual = 173, MinusEqual = 174, 
    MulEqual = 175, Pow = 176, PowEqual = 177, DivEqual = 178, Concaequal = 179, 
    ModEqual = 180, ShiftLeftEqual = 181, ShiftRightEqual = 182, AndEqual = 183, 
    OrEqual = 184, XorEqual = 185, BooleanOr = 186, BooleanAnd = 187, NullCoalescing = 188, 
    NullCoalescingEqual = 189, ShiftLeft = 190, ShiftRight = 191, DoubleColon = 192, 
    ObjectOperator = 193, NamespaceSeparator = 194, Ellipsis = 195, Less = 196, 
    Greater = 197, Ampersand = 198, Pipe = 199, Bang = 200, Caret = 201, 
    Plus = 202, Minus = 203, Asterisk = 204, Percent = 205, Divide = 206, 
    Tilde = 207, SuppressWarnings = 208, Dollar = 209, Dot = 210, QuestionMark = 211, 
    OpenRoundBracket = 212, CloseRoundBracket = 213, OpenSquareBracket = 214, 
    CloseSquareBracket = 215, OpenCurlyBracket = 216, CloseCurlyBracket = 217, 
    Comma = 218, Colon = 219, SemiColon = 220, Eq = 221, Quote = 222, BackQuote = 223, 
    VarName = 224, Label = 225, Octal = 226, Decimal = 227, Real = 228, 
    Hex = 229, Binary = 230, BackQuoteString = 231, SingleQuoteString = 232, 
    DoubleQuote = 233, StartNowDoc = 234, StartHereDoc = 235, ErrorPhp = 236, 
    CurlyDollar = 237, UnicodeEscape = 238, StringPart = 239, Comment = 240, 
    PHPEndSingleLineComment = 241, CommentEnd = 242, HereDocText = 243, 
    XmlText2 = 244
  };

  enum {
    PhpComments = 2, ErrorLexem = 3, SkipChannel = 4
  };

  enum {
    XML = 1, INSIDE = 2, HtmlQuoteStringMode = 3, HtmlDoubleQuoteStringMode = 4, 
    SCRIPT = 5, STYLE = 6, PHP = 7, InterpolationString = 8, SingleLineCommentMode = 9, 
    HereDoc = 10
  };

  explicit PhpLexer(antlr4::CharStream *input);

  ~PhpLexer() override;


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
  void HtmlScriptOpenAction(antlr4::RuleContext *context, size_t actionIndex);
  void HtmlStyleOpenAction(antlr4::RuleContext *context, size_t actionIndex);
  void HtmlCloseAction(antlr4::RuleContext *context, size_t actionIndex);
  void CloseCurlyBracketAction(antlr4::RuleContext *context, size_t actionIndex);
  void CurlyDollarAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool ShebangSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PHPEndSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StartNowDocSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StartHereDocSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CurlyDollarSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PhpStartEchoFragmentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PhpStartFragmentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

