
// Generated from Corundum.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CorundumParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CorundumParser.
 */
class  CorundumListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(CorundumParser::ProgContext *ctx) = 0;
  virtual void exitProg(CorundumParser::ProgContext *ctx) = 0;

  virtual void enterExpression_list(CorundumParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(CorundumParser::Expression_listContext *ctx) = 0;

  virtual void enterExpression(CorundumParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CorundumParser::ExpressionContext *ctx) = 0;

  virtual void enterGlobal_get(CorundumParser::Global_getContext *ctx) = 0;
  virtual void exitGlobal_get(CorundumParser::Global_getContext *ctx) = 0;

  virtual void enterGlobal_set(CorundumParser::Global_setContext *ctx) = 0;
  virtual void exitGlobal_set(CorundumParser::Global_setContext *ctx) = 0;

  virtual void enterGlobal_result(CorundumParser::Global_resultContext *ctx) = 0;
  virtual void exitGlobal_result(CorundumParser::Global_resultContext *ctx) = 0;

  virtual void enterFunction_inline_call(CorundumParser::Function_inline_callContext *ctx) = 0;
  virtual void exitFunction_inline_call(CorundumParser::Function_inline_callContext *ctx) = 0;

  virtual void enterRequire_block(CorundumParser::Require_blockContext *ctx) = 0;
  virtual void exitRequire_block(CorundumParser::Require_blockContext *ctx) = 0;

  virtual void enterPir_inline(CorundumParser::Pir_inlineContext *ctx) = 0;
  virtual void exitPir_inline(CorundumParser::Pir_inlineContext *ctx) = 0;

  virtual void enterPir_expression_list(CorundumParser::Pir_expression_listContext *ctx) = 0;
  virtual void exitPir_expression_list(CorundumParser::Pir_expression_listContext *ctx) = 0;

  virtual void enterFunction_definition(CorundumParser::Function_definitionContext *ctx) = 0;
  virtual void exitFunction_definition(CorundumParser::Function_definitionContext *ctx) = 0;

  virtual void enterFunction_definition_body(CorundumParser::Function_definition_bodyContext *ctx) = 0;
  virtual void exitFunction_definition_body(CorundumParser::Function_definition_bodyContext *ctx) = 0;

  virtual void enterFunction_definition_header(CorundumParser::Function_definition_headerContext *ctx) = 0;
  virtual void exitFunction_definition_header(CorundumParser::Function_definition_headerContext *ctx) = 0;

  virtual void enterFunction_name(CorundumParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(CorundumParser::Function_nameContext *ctx) = 0;

  virtual void enterFunction_definition_params(CorundumParser::Function_definition_paramsContext *ctx) = 0;
  virtual void exitFunction_definition_params(CorundumParser::Function_definition_paramsContext *ctx) = 0;

  virtual void enterFunction_definition_params_list(CorundumParser::Function_definition_params_listContext *ctx) = 0;
  virtual void exitFunction_definition_params_list(CorundumParser::Function_definition_params_listContext *ctx) = 0;

  virtual void enterFunction_definition_param_id(CorundumParser::Function_definition_param_idContext *ctx) = 0;
  virtual void exitFunction_definition_param_id(CorundumParser::Function_definition_param_idContext *ctx) = 0;

  virtual void enterReturn_statement(CorundumParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(CorundumParser::Return_statementContext *ctx) = 0;

  virtual void enterFunction_call(CorundumParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(CorundumParser::Function_callContext *ctx) = 0;

  virtual void enterFunction_call_param_list(CorundumParser::Function_call_param_listContext *ctx) = 0;
  virtual void exitFunction_call_param_list(CorundumParser::Function_call_param_listContext *ctx) = 0;

  virtual void enterFunction_call_params(CorundumParser::Function_call_paramsContext *ctx) = 0;
  virtual void exitFunction_call_params(CorundumParser::Function_call_paramsContext *ctx) = 0;

  virtual void enterFunction_param(CorundumParser::Function_paramContext *ctx) = 0;
  virtual void exitFunction_param(CorundumParser::Function_paramContext *ctx) = 0;

  virtual void enterFunction_unnamed_param(CorundumParser::Function_unnamed_paramContext *ctx) = 0;
  virtual void exitFunction_unnamed_param(CorundumParser::Function_unnamed_paramContext *ctx) = 0;

  virtual void enterFunction_named_param(CorundumParser::Function_named_paramContext *ctx) = 0;
  virtual void exitFunction_named_param(CorundumParser::Function_named_paramContext *ctx) = 0;

  virtual void enterFunction_call_assignment(CorundumParser::Function_call_assignmentContext *ctx) = 0;
  virtual void exitFunction_call_assignment(CorundumParser::Function_call_assignmentContext *ctx) = 0;

  virtual void enterAll_result(CorundumParser::All_resultContext *ctx) = 0;
  virtual void exitAll_result(CorundumParser::All_resultContext *ctx) = 0;

  virtual void enterElsif_statement(CorundumParser::Elsif_statementContext *ctx) = 0;
  virtual void exitElsif_statement(CorundumParser::Elsif_statementContext *ctx) = 0;

  virtual void enterIf_elsif_statement(CorundumParser::If_elsif_statementContext *ctx) = 0;
  virtual void exitIf_elsif_statement(CorundumParser::If_elsif_statementContext *ctx) = 0;

  virtual void enterIf_statement(CorundumParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(CorundumParser::If_statementContext *ctx) = 0;

  virtual void enterUnless_statement(CorundumParser::Unless_statementContext *ctx) = 0;
  virtual void exitUnless_statement(CorundumParser::Unless_statementContext *ctx) = 0;

  virtual void enterWhile_statement(CorundumParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(CorundumParser::While_statementContext *ctx) = 0;

  virtual void enterFor_statement(CorundumParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(CorundumParser::For_statementContext *ctx) = 0;

  virtual void enterInit_expression(CorundumParser::Init_expressionContext *ctx) = 0;
  virtual void exitInit_expression(CorundumParser::Init_expressionContext *ctx) = 0;

  virtual void enterAll_assignment(CorundumParser::All_assignmentContext *ctx) = 0;
  virtual void exitAll_assignment(CorundumParser::All_assignmentContext *ctx) = 0;

  virtual void enterFor_init_list(CorundumParser::For_init_listContext *ctx) = 0;
  virtual void exitFor_init_list(CorundumParser::For_init_listContext *ctx) = 0;

  virtual void enterCond_expression(CorundumParser::Cond_expressionContext *ctx) = 0;
  virtual void exitCond_expression(CorundumParser::Cond_expressionContext *ctx) = 0;

  virtual void enterLoop_expression(CorundumParser::Loop_expressionContext *ctx) = 0;
  virtual void exitLoop_expression(CorundumParser::Loop_expressionContext *ctx) = 0;

  virtual void enterFor_loop_list(CorundumParser::For_loop_listContext *ctx) = 0;
  virtual void exitFor_loop_list(CorundumParser::For_loop_listContext *ctx) = 0;

  virtual void enterStatement_body(CorundumParser::Statement_bodyContext *ctx) = 0;
  virtual void exitStatement_body(CorundumParser::Statement_bodyContext *ctx) = 0;

  virtual void enterStatement_expression_list(CorundumParser::Statement_expression_listContext *ctx) = 0;
  virtual void exitStatement_expression_list(CorundumParser::Statement_expression_listContext *ctx) = 0;

  virtual void enterAssignment(CorundumParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CorundumParser::AssignmentContext *ctx) = 0;

  virtual void enterDynamic_assignment(CorundumParser::Dynamic_assignmentContext *ctx) = 0;
  virtual void exitDynamic_assignment(CorundumParser::Dynamic_assignmentContext *ctx) = 0;

  virtual void enterInt_assignment(CorundumParser::Int_assignmentContext *ctx) = 0;
  virtual void exitInt_assignment(CorundumParser::Int_assignmentContext *ctx) = 0;

  virtual void enterFloat_assignment(CorundumParser::Float_assignmentContext *ctx) = 0;
  virtual void exitFloat_assignment(CorundumParser::Float_assignmentContext *ctx) = 0;

  virtual void enterString_assignment(CorundumParser::String_assignmentContext *ctx) = 0;
  virtual void exitString_assignment(CorundumParser::String_assignmentContext *ctx) = 0;

  virtual void enterInitial_array_assignment(CorundumParser::Initial_array_assignmentContext *ctx) = 0;
  virtual void exitInitial_array_assignment(CorundumParser::Initial_array_assignmentContext *ctx) = 0;

  virtual void enterArray_assignment(CorundumParser::Array_assignmentContext *ctx) = 0;
  virtual void exitArray_assignment(CorundumParser::Array_assignmentContext *ctx) = 0;

  virtual void enterArray_definition(CorundumParser::Array_definitionContext *ctx) = 0;
  virtual void exitArray_definition(CorundumParser::Array_definitionContext *ctx) = 0;

  virtual void enterArray_definition_elements(CorundumParser::Array_definition_elementsContext *ctx) = 0;
  virtual void exitArray_definition_elements(CorundumParser::Array_definition_elementsContext *ctx) = 0;

  virtual void enterArray_selector(CorundumParser::Array_selectorContext *ctx) = 0;
  virtual void exitArray_selector(CorundumParser::Array_selectorContext *ctx) = 0;

  virtual void enterDynamic_result(CorundumParser::Dynamic_resultContext *ctx) = 0;
  virtual void exitDynamic_result(CorundumParser::Dynamic_resultContext *ctx) = 0;

  virtual void enterDynamic_(CorundumParser::Dynamic_Context *ctx) = 0;
  virtual void exitDynamic_(CorundumParser::Dynamic_Context *ctx) = 0;

  virtual void enterInt_result(CorundumParser::Int_resultContext *ctx) = 0;
  virtual void exitInt_result(CorundumParser::Int_resultContext *ctx) = 0;

  virtual void enterFloat_result(CorundumParser::Float_resultContext *ctx) = 0;
  virtual void exitFloat_result(CorundumParser::Float_resultContext *ctx) = 0;

  virtual void enterString_result(CorundumParser::String_resultContext *ctx) = 0;
  virtual void exitString_result(CorundumParser::String_resultContext *ctx) = 0;

  virtual void enterComparison_list(CorundumParser::Comparison_listContext *ctx) = 0;
  virtual void exitComparison_list(CorundumParser::Comparison_listContext *ctx) = 0;

  virtual void enterComparison(CorundumParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(CorundumParser::ComparisonContext *ctx) = 0;

  virtual void enterComp_var(CorundumParser::Comp_varContext *ctx) = 0;
  virtual void exitComp_var(CorundumParser::Comp_varContext *ctx) = 0;

  virtual void enterLvalue(CorundumParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(CorundumParser::LvalueContext *ctx) = 0;

  virtual void enterRvalue(CorundumParser::RvalueContext *ctx) = 0;
  virtual void exitRvalue(CorundumParser::RvalueContext *ctx) = 0;

  virtual void enterBreak_expression(CorundumParser::Break_expressionContext *ctx) = 0;
  virtual void exitBreak_expression(CorundumParser::Break_expressionContext *ctx) = 0;

  virtual void enterLiteral_t(CorundumParser::Literal_tContext *ctx) = 0;
  virtual void exitLiteral_t(CorundumParser::Literal_tContext *ctx) = 0;

  virtual void enterFloat_t(CorundumParser::Float_tContext *ctx) = 0;
  virtual void exitFloat_t(CorundumParser::Float_tContext *ctx) = 0;

  virtual void enterInt_t(CorundumParser::Int_tContext *ctx) = 0;
  virtual void exitInt_t(CorundumParser::Int_tContext *ctx) = 0;

  virtual void enterBool_t(CorundumParser::Bool_tContext *ctx) = 0;
  virtual void exitBool_t(CorundumParser::Bool_tContext *ctx) = 0;

  virtual void enterNil_t(CorundumParser::Nil_tContext *ctx) = 0;
  virtual void exitNil_t(CorundumParser::Nil_tContext *ctx) = 0;

  virtual void enterId_(CorundumParser::Id_Context *ctx) = 0;
  virtual void exitId_(CorundumParser::Id_Context *ctx) = 0;

  virtual void enterId_global(CorundumParser::Id_globalContext *ctx) = 0;
  virtual void exitId_global(CorundumParser::Id_globalContext *ctx) = 0;

  virtual void enterId_function(CorundumParser::Id_functionContext *ctx) = 0;
  virtual void exitId_function(CorundumParser::Id_functionContext *ctx) = 0;

  virtual void enterTerminator(CorundumParser::TerminatorContext *ctx) = 0;
  virtual void exitTerminator(CorundumParser::TerminatorContext *ctx) = 0;

  virtual void enterElse_token(CorundumParser::Else_tokenContext *ctx) = 0;
  virtual void exitElse_token(CorundumParser::Else_tokenContext *ctx) = 0;

  virtual void enterCrlf(CorundumParser::CrlfContext *ctx) = 0;
  virtual void exitCrlf(CorundumParser::CrlfContext *ctx) = 0;


};

