
// Generated from AdaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "AdaParserListener.h"


/**
 * This class provides an empty implementation of AdaParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AdaParserBaseListener : public AdaParserListener {
public:

  virtual void enterIdentifier(AdaParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(AdaParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterNumeric_literal(AdaParser::Numeric_literalContext * /*ctx*/) override { }
  virtual void exitNumeric_literal(AdaParser::Numeric_literalContext * /*ctx*/) override { }

  virtual void enterCharacter_literal(AdaParser::Character_literalContext * /*ctx*/) override { }
  virtual void exitCharacter_literal(AdaParser::Character_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(AdaParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(AdaParser::String_literalContext * /*ctx*/) override { }

  virtual void enterBasic_declaration(AdaParser::Basic_declarationContext * /*ctx*/) override { }
  virtual void exitBasic_declaration(AdaParser::Basic_declarationContext * /*ctx*/) override { }

  virtual void enterDefining_identifier(AdaParser::Defining_identifierContext * /*ctx*/) override { }
  virtual void exitDefining_identifier(AdaParser::Defining_identifierContext * /*ctx*/) override { }

  virtual void enterType_declaration(AdaParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(AdaParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterFull_type_declaration(AdaParser::Full_type_declarationContext * /*ctx*/) override { }
  virtual void exitFull_type_declaration(AdaParser::Full_type_declarationContext * /*ctx*/) override { }

  virtual void enterType_definition(AdaParser::Type_definitionContext * /*ctx*/) override { }
  virtual void exitType_definition(AdaParser::Type_definitionContext * /*ctx*/) override { }

  virtual void enterSubtype_declaration(AdaParser::Subtype_declarationContext * /*ctx*/) override { }
  virtual void exitSubtype_declaration(AdaParser::Subtype_declarationContext * /*ctx*/) override { }

  virtual void enterSubtype_indication(AdaParser::Subtype_indicationContext * /*ctx*/) override { }
  virtual void exitSubtype_indication(AdaParser::Subtype_indicationContext * /*ctx*/) override { }

  virtual void enterSubtype_mark(AdaParser::Subtype_markContext * /*ctx*/) override { }
  virtual void exitSubtype_mark(AdaParser::Subtype_markContext * /*ctx*/) override { }

  virtual void enterConstraint(AdaParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(AdaParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterScalar_constraint(AdaParser::Scalar_constraintContext * /*ctx*/) override { }
  virtual void exitScalar_constraint(AdaParser::Scalar_constraintContext * /*ctx*/) override { }

  virtual void enterComposite_constraint(AdaParser::Composite_constraintContext * /*ctx*/) override { }
  virtual void exitComposite_constraint(AdaParser::Composite_constraintContext * /*ctx*/) override { }

  virtual void enterObject_declaration(AdaParser::Object_declarationContext * /*ctx*/) override { }
  virtual void exitObject_declaration(AdaParser::Object_declarationContext * /*ctx*/) override { }

  virtual void enterDefining_identifier_list(AdaParser::Defining_identifier_listContext * /*ctx*/) override { }
  virtual void exitDefining_identifier_list(AdaParser::Defining_identifier_listContext * /*ctx*/) override { }

  virtual void enterNumber_declaration(AdaParser::Number_declarationContext * /*ctx*/) override { }
  virtual void exitNumber_declaration(AdaParser::Number_declarationContext * /*ctx*/) override { }

  virtual void enterDerived_type_definition(AdaParser::Derived_type_definitionContext * /*ctx*/) override { }
  virtual void exitDerived_type_definition(AdaParser::Derived_type_definitionContext * /*ctx*/) override { }

  virtual void enterRange_constraint(AdaParser::Range_constraintContext * /*ctx*/) override { }
  virtual void exitRange_constraint(AdaParser::Range_constraintContext * /*ctx*/) override { }

  virtual void enterRange(AdaParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(AdaParser::RangeContext * /*ctx*/) override { }

  virtual void enterEnumeration_type_definition(AdaParser::Enumeration_type_definitionContext * /*ctx*/) override { }
  virtual void exitEnumeration_type_definition(AdaParser::Enumeration_type_definitionContext * /*ctx*/) override { }

  virtual void enterEnumeration_literal_specification(AdaParser::Enumeration_literal_specificationContext * /*ctx*/) override { }
  virtual void exitEnumeration_literal_specification(AdaParser::Enumeration_literal_specificationContext * /*ctx*/) override { }

  virtual void enterInteger_type_definition(AdaParser::Integer_type_definitionContext * /*ctx*/) override { }
  virtual void exitInteger_type_definition(AdaParser::Integer_type_definitionContext * /*ctx*/) override { }

  virtual void enterSigned_integer_type_definition(AdaParser::Signed_integer_type_definitionContext * /*ctx*/) override { }
  virtual void exitSigned_integer_type_definition(AdaParser::Signed_integer_type_definitionContext * /*ctx*/) override { }

  virtual void enterModular_type_definition(AdaParser::Modular_type_definitionContext * /*ctx*/) override { }
  virtual void exitModular_type_definition(AdaParser::Modular_type_definitionContext * /*ctx*/) override { }

  virtual void enterReal_type_definition(AdaParser::Real_type_definitionContext * /*ctx*/) override { }
  virtual void exitReal_type_definition(AdaParser::Real_type_definitionContext * /*ctx*/) override { }

  virtual void enterFloating_point_definition(AdaParser::Floating_point_definitionContext * /*ctx*/) override { }
  virtual void exitFloating_point_definition(AdaParser::Floating_point_definitionContext * /*ctx*/) override { }

  virtual void enterReal_range_specification(AdaParser::Real_range_specificationContext * /*ctx*/) override { }
  virtual void exitReal_range_specification(AdaParser::Real_range_specificationContext * /*ctx*/) override { }

  virtual void enterFixed_point_definition(AdaParser::Fixed_point_definitionContext * /*ctx*/) override { }
  virtual void exitFixed_point_definition(AdaParser::Fixed_point_definitionContext * /*ctx*/) override { }

  virtual void enterOrdinary_fixed_point_definition(AdaParser::Ordinary_fixed_point_definitionContext * /*ctx*/) override { }
  virtual void exitOrdinary_fixed_point_definition(AdaParser::Ordinary_fixed_point_definitionContext * /*ctx*/) override { }

  virtual void enterDecimal_fixed_point_definition(AdaParser::Decimal_fixed_point_definitionContext * /*ctx*/) override { }
  virtual void exitDecimal_fixed_point_definition(AdaParser::Decimal_fixed_point_definitionContext * /*ctx*/) override { }

  virtual void enterDigits_constraint(AdaParser::Digits_constraintContext * /*ctx*/) override { }
  virtual void exitDigits_constraint(AdaParser::Digits_constraintContext * /*ctx*/) override { }

  virtual void enterArray_type_definition(AdaParser::Array_type_definitionContext * /*ctx*/) override { }
  virtual void exitArray_type_definition(AdaParser::Array_type_definitionContext * /*ctx*/) override { }

  virtual void enterUnconstrained_array_definition(AdaParser::Unconstrained_array_definitionContext * /*ctx*/) override { }
  virtual void exitUnconstrained_array_definition(AdaParser::Unconstrained_array_definitionContext * /*ctx*/) override { }

  virtual void enterIndex_subtype_definition(AdaParser::Index_subtype_definitionContext * /*ctx*/) override { }
  virtual void exitIndex_subtype_definition(AdaParser::Index_subtype_definitionContext * /*ctx*/) override { }

  virtual void enterConstrained_array_definition(AdaParser::Constrained_array_definitionContext * /*ctx*/) override { }
  virtual void exitConstrained_array_definition(AdaParser::Constrained_array_definitionContext * /*ctx*/) override { }

  virtual void enterDiscrete_subtype_definition(AdaParser::Discrete_subtype_definitionContext * /*ctx*/) override { }
  virtual void exitDiscrete_subtype_definition(AdaParser::Discrete_subtype_definitionContext * /*ctx*/) override { }

  virtual void enterComponent_definition(AdaParser::Component_definitionContext * /*ctx*/) override { }
  virtual void exitComponent_definition(AdaParser::Component_definitionContext * /*ctx*/) override { }

  virtual void enterIndex_constraint(AdaParser::Index_constraintContext * /*ctx*/) override { }
  virtual void exitIndex_constraint(AdaParser::Index_constraintContext * /*ctx*/) override { }

  virtual void enterDiscrete_range(AdaParser::Discrete_rangeContext * /*ctx*/) override { }
  virtual void exitDiscrete_range(AdaParser::Discrete_rangeContext * /*ctx*/) override { }

  virtual void enterDiscriminant_part(AdaParser::Discriminant_partContext * /*ctx*/) override { }
  virtual void exitDiscriminant_part(AdaParser::Discriminant_partContext * /*ctx*/) override { }

  virtual void enterUnknown_discriminant_part(AdaParser::Unknown_discriminant_partContext * /*ctx*/) override { }
  virtual void exitUnknown_discriminant_part(AdaParser::Unknown_discriminant_partContext * /*ctx*/) override { }

  virtual void enterKnown_discriminant_part(AdaParser::Known_discriminant_partContext * /*ctx*/) override { }
  virtual void exitKnown_discriminant_part(AdaParser::Known_discriminant_partContext * /*ctx*/) override { }

  virtual void enterDiscriminant_specification(AdaParser::Discriminant_specificationContext * /*ctx*/) override { }
  virtual void exitDiscriminant_specification(AdaParser::Discriminant_specificationContext * /*ctx*/) override { }

  virtual void enterDefault_expression(AdaParser::Default_expressionContext * /*ctx*/) override { }
  virtual void exitDefault_expression(AdaParser::Default_expressionContext * /*ctx*/) override { }

  virtual void enterDiscriminant_constraint(AdaParser::Discriminant_constraintContext * /*ctx*/) override { }
  virtual void exitDiscriminant_constraint(AdaParser::Discriminant_constraintContext * /*ctx*/) override { }

  virtual void enterDiscriminant_association(AdaParser::Discriminant_associationContext * /*ctx*/) override { }
  virtual void exitDiscriminant_association(AdaParser::Discriminant_associationContext * /*ctx*/) override { }

  virtual void enterRecord_type_definition(AdaParser::Record_type_definitionContext * /*ctx*/) override { }
  virtual void exitRecord_type_definition(AdaParser::Record_type_definitionContext * /*ctx*/) override { }

  virtual void enterRecord_definition(AdaParser::Record_definitionContext * /*ctx*/) override { }
  virtual void exitRecord_definition(AdaParser::Record_definitionContext * /*ctx*/) override { }

  virtual void enterComponent_list(AdaParser::Component_listContext * /*ctx*/) override { }
  virtual void exitComponent_list(AdaParser::Component_listContext * /*ctx*/) override { }

  virtual void enterComponent_item(AdaParser::Component_itemContext * /*ctx*/) override { }
  virtual void exitComponent_item(AdaParser::Component_itemContext * /*ctx*/) override { }

  virtual void enterComponent_declaration(AdaParser::Component_declarationContext * /*ctx*/) override { }
  virtual void exitComponent_declaration(AdaParser::Component_declarationContext * /*ctx*/) override { }

  virtual void enterVariant_part(AdaParser::Variant_partContext * /*ctx*/) override { }
  virtual void exitVariant_part(AdaParser::Variant_partContext * /*ctx*/) override { }

  virtual void enterVariant(AdaParser::VariantContext * /*ctx*/) override { }
  virtual void exitVariant(AdaParser::VariantContext * /*ctx*/) override { }

  virtual void enterDiscrete_choice_list(AdaParser::Discrete_choice_listContext * /*ctx*/) override { }
  virtual void exitDiscrete_choice_list(AdaParser::Discrete_choice_listContext * /*ctx*/) override { }

  virtual void enterDiscrete_choice(AdaParser::Discrete_choiceContext * /*ctx*/) override { }
  virtual void exitDiscrete_choice(AdaParser::Discrete_choiceContext * /*ctx*/) override { }

  virtual void enterRecord_extension_part(AdaParser::Record_extension_partContext * /*ctx*/) override { }
  virtual void exitRecord_extension_part(AdaParser::Record_extension_partContext * /*ctx*/) override { }

  virtual void enterAbstract_subprogram_declaration(AdaParser::Abstract_subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitAbstract_subprogram_declaration(AdaParser::Abstract_subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_type_definition(AdaParser::Interface_type_definitionContext * /*ctx*/) override { }
  virtual void exitInterface_type_definition(AdaParser::Interface_type_definitionContext * /*ctx*/) override { }

  virtual void enterInterface_list(AdaParser::Interface_listContext * /*ctx*/) override { }
  virtual void exitInterface_list(AdaParser::Interface_listContext * /*ctx*/) override { }

  virtual void enterAccess_type_definition(AdaParser::Access_type_definitionContext * /*ctx*/) override { }
  virtual void exitAccess_type_definition(AdaParser::Access_type_definitionContext * /*ctx*/) override { }

  virtual void enterAccess_to_object_definition(AdaParser::Access_to_object_definitionContext * /*ctx*/) override { }
  virtual void exitAccess_to_object_definition(AdaParser::Access_to_object_definitionContext * /*ctx*/) override { }

  virtual void enterGeneral_access_modifier(AdaParser::General_access_modifierContext * /*ctx*/) override { }
  virtual void exitGeneral_access_modifier(AdaParser::General_access_modifierContext * /*ctx*/) override { }

  virtual void enterAccess_to_subprogram_definition(AdaParser::Access_to_subprogram_definitionContext * /*ctx*/) override { }
  virtual void exitAccess_to_subprogram_definition(AdaParser::Access_to_subprogram_definitionContext * /*ctx*/) override { }

  virtual void enterNull_exclusion(AdaParser::Null_exclusionContext * /*ctx*/) override { }
  virtual void exitNull_exclusion(AdaParser::Null_exclusionContext * /*ctx*/) override { }

  virtual void enterAccess_definition(AdaParser::Access_definitionContext * /*ctx*/) override { }
  virtual void exitAccess_definition(AdaParser::Access_definitionContext * /*ctx*/) override { }

  virtual void enterIncomplete_type_declaration(AdaParser::Incomplete_type_declarationContext * /*ctx*/) override { }
  virtual void exitIncomplete_type_declaration(AdaParser::Incomplete_type_declarationContext * /*ctx*/) override { }

  virtual void enterDeclarative_part(AdaParser::Declarative_partContext * /*ctx*/) override { }
  virtual void exitDeclarative_part(AdaParser::Declarative_partContext * /*ctx*/) override { }

  virtual void enterDeclarative_item(AdaParser::Declarative_itemContext * /*ctx*/) override { }
  virtual void exitDeclarative_item(AdaParser::Declarative_itemContext * /*ctx*/) override { }

  virtual void enterBasic_declarative_item(AdaParser::Basic_declarative_itemContext * /*ctx*/) override { }
  virtual void exitBasic_declarative_item(AdaParser::Basic_declarative_itemContext * /*ctx*/) override { }

  virtual void enterBody(AdaParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(AdaParser::BodyContext * /*ctx*/) override { }

  virtual void enterProper_body(AdaParser::Proper_bodyContext * /*ctx*/) override { }
  virtual void exitProper_body(AdaParser::Proper_bodyContext * /*ctx*/) override { }

  virtual void enterName(AdaParser::NameContext * /*ctx*/) override { }
  virtual void exitName(AdaParser::NameContext * /*ctx*/) override { }

  virtual void enterDirect_name(AdaParser::Direct_nameContext * /*ctx*/) override { }
  virtual void exitDirect_name(AdaParser::Direct_nameContext * /*ctx*/) override { }

  virtual void enterSelector_name(AdaParser::Selector_nameContext * /*ctx*/) override { }
  virtual void exitSelector_name(AdaParser::Selector_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_designator(AdaParser::Attribute_designatorContext * /*ctx*/) override { }
  virtual void exitAttribute_designator(AdaParser::Attribute_designatorContext * /*ctx*/) override { }

  virtual void enterRange_attribute_reference(AdaParser::Range_attribute_referenceContext * /*ctx*/) override { }
  virtual void exitRange_attribute_reference(AdaParser::Range_attribute_referenceContext * /*ctx*/) override { }

  virtual void enterRange_attribute_designator(AdaParser::Range_attribute_designatorContext * /*ctx*/) override { }
  virtual void exitRange_attribute_designator(AdaParser::Range_attribute_designatorContext * /*ctx*/) override { }

  virtual void enterAggregate(AdaParser::AggregateContext * /*ctx*/) override { }
  virtual void exitAggregate(AdaParser::AggregateContext * /*ctx*/) override { }

  virtual void enterRecord_aggregate(AdaParser::Record_aggregateContext * /*ctx*/) override { }
  virtual void exitRecord_aggregate(AdaParser::Record_aggregateContext * /*ctx*/) override { }

  virtual void enterRecord_component_association_list(AdaParser::Record_component_association_listContext * /*ctx*/) override { }
  virtual void exitRecord_component_association_list(AdaParser::Record_component_association_listContext * /*ctx*/) override { }

  virtual void enterRecord_component_association(AdaParser::Record_component_associationContext * /*ctx*/) override { }
  virtual void exitRecord_component_association(AdaParser::Record_component_associationContext * /*ctx*/) override { }

  virtual void enterComponent_choice_list(AdaParser::Component_choice_listContext * /*ctx*/) override { }
  virtual void exitComponent_choice_list(AdaParser::Component_choice_listContext * /*ctx*/) override { }

  virtual void enterExtension_aggregate(AdaParser::Extension_aggregateContext * /*ctx*/) override { }
  virtual void exitExtension_aggregate(AdaParser::Extension_aggregateContext * /*ctx*/) override { }

  virtual void enterAncestor_part(AdaParser::Ancestor_partContext * /*ctx*/) override { }
  virtual void exitAncestor_part(AdaParser::Ancestor_partContext * /*ctx*/) override { }

  virtual void enterArray_aggregate(AdaParser::Array_aggregateContext * /*ctx*/) override { }
  virtual void exitArray_aggregate(AdaParser::Array_aggregateContext * /*ctx*/) override { }

  virtual void enterPositional_array_aggregate(AdaParser::Positional_array_aggregateContext * /*ctx*/) override { }
  virtual void exitPositional_array_aggregate(AdaParser::Positional_array_aggregateContext * /*ctx*/) override { }

  virtual void enterNamed_array_aggregate(AdaParser::Named_array_aggregateContext * /*ctx*/) override { }
  virtual void exitNamed_array_aggregate(AdaParser::Named_array_aggregateContext * /*ctx*/) override { }

  virtual void enterArray_component_association(AdaParser::Array_component_associationContext * /*ctx*/) override { }
  virtual void exitArray_component_association(AdaParser::Array_component_associationContext * /*ctx*/) override { }

  virtual void enterExpression(AdaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(AdaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterChoice_expression(AdaParser::Choice_expressionContext * /*ctx*/) override { }
  virtual void exitChoice_expression(AdaParser::Choice_expressionContext * /*ctx*/) override { }

  virtual void enterChoice_relation(AdaParser::Choice_relationContext * /*ctx*/) override { }
  virtual void exitChoice_relation(AdaParser::Choice_relationContext * /*ctx*/) override { }

  virtual void enterRelation(AdaParser::RelationContext * /*ctx*/) override { }
  virtual void exitRelation(AdaParser::RelationContext * /*ctx*/) override { }

  virtual void enterMembership_choice_list(AdaParser::Membership_choice_listContext * /*ctx*/) override { }
  virtual void exitMembership_choice_list(AdaParser::Membership_choice_listContext * /*ctx*/) override { }

  virtual void enterMembership_choice(AdaParser::Membership_choiceContext * /*ctx*/) override { }
  virtual void exitMembership_choice(AdaParser::Membership_choiceContext * /*ctx*/) override { }

  virtual void enterSimple_expression(AdaParser::Simple_expressionContext * /*ctx*/) override { }
  virtual void exitSimple_expression(AdaParser::Simple_expressionContext * /*ctx*/) override { }

  virtual void enterTerm(AdaParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(AdaParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(AdaParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(AdaParser::FactorContext * /*ctx*/) override { }

  virtual void enterPrimary(AdaParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(AdaParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterLogical_operator(AdaParser::Logical_operatorContext * /*ctx*/) override { }
  virtual void exitLogical_operator(AdaParser::Logical_operatorContext * /*ctx*/) override { }

  virtual void enterRelational_operator(AdaParser::Relational_operatorContext * /*ctx*/) override { }
  virtual void exitRelational_operator(AdaParser::Relational_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_adding_operator(AdaParser::Binary_adding_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_adding_operator(AdaParser::Binary_adding_operatorContext * /*ctx*/) override { }

  virtual void enterUnary_adding_operator(AdaParser::Unary_adding_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_adding_operator(AdaParser::Unary_adding_operatorContext * /*ctx*/) override { }

  virtual void enterMultiplying_operator(AdaParser::Multiplying_operatorContext * /*ctx*/) override { }
  virtual void exitMultiplying_operator(AdaParser::Multiplying_operatorContext * /*ctx*/) override { }

  virtual void enterHighest_precedence_operator(AdaParser::Highest_precedence_operatorContext * /*ctx*/) override { }
  virtual void exitHighest_precedence_operator(AdaParser::Highest_precedence_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(AdaParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(AdaParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterIf_expression(AdaParser::If_expressionContext * /*ctx*/) override { }
  virtual void exitIf_expression(AdaParser::If_expressionContext * /*ctx*/) override { }

  virtual void enterCondition(AdaParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(AdaParser::ConditionContext * /*ctx*/) override { }

  virtual void enterCase_expression(AdaParser::Case_expressionContext * /*ctx*/) override { }
  virtual void exitCase_expression(AdaParser::Case_expressionContext * /*ctx*/) override { }

  virtual void enterCase_expression_alternative(AdaParser::Case_expression_alternativeContext * /*ctx*/) override { }
  virtual void exitCase_expression_alternative(AdaParser::Case_expression_alternativeContext * /*ctx*/) override { }

  virtual void enterQuantified_expression(AdaParser::Quantified_expressionContext * /*ctx*/) override { }
  virtual void exitQuantified_expression(AdaParser::Quantified_expressionContext * /*ctx*/) override { }

  virtual void enterQuantifier(AdaParser::QuantifierContext * /*ctx*/) override { }
  virtual void exitQuantifier(AdaParser::QuantifierContext * /*ctx*/) override { }

  virtual void enterPredicate(AdaParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(AdaParser::PredicateContext * /*ctx*/) override { }

  virtual void enterType_conversion(AdaParser::Type_conversionContext * /*ctx*/) override { }
  virtual void exitType_conversion(AdaParser::Type_conversionContext * /*ctx*/) override { }

  virtual void enterQualified_expression(AdaParser::Qualified_expressionContext * /*ctx*/) override { }
  virtual void exitQualified_expression(AdaParser::Qualified_expressionContext * /*ctx*/) override { }

  virtual void enterAllocator(AdaParser::AllocatorContext * /*ctx*/) override { }
  virtual void exitAllocator(AdaParser::AllocatorContext * /*ctx*/) override { }

  virtual void enterSubpool_specification(AdaParser::Subpool_specificationContext * /*ctx*/) override { }
  virtual void exitSubpool_specification(AdaParser::Subpool_specificationContext * /*ctx*/) override { }

  virtual void enterSequence_of_statements(AdaParser::Sequence_of_statementsContext * /*ctx*/) override { }
  virtual void exitSequence_of_statements(AdaParser::Sequence_of_statementsContext * /*ctx*/) override { }

  virtual void enterStatement(AdaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(AdaParser::StatementContext * /*ctx*/) override { }

  virtual void enterSimple_statement(AdaParser::Simple_statementContext * /*ctx*/) override { }
  virtual void exitSimple_statement(AdaParser::Simple_statementContext * /*ctx*/) override { }

  virtual void enterCompound_statement(AdaParser::Compound_statementContext * /*ctx*/) override { }
  virtual void exitCompound_statement(AdaParser::Compound_statementContext * /*ctx*/) override { }

  virtual void enterNull_statement(AdaParser::Null_statementContext * /*ctx*/) override { }
  virtual void exitNull_statement(AdaParser::Null_statementContext * /*ctx*/) override { }

  virtual void enterLabel(AdaParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(AdaParser::LabelContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(AdaParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(AdaParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(AdaParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(AdaParser::If_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(AdaParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(AdaParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement_alternative(AdaParser::Case_statement_alternativeContext * /*ctx*/) override { }
  virtual void exitCase_statement_alternative(AdaParser::Case_statement_alternativeContext * /*ctx*/) override { }

  virtual void enterLoop_statement(AdaParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(AdaParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterIteration_scheme(AdaParser::Iteration_schemeContext * /*ctx*/) override { }
  virtual void exitIteration_scheme(AdaParser::Iteration_schemeContext * /*ctx*/) override { }

  virtual void enterLoop_parameter_specification(AdaParser::Loop_parameter_specificationContext * /*ctx*/) override { }
  virtual void exitLoop_parameter_specification(AdaParser::Loop_parameter_specificationContext * /*ctx*/) override { }

  virtual void enterIterator_specification(AdaParser::Iterator_specificationContext * /*ctx*/) override { }
  virtual void exitIterator_specification(AdaParser::Iterator_specificationContext * /*ctx*/) override { }

  virtual void enterBlock_statement(AdaParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(AdaParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterExit_statement(AdaParser::Exit_statementContext * /*ctx*/) override { }
  virtual void exitExit_statement(AdaParser::Exit_statementContext * /*ctx*/) override { }

  virtual void enterGoto_statement(AdaParser::Goto_statementContext * /*ctx*/) override { }
  virtual void exitGoto_statement(AdaParser::Goto_statementContext * /*ctx*/) override { }

  virtual void enterSubprogram_declaration(AdaParser::Subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitSubprogram_declaration(AdaParser::Subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterSubprogram_specification(AdaParser::Subprogram_specificationContext * /*ctx*/) override { }
  virtual void exitSubprogram_specification(AdaParser::Subprogram_specificationContext * /*ctx*/) override { }

  virtual void enterProcedure_specification(AdaParser::Procedure_specificationContext * /*ctx*/) override { }
  virtual void exitProcedure_specification(AdaParser::Procedure_specificationContext * /*ctx*/) override { }

  virtual void enterFunction_specification(AdaParser::Function_specificationContext * /*ctx*/) override { }
  virtual void exitFunction_specification(AdaParser::Function_specificationContext * /*ctx*/) override { }

  virtual void enterDesignator(AdaParser::DesignatorContext * /*ctx*/) override { }
  virtual void exitDesignator(AdaParser::DesignatorContext * /*ctx*/) override { }

  virtual void enterDefining_designator(AdaParser::Defining_designatorContext * /*ctx*/) override { }
  virtual void exitDefining_designator(AdaParser::Defining_designatorContext * /*ctx*/) override { }

  virtual void enterDefining_program_unit_name(AdaParser::Defining_program_unit_nameContext * /*ctx*/) override { }
  virtual void exitDefining_program_unit_name(AdaParser::Defining_program_unit_nameContext * /*ctx*/) override { }

  virtual void enterOperator_symbol(AdaParser::Operator_symbolContext * /*ctx*/) override { }
  virtual void exitOperator_symbol(AdaParser::Operator_symbolContext * /*ctx*/) override { }

  virtual void enterDefining_operator_symbol(AdaParser::Defining_operator_symbolContext * /*ctx*/) override { }
  virtual void exitDefining_operator_symbol(AdaParser::Defining_operator_symbolContext * /*ctx*/) override { }

  virtual void enterParameter_and_result_profile(AdaParser::Parameter_and_result_profileContext * /*ctx*/) override { }
  virtual void exitParameter_and_result_profile(AdaParser::Parameter_and_result_profileContext * /*ctx*/) override { }

  virtual void enterFormal_part(AdaParser::Formal_partContext * /*ctx*/) override { }
  virtual void exitFormal_part(AdaParser::Formal_partContext * /*ctx*/) override { }

  virtual void enterParameter_specification(AdaParser::Parameter_specificationContext * /*ctx*/) override { }
  virtual void exitParameter_specification(AdaParser::Parameter_specificationContext * /*ctx*/) override { }

  virtual void enterMode_(AdaParser::Mode_Context * /*ctx*/) override { }
  virtual void exitMode_(AdaParser::Mode_Context * /*ctx*/) override { }

  virtual void enterSubprogram_body(AdaParser::Subprogram_bodyContext * /*ctx*/) override { }
  virtual void exitSubprogram_body(AdaParser::Subprogram_bodyContext * /*ctx*/) override { }

  virtual void enterProcedure_call_statement(AdaParser::Procedure_call_statementContext * /*ctx*/) override { }
  virtual void exitProcedure_call_statement(AdaParser::Procedure_call_statementContext * /*ctx*/) override { }

  virtual void enterActual_parameter_part(AdaParser::Actual_parameter_partContext * /*ctx*/) override { }
  virtual void exitActual_parameter_part(AdaParser::Actual_parameter_partContext * /*ctx*/) override { }

  virtual void enterParameter_association(AdaParser::Parameter_associationContext * /*ctx*/) override { }
  virtual void exitParameter_association(AdaParser::Parameter_associationContext * /*ctx*/) override { }

  virtual void enterExplicit_actual_parameter(AdaParser::Explicit_actual_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_actual_parameter(AdaParser::Explicit_actual_parameterContext * /*ctx*/) override { }

  virtual void enterSimple_return_statement(AdaParser::Simple_return_statementContext * /*ctx*/) override { }
  virtual void exitSimple_return_statement(AdaParser::Simple_return_statementContext * /*ctx*/) override { }

  virtual void enterExtended_return_object_declaration(AdaParser::Extended_return_object_declarationContext * /*ctx*/) override { }
  virtual void exitExtended_return_object_declaration(AdaParser::Extended_return_object_declarationContext * /*ctx*/) override { }

  virtual void enterExtended_return_statement(AdaParser::Extended_return_statementContext * /*ctx*/) override { }
  virtual void exitExtended_return_statement(AdaParser::Extended_return_statementContext * /*ctx*/) override { }

  virtual void enterReturn_subtype_indication(AdaParser::Return_subtype_indicationContext * /*ctx*/) override { }
  virtual void exitReturn_subtype_indication(AdaParser::Return_subtype_indicationContext * /*ctx*/) override { }

  virtual void enterNull_procedure_declaration(AdaParser::Null_procedure_declarationContext * /*ctx*/) override { }
  virtual void exitNull_procedure_declaration(AdaParser::Null_procedure_declarationContext * /*ctx*/) override { }

  virtual void enterExpression_function_declaration(AdaParser::Expression_function_declarationContext * /*ctx*/) override { }
  virtual void exitExpression_function_declaration(AdaParser::Expression_function_declarationContext * /*ctx*/) override { }

  virtual void enterPackage_declaration(AdaParser::Package_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_declaration(AdaParser::Package_declarationContext * /*ctx*/) override { }

  virtual void enterPackage_specification(AdaParser::Package_specificationContext * /*ctx*/) override { }
  virtual void exitPackage_specification(AdaParser::Package_specificationContext * /*ctx*/) override { }

  virtual void enterPackage_body(AdaParser::Package_bodyContext * /*ctx*/) override { }
  virtual void exitPackage_body(AdaParser::Package_bodyContext * /*ctx*/) override { }

  virtual void enterPrivate_type_declaration(AdaParser::Private_type_declarationContext * /*ctx*/) override { }
  virtual void exitPrivate_type_declaration(AdaParser::Private_type_declarationContext * /*ctx*/) override { }

  virtual void enterPrivate_extension_declaration(AdaParser::Private_extension_declarationContext * /*ctx*/) override { }
  virtual void exitPrivate_extension_declaration(AdaParser::Private_extension_declarationContext * /*ctx*/) override { }

  virtual void enterOverriding_indicator(AdaParser::Overriding_indicatorContext * /*ctx*/) override { }
  virtual void exitOverriding_indicator(AdaParser::Overriding_indicatorContext * /*ctx*/) override { }

  virtual void enterUse_clause(AdaParser::Use_clauseContext * /*ctx*/) override { }
  virtual void exitUse_clause(AdaParser::Use_clauseContext * /*ctx*/) override { }

  virtual void enterUse_package_clause(AdaParser::Use_package_clauseContext * /*ctx*/) override { }
  virtual void exitUse_package_clause(AdaParser::Use_package_clauseContext * /*ctx*/) override { }

  virtual void enterUse_type_clause(AdaParser::Use_type_clauseContext * /*ctx*/) override { }
  virtual void exitUse_type_clause(AdaParser::Use_type_clauseContext * /*ctx*/) override { }

  virtual void enterRenaming_declaration(AdaParser::Renaming_declarationContext * /*ctx*/) override { }
  virtual void exitRenaming_declaration(AdaParser::Renaming_declarationContext * /*ctx*/) override { }

  virtual void enterObject_renaming_declaration(AdaParser::Object_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitObject_renaming_declaration(AdaParser::Object_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterException_renaming_declaration(AdaParser::Exception_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitException_renaming_declaration(AdaParser::Exception_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterPackage_renaming_declaration(AdaParser::Package_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_renaming_declaration(AdaParser::Package_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterSubprogram_renaming_declaration(AdaParser::Subprogram_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitSubprogram_renaming_declaration(AdaParser::Subprogram_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterGeneric_renaming_declaration(AdaParser::Generic_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitGeneric_renaming_declaration(AdaParser::Generic_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterTask_type_declaration(AdaParser::Task_type_declarationContext * /*ctx*/) override { }
  virtual void exitTask_type_declaration(AdaParser::Task_type_declarationContext * /*ctx*/) override { }

  virtual void enterSingle_task_declaration(AdaParser::Single_task_declarationContext * /*ctx*/) override { }
  virtual void exitSingle_task_declaration(AdaParser::Single_task_declarationContext * /*ctx*/) override { }

  virtual void enterTask_definition(AdaParser::Task_definitionContext * /*ctx*/) override { }
  virtual void exitTask_definition(AdaParser::Task_definitionContext * /*ctx*/) override { }

  virtual void enterTask_item(AdaParser::Task_itemContext * /*ctx*/) override { }
  virtual void exitTask_item(AdaParser::Task_itemContext * /*ctx*/) override { }

  virtual void enterTask_body(AdaParser::Task_bodyContext * /*ctx*/) override { }
  virtual void exitTask_body(AdaParser::Task_bodyContext * /*ctx*/) override { }

  virtual void enterProtected_type_declaration(AdaParser::Protected_type_declarationContext * /*ctx*/) override { }
  virtual void exitProtected_type_declaration(AdaParser::Protected_type_declarationContext * /*ctx*/) override { }

  virtual void enterSingle_protected_declaration(AdaParser::Single_protected_declarationContext * /*ctx*/) override { }
  virtual void exitSingle_protected_declaration(AdaParser::Single_protected_declarationContext * /*ctx*/) override { }

  virtual void enterProtected_definition(AdaParser::Protected_definitionContext * /*ctx*/) override { }
  virtual void exitProtected_definition(AdaParser::Protected_definitionContext * /*ctx*/) override { }

  virtual void enterProtected_operation_declaration(AdaParser::Protected_operation_declarationContext * /*ctx*/) override { }
  virtual void exitProtected_operation_declaration(AdaParser::Protected_operation_declarationContext * /*ctx*/) override { }

  virtual void enterProtected_element_declaration(AdaParser::Protected_element_declarationContext * /*ctx*/) override { }
  virtual void exitProtected_element_declaration(AdaParser::Protected_element_declarationContext * /*ctx*/) override { }

  virtual void enterProtected_body(AdaParser::Protected_bodyContext * /*ctx*/) override { }
  virtual void exitProtected_body(AdaParser::Protected_bodyContext * /*ctx*/) override { }

  virtual void enterProtected_operation_item(AdaParser::Protected_operation_itemContext * /*ctx*/) override { }
  virtual void exitProtected_operation_item(AdaParser::Protected_operation_itemContext * /*ctx*/) override { }

  virtual void enterEntry_declaration(AdaParser::Entry_declarationContext * /*ctx*/) override { }
  virtual void exitEntry_declaration(AdaParser::Entry_declarationContext * /*ctx*/) override { }

  virtual void enterAccept_statement(AdaParser::Accept_statementContext * /*ctx*/) override { }
  virtual void exitAccept_statement(AdaParser::Accept_statementContext * /*ctx*/) override { }

  virtual void enterEntry_direct_name(AdaParser::Entry_direct_nameContext * /*ctx*/) override { }
  virtual void exitEntry_direct_name(AdaParser::Entry_direct_nameContext * /*ctx*/) override { }

  virtual void enterEntry_index(AdaParser::Entry_indexContext * /*ctx*/) override { }
  virtual void exitEntry_index(AdaParser::Entry_indexContext * /*ctx*/) override { }

  virtual void enterEntry_body(AdaParser::Entry_bodyContext * /*ctx*/) override { }
  virtual void exitEntry_body(AdaParser::Entry_bodyContext * /*ctx*/) override { }

  virtual void enterEntry_identifier(AdaParser::Entry_identifierContext * /*ctx*/) override { }
  virtual void exitEntry_identifier(AdaParser::Entry_identifierContext * /*ctx*/) override { }

  virtual void enterEntry_body_formal_part(AdaParser::Entry_body_formal_partContext * /*ctx*/) override { }
  virtual void exitEntry_body_formal_part(AdaParser::Entry_body_formal_partContext * /*ctx*/) override { }

  virtual void enterEntry_barrier(AdaParser::Entry_barrierContext * /*ctx*/) override { }
  virtual void exitEntry_barrier(AdaParser::Entry_barrierContext * /*ctx*/) override { }

  virtual void enterEntry_index_specification(AdaParser::Entry_index_specificationContext * /*ctx*/) override { }
  virtual void exitEntry_index_specification(AdaParser::Entry_index_specificationContext * /*ctx*/) override { }

  virtual void enterEntry_call_statement(AdaParser::Entry_call_statementContext * /*ctx*/) override { }
  virtual void exitEntry_call_statement(AdaParser::Entry_call_statementContext * /*ctx*/) override { }

  virtual void enterRequeue_statement(AdaParser::Requeue_statementContext * /*ctx*/) override { }
  virtual void exitRequeue_statement(AdaParser::Requeue_statementContext * /*ctx*/) override { }

  virtual void enterDelay_statement(AdaParser::Delay_statementContext * /*ctx*/) override { }
  virtual void exitDelay_statement(AdaParser::Delay_statementContext * /*ctx*/) override { }

  virtual void enterDelay_until_statement(AdaParser::Delay_until_statementContext * /*ctx*/) override { }
  virtual void exitDelay_until_statement(AdaParser::Delay_until_statementContext * /*ctx*/) override { }

  virtual void enterDelay_relative_statement(AdaParser::Delay_relative_statementContext * /*ctx*/) override { }
  virtual void exitDelay_relative_statement(AdaParser::Delay_relative_statementContext * /*ctx*/) override { }

  virtual void enterDelay_expression(AdaParser::Delay_expressionContext * /*ctx*/) override { }
  virtual void exitDelay_expression(AdaParser::Delay_expressionContext * /*ctx*/) override { }

  virtual void enterSelect_statement(AdaParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(AdaParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterSelective_accept(AdaParser::Selective_acceptContext * /*ctx*/) override { }
  virtual void exitSelective_accept(AdaParser::Selective_acceptContext * /*ctx*/) override { }

  virtual void enterGuard(AdaParser::GuardContext * /*ctx*/) override { }
  virtual void exitGuard(AdaParser::GuardContext * /*ctx*/) override { }

  virtual void enterSelect_alternative(AdaParser::Select_alternativeContext * /*ctx*/) override { }
  virtual void exitSelect_alternative(AdaParser::Select_alternativeContext * /*ctx*/) override { }

  virtual void enterAccept_alternative(AdaParser::Accept_alternativeContext * /*ctx*/) override { }
  virtual void exitAccept_alternative(AdaParser::Accept_alternativeContext * /*ctx*/) override { }

  virtual void enterDelay_alternative(AdaParser::Delay_alternativeContext * /*ctx*/) override { }
  virtual void exitDelay_alternative(AdaParser::Delay_alternativeContext * /*ctx*/) override { }

  virtual void enterTerminate_alternative(AdaParser::Terminate_alternativeContext * /*ctx*/) override { }
  virtual void exitTerminate_alternative(AdaParser::Terminate_alternativeContext * /*ctx*/) override { }

  virtual void enterTimed_entry_call(AdaParser::Timed_entry_callContext * /*ctx*/) override { }
  virtual void exitTimed_entry_call(AdaParser::Timed_entry_callContext * /*ctx*/) override { }

  virtual void enterEntry_call_alternative(AdaParser::Entry_call_alternativeContext * /*ctx*/) override { }
  virtual void exitEntry_call_alternative(AdaParser::Entry_call_alternativeContext * /*ctx*/) override { }

  virtual void enterProcedure_or_entry_call(AdaParser::Procedure_or_entry_callContext * /*ctx*/) override { }
  virtual void exitProcedure_or_entry_call(AdaParser::Procedure_or_entry_callContext * /*ctx*/) override { }

  virtual void enterConditional_entry_call(AdaParser::Conditional_entry_callContext * /*ctx*/) override { }
  virtual void exitConditional_entry_call(AdaParser::Conditional_entry_callContext * /*ctx*/) override { }

  virtual void enterAsynchronous_select(AdaParser::Asynchronous_selectContext * /*ctx*/) override { }
  virtual void exitAsynchronous_select(AdaParser::Asynchronous_selectContext * /*ctx*/) override { }

  virtual void enterTriggering_alternative(AdaParser::Triggering_alternativeContext * /*ctx*/) override { }
  virtual void exitTriggering_alternative(AdaParser::Triggering_alternativeContext * /*ctx*/) override { }

  virtual void enterTriggering_statement(AdaParser::Triggering_statementContext * /*ctx*/) override { }
  virtual void exitTriggering_statement(AdaParser::Triggering_statementContext * /*ctx*/) override { }

  virtual void enterAbortable_part(AdaParser::Abortable_partContext * /*ctx*/) override { }
  virtual void exitAbortable_part(AdaParser::Abortable_partContext * /*ctx*/) override { }

  virtual void enterAbort_statement(AdaParser::Abort_statementContext * /*ctx*/) override { }
  virtual void exitAbort_statement(AdaParser::Abort_statementContext * /*ctx*/) override { }

  virtual void enterCompilation(AdaParser::CompilationContext * /*ctx*/) override { }
  virtual void exitCompilation(AdaParser::CompilationContext * /*ctx*/) override { }

  virtual void enterCompilation_unit(AdaParser::Compilation_unitContext * /*ctx*/) override { }
  virtual void exitCompilation_unit(AdaParser::Compilation_unitContext * /*ctx*/) override { }

  virtual void enterLibrary_item(AdaParser::Library_itemContext * /*ctx*/) override { }
  virtual void exitLibrary_item(AdaParser::Library_itemContext * /*ctx*/) override { }

  virtual void enterLibrary_unit_declaration(AdaParser::Library_unit_declarationContext * /*ctx*/) override { }
  virtual void exitLibrary_unit_declaration(AdaParser::Library_unit_declarationContext * /*ctx*/) override { }

  virtual void enterLibrary_unit_renaming_declaration(AdaParser::Library_unit_renaming_declarationContext * /*ctx*/) override { }
  virtual void exitLibrary_unit_renaming_declaration(AdaParser::Library_unit_renaming_declarationContext * /*ctx*/) override { }

  virtual void enterLibrary_unit_body(AdaParser::Library_unit_bodyContext * /*ctx*/) override { }
  virtual void exitLibrary_unit_body(AdaParser::Library_unit_bodyContext * /*ctx*/) override { }

  virtual void enterContext_item(AdaParser::Context_itemContext * /*ctx*/) override { }
  virtual void exitContext_item(AdaParser::Context_itemContext * /*ctx*/) override { }

  virtual void enterWith_clause(AdaParser::With_clauseContext * /*ctx*/) override { }
  virtual void exitWith_clause(AdaParser::With_clauseContext * /*ctx*/) override { }

  virtual void enterLimited_with_clause(AdaParser::Limited_with_clauseContext * /*ctx*/) override { }
  virtual void exitLimited_with_clause(AdaParser::Limited_with_clauseContext * /*ctx*/) override { }

  virtual void enterNonlimited_with_clause(AdaParser::Nonlimited_with_clauseContext * /*ctx*/) override { }
  virtual void exitNonlimited_with_clause(AdaParser::Nonlimited_with_clauseContext * /*ctx*/) override { }

  virtual void enterBody_stub(AdaParser::Body_stubContext * /*ctx*/) override { }
  virtual void exitBody_stub(AdaParser::Body_stubContext * /*ctx*/) override { }

  virtual void enterSubprogram_body_stub(AdaParser::Subprogram_body_stubContext * /*ctx*/) override { }
  virtual void exitSubprogram_body_stub(AdaParser::Subprogram_body_stubContext * /*ctx*/) override { }

  virtual void enterPackage_body_stub(AdaParser::Package_body_stubContext * /*ctx*/) override { }
  virtual void exitPackage_body_stub(AdaParser::Package_body_stubContext * /*ctx*/) override { }

  virtual void enterTask_body_stub(AdaParser::Task_body_stubContext * /*ctx*/) override { }
  virtual void exitTask_body_stub(AdaParser::Task_body_stubContext * /*ctx*/) override { }

  virtual void enterProtected_body_stub(AdaParser::Protected_body_stubContext * /*ctx*/) override { }
  virtual void exitProtected_body_stub(AdaParser::Protected_body_stubContext * /*ctx*/) override { }

  virtual void enterSubunit(AdaParser::SubunitContext * /*ctx*/) override { }
  virtual void exitSubunit(AdaParser::SubunitContext * /*ctx*/) override { }

  virtual void enterException_declaration(AdaParser::Exception_declarationContext * /*ctx*/) override { }
  virtual void exitException_declaration(AdaParser::Exception_declarationContext * /*ctx*/) override { }

  virtual void enterHandled_sequence_of_statements(AdaParser::Handled_sequence_of_statementsContext * /*ctx*/) override { }
  virtual void exitHandled_sequence_of_statements(AdaParser::Handled_sequence_of_statementsContext * /*ctx*/) override { }

  virtual void enterException_handler(AdaParser::Exception_handlerContext * /*ctx*/) override { }
  virtual void exitException_handler(AdaParser::Exception_handlerContext * /*ctx*/) override { }

  virtual void enterChoice_parameter_specification(AdaParser::Choice_parameter_specificationContext * /*ctx*/) override { }
  virtual void exitChoice_parameter_specification(AdaParser::Choice_parameter_specificationContext * /*ctx*/) override { }

  virtual void enterException_choice(AdaParser::Exception_choiceContext * /*ctx*/) override { }
  virtual void exitException_choice(AdaParser::Exception_choiceContext * /*ctx*/) override { }

  virtual void enterRaise_statement(AdaParser::Raise_statementContext * /*ctx*/) override { }
  virtual void exitRaise_statement(AdaParser::Raise_statementContext * /*ctx*/) override { }

  virtual void enterGeneric_declaration(AdaParser::Generic_declarationContext * /*ctx*/) override { }
  virtual void exitGeneric_declaration(AdaParser::Generic_declarationContext * /*ctx*/) override { }

  virtual void enterGeneric_subprogram_declaration(AdaParser::Generic_subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitGeneric_subprogram_declaration(AdaParser::Generic_subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterGeneric_package_declaration(AdaParser::Generic_package_declarationContext * /*ctx*/) override { }
  virtual void exitGeneric_package_declaration(AdaParser::Generic_package_declarationContext * /*ctx*/) override { }

  virtual void enterGeneric_formal_part(AdaParser::Generic_formal_partContext * /*ctx*/) override { }
  virtual void exitGeneric_formal_part(AdaParser::Generic_formal_partContext * /*ctx*/) override { }

  virtual void enterGeneric_formal_parameter_declaration(AdaParser::Generic_formal_parameter_declarationContext * /*ctx*/) override { }
  virtual void exitGeneric_formal_parameter_declaration(AdaParser::Generic_formal_parameter_declarationContext * /*ctx*/) override { }

  virtual void enterGeneric_instantiation(AdaParser::Generic_instantiationContext * /*ctx*/) override { }
  virtual void exitGeneric_instantiation(AdaParser::Generic_instantiationContext * /*ctx*/) override { }

  virtual void enterGeneric_actual_part(AdaParser::Generic_actual_partContext * /*ctx*/) override { }
  virtual void exitGeneric_actual_part(AdaParser::Generic_actual_partContext * /*ctx*/) override { }

  virtual void enterGeneric_association(AdaParser::Generic_associationContext * /*ctx*/) override { }
  virtual void exitGeneric_association(AdaParser::Generic_associationContext * /*ctx*/) override { }

  virtual void enterExplicit_generic_actual_parameter(AdaParser::Explicit_generic_actual_parameterContext * /*ctx*/) override { }
  virtual void exitExplicit_generic_actual_parameter(AdaParser::Explicit_generic_actual_parameterContext * /*ctx*/) override { }

  virtual void enterFormal_object_declaration(AdaParser::Formal_object_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_object_declaration(AdaParser::Formal_object_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_type_declaration(AdaParser::Formal_type_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_type_declaration(AdaParser::Formal_type_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_complete_type_declaration(AdaParser::Formal_complete_type_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_complete_type_declaration(AdaParser::Formal_complete_type_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_incomplete_type_declaration(AdaParser::Formal_incomplete_type_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_incomplete_type_declaration(AdaParser::Formal_incomplete_type_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_type_definition(AdaParser::Formal_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_type_definition(AdaParser::Formal_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_private_type_definition(AdaParser::Formal_private_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_private_type_definition(AdaParser::Formal_private_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_derived_type_definition(AdaParser::Formal_derived_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_derived_type_definition(AdaParser::Formal_derived_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_discrete_type_definition(AdaParser::Formal_discrete_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_discrete_type_definition(AdaParser::Formal_discrete_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_signed_integer_type_definition(AdaParser::Formal_signed_integer_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_signed_integer_type_definition(AdaParser::Formal_signed_integer_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_modular_type_definition(AdaParser::Formal_modular_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_modular_type_definition(AdaParser::Formal_modular_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_floating_point_type_definition(AdaParser::Formal_floating_point_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_floating_point_type_definition(AdaParser::Formal_floating_point_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_ordinary_fixed_point_type_definition(AdaParser::Formal_ordinary_fixed_point_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_ordinary_fixed_point_type_definition(AdaParser::Formal_ordinary_fixed_point_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_decimal_fixed_point_type_definition(AdaParser::Formal_decimal_fixed_point_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_decimal_fixed_point_type_definition(AdaParser::Formal_decimal_fixed_point_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_array_type_definition(AdaParser::Formal_array_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_array_type_definition(AdaParser::Formal_array_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_access_type_definition(AdaParser::Formal_access_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_access_type_definition(AdaParser::Formal_access_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_interface_type_definition(AdaParser::Formal_interface_type_definitionContext * /*ctx*/) override { }
  virtual void exitFormal_interface_type_definition(AdaParser::Formal_interface_type_definitionContext * /*ctx*/) override { }

  virtual void enterFormal_subprogram_declaration(AdaParser::Formal_subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_subprogram_declaration(AdaParser::Formal_subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_concrete_subprogram_declaration(AdaParser::Formal_concrete_subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_concrete_subprogram_declaration(AdaParser::Formal_concrete_subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_abstract_subprogram_declaration(AdaParser::Formal_abstract_subprogram_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_abstract_subprogram_declaration(AdaParser::Formal_abstract_subprogram_declarationContext * /*ctx*/) override { }

  virtual void enterSubprogram_default(AdaParser::Subprogram_defaultContext * /*ctx*/) override { }
  virtual void exitSubprogram_default(AdaParser::Subprogram_defaultContext * /*ctx*/) override { }

  virtual void enterFormal_package_declaration(AdaParser::Formal_package_declarationContext * /*ctx*/) override { }
  virtual void exitFormal_package_declaration(AdaParser::Formal_package_declarationContext * /*ctx*/) override { }

  virtual void enterFormal_package_actual_part(AdaParser::Formal_package_actual_partContext * /*ctx*/) override { }
  virtual void exitFormal_package_actual_part(AdaParser::Formal_package_actual_partContext * /*ctx*/) override { }

  virtual void enterFormal_package_association(AdaParser::Formal_package_associationContext * /*ctx*/) override { }
  virtual void exitFormal_package_association(AdaParser::Formal_package_associationContext * /*ctx*/) override { }

  virtual void enterAspect_clause(AdaParser::Aspect_clauseContext * /*ctx*/) override { }
  virtual void exitAspect_clause(AdaParser::Aspect_clauseContext * /*ctx*/) override { }

  virtual void enterLocal_name(AdaParser::Local_nameContext * /*ctx*/) override { }
  virtual void exitLocal_name(AdaParser::Local_nameContext * /*ctx*/) override { }

  virtual void enterAspect_specification(AdaParser::Aspect_specificationContext * /*ctx*/) override { }
  virtual void exitAspect_specification(AdaParser::Aspect_specificationContext * /*ctx*/) override { }

  virtual void enterAspect_mark(AdaParser::Aspect_markContext * /*ctx*/) override { }
  virtual void exitAspect_mark(AdaParser::Aspect_markContext * /*ctx*/) override { }

  virtual void enterAspect_identifier(AdaParser::Aspect_identifierContext * /*ctx*/) override { }
  virtual void exitAspect_identifier(AdaParser::Aspect_identifierContext * /*ctx*/) override { }

  virtual void enterAspect_definition(AdaParser::Aspect_definitionContext * /*ctx*/) override { }
  virtual void exitAspect_definition(AdaParser::Aspect_definitionContext * /*ctx*/) override { }

  virtual void enterAttribute_definition_clause(AdaParser::Attribute_definition_clauseContext * /*ctx*/) override { }
  virtual void exitAttribute_definition_clause(AdaParser::Attribute_definition_clauseContext * /*ctx*/) override { }

  virtual void enterEnumeration_representation_clause(AdaParser::Enumeration_representation_clauseContext * /*ctx*/) override { }
  virtual void exitEnumeration_representation_clause(AdaParser::Enumeration_representation_clauseContext * /*ctx*/) override { }

  virtual void enterEnumeration_aggregate(AdaParser::Enumeration_aggregateContext * /*ctx*/) override { }
  virtual void exitEnumeration_aggregate(AdaParser::Enumeration_aggregateContext * /*ctx*/) override { }

  virtual void enterRecord_representation_clause(AdaParser::Record_representation_clauseContext * /*ctx*/) override { }
  virtual void exitRecord_representation_clause(AdaParser::Record_representation_clauseContext * /*ctx*/) override { }

  virtual void enterComponent_clause(AdaParser::Component_clauseContext * /*ctx*/) override { }
  virtual void exitComponent_clause(AdaParser::Component_clauseContext * /*ctx*/) override { }

  virtual void enterComponent_local_name(AdaParser::Component_local_nameContext * /*ctx*/) override { }
  virtual void exitComponent_local_name(AdaParser::Component_local_nameContext * /*ctx*/) override { }

  virtual void enterPosition(AdaParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(AdaParser::PositionContext * /*ctx*/) override { }

  virtual void enterFirst_bit(AdaParser::First_bitContext * /*ctx*/) override { }
  virtual void exitFirst_bit(AdaParser::First_bitContext * /*ctx*/) override { }

  virtual void enterLast_bit(AdaParser::Last_bitContext * /*ctx*/) override { }
  virtual void exitLast_bit(AdaParser::Last_bitContext * /*ctx*/) override { }

  virtual void enterDelta_constraint(AdaParser::Delta_constraintContext * /*ctx*/) override { }
  virtual void exitDelta_constraint(AdaParser::Delta_constraintContext * /*ctx*/) override { }

  virtual void enterAt_clause(AdaParser::At_clauseContext * /*ctx*/) override { }
  virtual void exitAt_clause(AdaParser::At_clauseContext * /*ctx*/) override { }

  virtual void enterMod_clause(AdaParser::Mod_clauseContext * /*ctx*/) override { }
  virtual void exitMod_clause(AdaParser::Mod_clauseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

