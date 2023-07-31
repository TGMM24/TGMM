
// Generated from Corundum.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CorundumListener.h"


/**
 * This class provides an empty implementation of CorundumListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CorundumBaseListener : public CorundumListener {
public:

  virtual void enterProg(CorundumParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(CorundumParser::ProgContext * /*ctx*/) override { }

  virtual void enterExpression_list(CorundumParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(CorundumParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterExpression(CorundumParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CorundumParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterGlobal_get(CorundumParser::Global_getContext * /*ctx*/) override { }
  virtual void exitGlobal_get(CorundumParser::Global_getContext * /*ctx*/) override { }

  virtual void enterGlobal_set(CorundumParser::Global_setContext * /*ctx*/) override { }
  virtual void exitGlobal_set(CorundumParser::Global_setContext * /*ctx*/) override { }

  virtual void enterGlobal_result(CorundumParser::Global_resultContext * /*ctx*/) override { }
  virtual void exitGlobal_result(CorundumParser::Global_resultContext * /*ctx*/) override { }

  virtual void enterFunction_inline_call(CorundumParser::Function_inline_callContext * /*ctx*/) override { }
  virtual void exitFunction_inline_call(CorundumParser::Function_inline_callContext * /*ctx*/) override { }

  virtual void enterRequire_block(CorundumParser::Require_blockContext * /*ctx*/) override { }
  virtual void exitRequire_block(CorundumParser::Require_blockContext * /*ctx*/) override { }

  virtual void enterPir_inline(CorundumParser::Pir_inlineContext * /*ctx*/) override { }
  virtual void exitPir_inline(CorundumParser::Pir_inlineContext * /*ctx*/) override { }

  virtual void enterPir_expression_list(CorundumParser::Pir_expression_listContext * /*ctx*/) override { }
  virtual void exitPir_expression_list(CorundumParser::Pir_expression_listContext * /*ctx*/) override { }

  virtual void enterFunction_definition(CorundumParser::Function_definitionContext * /*ctx*/) override { }
  virtual void exitFunction_definition(CorundumParser::Function_definitionContext * /*ctx*/) override { }

  virtual void enterFunction_definition_body(CorundumParser::Function_definition_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_definition_body(CorundumParser::Function_definition_bodyContext * /*ctx*/) override { }

  virtual void enterFunction_definition_header(CorundumParser::Function_definition_headerContext * /*ctx*/) override { }
  virtual void exitFunction_definition_header(CorundumParser::Function_definition_headerContext * /*ctx*/) override { }

  virtual void enterFunction_name(CorundumParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(CorundumParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterFunction_definition_params(CorundumParser::Function_definition_paramsContext * /*ctx*/) override { }
  virtual void exitFunction_definition_params(CorundumParser::Function_definition_paramsContext * /*ctx*/) override { }

  virtual void enterFunction_definition_params_list(CorundumParser::Function_definition_params_listContext * /*ctx*/) override { }
  virtual void exitFunction_definition_params_list(CorundumParser::Function_definition_params_listContext * /*ctx*/) override { }

  virtual void enterFunction_definition_param_id(CorundumParser::Function_definition_param_idContext * /*ctx*/) override { }
  virtual void exitFunction_definition_param_id(CorundumParser::Function_definition_param_idContext * /*ctx*/) override { }

  virtual void enterReturn_statement(CorundumParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(CorundumParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterFunction_call(CorundumParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(CorundumParser::Function_callContext * /*ctx*/) override { }

  virtual void enterFunction_call_param_list(CorundumParser::Function_call_param_listContext * /*ctx*/) override { }
  virtual void exitFunction_call_param_list(CorundumParser::Function_call_param_listContext * /*ctx*/) override { }

  virtual void enterFunction_call_params(CorundumParser::Function_call_paramsContext * /*ctx*/) override { }
  virtual void exitFunction_call_params(CorundumParser::Function_call_paramsContext * /*ctx*/) override { }

  virtual void enterFunction_param(CorundumParser::Function_paramContext * /*ctx*/) override { }
  virtual void exitFunction_param(CorundumParser::Function_paramContext * /*ctx*/) override { }

  virtual void enterFunction_unnamed_param(CorundumParser::Function_unnamed_paramContext * /*ctx*/) override { }
  virtual void exitFunction_unnamed_param(CorundumParser::Function_unnamed_paramContext * /*ctx*/) override { }

  virtual void enterFunction_named_param(CorundumParser::Function_named_paramContext * /*ctx*/) override { }
  virtual void exitFunction_named_param(CorundumParser::Function_named_paramContext * /*ctx*/) override { }

  virtual void enterFunction_call_assignment(CorundumParser::Function_call_assignmentContext * /*ctx*/) override { }
  virtual void exitFunction_call_assignment(CorundumParser::Function_call_assignmentContext * /*ctx*/) override { }

  virtual void enterAll_result(CorundumParser::All_resultContext * /*ctx*/) override { }
  virtual void exitAll_result(CorundumParser::All_resultContext * /*ctx*/) override { }

  virtual void enterElsif_statement(CorundumParser::Elsif_statementContext * /*ctx*/) override { }
  virtual void exitElsif_statement(CorundumParser::Elsif_statementContext * /*ctx*/) override { }

  virtual void enterIf_elsif_statement(CorundumParser::If_elsif_statementContext * /*ctx*/) override { }
  virtual void exitIf_elsif_statement(CorundumParser::If_elsif_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(CorundumParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(CorundumParser::If_statementContext * /*ctx*/) override { }

  virtual void enterUnless_statement(CorundumParser::Unless_statementContext * /*ctx*/) override { }
  virtual void exitUnless_statement(CorundumParser::Unless_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(CorundumParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(CorundumParser::While_statementContext * /*ctx*/) override { }

  virtual void enterFor_statement(CorundumParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(CorundumParser::For_statementContext * /*ctx*/) override { }

  virtual void enterInit_expression(CorundumParser::Init_expressionContext * /*ctx*/) override { }
  virtual void exitInit_expression(CorundumParser::Init_expressionContext * /*ctx*/) override { }

  virtual void enterAll_assignment(CorundumParser::All_assignmentContext * /*ctx*/) override { }
  virtual void exitAll_assignment(CorundumParser::All_assignmentContext * /*ctx*/) override { }

  virtual void enterFor_init_list(CorundumParser::For_init_listContext * /*ctx*/) override { }
  virtual void exitFor_init_list(CorundumParser::For_init_listContext * /*ctx*/) override { }

  virtual void enterCond_expression(CorundumParser::Cond_expressionContext * /*ctx*/) override { }
  virtual void exitCond_expression(CorundumParser::Cond_expressionContext * /*ctx*/) override { }

  virtual void enterLoop_expression(CorundumParser::Loop_expressionContext * /*ctx*/) override { }
  virtual void exitLoop_expression(CorundumParser::Loop_expressionContext * /*ctx*/) override { }

  virtual void enterFor_loop_list(CorundumParser::For_loop_listContext * /*ctx*/) override { }
  virtual void exitFor_loop_list(CorundumParser::For_loop_listContext * /*ctx*/) override { }

  virtual void enterStatement_body(CorundumParser::Statement_bodyContext * /*ctx*/) override { }
  virtual void exitStatement_body(CorundumParser::Statement_bodyContext * /*ctx*/) override { }

  virtual void enterStatement_expression_list(CorundumParser::Statement_expression_listContext * /*ctx*/) override { }
  virtual void exitStatement_expression_list(CorundumParser::Statement_expression_listContext * /*ctx*/) override { }

  virtual void enterAssignment(CorundumParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CorundumParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterDynamic_assignment(CorundumParser::Dynamic_assignmentContext * /*ctx*/) override { }
  virtual void exitDynamic_assignment(CorundumParser::Dynamic_assignmentContext * /*ctx*/) override { }

  virtual void enterInt_assignment(CorundumParser::Int_assignmentContext * /*ctx*/) override { }
  virtual void exitInt_assignment(CorundumParser::Int_assignmentContext * /*ctx*/) override { }

  virtual void enterFloat_assignment(CorundumParser::Float_assignmentContext * /*ctx*/) override { }
  virtual void exitFloat_assignment(CorundumParser::Float_assignmentContext * /*ctx*/) override { }

  virtual void enterString_assignment(CorundumParser::String_assignmentContext * /*ctx*/) override { }
  virtual void exitString_assignment(CorundumParser::String_assignmentContext * /*ctx*/) override { }

  virtual void enterInitial_array_assignment(CorundumParser::Initial_array_assignmentContext * /*ctx*/) override { }
  virtual void exitInitial_array_assignment(CorundumParser::Initial_array_assignmentContext * /*ctx*/) override { }

  virtual void enterArray_assignment(CorundumParser::Array_assignmentContext * /*ctx*/) override { }
  virtual void exitArray_assignment(CorundumParser::Array_assignmentContext * /*ctx*/) override { }

  virtual void enterArray_definition(CorundumParser::Array_definitionContext * /*ctx*/) override { }
  virtual void exitArray_definition(CorundumParser::Array_definitionContext * /*ctx*/) override { }

  virtual void enterArray_definition_elements(CorundumParser::Array_definition_elementsContext * /*ctx*/) override { }
  virtual void exitArray_definition_elements(CorundumParser::Array_definition_elementsContext * /*ctx*/) override { }

  virtual void enterArray_selector(CorundumParser::Array_selectorContext * /*ctx*/) override { }
  virtual void exitArray_selector(CorundumParser::Array_selectorContext * /*ctx*/) override { }

  virtual void enterDynamic_result(CorundumParser::Dynamic_resultContext * /*ctx*/) override { }
  virtual void exitDynamic_result(CorundumParser::Dynamic_resultContext * /*ctx*/) override { }

  virtual void enterDynamic_(CorundumParser::Dynamic_Context * /*ctx*/) override { }
  virtual void exitDynamic_(CorundumParser::Dynamic_Context * /*ctx*/) override { }

  virtual void enterInt_result(CorundumParser::Int_resultContext * /*ctx*/) override { }
  virtual void exitInt_result(CorundumParser::Int_resultContext * /*ctx*/) override { }

  virtual void enterFloat_result(CorundumParser::Float_resultContext * /*ctx*/) override { }
  virtual void exitFloat_result(CorundumParser::Float_resultContext * /*ctx*/) override { }

  virtual void enterString_result(CorundumParser::String_resultContext * /*ctx*/) override { }
  virtual void exitString_result(CorundumParser::String_resultContext * /*ctx*/) override { }

  virtual void enterComparison_list(CorundumParser::Comparison_listContext * /*ctx*/) override { }
  virtual void exitComparison_list(CorundumParser::Comparison_listContext * /*ctx*/) override { }

  virtual void enterComparison(CorundumParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(CorundumParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterComp_var(CorundumParser::Comp_varContext * /*ctx*/) override { }
  virtual void exitComp_var(CorundumParser::Comp_varContext * /*ctx*/) override { }

  virtual void enterLvalue(CorundumParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(CorundumParser::LvalueContext * /*ctx*/) override { }

  virtual void enterRvalue(CorundumParser::RvalueContext * /*ctx*/) override { }
  virtual void exitRvalue(CorundumParser::RvalueContext * /*ctx*/) override { }

  virtual void enterBreak_expression(CorundumParser::Break_expressionContext * /*ctx*/) override { }
  virtual void exitBreak_expression(CorundumParser::Break_expressionContext * /*ctx*/) override { }

  virtual void enterLiteral_t(CorundumParser::Literal_tContext * /*ctx*/) override { }
  virtual void exitLiteral_t(CorundumParser::Literal_tContext * /*ctx*/) override { }

  virtual void enterFloat_t(CorundumParser::Float_tContext * /*ctx*/) override { }
  virtual void exitFloat_t(CorundumParser::Float_tContext * /*ctx*/) override { }

  virtual void enterInt_t(CorundumParser::Int_tContext * /*ctx*/) override { }
  virtual void exitInt_t(CorundumParser::Int_tContext * /*ctx*/) override { }

  virtual void enterBool_t(CorundumParser::Bool_tContext * /*ctx*/) override { }
  virtual void exitBool_t(CorundumParser::Bool_tContext * /*ctx*/) override { }

  virtual void enterNil_t(CorundumParser::Nil_tContext * /*ctx*/) override { }
  virtual void exitNil_t(CorundumParser::Nil_tContext * /*ctx*/) override { }

  virtual void enterId_(CorundumParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(CorundumParser::Id_Context * /*ctx*/) override { }

  virtual void enterId_global(CorundumParser::Id_globalContext * /*ctx*/) override { }
  virtual void exitId_global(CorundumParser::Id_globalContext * /*ctx*/) override { }

  virtual void enterId_function(CorundumParser::Id_functionContext * /*ctx*/) override { }
  virtual void exitId_function(CorundumParser::Id_functionContext * /*ctx*/) override { }

  virtual void enterTerminator(CorundumParser::TerminatorContext * /*ctx*/) override { }
  virtual void exitTerminator(CorundumParser::TerminatorContext * /*ctx*/) override { }

  virtual void enterElse_token(CorundumParser::Else_tokenContext * /*ctx*/) override { }
  virtual void exitElse_token(CorundumParser::Else_tokenContext * /*ctx*/) override { }

  virtual void enterCrlf(CorundumParser::CrlfContext * /*ctx*/) override { }
  virtual void exitCrlf(CorundumParser::CrlfContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

