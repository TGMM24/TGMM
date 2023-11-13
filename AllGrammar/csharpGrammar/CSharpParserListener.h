
// Generated from CSharpParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CSharpParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CSharpParser.
 */
class  CSharpParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilation_unit(CSharpParser::Compilation_unitContext *ctx) = 0;
  virtual void exitCompilation_unit(CSharpParser::Compilation_unitContext *ctx) = 0;

  virtual void enterNamespace_or_type_name(CSharpParser::Namespace_or_type_nameContext *ctx) = 0;
  virtual void exitNamespace_or_type_name(CSharpParser::Namespace_or_type_nameContext *ctx) = 0;

  virtual void enterType_(CSharpParser::Type_Context *ctx) = 0;
  virtual void exitType_(CSharpParser::Type_Context *ctx) = 0;

  virtual void enterBase_type(CSharpParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(CSharpParser::Base_typeContext *ctx) = 0;

  virtual void enterTuple_type(CSharpParser::Tuple_typeContext *ctx) = 0;
  virtual void exitTuple_type(CSharpParser::Tuple_typeContext *ctx) = 0;

  virtual void enterTuple_element(CSharpParser::Tuple_elementContext *ctx) = 0;
  virtual void exitTuple_element(CSharpParser::Tuple_elementContext *ctx) = 0;

  virtual void enterSimple_type(CSharpParser::Simple_typeContext *ctx) = 0;
  virtual void exitSimple_type(CSharpParser::Simple_typeContext *ctx) = 0;

  virtual void enterNumeric_type(CSharpParser::Numeric_typeContext *ctx) = 0;
  virtual void exitNumeric_type(CSharpParser::Numeric_typeContext *ctx) = 0;

  virtual void enterIntegral_type(CSharpParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(CSharpParser::Integral_typeContext *ctx) = 0;

  virtual void enterFloating_point_type(CSharpParser::Floating_point_typeContext *ctx) = 0;
  virtual void exitFloating_point_type(CSharpParser::Floating_point_typeContext *ctx) = 0;

  virtual void enterClass_type(CSharpParser::Class_typeContext *ctx) = 0;
  virtual void exitClass_type(CSharpParser::Class_typeContext *ctx) = 0;

  virtual void enterType_argument_list(CSharpParser::Type_argument_listContext *ctx) = 0;
  virtual void exitType_argument_list(CSharpParser::Type_argument_listContext *ctx) = 0;

  virtual void enterArgument_list(CSharpParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(CSharpParser::Argument_listContext *ctx) = 0;

  virtual void enterArgument(CSharpParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(CSharpParser::ArgumentContext *ctx) = 0;

  virtual void enterExpression(CSharpParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CSharpParser::ExpressionContext *ctx) = 0;

  virtual void enterNon_assignment_expression(CSharpParser::Non_assignment_expressionContext *ctx) = 0;
  virtual void exitNon_assignment_expression(CSharpParser::Non_assignment_expressionContext *ctx) = 0;

  virtual void enterAssignment(CSharpParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CSharpParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignment_operator(CSharpParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(CSharpParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(CSharpParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(CSharpParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterNull_coalescing_expression(CSharpParser::Null_coalescing_expressionContext *ctx) = 0;
  virtual void exitNull_coalescing_expression(CSharpParser::Null_coalescing_expressionContext *ctx) = 0;

  virtual void enterConditional_or_expression(CSharpParser::Conditional_or_expressionContext *ctx) = 0;
  virtual void exitConditional_or_expression(CSharpParser::Conditional_or_expressionContext *ctx) = 0;

  virtual void enterConditional_and_expression(CSharpParser::Conditional_and_expressionContext *ctx) = 0;
  virtual void exitConditional_and_expression(CSharpParser::Conditional_and_expressionContext *ctx) = 0;

  virtual void enterInclusive_or_expression(CSharpParser::Inclusive_or_expressionContext *ctx) = 0;
  virtual void exitInclusive_or_expression(CSharpParser::Inclusive_or_expressionContext *ctx) = 0;

  virtual void enterExclusive_or_expression(CSharpParser::Exclusive_or_expressionContext *ctx) = 0;
  virtual void exitExclusive_or_expression(CSharpParser::Exclusive_or_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(CSharpParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(CSharpParser::And_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(CSharpParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(CSharpParser::Equality_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(CSharpParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(CSharpParser::Relational_expressionContext *ctx) = 0;

  virtual void enterShift_expression(CSharpParser::Shift_expressionContext *ctx) = 0;
  virtual void exitShift_expression(CSharpParser::Shift_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(CSharpParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(CSharpParser::Additive_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_expression(CSharpParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(CSharpParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression(CSharpParser::Switch_expressionContext *ctx) = 0;
  virtual void exitSwitch_expression(CSharpParser::Switch_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression_arms(CSharpParser::Switch_expression_armsContext *ctx) = 0;
  virtual void exitSwitch_expression_arms(CSharpParser::Switch_expression_armsContext *ctx) = 0;

  virtual void enterSwitch_expression_arm(CSharpParser::Switch_expression_armContext *ctx) = 0;
  virtual void exitSwitch_expression_arm(CSharpParser::Switch_expression_armContext *ctx) = 0;

  virtual void enterRange_expression(CSharpParser::Range_expressionContext *ctx) = 0;
  virtual void exitRange_expression(CSharpParser::Range_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(CSharpParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(CSharpParser::Unary_expressionContext *ctx) = 0;

  virtual void enterPrimary_expression(CSharpParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(CSharpParser::Primary_expressionContext *ctx) = 0;

  virtual void enterLiteralExpression(CSharpParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(CSharpParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterSimpleNameExpression(CSharpParser::SimpleNameExpressionContext *ctx) = 0;
  virtual void exitSimpleNameExpression(CSharpParser::SimpleNameExpressionContext *ctx) = 0;

  virtual void enterParenthesisExpressions(CSharpParser::ParenthesisExpressionsContext *ctx) = 0;
  virtual void exitParenthesisExpressions(CSharpParser::ParenthesisExpressionsContext *ctx) = 0;

  virtual void enterMemberAccessExpression(CSharpParser::MemberAccessExpressionContext *ctx) = 0;
  virtual void exitMemberAccessExpression(CSharpParser::MemberAccessExpressionContext *ctx) = 0;

  virtual void enterLiteralAccessExpression(CSharpParser::LiteralAccessExpressionContext *ctx) = 0;
  virtual void exitLiteralAccessExpression(CSharpParser::LiteralAccessExpressionContext *ctx) = 0;

  virtual void enterThisReferenceExpression(CSharpParser::ThisReferenceExpressionContext *ctx) = 0;
  virtual void exitThisReferenceExpression(CSharpParser::ThisReferenceExpressionContext *ctx) = 0;

  virtual void enterBaseAccessExpression(CSharpParser::BaseAccessExpressionContext *ctx) = 0;
  virtual void exitBaseAccessExpression(CSharpParser::BaseAccessExpressionContext *ctx) = 0;

  virtual void enterObjectCreationExpression(CSharpParser::ObjectCreationExpressionContext *ctx) = 0;
  virtual void exitObjectCreationExpression(CSharpParser::ObjectCreationExpressionContext *ctx) = 0;

  virtual void enterTupleExpression(CSharpParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(CSharpParser::TupleExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(CSharpParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(CSharpParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterCheckedExpression(CSharpParser::CheckedExpressionContext *ctx) = 0;
  virtual void exitCheckedExpression(CSharpParser::CheckedExpressionContext *ctx) = 0;

  virtual void enterUncheckedExpression(CSharpParser::UncheckedExpressionContext *ctx) = 0;
  virtual void exitUncheckedExpression(CSharpParser::UncheckedExpressionContext *ctx) = 0;

  virtual void enterDefaultValueExpression(CSharpParser::DefaultValueExpressionContext *ctx) = 0;
  virtual void exitDefaultValueExpression(CSharpParser::DefaultValueExpressionContext *ctx) = 0;

  virtual void enterAnonymousMethodExpression(CSharpParser::AnonymousMethodExpressionContext *ctx) = 0;
  virtual void exitAnonymousMethodExpression(CSharpParser::AnonymousMethodExpressionContext *ctx) = 0;

  virtual void enterSizeofExpression(CSharpParser::SizeofExpressionContext *ctx) = 0;
  virtual void exitSizeofExpression(CSharpParser::SizeofExpressionContext *ctx) = 0;

  virtual void enterNameofExpression(CSharpParser::NameofExpressionContext *ctx) = 0;
  virtual void exitNameofExpression(CSharpParser::NameofExpressionContext *ctx) = 0;

  virtual void enterThrowable_expression(CSharpParser::Throwable_expressionContext *ctx) = 0;
  virtual void exitThrowable_expression(CSharpParser::Throwable_expressionContext *ctx) = 0;

  virtual void enterThrow_expression(CSharpParser::Throw_expressionContext *ctx) = 0;
  virtual void exitThrow_expression(CSharpParser::Throw_expressionContext *ctx) = 0;

  virtual void enterMember_access(CSharpParser::Member_accessContext *ctx) = 0;
  virtual void exitMember_access(CSharpParser::Member_accessContext *ctx) = 0;

  virtual void enterBracket_expression(CSharpParser::Bracket_expressionContext *ctx) = 0;
  virtual void exitBracket_expression(CSharpParser::Bracket_expressionContext *ctx) = 0;

  virtual void enterIndexer_argument(CSharpParser::Indexer_argumentContext *ctx) = 0;
  virtual void exitIndexer_argument(CSharpParser::Indexer_argumentContext *ctx) = 0;

  virtual void enterPredefined_type(CSharpParser::Predefined_typeContext *ctx) = 0;
  virtual void exitPredefined_type(CSharpParser::Predefined_typeContext *ctx) = 0;

  virtual void enterExpression_list(CSharpParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(CSharpParser::Expression_listContext *ctx) = 0;

  virtual void enterObject_or_collection_initializer(CSharpParser::Object_or_collection_initializerContext *ctx) = 0;
  virtual void exitObject_or_collection_initializer(CSharpParser::Object_or_collection_initializerContext *ctx) = 0;

  virtual void enterObject_initializer(CSharpParser::Object_initializerContext *ctx) = 0;
  virtual void exitObject_initializer(CSharpParser::Object_initializerContext *ctx) = 0;

  virtual void enterMember_initializer_list(CSharpParser::Member_initializer_listContext *ctx) = 0;
  virtual void exitMember_initializer_list(CSharpParser::Member_initializer_listContext *ctx) = 0;

  virtual void enterMember_initializer(CSharpParser::Member_initializerContext *ctx) = 0;
  virtual void exitMember_initializer(CSharpParser::Member_initializerContext *ctx) = 0;

  virtual void enterInitializer_value(CSharpParser::Initializer_valueContext *ctx) = 0;
  virtual void exitInitializer_value(CSharpParser::Initializer_valueContext *ctx) = 0;

  virtual void enterCollection_initializer(CSharpParser::Collection_initializerContext *ctx) = 0;
  virtual void exitCollection_initializer(CSharpParser::Collection_initializerContext *ctx) = 0;

  virtual void enterElement_initializer(CSharpParser::Element_initializerContext *ctx) = 0;
  virtual void exitElement_initializer(CSharpParser::Element_initializerContext *ctx) = 0;

  virtual void enterAnonymous_object_initializer(CSharpParser::Anonymous_object_initializerContext *ctx) = 0;
  virtual void exitAnonymous_object_initializer(CSharpParser::Anonymous_object_initializerContext *ctx) = 0;

  virtual void enterMember_declarator_list(CSharpParser::Member_declarator_listContext *ctx) = 0;
  virtual void exitMember_declarator_list(CSharpParser::Member_declarator_listContext *ctx) = 0;

  virtual void enterMember_declarator(CSharpParser::Member_declaratorContext *ctx) = 0;
  virtual void exitMember_declarator(CSharpParser::Member_declaratorContext *ctx) = 0;

  virtual void enterUnbound_type_name(CSharpParser::Unbound_type_nameContext *ctx) = 0;
  virtual void exitUnbound_type_name(CSharpParser::Unbound_type_nameContext *ctx) = 0;

  virtual void enterGeneric_dimension_specifier(CSharpParser::Generic_dimension_specifierContext *ctx) = 0;
  virtual void exitGeneric_dimension_specifier(CSharpParser::Generic_dimension_specifierContext *ctx) = 0;

  virtual void enterIsType(CSharpParser::IsTypeContext *ctx) = 0;
  virtual void exitIsType(CSharpParser::IsTypeContext *ctx) = 0;

  virtual void enterIsTypePatternArms(CSharpParser::IsTypePatternArmsContext *ctx) = 0;
  virtual void exitIsTypePatternArms(CSharpParser::IsTypePatternArmsContext *ctx) = 0;

  virtual void enterIsTypePatternArm(CSharpParser::IsTypePatternArmContext *ctx) = 0;
  virtual void exitIsTypePatternArm(CSharpParser::IsTypePatternArmContext *ctx) = 0;

  virtual void enterLambda_expression(CSharpParser::Lambda_expressionContext *ctx) = 0;
  virtual void exitLambda_expression(CSharpParser::Lambda_expressionContext *ctx) = 0;

  virtual void enterAnonymous_function_signature(CSharpParser::Anonymous_function_signatureContext *ctx) = 0;
  virtual void exitAnonymous_function_signature(CSharpParser::Anonymous_function_signatureContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter_list(CSharpParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter_list(CSharpParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter(CSharpParser::Explicit_anonymous_function_parameterContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter(CSharpParser::Explicit_anonymous_function_parameterContext *ctx) = 0;

  virtual void enterImplicit_anonymous_function_parameter_list(CSharpParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitImplicit_anonymous_function_parameter_list(CSharpParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterAnonymous_function_body(CSharpParser::Anonymous_function_bodyContext *ctx) = 0;
  virtual void exitAnonymous_function_body(CSharpParser::Anonymous_function_bodyContext *ctx) = 0;

  virtual void enterQuery_expression(CSharpParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(CSharpParser::Query_expressionContext *ctx) = 0;

  virtual void enterFrom_clause(CSharpParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(CSharpParser::From_clauseContext *ctx) = 0;

  virtual void enterQuery_body(CSharpParser::Query_bodyContext *ctx) = 0;
  virtual void exitQuery_body(CSharpParser::Query_bodyContext *ctx) = 0;

  virtual void enterQuery_body_clause(CSharpParser::Query_body_clauseContext *ctx) = 0;
  virtual void exitQuery_body_clause(CSharpParser::Query_body_clauseContext *ctx) = 0;

  virtual void enterLet_clause(CSharpParser::Let_clauseContext *ctx) = 0;
  virtual void exitLet_clause(CSharpParser::Let_clauseContext *ctx) = 0;

  virtual void enterWhere_clause(CSharpParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(CSharpParser::Where_clauseContext *ctx) = 0;

  virtual void enterCombined_join_clause(CSharpParser::Combined_join_clauseContext *ctx) = 0;
  virtual void exitCombined_join_clause(CSharpParser::Combined_join_clauseContext *ctx) = 0;

  virtual void enterOrderby_clause(CSharpParser::Orderby_clauseContext *ctx) = 0;
  virtual void exitOrderby_clause(CSharpParser::Orderby_clauseContext *ctx) = 0;

  virtual void enterOrdering(CSharpParser::OrderingContext *ctx) = 0;
  virtual void exitOrdering(CSharpParser::OrderingContext *ctx) = 0;

  virtual void enterSelect_or_group_clause(CSharpParser::Select_or_group_clauseContext *ctx) = 0;
  virtual void exitSelect_or_group_clause(CSharpParser::Select_or_group_clauseContext *ctx) = 0;

  virtual void enterQuery_continuation(CSharpParser::Query_continuationContext *ctx) = 0;
  virtual void exitQuery_continuation(CSharpParser::Query_continuationContext *ctx) = 0;

  virtual void enterStatement(CSharpParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CSharpParser::StatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(CSharpParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(CSharpParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterLocal_function_declaration(CSharpParser::Local_function_declarationContext *ctx) = 0;
  virtual void exitLocal_function_declaration(CSharpParser::Local_function_declarationContext *ctx) = 0;

  virtual void enterLocal_function_header(CSharpParser::Local_function_headerContext *ctx) = 0;
  virtual void exitLocal_function_header(CSharpParser::Local_function_headerContext *ctx) = 0;

  virtual void enterLocal_function_modifiers(CSharpParser::Local_function_modifiersContext *ctx) = 0;
  virtual void exitLocal_function_modifiers(CSharpParser::Local_function_modifiersContext *ctx) = 0;

  virtual void enterLocal_function_body(CSharpParser::Local_function_bodyContext *ctx) = 0;
  virtual void exitLocal_function_body(CSharpParser::Local_function_bodyContext *ctx) = 0;

  virtual void enterLabeled_Statement(CSharpParser::Labeled_StatementContext *ctx) = 0;
  virtual void exitLabeled_Statement(CSharpParser::Labeled_StatementContext *ctx) = 0;

  virtual void enterEmbedded_statement(CSharpParser::Embedded_statementContext *ctx) = 0;
  virtual void exitEmbedded_statement(CSharpParser::Embedded_statementContext *ctx) = 0;

  virtual void enterTheEmptyStatement(CSharpParser::TheEmptyStatementContext *ctx) = 0;
  virtual void exitTheEmptyStatement(CSharpParser::TheEmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(CSharpParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CSharpParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(CSharpParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(CSharpParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(CSharpParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(CSharpParser::SwitchStatementContext *ctx) = 0;

  virtual void enterWhileStatement(CSharpParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(CSharpParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoStatement(CSharpParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(CSharpParser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(CSharpParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(CSharpParser::ForStatementContext *ctx) = 0;

  virtual void enterForeachStatement(CSharpParser::ForeachStatementContext *ctx) = 0;
  virtual void exitForeachStatement(CSharpParser::ForeachStatementContext *ctx) = 0;

  virtual void enterBreakStatement(CSharpParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(CSharpParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(CSharpParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(CSharpParser::ContinueStatementContext *ctx) = 0;

  virtual void enterGotoStatement(CSharpParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(CSharpParser::GotoStatementContext *ctx) = 0;

  virtual void enterReturnStatement(CSharpParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(CSharpParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(CSharpParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(CSharpParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(CSharpParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(CSharpParser::TryStatementContext *ctx) = 0;

  virtual void enterCheckedStatement(CSharpParser::CheckedStatementContext *ctx) = 0;
  virtual void exitCheckedStatement(CSharpParser::CheckedStatementContext *ctx) = 0;

  virtual void enterUncheckedStatement(CSharpParser::UncheckedStatementContext *ctx) = 0;
  virtual void exitUncheckedStatement(CSharpParser::UncheckedStatementContext *ctx) = 0;

  virtual void enterLockStatement(CSharpParser::LockStatementContext *ctx) = 0;
  virtual void exitLockStatement(CSharpParser::LockStatementContext *ctx) = 0;

  virtual void enterUsingStatement(CSharpParser::UsingStatementContext *ctx) = 0;
  virtual void exitUsingStatement(CSharpParser::UsingStatementContext *ctx) = 0;

  virtual void enterYieldStatement(CSharpParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(CSharpParser::YieldStatementContext *ctx) = 0;

  virtual void enterUnsafeStatement(CSharpParser::UnsafeStatementContext *ctx) = 0;
  virtual void exitUnsafeStatement(CSharpParser::UnsafeStatementContext *ctx) = 0;

  virtual void enterFixedStatement(CSharpParser::FixedStatementContext *ctx) = 0;
  virtual void exitFixedStatement(CSharpParser::FixedStatementContext *ctx) = 0;

  virtual void enterBlock(CSharpParser::BlockContext *ctx) = 0;
  virtual void exitBlock(CSharpParser::BlockContext *ctx) = 0;

  virtual void enterLocal_variable_declaration(CSharpParser::Local_variable_declarationContext *ctx) = 0;
  virtual void exitLocal_variable_declaration(CSharpParser::Local_variable_declarationContext *ctx) = 0;

  virtual void enterLocal_variable_type(CSharpParser::Local_variable_typeContext *ctx) = 0;
  virtual void exitLocal_variable_type(CSharpParser::Local_variable_typeContext *ctx) = 0;

  virtual void enterLocal_variable_declarator(CSharpParser::Local_variable_declaratorContext *ctx) = 0;
  virtual void exitLocal_variable_declarator(CSharpParser::Local_variable_declaratorContext *ctx) = 0;

  virtual void enterLocal_variable_initializer(CSharpParser::Local_variable_initializerContext *ctx) = 0;
  virtual void exitLocal_variable_initializer(CSharpParser::Local_variable_initializerContext *ctx) = 0;

  virtual void enterLocal_constant_declaration(CSharpParser::Local_constant_declarationContext *ctx) = 0;
  virtual void exitLocal_constant_declaration(CSharpParser::Local_constant_declarationContext *ctx) = 0;

  virtual void enterIf_body(CSharpParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(CSharpParser::If_bodyContext *ctx) = 0;

  virtual void enterSwitch_section(CSharpParser::Switch_sectionContext *ctx) = 0;
  virtual void exitSwitch_section(CSharpParser::Switch_sectionContext *ctx) = 0;

  virtual void enterSwitch_label(CSharpParser::Switch_labelContext *ctx) = 0;
  virtual void exitSwitch_label(CSharpParser::Switch_labelContext *ctx) = 0;

  virtual void enterCase_guard(CSharpParser::Case_guardContext *ctx) = 0;
  virtual void exitCase_guard(CSharpParser::Case_guardContext *ctx) = 0;

  virtual void enterStatement_list(CSharpParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(CSharpParser::Statement_listContext *ctx) = 0;

  virtual void enterFor_initializer(CSharpParser::For_initializerContext *ctx) = 0;
  virtual void exitFor_initializer(CSharpParser::For_initializerContext *ctx) = 0;

  virtual void enterFor_iterator(CSharpParser::For_iteratorContext *ctx) = 0;
  virtual void exitFor_iterator(CSharpParser::For_iteratorContext *ctx) = 0;

  virtual void enterCatch_clauses(CSharpParser::Catch_clausesContext *ctx) = 0;
  virtual void exitCatch_clauses(CSharpParser::Catch_clausesContext *ctx) = 0;

  virtual void enterSpecific_catch_clause(CSharpParser::Specific_catch_clauseContext *ctx) = 0;
  virtual void exitSpecific_catch_clause(CSharpParser::Specific_catch_clauseContext *ctx) = 0;

  virtual void enterGeneral_catch_clause(CSharpParser::General_catch_clauseContext *ctx) = 0;
  virtual void exitGeneral_catch_clause(CSharpParser::General_catch_clauseContext *ctx) = 0;

  virtual void enterException_filter(CSharpParser::Exception_filterContext *ctx) = 0;
  virtual void exitException_filter(CSharpParser::Exception_filterContext *ctx) = 0;

  virtual void enterFinally_clause(CSharpParser::Finally_clauseContext *ctx) = 0;
  virtual void exitFinally_clause(CSharpParser::Finally_clauseContext *ctx) = 0;

  virtual void enterResource_acquisition(CSharpParser::Resource_acquisitionContext *ctx) = 0;
  virtual void exitResource_acquisition(CSharpParser::Resource_acquisitionContext *ctx) = 0;

  virtual void enterNamespace_declaration(CSharpParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(CSharpParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterQualified_identifier(CSharpParser::Qualified_identifierContext *ctx) = 0;
  virtual void exitQualified_identifier(CSharpParser::Qualified_identifierContext *ctx) = 0;

  virtual void enterNamespace_body(CSharpParser::Namespace_bodyContext *ctx) = 0;
  virtual void exitNamespace_body(CSharpParser::Namespace_bodyContext *ctx) = 0;

  virtual void enterExtern_alias_directives(CSharpParser::Extern_alias_directivesContext *ctx) = 0;
  virtual void exitExtern_alias_directives(CSharpParser::Extern_alias_directivesContext *ctx) = 0;

  virtual void enterExtern_alias_directive(CSharpParser::Extern_alias_directiveContext *ctx) = 0;
  virtual void exitExtern_alias_directive(CSharpParser::Extern_alias_directiveContext *ctx) = 0;

  virtual void enterUsing_directives(CSharpParser::Using_directivesContext *ctx) = 0;
  virtual void exitUsing_directives(CSharpParser::Using_directivesContext *ctx) = 0;

  virtual void enterUsingAliasDirective(CSharpParser::UsingAliasDirectiveContext *ctx) = 0;
  virtual void exitUsingAliasDirective(CSharpParser::UsingAliasDirectiveContext *ctx) = 0;

  virtual void enterUsingNamespaceDirective(CSharpParser::UsingNamespaceDirectiveContext *ctx) = 0;
  virtual void exitUsingNamespaceDirective(CSharpParser::UsingNamespaceDirectiveContext *ctx) = 0;

  virtual void enterUsingStaticDirective(CSharpParser::UsingStaticDirectiveContext *ctx) = 0;
  virtual void exitUsingStaticDirective(CSharpParser::UsingStaticDirectiveContext *ctx) = 0;

  virtual void enterNamespace_member_declarations(CSharpParser::Namespace_member_declarationsContext *ctx) = 0;
  virtual void exitNamespace_member_declarations(CSharpParser::Namespace_member_declarationsContext *ctx) = 0;

  virtual void enterNamespace_member_declaration(CSharpParser::Namespace_member_declarationContext *ctx) = 0;
  virtual void exitNamespace_member_declaration(CSharpParser::Namespace_member_declarationContext *ctx) = 0;

  virtual void enterType_declaration(CSharpParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(CSharpParser::Type_declarationContext *ctx) = 0;

  virtual void enterQualified_alias_member(CSharpParser::Qualified_alias_memberContext *ctx) = 0;
  virtual void exitQualified_alias_member(CSharpParser::Qualified_alias_memberContext *ctx) = 0;

  virtual void enterType_parameter_list(CSharpParser::Type_parameter_listContext *ctx) = 0;
  virtual void exitType_parameter_list(CSharpParser::Type_parameter_listContext *ctx) = 0;

  virtual void enterType_parameter(CSharpParser::Type_parameterContext *ctx) = 0;
  virtual void exitType_parameter(CSharpParser::Type_parameterContext *ctx) = 0;

  virtual void enterClass_base(CSharpParser::Class_baseContext *ctx) = 0;
  virtual void exitClass_base(CSharpParser::Class_baseContext *ctx) = 0;

  virtual void enterInterface_type_list(CSharpParser::Interface_type_listContext *ctx) = 0;
  virtual void exitInterface_type_list(CSharpParser::Interface_type_listContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clauses(CSharpParser::Type_parameter_constraints_clausesContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clauses(CSharpParser::Type_parameter_constraints_clausesContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clause(CSharpParser::Type_parameter_constraints_clauseContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clause(CSharpParser::Type_parameter_constraints_clauseContext *ctx) = 0;

  virtual void enterType_parameter_constraints(CSharpParser::Type_parameter_constraintsContext *ctx) = 0;
  virtual void exitType_parameter_constraints(CSharpParser::Type_parameter_constraintsContext *ctx) = 0;

  virtual void enterPrimary_constraint(CSharpParser::Primary_constraintContext *ctx) = 0;
  virtual void exitPrimary_constraint(CSharpParser::Primary_constraintContext *ctx) = 0;

  virtual void enterSecondary_constraints(CSharpParser::Secondary_constraintsContext *ctx) = 0;
  virtual void exitSecondary_constraints(CSharpParser::Secondary_constraintsContext *ctx) = 0;

  virtual void enterConstructor_constraint(CSharpParser::Constructor_constraintContext *ctx) = 0;
  virtual void exitConstructor_constraint(CSharpParser::Constructor_constraintContext *ctx) = 0;

  virtual void enterClass_body(CSharpParser::Class_bodyContext *ctx) = 0;
  virtual void exitClass_body(CSharpParser::Class_bodyContext *ctx) = 0;

  virtual void enterClass_member_declarations(CSharpParser::Class_member_declarationsContext *ctx) = 0;
  virtual void exitClass_member_declarations(CSharpParser::Class_member_declarationsContext *ctx) = 0;

  virtual void enterClass_member_declaration(CSharpParser::Class_member_declarationContext *ctx) = 0;
  virtual void exitClass_member_declaration(CSharpParser::Class_member_declarationContext *ctx) = 0;

  virtual void enterAll_member_modifiers(CSharpParser::All_member_modifiersContext *ctx) = 0;
  virtual void exitAll_member_modifiers(CSharpParser::All_member_modifiersContext *ctx) = 0;

  virtual void enterAll_member_modifier(CSharpParser::All_member_modifierContext *ctx) = 0;
  virtual void exitAll_member_modifier(CSharpParser::All_member_modifierContext *ctx) = 0;

  virtual void enterCommon_member_declaration(CSharpParser::Common_member_declarationContext *ctx) = 0;
  virtual void exitCommon_member_declaration(CSharpParser::Common_member_declarationContext *ctx) = 0;

  virtual void enterTyped_member_declaration(CSharpParser::Typed_member_declarationContext *ctx) = 0;
  virtual void exitTyped_member_declaration(CSharpParser::Typed_member_declarationContext *ctx) = 0;

  virtual void enterConstant_declarators(CSharpParser::Constant_declaratorsContext *ctx) = 0;
  virtual void exitConstant_declarators(CSharpParser::Constant_declaratorsContext *ctx) = 0;

  virtual void enterConstant_declarator(CSharpParser::Constant_declaratorContext *ctx) = 0;
  virtual void exitConstant_declarator(CSharpParser::Constant_declaratorContext *ctx) = 0;

  virtual void enterVariable_declarators(CSharpParser::Variable_declaratorsContext *ctx) = 0;
  virtual void exitVariable_declarators(CSharpParser::Variable_declaratorsContext *ctx) = 0;

  virtual void enterVariable_declarator(CSharpParser::Variable_declaratorContext *ctx) = 0;
  virtual void exitVariable_declarator(CSharpParser::Variable_declaratorContext *ctx) = 0;

  virtual void enterVariable_initializer(CSharpParser::Variable_initializerContext *ctx) = 0;
  virtual void exitVariable_initializer(CSharpParser::Variable_initializerContext *ctx) = 0;

  virtual void enterReturn_type(CSharpParser::Return_typeContext *ctx) = 0;
  virtual void exitReturn_type(CSharpParser::Return_typeContext *ctx) = 0;

  virtual void enterMember_name(CSharpParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(CSharpParser::Member_nameContext *ctx) = 0;

  virtual void enterMethod_body(CSharpParser::Method_bodyContext *ctx) = 0;
  virtual void exitMethod_body(CSharpParser::Method_bodyContext *ctx) = 0;

  virtual void enterFormal_parameter_list(CSharpParser::Formal_parameter_listContext *ctx) = 0;
  virtual void exitFormal_parameter_list(CSharpParser::Formal_parameter_listContext *ctx) = 0;

  virtual void enterFixed_parameters(CSharpParser::Fixed_parametersContext *ctx) = 0;
  virtual void exitFixed_parameters(CSharpParser::Fixed_parametersContext *ctx) = 0;

  virtual void enterFixed_parameter(CSharpParser::Fixed_parameterContext *ctx) = 0;
  virtual void exitFixed_parameter(CSharpParser::Fixed_parameterContext *ctx) = 0;

  virtual void enterParameter_modifier(CSharpParser::Parameter_modifierContext *ctx) = 0;
  virtual void exitParameter_modifier(CSharpParser::Parameter_modifierContext *ctx) = 0;

  virtual void enterParameter_array(CSharpParser::Parameter_arrayContext *ctx) = 0;
  virtual void exitParameter_array(CSharpParser::Parameter_arrayContext *ctx) = 0;

  virtual void enterAccessor_declarations(CSharpParser::Accessor_declarationsContext *ctx) = 0;
  virtual void exitAccessor_declarations(CSharpParser::Accessor_declarationsContext *ctx) = 0;

  virtual void enterGet_accessor_declaration(CSharpParser::Get_accessor_declarationContext *ctx) = 0;
  virtual void exitGet_accessor_declaration(CSharpParser::Get_accessor_declarationContext *ctx) = 0;

  virtual void enterSet_accessor_declaration(CSharpParser::Set_accessor_declarationContext *ctx) = 0;
  virtual void exitSet_accessor_declaration(CSharpParser::Set_accessor_declarationContext *ctx) = 0;

  virtual void enterAccessor_modifier(CSharpParser::Accessor_modifierContext *ctx) = 0;
  virtual void exitAccessor_modifier(CSharpParser::Accessor_modifierContext *ctx) = 0;

  virtual void enterAccessor_body(CSharpParser::Accessor_bodyContext *ctx) = 0;
  virtual void exitAccessor_body(CSharpParser::Accessor_bodyContext *ctx) = 0;

  virtual void enterEvent_accessor_declarations(CSharpParser::Event_accessor_declarationsContext *ctx) = 0;
  virtual void exitEvent_accessor_declarations(CSharpParser::Event_accessor_declarationsContext *ctx) = 0;

  virtual void enterAdd_accessor_declaration(CSharpParser::Add_accessor_declarationContext *ctx) = 0;
  virtual void exitAdd_accessor_declaration(CSharpParser::Add_accessor_declarationContext *ctx) = 0;

  virtual void enterRemove_accessor_declaration(CSharpParser::Remove_accessor_declarationContext *ctx) = 0;
  virtual void exitRemove_accessor_declaration(CSharpParser::Remove_accessor_declarationContext *ctx) = 0;

  virtual void enterOverloadable_operator(CSharpParser::Overloadable_operatorContext *ctx) = 0;
  virtual void exitOverloadable_operator(CSharpParser::Overloadable_operatorContext *ctx) = 0;

  virtual void enterConversion_operator_declarator(CSharpParser::Conversion_operator_declaratorContext *ctx) = 0;
  virtual void exitConversion_operator_declarator(CSharpParser::Conversion_operator_declaratorContext *ctx) = 0;

  virtual void enterConstructor_initializer(CSharpParser::Constructor_initializerContext *ctx) = 0;
  virtual void exitConstructor_initializer(CSharpParser::Constructor_initializerContext *ctx) = 0;

  virtual void enterBody(CSharpParser::BodyContext *ctx) = 0;
  virtual void exitBody(CSharpParser::BodyContext *ctx) = 0;

  virtual void enterStruct_interfaces(CSharpParser::Struct_interfacesContext *ctx) = 0;
  virtual void exitStruct_interfaces(CSharpParser::Struct_interfacesContext *ctx) = 0;

  virtual void enterStruct_body(CSharpParser::Struct_bodyContext *ctx) = 0;
  virtual void exitStruct_body(CSharpParser::Struct_bodyContext *ctx) = 0;

  virtual void enterStruct_member_declaration(CSharpParser::Struct_member_declarationContext *ctx) = 0;
  virtual void exitStruct_member_declaration(CSharpParser::Struct_member_declarationContext *ctx) = 0;

  virtual void enterArray_type(CSharpParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(CSharpParser::Array_typeContext *ctx) = 0;

  virtual void enterRank_specifier(CSharpParser::Rank_specifierContext *ctx) = 0;
  virtual void exitRank_specifier(CSharpParser::Rank_specifierContext *ctx) = 0;

  virtual void enterArray_initializer(CSharpParser::Array_initializerContext *ctx) = 0;
  virtual void exitArray_initializer(CSharpParser::Array_initializerContext *ctx) = 0;

  virtual void enterVariant_type_parameter_list(CSharpParser::Variant_type_parameter_listContext *ctx) = 0;
  virtual void exitVariant_type_parameter_list(CSharpParser::Variant_type_parameter_listContext *ctx) = 0;

  virtual void enterVariant_type_parameter(CSharpParser::Variant_type_parameterContext *ctx) = 0;
  virtual void exitVariant_type_parameter(CSharpParser::Variant_type_parameterContext *ctx) = 0;

  virtual void enterVariance_annotation(CSharpParser::Variance_annotationContext *ctx) = 0;
  virtual void exitVariance_annotation(CSharpParser::Variance_annotationContext *ctx) = 0;

  virtual void enterInterface_base(CSharpParser::Interface_baseContext *ctx) = 0;
  virtual void exitInterface_base(CSharpParser::Interface_baseContext *ctx) = 0;

  virtual void enterInterface_body(CSharpParser::Interface_bodyContext *ctx) = 0;
  virtual void exitInterface_body(CSharpParser::Interface_bodyContext *ctx) = 0;

  virtual void enterInterface_member_declaration(CSharpParser::Interface_member_declarationContext *ctx) = 0;
  virtual void exitInterface_member_declaration(CSharpParser::Interface_member_declarationContext *ctx) = 0;

  virtual void enterInterface_accessors(CSharpParser::Interface_accessorsContext *ctx) = 0;
  virtual void exitInterface_accessors(CSharpParser::Interface_accessorsContext *ctx) = 0;

  virtual void enterEnum_base(CSharpParser::Enum_baseContext *ctx) = 0;
  virtual void exitEnum_base(CSharpParser::Enum_baseContext *ctx) = 0;

  virtual void enterEnum_body(CSharpParser::Enum_bodyContext *ctx) = 0;
  virtual void exitEnum_body(CSharpParser::Enum_bodyContext *ctx) = 0;

  virtual void enterEnum_member_declaration(CSharpParser::Enum_member_declarationContext *ctx) = 0;
  virtual void exitEnum_member_declaration(CSharpParser::Enum_member_declarationContext *ctx) = 0;

  virtual void enterGlobal_attribute_section(CSharpParser::Global_attribute_sectionContext *ctx) = 0;
  virtual void exitGlobal_attribute_section(CSharpParser::Global_attribute_sectionContext *ctx) = 0;

  virtual void enterGlobal_attribute_target(CSharpParser::Global_attribute_targetContext *ctx) = 0;
  virtual void exitGlobal_attribute_target(CSharpParser::Global_attribute_targetContext *ctx) = 0;

  virtual void enterAttributes(CSharpParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(CSharpParser::AttributesContext *ctx) = 0;

  virtual void enterAttribute_section(CSharpParser::Attribute_sectionContext *ctx) = 0;
  virtual void exitAttribute_section(CSharpParser::Attribute_sectionContext *ctx) = 0;

  virtual void enterAttribute_target(CSharpParser::Attribute_targetContext *ctx) = 0;
  virtual void exitAttribute_target(CSharpParser::Attribute_targetContext *ctx) = 0;

  virtual void enterAttribute_list(CSharpParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(CSharpParser::Attribute_listContext *ctx) = 0;

  virtual void enterAttribute(CSharpParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CSharpParser::AttributeContext *ctx) = 0;

  virtual void enterAttribute_argument(CSharpParser::Attribute_argumentContext *ctx) = 0;
  virtual void exitAttribute_argument(CSharpParser::Attribute_argumentContext *ctx) = 0;

  virtual void enterPointer_type(CSharpParser::Pointer_typeContext *ctx) = 0;
  virtual void exitPointer_type(CSharpParser::Pointer_typeContext *ctx) = 0;

  virtual void enterFixed_pointer_declarators(CSharpParser::Fixed_pointer_declaratorsContext *ctx) = 0;
  virtual void exitFixed_pointer_declarators(CSharpParser::Fixed_pointer_declaratorsContext *ctx) = 0;

  virtual void enterFixed_pointer_declarator(CSharpParser::Fixed_pointer_declaratorContext *ctx) = 0;
  virtual void exitFixed_pointer_declarator(CSharpParser::Fixed_pointer_declaratorContext *ctx) = 0;

  virtual void enterFixed_pointer_initializer(CSharpParser::Fixed_pointer_initializerContext *ctx) = 0;
  virtual void exitFixed_pointer_initializer(CSharpParser::Fixed_pointer_initializerContext *ctx) = 0;

  virtual void enterFixed_size_buffer_declarator(CSharpParser::Fixed_size_buffer_declaratorContext *ctx) = 0;
  virtual void exitFixed_size_buffer_declarator(CSharpParser::Fixed_size_buffer_declaratorContext *ctx) = 0;

  virtual void enterStackalloc_initializer(CSharpParser::Stackalloc_initializerContext *ctx) = 0;
  virtual void exitStackalloc_initializer(CSharpParser::Stackalloc_initializerContext *ctx) = 0;

  virtual void enterRight_arrow(CSharpParser::Right_arrowContext *ctx) = 0;
  virtual void exitRight_arrow(CSharpParser::Right_arrowContext *ctx) = 0;

  virtual void enterRight_shift(CSharpParser::Right_shiftContext *ctx) = 0;
  virtual void exitRight_shift(CSharpParser::Right_shiftContext *ctx) = 0;

  virtual void enterRight_shift_assignment(CSharpParser::Right_shift_assignmentContext *ctx) = 0;
  virtual void exitRight_shift_assignment(CSharpParser::Right_shift_assignmentContext *ctx) = 0;

  virtual void enterLiteral(CSharpParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CSharpParser::LiteralContext *ctx) = 0;

  virtual void enterBoolean_literal(CSharpParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(CSharpParser::Boolean_literalContext *ctx) = 0;

  virtual void enterString_literal(CSharpParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(CSharpParser::String_literalContext *ctx) = 0;

  virtual void enterInterpolated_regular_string(CSharpParser::Interpolated_regular_stringContext *ctx) = 0;
  virtual void exitInterpolated_regular_string(CSharpParser::Interpolated_regular_stringContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string(CSharpParser::Interpolated_verbatium_stringContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string(CSharpParser::Interpolated_verbatium_stringContext *ctx) = 0;

  virtual void enterInterpolated_regular_string_part(CSharpParser::Interpolated_regular_string_partContext *ctx) = 0;
  virtual void exitInterpolated_regular_string_part(CSharpParser::Interpolated_regular_string_partContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string_part(CSharpParser::Interpolated_verbatium_string_partContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string_part(CSharpParser::Interpolated_verbatium_string_partContext *ctx) = 0;

  virtual void enterInterpolated_string_expression(CSharpParser::Interpolated_string_expressionContext *ctx) = 0;
  virtual void exitInterpolated_string_expression(CSharpParser::Interpolated_string_expressionContext *ctx) = 0;

  virtual void enterKeyword(CSharpParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(CSharpParser::KeywordContext *ctx) = 0;

  virtual void enterClass_definition(CSharpParser::Class_definitionContext *ctx) = 0;
  virtual void exitClass_definition(CSharpParser::Class_definitionContext *ctx) = 0;

  virtual void enterStruct_definition(CSharpParser::Struct_definitionContext *ctx) = 0;
  virtual void exitStruct_definition(CSharpParser::Struct_definitionContext *ctx) = 0;

  virtual void enterInterface_definition(CSharpParser::Interface_definitionContext *ctx) = 0;
  virtual void exitInterface_definition(CSharpParser::Interface_definitionContext *ctx) = 0;

  virtual void enterEnum_definition(CSharpParser::Enum_definitionContext *ctx) = 0;
  virtual void exitEnum_definition(CSharpParser::Enum_definitionContext *ctx) = 0;

  virtual void enterDelegate_definition(CSharpParser::Delegate_definitionContext *ctx) = 0;
  virtual void exitDelegate_definition(CSharpParser::Delegate_definitionContext *ctx) = 0;

  virtual void enterEvent_declaration(CSharpParser::Event_declarationContext *ctx) = 0;
  virtual void exitEvent_declaration(CSharpParser::Event_declarationContext *ctx) = 0;

  virtual void enterField_declaration(CSharpParser::Field_declarationContext *ctx) = 0;
  virtual void exitField_declaration(CSharpParser::Field_declarationContext *ctx) = 0;

  virtual void enterProperty_declaration(CSharpParser::Property_declarationContext *ctx) = 0;
  virtual void exitProperty_declaration(CSharpParser::Property_declarationContext *ctx) = 0;

  virtual void enterConstant_declaration(CSharpParser::Constant_declarationContext *ctx) = 0;
  virtual void exitConstant_declaration(CSharpParser::Constant_declarationContext *ctx) = 0;

  virtual void enterIndexer_declaration(CSharpParser::Indexer_declarationContext *ctx) = 0;
  virtual void exitIndexer_declaration(CSharpParser::Indexer_declarationContext *ctx) = 0;

  virtual void enterDestructor_definition(CSharpParser::Destructor_definitionContext *ctx) = 0;
  virtual void exitDestructor_definition(CSharpParser::Destructor_definitionContext *ctx) = 0;

  virtual void enterConstructor_declaration(CSharpParser::Constructor_declarationContext *ctx) = 0;
  virtual void exitConstructor_declaration(CSharpParser::Constructor_declarationContext *ctx) = 0;

  virtual void enterMethod_declaration(CSharpParser::Method_declarationContext *ctx) = 0;
  virtual void exitMethod_declaration(CSharpParser::Method_declarationContext *ctx) = 0;

  virtual void enterMethod_member_name(CSharpParser::Method_member_nameContext *ctx) = 0;
  virtual void exitMethod_member_name(CSharpParser::Method_member_nameContext *ctx) = 0;

  virtual void enterOperator_declaration(CSharpParser::Operator_declarationContext *ctx) = 0;
  virtual void exitOperator_declaration(CSharpParser::Operator_declarationContext *ctx) = 0;

  virtual void enterArg_declaration(CSharpParser::Arg_declarationContext *ctx) = 0;
  virtual void exitArg_declaration(CSharpParser::Arg_declarationContext *ctx) = 0;

  virtual void enterMethod_invocation(CSharpParser::Method_invocationContext *ctx) = 0;
  virtual void exitMethod_invocation(CSharpParser::Method_invocationContext *ctx) = 0;

  virtual void enterObject_creation_expression(CSharpParser::Object_creation_expressionContext *ctx) = 0;
  virtual void exitObject_creation_expression(CSharpParser::Object_creation_expressionContext *ctx) = 0;

  virtual void enterIdentifier(CSharpParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(CSharpParser::IdentifierContext *ctx) = 0;


};

