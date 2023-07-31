
// Generated from AdaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "AdaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AdaParser.
 */
class  AdaParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterIdentifier(AdaParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(AdaParser::IdentifierContext *ctx) = 0;

  virtual void enterNumeric_literal(AdaParser::Numeric_literalContext *ctx) = 0;
  virtual void exitNumeric_literal(AdaParser::Numeric_literalContext *ctx) = 0;

  virtual void enterCharacter_literal(AdaParser::Character_literalContext *ctx) = 0;
  virtual void exitCharacter_literal(AdaParser::Character_literalContext *ctx) = 0;

  virtual void enterString_literal(AdaParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(AdaParser::String_literalContext *ctx) = 0;

  virtual void enterBasic_declaration(AdaParser::Basic_declarationContext *ctx) = 0;
  virtual void exitBasic_declaration(AdaParser::Basic_declarationContext *ctx) = 0;

  virtual void enterDefining_identifier(AdaParser::Defining_identifierContext *ctx) = 0;
  virtual void exitDefining_identifier(AdaParser::Defining_identifierContext *ctx) = 0;

  virtual void enterType_declaration(AdaParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(AdaParser::Type_declarationContext *ctx) = 0;

  virtual void enterFull_type_declaration(AdaParser::Full_type_declarationContext *ctx) = 0;
  virtual void exitFull_type_declaration(AdaParser::Full_type_declarationContext *ctx) = 0;

  virtual void enterType_definition(AdaParser::Type_definitionContext *ctx) = 0;
  virtual void exitType_definition(AdaParser::Type_definitionContext *ctx) = 0;

  virtual void enterSubtype_declaration(AdaParser::Subtype_declarationContext *ctx) = 0;
  virtual void exitSubtype_declaration(AdaParser::Subtype_declarationContext *ctx) = 0;

  virtual void enterSubtype_indication(AdaParser::Subtype_indicationContext *ctx) = 0;
  virtual void exitSubtype_indication(AdaParser::Subtype_indicationContext *ctx) = 0;

  virtual void enterSubtype_mark(AdaParser::Subtype_markContext *ctx) = 0;
  virtual void exitSubtype_mark(AdaParser::Subtype_markContext *ctx) = 0;

  virtual void enterConstraint(AdaParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(AdaParser::ConstraintContext *ctx) = 0;

  virtual void enterScalar_constraint(AdaParser::Scalar_constraintContext *ctx) = 0;
  virtual void exitScalar_constraint(AdaParser::Scalar_constraintContext *ctx) = 0;

  virtual void enterComposite_constraint(AdaParser::Composite_constraintContext *ctx) = 0;
  virtual void exitComposite_constraint(AdaParser::Composite_constraintContext *ctx) = 0;

  virtual void enterObject_declaration(AdaParser::Object_declarationContext *ctx) = 0;
  virtual void exitObject_declaration(AdaParser::Object_declarationContext *ctx) = 0;

  virtual void enterDefining_identifier_list(AdaParser::Defining_identifier_listContext *ctx) = 0;
  virtual void exitDefining_identifier_list(AdaParser::Defining_identifier_listContext *ctx) = 0;

  virtual void enterNumber_declaration(AdaParser::Number_declarationContext *ctx) = 0;
  virtual void exitNumber_declaration(AdaParser::Number_declarationContext *ctx) = 0;

  virtual void enterDerived_type_definition(AdaParser::Derived_type_definitionContext *ctx) = 0;
  virtual void exitDerived_type_definition(AdaParser::Derived_type_definitionContext *ctx) = 0;

  virtual void enterRange_constraint(AdaParser::Range_constraintContext *ctx) = 0;
  virtual void exitRange_constraint(AdaParser::Range_constraintContext *ctx) = 0;

  virtual void enterRange(AdaParser::RangeContext *ctx) = 0;
  virtual void exitRange(AdaParser::RangeContext *ctx) = 0;

  virtual void enterEnumeration_type_definition(AdaParser::Enumeration_type_definitionContext *ctx) = 0;
  virtual void exitEnumeration_type_definition(AdaParser::Enumeration_type_definitionContext *ctx) = 0;

  virtual void enterEnumeration_literal_specification(AdaParser::Enumeration_literal_specificationContext *ctx) = 0;
  virtual void exitEnumeration_literal_specification(AdaParser::Enumeration_literal_specificationContext *ctx) = 0;

  virtual void enterInteger_type_definition(AdaParser::Integer_type_definitionContext *ctx) = 0;
  virtual void exitInteger_type_definition(AdaParser::Integer_type_definitionContext *ctx) = 0;

  virtual void enterSigned_integer_type_definition(AdaParser::Signed_integer_type_definitionContext *ctx) = 0;
  virtual void exitSigned_integer_type_definition(AdaParser::Signed_integer_type_definitionContext *ctx) = 0;

  virtual void enterModular_type_definition(AdaParser::Modular_type_definitionContext *ctx) = 0;
  virtual void exitModular_type_definition(AdaParser::Modular_type_definitionContext *ctx) = 0;

  virtual void enterReal_type_definition(AdaParser::Real_type_definitionContext *ctx) = 0;
  virtual void exitReal_type_definition(AdaParser::Real_type_definitionContext *ctx) = 0;

  virtual void enterFloating_point_definition(AdaParser::Floating_point_definitionContext *ctx) = 0;
  virtual void exitFloating_point_definition(AdaParser::Floating_point_definitionContext *ctx) = 0;

  virtual void enterReal_range_specification(AdaParser::Real_range_specificationContext *ctx) = 0;
  virtual void exitReal_range_specification(AdaParser::Real_range_specificationContext *ctx) = 0;

  virtual void enterFixed_point_definition(AdaParser::Fixed_point_definitionContext *ctx) = 0;
  virtual void exitFixed_point_definition(AdaParser::Fixed_point_definitionContext *ctx) = 0;

  virtual void enterOrdinary_fixed_point_definition(AdaParser::Ordinary_fixed_point_definitionContext *ctx) = 0;
  virtual void exitOrdinary_fixed_point_definition(AdaParser::Ordinary_fixed_point_definitionContext *ctx) = 0;

  virtual void enterDecimal_fixed_point_definition(AdaParser::Decimal_fixed_point_definitionContext *ctx) = 0;
  virtual void exitDecimal_fixed_point_definition(AdaParser::Decimal_fixed_point_definitionContext *ctx) = 0;

  virtual void enterDigits_constraint(AdaParser::Digits_constraintContext *ctx) = 0;
  virtual void exitDigits_constraint(AdaParser::Digits_constraintContext *ctx) = 0;

  virtual void enterArray_type_definition(AdaParser::Array_type_definitionContext *ctx) = 0;
  virtual void exitArray_type_definition(AdaParser::Array_type_definitionContext *ctx) = 0;

  virtual void enterUnconstrained_array_definition(AdaParser::Unconstrained_array_definitionContext *ctx) = 0;
  virtual void exitUnconstrained_array_definition(AdaParser::Unconstrained_array_definitionContext *ctx) = 0;

  virtual void enterIndex_subtype_definition(AdaParser::Index_subtype_definitionContext *ctx) = 0;
  virtual void exitIndex_subtype_definition(AdaParser::Index_subtype_definitionContext *ctx) = 0;

  virtual void enterConstrained_array_definition(AdaParser::Constrained_array_definitionContext *ctx) = 0;
  virtual void exitConstrained_array_definition(AdaParser::Constrained_array_definitionContext *ctx) = 0;

  virtual void enterDiscrete_subtype_definition(AdaParser::Discrete_subtype_definitionContext *ctx) = 0;
  virtual void exitDiscrete_subtype_definition(AdaParser::Discrete_subtype_definitionContext *ctx) = 0;

  virtual void enterComponent_definition(AdaParser::Component_definitionContext *ctx) = 0;
  virtual void exitComponent_definition(AdaParser::Component_definitionContext *ctx) = 0;

  virtual void enterIndex_constraint(AdaParser::Index_constraintContext *ctx) = 0;
  virtual void exitIndex_constraint(AdaParser::Index_constraintContext *ctx) = 0;

  virtual void enterDiscrete_range(AdaParser::Discrete_rangeContext *ctx) = 0;
  virtual void exitDiscrete_range(AdaParser::Discrete_rangeContext *ctx) = 0;

  virtual void enterDiscriminant_part(AdaParser::Discriminant_partContext *ctx) = 0;
  virtual void exitDiscriminant_part(AdaParser::Discriminant_partContext *ctx) = 0;

  virtual void enterUnknown_discriminant_part(AdaParser::Unknown_discriminant_partContext *ctx) = 0;
  virtual void exitUnknown_discriminant_part(AdaParser::Unknown_discriminant_partContext *ctx) = 0;

  virtual void enterKnown_discriminant_part(AdaParser::Known_discriminant_partContext *ctx) = 0;
  virtual void exitKnown_discriminant_part(AdaParser::Known_discriminant_partContext *ctx) = 0;

  virtual void enterDiscriminant_specification(AdaParser::Discriminant_specificationContext *ctx) = 0;
  virtual void exitDiscriminant_specification(AdaParser::Discriminant_specificationContext *ctx) = 0;

  virtual void enterDefault_expression(AdaParser::Default_expressionContext *ctx) = 0;
  virtual void exitDefault_expression(AdaParser::Default_expressionContext *ctx) = 0;

  virtual void enterDiscriminant_constraint(AdaParser::Discriminant_constraintContext *ctx) = 0;
  virtual void exitDiscriminant_constraint(AdaParser::Discriminant_constraintContext *ctx) = 0;

  virtual void enterDiscriminant_association(AdaParser::Discriminant_associationContext *ctx) = 0;
  virtual void exitDiscriminant_association(AdaParser::Discriminant_associationContext *ctx) = 0;

  virtual void enterRecord_type_definition(AdaParser::Record_type_definitionContext *ctx) = 0;
  virtual void exitRecord_type_definition(AdaParser::Record_type_definitionContext *ctx) = 0;

  virtual void enterRecord_definition(AdaParser::Record_definitionContext *ctx) = 0;
  virtual void exitRecord_definition(AdaParser::Record_definitionContext *ctx) = 0;

  virtual void enterComponent_list(AdaParser::Component_listContext *ctx) = 0;
  virtual void exitComponent_list(AdaParser::Component_listContext *ctx) = 0;

  virtual void enterComponent_item(AdaParser::Component_itemContext *ctx) = 0;
  virtual void exitComponent_item(AdaParser::Component_itemContext *ctx) = 0;

  virtual void enterComponent_declaration(AdaParser::Component_declarationContext *ctx) = 0;
  virtual void exitComponent_declaration(AdaParser::Component_declarationContext *ctx) = 0;

  virtual void enterVariant_part(AdaParser::Variant_partContext *ctx) = 0;
  virtual void exitVariant_part(AdaParser::Variant_partContext *ctx) = 0;

  virtual void enterVariant(AdaParser::VariantContext *ctx) = 0;
  virtual void exitVariant(AdaParser::VariantContext *ctx) = 0;

  virtual void enterDiscrete_choice_list(AdaParser::Discrete_choice_listContext *ctx) = 0;
  virtual void exitDiscrete_choice_list(AdaParser::Discrete_choice_listContext *ctx) = 0;

  virtual void enterDiscrete_choice(AdaParser::Discrete_choiceContext *ctx) = 0;
  virtual void exitDiscrete_choice(AdaParser::Discrete_choiceContext *ctx) = 0;

  virtual void enterRecord_extension_part(AdaParser::Record_extension_partContext *ctx) = 0;
  virtual void exitRecord_extension_part(AdaParser::Record_extension_partContext *ctx) = 0;

  virtual void enterAbstract_subprogram_declaration(AdaParser::Abstract_subprogram_declarationContext *ctx) = 0;
  virtual void exitAbstract_subprogram_declaration(AdaParser::Abstract_subprogram_declarationContext *ctx) = 0;

  virtual void enterInterface_type_definition(AdaParser::Interface_type_definitionContext *ctx) = 0;
  virtual void exitInterface_type_definition(AdaParser::Interface_type_definitionContext *ctx) = 0;

  virtual void enterInterface_list(AdaParser::Interface_listContext *ctx) = 0;
  virtual void exitInterface_list(AdaParser::Interface_listContext *ctx) = 0;

  virtual void enterAccess_type_definition(AdaParser::Access_type_definitionContext *ctx) = 0;
  virtual void exitAccess_type_definition(AdaParser::Access_type_definitionContext *ctx) = 0;

  virtual void enterAccess_to_object_definition(AdaParser::Access_to_object_definitionContext *ctx) = 0;
  virtual void exitAccess_to_object_definition(AdaParser::Access_to_object_definitionContext *ctx) = 0;

  virtual void enterGeneral_access_modifier(AdaParser::General_access_modifierContext *ctx) = 0;
  virtual void exitGeneral_access_modifier(AdaParser::General_access_modifierContext *ctx) = 0;

  virtual void enterAccess_to_subprogram_definition(AdaParser::Access_to_subprogram_definitionContext *ctx) = 0;
  virtual void exitAccess_to_subprogram_definition(AdaParser::Access_to_subprogram_definitionContext *ctx) = 0;

  virtual void enterNull_exclusion(AdaParser::Null_exclusionContext *ctx) = 0;
  virtual void exitNull_exclusion(AdaParser::Null_exclusionContext *ctx) = 0;

  virtual void enterAccess_definition(AdaParser::Access_definitionContext *ctx) = 0;
  virtual void exitAccess_definition(AdaParser::Access_definitionContext *ctx) = 0;

  virtual void enterIncomplete_type_declaration(AdaParser::Incomplete_type_declarationContext *ctx) = 0;
  virtual void exitIncomplete_type_declaration(AdaParser::Incomplete_type_declarationContext *ctx) = 0;

  virtual void enterDeclarative_part(AdaParser::Declarative_partContext *ctx) = 0;
  virtual void exitDeclarative_part(AdaParser::Declarative_partContext *ctx) = 0;

  virtual void enterDeclarative_item(AdaParser::Declarative_itemContext *ctx) = 0;
  virtual void exitDeclarative_item(AdaParser::Declarative_itemContext *ctx) = 0;

  virtual void enterBasic_declarative_item(AdaParser::Basic_declarative_itemContext *ctx) = 0;
  virtual void exitBasic_declarative_item(AdaParser::Basic_declarative_itemContext *ctx) = 0;

  virtual void enterBody(AdaParser::BodyContext *ctx) = 0;
  virtual void exitBody(AdaParser::BodyContext *ctx) = 0;

  virtual void enterProper_body(AdaParser::Proper_bodyContext *ctx) = 0;
  virtual void exitProper_body(AdaParser::Proper_bodyContext *ctx) = 0;

  virtual void enterName(AdaParser::NameContext *ctx) = 0;
  virtual void exitName(AdaParser::NameContext *ctx) = 0;

  virtual void enterDirect_name(AdaParser::Direct_nameContext *ctx) = 0;
  virtual void exitDirect_name(AdaParser::Direct_nameContext *ctx) = 0;

  virtual void enterSelector_name(AdaParser::Selector_nameContext *ctx) = 0;
  virtual void exitSelector_name(AdaParser::Selector_nameContext *ctx) = 0;

  virtual void enterAttribute_designator(AdaParser::Attribute_designatorContext *ctx) = 0;
  virtual void exitAttribute_designator(AdaParser::Attribute_designatorContext *ctx) = 0;

  virtual void enterRange_attribute_reference(AdaParser::Range_attribute_referenceContext *ctx) = 0;
  virtual void exitRange_attribute_reference(AdaParser::Range_attribute_referenceContext *ctx) = 0;

  virtual void enterRange_attribute_designator(AdaParser::Range_attribute_designatorContext *ctx) = 0;
  virtual void exitRange_attribute_designator(AdaParser::Range_attribute_designatorContext *ctx) = 0;

  virtual void enterAggregate(AdaParser::AggregateContext *ctx) = 0;
  virtual void exitAggregate(AdaParser::AggregateContext *ctx) = 0;

  virtual void enterRecord_aggregate(AdaParser::Record_aggregateContext *ctx) = 0;
  virtual void exitRecord_aggregate(AdaParser::Record_aggregateContext *ctx) = 0;

  virtual void enterRecord_component_association_list(AdaParser::Record_component_association_listContext *ctx) = 0;
  virtual void exitRecord_component_association_list(AdaParser::Record_component_association_listContext *ctx) = 0;

  virtual void enterRecord_component_association(AdaParser::Record_component_associationContext *ctx) = 0;
  virtual void exitRecord_component_association(AdaParser::Record_component_associationContext *ctx) = 0;

  virtual void enterComponent_choice_list(AdaParser::Component_choice_listContext *ctx) = 0;
  virtual void exitComponent_choice_list(AdaParser::Component_choice_listContext *ctx) = 0;

  virtual void enterExtension_aggregate(AdaParser::Extension_aggregateContext *ctx) = 0;
  virtual void exitExtension_aggregate(AdaParser::Extension_aggregateContext *ctx) = 0;

  virtual void enterAncestor_part(AdaParser::Ancestor_partContext *ctx) = 0;
  virtual void exitAncestor_part(AdaParser::Ancestor_partContext *ctx) = 0;

  virtual void enterArray_aggregate(AdaParser::Array_aggregateContext *ctx) = 0;
  virtual void exitArray_aggregate(AdaParser::Array_aggregateContext *ctx) = 0;

  virtual void enterPositional_array_aggregate(AdaParser::Positional_array_aggregateContext *ctx) = 0;
  virtual void exitPositional_array_aggregate(AdaParser::Positional_array_aggregateContext *ctx) = 0;

  virtual void enterNamed_array_aggregate(AdaParser::Named_array_aggregateContext *ctx) = 0;
  virtual void exitNamed_array_aggregate(AdaParser::Named_array_aggregateContext *ctx) = 0;

  virtual void enterArray_component_association(AdaParser::Array_component_associationContext *ctx) = 0;
  virtual void exitArray_component_association(AdaParser::Array_component_associationContext *ctx) = 0;

  virtual void enterExpression(AdaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(AdaParser::ExpressionContext *ctx) = 0;

  virtual void enterChoice_expression(AdaParser::Choice_expressionContext *ctx) = 0;
  virtual void exitChoice_expression(AdaParser::Choice_expressionContext *ctx) = 0;

  virtual void enterChoice_relation(AdaParser::Choice_relationContext *ctx) = 0;
  virtual void exitChoice_relation(AdaParser::Choice_relationContext *ctx) = 0;

  virtual void enterRelation(AdaParser::RelationContext *ctx) = 0;
  virtual void exitRelation(AdaParser::RelationContext *ctx) = 0;

  virtual void enterMembership_choice_list(AdaParser::Membership_choice_listContext *ctx) = 0;
  virtual void exitMembership_choice_list(AdaParser::Membership_choice_listContext *ctx) = 0;

  virtual void enterMembership_choice(AdaParser::Membership_choiceContext *ctx) = 0;
  virtual void exitMembership_choice(AdaParser::Membership_choiceContext *ctx) = 0;

  virtual void enterSimple_expression(AdaParser::Simple_expressionContext *ctx) = 0;
  virtual void exitSimple_expression(AdaParser::Simple_expressionContext *ctx) = 0;

  virtual void enterTerm(AdaParser::TermContext *ctx) = 0;
  virtual void exitTerm(AdaParser::TermContext *ctx) = 0;

  virtual void enterFactor(AdaParser::FactorContext *ctx) = 0;
  virtual void exitFactor(AdaParser::FactorContext *ctx) = 0;

  virtual void enterPrimary(AdaParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(AdaParser::PrimaryContext *ctx) = 0;

  virtual void enterLogical_operator(AdaParser::Logical_operatorContext *ctx) = 0;
  virtual void exitLogical_operator(AdaParser::Logical_operatorContext *ctx) = 0;

  virtual void enterRelational_operator(AdaParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(AdaParser::Relational_operatorContext *ctx) = 0;

  virtual void enterBinary_adding_operator(AdaParser::Binary_adding_operatorContext *ctx) = 0;
  virtual void exitBinary_adding_operator(AdaParser::Binary_adding_operatorContext *ctx) = 0;

  virtual void enterUnary_adding_operator(AdaParser::Unary_adding_operatorContext *ctx) = 0;
  virtual void exitUnary_adding_operator(AdaParser::Unary_adding_operatorContext *ctx) = 0;

  virtual void enterMultiplying_operator(AdaParser::Multiplying_operatorContext *ctx) = 0;
  virtual void exitMultiplying_operator(AdaParser::Multiplying_operatorContext *ctx) = 0;

  virtual void enterHighest_precedence_operator(AdaParser::Highest_precedence_operatorContext *ctx) = 0;
  virtual void exitHighest_precedence_operator(AdaParser::Highest_precedence_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(AdaParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(AdaParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterIf_expression(AdaParser::If_expressionContext *ctx) = 0;
  virtual void exitIf_expression(AdaParser::If_expressionContext *ctx) = 0;

  virtual void enterCondition(AdaParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(AdaParser::ConditionContext *ctx) = 0;

  virtual void enterCase_expression(AdaParser::Case_expressionContext *ctx) = 0;
  virtual void exitCase_expression(AdaParser::Case_expressionContext *ctx) = 0;

  virtual void enterCase_expression_alternative(AdaParser::Case_expression_alternativeContext *ctx) = 0;
  virtual void exitCase_expression_alternative(AdaParser::Case_expression_alternativeContext *ctx) = 0;

  virtual void enterQuantified_expression(AdaParser::Quantified_expressionContext *ctx) = 0;
  virtual void exitQuantified_expression(AdaParser::Quantified_expressionContext *ctx) = 0;

  virtual void enterQuantifier(AdaParser::QuantifierContext *ctx) = 0;
  virtual void exitQuantifier(AdaParser::QuantifierContext *ctx) = 0;

  virtual void enterPredicate(AdaParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(AdaParser::PredicateContext *ctx) = 0;

  virtual void enterType_conversion(AdaParser::Type_conversionContext *ctx) = 0;
  virtual void exitType_conversion(AdaParser::Type_conversionContext *ctx) = 0;

  virtual void enterQualified_expression(AdaParser::Qualified_expressionContext *ctx) = 0;
  virtual void exitQualified_expression(AdaParser::Qualified_expressionContext *ctx) = 0;

  virtual void enterAllocator(AdaParser::AllocatorContext *ctx) = 0;
  virtual void exitAllocator(AdaParser::AllocatorContext *ctx) = 0;

  virtual void enterSubpool_specification(AdaParser::Subpool_specificationContext *ctx) = 0;
  virtual void exitSubpool_specification(AdaParser::Subpool_specificationContext *ctx) = 0;

  virtual void enterSequence_of_statements(AdaParser::Sequence_of_statementsContext *ctx) = 0;
  virtual void exitSequence_of_statements(AdaParser::Sequence_of_statementsContext *ctx) = 0;

  virtual void enterStatement(AdaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(AdaParser::StatementContext *ctx) = 0;

  virtual void enterSimple_statement(AdaParser::Simple_statementContext *ctx) = 0;
  virtual void exitSimple_statement(AdaParser::Simple_statementContext *ctx) = 0;

  virtual void enterCompound_statement(AdaParser::Compound_statementContext *ctx) = 0;
  virtual void exitCompound_statement(AdaParser::Compound_statementContext *ctx) = 0;

  virtual void enterNull_statement(AdaParser::Null_statementContext *ctx) = 0;
  virtual void exitNull_statement(AdaParser::Null_statementContext *ctx) = 0;

  virtual void enterLabel(AdaParser::LabelContext *ctx) = 0;
  virtual void exitLabel(AdaParser::LabelContext *ctx) = 0;

  virtual void enterAssignment_statement(AdaParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(AdaParser::Assignment_statementContext *ctx) = 0;

  virtual void enterIf_statement(AdaParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(AdaParser::If_statementContext *ctx) = 0;

  virtual void enterCase_statement(AdaParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(AdaParser::Case_statementContext *ctx) = 0;

  virtual void enterCase_statement_alternative(AdaParser::Case_statement_alternativeContext *ctx) = 0;
  virtual void exitCase_statement_alternative(AdaParser::Case_statement_alternativeContext *ctx) = 0;

  virtual void enterLoop_statement(AdaParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(AdaParser::Loop_statementContext *ctx) = 0;

  virtual void enterIteration_scheme(AdaParser::Iteration_schemeContext *ctx) = 0;
  virtual void exitIteration_scheme(AdaParser::Iteration_schemeContext *ctx) = 0;

  virtual void enterLoop_parameter_specification(AdaParser::Loop_parameter_specificationContext *ctx) = 0;
  virtual void exitLoop_parameter_specification(AdaParser::Loop_parameter_specificationContext *ctx) = 0;

  virtual void enterIterator_specification(AdaParser::Iterator_specificationContext *ctx) = 0;
  virtual void exitIterator_specification(AdaParser::Iterator_specificationContext *ctx) = 0;

  virtual void enterBlock_statement(AdaParser::Block_statementContext *ctx) = 0;
  virtual void exitBlock_statement(AdaParser::Block_statementContext *ctx) = 0;

  virtual void enterExit_statement(AdaParser::Exit_statementContext *ctx) = 0;
  virtual void exitExit_statement(AdaParser::Exit_statementContext *ctx) = 0;

  virtual void enterGoto_statement(AdaParser::Goto_statementContext *ctx) = 0;
  virtual void exitGoto_statement(AdaParser::Goto_statementContext *ctx) = 0;

  virtual void enterSubprogram_declaration(AdaParser::Subprogram_declarationContext *ctx) = 0;
  virtual void exitSubprogram_declaration(AdaParser::Subprogram_declarationContext *ctx) = 0;

  virtual void enterSubprogram_specification(AdaParser::Subprogram_specificationContext *ctx) = 0;
  virtual void exitSubprogram_specification(AdaParser::Subprogram_specificationContext *ctx) = 0;

  virtual void enterProcedure_specification(AdaParser::Procedure_specificationContext *ctx) = 0;
  virtual void exitProcedure_specification(AdaParser::Procedure_specificationContext *ctx) = 0;

  virtual void enterFunction_specification(AdaParser::Function_specificationContext *ctx) = 0;
  virtual void exitFunction_specification(AdaParser::Function_specificationContext *ctx) = 0;

  virtual void enterDesignator(AdaParser::DesignatorContext *ctx) = 0;
  virtual void exitDesignator(AdaParser::DesignatorContext *ctx) = 0;

  virtual void enterDefining_designator(AdaParser::Defining_designatorContext *ctx) = 0;
  virtual void exitDefining_designator(AdaParser::Defining_designatorContext *ctx) = 0;

  virtual void enterDefining_program_unit_name(AdaParser::Defining_program_unit_nameContext *ctx) = 0;
  virtual void exitDefining_program_unit_name(AdaParser::Defining_program_unit_nameContext *ctx) = 0;

  virtual void enterOperator_symbol(AdaParser::Operator_symbolContext *ctx) = 0;
  virtual void exitOperator_symbol(AdaParser::Operator_symbolContext *ctx) = 0;

  virtual void enterDefining_operator_symbol(AdaParser::Defining_operator_symbolContext *ctx) = 0;
  virtual void exitDefining_operator_symbol(AdaParser::Defining_operator_symbolContext *ctx) = 0;

  virtual void enterParameter_and_result_profile(AdaParser::Parameter_and_result_profileContext *ctx) = 0;
  virtual void exitParameter_and_result_profile(AdaParser::Parameter_and_result_profileContext *ctx) = 0;

  virtual void enterFormal_part(AdaParser::Formal_partContext *ctx) = 0;
  virtual void exitFormal_part(AdaParser::Formal_partContext *ctx) = 0;

  virtual void enterParameter_specification(AdaParser::Parameter_specificationContext *ctx) = 0;
  virtual void exitParameter_specification(AdaParser::Parameter_specificationContext *ctx) = 0;

  virtual void enterMode_(AdaParser::Mode_Context *ctx) = 0;
  virtual void exitMode_(AdaParser::Mode_Context *ctx) = 0;

  virtual void enterSubprogram_body(AdaParser::Subprogram_bodyContext *ctx) = 0;
  virtual void exitSubprogram_body(AdaParser::Subprogram_bodyContext *ctx) = 0;

  virtual void enterProcedure_call_statement(AdaParser::Procedure_call_statementContext *ctx) = 0;
  virtual void exitProcedure_call_statement(AdaParser::Procedure_call_statementContext *ctx) = 0;

  virtual void enterActual_parameter_part(AdaParser::Actual_parameter_partContext *ctx) = 0;
  virtual void exitActual_parameter_part(AdaParser::Actual_parameter_partContext *ctx) = 0;

  virtual void enterParameter_association(AdaParser::Parameter_associationContext *ctx) = 0;
  virtual void exitParameter_association(AdaParser::Parameter_associationContext *ctx) = 0;

  virtual void enterExplicit_actual_parameter(AdaParser::Explicit_actual_parameterContext *ctx) = 0;
  virtual void exitExplicit_actual_parameter(AdaParser::Explicit_actual_parameterContext *ctx) = 0;

  virtual void enterSimple_return_statement(AdaParser::Simple_return_statementContext *ctx) = 0;
  virtual void exitSimple_return_statement(AdaParser::Simple_return_statementContext *ctx) = 0;

  virtual void enterExtended_return_object_declaration(AdaParser::Extended_return_object_declarationContext *ctx) = 0;
  virtual void exitExtended_return_object_declaration(AdaParser::Extended_return_object_declarationContext *ctx) = 0;

  virtual void enterExtended_return_statement(AdaParser::Extended_return_statementContext *ctx) = 0;
  virtual void exitExtended_return_statement(AdaParser::Extended_return_statementContext *ctx) = 0;

  virtual void enterReturn_subtype_indication(AdaParser::Return_subtype_indicationContext *ctx) = 0;
  virtual void exitReturn_subtype_indication(AdaParser::Return_subtype_indicationContext *ctx) = 0;

  virtual void enterNull_procedure_declaration(AdaParser::Null_procedure_declarationContext *ctx) = 0;
  virtual void exitNull_procedure_declaration(AdaParser::Null_procedure_declarationContext *ctx) = 0;

  virtual void enterExpression_function_declaration(AdaParser::Expression_function_declarationContext *ctx) = 0;
  virtual void exitExpression_function_declaration(AdaParser::Expression_function_declarationContext *ctx) = 0;

  virtual void enterPackage_declaration(AdaParser::Package_declarationContext *ctx) = 0;
  virtual void exitPackage_declaration(AdaParser::Package_declarationContext *ctx) = 0;

  virtual void enterPackage_specification(AdaParser::Package_specificationContext *ctx) = 0;
  virtual void exitPackage_specification(AdaParser::Package_specificationContext *ctx) = 0;

  virtual void enterPackage_body(AdaParser::Package_bodyContext *ctx) = 0;
  virtual void exitPackage_body(AdaParser::Package_bodyContext *ctx) = 0;

  virtual void enterPrivate_type_declaration(AdaParser::Private_type_declarationContext *ctx) = 0;
  virtual void exitPrivate_type_declaration(AdaParser::Private_type_declarationContext *ctx) = 0;

  virtual void enterPrivate_extension_declaration(AdaParser::Private_extension_declarationContext *ctx) = 0;
  virtual void exitPrivate_extension_declaration(AdaParser::Private_extension_declarationContext *ctx) = 0;

  virtual void enterOverriding_indicator(AdaParser::Overriding_indicatorContext *ctx) = 0;
  virtual void exitOverriding_indicator(AdaParser::Overriding_indicatorContext *ctx) = 0;

  virtual void enterUse_clause(AdaParser::Use_clauseContext *ctx) = 0;
  virtual void exitUse_clause(AdaParser::Use_clauseContext *ctx) = 0;

  virtual void enterUse_package_clause(AdaParser::Use_package_clauseContext *ctx) = 0;
  virtual void exitUse_package_clause(AdaParser::Use_package_clauseContext *ctx) = 0;

  virtual void enterUse_type_clause(AdaParser::Use_type_clauseContext *ctx) = 0;
  virtual void exitUse_type_clause(AdaParser::Use_type_clauseContext *ctx) = 0;

  virtual void enterRenaming_declaration(AdaParser::Renaming_declarationContext *ctx) = 0;
  virtual void exitRenaming_declaration(AdaParser::Renaming_declarationContext *ctx) = 0;

  virtual void enterObject_renaming_declaration(AdaParser::Object_renaming_declarationContext *ctx) = 0;
  virtual void exitObject_renaming_declaration(AdaParser::Object_renaming_declarationContext *ctx) = 0;

  virtual void enterException_renaming_declaration(AdaParser::Exception_renaming_declarationContext *ctx) = 0;
  virtual void exitException_renaming_declaration(AdaParser::Exception_renaming_declarationContext *ctx) = 0;

  virtual void enterPackage_renaming_declaration(AdaParser::Package_renaming_declarationContext *ctx) = 0;
  virtual void exitPackage_renaming_declaration(AdaParser::Package_renaming_declarationContext *ctx) = 0;

  virtual void enterSubprogram_renaming_declaration(AdaParser::Subprogram_renaming_declarationContext *ctx) = 0;
  virtual void exitSubprogram_renaming_declaration(AdaParser::Subprogram_renaming_declarationContext *ctx) = 0;

  virtual void enterGeneric_renaming_declaration(AdaParser::Generic_renaming_declarationContext *ctx) = 0;
  virtual void exitGeneric_renaming_declaration(AdaParser::Generic_renaming_declarationContext *ctx) = 0;

  virtual void enterTask_type_declaration(AdaParser::Task_type_declarationContext *ctx) = 0;
  virtual void exitTask_type_declaration(AdaParser::Task_type_declarationContext *ctx) = 0;

  virtual void enterSingle_task_declaration(AdaParser::Single_task_declarationContext *ctx) = 0;
  virtual void exitSingle_task_declaration(AdaParser::Single_task_declarationContext *ctx) = 0;

  virtual void enterTask_definition(AdaParser::Task_definitionContext *ctx) = 0;
  virtual void exitTask_definition(AdaParser::Task_definitionContext *ctx) = 0;

  virtual void enterTask_item(AdaParser::Task_itemContext *ctx) = 0;
  virtual void exitTask_item(AdaParser::Task_itemContext *ctx) = 0;

  virtual void enterTask_body(AdaParser::Task_bodyContext *ctx) = 0;
  virtual void exitTask_body(AdaParser::Task_bodyContext *ctx) = 0;

  virtual void enterProtected_type_declaration(AdaParser::Protected_type_declarationContext *ctx) = 0;
  virtual void exitProtected_type_declaration(AdaParser::Protected_type_declarationContext *ctx) = 0;

  virtual void enterSingle_protected_declaration(AdaParser::Single_protected_declarationContext *ctx) = 0;
  virtual void exitSingle_protected_declaration(AdaParser::Single_protected_declarationContext *ctx) = 0;

  virtual void enterProtected_definition(AdaParser::Protected_definitionContext *ctx) = 0;
  virtual void exitProtected_definition(AdaParser::Protected_definitionContext *ctx) = 0;

  virtual void enterProtected_operation_declaration(AdaParser::Protected_operation_declarationContext *ctx) = 0;
  virtual void exitProtected_operation_declaration(AdaParser::Protected_operation_declarationContext *ctx) = 0;

  virtual void enterProtected_element_declaration(AdaParser::Protected_element_declarationContext *ctx) = 0;
  virtual void exitProtected_element_declaration(AdaParser::Protected_element_declarationContext *ctx) = 0;

  virtual void enterProtected_body(AdaParser::Protected_bodyContext *ctx) = 0;
  virtual void exitProtected_body(AdaParser::Protected_bodyContext *ctx) = 0;

  virtual void enterProtected_operation_item(AdaParser::Protected_operation_itemContext *ctx) = 0;
  virtual void exitProtected_operation_item(AdaParser::Protected_operation_itemContext *ctx) = 0;

  virtual void enterEntry_declaration(AdaParser::Entry_declarationContext *ctx) = 0;
  virtual void exitEntry_declaration(AdaParser::Entry_declarationContext *ctx) = 0;

  virtual void enterAccept_statement(AdaParser::Accept_statementContext *ctx) = 0;
  virtual void exitAccept_statement(AdaParser::Accept_statementContext *ctx) = 0;

  virtual void enterEntry_direct_name(AdaParser::Entry_direct_nameContext *ctx) = 0;
  virtual void exitEntry_direct_name(AdaParser::Entry_direct_nameContext *ctx) = 0;

  virtual void enterEntry_index(AdaParser::Entry_indexContext *ctx) = 0;
  virtual void exitEntry_index(AdaParser::Entry_indexContext *ctx) = 0;

  virtual void enterEntry_body(AdaParser::Entry_bodyContext *ctx) = 0;
  virtual void exitEntry_body(AdaParser::Entry_bodyContext *ctx) = 0;

  virtual void enterEntry_identifier(AdaParser::Entry_identifierContext *ctx) = 0;
  virtual void exitEntry_identifier(AdaParser::Entry_identifierContext *ctx) = 0;

  virtual void enterEntry_body_formal_part(AdaParser::Entry_body_formal_partContext *ctx) = 0;
  virtual void exitEntry_body_formal_part(AdaParser::Entry_body_formal_partContext *ctx) = 0;

  virtual void enterEntry_barrier(AdaParser::Entry_barrierContext *ctx) = 0;
  virtual void exitEntry_barrier(AdaParser::Entry_barrierContext *ctx) = 0;

  virtual void enterEntry_index_specification(AdaParser::Entry_index_specificationContext *ctx) = 0;
  virtual void exitEntry_index_specification(AdaParser::Entry_index_specificationContext *ctx) = 0;

  virtual void enterEntry_call_statement(AdaParser::Entry_call_statementContext *ctx) = 0;
  virtual void exitEntry_call_statement(AdaParser::Entry_call_statementContext *ctx) = 0;

  virtual void enterRequeue_statement(AdaParser::Requeue_statementContext *ctx) = 0;
  virtual void exitRequeue_statement(AdaParser::Requeue_statementContext *ctx) = 0;

  virtual void enterDelay_statement(AdaParser::Delay_statementContext *ctx) = 0;
  virtual void exitDelay_statement(AdaParser::Delay_statementContext *ctx) = 0;

  virtual void enterDelay_until_statement(AdaParser::Delay_until_statementContext *ctx) = 0;
  virtual void exitDelay_until_statement(AdaParser::Delay_until_statementContext *ctx) = 0;

  virtual void enterDelay_relative_statement(AdaParser::Delay_relative_statementContext *ctx) = 0;
  virtual void exitDelay_relative_statement(AdaParser::Delay_relative_statementContext *ctx) = 0;

  virtual void enterDelay_expression(AdaParser::Delay_expressionContext *ctx) = 0;
  virtual void exitDelay_expression(AdaParser::Delay_expressionContext *ctx) = 0;

  virtual void enterSelect_statement(AdaParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(AdaParser::Select_statementContext *ctx) = 0;

  virtual void enterSelective_accept(AdaParser::Selective_acceptContext *ctx) = 0;
  virtual void exitSelective_accept(AdaParser::Selective_acceptContext *ctx) = 0;

  virtual void enterGuard(AdaParser::GuardContext *ctx) = 0;
  virtual void exitGuard(AdaParser::GuardContext *ctx) = 0;

  virtual void enterSelect_alternative(AdaParser::Select_alternativeContext *ctx) = 0;
  virtual void exitSelect_alternative(AdaParser::Select_alternativeContext *ctx) = 0;

  virtual void enterAccept_alternative(AdaParser::Accept_alternativeContext *ctx) = 0;
  virtual void exitAccept_alternative(AdaParser::Accept_alternativeContext *ctx) = 0;

  virtual void enterDelay_alternative(AdaParser::Delay_alternativeContext *ctx) = 0;
  virtual void exitDelay_alternative(AdaParser::Delay_alternativeContext *ctx) = 0;

  virtual void enterTerminate_alternative(AdaParser::Terminate_alternativeContext *ctx) = 0;
  virtual void exitTerminate_alternative(AdaParser::Terminate_alternativeContext *ctx) = 0;

  virtual void enterTimed_entry_call(AdaParser::Timed_entry_callContext *ctx) = 0;
  virtual void exitTimed_entry_call(AdaParser::Timed_entry_callContext *ctx) = 0;

  virtual void enterEntry_call_alternative(AdaParser::Entry_call_alternativeContext *ctx) = 0;
  virtual void exitEntry_call_alternative(AdaParser::Entry_call_alternativeContext *ctx) = 0;

  virtual void enterProcedure_or_entry_call(AdaParser::Procedure_or_entry_callContext *ctx) = 0;
  virtual void exitProcedure_or_entry_call(AdaParser::Procedure_or_entry_callContext *ctx) = 0;

  virtual void enterConditional_entry_call(AdaParser::Conditional_entry_callContext *ctx) = 0;
  virtual void exitConditional_entry_call(AdaParser::Conditional_entry_callContext *ctx) = 0;

  virtual void enterAsynchronous_select(AdaParser::Asynchronous_selectContext *ctx) = 0;
  virtual void exitAsynchronous_select(AdaParser::Asynchronous_selectContext *ctx) = 0;

  virtual void enterTriggering_alternative(AdaParser::Triggering_alternativeContext *ctx) = 0;
  virtual void exitTriggering_alternative(AdaParser::Triggering_alternativeContext *ctx) = 0;

  virtual void enterTriggering_statement(AdaParser::Triggering_statementContext *ctx) = 0;
  virtual void exitTriggering_statement(AdaParser::Triggering_statementContext *ctx) = 0;

  virtual void enterAbortable_part(AdaParser::Abortable_partContext *ctx) = 0;
  virtual void exitAbortable_part(AdaParser::Abortable_partContext *ctx) = 0;

  virtual void enterAbort_statement(AdaParser::Abort_statementContext *ctx) = 0;
  virtual void exitAbort_statement(AdaParser::Abort_statementContext *ctx) = 0;

  virtual void enterCompilation(AdaParser::CompilationContext *ctx) = 0;
  virtual void exitCompilation(AdaParser::CompilationContext *ctx) = 0;

  virtual void enterCompilation_unit(AdaParser::Compilation_unitContext *ctx) = 0;
  virtual void exitCompilation_unit(AdaParser::Compilation_unitContext *ctx) = 0;

  virtual void enterLibrary_item(AdaParser::Library_itemContext *ctx) = 0;
  virtual void exitLibrary_item(AdaParser::Library_itemContext *ctx) = 0;

  virtual void enterLibrary_unit_declaration(AdaParser::Library_unit_declarationContext *ctx) = 0;
  virtual void exitLibrary_unit_declaration(AdaParser::Library_unit_declarationContext *ctx) = 0;

  virtual void enterLibrary_unit_renaming_declaration(AdaParser::Library_unit_renaming_declarationContext *ctx) = 0;
  virtual void exitLibrary_unit_renaming_declaration(AdaParser::Library_unit_renaming_declarationContext *ctx) = 0;

  virtual void enterLibrary_unit_body(AdaParser::Library_unit_bodyContext *ctx) = 0;
  virtual void exitLibrary_unit_body(AdaParser::Library_unit_bodyContext *ctx) = 0;

  virtual void enterContext_item(AdaParser::Context_itemContext *ctx) = 0;
  virtual void exitContext_item(AdaParser::Context_itemContext *ctx) = 0;

  virtual void enterWith_clause(AdaParser::With_clauseContext *ctx) = 0;
  virtual void exitWith_clause(AdaParser::With_clauseContext *ctx) = 0;

  virtual void enterLimited_with_clause(AdaParser::Limited_with_clauseContext *ctx) = 0;
  virtual void exitLimited_with_clause(AdaParser::Limited_with_clauseContext *ctx) = 0;

  virtual void enterNonlimited_with_clause(AdaParser::Nonlimited_with_clauseContext *ctx) = 0;
  virtual void exitNonlimited_with_clause(AdaParser::Nonlimited_with_clauseContext *ctx) = 0;

  virtual void enterBody_stub(AdaParser::Body_stubContext *ctx) = 0;
  virtual void exitBody_stub(AdaParser::Body_stubContext *ctx) = 0;

  virtual void enterSubprogram_body_stub(AdaParser::Subprogram_body_stubContext *ctx) = 0;
  virtual void exitSubprogram_body_stub(AdaParser::Subprogram_body_stubContext *ctx) = 0;

  virtual void enterPackage_body_stub(AdaParser::Package_body_stubContext *ctx) = 0;
  virtual void exitPackage_body_stub(AdaParser::Package_body_stubContext *ctx) = 0;

  virtual void enterTask_body_stub(AdaParser::Task_body_stubContext *ctx) = 0;
  virtual void exitTask_body_stub(AdaParser::Task_body_stubContext *ctx) = 0;

  virtual void enterProtected_body_stub(AdaParser::Protected_body_stubContext *ctx) = 0;
  virtual void exitProtected_body_stub(AdaParser::Protected_body_stubContext *ctx) = 0;

  virtual void enterSubunit(AdaParser::SubunitContext *ctx) = 0;
  virtual void exitSubunit(AdaParser::SubunitContext *ctx) = 0;

  virtual void enterException_declaration(AdaParser::Exception_declarationContext *ctx) = 0;
  virtual void exitException_declaration(AdaParser::Exception_declarationContext *ctx) = 0;

  virtual void enterHandled_sequence_of_statements(AdaParser::Handled_sequence_of_statementsContext *ctx) = 0;
  virtual void exitHandled_sequence_of_statements(AdaParser::Handled_sequence_of_statementsContext *ctx) = 0;

  virtual void enterException_handler(AdaParser::Exception_handlerContext *ctx) = 0;
  virtual void exitException_handler(AdaParser::Exception_handlerContext *ctx) = 0;

  virtual void enterChoice_parameter_specification(AdaParser::Choice_parameter_specificationContext *ctx) = 0;
  virtual void exitChoice_parameter_specification(AdaParser::Choice_parameter_specificationContext *ctx) = 0;

  virtual void enterException_choice(AdaParser::Exception_choiceContext *ctx) = 0;
  virtual void exitException_choice(AdaParser::Exception_choiceContext *ctx) = 0;

  virtual void enterRaise_statement(AdaParser::Raise_statementContext *ctx) = 0;
  virtual void exitRaise_statement(AdaParser::Raise_statementContext *ctx) = 0;

  virtual void enterGeneric_declaration(AdaParser::Generic_declarationContext *ctx) = 0;
  virtual void exitGeneric_declaration(AdaParser::Generic_declarationContext *ctx) = 0;

  virtual void enterGeneric_subprogram_declaration(AdaParser::Generic_subprogram_declarationContext *ctx) = 0;
  virtual void exitGeneric_subprogram_declaration(AdaParser::Generic_subprogram_declarationContext *ctx) = 0;

  virtual void enterGeneric_package_declaration(AdaParser::Generic_package_declarationContext *ctx) = 0;
  virtual void exitGeneric_package_declaration(AdaParser::Generic_package_declarationContext *ctx) = 0;

  virtual void enterGeneric_formal_part(AdaParser::Generic_formal_partContext *ctx) = 0;
  virtual void exitGeneric_formal_part(AdaParser::Generic_formal_partContext *ctx) = 0;

  virtual void enterGeneric_formal_parameter_declaration(AdaParser::Generic_formal_parameter_declarationContext *ctx) = 0;
  virtual void exitGeneric_formal_parameter_declaration(AdaParser::Generic_formal_parameter_declarationContext *ctx) = 0;

  virtual void enterGeneric_instantiation(AdaParser::Generic_instantiationContext *ctx) = 0;
  virtual void exitGeneric_instantiation(AdaParser::Generic_instantiationContext *ctx) = 0;

  virtual void enterGeneric_actual_part(AdaParser::Generic_actual_partContext *ctx) = 0;
  virtual void exitGeneric_actual_part(AdaParser::Generic_actual_partContext *ctx) = 0;

  virtual void enterGeneric_association(AdaParser::Generic_associationContext *ctx) = 0;
  virtual void exitGeneric_association(AdaParser::Generic_associationContext *ctx) = 0;

  virtual void enterExplicit_generic_actual_parameter(AdaParser::Explicit_generic_actual_parameterContext *ctx) = 0;
  virtual void exitExplicit_generic_actual_parameter(AdaParser::Explicit_generic_actual_parameterContext *ctx) = 0;

  virtual void enterFormal_object_declaration(AdaParser::Formal_object_declarationContext *ctx) = 0;
  virtual void exitFormal_object_declaration(AdaParser::Formal_object_declarationContext *ctx) = 0;

  virtual void enterFormal_type_declaration(AdaParser::Formal_type_declarationContext *ctx) = 0;
  virtual void exitFormal_type_declaration(AdaParser::Formal_type_declarationContext *ctx) = 0;

  virtual void enterFormal_complete_type_declaration(AdaParser::Formal_complete_type_declarationContext *ctx) = 0;
  virtual void exitFormal_complete_type_declaration(AdaParser::Formal_complete_type_declarationContext *ctx) = 0;

  virtual void enterFormal_incomplete_type_declaration(AdaParser::Formal_incomplete_type_declarationContext *ctx) = 0;
  virtual void exitFormal_incomplete_type_declaration(AdaParser::Formal_incomplete_type_declarationContext *ctx) = 0;

  virtual void enterFormal_type_definition(AdaParser::Formal_type_definitionContext *ctx) = 0;
  virtual void exitFormal_type_definition(AdaParser::Formal_type_definitionContext *ctx) = 0;

  virtual void enterFormal_private_type_definition(AdaParser::Formal_private_type_definitionContext *ctx) = 0;
  virtual void exitFormal_private_type_definition(AdaParser::Formal_private_type_definitionContext *ctx) = 0;

  virtual void enterFormal_derived_type_definition(AdaParser::Formal_derived_type_definitionContext *ctx) = 0;
  virtual void exitFormal_derived_type_definition(AdaParser::Formal_derived_type_definitionContext *ctx) = 0;

  virtual void enterFormal_discrete_type_definition(AdaParser::Formal_discrete_type_definitionContext *ctx) = 0;
  virtual void exitFormal_discrete_type_definition(AdaParser::Formal_discrete_type_definitionContext *ctx) = 0;

  virtual void enterFormal_signed_integer_type_definition(AdaParser::Formal_signed_integer_type_definitionContext *ctx) = 0;
  virtual void exitFormal_signed_integer_type_definition(AdaParser::Formal_signed_integer_type_definitionContext *ctx) = 0;

  virtual void enterFormal_modular_type_definition(AdaParser::Formal_modular_type_definitionContext *ctx) = 0;
  virtual void exitFormal_modular_type_definition(AdaParser::Formal_modular_type_definitionContext *ctx) = 0;

  virtual void enterFormal_floating_point_type_definition(AdaParser::Formal_floating_point_type_definitionContext *ctx) = 0;
  virtual void exitFormal_floating_point_type_definition(AdaParser::Formal_floating_point_type_definitionContext *ctx) = 0;

  virtual void enterFormal_ordinary_fixed_point_type_definition(AdaParser::Formal_ordinary_fixed_point_type_definitionContext *ctx) = 0;
  virtual void exitFormal_ordinary_fixed_point_type_definition(AdaParser::Formal_ordinary_fixed_point_type_definitionContext *ctx) = 0;

  virtual void enterFormal_decimal_fixed_point_type_definition(AdaParser::Formal_decimal_fixed_point_type_definitionContext *ctx) = 0;
  virtual void exitFormal_decimal_fixed_point_type_definition(AdaParser::Formal_decimal_fixed_point_type_definitionContext *ctx) = 0;

  virtual void enterFormal_array_type_definition(AdaParser::Formal_array_type_definitionContext *ctx) = 0;
  virtual void exitFormal_array_type_definition(AdaParser::Formal_array_type_definitionContext *ctx) = 0;

  virtual void enterFormal_access_type_definition(AdaParser::Formal_access_type_definitionContext *ctx) = 0;
  virtual void exitFormal_access_type_definition(AdaParser::Formal_access_type_definitionContext *ctx) = 0;

  virtual void enterFormal_interface_type_definition(AdaParser::Formal_interface_type_definitionContext *ctx) = 0;
  virtual void exitFormal_interface_type_definition(AdaParser::Formal_interface_type_definitionContext *ctx) = 0;

  virtual void enterFormal_subprogram_declaration(AdaParser::Formal_subprogram_declarationContext *ctx) = 0;
  virtual void exitFormal_subprogram_declaration(AdaParser::Formal_subprogram_declarationContext *ctx) = 0;

  virtual void enterFormal_concrete_subprogram_declaration(AdaParser::Formal_concrete_subprogram_declarationContext *ctx) = 0;
  virtual void exitFormal_concrete_subprogram_declaration(AdaParser::Formal_concrete_subprogram_declarationContext *ctx) = 0;

  virtual void enterFormal_abstract_subprogram_declaration(AdaParser::Formal_abstract_subprogram_declarationContext *ctx) = 0;
  virtual void exitFormal_abstract_subprogram_declaration(AdaParser::Formal_abstract_subprogram_declarationContext *ctx) = 0;

  virtual void enterSubprogram_default(AdaParser::Subprogram_defaultContext *ctx) = 0;
  virtual void exitSubprogram_default(AdaParser::Subprogram_defaultContext *ctx) = 0;

  virtual void enterFormal_package_declaration(AdaParser::Formal_package_declarationContext *ctx) = 0;
  virtual void exitFormal_package_declaration(AdaParser::Formal_package_declarationContext *ctx) = 0;

  virtual void enterFormal_package_actual_part(AdaParser::Formal_package_actual_partContext *ctx) = 0;
  virtual void exitFormal_package_actual_part(AdaParser::Formal_package_actual_partContext *ctx) = 0;

  virtual void enterFormal_package_association(AdaParser::Formal_package_associationContext *ctx) = 0;
  virtual void exitFormal_package_association(AdaParser::Formal_package_associationContext *ctx) = 0;

  virtual void enterAspect_clause(AdaParser::Aspect_clauseContext *ctx) = 0;
  virtual void exitAspect_clause(AdaParser::Aspect_clauseContext *ctx) = 0;

  virtual void enterLocal_name(AdaParser::Local_nameContext *ctx) = 0;
  virtual void exitLocal_name(AdaParser::Local_nameContext *ctx) = 0;

  virtual void enterAspect_specification(AdaParser::Aspect_specificationContext *ctx) = 0;
  virtual void exitAspect_specification(AdaParser::Aspect_specificationContext *ctx) = 0;

  virtual void enterAspect_mark(AdaParser::Aspect_markContext *ctx) = 0;
  virtual void exitAspect_mark(AdaParser::Aspect_markContext *ctx) = 0;

  virtual void enterAspect_identifier(AdaParser::Aspect_identifierContext *ctx) = 0;
  virtual void exitAspect_identifier(AdaParser::Aspect_identifierContext *ctx) = 0;

  virtual void enterAspect_definition(AdaParser::Aspect_definitionContext *ctx) = 0;
  virtual void exitAspect_definition(AdaParser::Aspect_definitionContext *ctx) = 0;

  virtual void enterAttribute_definition_clause(AdaParser::Attribute_definition_clauseContext *ctx) = 0;
  virtual void exitAttribute_definition_clause(AdaParser::Attribute_definition_clauseContext *ctx) = 0;

  virtual void enterEnumeration_representation_clause(AdaParser::Enumeration_representation_clauseContext *ctx) = 0;
  virtual void exitEnumeration_representation_clause(AdaParser::Enumeration_representation_clauseContext *ctx) = 0;

  virtual void enterEnumeration_aggregate(AdaParser::Enumeration_aggregateContext *ctx) = 0;
  virtual void exitEnumeration_aggregate(AdaParser::Enumeration_aggregateContext *ctx) = 0;

  virtual void enterRecord_representation_clause(AdaParser::Record_representation_clauseContext *ctx) = 0;
  virtual void exitRecord_representation_clause(AdaParser::Record_representation_clauseContext *ctx) = 0;

  virtual void enterComponent_clause(AdaParser::Component_clauseContext *ctx) = 0;
  virtual void exitComponent_clause(AdaParser::Component_clauseContext *ctx) = 0;

  virtual void enterComponent_local_name(AdaParser::Component_local_nameContext *ctx) = 0;
  virtual void exitComponent_local_name(AdaParser::Component_local_nameContext *ctx) = 0;

  virtual void enterPosition(AdaParser::PositionContext *ctx) = 0;
  virtual void exitPosition(AdaParser::PositionContext *ctx) = 0;

  virtual void enterFirst_bit(AdaParser::First_bitContext *ctx) = 0;
  virtual void exitFirst_bit(AdaParser::First_bitContext *ctx) = 0;

  virtual void enterLast_bit(AdaParser::Last_bitContext *ctx) = 0;
  virtual void exitLast_bit(AdaParser::Last_bitContext *ctx) = 0;

  virtual void enterDelta_constraint(AdaParser::Delta_constraintContext *ctx) = 0;
  virtual void exitDelta_constraint(AdaParser::Delta_constraintContext *ctx) = 0;

  virtual void enterAt_clause(AdaParser::At_clauseContext *ctx) = 0;
  virtual void exitAt_clause(AdaParser::At_clauseContext *ctx) = 0;

  virtual void enterMod_clause(AdaParser::Mod_clauseContext *ctx) = 0;
  virtual void exitMod_clause(AdaParser::Mod_clauseContext *ctx) = 0;


};

