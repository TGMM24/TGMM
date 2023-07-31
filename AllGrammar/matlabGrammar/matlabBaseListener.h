
// Generated from matlab.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "matlabListener.h"


/**
 * This class provides an empty implementation of matlabListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  matlabBaseListener : public matlabListener {
public:

  virtual void enterFile_(matlabParser::File_Context * /*ctx*/) override { }
  virtual void exitFile_(matlabParser::File_Context * /*ctx*/) override { }

  virtual void enterPrimary_expression(matlabParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(matlabParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterPostfix_expression(matlabParser::Postfix_expressionContext * /*ctx*/) override { }
  virtual void exitPostfix_expression(matlabParser::Postfix_expressionContext * /*ctx*/) override { }

  virtual void enterIndex_expression(matlabParser::Index_expressionContext * /*ctx*/) override { }
  virtual void exitIndex_expression(matlabParser::Index_expressionContext * /*ctx*/) override { }

  virtual void enterIndex_expression_list(matlabParser::Index_expression_listContext * /*ctx*/) override { }
  virtual void exitIndex_expression_list(matlabParser::Index_expression_listContext * /*ctx*/) override { }

  virtual void enterArray_expression(matlabParser::Array_expressionContext * /*ctx*/) override { }
  virtual void exitArray_expression(matlabParser::Array_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(matlabParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(matlabParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_operator(matlabParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(matlabParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(matlabParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(matlabParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(matlabParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(matlabParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(matlabParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(matlabParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(matlabParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(matlabParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(matlabParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(matlabParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterOr_expression(matlabParser::Or_expressionContext * /*ctx*/) override { }
  virtual void exitOr_expression(matlabParser::Or_expressionContext * /*ctx*/) override { }

  virtual void enterExpression(matlabParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(matlabParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment_expression(matlabParser::Assignment_expressionContext * /*ctx*/) override { }
  virtual void exitAssignment_expression(matlabParser::Assignment_expressionContext * /*ctx*/) override { }

  virtual void enterEostmt(matlabParser::EostmtContext * /*ctx*/) override { }
  virtual void exitEostmt(matlabParser::EostmtContext * /*ctx*/) override { }

  virtual void enterStatement(matlabParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(matlabParser::StatementContext * /*ctx*/) override { }

  virtual void enterStatement_list(matlabParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(matlabParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterIdentifier_list(matlabParser::Identifier_listContext * /*ctx*/) override { }
  virtual void exitIdentifier_list(matlabParser::Identifier_listContext * /*ctx*/) override { }

  virtual void enterGlobal_statement(matlabParser::Global_statementContext * /*ctx*/) override { }
  virtual void exitGlobal_statement(matlabParser::Global_statementContext * /*ctx*/) override { }

  virtual void enterClear_statement(matlabParser::Clear_statementContext * /*ctx*/) override { }
  virtual void exitClear_statement(matlabParser::Clear_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(matlabParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(matlabParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(matlabParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(matlabParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterArray_element(matlabParser::Array_elementContext * /*ctx*/) override { }
  virtual void exitArray_element(matlabParser::Array_elementContext * /*ctx*/) override { }

  virtual void enterArray_list(matlabParser::Array_listContext * /*ctx*/) override { }
  virtual void exitArray_list(matlabParser::Array_listContext * /*ctx*/) override { }

  virtual void enterSelection_statement(matlabParser::Selection_statementContext * /*ctx*/) override { }
  virtual void exitSelection_statement(matlabParser::Selection_statementContext * /*ctx*/) override { }

  virtual void enterElseif_clause(matlabParser::Elseif_clauseContext * /*ctx*/) override { }
  virtual void exitElseif_clause(matlabParser::Elseif_clauseContext * /*ctx*/) override { }

  virtual void enterIteration_statement(matlabParser::Iteration_statementContext * /*ctx*/) override { }
  virtual void exitIteration_statement(matlabParser::Iteration_statementContext * /*ctx*/) override { }

  virtual void enterJump_statement(matlabParser::Jump_statementContext * /*ctx*/) override { }
  virtual void exitJump_statement(matlabParser::Jump_statementContext * /*ctx*/) override { }

  virtual void enterTranslation_unit(matlabParser::Translation_unitContext * /*ctx*/) override { }
  virtual void exitTranslation_unit(matlabParser::Translation_unitContext * /*ctx*/) override { }

  virtual void enterFunc_ident_list(matlabParser::Func_ident_listContext * /*ctx*/) override { }
  virtual void exitFunc_ident_list(matlabParser::Func_ident_listContext * /*ctx*/) override { }

  virtual void enterFunc_return_list(matlabParser::Func_return_listContext * /*ctx*/) override { }
  virtual void exitFunc_return_list(matlabParser::Func_return_listContext * /*ctx*/) override { }

  virtual void enterFunction_declare_lhs(matlabParser::Function_declare_lhsContext * /*ctx*/) override { }
  virtual void exitFunction_declare_lhs(matlabParser::Function_declare_lhsContext * /*ctx*/) override { }

  virtual void enterFunction_declare(matlabParser::Function_declareContext * /*ctx*/) override { }
  virtual void exitFunction_declare(matlabParser::Function_declareContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

