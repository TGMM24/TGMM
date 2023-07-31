
// Generated from myParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParserListener.h"


/**
 * This class provides an empty implementation of myParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myParserBaseListener : public myParserListener {
public:

  virtual void enterCompilation_unit(myParser::Compilation_unitContext * /*ctx*/) override { }
  virtual void exitCompilation_unit(myParser::Compilation_unitContext * /*ctx*/) override { }

  virtual void enterNamespace_or_type_name(myParser::Namespace_or_type_nameContext * /*ctx*/) override { }
  virtual void exitNamespace_or_type_name(myParser::Namespace_or_type_nameContext * /*ctx*/) override { }

  virtual void enterType_(myParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(myParser::Type_Context * /*ctx*/) override { }

  virtual void enterBase_type(myParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(myParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterTuple_type(myParser::Tuple_typeContext * /*ctx*/) override { }
  virtual void exitTuple_type(myParser::Tuple_typeContext * /*ctx*/) override { }

  virtual void enterTuple_element(myParser::Tuple_elementContext * /*ctx*/) override { }
  virtual void exitTuple_element(myParser::Tuple_elementContext * /*ctx*/) override { }

  virtual void enterSimple_type(myParser::Simple_typeContext * /*ctx*/) override { }
  virtual void exitSimple_type(myParser::Simple_typeContext * /*ctx*/) override { }

  virtual void enterNumeric_type(myParser::Numeric_typeContext * /*ctx*/) override { }
  virtual void exitNumeric_type(myParser::Numeric_typeContext * /*ctx*/) override { }

  virtual void enterIntegral_type(myParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(myParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterFloating_point_type(myParser::Floating_point_typeContext * /*ctx*/) override { }
  virtual void exitFloating_point_type(myParser::Floating_point_typeContext * /*ctx*/) override { }

  virtual void enterClass_type(myParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(myParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterType_argument_list(myParser::Type_argument_listContext * /*ctx*/) override { }
  virtual void exitType_argument_list(myParser::Type_argument_listContext * /*ctx*/) override { }

  virtual void enterArgument_list(myParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(myParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterArgument(myParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(myParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNon_assignment_expression(myParser::Non_assignment_expressionContext * /*ctx*/) override { }
  virtual void exitNon_assignment_expression(myParser::Non_assignment_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment(myParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(myParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(myParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(myParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(myParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(myParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterNull_coalescing_expression(myParser::Null_coalescing_expressionContext * /*ctx*/) override { }
  virtual void exitNull_coalescing_expression(myParser::Null_coalescing_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_or_expression(myParser::Conditional_or_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_or_expression(myParser::Conditional_or_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_and_expression(myParser::Conditional_and_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_and_expression(myParser::Conditional_and_expressionContext * /*ctx*/) override { }

  virtual void enterInclusive_or_expression(myParser::Inclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitInclusive_or_expression(myParser::Inclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterExclusive_or_expression(myParser::Exclusive_or_expressionContext * /*ctx*/) override { }
  virtual void exitExclusive_or_expression(myParser::Exclusive_or_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(myParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(myParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(myParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(myParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(myParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(myParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterShift_expression(myParser::Shift_expressionContext * /*ctx*/) override { }
  virtual void exitShift_expression(myParser::Shift_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(myParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(myParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(myParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(myParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression(myParser::Switch_expressionContext * /*ctx*/) override { }
  virtual void exitSwitch_expression(myParser::Switch_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arms(myParser::Switch_expression_armsContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arms(myParser::Switch_expression_armsContext * /*ctx*/) override { }

  virtual void enterSwitch_expression_arm(myParser::Switch_expression_armContext * /*ctx*/) override { }
  virtual void exitSwitch_expression_arm(myParser::Switch_expression_armContext * /*ctx*/) override { }

  virtual void enterRange_expression(myParser::Range_expressionContext * /*ctx*/) override { }
  virtual void exitRange_expression(myParser::Range_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(myParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(myParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(myParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(myParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleNameExpression(myParser::SimpleNameExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleNameExpression(myParser::SimpleNameExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesisExpressions(myParser::ParenthesisExpressionsContext * /*ctx*/) override { }
  virtual void exitParenthesisExpressions(myParser::ParenthesisExpressionsContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpression(myParser::MemberAccessExpressionContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpression(myParser::MemberAccessExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralAccessExpression(myParser::LiteralAccessExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralAccessExpression(myParser::LiteralAccessExpressionContext * /*ctx*/) override { }

  virtual void enterThisReferenceExpression(myParser::ThisReferenceExpressionContext * /*ctx*/) override { }
  virtual void exitThisReferenceExpression(myParser::ThisReferenceExpressionContext * /*ctx*/) override { }

  virtual void enterBaseAccessExpression(myParser::BaseAccessExpressionContext * /*ctx*/) override { }
  virtual void exitBaseAccessExpression(myParser::BaseAccessExpressionContext * /*ctx*/) override { }

  virtual void enterObjectCreationExpression(myParser::ObjectCreationExpressionContext * /*ctx*/) override { }
  virtual void exitObjectCreationExpression(myParser::ObjectCreationExpressionContext * /*ctx*/) override { }

  virtual void enterTupleExpression(myParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(myParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterCheckedExpression(myParser::CheckedExpressionContext * /*ctx*/) override { }
  virtual void exitCheckedExpression(myParser::CheckedExpressionContext * /*ctx*/) override { }

  virtual void enterUncheckedExpression(myParser::UncheckedExpressionContext * /*ctx*/) override { }
  virtual void exitUncheckedExpression(myParser::UncheckedExpressionContext * /*ctx*/) override { }

  virtual void enterDefaultValueExpression(myParser::DefaultValueExpressionContext * /*ctx*/) override { }
  virtual void exitDefaultValueExpression(myParser::DefaultValueExpressionContext * /*ctx*/) override { }

  virtual void enterAnonymousMethodExpression(myParser::AnonymousMethodExpressionContext * /*ctx*/) override { }
  virtual void exitAnonymousMethodExpression(myParser::AnonymousMethodExpressionContext * /*ctx*/) override { }

  virtual void enterSizeofExpression(myParser::SizeofExpressionContext * /*ctx*/) override { }
  virtual void exitSizeofExpression(myParser::SizeofExpressionContext * /*ctx*/) override { }

  virtual void enterNameofExpression(myParser::NameofExpressionContext * /*ctx*/) override { }
  virtual void exitNameofExpression(myParser::NameofExpressionContext * /*ctx*/) override { }

  virtual void enterThrowable_expression(myParser::Throwable_expressionContext * /*ctx*/) override { }
  virtual void exitThrowable_expression(myParser::Throwable_expressionContext * /*ctx*/) override { }

  virtual void enterThrow_expression(myParser::Throw_expressionContext * /*ctx*/) override { }
  virtual void exitThrow_expression(myParser::Throw_expressionContext * /*ctx*/) override { }

  virtual void enterMember_access(myParser::Member_accessContext * /*ctx*/) override { }
  virtual void exitMember_access(myParser::Member_accessContext * /*ctx*/) override { }

  virtual void enterBracket_expression(myParser::Bracket_expressionContext * /*ctx*/) override { }
  virtual void exitBracket_expression(myParser::Bracket_expressionContext * /*ctx*/) override { }

  virtual void enterIndexer_argument(myParser::Indexer_argumentContext * /*ctx*/) override { }
  virtual void exitIndexer_argument(myParser::Indexer_argumentContext * /*ctx*/) override { }

  virtual void enterPredefined_type(myParser::Predefined_typeContext * /*ctx*/) override { }
  virtual void exitPredefined_type(myParser::Predefined_typeContext * /*ctx*/) override { }

  virtual void enterExpression_list(myParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(myParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterObject_or_collection_initializer(myParser::Object_or_collection_initializerContext * /*ctx*/) override { }
  virtual void exitObject_or_collection_initializer(myParser::Object_or_collection_initializerContext * /*ctx*/) override { }

  virtual void enterObject_initializer(myParser::Object_initializerContext * /*ctx*/) override { }
  virtual void exitObject_initializer(myParser::Object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_initializer_list(myParser::Member_initializer_listContext * /*ctx*/) override { }
  virtual void exitMember_initializer_list(myParser::Member_initializer_listContext * /*ctx*/) override { }

  virtual void enterMember_initializer(myParser::Member_initializerContext * /*ctx*/) override { }
  virtual void exitMember_initializer(myParser::Member_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer_value(myParser::Initializer_valueContext * /*ctx*/) override { }
  virtual void exitInitializer_value(myParser::Initializer_valueContext * /*ctx*/) override { }

  virtual void enterCollection_initializer(myParser::Collection_initializerContext * /*ctx*/) override { }
  virtual void exitCollection_initializer(myParser::Collection_initializerContext * /*ctx*/) override { }

  virtual void enterElement_initializer(myParser::Element_initializerContext * /*ctx*/) override { }
  virtual void exitElement_initializer(myParser::Element_initializerContext * /*ctx*/) override { }

  virtual void enterAnonymous_object_initializer(myParser::Anonymous_object_initializerContext * /*ctx*/) override { }
  virtual void exitAnonymous_object_initializer(myParser::Anonymous_object_initializerContext * /*ctx*/) override { }

  virtual void enterMember_declarator_list(myParser::Member_declarator_listContext * /*ctx*/) override { }
  virtual void exitMember_declarator_list(myParser::Member_declarator_listContext * /*ctx*/) override { }

  virtual void enterMember_declarator(myParser::Member_declaratorContext * /*ctx*/) override { }
  virtual void exitMember_declarator(myParser::Member_declaratorContext * /*ctx*/) override { }

  virtual void enterUnbound_type_name(myParser::Unbound_type_nameContext * /*ctx*/) override { }
  virtual void exitUnbound_type_name(myParser::Unbound_type_nameContext * /*ctx*/) override { }

  virtual void enterGeneric_dimension_specifier(myParser::Generic_dimension_specifierContext * /*ctx*/) override { }
  virtual void exitGeneric_dimension_specifier(myParser::Generic_dimension_specifierContext * /*ctx*/) override { }

  virtual void enterIsType(myParser::IsTypeContext * /*ctx*/) override { }
  virtual void exitIsType(myParser::IsTypeContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArms(myParser::IsTypePatternArmsContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArms(myParser::IsTypePatternArmsContext * /*ctx*/) override { }

  virtual void enterIsTypePatternArm(myParser::IsTypePatternArmContext * /*ctx*/) override { }
  virtual void exitIsTypePatternArm(myParser::IsTypePatternArmContext * /*ctx*/) override { }

  virtual void enterLambda_expression(myParser::Lambda_expressionContext * /*ctx*/) override { }
  virtual void exitLambda_expression(myParser::Lambda_expressionContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_signature(myParser::Anonymous_function_signatureContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_signature(myParser::Anonymous_function_signatureContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter_list(myParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter_list(myParser::Explicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterExplicit_anonymous_function_parameter(myParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_anonymous_function_parameter(myParser::Explicit_anonymous_function_parameterContext * /*ctx*/) override { }

  virtual void enterImplicit_anonymous_function_parameter_list(myParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }
  virtual void exitImplicit_anonymous_function_parameter_list(myParser::Implicit_anonymous_function_parameter_listContext * /*ctx*/) override { }

  virtual void enterAnonymous_function_body(myParser::Anonymous_function_bodyContext * /*ctx*/) override { }
  virtual void exitAnonymous_function_body(myParser::Anonymous_function_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_expression(myParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(myParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterFrom_clause(myParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(myParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_body(myParser::Query_bodyContext * /*ctx*/) override { }
  virtual void exitQuery_body(myParser::Query_bodyContext * /*ctx*/) override { }

  virtual void enterQuery_body_clause(myParser::Query_body_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_body_clause(myParser::Query_body_clauseContext * /*ctx*/) override { }

  virtual void enterLet_clause(myParser::Let_clauseContext * /*ctx*/) override { }
  virtual void exitLet_clause(myParser::Let_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_clause(myParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(myParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterCombined_join_clause(myParser::Combined_join_clauseContext * /*ctx*/) override { }
  virtual void exitCombined_join_clause(myParser::Combined_join_clauseContext * /*ctx*/) override { }

  virtual void enterOrderby_clause(myParser::Orderby_clauseContext * /*ctx*/) override { }
  virtual void exitOrderby_clause(myParser::Orderby_clauseContext * /*ctx*/) override { }

  virtual void enterOrdering(myParser::OrderingContext * /*ctx*/) override { }
  virtual void exitOrdering(myParser::OrderingContext * /*ctx*/) override { }

  virtual void enterSelect_or_group_clause(myParser::Select_or_group_clauseContext * /*ctx*/) override { }
  virtual void exitSelect_or_group_clause(myParser::Select_or_group_clauseContext * /*ctx*/) override { }

  virtual void enterQuery_continuation(myParser::Query_continuationContext * /*ctx*/) override { }
  virtual void exitQuery_continuation(myParser::Query_continuationContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(myParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(myParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocal_function_declaration(myParser::Local_function_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_function_declaration(myParser::Local_function_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_function_header(myParser::Local_function_headerContext * /*ctx*/) override { }
  virtual void exitLocal_function_header(myParser::Local_function_headerContext * /*ctx*/) override { }

  virtual void enterLocal_function_modifiers(myParser::Local_function_modifiersContext * /*ctx*/) override { }
  virtual void exitLocal_function_modifiers(myParser::Local_function_modifiersContext * /*ctx*/) override { }

  virtual void enterLocal_function_body(myParser::Local_function_bodyContext * /*ctx*/) override { }
  virtual void exitLocal_function_body(myParser::Local_function_bodyContext * /*ctx*/) override { }

  virtual void enterLabeled_Statement(myParser::Labeled_StatementContext * /*ctx*/) override { }
  virtual void exitLabeled_Statement(myParser::Labeled_StatementContext * /*ctx*/) override { }

  virtual void enterEmbedded_statement(myParser::Embedded_statementContext * /*ctx*/) override { }
  virtual void exitEmbedded_statement(myParser::Embedded_statementContext * /*ctx*/) override { }

  virtual void enterTheEmptyStatement(myParser::TheEmptyStatementContext * /*ctx*/) override { }
  virtual void exitTheEmptyStatement(myParser::TheEmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(myParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(myParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(myParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(myParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(myParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(myParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForeachStatement(myParser::ForeachStatementContext * /*ctx*/) override { }
  virtual void exitForeachStatement(myParser::ForeachStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(myParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(myParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(myParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(myParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCheckedStatement(myParser::CheckedStatementContext * /*ctx*/) override { }
  virtual void exitCheckedStatement(myParser::CheckedStatementContext * /*ctx*/) override { }

  virtual void enterUncheckedStatement(myParser::UncheckedStatementContext * /*ctx*/) override { }
  virtual void exitUncheckedStatement(myParser::UncheckedStatementContext * /*ctx*/) override { }

  virtual void enterLockStatement(myParser::LockStatementContext * /*ctx*/) override { }
  virtual void exitLockStatement(myParser::LockStatementContext * /*ctx*/) override { }

  virtual void enterUsingStatement(myParser::UsingStatementContext * /*ctx*/) override { }
  virtual void exitUsingStatement(myParser::UsingStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterUnsafeStatement(myParser::UnsafeStatementContext * /*ctx*/) override { }
  virtual void exitUnsafeStatement(myParser::UnsafeStatementContext * /*ctx*/) override { }

  virtual void enterFixedStatement(myParser::FixedStatementContext * /*ctx*/) override { }
  virtual void exitFixedStatement(myParser::FixedStatementContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declaration(myParser::Local_variable_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declaration(myParser::Local_variable_declarationContext * /*ctx*/) override { }

  virtual void enterLocal_variable_type(myParser::Local_variable_typeContext * /*ctx*/) override { }
  virtual void exitLocal_variable_type(myParser::Local_variable_typeContext * /*ctx*/) override { }

  virtual void enterLocal_variable_declarator(myParser::Local_variable_declaratorContext * /*ctx*/) override { }
  virtual void exitLocal_variable_declarator(myParser::Local_variable_declaratorContext * /*ctx*/) override { }

  virtual void enterLocal_variable_initializer(myParser::Local_variable_initializerContext * /*ctx*/) override { }
  virtual void exitLocal_variable_initializer(myParser::Local_variable_initializerContext * /*ctx*/) override { }

  virtual void enterLocal_constant_declaration(myParser::Local_constant_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_constant_declaration(myParser::Local_constant_declarationContext * /*ctx*/) override { }

  virtual void enterIf_body(myParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(myParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterSwitch_section(myParser::Switch_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_section(myParser::Switch_sectionContext * /*ctx*/) override { }

  virtual void enterSwitch_label(myParser::Switch_labelContext * /*ctx*/) override { }
  virtual void exitSwitch_label(myParser::Switch_labelContext * /*ctx*/) override { }

  virtual void enterCase_guard(myParser::Case_guardContext * /*ctx*/) override { }
  virtual void exitCase_guard(myParser::Case_guardContext * /*ctx*/) override { }

  virtual void enterStatement_list(myParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(myParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterFor_initializer(myParser::For_initializerContext * /*ctx*/) override { }
  virtual void exitFor_initializer(myParser::For_initializerContext * /*ctx*/) override { }

  virtual void enterFor_iterator(myParser::For_iteratorContext * /*ctx*/) override { }
  virtual void exitFor_iterator(myParser::For_iteratorContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(myParser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(myParser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterSpecific_catch_clause(myParser::Specific_catch_clauseContext * /*ctx*/) override { }
  virtual void exitSpecific_catch_clause(myParser::Specific_catch_clauseContext * /*ctx*/) override { }

  virtual void enterGeneral_catch_clause(myParser::General_catch_clauseContext * /*ctx*/) override { }
  virtual void exitGeneral_catch_clause(myParser::General_catch_clauseContext * /*ctx*/) override { }

  virtual void enterException_filter(myParser::Exception_filterContext * /*ctx*/) override { }
  virtual void exitException_filter(myParser::Exception_filterContext * /*ctx*/) override { }

  virtual void enterFinally_clause(myParser::Finally_clauseContext * /*ctx*/) override { }
  virtual void exitFinally_clause(myParser::Finally_clauseContext * /*ctx*/) override { }

  virtual void enterResource_acquisition(myParser::Resource_acquisitionContext * /*ctx*/) override { }
  virtual void exitResource_acquisition(myParser::Resource_acquisitionContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(myParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(myParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_identifier(myParser::Qualified_identifierContext * /*ctx*/) override { }
  virtual void exitQualified_identifier(myParser::Qualified_identifierContext * /*ctx*/) override { }

  virtual void enterNamespace_body(myParser::Namespace_bodyContext * /*ctx*/) override { }
  virtual void exitNamespace_body(myParser::Namespace_bodyContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directives(myParser::Extern_alias_directivesContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directives(myParser::Extern_alias_directivesContext * /*ctx*/) override { }

  virtual void enterExtern_alias_directive(myParser::Extern_alias_directiveContext * /*ctx*/) override { }
  virtual void exitExtern_alias_directive(myParser::Extern_alias_directiveContext * /*ctx*/) override { }

  virtual void enterUsing_directives(myParser::Using_directivesContext * /*ctx*/) override { }
  virtual void exitUsing_directives(myParser::Using_directivesContext * /*ctx*/) override { }

  virtual void enterUsingAliasDirective(myParser::UsingAliasDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingAliasDirective(myParser::UsingAliasDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingNamespaceDirective(myParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingNamespaceDirective(myParser::UsingNamespaceDirectiveContext * /*ctx*/) override { }

  virtual void enterUsingStaticDirective(myParser::UsingStaticDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingStaticDirective(myParser::UsingStaticDirectiveContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declarations(myParser::Namespace_member_declarationsContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declarations(myParser::Namespace_member_declarationsContext * /*ctx*/) override { }

  virtual void enterNamespace_member_declaration(myParser::Namespace_member_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_member_declaration(myParser::Namespace_member_declarationContext * /*ctx*/) override { }

  virtual void enterType_declaration(myParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(myParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterQualified_alias_member(myParser::Qualified_alias_memberContext * /*ctx*/) override { }
  virtual void exitQualified_alias_member(myParser::Qualified_alias_memberContext * /*ctx*/) override { }

  virtual void enterType_parameter_list(myParser::Type_parameter_listContext * /*ctx*/) override { }
  virtual void exitType_parameter_list(myParser::Type_parameter_listContext * /*ctx*/) override { }

  virtual void enterType_parameter(myParser::Type_parameterContext * /*ctx*/) override { }
  virtual void exitType_parameter(myParser::Type_parameterContext * /*ctx*/) override { }

  virtual void enterClass_base(myParser::Class_baseContext * /*ctx*/) override { }
  virtual void exitClass_base(myParser::Class_baseContext * /*ctx*/) override { }

  virtual void enterInterface_type_list(myParser::Interface_type_listContext * /*ctx*/) override { }
  virtual void exitInterface_type_list(myParser::Interface_type_listContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clauses(myParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clauses(myParser::Type_parameter_constraints_clausesContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints_clause(myParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints_clause(myParser::Type_parameter_constraints_clauseContext * /*ctx*/) override { }

  virtual void enterType_parameter_constraints(myParser::Type_parameter_constraintsContext * /*ctx*/) override { }
  virtual void exitType_parameter_constraints(myParser::Type_parameter_constraintsContext * /*ctx*/) override { }

  virtual void enterPrimary_constraint(myParser::Primary_constraintContext * /*ctx*/) override { }
  virtual void exitPrimary_constraint(myParser::Primary_constraintContext * /*ctx*/) override { }

  virtual void enterSecondary_constraints(myParser::Secondary_constraintsContext * /*ctx*/) override { }
  virtual void exitSecondary_constraints(myParser::Secondary_constraintsContext * /*ctx*/) override { }

  virtual void enterConstructor_constraint(myParser::Constructor_constraintContext * /*ctx*/) override { }
  virtual void exitConstructor_constraint(myParser::Constructor_constraintContext * /*ctx*/) override { }

  virtual void enterClass_body(myParser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(myParser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_member_declarations(myParser::Class_member_declarationsContext * /*ctx*/) override { }
  virtual void exitClass_member_declarations(myParser::Class_member_declarationsContext * /*ctx*/) override { }

  virtual void enterClass_member_declaration(myParser::Class_member_declarationContext * /*ctx*/) override { }
  virtual void exitClass_member_declaration(myParser::Class_member_declarationContext * /*ctx*/) override { }

  virtual void enterAll_member_modifiers(myParser::All_member_modifiersContext * /*ctx*/) override { }
  virtual void exitAll_member_modifiers(myParser::All_member_modifiersContext * /*ctx*/) override { }

  virtual void enterAll_member_modifier(myParser::All_member_modifierContext * /*ctx*/) override { }
  virtual void exitAll_member_modifier(myParser::All_member_modifierContext * /*ctx*/) override { }

  virtual void enterCommon_member_declaration(myParser::Common_member_declarationContext * /*ctx*/) override { }
  virtual void exitCommon_member_declaration(myParser::Common_member_declarationContext * /*ctx*/) override { }

  virtual void enterTyped_member_declaration(myParser::Typed_member_declarationContext * /*ctx*/) override { }
  virtual void exitTyped_member_declaration(myParser::Typed_member_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declarators(myParser::Constant_declaratorsContext * /*ctx*/) override { }
  virtual void exitConstant_declarators(myParser::Constant_declaratorsContext * /*ctx*/) override { }

  virtual void enterConstant_declarator(myParser::Constant_declaratorContext * /*ctx*/) override { }
  virtual void exitConstant_declarator(myParser::Constant_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_declarators(myParser::Variable_declaratorsContext * /*ctx*/) override { }
  virtual void exitVariable_declarators(myParser::Variable_declaratorsContext * /*ctx*/) override { }

  virtual void enterVariable_declarator(myParser::Variable_declaratorContext * /*ctx*/) override { }
  virtual void exitVariable_declarator(myParser::Variable_declaratorContext * /*ctx*/) override { }

  virtual void enterVariable_initializer(myParser::Variable_initializerContext * /*ctx*/) override { }
  virtual void exitVariable_initializer(myParser::Variable_initializerContext * /*ctx*/) override { }

  virtual void enterReturn_type(myParser::Return_typeContext * /*ctx*/) override { }
  virtual void exitReturn_type(myParser::Return_typeContext * /*ctx*/) override { }

  virtual void enterMember_name(myParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(myParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterMethod_body(myParser::Method_bodyContext * /*ctx*/) override { }
  virtual void exitMethod_body(myParser::Method_bodyContext * /*ctx*/) override { }

  virtual void enterFormal_parameter_list(myParser::Formal_parameter_listContext * /*ctx*/) override { }
  virtual void exitFormal_parameter_list(myParser::Formal_parameter_listContext * /*ctx*/) override { }

  virtual void enterFixed_parameters(myParser::Fixed_parametersContext * /*ctx*/) override { }
  virtual void exitFixed_parameters(myParser::Fixed_parametersContext * /*ctx*/) override { }

  virtual void enterFixed_parameter(myParser::Fixed_parameterContext * /*ctx*/) override { }
  virtual void exitFixed_parameter(myParser::Fixed_parameterContext * /*ctx*/) override { }

  virtual void enterParameter_modifier(myParser::Parameter_modifierContext * /*ctx*/) override { }
  virtual void exitParameter_modifier(myParser::Parameter_modifierContext * /*ctx*/) override { }

  virtual void enterParameter_array(myParser::Parameter_arrayContext * /*ctx*/) override { }
  virtual void exitParameter_array(myParser::Parameter_arrayContext * /*ctx*/) override { }

  virtual void enterAccessor_declarations(myParser::Accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitAccessor_declarations(myParser::Accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterGet_accessor_declaration(myParser::Get_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitGet_accessor_declaration(myParser::Get_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterSet_accessor_declaration(myParser::Set_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitSet_accessor_declaration(myParser::Set_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterAccessor_modifier(myParser::Accessor_modifierContext * /*ctx*/) override { }
  virtual void exitAccessor_modifier(myParser::Accessor_modifierContext * /*ctx*/) override { }

  virtual void enterAccessor_body(myParser::Accessor_bodyContext * /*ctx*/) override { }
  virtual void exitAccessor_body(myParser::Accessor_bodyContext * /*ctx*/) override { }

  virtual void enterEvent_accessor_declarations(myParser::Event_accessor_declarationsContext * /*ctx*/) override { }
  virtual void exitEvent_accessor_declarations(myParser::Event_accessor_declarationsContext * /*ctx*/) override { }

  virtual void enterAdd_accessor_declaration(myParser::Add_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitAdd_accessor_declaration(myParser::Add_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterRemove_accessor_declaration(myParser::Remove_accessor_declarationContext * /*ctx*/) override { }
  virtual void exitRemove_accessor_declaration(myParser::Remove_accessor_declarationContext * /*ctx*/) override { }

  virtual void enterOverloadable_operator(myParser::Overloadable_operatorContext * /*ctx*/) override { }
  virtual void exitOverloadable_operator(myParser::Overloadable_operatorContext * /*ctx*/) override { }

  virtual void enterConversion_operator_declarator(myParser::Conversion_operator_declaratorContext * /*ctx*/) override { }
  virtual void exitConversion_operator_declarator(myParser::Conversion_operator_declaratorContext * /*ctx*/) override { }

  virtual void enterConstructor_initializer(myParser::Constructor_initializerContext * /*ctx*/) override { }
  virtual void exitConstructor_initializer(myParser::Constructor_initializerContext * /*ctx*/) override { }

  virtual void enterBody(myParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(myParser::BodyContext * /*ctx*/) override { }

  virtual void enterStruct_interfaces(myParser::Struct_interfacesContext * /*ctx*/) override { }
  virtual void exitStruct_interfaces(myParser::Struct_interfacesContext * /*ctx*/) override { }

  virtual void enterStruct_body(myParser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(myParser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_member_declaration(myParser::Struct_member_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_member_declaration(myParser::Struct_member_declarationContext * /*ctx*/) override { }

  virtual void enterArray_type(myParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(myParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterRank_specifier(myParser::Rank_specifierContext * /*ctx*/) override { }
  virtual void exitRank_specifier(myParser::Rank_specifierContext * /*ctx*/) override { }

  virtual void enterArray_initializer(myParser::Array_initializerContext * /*ctx*/) override { }
  virtual void exitArray_initializer(myParser::Array_initializerContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter_list(myParser::Variant_type_parameter_listContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter_list(myParser::Variant_type_parameter_listContext * /*ctx*/) override { }

  virtual void enterVariant_type_parameter(myParser::Variant_type_parameterContext * /*ctx*/) override { }
  virtual void exitVariant_type_parameter(myParser::Variant_type_parameterContext * /*ctx*/) override { }

  virtual void enterVariance_annotation(myParser::Variance_annotationContext * /*ctx*/) override { }
  virtual void exitVariance_annotation(myParser::Variance_annotationContext * /*ctx*/) override { }

  virtual void enterInterface_base(myParser::Interface_baseContext * /*ctx*/) override { }
  virtual void exitInterface_base(myParser::Interface_baseContext * /*ctx*/) override { }

  virtual void enterInterface_body(myParser::Interface_bodyContext * /*ctx*/) override { }
  virtual void exitInterface_body(myParser::Interface_bodyContext * /*ctx*/) override { }

  virtual void enterInterface_member_declaration(myParser::Interface_member_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_member_declaration(myParser::Interface_member_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_accessors(myParser::Interface_accessorsContext * /*ctx*/) override { }
  virtual void exitInterface_accessors(myParser::Interface_accessorsContext * /*ctx*/) override { }

  virtual void enterEnum_base(myParser::Enum_baseContext * /*ctx*/) override { }
  virtual void exitEnum_base(myParser::Enum_baseContext * /*ctx*/) override { }

  virtual void enterEnum_body(myParser::Enum_bodyContext * /*ctx*/) override { }
  virtual void exitEnum_body(myParser::Enum_bodyContext * /*ctx*/) override { }

  virtual void enterEnum_member_declaration(myParser::Enum_member_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_member_declaration(myParser::Enum_member_declarationContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_section(myParser::Global_attribute_sectionContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_section(myParser::Global_attribute_sectionContext * /*ctx*/) override { }

  virtual void enterGlobal_attribute_target(myParser::Global_attribute_targetContext * /*ctx*/) override { }
  virtual void exitGlobal_attribute_target(myParser::Global_attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttributes(myParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(myParser::AttributesContext * /*ctx*/) override { }

  virtual void enterAttribute_section(myParser::Attribute_sectionContext * /*ctx*/) override { }
  virtual void exitAttribute_section(myParser::Attribute_sectionContext * /*ctx*/) override { }

  virtual void enterAttribute_target(myParser::Attribute_targetContext * /*ctx*/) override { }
  virtual void exitAttribute_target(myParser::Attribute_targetContext * /*ctx*/) override { }

  virtual void enterAttribute_list(myParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(myParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterAttribute(myParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(myParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_argument(myParser::Attribute_argumentContext * /*ctx*/) override { }
  virtual void exitAttribute_argument(myParser::Attribute_argumentContext * /*ctx*/) override { }

  virtual void enterPointer_type(myParser::Pointer_typeContext * /*ctx*/) override { }
  virtual void exitPointer_type(myParser::Pointer_typeContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarators(myParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarators(myParser::Fixed_pointer_declaratorsContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_declarator(myParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_declarator(myParser::Fixed_pointer_declaratorContext * /*ctx*/) override { }

  virtual void enterFixed_pointer_initializer(myParser::Fixed_pointer_initializerContext * /*ctx*/) override { }
  virtual void exitFixed_pointer_initializer(myParser::Fixed_pointer_initializerContext * /*ctx*/) override { }

  virtual void enterFixed_size_buffer_declarator(myParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }
  virtual void exitFixed_size_buffer_declarator(myParser::Fixed_size_buffer_declaratorContext * /*ctx*/) override { }

  virtual void enterStackalloc_initializer(myParser::Stackalloc_initializerContext * /*ctx*/) override { }
  virtual void exitStackalloc_initializer(myParser::Stackalloc_initializerContext * /*ctx*/) override { }

  virtual void enterRight_arrow(myParser::Right_arrowContext * /*ctx*/) override { }
  virtual void exitRight_arrow(myParser::Right_arrowContext * /*ctx*/) override { }

  virtual void enterRight_shift(myParser::Right_shiftContext * /*ctx*/) override { }
  virtual void exitRight_shift(myParser::Right_shiftContext * /*ctx*/) override { }

  virtual void enterRight_shift_assignment(myParser::Right_shift_assignmentContext * /*ctx*/) override { }
  virtual void exitRight_shift_assignment(myParser::Right_shift_assignmentContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(myParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(myParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(myParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(myParser::String_literalContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string(myParser::Interpolated_regular_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string(myParser::Interpolated_regular_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string(myParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string(myParser::Interpolated_verbatium_stringContext * /*ctx*/) override { }

  virtual void enterInterpolated_regular_string_part(myParser::Interpolated_regular_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_regular_string_part(myParser::Interpolated_regular_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_verbatium_string_part(myParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }
  virtual void exitInterpolated_verbatium_string_part(myParser::Interpolated_verbatium_string_partContext * /*ctx*/) override { }

  virtual void enterInterpolated_string_expression(myParser::Interpolated_string_expressionContext * /*ctx*/) override { }
  virtual void exitInterpolated_string_expression(myParser::Interpolated_string_expressionContext * /*ctx*/) override { }

  virtual void enterKeyword(myParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(myParser::KeywordContext * /*ctx*/) override { }

  virtual void enterClass_definition(myParser::Class_definitionContext * /*ctx*/) override { }
  virtual void exitClass_definition(myParser::Class_definitionContext * /*ctx*/) override { }

  virtual void enterStruct_definition(myParser::Struct_definitionContext * /*ctx*/) override { }
  virtual void exitStruct_definition(myParser::Struct_definitionContext * /*ctx*/) override { }

  virtual void enterInterface_definition(myParser::Interface_definitionContext * /*ctx*/) override { }
  virtual void exitInterface_definition(myParser::Interface_definitionContext * /*ctx*/) override { }

  virtual void enterEnum_definition(myParser::Enum_definitionContext * /*ctx*/) override { }
  virtual void exitEnum_definition(myParser::Enum_definitionContext * /*ctx*/) override { }

  virtual void enterDelegate_definition(myParser::Delegate_definitionContext * /*ctx*/) override { }
  virtual void exitDelegate_definition(myParser::Delegate_definitionContext * /*ctx*/) override { }

  virtual void enterEvent_declaration(myParser::Event_declarationContext * /*ctx*/) override { }
  virtual void exitEvent_declaration(myParser::Event_declarationContext * /*ctx*/) override { }

  virtual void enterField_declaration(myParser::Field_declarationContext * /*ctx*/) override { }
  virtual void exitField_declaration(myParser::Field_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_declaration(myParser::Property_declarationContext * /*ctx*/) override { }
  virtual void exitProperty_declaration(myParser::Property_declarationContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(myParser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(myParser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterIndexer_declaration(myParser::Indexer_declarationContext * /*ctx*/) override { }
  virtual void exitIndexer_declaration(myParser::Indexer_declarationContext * /*ctx*/) override { }

  virtual void enterDestructor_definition(myParser::Destructor_definitionContext * /*ctx*/) override { }
  virtual void exitDestructor_definition(myParser::Destructor_definitionContext * /*ctx*/) override { }

  virtual void enterConstructor_declaration(myParser::Constructor_declarationContext * /*ctx*/) override { }
  virtual void exitConstructor_declaration(myParser::Constructor_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_declaration(myParser::Method_declarationContext * /*ctx*/) override { }
  virtual void exitMethod_declaration(myParser::Method_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_member_name(myParser::Method_member_nameContext * /*ctx*/) override { }
  virtual void exitMethod_member_name(myParser::Method_member_nameContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(myParser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(myParser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterArg_declaration(myParser::Arg_declarationContext * /*ctx*/) override { }
  virtual void exitArg_declaration(myParser::Arg_declarationContext * /*ctx*/) override { }

  virtual void enterMethod_invocation(myParser::Method_invocationContext * /*ctx*/) override { }
  virtual void exitMethod_invocation(myParser::Method_invocationContext * /*ctx*/) override { }

  virtual void enterObject_creation_expression(myParser::Object_creation_expressionContext * /*ctx*/) override { }
  virtual void exitObject_creation_expression(myParser::Object_creation_expressionContext * /*ctx*/) override { }

  virtual void enterIdentifier(myParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(myParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

