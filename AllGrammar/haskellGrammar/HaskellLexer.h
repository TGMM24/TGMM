
// Generated from HaskellLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  HaskellLexer : public HaskellBaseLexer {
public:
  enum {
    NEWLINE = 1, TAB = 2, WS = 3, AS = 4, CASE = 5, CLASS = 6, DATA = 7, 
    DEFAULT = 8, DERIVING = 9, DO = 10, ELSE = 11, HIDING = 12, IF = 13, 
    IMPORT = 14, IN = 15, INFIX = 16, INFIXL = 17, INFIXR = 18, INSTANCE = 19, 
    LET = 20, MODULE = 21, NEWTYPE = 22, OF = 23, QUALIFIED = 24, THEN = 25, 
    TYPE = 26, WHERE = 27, WILDCARD = 28, FORALL = 29, FOREIGN = 30, EXPORT = 31, 
    SAFE = 32, INTERRUPTIBLE = 33, UNSAFE = 34, MDO = 35, FAMILY = 36, ROLE = 37, 
    STDCALL = 38, CCALL = 39, CAPI = 40, CPPCALL = 41, JSCALL = 42, REC = 43, 
    GROUP = 44, BY = 45, USING = 46, PATTERN = 47, STOCK = 48, ANYCLASS = 49, 
    VIA = 50, LANGUAGE = 51, OPTIONS_GHC = 52, OPTIONS = 53, INLINE = 54, 
    NOINLINE = 55, SPECIALISE = 56, SPECINLINE = 57, SOURCE = 58, RULES = 59, 
    SCC = 60, DEPRECATED = 61, WARNING = 62, UNPACK = 63, NOUNPACK = 64, 
    ANN = 65, MINIMAL = 66, CTYPE = 67, OVERLAPPING = 68, OVERLAPPABLE = 69, 
    OVERLAPS = 70, INCOHERENT = 71, COMPLETE = 72, LCASE = 73, DoubleArrow = 74, 
    DoubleColon = 75, Arrow = 76, Revarrow = 77, LarrowTail = 78, RarrowTail = 79, 
    LLarrowTail = 80, RRarrowTail = 81, Hash = 82, Less = 83, Greater = 84, 
    Ampersand = 85, Pipe = 86, Bang = 87, Caret = 88, Plus = 89, Minus = 90, 
    Asterisk = 91, Percent = 92, Divide = 93, Tilde = 94, Atsign = 95, DDollar = 96, 
    Dollar = 97, DoubleDot = 98, Dot = 99, Semi = 100, QuestionMark = 101, 
    Comma = 102, Colon = 103, Eq = 104, Quote = 105, DoubleQuote = 106, 
    ReverseSlash = 107, BackQuote = 108, AopenParen = 109, AcloseParen = 110, 
    TopenTexpQuote = 111, TcloseTExpQoute = 112, TopenExpQuote = 113, TopenPatQuote = 114, 
    TopenTypQoute = 115, TopenDecQoute = 116, TcloseQoute = 117, OpenBoxParen = 118, 
    CloseBoxParen = 119, OpenRoundBracket = 120, CloseRoundBracket = 121, 
    OpenSquareBracket = 122, CloseSquareBracket = 123, CHAR = 124, STRING = 125, 
    VARID = 126, CONID = 127, OpenPragmaBracket = 128, ClosePragmaBracket = 129, 
    COMMENT = 130, NCOMMENT = 131, OCURLY = 132, CCURLY = 133, VOCURLY = 134, 
    VCCURLY = 135, SEMI = 136, DECIMAL = 137, OCTAL = 138, HEXADECIMAL = 139, 
    FLOAT = 140, EXPONENT = 141
  };

  explicit HaskellLexer(antlr4::CharStream *input);

  ~HaskellLexer() override;


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
  void NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void TABAction(antlr4::RuleContext *context, size_t actionIndex);
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);
  void VOCURLYAction(antlr4::RuleContext *context, size_t actionIndex);
  void VCCURLYAction(antlr4::RuleContext *context, size_t actionIndex);
  void SEMIAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

