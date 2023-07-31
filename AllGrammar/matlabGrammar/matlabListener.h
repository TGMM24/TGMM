
// Generated from matlab.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "matlabParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by matlabParser.
 */
class  matlabListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile_(matlabParser::File_Context *ctx) = 0;
  virtual void exitFile_(matlabParser::File_Context *ctx) = 0;

  virtual void enterPrimary_expression(matlabParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(matlabParser::Primary_expressionContext *ctx) = 0;

  virtual void enterPostfix_expression(matlabParser::Postfix_expressionContext *ctx) = 0;
  virtual void exitPostfix_expression(matlabParser::Postfix_expressionContext *ctx) = 0;

  virtual void enterIndex_expression(matlabParser::Index_expressionContext *ctx) = 0;
  virtual void exitIndex_expression(matlabParser::Index_expressionContext *ctx) = 0;

  virtual void enterIndex_expression_list(matlabParser::Index_expression_listContext *ctx) = 0;
  virtual void exitIndex_expression_list(matlabParser::Index_expression_listContext *ctx) = 0;

  virtual void enterArray_expression(matlabParser::Array_expressionContext *ctx) = 0;
  virtual void exitArray_expression(matlabParser::Array_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(matlabParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(matlabParser::Unary_expressionContext *ctx) = 0;

  virtual void enterUnary_operator(matlabParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(matlabParser::Unary_operatorContext *ctx) = 0;

  virtual void enterMultiplicative_expression(matlabParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(matlabParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(matlabParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(matlabParser::Additive_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(matlabParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(matlabParser::Relational_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(matlabParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(matlabParser::Equality_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(matlabParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(matlabParser::And_expressionContext *ctx) = 0;

  virtual void enterOr_expression(matlabParser::Or_expressionContext *ctx) = 0;
  virtual void exitOr_expression(matlabParser::Or_expressionContext *ctx) = 0;

  virtual void enterExpression(matlabParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(matlabParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment_expression(matlabParser::Assignment_expressionContext *ctx) = 0;
  virtual void exitAssignment_expression(matlabParser::Assignment_expressionContext *ctx) = 0;

  virtual void enterEostmt(matlabParser::EostmtContext *ctx) = 0;
  virtual void exitEostmt(matlabParser::EostmtContext *ctx) = 0;

  virtual void enterStatement(matlabParser::StatementContext *ctx) = 0;
  virtual void exitStatement(matlabParser::StatementContext *ctx) = 0;

  virtual void enterStatement_list(matlabParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(matlabParser::Statement_listContext *ctx) = 0;

  virtual void enterIdentifier_list(matlabParser::Identifier_listContext *ctx) = 0;
  virtual void exitIdentifier_list(matlabParser::Identifier_listContext *ctx) = 0;

  virtual void enterGlobal_statement(matlabParser::Global_statementContext *ctx) = 0;
  virtual void exitGlobal_statement(matlabParser::Global_statementContext *ctx) = 0;

  virtual void enterClear_statement(matlabParser::Clear_statementContext *ctx) = 0;
  virtual void exitClear_statement(matlabParser::Clear_statementContext *ctx) = 0;

  virtual void enterExpression_statement(matlabParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(matlabParser::Expression_statementContext *ctx) = 0;

  virtual void enterAssignment_statement(matlabParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(matlabParser::Assignment_statementContext *ctx) = 0;

  virtual void enterArray_element(matlabParser::Array_elementContext *ctx) = 0;
  virtual void exitArray_element(matlabParser::Array_elementContext *ctx) = 0;

  virtual void enterArray_list(matlabParser::Array_listContext *ctx) = 0;
  virtual void exitArray_list(matlabParser::Array_listContext *ctx) = 0;

  virtual void enterSelection_statement(matlabParser::Selection_statementContext *ctx) = 0;
  virtual void exitSelection_statement(matlabParser::Selection_statementContext *ctx) = 0;

  virtual void enterElseif_clause(matlabParser::Elseif_clauseContext *ctx) = 0;
  virtual void exitElseif_clause(matlabParser::Elseif_clauseContext *ctx) = 0;

  virtual void enterIteration_statement(matlabParser::Iteration_statementContext *ctx) = 0;
  virtual void exitIteration_statement(matlabParser::Iteration_statementContext *ctx) = 0;

  virtual void enterJump_statement(matlabParser::Jump_statementContext *ctx) = 0;
  virtual void exitJump_statement(matlabParser::Jump_statementContext *ctx) = 0;

  virtual void enterTranslation_unit(matlabParser::Translation_unitContext *ctx) = 0;
  virtual void exitTranslation_unit(matlabParser::Translation_unitContext *ctx) = 0;

  virtual void enterFunc_ident_list(matlabParser::Func_ident_listContext *ctx) = 0;
  virtual void exitFunc_ident_list(matlabParser::Func_ident_listContext *ctx) = 0;

  virtual void enterFunc_return_list(matlabParser::Func_return_listContext *ctx) = 0;
  virtual void exitFunc_return_list(matlabParser::Func_return_listContext *ctx) = 0;

  virtual void enterFunction_declare_lhs(matlabParser::Function_declare_lhsContext *ctx) = 0;
  virtual void exitFunction_declare_lhs(matlabParser::Function_declare_lhsContext *ctx) = 0;

  virtual void enterFunction_declare(matlabParser::Function_declareContext *ctx) = 0;
  virtual void exitFunction_declare(matlabParser::Function_declareContext *ctx) = 0;


};

