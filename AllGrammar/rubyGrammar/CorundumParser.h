
// Generated from Corundum.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  CorundumParser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleExpression_list = 1, RuleExpression = 2, RuleGlobal_get = 3, 
    RuleGlobal_set = 4, RuleGlobal_result = 5, RuleFunction_inline_call = 6, 
    RuleRequire_block = 7, RulePir_inline = 8, RulePir_expression_list = 9, 
    RuleFunction_definition = 10, RuleFunction_definition_body = 11, RuleFunction_definition_header = 12, 
    RuleFunction_name = 13, RuleFunction_definition_params = 14, RuleFunction_definition_params_list = 15, 
    RuleFunction_definition_param_id = 16, RuleReturn_statement = 17, RuleFunction_call = 18, 
    RuleFunction_call_param_list = 19, RuleFunction_call_params = 20, RuleFunction_param = 21, 
    RuleFunction_unnamed_param = 22, RuleFunction_named_param = 23, RuleFunction_call_assignment = 24, 
    RuleAll_result = 25, RuleElsif_statement = 26, RuleIf_elsif_statement = 27, 
    RuleIf_statement = 28, RuleUnless_statement = 29, RuleWhile_statement = 30, 
    RuleFor_statement = 31, RuleInit_expression = 32, RuleAll_assignment = 33, 
    RuleFor_init_list = 34, RuleCond_expression = 35, RuleLoop_expression = 36, 
    RuleFor_loop_list = 37, RuleStatement_body = 38, RuleStatement_expression_list = 39, 
    RuleAssignment = 40, RuleDynamic_assignment = 41, RuleInt_assignment = 42, 
    RuleFloat_assignment = 43, RuleString_assignment = 44, RuleInitial_array_assignment = 45, 
    RuleArray_assignment = 46, RuleArray_definition = 47, RuleArray_definition_elements = 48, 
    RuleArray_selector = 49, RuleDynamic_result = 50, RuleDynamic_ = 51, 
    RuleInt_result = 52, RuleFloat_result = 53, RuleString_result = 54, 
    RuleComparison_list = 55, RuleComparison = 56, RuleComp_var = 57, RuleLvalue = 58, 
    RuleRvalue = 59, RuleBreak_expression = 60, RuleLiteral_t = 61, RuleFloat_t = 62, 
    RuleInt_t = 63, RuleBool_t = 64, RuleNil_t = 65, RuleId_ = 66, RuleId_global = 67, 
    RuleId_function = 68, RuleTerminator = 69, RuleElse_token = 70, RuleCrlf = 71
  };

  explicit CorundumParser(antlr4::TokenStream *input);

  CorundumParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CorundumParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class Expression_listContext;
  class ExpressionContext;
  class Global_getContext;
  class Global_setContext;
  class Global_resultContext;
  class Function_inline_callContext;
  class Require_blockContext;
  class Pir_inlineContext;
  class Pir_expression_listContext;
  class Function_definitionContext;
  class Function_definition_bodyContext;
  class Function_definition_headerContext;
  class Function_nameContext;
  class Function_definition_paramsContext;
  class Function_definition_params_listContext;
  class Function_definition_param_idContext;
  class Return_statementContext;
  class Function_callContext;
  class Function_call_param_listContext;
  class Function_call_paramsContext;
  class Function_paramContext;
  class Function_unnamed_paramContext;
  class Function_named_paramContext;
  class Function_call_assignmentContext;
  class All_resultContext;
  class Elsif_statementContext;
  class If_elsif_statementContext;
  class If_statementContext;
  class Unless_statementContext;
  class While_statementContext;
  class For_statementContext;
  class Init_expressionContext;
  class All_assignmentContext;
  class For_init_listContext;
  class Cond_expressionContext;
  class Loop_expressionContext;
  class For_loop_listContext;
  class Statement_bodyContext;
  class Statement_expression_listContext;
  class AssignmentContext;
  class Dynamic_assignmentContext;
  class Int_assignmentContext;
  class Float_assignmentContext;
  class String_assignmentContext;
  class Initial_array_assignmentContext;
  class Array_assignmentContext;
  class Array_definitionContext;
  class Array_definition_elementsContext;
  class Array_selectorContext;
  class Dynamic_resultContext;
  class Dynamic_Context;
  class Int_resultContext;
  class Float_resultContext;
  class String_resultContext;
  class Comparison_listContext;
  class ComparisonContext;
  class Comp_varContext;
  class LvalueContext;
  class RvalueContext;
  class Break_expressionContext;
  class Literal_tContext;
  class Float_tContext;
  class Int_tContext;
  class Bool_tContext;
  class Nil_tContext;
  class Id_Context;
  class Id_globalContext;
  class Id_functionContext;
  class TerminatorContext;
  class Else_tokenContext;
  class CrlfContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    TerminatorContext *terminator();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_listContext* expression_list();
  Expression_listContext* expression_list(int precedence);
  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_definitionContext *function_definition();
    Function_inline_callContext *function_inline_call();
    Require_blockContext *require_block();
    If_statementContext *if_statement();
    Unless_statementContext *unless_statement();
    RvalueContext *rvalue();
    Return_statementContext *return_statement();
    While_statementContext *while_statement();
    For_statementContext *for_statement();
    Pir_inlineContext *pir_inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Global_getContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_name = nullptr;
    antlr4::Token *op = nullptr;
    CorundumParser::Id_globalContext *global_name = nullptr;
    Global_getContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    Id_globalContext *id_global();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_getContext* global_get();

  class  Global_setContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::Id_globalContext *global_name = nullptr;
    antlr4::Token *op = nullptr;
    CorundumParser::All_resultContext *result = nullptr;
    Global_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_globalContext *id_global();
    antlr4::tree::TerminalNode *ASSIGN();
    All_resultContext *all_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_setContext* global_set();

  class  Global_resultContext : public antlr4::ParserRuleContext {
  public:
    Global_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_globalContext *id_global();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_resultContext* global_result();

  class  Function_inline_callContext : public antlr4::ParserRuleContext {
  public:
    Function_inline_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_inline_callContext* function_inline_call();

  class  Require_blockContext : public antlr4::ParserRuleContext {
  public:
    Require_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE();
    Literal_tContext *literal_t();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Require_blockContext* require_block();

  class  Pir_inlineContext : public antlr4::ParserRuleContext {
  public:
    Pir_inlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIR();
    CrlfContext *crlf();
    Pir_expression_listContext *pir_expression_list();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pir_inlineContext* pir_inline();

  class  Pir_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Pir_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pir_expression_listContext* pir_expression_list();

  class  Function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_definition_headerContext *function_definition_header();
    Function_definition_bodyContext *function_definition_body();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definitionContext* function_definition();

  class  Function_definition_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_definition_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definition_bodyContext* function_definition_body();

  class  Function_definition_headerContext : public antlr4::ParserRuleContext {
  public:
    Function_definition_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    Function_nameContext *function_name();
    CrlfContext *crlf();
    Function_definition_paramsContext *function_definition_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definition_headerContext* function_definition_header();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_functionContext *id_function();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_nameContext* function_name();

  class  Function_definition_paramsContext : public antlr4::ParserRuleContext {
  public:
    Function_definition_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    Function_definition_params_listContext *function_definition_params_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definition_paramsContext* function_definition_params();

  class  Function_definition_params_listContext : public antlr4::ParserRuleContext {
  public:
    Function_definition_params_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_definition_param_idContext *function_definition_param_id();
    Function_definition_params_listContext *function_definition_params_list();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definition_params_listContext* function_definition_params_list();
  Function_definition_params_listContext* function_definition_params_list(int precedence);
  class  Function_definition_param_idContext : public antlr4::ParserRuleContext {
  public:
    Function_definition_param_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_definition_param_idContext* function_definition_param_id();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    All_resultContext *all_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_statementContext* return_statement();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::Function_nameContext *name = nullptr;
    CorundumParser::Function_call_param_listContext *params = nullptr;
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    Function_nameContext *function_name();
    Function_call_param_listContext *function_call_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_callContext* function_call();

  class  Function_call_param_listContext : public antlr4::ParserRuleContext {
  public:
    Function_call_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_call_paramsContext *function_call_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_param_listContext* function_call_param_list();

  class  Function_call_paramsContext : public antlr4::ParserRuleContext {
  public:
    Function_call_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_paramContext *function_param();
    Function_call_paramsContext *function_call_params();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_paramsContext* function_call_params();
  Function_call_paramsContext* function_call_params(int precedence);
  class  Function_paramContext : public antlr4::ParserRuleContext {
  public:
    Function_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_unnamed_paramContext *function_unnamed_param();
    Function_named_paramContext *function_named_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_paramContext* function_param();

  class  Function_unnamed_paramContext : public antlr4::ParserRuleContext {
  public:
    Function_unnamed_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    Float_resultContext *float_result();
    String_resultContext *string_result();
    Dynamic_resultContext *dynamic_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_unnamed_paramContext* function_unnamed_param();

  class  Function_named_paramContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Function_named_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *ASSIGN();
    Int_resultContext *int_result();
    Float_resultContext *float_result();
    String_resultContext *string_result();
    Dynamic_resultContext *dynamic_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_named_paramContext* function_named_param();

  class  Function_call_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Function_call_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_assignmentContext* function_call_assignment();

  class  All_resultContext : public antlr4::ParserRuleContext {
  public:
    All_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    Float_resultContext *float_result();
    String_resultContext *string_result();
    Dynamic_resultContext *dynamic_result();
    Global_resultContext *global_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  All_resultContext* all_result();

  class  Elsif_statementContext : public antlr4::ParserRuleContext {
  public:
    Elsif_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_elsif_statementContext *if_elsif_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elsif_statementContext* elsif_statement();

  class  If_elsif_statementContext : public antlr4::ParserRuleContext {
  public:
    If_elsif_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSIF();
    Cond_expressionContext *cond_expression();
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);
    std::vector<Statement_bodyContext *> statement_body();
    Statement_bodyContext* statement_body(size_t i);
    Else_tokenContext *else_token();
    If_elsif_statementContext *if_elsif_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_elsif_statementContext* if_elsif_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Cond_expressionContext *cond_expression();
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);
    std::vector<Statement_bodyContext *> statement_body();
    Statement_bodyContext* statement_body(size_t i);
    antlr4::tree::TerminalNode *END();
    Else_tokenContext *else_token();
    Elsif_statementContext *elsif_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  Unless_statementContext : public antlr4::ParserRuleContext {
  public:
    Unless_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLESS();
    Cond_expressionContext *cond_expression();
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);
    std::vector<Statement_bodyContext *> statement_body();
    Statement_bodyContext* statement_body(size_t i);
    antlr4::tree::TerminalNode *END();
    Else_tokenContext *else_token();
    Elsif_statementContext *elsif_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unless_statementContext* unless_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Cond_expressionContext *cond_expression();
    CrlfContext *crlf();
    Statement_bodyContext *statement_body();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_statementContext* while_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    Init_expressionContext *init_expression();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    Cond_expressionContext *cond_expression();
    Loop_expressionContext *loop_expression();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    CrlfContext *crlf();
    Statement_bodyContext *statement_body();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_statementContext* for_statement();

  class  Init_expressionContext : public antlr4::ParserRuleContext {
  public:
    Init_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_init_listContext *for_init_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Init_expressionContext* init_expression();

  class  All_assignmentContext : public antlr4::ParserRuleContext {
  public:
    All_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_assignmentContext *int_assignment();
    Float_assignmentContext *float_assignment();
    String_assignmentContext *string_assignment();
    Dynamic_assignmentContext *dynamic_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  All_assignmentContext* all_assignment();

  class  For_init_listContext : public antlr4::ParserRuleContext {
  public:
    For_init_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_assignmentContext *all_assignment();
    For_init_listContext *for_init_list();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_init_listContext* for_init_list();
  For_init_listContext* for_init_list(int precedence);
  class  Cond_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cond_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comparison_listContext *comparison_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_expressionContext* cond_expression();

  class  Loop_expressionContext : public antlr4::ParserRuleContext {
  public:
    Loop_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_loop_listContext *for_loop_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_expressionContext* loop_expression();

  class  For_loop_listContext : public antlr4::ParserRuleContext {
  public:
    For_loop_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_assignmentContext *all_assignment();
    For_loop_listContext *for_loop_list();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_loop_listContext* for_loop_list();
  For_loop_listContext* for_loop_list(int precedence);
  class  Statement_bodyContext : public antlr4::ParserRuleContext {
  public:
    Statement_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_expression_listContext *statement_expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_bodyContext* statement_body();

  class  Statement_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    TerminatorContext *terminator();
    antlr4::tree::TerminalNode *RETRY();
    Break_expressionContext *break_expression();
    Statement_expression_listContext *statement_expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_expression_listContext* statement_expression_list();
  Statement_expression_listContext* statement_expression_list(int precedence);
  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RvalueContext *rvalue();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    antlr4::tree::TerminalNode *MINUS_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *EXP_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  Dynamic_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    Dynamic_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dynamic_resultContext *dynamic_result();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    antlr4::tree::TerminalNode *MINUS_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *EXP_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dynamic_assignmentContext* dynamic_assignment();

  class  Int_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    Int_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    antlr4::tree::TerminalNode *MINUS_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *EXP_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Int_assignmentContext* int_assignment();

  class  Float_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    Float_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Float_resultContext *float_result();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    antlr4::tree::TerminalNode *MINUS_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *EXP_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Float_assignmentContext* float_assignment();

  class  String_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    String_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_resultContext *string_result();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_assignmentContext* string_assignment();

  class  Initial_array_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::LvalueContext *var_id = nullptr;
    antlr4::Token *op = nullptr;
    Initial_array_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SBRACKET();
    antlr4::tree::TerminalNode *RIGHT_SBRACKET();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initial_array_assignmentContext* initial_array_assignment();

  class  Array_assignmentContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::Array_selectorContext *arr_def = nullptr;
    antlr4::Token *op = nullptr;
    CorundumParser::All_resultContext *arr_val = nullptr;
    Array_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_selectorContext *array_selector();
    antlr4::tree::TerminalNode *ASSIGN();
    All_resultContext *all_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_assignmentContext* array_assignment();

  class  Array_definitionContext : public antlr4::ParserRuleContext {
  public:
    Array_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SBRACKET();
    Array_definition_elementsContext *array_definition_elements();
    antlr4::tree::TerminalNode *RIGHT_SBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_definitionContext* array_definition();

  class  Array_definition_elementsContext : public antlr4::ParserRuleContext {
  public:
    Array_definition_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    Dynamic_resultContext *dynamic_result();
    Array_definition_elementsContext *array_definition_elements();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_definition_elementsContext* array_definition_elements();
  Array_definition_elementsContext* array_definition_elements(int precedence);
  class  Array_selectorContext : public antlr4::ParserRuleContext {
  public:
    Array_selectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *LEFT_SBRACKET();
    antlr4::tree::TerminalNode *RIGHT_SBRACKET();
    Int_resultContext *int_result();
    Dynamic_resultContext *dynamic_result();
    Id_globalContext *id_global();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_selectorContext* array_selector();

  class  Dynamic_resultContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Dynamic_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    std::vector<Dynamic_resultContext *> dynamic_result();
    Dynamic_resultContext* dynamic_result(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    Float_resultContext *float_result();
    String_resultContext *string_result();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    Dynamic_Context *dynamic_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dynamic_resultContext* dynamic_result();
  Dynamic_resultContext* dynamic_result(int precedence);
  class  Dynamic_Context : public antlr4::ParserRuleContext {
  public:
    Dynamic_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Function_call_assignmentContext *function_call_assignment();
    Array_selectorContext *array_selector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dynamic_Context* dynamic_();

  class  Int_resultContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Int_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    std::vector<Int_resultContext *> int_result();
    Int_resultContext* int_result(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    Int_tContext *int_t();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Int_resultContext* int_result();
  Int_resultContext* int_result(int precedence);
  class  Float_resultContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Float_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    std::vector<Float_resultContext *> float_result();
    Float_resultContext* float_result(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    Float_tContext *float_t();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Float_resultContext* float_result();
  Float_resultContext* float_result(int precedence);
  class  String_resultContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    String_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_resultContext *int_result();
    std::vector<String_resultContext *> string_result();
    String_resultContext* string_result(size_t i);
    antlr4::tree::TerminalNode *MUL();
    Literal_tContext *literal_t();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_resultContext* string_result();
  String_resultContext* string_result(int precedence);
  class  Comparison_listContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::ComparisonContext *left = nullptr;
    antlr4::Token *op = nullptr;
    CorundumParser::Comparison_listContext *right = nullptr;
    Comparison_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparisonContext *comparison();
    antlr4::tree::TerminalNode *BIT_AND();
    Comparison_listContext *comparison_list();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comparison_listContext* comparison_list();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    CorundumParser::Comp_varContext *left = nullptr;
    antlr4::Token *op = nullptr;
    CorundumParser::Comp_varContext *right = nullptr;
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Comp_varContext *> comp_var();
    Comp_varContext* comp_var(size_t i);
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS_EQUAL();
    antlr4::tree::TerminalNode *GREATER_EQUAL();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOT_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonContext* comparison();

  class  Comp_varContext : public antlr4::ParserRuleContext {
  public:
    Comp_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_resultContext *all_result();
    Array_selectorContext *array_selector();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comp_varContext* comp_var();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LvalueContext* lvalue();

  class  RvalueContext : public antlr4::ParserRuleContext {
  public:
    RvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    Initial_array_assignmentContext *initial_array_assignment();
    Array_assignmentContext *array_assignment();
    Int_resultContext *int_result();
    Float_resultContext *float_result();
    String_resultContext *string_result();
    Global_setContext *global_set();
    Global_getContext *global_get();
    Dynamic_assignmentContext *dynamic_assignment();
    String_assignmentContext *string_assignment();
    Float_assignmentContext *float_assignment();
    Int_assignmentContext *int_assignment();
    AssignmentContext *assignment();
    Function_callContext *function_call();
    Literal_tContext *literal_t();
    Bool_tContext *bool_t();
    Float_tContext *float_t();
    Int_tContext *int_t();
    Nil_tContext *nil_t();
    std::vector<RvalueContext *> rvalue();
    RvalueContext* rvalue(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *BIT_NOT();
    antlr4::tree::TerminalNode *LEFT_RBRACKET();
    antlr4::tree::TerminalNode *RIGHT_RBRACKET();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *BIT_SHL();
    antlr4::tree::TerminalNode *BIT_SHR();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS_EQUAL();
    antlr4::tree::TerminalNode *GREATER_EQUAL();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOT_EQUAL();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RvalueContext* rvalue();
  RvalueContext* rvalue(int precedence);
  class  Break_expressionContext : public antlr4::ParserRuleContext {
  public:
    Break_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Break_expressionContext* break_expression();

  class  Literal_tContext : public antlr4::ParserRuleContext {
  public:
    Literal_tContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Literal_tContext* literal_t();

  class  Float_tContext : public antlr4::ParserRuleContext {
  public:
    Float_tContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Float_tContext* float_t();

  class  Int_tContext : public antlr4::ParserRuleContext {
  public:
    Int_tContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Int_tContext* int_t();

  class  Bool_tContext : public antlr4::ParserRuleContext {
  public:
    Bool_tContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bool_tContext* bool_t();

  class  Nil_tContext : public antlr4::ParserRuleContext {
  public:
    Nil_tContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nil_tContext* nil_t();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Id_Context* id_();

  class  Id_globalContext : public antlr4::ParserRuleContext {
  public:
    Id_globalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Id_globalContext* id_global();

  class  Id_functionContext : public antlr4::ParserRuleContext {
  public:
    Id_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Id_functionContext* id_function();

  class  TerminatorContext : public antlr4::ParserRuleContext {
  public:
    TerminatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    CrlfContext *crlf();
    TerminatorContext *terminator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TerminatorContext* terminator();
  TerminatorContext* terminator(int precedence);
  class  Else_tokenContext : public antlr4::ParserRuleContext {
  public:
    Else_tokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Else_tokenContext* else_token();

  class  CrlfContext : public antlr4::ParserRuleContext {
  public:
    CrlfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CRLF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CrlfContext* crlf();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expression_listSempred(Expression_listContext *_localctx, size_t predicateIndex);
  bool function_definition_params_listSempred(Function_definition_params_listContext *_localctx, size_t predicateIndex);
  bool function_call_paramsSempred(Function_call_paramsContext *_localctx, size_t predicateIndex);
  bool for_init_listSempred(For_init_listContext *_localctx, size_t predicateIndex);
  bool for_loop_listSempred(For_loop_listContext *_localctx, size_t predicateIndex);
  bool statement_expression_listSempred(Statement_expression_listContext *_localctx, size_t predicateIndex);
  bool array_definition_elementsSempred(Array_definition_elementsContext *_localctx, size_t predicateIndex);
  bool dynamic_resultSempred(Dynamic_resultContext *_localctx, size_t predicateIndex);
  bool int_resultSempred(Int_resultContext *_localctx, size_t predicateIndex);
  bool float_resultSempred(Float_resultContext *_localctx, size_t predicateIndex);
  bool string_resultSempred(String_resultContext *_localctx, size_t predicateIndex);
  bool rvalueSempred(RvalueContext *_localctx, size_t predicateIndex);
  bool terminatorSempred(TerminatorContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

