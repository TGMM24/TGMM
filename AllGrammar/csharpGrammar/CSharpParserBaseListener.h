
// Generated from CSharpParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CSharpParserListener.h"


/**
 * This class provides an empty implementation of CSharpParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CSharpParserBaseListener : public CSharpParserListener {
public:

  virtual void enterCompilation_unit(CSharpParser::Compilation_unitContext * /*ctx*/) override { }
  virtual void exitCompilation_unit(CSharpParser::Compilation_unitContext * /*ctx*/) override { }

  virtual void enterNamespace_or_type_name(CSharpParser::Namespace_or_type_nameContext * /*ctx*/) override { }
  virtual void exitNamespace_or_type_name(CSharpParser::Namespace_or_type_nameContext * /*ctx*/) override { }

  virtual void enterType_(CSharpParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(CSharpParser::Type_Context * /*ctx*/) override { }

  virtual void enterBase_type(CSharpParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(CSharpParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterTuple_type(CSharpParser::Tuple_typeContext * /*ctx*/) override { }
  virtual void exitTuple_type(CSharpParser::Tuple_typeContext * /*ctx*/) override { }

  virtual void enterTuple_element(CSharpParser::Tuple_elementContext * /*ctx*/) override { }
  virtual void exitTuple_element(CSharpParser::Tuple_elementContext * /*ctx*/) override { }

  virtual void enterSimple_type(CSharpParser::Simple_typeContext * /*ctx*/) override { }
  virtual void exitSimple_type(CSharpParser::Simple_typeContext * /*ctx*/) override { }

  virtual void enterNumeric_type(CSharpParser::Numeric_typeContext * /*ctx*/) override { }
  virtual void exitNumeric_type(CSharpParser::Numeric_typeContext * /*ctx*/) override { }

  virtual void enterIntegral_type(CSharpParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(CSharpParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterFloating_point_type(CSharpParser::Floating_point_typeContext * /*ctx*/) override { }
  virtual void exitFloating_point_type(CSharpParser::Floating_point_typeContext * /*ctx*/) override { }

  virtual void enterClass_type(CSharpParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(CSharpParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterType_argument_list(CSharpParser::Type_argument_listContext * /*ctx*/) override { }
  virtual void exitType_argument_list(CSharpParser::Type_argument_listContext * /*ctx*/) override { }

  virtual void enterArgument_list(CSharpParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(CSharpParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterArgument(CSharpParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(CSharpParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpression(CSharpParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CSharpParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNon_assignment_expression(CSharpParser::Non_assignment_expressionContext * /*ctx*/) override { }
  virtual void exitNon_assignment_expression(CSharpParser::Non_assignment_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment(CSharpParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CSharpParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(CSharpParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(CSharpParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(CSharpParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(CSharpParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterNull_coalescing_expression(CSharpParser::Null_coalescing_expressionContext * /*ctx*/) override { }
  virtual void exitNull_coalescing_expression(CSharpParser::Null_coalescing_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_or_expression(CSharpParser::Conditional_or_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_or_expression(CSharpParser::Conditional_or_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_and_expression(CSharpParser::Conditional_and_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_and_expression(CSharpParser::Conditional_and_expressionContext * /*ctx*/) override { }

  virtual void enterInclusive_or_expression(CSharpParser::Inclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitInclusive_or_expression(CSharpParser::Inclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterExclusive_or_expression(CSharpParser::Exclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitExclusive_or_expression(CSharpParser::Exclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(CSharpParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(CSharpParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(CSharpParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(CSharpParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(CSharpParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(CSharpParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterShift_expression(CSharpParser::Shift_expressionContext * /*ctx*/) override { }
  virtual void exitShift_expression(CSharpParser::Shift_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(CSharpParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(CSharpParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(CSharpParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(CSharpParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression(CSharpParser::Switch_expressionContext * /*ctx*/) override { }
  virtual void exitSwitch_expression(CSharpParser::Switch_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arms(CSharpParser::Switch_expression_armsContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arms(CSharpParser::Switch_expression_armsContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arm(CSharpParser::Switch_expression_armContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arm(CSharpParser::Switch_expression_armContext * /*ctx*/) override { }

  virtual void enterRange_expression(CSharpParser::Range_expressionContext * /*ctx*/) override { }
  virtual void exitRange_expression(CSharpParser::Range_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(CSharpParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(CSharpParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(CSharpParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(CSharpParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(CSharpParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(CSharpParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleNameExpression(CSharpParser::SimpleNameExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleNameExpression(CSharpParser::SimpleNameExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesisExpressions(CSharpParser::ParenthesisExpressionsContext * /*ctx*/) override { }
  virtual void exitParenthesisExpressions(CSharpParser::ParenthesisExpressionsContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpression(CSharpParser::MemberAccessExpressionContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpression(CSharpParser::MemberAccessExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralAccessExpression(CSharpParser::LiteralAccessExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralAccessExpression(CSharpParser::LiteralAccessExpressionContext * /*ctx*/) override { }

  virtual void enterThisReferenceExpression(CSharpParser::ThisReferenceExpressionContext * /*ctx*/) override { }
  virtual void exitThisReferenceExpression(CSharpParser::ThisReferenceExpressionContext * /*ctx*/) override { }

  virtual void enterBaseAccessExpression(CSharpParser::BaseAccessExpressionContext * /*ctx*/) override { }
  virtual void exitBaseAccessExpression(CSharpParser::BaseAccessExpressionContext * /*ctx*/) override { }

  virtual void enterObjectCreationExpression(CSharpParser::ObjectCreationExpressionContext * /*ctx*/) override { }
  virtual void exitObjectCreationExpression(CSharpParser::ObjectCreationExpressionContext * /*ctx*/) override { }

  virtual void enterTupleExpression(CSharpParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(CSharpParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(CSharpParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(CSharpParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterCheckedExpression(CSharpParser::CheckedExpressionContext * /*ctx*/) override { }
  virtual void exitCheckedExpression(CSharpParser::CheckedExpressionContext * /*ctx*/) override { }

  virtual void enterUncheckedExpression(CSharpParser::UncheckedExpressionContext * /*ctx*/) override { }
  virtual void exitUncheckedExpression(CSharpParser::UncheckedExpressionContext * /*ctx*/) override { }

  virtual void enterDefaultValueExpression(CSharpParser::DefaultValueExpressionContext * /*ctx*/) override { }
  virtual void exitDefaultValueExpression(CSharpParser::DefaultValueExpressionContext * /*ctx*/) override { }

  virtual void enterAnonymousMethodExpression(CSharpParser::AnonymousMethodExpressionContext * /*ctx*/) override { }
  virtual void exitAnonymousMethodExpression(CSharpParser::AnonymousMethodExpressionContext * /*ctx*/) override { }

  virtual void enterSizeofExpression(CSharpParser::SizeofExpressionContext * /*ctx*/) override { }
  virtual void exitSizeofExpression(CSharpParser::SizeofExpressionContext * /*ctx*/) override { }

  virtual void enterNameofExpression(CSharpParser::NameofExpressionContext * /*ctx*/) override { }
  virtual void exitNameofExpression(CSharpParser::NameofExpressionContext * /*ctx*/) override { }

  virtual void enterThrowable_expression(CSharpParser::Throwable_expressionContext * /*ctx*/) override { }
  virtual void exitThrowable_expression(CSharpParser::Throwable_expressionContext * /*ctx*/) override { }

  virtual void enterThrow_expression(CSharpParser::Throw_expressionContext * /*ctx*/) override { }
  virtual void exitThrow_expression(CSharpParser::Throw_expressionContext * /*ctx*/) override { }

  virtual void enterMember_access(CSharpParser::Member_accessContext * /*ctx*/) override { }
  virtual void exitMember_access(CSharpParser::Member_accessContext * /*ctx*/) override { }

  virtual void enterBracket_expression(CSharpParser::Bracket_expressionContext * /*ctx*/) override { }
  virtual void exitBracket_expression(CSharpParser::Bracket_expressionContext * /*ctx*/) override { }

  virtual void enterIndexer_argument(CSharpParser::Indexer_argumentContext * /*ctx*/) override { }
  virtual void exitIndexer_argument(CSharpParser::Indexer_argumentContext * /*ctx*/) override { }

  virtual void enterPredefined_type(CSharpParser::Predefined_typeContext * /*ctx*/) override { }
  virtual void exitPredefined_type(CSharpParser::Predefined_typeContext * /*ctx*/) override { }

  virtual void enterExpression_list(CSharpParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(CSharpParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterObject_or_collection_initializer(CSharpParser::Object_or_collection_initializerContext * /*ctx*/) override { }
  virtual void exitObject_or_collection_initializer(CSharpParser::Object_or_collection_initializerContext * /*ctx*/) override { }

  virtual void enterObject_initializer(CSharpParser::Object_initializerContext * /*ctx*/) override { }
  virtual void exitObject_initializer(CSharpParser::Object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_initializer_list(CSharpParser::Member_initializer_listContext * /*ctx*/) override { }
  virtual void exitMember_initializer_list(CSharpParser::Member_initializer_listContext * /*ctx*/) override { }

  virtual void enterMember_initializer(CSharpParser::Member_initializerContext * /*ctx*/) override { }
  virtual void exitMember_initializer(CSharpParser::Member_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer_value(CSharpParser::Initializer_valueContext * /*ctx*/) override { }
  virtual void exitInitializer_value(CSharpParser::Initializer_valueContext * /*ctx*/) override { }

  virtual void enterCollection_initializer(CSharpParser::Collection_initializerContext * /*ctx*/) override { }
  virtual void exitCollection_initializer(CSharpParser::Collection_initializerContext * /*ctx*/) override { }

  virtual void enterElement_initializer(CSharpParser::Element_initializerContext * /*ctx*/) override { }
  virtual void exitElement_initializer(CSharpParser::Element_initializerContext * /*ctx*/) override { }

  virtual void enterAnonymous_object_initializer(CSharpParser::Anonymous_object_initializerContext * /*ctx*/) override { }
  virtual void exitAnonymous_object_initializer(CSharpParser::Anonymous_object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_declarator_list(CSharpParser::Member_declarator_listContext * /*ctx*/) override { }
  virtual void exitMember_declarator_list(CSharpParser::Member_declarator_listContext * /*ctx*/) override { }

  virtual void enterMember_declarator(CSharpParser::Member_declaratorContext * /*ctx*/) override { }
  virtual void exitMember_declarator(CSharpParser::Member_declaratorContext * /*ctx*/) override { }

  virtual void enterUnbound_type_name(CSharpParser::Unbound_type_nameContext * /*ctx*/) override { }
  virtual void exitUnbound_type_name(CSharpParser::Unbound_type_nameContext * /*ctx*/) override { }

  virtual void enterGeneric_dimension_specifier(CSharpParser::Generic_dimension_specifierContext * /*ctx*/) override { }
  virtual void exitGeneric_dimension_specifier(CSharpParser::Generic_dimension_specifierContext * /*ctx*/) override { }

  virtual void enterIsType(CSharpParser::IsTypeContext * /*ctx*/) override { }
  virtual void exitIsType(CSharpParser::IsTypeContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArms(CSharpParser::IsTypePatternArmsContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArms(CSharpParser::IsTypePatternArmsContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArm(CSharpParser::IsTypePatternArmContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArm(CSharpParser::IsTypePatternArmContext * /*ctx*/) override { }

  virtual void enterLambda_expression(CSharpParser::Lambda_expressionContext * /*ctx*/) override { }
  virtual void exitLambda_expression(CSharpParser::Lambda_expressionContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_signature(CSharpParser::Anonymous_function_signatureContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_signature(CSharpParser::Anonymous_function_signatureContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter_list(CSharpParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter_list(CSharpParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter(CSharpParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter(CSharpParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }

  virtual void enterImplicit_anonymous_function_parameter_list(CSharpParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitImplicit_anonymous_function_parameter_list(CSharpParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_body(CSharpParser::Anonymous_function_bodyContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_body(CSharpParser::Anonymous_function_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_expression(CSharpParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(CSharpParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterFrom_clause(CSharpParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(CSharpParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_body(CSharpParser::Query_bodyContext * /*ctx*/) override { }
  virtual void exitQuery_body(CSharpParser::Query_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_body_clause(CSharpParser::Query_body_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_body_clause(CSharpParser::Query_body_clauseContext * /*ctx*/) override { }

  virtual void enterLet_clause(CSharpParser::Let_clauseContext * /*ctx*/) override { }
  virtual void exitLet_clause(CSharpParser::Let_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_clause(CSharpParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(CSharpParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterCombined_join_clause(CSharpParser::Combined_join_clauseContext * /*ctx*/) override { }
  virtual void exitCombined_join_clause(CSharpParser::Combined_join_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_clause(CSharpParser::Orderby_clauseContext * /*ctx*/) override { }
  virtual void exitOrderby_clause(CSharpParser::Orderby_clauseContext * /*ctx*/) override { }

  virtual void enterOrdering(CSharpParser::OrderingContext * /*ctx*/) override { }
  virtual void exitOrdering(CSharpParser::OrderingContext * /*ctx*/) override { }

  virtual void enterSelect_or_group_clause(CSharpParser::Select_or_group_clauseContext * /*ctx*/) override { }
  virtual void exitSelect_or_group_clause(CSharpParser::Select_or_group_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_continuation(CSharpParser::Query_continuationContext * /*ctx*/) override { }
  virtual void exitQuery_continuation(CSharpParser::Query_continuationContext * /*ctx*/) override { }

  virtual void enterStatement(CSharpParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CSharpParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(CSharpParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(CSharpParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocal_function_declaration(CSharpParser::Local_function_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_function_declaration(CSharpParser::Local_function_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_function_header(CSharpParser::Local_function_headerContext * /*ctx*/) override { }
  virtual void exitLocal_function_header(CSharpParser::Local_function_headerContext * /*ctx*/) override { }

  virtual void enterLocal_function_modifiers(CSharpParser::Local_function_modifiersContext * /*ctx*/) override { }
  virtual void exitLocal_function_modifiers(CSharpParser::Local_function_modifiersContext * /*ctx*/) override { }

  virtual void enterLocal_function_body(CSharpParser::Local_function_bodyContext * /*ctx*/) override { }
  virtual void exitLocal_function_body(CSharpParser::Local_function_bodyContext * /*ctx*/) override { }

  virtual void enterLabeled_Statement(CSharpParser::Labeled_StatementContext * /*ctx*/) override { }
  virtual void exitLabeled_Statement(CSharpParser::Labeled_StatementContext * /*ctx*/) override { }

  virtual void enterEmbedded_statement(CSharpParser::Embedded_statementContext * /*ctx*/) override { }
  virtual void exitEmbedded_statement(CSharpParser::Embedded_statementContext * /*ctx*/) override { }

  virtual void enterTheEmptyStatement(CSharpParser::TheEmptyStatementContext * /*ctx*/) override { }
  virtual void exitTheEmptyStatement(CSharpParser::TheEmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(CSharpParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(CSharpParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(CSharpParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(CSharpParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(CSharpParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(CSharpParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(CSharpParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(CSharpParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(CSharpParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(CSharpParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(CSharpParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(CSharpParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForeachStatement(CSharpParser::ForeachStatementContext * /*ctx*/) override { }
  virtual void exitForeachStatement(CSharpParser::ForeachStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(CSharpParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(CSharpParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(CSharpParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(CSharpParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(CSharpParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(CSharpParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(CSharpParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(CSharpParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(CSharpParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(CSharpParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(CSharpParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(CSharpParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCheckedStatement(CSharpParser::CheckedStatementContext * /*ctx*/) override { }
  virtual void exitCheckedStatement(CSharpParser::CheckedStatementContext * /*ctx*/) override { }

  virtual void enterUncheckedStatement(CSharpParser::UncheckedStatementContext * /*ctx*/) override { }
  virtual void exitUncheckedStatement(CSharpParser::UncheckedStatementContext * /*ctx*/) override { }

  virtual void enterLockStatement(CSharpParser::LockStatementContext * /*ctx*/) override { }
  virtual void exitLockStatement(CSharpParser::LockStatementContext * /*ctx*/) override { }

  virtual void enterUsingStatement(CSharpParser::UsingStatementContext * /*ctx*/) override { }
  virtual void exitUsingStatement(CSharpParser::UsingStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(CSharpParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(CSharpParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterUnsafeStatement(CSharpParser::UnsafeStatementContext * /*ctx*/) override { }
  virtual void exitUnsafeStatement(CSharpParser::UnsafeStatementContext * /*ctx*/) override { }

  virtual void enterFixedStatement(CSharpParser::FixedStatementContext * /*ctx*/) override { }
  virtual void exitFixedStatement(CSharpParser::FixedStatementContext * /*ctx*/) override { }

  virtual void enterBlock(CSharpParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(CSharpParser::BlockContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declaration(CSharpParser::Local_variable_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declaration(CSharpParser::Local_variable_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_variable_type(CSharpParser::Local_variable_typeContext * /*ctx*/) override { }
  virtual void exitLocal_variable_type(CSharpParser::Local_variable_typeContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declarator(CSharpParser::Local_variable_declaratorContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declarator(CSharpParser::Local_variable_declaratorContext * /*ctx*/) override { }

  virtual void enterLocal_variable_initializer(CSharpParser::Local_variable_initializerContext * /*ctx*/) override { }
  virtual void exitLocal_variable_initializer(CSharpParser::Local_variable_initializerContext * /*ctx*/) override { }

  virtual void enterLocal_constant_declaration(CSharpParser::Local_constant_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_constant_declaration(CSharpParser::Local_constant_declarationContext * /*ctx*/) override { }

  virtual void enterIf_body(CSharpParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(CSharpParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterSwitch_section(CSharpParser::Switch_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_section(CSharpParser::Switch_sectionContext * /*ctx*/) override { }

  virtual void enterSwitch_label(CSharpParser::Switch_labelContext * /*ctx*/) override { }
  virtual void exitSwitch_label(CSharpParser::Switch_labelContext * /*ctx*/) override { }

  virtual void enterCase_guard(CSharpParser::Case_guardContext * /*ctx*/) override { }
  virtual void exitCase_guard(CSharpParser::Case_guardContext * /*ctx*/) override { }

  virtual void enterStatement_list(CSharpParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(CSharpParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterFor_initializer(CSharpParser::For_initializerContext * /*ctx*/) override { }
  virtual void exitFor_initializer(CSharpParser::For_initializerContext * /*ctx*/) override { }

  virtual void enterFor_iterator(CSharpParser::For_iteratorContext * /*ctx*/) override { }
  virtual void exitFor_iterator(CSharpParser::For_iteratorContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(CSharpParser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(CSharpParser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterSpecific_catch_clause(CSharpParser::Specific_catch_clauseContext * /*ctx*/) override { }
  virtual void exitSpecific_catch_clause(CSharpParser::Specific_catch_clauseContext * /*ctx*/) override { }

  virtual void enterGeneral_catch_clause(CSharpParser::General_catch_clauseContext * /*ctx*/) override { }
  virtual void exitGeneral_catch_clause(CSharpParser::General_catch_clauseContext * /*ctx*/) override { }

  virtual void enterException_filter(CSharpParser::Exception_filterContext * /*ctx*/) override { }
  virtual void exitException_filter(CSharpParser::Exception_filterContext * /*ctx*/) override { }

  virtual void enterFinally_clause(CSharpParser::Finally_clauseContext * /*ctx*/) override { }
  virtual void exitFinally_clause(CSharpParser::Finally_clauseContext * /*ctx*/) override { }

  virtual void enterResource_acquisition(CSharpParser::Resource_acquisitionContext * /*ctx*/) override { }
  virtual void exitResource_acquisition(CSharpParser::Resource_acquisitionContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(CSharpParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(CSharpParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_identifier(CSharpParser::Qualified_identifierContext * /*ctx*/) override { }
  virtual void exitQualified_identifier(CSharpParser::Qualified_identifierContext * /*ctx*/) override { }

  virtual void enterNamespace_body(CSharpParser::Namespace_bodyContext * /*ctx*/) override { }
  virtual void exitNamespace_body(CSharpParser::Namespace_bodyContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directives(CSharpParser::Extern_alias_directivesContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directives(CSharpParser::Extern_alias_directivesContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directive(CSharpParser::Extern_alias_directiveContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directive(CSharpParser::Extern_alias_directiveContext * /*ctx*/) override { }

  virtual void enterUsing_directives(CSharpParser::Using_directivesContext * /*ctx*/) override { }
  virtual void exitUsing_directives(CSharpParser::Using_directivesContext * /*ctx*/) override { }

  virtual void enterUsingAliasDirective(CSharpParser::UsingAliasDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingAliasDirective(CSharpParser::UsingAliasDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingNamespaceDirective(CSharpParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingNamespaceDirective(CSharpParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingStaticDirective(CSharpParser::UsingStaticDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingStaticDirective(CSharpParser::UsingStaticDirectiveContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declarations(CSharpParser::Namespace_member_declarationsContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declarations(CSharpParser::Namespace_member_declarationsContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declaration(CSharpParser::Namespace_member_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declaration(CSharpParser::Namespace_member_declarationContext * /*ctx*/) override { }

  virtual void enterType_declaration(CSharpParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(CSharpParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_alias_member(CSharpParser::Qualified_alias_memberContext * /*ctx*/) override { }
  virtual void exitQualified_alias_member(CSharpParser::Qualified_alias_memberContext * /*ctx*/) override { }

  virtual void enterType_parameter_list(CSharpParser::Type_parameter_listContext * /*ctx*/) override { }
  virtual void exitType_parameter_list(CSharpParser::Type_parameter_listContext * /*ctx*/) override { }

  virtual void enterType_parameter(CSharpParser::Type_parameterContext * /*ctx*/) override { }
  virtual void exitType_parameter(CSharpParser::Type_parameterContext * /*ctx*/) override { }

  virtual void enterClass_base(CSharpParser::Class_baseContext * /*ctx*/) override { }
  virtual void exitClass_base(CSharpParser::Class_baseContext * /*ctx*/) override { }

  virtual void enterInterface_type_list(CSharpParser::Interface_type_listContext * /*ctx*/) override { }
  virtual void exitInterface_type_list(CSharpParser::Interface_type_listContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clauses(CSharpParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clauses(CSharpParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clause(CSharpParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clause(CSharpParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints(CSharpParser::Type_parameter_constraintsContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints(CSharpParser::Type_parameter_constraintsContext * /*ctx*/) override { }

  virtual void enterPrimary_constraint(CSharpParser::Primary_constraintContext * /*ctx*/) override { }
  virtual void exitPrimary_constraint(CSharpParser::Primary_constraintContext * /*ctx*/) override { }

  virtual void enterSecondary_constraints(CSharpParser::Secondary_constraintsContext * /*ctx*/) override { }
  virtual void exitSecondary_constraints(CSharpParser::Secondary_constraintsContext * /*ctx*/) override { }

  virtual void enterConstructor_constraint(CSharpParser::Constructor_constraintContext * /*ctx*/) override { }
  virtual void exitConstructor_constraint(CSharpParser::Constructor_constraintContext * /*ctx*/) override { }

  virtual void enterClass_body(CSharpParser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(CSharpParser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_member_declarations(CSharpParser::Class_member_declarationsContext * /*ctx*/) override { }
  virtual void exitClass_member_declarations(CSharpParser::Class_member_declarationsContext * /*ctx*/) override { }

  virtual void enterClass_member_declaration(CSharpParser::Class_member_declarationContext * /*ctx*/) override { }
  virtual void exitClass_member_declaration(CSharpParser::Class_member_declarationContext * /*ctx*/) override { }

  virtual void enterAll_member_modifiers(CSharpParser::All_member_modifiersContext * /*ctx*/) override { }
  virtual void exitAll_member_modifiers(CSharpParser::All_member_modifiersContext * /*ctx*/) override { }

  virtual void enterAll_member_modifier(CSharpParser::All_member_modifierContext * /*ctx*/) override { }
  virtual void exitAll_member_modifier(CSharpParser::All_member_modifierContext * /*ctx*/) override { }

  virtual void enterCommon_member_declaration(CSharpParser::Common_member_declarationContext * /*ctx*/) override { }
  virtual void exitCommon_member_declaration(CSharpParser::Common_member_declarationContext * /*ctx*/) override { }

  virtual void enterTyped_member_declaration(CSharpParser::Typed_member_declarationContext * /*ctx*/) override { }
  virtual void exitTyped_member_declaration(CSharpParser::Typed_member_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declarators(CSharpParser::Constant_declaratorsContext * /*ctx*/) override { }
  virtual void exitConstant_declarators(CSharpParser::Constant_declaratorsContext * /*ctx*/) override { }

  virtual void enterConstant_declarator(CSharpParser::Constant_declaratorContext * /*ctx*/) override { }
  virtual void exitConstant_declarator(CSharpParser::Constant_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_declarators(CSharpParser::Variable_declaratorsContext * /*ctx*/) override { }
  virtual void exitVariable_declarators(CSharpParser::Variable_declaratorsContext * /*ctx*/) override { }

  virtual void enterVariable_declarator(CSharpParser::Variable_declaratorContext * /*ctx*/) override { }
  virtual void exitVariable_declarator(CSharpParser::Variable_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_initializer(CSharpParser::Variable_initializerContext * /*ctx*/) override { }
  virtual void exitVariable_initializer(CSharpParser::Variable_initializerContext * /*ctx*/) override { }

  virtual void enterReturn_type(CSharpParser::Return_typeContext * /*ctx*/) override { }
  virtual void exitReturn_type(CSharpParser::Return_typeContext * /*ctx*/) override { }

  virtual void enterMember_name(CSharpParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(CSharpParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterMethod_body(CSharpParser::Method_bodyContext * /*ctx*/) override { }
  virtual void exitMethod_body(CSharpParser::Method_bodyContext * /*ctx*/) override { }

  virtual void enterFormal_parameter_list(CSharpParser::Formal_parameter_listContext * /*ctx*/) override { }
  virtual void exitFormal_parameter_list(CSharpParser::Formal_parameter_listContext * /*ctx*/) override { }

  virtual void enterFixed_parameters(CSharpParser::Fixed_parametersContext * /*ctx*/) override { }
  virtual void exitFixed_parameters(CSharpParser::Fixed_parametersContext * /*ctx*/) override { }

  virtual void enterFixed_parameter(CSharpParser::Fixed_parameterContext * /*ctx*/) override { }
  virtual void exitFixed_parameter(CSharpParser::Fixed_parameterContext * /*ctx*/) override { }

  virtual void enterParameter_modifier(CSharpParser::Parameter_modifierContext * /*ctx*/) override { }
  virtual void exitParameter_modifier(CSharpParser::Parameter_modifierContext * /*ctx*/) override { }

  virtual void enterParameter_array(CSharpParser::Parameter_arrayContext * /*ctx*/) override { }
  virtual void exitParameter_array(CSharpParser::Parameter_arrayContext * /*ctx*/) override { }

  virtual void enterAccessor_declarations(CSharpParser::Accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitAccessor_declarations(CSharpParser::Accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterGet_accessor_declaration(CSharpParser::Get_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitGet_accessor_declaration(CSharpParser::Get_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterSet_accessor_declaration(CSharpParser::Set_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitSet_accessor_declaration(CSharpParser::Set_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterAccessor_modifier(CSharpParser::Accessor_modifierContext * /*ctx*/) override { }
  virtual void exitAccessor_modifier(CSharpParser::Accessor_modifierContext * /*ctx*/) override { }

  virtual void enterAccessor_body(CSharpParser::Accessor_bodyContext * /*ctx*/) override { }
  virtual void exitAccessor_body(CSharpParser::Accessor_bodyContext * /*ctx*/) override { }

  virtual void enterEvent_accessor_declarations(CSharpParser::Event_accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitEvent_accessor_declarations(CSharpParser::Event_accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterAdd_accessor_declaration(CSharpParser::Add_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitAdd_accessor_declaration(CSharpParser::Add_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterRemove_accessor_declaration(CSharpParser::Remove_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitRemove_accessor_declaration(CSharpParser::Remove_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterOverloadable_operator(CSharpParser::Overloadable_operatorContext * /*ctx*/) override { }
  virtual void exitOverloadable_operator(CSharpParser::Overloadable_operatorContext * /*ctx*/) override { }

  virtual void enterConversion_operator_declarator(CSharpParser::Conversion_operator_declaratorContext * /*ctx*/) override { }
  virtual void exitConversion_operator_declarator(CSharpParser::Conversion_operator_declaratorContext * /*ctx*/) override { }

  virtual void enterConstructor_initializer(CSharpParser::Constructor_initializerContext * /*ctx*/) override { }
  virtual void exitConstructor_initializer(CSharpParser::Constructor_initializerContext * /*ctx*/) override { }

  virtual void enterBody(CSharpParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(CSharpParser::BodyContext * /*ctx*/) override { }

  virtual void enterStruct_interfaces(CSharpParser::Struct_interfacesContext * /*ctx*/) override { }
  virtual void exitStruct_interfaces(CSharpParser::Struct_interfacesContext * /*ctx*/) override { }

  virtual void enterStruct_body(CSharpParser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(CSharpParser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_member_declaration(CSharpParser::Struct_member_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_member_declaration(CSharpParser::Struct_member_declarationContext * /*ctx*/) override { }

  virtual void enterArray_type(CSharpParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(CSharpParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterRank_specifier(CSharpParser::Rank_specifierContext * /*ctx*/) override { }
  virtual void exitRank_specifier(CSharpParser::Rank_specifierContext * /*ctx*/) override { }

  virtual void enterArray_initializer(CSharpParser::Array_initializerContext * /*ctx*/) override { }
  virtual void exitArray_initializer(CSharpParser::Array_initializerContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter_list(CSharpParser::Variant_type_parameter_listContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter_list(CSharpParser::Variant_type_parameter_listContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter(CSharpParser::Variant_type_parameterContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter(CSharpParser::Variant_type_parameterContext * /*ctx*/) override { }

  virtual void enterVariance_annotation(CSharpParser::Variance_annotationContext * /*ctx*/) override { }
  virtual void exitVariance_annotation(CSharpParser::Variance_annotationContext * /*ctx*/) override { }

  virtual void enterInterface_base(CSharpParser::Interface_baseContext * /*ctx*/) override { }
  virtual void exitInterface_base(CSharpParser::Interface_baseContext * /*ctx*/) override { }

  virtual void enterInterface_body(CSharpParser::Interface_bodyContext * /*ctx*/) override { }
  virtual void exitInterface_body(CSharpParser::Interface_bodyContext * /*ctx*/) override { }

  virtual void enterInterface_member_declaration(CSharpParser::Interface_member_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_member_declaration(CSharpParser::Interface_member_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_accessors(CSharpParser::Interface_accessorsContext * /*ctx*/) override { }
  virtual void exitInterface_accessors(CSharpParser::Interface_accessorsContext * /*ctx*/) override { }

  virtual void enterEnum_base(CSharpParser::Enum_baseContext * /*ctx*/) override { }
  virtual void exitEnum_base(CSharpParser::Enum_baseContext * /*ctx*/) override { }

  virtual void enterEnum_body(CSharpParser::Enum_bodyContext * /*ctx*/) override { }
  virtual void exitEnum_body(CSharpParser::Enum_bodyContext * /*ctx*/) override { }

  virtual void enterEnum_member_declaration(CSharpParser::Enum_member_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_member_declaration(CSharpParser::Enum_member_declarationContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_section(CSharpParser::Global_attribute_sectionContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_section(CSharpParser::Global_attribute_sectionContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_target(CSharpParser::Global_attribute_targetContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_target(CSharpParser::Global_attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttributes(CSharpParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(CSharpParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttribute_section(CSharpParser::Attribute_sectionContext * /*ctx*/) override { }
  virtual void exitAttribute_section(CSharpParser::Attribute_sectionContext * /*ctx*/) override { }

  virtual void enterAttribute_target(CSharpParser::Attribute_targetContext * /*ctx*/) override { }
  virtual void exitAttribute_target(CSharpParser::Attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttribute_list(CSharpParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(CSharpParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterAttribute(CSharpParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CSharpParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_argument(CSharpParser::Attribute_argumentContext * /*ctx*/) override { }
  virtual void exitAttribute_argument(CSharpParser::Attribute_argumentContext * /*ctx*/) override { }

  virtual void enterPointer_type(CSharpParser::Pointer_typeContext * /*ctx*/) override { }
  virtual void exitPointer_type(CSharpParser::Pointer_typeContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarators(CSharpParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarators(CSharpParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarator(CSharpParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarator(CSharpParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_initializer(CSharpParser::Fixed_pointer_initializerContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_initializer(CSharpParser::Fixed_pointer_initializerContext * /*ctx*/) override { }

  virtual void enterFixed_size_buffer_declarator(CSharpParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_size_buffer_declarator(CSharpParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }

  virtual void enterStackalloc_initializer(CSharpParser::Stackalloc_initializerContext * /*ctx*/) override { }
  virtual void exitStackalloc_initializer(CSharpParser::Stackalloc_initializerContext * /*ctx*/) override { }

  virtual void enterRight_arrow(CSharpParser::Right_arrowContext * /*ctx*/) override { }
  virtual void exitRight_arrow(CSharpParser::Right_arrowContext * /*ctx*/) override { }

  virtual void enterRight_shift(CSharpParser::Right_shiftContext * /*ctx*/) override { }
  virtual void exitRight_shift(CSharpParser::Right_shiftContext * /*ctx*/) override { }

  virtual void enterRight_shift_assignment(CSharpParser::Right_shift_assignmentContext * /*ctx*/) override { }
  virtual void exitRight_shift_assignment(CSharpParser::Right_shift_assignmentContext * /*ctx*/) override { }

  virtual void enterLiteral(CSharpParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CSharpParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(CSharpParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(CSharpParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(CSharpParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(CSharpParser::String_literalContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string(CSharpParser::Interpolated_regular_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string(CSharpParser::Interpolated_regular_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string(CSharpParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string(CSharpParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string_part(CSharpParser::Interpolated_regular_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string_part(CSharpParser::Interpolated_regular_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string_part(CSharpParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string_part(CSharpParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_string_expression(CSharpParser::Interpolated_string_expressionContext * /*ctx*/) override { }
  virtual void exitInterpolated_string_expression(CSharpParser::Interpolated_string_expressionContext * /*ctx*/) override { }

  virtual void enterKeyword(CSharpParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(CSharpParser::KeywordContext * /*ctx*/) override { }

  virtual void enterClass_definition(CSharpParser::Class_definitionContext * /*ctx*/) override { }
  virtual void exitClass_definition(CSharpParser::Class_definitionContext * /*ctx*/) override { }

  virtual void enterStruct_definition(CSharpParser::Struct_definitionContext * /*ctx*/) override { }
  virtual void exitStruct_definition(CSharpParser::Struct_definitionContext * /*ctx*/) override { }

  virtual void enterInterface_definition(CSharpParser::Interface_definitionContext * /*ctx*/) override { }
  virtual void exitInterface_definition(CSharpParser::Interface_definitionContext * /*ctx*/) override { }

  virtual void enterEnum_definition(CSharpParser::Enum_definitionContext * /*ctx*/) override { }
  virtual void exitEnum_definition(CSharpParser::Enum_definitionContext * /*ctx*/) override { }

  virtual void enterDelegate_definition(CSharpParser::Delegate_definitionContext * /*ctx*/) override { }
  virtual void exitDelegate_definition(CSharpParser::Delegate_definitionContext * /*ctx*/) override { }

  virtual void enterEvent_declaration(CSharpParser::Event_declarationContext * /*ctx*/) override { }
  virtual void exitEvent_declaration(CSharpParser::Event_declarationContext * /*ctx*/) override { }

  virtual void enterField_declaration(CSharpParser::Field_declarationContext * /*ctx*/) override { }
  virtual void exitField_declaration(CSharpParser::Field_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_declaration(CSharpParser::Property_declarationContext * /*ctx*/) override { }
  virtual void exitProperty_declaration(CSharpParser::Property_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(CSharpParser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(CSharpParser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterIndexer_declaration(CSharpParser::Indexer_declarationContext * /*ctx*/) override { }
  virtual void exitIndexer_declaration(CSharpParser::Indexer_declarationContext * /*ctx*/) override { }

  virtual void enterDestructor_definition(CSharpParser::Destructor_definitionContext * /*ctx*/) override { }
  virtual void exitDestructor_definition(CSharpParser::Destructor_definitionContext * /*ctx*/) override { }

  virtual void enterConstructor_declaration(CSharpParser::Constructor_declarationContext * /*ctx*/) override { }
  virtual void exitConstructor_declaration(CSharpParser::Constructor_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_declaration(CSharpParser::Method_declarationContext * /*ctx*/) override { }
  virtual void exitMethod_declaration(CSharpParser::Method_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_member_name(CSharpParser::Method_member_nameContext * /*ctx*/) override { }
  virtual void exitMethod_member_name(CSharpParser::Method_member_nameContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(CSharpParser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(CSharpParser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterArg_declaration(CSharpParser::Arg_declarationContext * /*ctx*/) override { }
  virtual void exitArg_declaration(CSharpParser::Arg_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_invocation(CSharpParser::Method_invocationContext * /*ctx*/) override { }
  virtual void exitMethod_invocation(CSharpParser::Method_invocationContext * /*ctx*/) override { }

  virtual void enterObject_creation_expression(CSharpParser::Object_creation_expressionContext * /*ctx*/) override { }
  virtual void exitObject_creation_expression(CSharpParser::Object_creation_expressionContext * /*ctx*/) override { }

  virtual void enterIdentifier(CSharpParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(CSharpParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

