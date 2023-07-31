
// Generated from matlab.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  matlabParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, ARRAYMUL = 20, 
    ARRAYDIV = 21, ARRAYRDIV = 22, ARRAYPOW = 23, BREAK = 24, RETURN = 25, 
    FUNCTION = 26, FOR = 27, WHILE = 28, END = 29, GLOBAL = 30, IF = 31, 
    CLEAR = 32, ELSE = 33, ELSEIF = 34, LE_OP = 35, GE_OP = 36, EQ_OP = 37, 
    NE_OP = 38, TRANSPOSE = 39, NCTRANSPOSE = 40, STRING_LITERAL = 41, IDENTIFIER = 42, 
    CONSTANT = 43, CR = 44, WS = 45
  };

  enum {
    RuleFile_ = 0, RulePrimary_expression = 1, RulePostfix_expression = 2, 
    RuleIndex_expression = 3, RuleIndex_expression_list = 4, RuleArray_expression = 5, 
    RuleUnary_expression = 6, RuleUnary_operator = 7, RuleMultiplicative_expression = 8, 
    RuleAdditive_expression = 9, RuleRelational_expression = 10, RuleEquality_expression = 11, 
    RuleAnd_expression = 12, RuleOr_expression = 13, RuleExpression = 14, 
    RuleAssignment_expression = 15, RuleEostmt = 16, RuleStatement = 17, 
    RuleStatement_list = 18, RuleIdentifier_list = 19, RuleGlobal_statement = 20, 
    RuleClear_statement = 21, RuleExpression_statement = 22, RuleAssignment_statement = 23, 
    RuleArray_element = 24, RuleArray_list = 25, RuleSelection_statement = 26, 
    RuleElseif_clause = 27, RuleIteration_statement = 28, RuleJump_statement = 29, 
    RuleTranslation_unit = 30, RuleFunc_ident_list = 31, RuleFunc_return_list = 32, 
    RuleFunction_declare_lhs = 33, RuleFunction_declare = 34
  };

  explicit matlabParser(antlr4::TokenStream *input);

  matlabParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~matlabParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class File_Context;
  class Primary_expressionContext;
  class Postfix_expressionContext;
  class Index_expressionContext;
  class Index_expression_listContext;
  class Array_expressionContext;
  class Unary_expressionContext;
  class Unary_operatorContext;
  class Multiplicative_expressionContext;
  class Additive_expressionContext;
  class Relational_expressionContext;
  class Equality_expressionContext;
  class And_expressionContext;
  class Or_expressionContext;
  class ExpressionContext;
  class Assignment_expressionContext;
  class EostmtContext;
  class StatementContext;
  class Statement_listContext;
  class Identifier_listContext;
  class Global_statementContext;
  class Clear_statementContext;
  class Expression_statementContext;
  class Assignment_statementContext;
  class Array_elementContext;
  class Array_listContext;
  class Selection_statementContext;
  class Elseif_clauseContext;
  class Iteration_statementContext;
  class Jump_statementContext;
  class Translation_unitContext;
  class Func_ident_listContext;
  class Func_return_listContext;
  class Function_declare_lhsContext;
  class Function_declareContext; 

  class  File_Context : public antlr4::ParserRuleContext {
  public:
    File_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Statement_listContext *statement_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  File_Context* file_();

  class  Primary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    ExpressionContext *expression();
    Array_listContext *array_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primary_expressionContext* primary_expression();

  class  Postfix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Postfix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expressionContext *primary_expression();
    Array_expressionContext *array_expression();
    Postfix_expressionContext *postfix_expression();
    antlr4::tree::TerminalNode *TRANSPOSE();
    antlr4::tree::TerminalNode *NCTRANSPOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Postfix_expressionContext* postfix_expression();
  Postfix_expressionContext* postfix_expression(int precedence);
  class  Index_expressionContext : public antlr4::ParserRuleContext {
  public:
    Index_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Index_expressionContext* index_expression();

  class  Index_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Index_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Index_expressionContext *index_expression();
    Index_expression_listContext *index_expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Index_expression_listContext* index_expression_list();
  Index_expression_listContext* index_expression_list(int precedence);
  class  Array_expressionContext : public antlr4::ParserRuleContext {
  public:
    Array_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Index_expression_listContext *index_expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_expressionContext* array_expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_expressionContext *postfix_expression();
    Unary_operatorContext *unary_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Multiplicative_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    Multiplicative_expressionContext *multiplicative_expression();
    antlr4::tree::TerminalNode *ARRAYMUL();
    antlr4::tree::TerminalNode *ARRAYDIV();
    antlr4::tree::TerminalNode *ARRAYRDIV();
    antlr4::tree::TerminalNode *ARRAYPOW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multiplicative_expressionContext* multiplicative_expression();
  Multiplicative_expressionContext* multiplicative_expression(int precedence);
  class  Additive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Additive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiplicative_expressionContext *multiplicative_expression();
    Additive_expressionContext *additive_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Additive_expressionContext* additive_expression();
  Additive_expressionContext* additive_expression(int precedence);
  class  Relational_expressionContext : public antlr4::ParserRuleContext {
  public:
    Relational_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Additive_expressionContext *additive_expression();
    Relational_expressionContext *relational_expression();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GE_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Relational_expressionContext* relational_expression();
  Relational_expressionContext* relational_expression(int precedence);
  class  Equality_expressionContext : public antlr4::ParserRuleContext {
  public:
    Equality_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relational_expressionContext *relational_expression();
    Equality_expressionContext *equality_expression();
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Equality_expressionContext* equality_expression();
  Equality_expressionContext* equality_expression(int precedence);
  class  And_expressionContext : public antlr4::ParserRuleContext {
  public:
    And_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Equality_expressionContext *equality_expression();
    And_expressionContext *and_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  And_expressionContext* and_expression();
  And_expressionContext* and_expression(int precedence);
  class  Or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_expressionContext *and_expression();
    Or_expressionContext *or_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Or_expressionContext* or_expression();
  Or_expressionContext* or_expression(int precedence);
  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_expressionContext *or_expression();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Assignment_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_expressionContext *postfix_expression();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_expressionContext* assignment_expression();

  class  EostmtContext : public antlr4::ParserRuleContext {
  public:
    EostmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EostmtContext* eostmt();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Global_statementContext *global_statement();
    Clear_statementContext *clear_statement();
    Assignment_statementContext *assignment_statement();
    Expression_statementContext *expression_statement();
    Selection_statementContext *selection_statement();
    Iteration_statementContext *iteration_statement();
    Jump_statementContext *jump_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    Statement_listContext *statement_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_listContext* statement_list();
  Statement_listContext* statement_list(int precedence);
  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Identifier_listContext *identifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifier_listContext* identifier_list();
  Identifier_listContext* identifier_list(int precedence);
  class  Global_statementContext : public antlr4::ParserRuleContext {
  public:
    Global_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    Identifier_listContext *identifier_list();
    EostmtContext *eostmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Global_statementContext* global_statement();

  class  Clear_statementContext : public antlr4::ParserRuleContext {
  public:
    Clear_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLEAR();
    Identifier_listContext *identifier_list();
    EostmtContext *eostmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clear_statementContext* clear_statement();

  class  Expression_statementContext : public antlr4::ParserRuleContext {
  public:
    Expression_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EostmtContext *eostmt();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_statementContext* expression_statement();

  class  Assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_expressionContext *assignment_expression();
    EostmtContext *eostmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_statementContext* assignment_statement();

  class  Array_elementContext : public antlr4::ParserRuleContext {
  public:
    Array_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Expression_statementContext *expression_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_elementContext* array_element();

  class  Array_listContext : public antlr4::ParserRuleContext {
  public:
    Array_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_elementContext *array_element();
    Array_listContext *array_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_listContext* array_list();
  Array_listContext* array_list(int precedence);
  class  Selection_statementContext : public antlr4::ParserRuleContext {
  public:
    Selection_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    std::vector<Statement_listContext *> statement_list();
    Statement_listContext* statement_list(size_t i);
    antlr4::tree::TerminalNode *END();
    EostmtContext *eostmt();
    antlr4::tree::TerminalNode *ELSE();
    Elseif_clauseContext *elseif_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Selection_statementContext* selection_statement();

  class  Elseif_clauseContext : public antlr4::ParserRuleContext {
  public:
    Elseif_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    ExpressionContext *expression();
    Statement_listContext *statement_list();
    Elseif_clauseContext *elseif_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elseif_clauseContext* elseif_clause();
  Elseif_clauseContext* elseif_clause(int precedence);
  class  Iteration_statementContext : public antlr4::ParserRuleContext {
  public:
    Iteration_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *END();
    EostmtContext *eostmt();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Iteration_statementContext* iteration_statement();

  class  Jump_statementContext : public antlr4::ParserRuleContext {
  public:
    Jump_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    EostmtContext *eostmt();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Jump_statementContext* jump_statement();

  class  Translation_unitContext : public antlr4::ParserRuleContext {
  public:
    Translation_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_declareContext *function_declare();
    EostmtContext *eostmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Translation_unitContext* translation_unit();

  class  Func_ident_listContext : public antlr4::ParserRuleContext {
  public:
    Func_ident_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Func_ident_listContext *func_ident_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_ident_listContext* func_ident_list();
  Func_ident_listContext* func_ident_list(int precedence);
  class  Func_return_listContext : public antlr4::ParserRuleContext {
  public:
    Func_return_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Func_ident_listContext *func_ident_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_return_listContext* func_return_list();

  class  Function_declare_lhsContext : public antlr4::ParserRuleContext {
  public:
    Function_declare_lhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    Func_ident_listContext *func_ident_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declare_lhsContext* function_declare_lhs();

  class  Function_declareContext : public antlr4::ParserRuleContext {
  public:
    Function_declareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declare_lhsContext *function_declare_lhs();
    Func_return_listContext *func_return_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declareContext* function_declare();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex);
  bool index_expression_listSempred(Index_expression_listContext *_localctx, size_t predicateIndex);
  bool multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex);
  bool additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex);
  bool relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex);
  bool equality_expressionSempred(Equality_expressionContext *_localctx, size_t predicateIndex);
  bool and_expressionSempred(And_expressionContext *_localctx, size_t predicateIndex);
  bool or_expressionSempred(Or_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex);
  bool identifier_listSempred(Identifier_listContext *_localctx, size_t predicateIndex);
  bool array_listSempred(Array_listContext *_localctx, size_t predicateIndex);
  bool elseif_clauseSempred(Elseif_clauseContext *_localctx, size_t predicateIndex);
  bool func_ident_listSempred(Func_ident_listContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

