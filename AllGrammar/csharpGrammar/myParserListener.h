
// Generated from myParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilation_unit(myParser::Compilation_unitContext *ctx) = 0;
  virtual void exitCompilation_unit(myParser::Compilation_unitContext *ctx) = 0;

  virtual void enterNamespace_or_type_name(myParser::Namespace_or_type_nameContext *ctx) = 0;
  virtual void exitNamespace_or_type_name(myParser::Namespace_or_type_nameContext *ctx) = 0;

  virtual void enterType_(myParser::Type_Context *ctx) = 0;
  virtual void exitType_(myParser::Type_Context *ctx) = 0;

  virtual void enterBase_type(myParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(myParser::Base_typeContext *ctx) = 0;

  virtual void enterTuple_type(myParser::Tuple_typeContext *ctx) = 0;
  virtual void exitTuple_type(myParser::Tuple_typeContext *ctx) = 0;

  virtual void enterTuple_element(myParser::Tuple_elementContext *ctx) = 0;
  virtual void exitTuple_element(myParser::Tuple_elementContext *ctx) = 0;

  virtual void enterSimple_type(myParser::Simple_typeContext *ctx) = 0;
  virtual void exitSimple_type(myParser::Simple_typeContext *ctx) = 0;

  virtual void enterNumeric_type(myParser::Numeric_typeContext *ctx) = 0;
  virtual void exitNumeric_type(myParser::Numeric_typeContext *ctx) = 0;

  virtual void enterIntegral_type(myParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(myParser::Integral_typeContext *ctx) = 0;

  virtual void enterFloating_point_type(myParser::Floating_point_typeContext *ctx) = 0;
  virtual void exitFloating_point_type(myParser::Floating_point_typeContext *ctx) = 0;

  virtual void enterClass_type(myParser::Class_typeContext *ctx) = 0;
  virtual void exitClass_type(myParser::Class_typeContext *ctx) = 0;

  virtual void enterType_argument_list(myParser::Type_argument_listContext *ctx) = 0;
  virtual void exitType_argument_list(myParser::Type_argument_listContext *ctx) = 0;

  virtual void enterArgument_list(myParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(myParser::Argument_listContext *ctx) = 0;

  virtual void enterArgument(myParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(myParser::ArgumentContext *ctx) = 0;

  virtual void enterExpression(myParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(myParser::ExpressionContext *ctx) = 0;

  virtual void enterNon_assignment_expression(myParser::Non_assignment_expressionContext *ctx) = 0;
  virtual void exitNon_assignment_expression(myParser::Non_assignment_expressionContext *ctx) = 0;

  virtual void enterAssignment(myParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(myParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignment_operator(myParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(myParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(myParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(myParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterNull_coalescing_expression(myParser::Null_coalescing_expressionContext *ctx) = 0;
  virtual void exitNull_coalescing_expression(myParser::Null_coalescing_expressionContext *ctx) = 0;

  virtual void enterConditional_or_expression(myParser::Conditional_or_expressionContext *ctx) = 0;
  virtual void exitConditional_or_expression(myParser::Conditional_or_expressionContext *ctx) = 0;

  virtual void enterConditional_and_expression(myParser::Conditional_and_expressionContext *ctx) = 0;
  virtual void exitConditional_and_expression(myParser::Conditional_and_expressionContext *ctx) = 0;

  virtual void enterInclusive_or_expression(myParser::Inclusive_or_expressionContext *ctx) = 0;
  virtual void exitInclusive_or_expression(myParser::Inclusive_or_expressionContext *ctx) = 0;

  virtual void enterExclusive_or_expression(myParser::Exclusive_or_expressionContext *ctx) = 0;
  virtual void exitExclusive_or_expression(myParser::Exclusive_or_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(myParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(myParser::And_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(myParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(myParser::Equality_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(myParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(myParser::Relational_expressionContext *ctx) = 0;

  virtual void enterShift_expression(myParser::Shift_expressionContext *ctx) = 0;
  virtual void exitShift_expression(myParser::Shift_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(myParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(myParser::Additive_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_expression(myParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(myParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression(myParser::Switch_expressionContext *ctx) = 0;
  virtual void exitSwitch_expression(myParser::Switch_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression_arms(myParser::Switch_expression_armsContext *ctx) = 0;
  virtual void exitSwitch_expression_arms(myParser::Switch_expression_armsContext *ctx) = 0;

  virtual void enterSwitch_expression_arm(myParser::Switch_expression_armContext *ctx) = 0;
  virtual void exitSwitch_expression_arm(myParser::Switch_expression_armContext *ctx) = 0;

  virtual void enterRange_expression(myParser::Range_expressionContext *ctx) = 0;
  virtual void exitRange_expression(myParser::Range_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(myParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(myParser::Unary_expressionContext *ctx) = 0;

  virtual void enterPrimary_expression(myParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(myParser::Primary_expressionContext *ctx) = 0;

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterSimpleNameExpression(myParser::SimpleNameExpressionContext *ctx) = 0;
  virtual void exitSimpleNameExpression(myParser::SimpleNameExpressionContext *ctx) = 0;

  virtual void enterParenthesisExpressions(myParser::ParenthesisExpressionsContext *ctx) = 0;
  virtual void exitParenthesisExpressions(myParser::ParenthesisExpressionsContext *ctx) = 0;

  virtual void enterMemberAccessExpression(myParser::MemberAccessExpressionContext *ctx) = 0;
  virtual void exitMemberAccessExpression(myParser::MemberAccessExpressionContext *ctx) = 0;

  virtual void enterLiteralAccessExpression(myParser::LiteralAccessExpressionContext *ctx) = 0;
  virtual void exitLiteralAccessExpression(myParser::LiteralAccessExpressionContext *ctx) = 0;

  virtual void enterThisReferenceExpression(myParser::ThisReferenceExpressionContext *ctx) = 0;
  virtual void exitThisReferenceExpression(myParser::ThisReferenceExpressionContext *ctx) = 0;

  virtual void enterBaseAccessExpression(myParser::BaseAccessExpressionContext *ctx) = 0;
  virtual void exitBaseAccessExpression(myParser::BaseAccessExpressionContext *ctx) = 0;

  virtual void enterObjectCreationExpression(myParser::ObjectCreationExpressionContext *ctx) = 0;
  virtual void exitObjectCreationExpression(myParser::ObjectCreationExpressionContext *ctx) = 0;

  virtual void enterTupleExpression(myParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(myParser::TupleExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterCheckedExpression(myParser::CheckedExpressionContext *ctx) = 0;
  virtual void exitCheckedExpression(myParser::CheckedExpressionContext *ctx) = 0;

  virtual void enterUncheckedExpression(myParser::UncheckedExpressionContext *ctx) = 0;
  virtual void exitUncheckedExpression(myParser::UncheckedExpressionContext *ctx) = 0;

  virtual void enterDefaultValueExpression(myParser::DefaultValueExpressionContext *ctx) = 0;
  virtual void exitDefaultValueExpression(myParser::DefaultValueExpressionContext *ctx) = 0;

  virtual void enterAnonymousMethodExpression(myParser::AnonymousMethodExpressionContext *ctx) = 0;
  virtual void exitAnonymousMethodExpression(myParser::AnonymousMethodExpressionContext *ctx) = 0;

  virtual void enterSizeofExpression(myParser::SizeofExpressionContext *ctx) = 0;
  virtual void exitSizeofExpression(myParser::SizeofExpressionContext *ctx) = 0;

  virtual void enterNameofExpression(myParser::NameofExpressionContext *ctx) = 0;
  virtual void exitNameofExpression(myParser::NameofExpressionContext *ctx) = 0;

  virtual void enterThrowable_expression(myParser::Throwable_expressionContext *ctx) = 0;
  virtual void exitThrowable_expression(myParser::Throwable_expressionContext *ctx) = 0;

  virtual void enterThrow_expression(myParser::Throw_expressionContext *ctx) = 0;
  virtual void exitThrow_expression(myParser::Throw_expressionContext *ctx) = 0;

  virtual void enterMember_access(myParser::Member_accessContext *ctx) = 0;
  virtual void exitMember_access(myParser::Member_accessContext *ctx) = 0;

  virtual void enterBracket_expression(myParser::Bracket_expressionContext *ctx) = 0;
  virtual void exitBracket_expression(myParser::Bracket_expressionContext *ctx) = 0;

  virtual void enterIndexer_argument(myParser::Indexer_argumentContext *ctx) = 0;
  virtual void exitIndexer_argument(myParser::Indexer_argumentContext *ctx) = 0;

  virtual void enterPredefined_type(myParser::Predefined_typeContext *ctx) = 0;
  virtual void exitPredefined_type(myParser::Predefined_typeContext *ctx) = 0;

  virtual void enterExpression_list(myParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(myParser::Expression_listContext *ctx) = 0;

  virtual void enterObject_or_collection_initializer(myParser::Object_or_collection_initializerContext *ctx) = 0;
  virtual void exitObject_or_collection_initializer(myParser::Object_or_collection_initializerContext *ctx) = 0;

  virtual void enterObject_initializer(myParser::Object_initializerContext *ctx) = 0;
  virtual void exitObject_initializer(myParser::Object_initializerContext *ctx) = 0;

  virtual void enterMember_initializer_list(myParser::Member_initializer_listContext *ctx) = 0;
  virtual void exitMember_initializer_list(myParser::Member_initializer_listContext *ctx) = 0;

  virtual void enterMember_initializer(myParser::Member_initializerContext *ctx) = 0;
  virtual void exitMember_initializer(myParser::Member_initializerContext *ctx) = 0;

  virtual void enterInitializer_value(myParser::Initializer_valueContext *ctx) = 0;
  virtual void exitInitializer_value(myParser::Initializer_valueContext *ctx) = 0;

  virtual void enterCollection_initializer(myParser::Collection_initializerContext *ctx) = 0;
  virtual void exitCollection_initializer(myParser::Collection_initializerContext *ctx) = 0;

  virtual void enterElement_initializer(myParser::Element_initializerContext *ctx) = 0;
  virtual void exitElement_initializer(myParser::Element_initializerContext *ctx) = 0;

  virtual void enterAnonymous_object_initializer(myParser::Anonymous_object_initializerContext *ctx) = 0;
  virtual void exitAnonymous_object_initializer(myParser::Anonymous_object_initializerContext *ctx) = 0;

  virtual void enterMember_declarator_list(myParser::Member_declarator_listContext *ctx) = 0;
  virtual void exitMember_declarator_list(myParser::Member_declarator_listContext *ctx) = 0;

  virtual void enterMember_declarator(myParser::Member_declaratorContext *ctx) = 0;
  virtual void exitMember_declarator(myParser::Member_declaratorContext *ctx) = 0;

  virtual void enterUnbound_type_name(myParser::Unbound_type_nameContext *ctx) = 0;
  virtual void exitUnbound_type_name(myParser::Unbound_type_nameContext *ctx) = 0;

  virtual void enterGeneric_dimension_specifier(myParser::Generic_dimension_specifierContext *ctx) = 0;
  virtual void exitGeneric_dimension_specifier(myParser::Generic_dimension_specifierContext *ctx) = 0;

  virtual void enterIsType(myParser::IsTypeContext *ctx) = 0;
  virtual void exitIsType(myParser::IsTypeContext *ctx) = 0;

  virtual void enterIsTypePatternArms(myParser::IsTypePatternArmsContext *ctx) = 0;
  virtual void exitIsTypePatternArms(myParser::IsTypePatternArmsContext *ctx) = 0;

  virtual void enterIsTypePatternArm(myParser::IsTypePatternArmContext *ctx) = 0;
  virtual void exitIsTypePatternArm(myParser::IsTypePatternArmContext *ctx) = 0;

  virtual void enterLambda_expression(myParser::Lambda_expressionContext *ctx) = 0;
  virtual void exitLambda_expression(myParser::Lambda_expressionContext *ctx) = 0;

  virtual void enterAnonymous_function_signature(myParser::Anonymous_function_signatureContext *ctx) = 0;
  virtual void exitAnonymous_function_signature(myParser::Anonymous_function_signatureContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter_list(myParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter_list(myParser::Explicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterExplicit_anonymous_function_parameter(myParser::Explicit_anonymous_function_parameterContext *ctx) = 0;
  virtual void exitExplicit_anonymous_function_parameter(myParser::Explicit_anonymous_function_parameterContext *ctx) = 0;

  virtual void enterImplicit_anonymous_function_parameter_list(myParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;
  virtual void exitImplicit_anonymous_function_parameter_list(myParser::Implicit_anonymous_function_parameter_listContext *ctx) = 0;

  virtual void enterAnonymous_function_body(myParser::Anonymous_function_bodyContext *ctx) = 0;
  virtual void exitAnonymous_function_body(myParser::Anonymous_function_bodyContext *ctx) = 0;

  virtual void enterQuery_expression(myParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(myParser::Query_expressionContext *ctx) = 0;

  virtual void enterFrom_clause(myParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(myParser::From_clauseContext *ctx) = 0;

  virtual void enterQuery_body(myParser::Query_bodyContext *ctx) = 0;
  virtual void exitQuery_body(myParser::Query_bodyContext *ctx) = 0;

  virtual void enterQuery_body_clause(myParser::Query_body_clauseContext *ctx) = 0;
  virtual void exitQuery_body_clause(myParser::Query_body_clauseContext *ctx) = 0;

  virtual void enterLet_clause(myParser::Let_clauseContext *ctx) = 0;
  virtual void exitLet_clause(myParser::Let_clauseContext *ctx) = 0;

  virtual void enterWhere_clause(myParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(myParser::Where_clauseContext *ctx) = 0;

  virtual void enterCombined_join_clause(myParser::Combined_join_clauseContext *ctx) = 0;
  virtual void exitCombined_join_clause(myParser::Combined_join_clauseContext *ctx) = 0;

  virtual void enterOrderby_clause(myParser::Orderby_clauseContext *ctx) = 0;
  virtual void exitOrderby_clause(myParser::Orderby_clauseContext *ctx) = 0;

  virtual void enterOrdering(myParser::OrderingContext *ctx) = 0;
  virtual void exitOrdering(myParser::OrderingContext *ctx) = 0;

  virtual void enterSelect_or_group_clause(myParser::Select_or_group_clauseContext *ctx) = 0;
  virtual void exitSelect_or_group_clause(myParser::Select_or_group_clauseContext *ctx) = 0;

  virtual void enterQuery_continuation(myParser::Query_continuationContext *ctx) = 0;
  virtual void exitQuery_continuation(myParser::Query_continuationContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(myParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(myParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterLocal_function_declaration(myParser::Local_function_declarationContext *ctx) = 0;
  virtual void exitLocal_function_declaration(myParser::Local_function_declarationContext *ctx) = 0;

  virtual void enterLocal_function_header(myParser::Local_function_headerContext *ctx) = 0;
  virtual void exitLocal_function_header(myParser::Local_function_headerContext *ctx) = 0;

  virtual void enterLocal_function_modifiers(myParser::Local_function_modifiersContext *ctx) = 0;
  virtual void exitLocal_function_modifiers(myParser::Local_function_modifiersContext *ctx) = 0;

  virtual void enterLocal_function_body(myParser::Local_function_bodyContext *ctx) = 0;
  virtual void exitLocal_function_body(myParser::Local_function_bodyContext *ctx) = 0;

  virtual void enterLabeled_Statement(myParser::Labeled_StatementContext *ctx) = 0;
  virtual void exitLabeled_Statement(myParser::Labeled_StatementContext *ctx) = 0;

  virtual void enterEmbedded_statement(myParser::Embedded_statementContext *ctx) = 0;
  virtual void exitEmbedded_statement(myParser::Embedded_statementContext *ctx) = 0;

  virtual void enterTheEmptyStatement(myParser::TheEmptyStatementContext *ctx) = 0;
  virtual void exitTheEmptyStatement(myParser::TheEmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(myParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(myParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;

  virtual void enterWhileStatement(myParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(myParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoStatement(myParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(myParser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(myParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(myParser::ForStatementContext *ctx) = 0;

  virtual void enterForeachStatement(myParser::ForeachStatementContext *ctx) = 0;
  virtual void exitForeachStatement(myParser::ForeachStatementContext *ctx) = 0;

  virtual void enterBreakStatement(myParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(myParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(myParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(myParser::ContinueStatementContext *ctx) = 0;

  virtual void enterGotoStatement(myParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(myParser::GotoStatementContext *ctx) = 0;

  virtual void enterReturnStatement(myParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(myParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(myParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(myParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(myParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(myParser::TryStatementContext *ctx) = 0;

  virtual void enterCheckedStatement(myParser::CheckedStatementContext *ctx) = 0;
  virtual void exitCheckedStatement(myParser::CheckedStatementContext *ctx) = 0;

  virtual void enterUncheckedStatement(myParser::UncheckedStatementContext *ctx) = 0;
  virtual void exitUncheckedStatement(myParser::UncheckedStatementContext *ctx) = 0;

  virtual void enterLockStatement(myParser::LockStatementContext *ctx) = 0;
  virtual void exitLockStatement(myParser::LockStatementContext *ctx) = 0;

  virtual void enterUsingStatement(myParser::UsingStatementContext *ctx) = 0;
  virtual void exitUsingStatement(myParser::UsingStatementContext *ctx) = 0;

  virtual void enterYieldStatement(myParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(myParser::YieldStatementContext *ctx) = 0;

  virtual void enterUnsafeStatement(myParser::UnsafeStatementContext *ctx) = 0;
  virtual void exitUnsafeStatement(myParser::UnsafeStatementContext *ctx) = 0;

  virtual void enterFixedStatement(myParser::FixedStatementContext *ctx) = 0;
  virtual void exitFixedStatement(myParser::FixedStatementContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterLocal_variable_declaration(myParser::Local_variable_declarationContext *ctx) = 0;
  virtual void exitLocal_variable_declaration(myParser::Local_variable_declarationContext *ctx) = 0;

  virtual void enterLocal_variable_type(myParser::Local_variable_typeContext *ctx) = 0;
  virtual void exitLocal_variable_type(myParser::Local_variable_typeContext *ctx) = 0;

  virtual void enterLocal_variable_declarator(myParser::Local_variable_declaratorContext *ctx) = 0;
  virtual void exitLocal_variable_declarator(myParser::Local_variable_declaratorContext *ctx) = 0;

  virtual void enterLocal_variable_initializer(myParser::Local_variable_initializerContext *ctx) = 0;
  virtual void exitLocal_variable_initializer(myParser::Local_variable_initializerContext *ctx) = 0;

  virtual void enterLocal_constant_declaration(myParser::Local_constant_declarationContext *ctx) = 0;
  virtual void exitLocal_constant_declaration(myParser::Local_constant_declarationContext *ctx) = 0;

  virtual void enterIf_body(myParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(myParser::If_bodyContext *ctx) = 0;

  virtual void enterSwitch_section(myParser::Switch_sectionContext *ctx) = 0;
  virtual void exitSwitch_section(myParser::Switch_sectionContext *ctx) = 0;

  virtual void enterSwitch_label(myParser::Switch_labelContext *ctx) = 0;
  virtual void exitSwitch_label(myParser::Switch_labelContext *ctx) = 0;

  virtual void enterCase_guard(myParser::Case_guardContext *ctx) = 0;
  virtual void exitCase_guard(myParser::Case_guardContext *ctx) = 0;

  virtual void enterStatement_list(myParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(myParser::Statement_listContext *ctx) = 0;

  virtual void enterFor_initializer(myParser::For_initializerContext *ctx) = 0;
  virtual void exitFor_initializer(myParser::For_initializerContext *ctx) = 0;

  virtual void enterFor_iterator(myParser::For_iteratorContext *ctx) = 0;
  virtual void exitFor_iterator(myParser::For_iteratorContext *ctx) = 0;

  virtual void enterCatch_clauses(myParser::Catch_clausesContext *ctx) = 0;
  virtual void exitCatch_clauses(myParser::Catch_clausesContext *ctx) = 0;

  virtual void enterSpecific_catch_clause(myParser::Specific_catch_clauseContext *ctx) = 0;
  virtual void exitSpecific_catch_clause(myParser::Specific_catch_clauseContext *ctx) = 0;

  virtual void enterGeneral_catch_clause(myParser::General_catch_clauseContext *ctx) = 0;
  virtual void exitGeneral_catch_clause(myParser::General_catch_clauseContext *ctx) = 0;

  virtual void enterException_filter(myParser::Exception_filterContext *ctx) = 0;
  virtual void exitException_filter(myParser::Exception_filterContext *ctx) = 0;

  virtual void enterFinally_clause(myParser::Finally_clauseContext *ctx) = 0;
  virtual void exitFinally_clause(myParser::Finally_clauseContext *ctx) = 0;

  virtual void enterResource_acquisition(myParser::Resource_acquisitionContext *ctx) = 0;
  virtual void exitResource_acquisition(myParser::Resource_acquisitionContext *ctx) = 0;

  virtual void enterNamespace_declaration(myParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(myParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterQualified_identifier(myParser::Qualified_identifierContext *ctx) = 0;
  virtual void exitQualified_identifier(myParser::Qualified_identifierContext *ctx) = 0;

  virtual void enterNamespace_body(myParser::Namespace_bodyContext *ctx) = 0;
  virtual void exitNamespace_body(myParser::Namespace_bodyContext *ctx) = 0;

  virtual void enterExtern_alias_directives(myParser::Extern_alias_directivesContext *ctx) = 0;
  virtual void exitExtern_alias_directives(myParser::Extern_alias_directivesContext *ctx) = 0;

  virtual void enterExtern_alias_directive(myParser::Extern_alias_directiveContext *ctx) = 0;
  virtual void exitExtern_alias_directive(myParser::Extern_alias_directiveContext *ctx) = 0;

  virtual void enterUsing_directives(myParser::Using_directivesContext *ctx) = 0;
  virtual void exitUsing_directives(myParser::Using_directivesContext *ctx) = 0;

  virtual void enterUsingAliasDirective(myParser::UsingAliasDirectiveContext *ctx) = 0;
  virtual void exitUsingAliasDirective(myParser::UsingAliasDirectiveContext *ctx) = 0;

  virtual void enterUsingNamespaceDirective(myParser::UsingNamespaceDirectiveContext *ctx) = 0;
  virtual void exitUsingNamespaceDirective(myParser::UsingNamespaceDirectiveContext *ctx) = 0;

  virtual void enterUsingStaticDirective(myParser::UsingStaticDirectiveContext *ctx) = 0;
  virtual void exitUsingStaticDirective(myParser::UsingStaticDirectiveContext *ctx) = 0;

  virtual void enterNamespace_member_declarations(myParser::Namespace_member_declarationsContext *ctx) = 0;
  virtual void exitNamespace_member_declarations(myParser::Namespace_member_declarationsContext *ctx) = 0;

  virtual void enterNamespace_member_declaration(myParser::Namespace_member_declarationContext *ctx) = 0;
  virtual void exitNamespace_member_declaration(myParser::Namespace_member_declarationContext *ctx) = 0;

  virtual void enterType_declaration(myParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(myParser::Type_declarationContext *ctx) = 0;

  virtual void enterQualified_alias_member(myParser::Qualified_alias_memberContext *ctx) = 0;
  virtual void exitQualified_alias_member(myParser::Qualified_alias_memberContext *ctx) = 0;

  virtual void enterType_parameter_list(myParser::Type_parameter_listContext *ctx) = 0;
  virtual void exitType_parameter_list(myParser::Type_parameter_listContext *ctx) = 0;

  virtual void enterType_parameter(myParser::Type_parameterContext *ctx) = 0;
  virtual void exitType_parameter(myParser::Type_parameterContext *ctx) = 0;

  virtual void enterClass_base(myParser::Class_baseContext *ctx) = 0;
  virtual void exitClass_base(myParser::Class_baseContext *ctx) = 0;

  virtual void enterInterface_type_list(myParser::Interface_type_listContext *ctx) = 0;
  virtual void exitInterface_type_list(myParser::Interface_type_listContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clauses(myParser::Type_parameter_constraints_clausesContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clauses(myParser::Type_parameter_constraints_clausesContext *ctx) = 0;

  virtual void enterType_parameter_constraints_clause(myParser::Type_parameter_constraints_clauseContext *ctx) = 0;
  virtual void exitType_parameter_constraints_clause(myParser::Type_parameter_constraints_clauseContext *ctx) = 0;

  virtual void enterType_parameter_constraints(myParser::Type_parameter_constraintsContext *ctx) = 0;
  virtual void exitType_parameter_constraints(myParser::Type_parameter_constraintsContext *ctx) = 0;

  virtual void enterPrimary_constraint(myParser::Primary_constraintContext *ctx) = 0;
  virtual void exitPrimary_constraint(myParser::Primary_constraintContext *ctx) = 0;

  virtual void enterSecondary_constraints(myParser::Secondary_constraintsContext *ctx) = 0;
  virtual void exitSecondary_constraints(myParser::Secondary_constraintsContext *ctx) = 0;

  virtual void enterConstructor_constraint(myParser::Constructor_constraintContext *ctx) = 0;
  virtual void exitConstructor_constraint(myParser::Constructor_constraintContext *ctx) = 0;

  virtual void enterClass_body(myParser::Class_bodyContext *ctx) = 0;
  virtual void exitClass_body(myParser::Class_bodyContext *ctx) = 0;

  virtual void enterClass_member_declarations(myParser::Class_member_declarationsContext *ctx) = 0;
  virtual void exitClass_member_declarations(myParser::Class_member_declarationsContext *ctx) = 0;

  virtual void enterClass_member_declaration(myParser::Class_member_declarationContext *ctx) = 0;
  virtual void exitClass_member_declaration(myParser::Class_member_declarationContext *ctx) = 0;

  virtual void enterAll_member_modifiers(myParser::All_member_modifiersContext *ctx) = 0;
  virtual void exitAll_member_modifiers(myParser::All_member_modifiersContext *ctx) = 0;

  virtual void enterAll_member_modifier(myParser::All_member_modifierContext *ctx) = 0;
  virtual void exitAll_member_modifier(myParser::All_member_modifierContext *ctx) = 0;

  virtual void enterCommon_member_declaration(myParser::Common_member_declarationContext *ctx) = 0;
  virtual void exitCommon_member_declaration(myParser::Common_member_declarationContext *ctx) = 0;

  virtual void enterTyped_member_declaration(myParser::Typed_member_declarationContext *ctx) = 0;
  virtual void exitTyped_member_declaration(myParser::Typed_member_declarationContext *ctx) = 0;

  virtual void enterConstant_declarators(myParser::Constant_declaratorsContext *ctx) = 0;
  virtual void exitConstant_declarators(myParser::Constant_declaratorsContext *ctx) = 0;

  virtual void enterConstant_declarator(myParser::Constant_declaratorContext *ctx) = 0;
  virtual void exitConstant_declarator(myParser::Constant_declaratorContext *ctx) = 0;

  virtual void enterVariable_declarators(myParser::Variable_declaratorsContext *ctx) = 0;
  virtual void exitVariable_declarators(myParser::Variable_declaratorsContext *ctx) = 0;

  virtual void enterVariable_declarator(myParser::Variable_declaratorContext *ctx) = 0;
  virtual void exitVariable_declarator(myParser::Variable_declaratorContext *ctx) = 0;

  virtual void enterVariable_initializer(myParser::Variable_initializerContext *ctx) = 0;
  virtual void exitVariable_initializer(myParser::Variable_initializerContext *ctx) = 0;

  virtual void enterReturn_type(myParser::Return_typeContext *ctx) = 0;
  virtual void exitReturn_type(myParser::Return_typeContext *ctx) = 0;

  virtual void enterMember_name(myParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(myParser::Member_nameContext *ctx) = 0;

  virtual void enterMethod_body(myParser::Method_bodyContext *ctx) = 0;
  virtual void exitMethod_body(myParser::Method_bodyContext *ctx) = 0;

  virtual void enterFormal_parameter_list(myParser::Formal_parameter_listContext *ctx) = 0;
  virtual void exitFormal_parameter_list(myParser::Formal_parameter_listContext *ctx) = 0;

  virtual void enterFixed_parameters(myParser::Fixed_parametersContext *ctx) = 0;
  virtual void exitFixed_parameters(myParser::Fixed_parametersContext *ctx) = 0;

  virtual void enterFixed_parameter(myParser::Fixed_parameterContext *ctx) = 0;
  virtual void exitFixed_parameter(myParser::Fixed_parameterContext *ctx) = 0;

  virtual void enterParameter_modifier(myParser::Parameter_modifierContext *ctx) = 0;
  virtual void exitParameter_modifier(myParser::Parameter_modifierContext *ctx) = 0;

  virtual void enterParameter_array(myParser::Parameter_arrayContext *ctx) = 0;
  virtual void exitParameter_array(myParser::Parameter_arrayContext *ctx) = 0;

  virtual void enterAccessor_declarations(myParser::Accessor_declarationsContext *ctx) = 0;
  virtual void exitAccessor_declarations(myParser::Accessor_declarationsContext *ctx) = 0;

  virtual void enterGet_accessor_declaration(myParser::Get_accessor_declarationContext *ctx) = 0;
  virtual void exitGet_accessor_declaration(myParser::Get_accessor_declarationContext *ctx) = 0;

  virtual void enterSet_accessor_declaration(myParser::Set_accessor_declarationContext *ctx) = 0;
  virtual void exitSet_accessor_declaration(myParser::Set_accessor_declarationContext *ctx) = 0;

  virtual void enterAccessor_modifier(myParser::Accessor_modifierContext *ctx) = 0;
  virtual void exitAccessor_modifier(myParser::Accessor_modifierContext *ctx) = 0;

  virtual void enterAccessor_body(myParser::Accessor_bodyContext *ctx) = 0;
  virtual void exitAccessor_body(myParser::Accessor_bodyContext *ctx) = 0;

  virtual void enterEvent_accessor_declarations(myParser::Event_accessor_declarationsContext *ctx) = 0;
  virtual void exitEvent_accessor_declarations(myParser::Event_accessor_declarationsContext *ctx) = 0;

  virtual void enterAdd_accessor_declaration(myParser::Add_accessor_declarationContext *ctx) = 0;
  virtual void exitAdd_accessor_declaration(myParser::Add_accessor_declarationContext *ctx) = 0;

  virtual void enterRemove_accessor_declaration(myParser::Remove_accessor_declarationContext *ctx) = 0;
  virtual void exitRemove_accessor_declaration(myParser::Remove_accessor_declarationContext *ctx) = 0;

  virtual void enterOverloadable_operator(myParser::Overloadable_operatorContext *ctx) = 0;
  virtual void exitOverloadable_operator(myParser::Overloadable_operatorContext *ctx) = 0;

  virtual void enterConversion_operator_declarator(myParser::Conversion_operator_declaratorContext *ctx) = 0;
  virtual void exitConversion_operator_declarator(myParser::Conversion_operator_declaratorContext *ctx) = 0;

  virtual void enterConstructor_initializer(myParser::Constructor_initializerContext *ctx) = 0;
  virtual void exitConstructor_initializer(myParser::Constructor_initializerContext *ctx) = 0;

  virtual void enterBody(myParser::BodyContext *ctx) = 0;
  virtual void exitBody(myParser::BodyContext *ctx) = 0;

  virtual void enterStruct_interfaces(myParser::Struct_interfacesContext *ctx) = 0;
  virtual void exitStruct_interfaces(myParser::Struct_interfacesContext *ctx) = 0;

  virtual void enterStruct_body(myParser::Struct_bodyContext *ctx) = 0;
  virtual void exitStruct_body(myParser::Struct_bodyContext *ctx) = 0;

  virtual void enterStruct_member_declaration(myParser::Struct_member_declarationContext *ctx) = 0;
  virtual void exitStruct_member_declaration(myParser::Struct_member_declarationContext *ctx) = 0;

  virtual void enterArray_type(myParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(myParser::Array_typeContext *ctx) = 0;

  virtual void enterRank_specifier(myParser::Rank_specifierContext *ctx) = 0;
  virtual void exitRank_specifier(myParser::Rank_specifierContext *ctx) = 0;

  virtual void enterArray_initializer(myParser::Array_initializerContext *ctx) = 0;
  virtual void exitArray_initializer(myParser::Array_initializerContext *ctx) = 0;

  virtual void enterVariant_type_parameter_list(myParser::Variant_type_parameter_listContext *ctx) = 0;
  virtual void exitVariant_type_parameter_list(myParser::Variant_type_parameter_listContext *ctx) = 0;

  virtual void enterVariant_type_parameter(myParser::Variant_type_parameterContext *ctx) = 0;
  virtual void exitVariant_type_parameter(myParser::Variant_type_parameterContext *ctx) = 0;

  virtual void enterVariance_annotation(myParser::Variance_annotationContext *ctx) = 0;
  virtual void exitVariance_annotation(myParser::Variance_annotationContext *ctx) = 0;

  virtual void enterInterface_base(myParser::Interface_baseContext *ctx) = 0;
  virtual void exitInterface_base(myParser::Interface_baseContext *ctx) = 0;

  virtual void enterInterface_body(myParser::Interface_bodyContext *ctx) = 0;
  virtual void exitInterface_body(myParser::Interface_bodyContext *ctx) = 0;

  virtual void enterInterface_member_declaration(myParser::Interface_member_declarationContext *ctx) = 0;
  virtual void exitInterface_member_declaration(myParser::Interface_member_declarationContext *ctx) = 0;

  virtual void enterInterface_accessors(myParser::Interface_accessorsContext *ctx) = 0;
  virtual void exitInterface_accessors(myParser::Interface_accessorsContext *ctx) = 0;

  virtual void enterEnum_base(myParser::Enum_baseContext *ctx) = 0;
  virtual void exitEnum_base(myParser::Enum_baseContext *ctx) = 0;

  virtual void enterEnum_body(myParser::Enum_bodyContext *ctx) = 0;
  virtual void exitEnum_body(myParser::Enum_bodyContext *ctx) = 0;

  virtual void enterEnum_member_declaration(myParser::Enum_member_declarationContext *ctx) = 0;
  virtual void exitEnum_member_declaration(myParser::Enum_member_declarationContext *ctx) = 0;

  virtual void enterGlobal_attribute_section(myParser::Global_attribute_sectionContext *ctx) = 0;
  virtual void exitGlobal_attribute_section(myParser::Global_attribute_sectionContext *ctx) = 0;

  virtual void enterGlobal_attribute_target(myParser::Global_attribute_targetContext *ctx) = 0;
  virtual void exitGlobal_attribute_target(myParser::Global_attribute_targetContext *ctx) = 0;

  virtual void enterAttributes(myParser::AttributesContext *ctx) = 0;
  virtual void exitAttributes(myParser::AttributesContext *ctx) = 0;

  virtual void enterAttribute_section(myParser::Attribute_sectionContext *ctx) = 0;
  virtual void exitAttribute_section(myParser::Attribute_sectionContext *ctx) = 0;

  virtual void enterAttribute_target(myParser::Attribute_targetContext *ctx) = 0;
  virtual void exitAttribute_target(myParser::Attribute_targetContext *ctx) = 0;

  virtual void enterAttribute_list(myParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(myParser::Attribute_listContext *ctx) = 0;

  virtual void enterAttribute(myParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(myParser::AttributeContext *ctx) = 0;

  virtual void enterAttribute_argument(myParser::Attribute_argumentContext *ctx) = 0;
  virtual void exitAttribute_argument(myParser::Attribute_argumentContext *ctx) = 0;

  virtual void enterPointer_type(myParser::Pointer_typeContext *ctx) = 0;
  virtual void exitPointer_type(myParser::Pointer_typeContext *ctx) = 0;

  virtual void enterFixed_pointer_declarators(myParser::Fixed_pointer_declaratorsContext *ctx) = 0;
  virtual void exitFixed_pointer_declarators(myParser::Fixed_pointer_declaratorsContext *ctx) = 0;

  virtual void enterFixed_pointer_declarator(myParser::Fixed_pointer_declaratorContext *ctx) = 0;
  virtual void exitFixed_pointer_declarator(myParser::Fixed_pointer_declaratorContext *ctx) = 0;

  virtual void enterFixed_pointer_initializer(myParser::Fixed_pointer_initializerContext *ctx) = 0;
  virtual void exitFixed_pointer_initializer(myParser::Fixed_pointer_initializerContext *ctx) = 0;

  virtual void enterFixed_size_buffer_declarator(myParser::Fixed_size_buffer_declaratorContext *ctx) = 0;
  virtual void exitFixed_size_buffer_declarator(myParser::Fixed_size_buffer_declaratorContext *ctx) = 0;

  virtual void enterStackalloc_initializer(myParser::Stackalloc_initializerContext *ctx) = 0;
  virtual void exitStackalloc_initializer(myParser::Stackalloc_initializerContext *ctx) = 0;

  virtual void enterRight_arrow(myParser::Right_arrowContext *ctx) = 0;
  virtual void exitRight_arrow(myParser::Right_arrowContext *ctx) = 0;

  virtual void enterRight_shift(myParser::Right_shiftContext *ctx) = 0;
  virtual void exitRight_shift(myParser::Right_shiftContext *ctx) = 0;

  virtual void enterRight_shift_assignment(myParser::Right_shift_assignmentContext *ctx) = 0;
  virtual void exitRight_shift_assignment(myParser::Right_shift_assignmentContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;

  virtual void enterBoolean_literal(myParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(myParser::Boolean_literalContext *ctx) = 0;

  virtual void enterString_literal(myParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(myParser::String_literalContext *ctx) = 0;

  virtual void enterInterpolated_regular_string(myParser::Interpolated_regular_stringContext *ctx) = 0;
  virtual void exitInterpolated_regular_string(myParser::Interpolated_regular_stringContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string(myParser::Interpolated_verbatium_stringContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string(myParser::Interpolated_verbatium_stringContext *ctx) = 0;

  virtual void enterInterpolated_regular_string_part(myParser::Interpolated_regular_string_partContext *ctx) = 0;
  virtual void exitInterpolated_regular_string_part(myParser::Interpolated_regular_string_partContext *ctx) = 0;

  virtual void enterInterpolated_verbatium_string_part(myParser::Interpolated_verbatium_string_partContext *ctx) = 0;
  virtual void exitInterpolated_verbatium_string_part(myParser::Interpolated_verbatium_string_partContext *ctx) = 0;

  virtual void enterInterpolated_string_expression(myParser::Interpolated_string_expressionContext *ctx) = 0;
  virtual void exitInterpolated_string_expression(myParser::Interpolated_string_expressionContext *ctx) = 0;

  virtual void enterKeyword(myParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(myParser::KeywordContext *ctx) = 0;

  virtual void enterClass_definition(myParser::Class_definitionContext *ctx) = 0;
  virtual void exitClass_definition(myParser::Class_definitionContext *ctx) = 0;

  virtual void enterStruct_definition(myParser::Struct_definitionContext *ctx) = 0;
  virtual void exitStruct_definition(myParser::Struct_definitionContext *ctx) = 0;

  virtual void enterInterface_definition(myParser::Interface_definitionContext *ctx) = 0;
  virtual void exitInterface_definition(myParser::Interface_definitionContext *ctx) = 0;

  virtual void enterEnum_definition(myParser::Enum_definitionContext *ctx) = 0;
  virtual void exitEnum_definition(myParser::Enum_definitionContext *ctx) = 0;

  virtual void enterDelegate_definition(myParser::Delegate_definitionContext *ctx) = 0;
  virtual void exitDelegate_definition(myParser::Delegate_definitionContext *ctx) = 0;

  virtual void enterEvent_declaration(myParser::Event_declarationContext *ctx) = 0;
  virtual void exitEvent_declaration(myParser::Event_declarationContext *ctx) = 0;

  virtual void enterField_declaration(myParser::Field_declarationContext *ctx) = 0;
  virtual void exitField_declaration(myParser::Field_declarationContext *ctx) = 0;

  virtual void enterProperty_declaration(myParser::Property_declarationContext *ctx) = 0;
  virtual void exitProperty_declaration(myParser::Property_declarationContext *ctx) = 0;

  virtual void enterConstant_declaration(myParser::Constant_declarationContext *ctx) = 0;
  virtual void exitConstant_declaration(myParser::Constant_declarationContext *ctx) = 0;

  virtual void enterIndexer_declaration(myParser::Indexer_declarationContext *ctx) = 0;
  virtual void exitIndexer_declaration(myParser::Indexer_declarationContext *ctx) = 0;

  virtual void enterDestructor_definition(myParser::Destructor_definitionContext *ctx) = 0;
  virtual void exitDestructor_definition(myParser::Destructor_definitionContext *ctx) = 0;

  virtual void enterConstructor_declaration(myParser::Constructor_declarationContext *ctx) = 0;
  virtual void exitConstructor_declaration(myParser::Constructor_declarationContext *ctx) = 0;

  virtual void enterMethod_declaration(myParser::Method_declarationContext *ctx) = 0;
  virtual void exitMethod_declaration(myParser::Method_declarationContext *ctx) = 0;

  virtual void enterMethod_member_name(myParser::Method_member_nameContext *ctx) = 0;
  virtual void exitMethod_member_name(myParser::Method_member_nameContext *ctx) = 0;

  virtual void enterOperator_declaration(myParser::Operator_declarationContext *ctx) = 0;
  virtual void exitOperator_declaration(myParser::Operator_declarationContext *ctx) = 0;

  virtual void enterArg_declaration(myParser::Arg_declarationContext *ctx) = 0;
  virtual void exitArg_declaration(myParser::Arg_declarationContext *ctx) = 0;

  virtual void enterMethod_invocation(myParser::Method_invocationContext *ctx) = 0;
  virtual void exitMethod_invocation(myParser::Method_invocationContext *ctx) = 0;

  virtual void enterObject_creation_expression(myParser::Object_creation_expressionContext *ctx) = 0;
  virtual void exitObject_creation_expression(myParser::Object_creation_expressionContext *ctx) = 0;

  virtual void enterIdentifier(myParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(myParser::IdentifierContext *ctx) = 0;


};

