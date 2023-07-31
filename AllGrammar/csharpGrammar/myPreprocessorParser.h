
// Generated from myPreprocessorParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myPreprocessorParserBase.h"



class  myPreprocessorParser : public myPreprocessorParserBase {
public:
  enum {
    BYTE_ORDER_MARK = 1, SINGLE_LINE_DOC_COMMENT = 2, EMPTY_DELIMITED_DOC_COMMENT = 3, 
    DELIMITED_DOC_COMMENT = 4, SINGLE_LINE_COMMENT = 5, DELIMITED_COMMENT = 6, 
    WHITESPACES = 7, SHARP = 8, ABSTRACT = 9, ADD = 10, ALIAS = 11, ARGLIST = 12, 
    AS = 13, ASCENDING = 14, ASYNC = 15, AWAIT = 16, BASE = 17, BOOL = 18, 
    BREAK = 19, BY = 20, BYTE = 21, CASE = 22, CATCH = 23, CHAR = 24, CHECKED = 25, 
    CLASS = 26, CONST = 27, CONTINUE = 28, DECIMAL = 29, DEFAULT = 30, DELEGATE = 31, 
    DESCENDING = 32, DO = 33, DOUBLE = 34, DYNAMIC = 35, ELSE = 36, ENUM = 37, 
    EQUALS = 38, EVENT = 39, EXPLICIT = 40, EXTERN = 41, FALSE = 42, FINALLY = 43, 
    FIXED = 44, FLOAT = 45, FOR = 46, FOREACH = 47, FROM = 48, GET = 49, 
    GOTO = 50, GROUP = 51, IF = 52, IMPLICIT = 53, IN = 54, INT = 55, INTERFACE = 56, 
    INTERNAL = 57, INTO = 58, IS = 59, JOIN = 60, LET = 61, LOCK = 62, LONG = 63, 
    NAMEOF = 64, NAMESPACE = 65, NEW = 66, NULL_ = 67, OBJECT = 68, ON = 69, 
    OPERATOR = 70, ORDERBY = 71, OUT = 72, OVERRIDE = 73, PARAMS = 74, PARTIAL = 75, 
    PRIVATE = 76, PROTECTED = 77, PUBLIC = 78, READONLY = 79, REF = 80, 
    REMOVE = 81, RETURN = 82, SBYTE = 83, SEALED = 84, SELECT = 85, SET = 86, 
    SHORT = 87, SIZEOF = 88, STACKALLOC = 89, STATIC = 90, STRING = 91, 
    STRUCT = 92, SWITCH = 93, THIS = 94, THROW = 95, TRUE = 96, TRY = 97, 
    TYPEOF = 98, UINT = 99, ULONG = 100, UNCHECKED = 101, UNMANAGED = 102, 
    UNSAFE = 103, USHORT = 104, USING = 105, VAR = 106, VIRTUAL = 107, VOID = 108, 
    VOLATILE = 109, WHEN = 110, WHERE = 111, WHILE = 112, YIELD = 113, IDENTIFIER = 114, 
    LITERAL_ACCESS = 115, INTEGER_LITERAL = 116, HEX_INTEGER_LITERAL = 117, 
    BIN_INTEGER_LITERAL = 118, REAL_LITERAL = 119, CHARACTER_LITERAL = 120, 
    REGULAR_STRING = 121, VERBATIUM_STRING = 122, INTERPOLATED_REGULAR_STRING_START = 123, 
    INTERPOLATED_VERBATIUM_STRING_START = 124, OPEN_BRACE = 125, CLOSE_BRACE = 126, 
    OPEN_BRACKET = 127, CLOSE_BRACKET = 128, OPEN_PARENS = 129, CLOSE_PARENS = 130, 
    DOT = 131, COMMA = 132, COLON = 133, SEMICOLON = 134, PLUS = 135, MINUS = 136, 
    STAR = 137, DIV = 138, PERCENT = 139, AMP = 140, BITWISE_OR = 141, CARET = 142, 
    BANG = 143, TILDE = 144, ASSIGNMENT = 145, LT = 146, GT = 147, INTERR = 148, 
    DOUBLE_COLON = 149, OP_COALESCING = 150, OP_INC = 151, OP_DEC = 152, 
    OP_AND = 153, OP_OR = 154, OP_PTR = 155, OP_EQ = 156, OP_NE = 157, OP_LE = 158, 
    OP_GE = 159, OP_ADD_ASSIGNMENT = 160, OP_SUB_ASSIGNMENT = 161, OP_MULT_ASSIGNMENT = 162, 
    OP_DIV_ASSIGNMENT = 163, OP_MOD_ASSIGNMENT = 164, OP_AND_ASSIGNMENT = 165, 
    OP_OR_ASSIGNMENT = 166, OP_XOR_ASSIGNMENT = 167, OP_LEFT_SHIFT = 168, 
    OP_LEFT_SHIFT_ASSIGNMENT = 169, OP_COALESCING_ASSIGNMENT = 170, OP_RANGE = 171, 
    DOUBLE_CURLY_INSIDE = 172, OPEN_BRACE_INSIDE = 173, REGULAR_CHAR_INSIDE = 174, 
    VERBATIUM_DOUBLE_QUOTE_INSIDE = 175, DOUBLE_QUOTE_INSIDE = 176, REGULAR_STRING_INSIDE = 177, 
    VERBATIUM_INSIDE_STRING = 178, CLOSE_BRACE_INSIDE = 179, FORMAT_STRING = 180, 
    DIRECTIVE_WHITESPACES = 181, DIGITS = 182, DEFINE = 183, UNDEF = 184, 
    ELIF = 185, ENDIF = 186, LINE = 187, ERROR = 188, WARNING = 189, REGION = 190, 
    ENDREGION = 191, PRAGMA = 192, NULLABLE = 193, DIRECTIVE_HIDDEN = 194, 
    CONDITIONAL_SYMBOL = 195, DIRECTIVE_NEW_LINE = 196, TEXT = 197, DOUBLE_CURLY_CLOSE_INSIDE = 198
  };

  enum {
    RulePreprocessor_directive = 0, RuleDirective_new_line_or_sharp = 1, 
    RulePreprocessor_expression = 2
  };

  explicit myPreprocessorParser(antlr4::TokenStream *input);

  myPreprocessorParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~myPreprocessorParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Preprocessor_directiveContext;
  class Directive_new_line_or_sharpContext;
  class Preprocessor_expressionContext; 

  class  Preprocessor_directiveContext : public antlr4::ParserRuleContext {
  public:
    bool value;
    Preprocessor_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Preprocessor_directiveContext() = default;
    void copyFrom(Preprocessor_directiveContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreprocessorDiagnosticContext : public Preprocessor_directiveContext {
  public:
    PreprocessorDiagnosticContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TEXT();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    antlr4::tree::TerminalNode *WARNING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorNullableContext : public Preprocessor_directiveContext {
  public:
    PreprocessorNullableContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *NULLABLE();
    antlr4::tree::TerminalNode *TEXT();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorRegionContext : public Preprocessor_directiveContext {
  public:
    PreprocessorRegionContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *REGION();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *ENDREGION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorDeclarationContext : public Preprocessor_directiveContext {
  public:
    PreprocessorDeclarationContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *CONDITIONAL_SYMBOL();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    antlr4::tree::TerminalNode *UNDEF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorConditionalContext : public Preprocessor_directiveContext {
  public:
    PreprocessorConditionalContext(Preprocessor_directiveContext *ctx);

    myPreprocessorParser::Preprocessor_expressionContext *expr = nullptr;
    antlr4::tree::TerminalNode *IF();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    Preprocessor_expressionContext *preprocessor_expression();
    antlr4::tree::TerminalNode *ELIF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ENDIF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorPragmaContext : public Preprocessor_directiveContext {
  public:
    PreprocessorPragmaContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *PRAGMA();
    antlr4::tree::TerminalNode *TEXT();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreprocessorLineContext : public Preprocessor_directiveContext {
  public:
    PreprocessorLineContext(Preprocessor_directiveContext *ctx);

    antlr4::tree::TerminalNode *LINE();
    Directive_new_line_or_sharpContext *directive_new_line_or_sharp();
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DIRECTIVE_HIDDEN();
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Preprocessor_directiveContext* preprocessor_directive();

  class  Directive_new_line_or_sharpContext : public antlr4::ParserRuleContext {
  public:
    Directive_new_line_or_sharpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIRECTIVE_NEW_LINE();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Directive_new_line_or_sharpContext* directive_new_line_or_sharp();

  class  Preprocessor_expressionContext : public antlr4::ParserRuleContext {
  public:
    std::string value;
    myPreprocessorParser::Preprocessor_expressionContext *expr1 = nullptr;
    myPreprocessorParser::Preprocessor_expressionContext *expr = nullptr;
    myPreprocessorParser::Preprocessor_expressionContext *expr2 = nullptr;
    Preprocessor_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *CONDITIONAL_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Preprocessor_expressionContext *> preprocessor_expression();
    Preprocessor_expressionContext* preprocessor_expression(size_t i);
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *OP_EQ();
    antlr4::tree::TerminalNode *OP_NE();
    antlr4::tree::TerminalNode *OP_AND();
    antlr4::tree::TerminalNode *OP_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preprocessor_expressionContext* preprocessor_expression();
  Preprocessor_expressionContext* preprocessor_expression(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool preprocessor_expressionSempred(Preprocessor_expressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

