
// Generated from AdaParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  AdaParser : public antlr4::Parser {
public:
  enum {
    ABORT = 1, ABS = 2, ABSTRACT = 3, ACCEPT_ = 4, ACCESS = 5, ALIASED = 6, 
    ALL = 7, AND = 8, ARRAY = 9, AT = 10, BEGIN = 11, BODY_ = 12, CASE = 13, 
    CONSTANT = 14, DECLARE = 15, DELAY = 16, DELTA = 17, DIGITS = 18, DO = 19, 
    ELSE = 20, ELSIF = 21, END = 22, ENTRY = 23, EXCEPTION = 24, EXIT = 25, 
    FOR = 26, FUNCTION = 27, GENERIC = 28, GOTO = 29, IF = 30, IN = 31, 
    INTERFACE = 32, IS = 33, LIMITED = 34, LOOP = 35, MOD = 36, NEW = 37, 
    NOT = 38, NULL_ = 39, OF = 40, OR = 41, OTHERS = 42, OUT = 43, OVERRIDING = 44, 
    PACKAGE = 45, PRAGMA = 46, PRIVATE = 47, PROCEDURE = 48, PROTECTED = 49, 
    RAISE = 50, RANGE_ = 51, RECORD = 52, REM = 53, RENAMES = 54, REQUEUE = 55, 
    RETURN = 56, REVERSE = 57, SELECT = 58, SEPARATE = 59, SOME = 60, SUBTYPE = 61, 
    SYNCHRONIZED = 62, TAGGED = 63, TASK = 64, TERMINATE = 65, THEN = 66, 
    TYPE = 67, UNTIL = 68, USE = 69, WHEN = 70, WHILE = 71, WITH = 72, XOR = 73, 
    CLASS__ = 74, ACCESS__ = 75, DELTA__ = 76, DIGITS__ = 77, MOD__ = 78, 
    WHITESPACE = 79, LINE_COMMENT = 80, IDENTIFIER_ = 81, NUMERIC_LITERAL_ = 82, 
    DECIMAL_LITERAL_ = 83, NUMERAL = 84, EXPONENT = 85, BASED_LITERAL = 86, 
    BASED_NUMERAL = 87, EXTENDED_DIGIT = 88, BASE = 89, CHARACTER_LITERAL_ = 90, 
    STRING_LITERAL_ = 91, HASH = 92, AMPERSAND = 93, LP = 94, RP = 95, MULT = 96, 
    PLUS = 97, COMMA = 98, MINUS = 99, DOT = 100, COLON = 101, SEMI = 102, 
    LT = 103, EQ = 104, GT = 105, US = 106, VL = 107, DIV = 108, EP = 109, 
    PS = 110, ARROW = 111, DOTDOT = 112, EXPON = 113, ASSIGN = 114, NE = 115, 
    GE = 116, LE = 117, LLB = 118, RLB = 119, BOX = 120, SQ = 121
  };

  enum {
    RuleIdentifier = 0, RuleNumeric_literal = 1, RuleCharacter_literal = 2, 
    RuleString_literal = 3, RuleBasic_declaration = 4, RuleDefining_identifier = 5, 
    RuleType_declaration = 6, RuleFull_type_declaration = 7, RuleType_definition = 8, 
    RuleSubtype_declaration = 9, RuleSubtype_indication = 10, RuleSubtype_mark = 11, 
    RuleConstraint = 12, RuleScalar_constraint = 13, RuleComposite_constraint = 14, 
    RuleObject_declaration = 15, RuleDefining_identifier_list = 16, RuleNumber_declaration = 17, 
    RuleDerived_type_definition = 18, RuleRange_constraint = 19, RuleRange = 20, 
    RuleEnumeration_type_definition = 21, RuleEnumeration_literal_specification = 22, 
    RuleInteger_type_definition = 23, RuleSigned_integer_type_definition = 24, 
    RuleModular_type_definition = 25, RuleReal_type_definition = 26, RuleFloating_point_definition = 27, 
    RuleReal_range_specification = 28, RuleFixed_point_definition = 29, 
    RuleOrdinary_fixed_point_definition = 30, RuleDecimal_fixed_point_definition = 31, 
    RuleDigits_constraint = 32, RuleArray_type_definition = 33, RuleUnconstrained_array_definition = 34, 
    RuleIndex_subtype_definition = 35, RuleConstrained_array_definition = 36, 
    RuleDiscrete_subtype_definition = 37, RuleComponent_definition = 38, 
    RuleIndex_constraint = 39, RuleDiscrete_range = 40, RuleDiscriminant_part = 41, 
    RuleUnknown_discriminant_part = 42, RuleKnown_discriminant_part = 43, 
    RuleDiscriminant_specification = 44, RuleDefault_expression = 45, RuleDiscriminant_constraint = 46, 
    RuleDiscriminant_association = 47, RuleRecord_type_definition = 48, 
    RuleRecord_definition = 49, RuleComponent_list = 50, RuleComponent_item = 51, 
    RuleComponent_declaration = 52, RuleVariant_part = 53, RuleVariant = 54, 
    RuleDiscrete_choice_list = 55, RuleDiscrete_choice = 56, RuleRecord_extension_part = 57, 
    RuleAbstract_subprogram_declaration = 58, RuleInterface_type_definition = 59, 
    RuleInterface_list = 60, RuleAccess_type_definition = 61, RuleAccess_to_object_definition = 62, 
    RuleGeneral_access_modifier = 63, RuleAccess_to_subprogram_definition = 64, 
    RuleNull_exclusion = 65, RuleAccess_definition = 66, RuleIncomplete_type_declaration = 67, 
    RuleDeclarative_part = 68, RuleDeclarative_item = 69, RuleBasic_declarative_item = 70, 
    RuleBody = 71, RuleProper_body = 72, RuleName = 73, RuleDirect_name = 74, 
    RuleSelector_name = 75, RuleAttribute_designator = 76, RuleRange_attribute_reference = 77, 
    RuleRange_attribute_designator = 78, RuleAggregate = 79, RuleRecord_aggregate = 80, 
    RuleRecord_component_association_list = 81, RuleRecord_component_association = 82, 
    RuleComponent_choice_list = 83, RuleExtension_aggregate = 84, RuleAncestor_part = 85, 
    RuleArray_aggregate = 86, RulePositional_array_aggregate = 87, RuleNamed_array_aggregate = 88, 
    RuleArray_component_association = 89, RuleExpression = 90, RuleChoice_expression = 91, 
    RuleChoice_relation = 92, RuleRelation = 93, RuleMembership_choice_list = 94, 
    RuleMembership_choice = 95, RuleSimple_expression = 96, RuleTerm = 97, 
    RuleFactor = 98, RulePrimary = 99, RuleLogical_operator = 100, RuleRelational_operator = 101, 
    RuleBinary_adding_operator = 102, RuleUnary_adding_operator = 103, RuleMultiplying_operator = 104, 
    RuleHighest_precedence_operator = 105, RuleConditional_expression = 106, 
    RuleIf_expression = 107, RuleCondition = 108, RuleCase_expression = 109, 
    RuleCase_expression_alternative = 110, RuleQuantified_expression = 111, 
    RuleQuantifier = 112, RulePredicate = 113, RuleType_conversion = 114, 
    RuleQualified_expression = 115, RuleAllocator = 116, RuleSubpool_specification = 117, 
    RuleSequence_of_statements = 118, RuleStatement = 119, RuleSimple_statement = 120, 
    RuleCompound_statement = 121, RuleNull_statement = 122, RuleLabel = 123, 
    RuleAssignment_statement = 124, RuleIf_statement = 125, RuleCase_statement = 126, 
    RuleCase_statement_alternative = 127, RuleLoop_statement = 128, RuleIteration_scheme = 129, 
    RuleLoop_parameter_specification = 130, RuleIterator_specification = 131, 
    RuleBlock_statement = 132, RuleExit_statement = 133, RuleGoto_statement = 134, 
    RuleSubprogram_declaration = 135, RuleSubprogram_specification = 136, 
    RuleProcedure_specification = 137, RuleFunction_specification = 138, 
    RuleDesignator = 139, RuleDefining_designator = 140, RuleDefining_program_unit_name = 141, 
    RuleOperator_symbol = 142, RuleDefining_operator_symbol = 143, RuleParameter_and_result_profile = 144, 
    RuleFormal_part = 145, RuleParameter_specification = 146, RuleMode_ = 147, 
    RuleSubprogram_body = 148, RuleProcedure_call_statement = 149, RuleActual_parameter_part = 150, 
    RuleParameter_association = 151, RuleExplicit_actual_parameter = 152, 
    RuleSimple_return_statement = 153, RuleExtended_return_object_declaration = 154, 
    RuleExtended_return_statement = 155, RuleReturn_subtype_indication = 156, 
    RuleNull_procedure_declaration = 157, RuleExpression_function_declaration = 158, 
    RulePackage_declaration = 159, RulePackage_specification = 160, RulePackage_body = 161, 
    RulePrivate_type_declaration = 162, RulePrivate_extension_declaration = 163, 
    RuleOverriding_indicator = 164, RuleUse_clause = 165, RuleUse_package_clause = 166, 
    RuleUse_type_clause = 167, RuleRenaming_declaration = 168, RuleObject_renaming_declaration = 169, 
    RuleException_renaming_declaration = 170, RulePackage_renaming_declaration = 171, 
    RuleSubprogram_renaming_declaration = 172, RuleGeneric_renaming_declaration = 173, 
    RuleTask_type_declaration = 174, RuleSingle_task_declaration = 175, 
    RuleTask_definition = 176, RuleTask_item = 177, RuleTask_body = 178, 
    RuleProtected_type_declaration = 179, RuleSingle_protected_declaration = 180, 
    RuleProtected_definition = 181, RuleProtected_operation_declaration = 182, 
    RuleProtected_element_declaration = 183, RuleProtected_body = 184, RuleProtected_operation_item = 185, 
    RuleEntry_declaration = 186, RuleAccept_statement = 187, RuleEntry_direct_name = 188, 
    RuleEntry_index = 189, RuleEntry_body = 190, RuleEntry_identifier = 191, 
    RuleEntry_body_formal_part = 192, RuleEntry_barrier = 193, RuleEntry_index_specification = 194, 
    RuleEntry_call_statement = 195, RuleRequeue_statement = 196, RuleDelay_statement = 197, 
    RuleDelay_until_statement = 198, RuleDelay_relative_statement = 199, 
    RuleDelay_expression = 200, RuleSelect_statement = 201, RuleSelective_accept = 202, 
    RuleGuard = 203, RuleSelect_alternative = 204, RuleAccept_alternative = 205, 
    RuleDelay_alternative = 206, RuleTerminate_alternative = 207, RuleTimed_entry_call = 208, 
    RuleEntry_call_alternative = 209, RuleProcedure_or_entry_call = 210, 
    RuleConditional_entry_call = 211, RuleAsynchronous_select = 212, RuleTriggering_alternative = 213, 
    RuleTriggering_statement = 214, RuleAbortable_part = 215, RuleAbort_statement = 216, 
    RuleCompilation = 217, RuleCompilation_unit = 218, RuleLibrary_item = 219, 
    RuleLibrary_unit_declaration = 220, RuleLibrary_unit_renaming_declaration = 221, 
    RuleLibrary_unit_body = 222, RuleContext_item = 223, RuleWith_clause = 224, 
    RuleLimited_with_clause = 225, RuleNonlimited_with_clause = 226, RuleBody_stub = 227, 
    RuleSubprogram_body_stub = 228, RulePackage_body_stub = 229, RuleTask_body_stub = 230, 
    RuleProtected_body_stub = 231, RuleSubunit = 232, RuleException_declaration = 233, 
    RuleHandled_sequence_of_statements = 234, RuleException_handler = 235, 
    RuleChoice_parameter_specification = 236, RuleException_choice = 237, 
    RuleRaise_statement = 238, RuleGeneric_declaration = 239, RuleGeneric_subprogram_declaration = 240, 
    RuleGeneric_package_declaration = 241, RuleGeneric_formal_part = 242, 
    RuleGeneric_formal_parameter_declaration = 243, RuleGeneric_instantiation = 244, 
    RuleGeneric_actual_part = 245, RuleGeneric_association = 246, RuleExplicit_generic_actual_parameter = 247, 
    RuleFormal_object_declaration = 248, RuleFormal_type_declaration = 249, 
    RuleFormal_complete_type_declaration = 250, RuleFormal_incomplete_type_declaration = 251, 
    RuleFormal_type_definition = 252, RuleFormal_private_type_definition = 253, 
    RuleFormal_derived_type_definition = 254, RuleFormal_discrete_type_definition = 255, 
    RuleFormal_signed_integer_type_definition = 256, RuleFormal_modular_type_definition = 257, 
    RuleFormal_floating_point_type_definition = 258, RuleFormal_ordinary_fixed_point_type_definition = 259, 
    RuleFormal_decimal_fixed_point_type_definition = 260, RuleFormal_array_type_definition = 261, 
    RuleFormal_access_type_definition = 262, RuleFormal_interface_type_definition = 263, 
    RuleFormal_subprogram_declaration = 264, RuleFormal_concrete_subprogram_declaration = 265, 
    RuleFormal_abstract_subprogram_declaration = 266, RuleSubprogram_default = 267, 
    RuleFormal_package_declaration = 268, RuleFormal_package_actual_part = 269, 
    RuleFormal_package_association = 270, RuleAspect_clause = 271, RuleLocal_name = 272, 
    RuleAspect_specification = 273, RuleAspect_mark = 274, RuleAspect_identifier = 275, 
    RuleAspect_definition = 276, RuleAttribute_definition_clause = 277, 
    RuleEnumeration_representation_clause = 278, RuleEnumeration_aggregate = 279, 
    RuleRecord_representation_clause = 280, RuleComponent_clause = 281, 
    RuleComponent_local_name = 282, RulePosition = 283, RuleFirst_bit = 284, 
    RuleLast_bit = 285, RuleDelta_constraint = 286, RuleAt_clause = 287, 
    RuleMod_clause = 288
  };

  explicit AdaParser(antlr4::TokenStream *input);

  AdaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AdaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class IdentifierContext;
  class Numeric_literalContext;
  class Character_literalContext;
  class String_literalContext;
  class Basic_declarationContext;
  class Defining_identifierContext;
  class Type_declarationContext;
  class Full_type_declarationContext;
  class Type_definitionContext;
  class Subtype_declarationContext;
  class Subtype_indicationContext;
  class Subtype_markContext;
  class ConstraintContext;
  class Scalar_constraintContext;
  class Composite_constraintContext;
  class Object_declarationContext;
  class Defining_identifier_listContext;
  class Number_declarationContext;
  class Derived_type_definitionContext;
  class Range_constraintContext;
  class RangeContext;
  class Enumeration_type_definitionContext;
  class Enumeration_literal_specificationContext;
  class Integer_type_definitionContext;
  class Signed_integer_type_definitionContext;
  class Modular_type_definitionContext;
  class Real_type_definitionContext;
  class Floating_point_definitionContext;
  class Real_range_specificationContext;
  class Fixed_point_definitionContext;
  class Ordinary_fixed_point_definitionContext;
  class Decimal_fixed_point_definitionContext;
  class Digits_constraintContext;
  class Array_type_definitionContext;
  class Unconstrained_array_definitionContext;
  class Index_subtype_definitionContext;
  class Constrained_array_definitionContext;
  class Discrete_subtype_definitionContext;
  class Component_definitionContext;
  class Index_constraintContext;
  class Discrete_rangeContext;
  class Discriminant_partContext;
  class Unknown_discriminant_partContext;
  class Known_discriminant_partContext;
  class Discriminant_specificationContext;
  class Default_expressionContext;
  class Discriminant_constraintContext;
  class Discriminant_associationContext;
  class Record_type_definitionContext;
  class Record_definitionContext;
  class Component_listContext;
  class Component_itemContext;
  class Component_declarationContext;
  class Variant_partContext;
  class VariantContext;
  class Discrete_choice_listContext;
  class Discrete_choiceContext;
  class Record_extension_partContext;
  class Abstract_subprogram_declarationContext;
  class Interface_type_definitionContext;
  class Interface_listContext;
  class Access_type_definitionContext;
  class Access_to_object_definitionContext;
  class General_access_modifierContext;
  class Access_to_subprogram_definitionContext;
  class Null_exclusionContext;
  class Access_definitionContext;
  class Incomplete_type_declarationContext;
  class Declarative_partContext;
  class Declarative_itemContext;
  class Basic_declarative_itemContext;
  class BodyContext;
  class Proper_bodyContext;
  class NameContext;
  class Direct_nameContext;
  class Selector_nameContext;
  class Attribute_designatorContext;
  class Range_attribute_referenceContext;
  class Range_attribute_designatorContext;
  class AggregateContext;
  class Record_aggregateContext;
  class Record_component_association_listContext;
  class Record_component_associationContext;
  class Component_choice_listContext;
  class Extension_aggregateContext;
  class Ancestor_partContext;
  class Array_aggregateContext;
  class Positional_array_aggregateContext;
  class Named_array_aggregateContext;
  class Array_component_associationContext;
  class ExpressionContext;
  class Choice_expressionContext;
  class Choice_relationContext;
  class RelationContext;
  class Membership_choice_listContext;
  class Membership_choiceContext;
  class Simple_expressionContext;
  class TermContext;
  class FactorContext;
  class PrimaryContext;
  class Logical_operatorContext;
  class Relational_operatorContext;
  class Binary_adding_operatorContext;
  class Unary_adding_operatorContext;
  class Multiplying_operatorContext;
  class Highest_precedence_operatorContext;
  class Conditional_expressionContext;
  class If_expressionContext;
  class ConditionContext;
  class Case_expressionContext;
  class Case_expression_alternativeContext;
  class Quantified_expressionContext;
  class QuantifierContext;
  class PredicateContext;
  class Type_conversionContext;
  class Qualified_expressionContext;
  class AllocatorContext;
  class Subpool_specificationContext;
  class Sequence_of_statementsContext;
  class StatementContext;
  class Simple_statementContext;
  class Compound_statementContext;
  class Null_statementContext;
  class LabelContext;
  class Assignment_statementContext;
  class If_statementContext;
  class Case_statementContext;
  class Case_statement_alternativeContext;
  class Loop_statementContext;
  class Iteration_schemeContext;
  class Loop_parameter_specificationContext;
  class Iterator_specificationContext;
  class Block_statementContext;
  class Exit_statementContext;
  class Goto_statementContext;
  class Subprogram_declarationContext;
  class Subprogram_specificationContext;
  class Procedure_specificationContext;
  class Function_specificationContext;
  class DesignatorContext;
  class Defining_designatorContext;
  class Defining_program_unit_nameContext;
  class Operator_symbolContext;
  class Defining_operator_symbolContext;
  class Parameter_and_result_profileContext;
  class Formal_partContext;
  class Parameter_specificationContext;
  class Mode_Context;
  class Subprogram_bodyContext;
  class Procedure_call_statementContext;
  class Actual_parameter_partContext;
  class Parameter_associationContext;
  class Explicit_actual_parameterContext;
  class Simple_return_statementContext;
  class Extended_return_object_declarationContext;
  class Extended_return_statementContext;
  class Return_subtype_indicationContext;
  class Null_procedure_declarationContext;
  class Expression_function_declarationContext;
  class Package_declarationContext;
  class Package_specificationContext;
  class Package_bodyContext;
  class Private_type_declarationContext;
  class Private_extension_declarationContext;
  class Overriding_indicatorContext;
  class Use_clauseContext;
  class Use_package_clauseContext;
  class Use_type_clauseContext;
  class Renaming_declarationContext;
  class Object_renaming_declarationContext;
  class Exception_renaming_declarationContext;
  class Package_renaming_declarationContext;
  class Subprogram_renaming_declarationContext;
  class Generic_renaming_declarationContext;
  class Task_type_declarationContext;
  class Single_task_declarationContext;
  class Task_definitionContext;
  class Task_itemContext;
  class Task_bodyContext;
  class Protected_type_declarationContext;
  class Single_protected_declarationContext;
  class Protected_definitionContext;
  class Protected_operation_declarationContext;
  class Protected_element_declarationContext;
  class Protected_bodyContext;
  class Protected_operation_itemContext;
  class Entry_declarationContext;
  class Accept_statementContext;
  class Entry_direct_nameContext;
  class Entry_indexContext;
  class Entry_bodyContext;
  class Entry_identifierContext;
  class Entry_body_formal_partContext;
  class Entry_barrierContext;
  class Entry_index_specificationContext;
  class Entry_call_statementContext;
  class Requeue_statementContext;
  class Delay_statementContext;
  class Delay_until_statementContext;
  class Delay_relative_statementContext;
  class Delay_expressionContext;
  class Select_statementContext;
  class Selective_acceptContext;
  class GuardContext;
  class Select_alternativeContext;
  class Accept_alternativeContext;
  class Delay_alternativeContext;
  class Terminate_alternativeContext;
  class Timed_entry_callContext;
  class Entry_call_alternativeContext;
  class Procedure_or_entry_callContext;
  class Conditional_entry_callContext;
  class Asynchronous_selectContext;
  class Triggering_alternativeContext;
  class Triggering_statementContext;
  class Abortable_partContext;
  class Abort_statementContext;
  class CompilationContext;
  class Compilation_unitContext;
  class Library_itemContext;
  class Library_unit_declarationContext;
  class Library_unit_renaming_declarationContext;
  class Library_unit_bodyContext;
  class Context_itemContext;
  class With_clauseContext;
  class Limited_with_clauseContext;
  class Nonlimited_with_clauseContext;
  class Body_stubContext;
  class Subprogram_body_stubContext;
  class Package_body_stubContext;
  class Task_body_stubContext;
  class Protected_body_stubContext;
  class SubunitContext;
  class Exception_declarationContext;
  class Handled_sequence_of_statementsContext;
  class Exception_handlerContext;
  class Choice_parameter_specificationContext;
  class Exception_choiceContext;
  class Raise_statementContext;
  class Generic_declarationContext;
  class Generic_subprogram_declarationContext;
  class Generic_package_declarationContext;
  class Generic_formal_partContext;
  class Generic_formal_parameter_declarationContext;
  class Generic_instantiationContext;
  class Generic_actual_partContext;
  class Generic_associationContext;
  class Explicit_generic_actual_parameterContext;
  class Formal_object_declarationContext;
  class Formal_type_declarationContext;
  class Formal_complete_type_declarationContext;
  class Formal_incomplete_type_declarationContext;
  class Formal_type_definitionContext;
  class Formal_private_type_definitionContext;
  class Formal_derived_type_definitionContext;
  class Formal_discrete_type_definitionContext;
  class Formal_signed_integer_type_definitionContext;
  class Formal_modular_type_definitionContext;
  class Formal_floating_point_type_definitionContext;
  class Formal_ordinary_fixed_point_type_definitionContext;
  class Formal_decimal_fixed_point_type_definitionContext;
  class Formal_array_type_definitionContext;
  class Formal_access_type_definitionContext;
  class Formal_interface_type_definitionContext;
  class Formal_subprogram_declarationContext;
  class Formal_concrete_subprogram_declarationContext;
  class Formal_abstract_subprogram_declarationContext;
  class Subprogram_defaultContext;
  class Formal_package_declarationContext;
  class Formal_package_actual_partContext;
  class Formal_package_associationContext;
  class Aspect_clauseContext;
  class Local_nameContext;
  class Aspect_specificationContext;
  class Aspect_markContext;
  class Aspect_identifierContext;
  class Aspect_definitionContext;
  class Attribute_definition_clauseContext;
  class Enumeration_representation_clauseContext;
  class Enumeration_aggregateContext;
  class Record_representation_clauseContext;
  class Component_clauseContext;
  class Component_local_nameContext;
  class PositionContext;
  class First_bitContext;
  class Last_bitContext;
  class Delta_constraintContext;
  class At_clauseContext;
  class Mod_clauseContext; 

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Numeric_literalContext : public antlr4::ParserRuleContext {
  public:
    Numeric_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERIC_LITERAL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Numeric_literalContext* numeric_literal();

  class  Character_literalContext : public antlr4::ParserRuleContext {
  public:
    Character_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER_LITERAL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Character_literalContext* character_literal();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_literalContext* string_literal();

  class  Basic_declarationContext : public antlr4::ParserRuleContext {
  public:
    Basic_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declarationContext *type_declaration();
    Subtype_declarationContext *subtype_declaration();
    Object_declarationContext *object_declaration();
    Number_declarationContext *number_declaration();
    Subprogram_declarationContext *subprogram_declaration();
    Abstract_subprogram_declarationContext *abstract_subprogram_declaration();
    Null_procedure_declarationContext *null_procedure_declaration();
    Expression_function_declarationContext *expression_function_declaration();
    Package_declarationContext *package_declaration();
    Renaming_declarationContext *renaming_declaration();
    Exception_declarationContext *exception_declaration();
    Generic_declarationContext *generic_declaration();
    Generic_instantiationContext *generic_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Basic_declarationContext* basic_declaration();

  class  Defining_identifierContext : public antlr4::ParserRuleContext {
  public:
    Defining_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defining_identifierContext* defining_identifier();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Full_type_declarationContext *full_type_declaration();
    Incomplete_type_declarationContext *incomplete_type_declaration();
    Private_type_declarationContext *private_type_declaration();
    Private_extension_declarationContext *private_extension_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Full_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Full_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Type_definitionContext *type_definition();
    antlr4::tree::TerminalNode *SEMI();
    Known_discriminant_partContext *known_discriminant_part();
    Aspect_specificationContext *aspect_specification();
    Task_type_declarationContext *task_type_declaration();
    Protected_type_declarationContext *protected_type_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Full_type_declarationContext* full_type_declaration();

  class  Type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enumeration_type_definitionContext *enumeration_type_definition();
    Integer_type_definitionContext *integer_type_definition();
    Real_type_definitionContext *real_type_definition();
    Array_type_definitionContext *array_type_definition();
    Record_type_definitionContext *record_type_definition();
    Access_type_definitionContext *access_type_definition();
    Derived_type_definitionContext *derived_type_definition();
    Interface_type_definitionContext *interface_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_definitionContext* type_definition();

  class  Subtype_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subtype_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBTYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Subtype_indicationContext *subtype_indication();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subtype_declarationContext* subtype_declaration();

  class  Subtype_indicationContext : public antlr4::ParserRuleContext {
  public:
    Subtype_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_markContext *subtype_mark();
    Null_exclusionContext *null_exclusion();
    ConstraintContext *constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subtype_indicationContext* subtype_indication();

  class  Subtype_markContext : public antlr4::ParserRuleContext {
  public:
    Subtype_markContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subtype_markContext* subtype_mark();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_constraintContext *scalar_constraint();
    Composite_constraintContext *composite_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstraintContext* constraint();

  class  Scalar_constraintContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_constraintContext *range_constraint();
    Digits_constraintContext *digits_constraint();
    Delta_constraintContext *delta_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scalar_constraintContext* scalar_constraint();

  class  Composite_constraintContext : public antlr4::ParserRuleContext {
  public:
    Composite_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Index_constraintContext *index_constraint();
    Discriminant_constraintContext *discriminant_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Composite_constraintContext* composite_constraint();

  class  Object_declarationContext : public antlr4::ParserRuleContext {
  public:
    Object_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ALIASED();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    Aspect_specificationContext *aspect_specification();
    Access_definitionContext *access_definition();
    Array_type_definitionContext *array_type_definition();
    Single_task_declarationContext *single_task_declaration();
    Single_protected_declarationContext *single_protected_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_declarationContext* object_declaration();

  class  Defining_identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Defining_identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Defining_identifierContext *> defining_identifier();
    Defining_identifierContext* defining_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defining_identifier_listContext* defining_identifier_list();

  class  Number_declarationContext : public antlr4::ParserRuleContext {
  public:
    Number_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Number_declarationContext* number_declaration();

  class  Derived_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Derived_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *LIMITED();
    Record_extension_partContext *record_extension_part();
    antlr4::tree::TerminalNode *AND();
    Interface_listContext *interface_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Derived_type_definitionContext* derived_type_definition();

  class  Range_constraintContext : public antlr4::ParserRuleContext {
  public:
    Range_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE_();
    RangeContext *range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_constraintContext* range_constraint();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_attribute_referenceContext *range_attribute_reference();
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  Enumeration_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Enumeration_literal_specificationContext *> enumeration_literal_specification();
    Enumeration_literal_specificationContext* enumeration_literal_specification(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enumeration_type_definitionContext* enumeration_type_definition();

  class  Enumeration_literal_specificationContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_literal_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    Character_literalContext *character_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enumeration_literal_specificationContext* enumeration_literal_specification();

  class  Integer_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Integer_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_integer_type_definitionContext *signed_integer_type_definition();
    Modular_type_definitionContext *modular_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_type_definitionContext* integer_type_definition();

  class  Signed_integer_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Signed_integer_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE_();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Signed_integer_type_definitionContext* signed_integer_type_definition();

  class  Modular_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Modular_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modular_type_definitionContext* modular_type_definition();

  class  Real_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Real_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Floating_point_definitionContext *floating_point_definition();
    Fixed_point_definitionContext *fixed_point_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_type_definitionContext* real_type_definition();

  class  Floating_point_definitionContext : public antlr4::ParserRuleContext {
  public:
    Floating_point_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    ExpressionContext *expression();
    Real_range_specificationContext *real_range_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Floating_point_definitionContext* floating_point_definition();

  class  Real_range_specificationContext : public antlr4::ParserRuleContext {
  public:
    Real_range_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE_();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Real_range_specificationContext* real_range_specification();

  class  Fixed_point_definitionContext : public antlr4::ParserRuleContext {
  public:
    Fixed_point_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ordinary_fixed_point_definitionContext *ordinary_fixed_point_definition();
    Decimal_fixed_point_definitionContext *decimal_fixed_point_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fixed_point_definitionContext* fixed_point_definition();

  class  Ordinary_fixed_point_definitionContext : public antlr4::ParserRuleContext {
  public:
    Ordinary_fixed_point_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA();
    ExpressionContext *expression();
    Real_range_specificationContext *real_range_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordinary_fixed_point_definitionContext* ordinary_fixed_point_definition();

  class  Decimal_fixed_point_definitionContext : public antlr4::ParserRuleContext {
  public:
    Decimal_fixed_point_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DIGITS();
    Real_range_specificationContext *real_range_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decimal_fixed_point_definitionContext* decimal_fixed_point_definition();

  class  Digits_constraintContext : public antlr4::ParserRuleContext {
  public:
    Digits_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    ExpressionContext *expression();
    Range_constraintContext *range_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Digits_constraintContext* digits_constraint();

  class  Array_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Array_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unconstrained_array_definitionContext *unconstrained_array_definition();
    Constrained_array_definitionContext *constrained_array_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_type_definitionContext* array_type_definition();

  class  Unconstrained_array_definitionContext : public antlr4::ParserRuleContext {
  public:
    Unconstrained_array_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LP();
    std::vector<Index_subtype_definitionContext *> index_subtype_definition();
    Index_subtype_definitionContext* index_subtype_definition(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *OF();
    Component_definitionContext *component_definition();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unconstrained_array_definitionContext* unconstrained_array_definition();

  class  Index_subtype_definitionContext : public antlr4::ParserRuleContext {
  public:
    Index_subtype_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *RANGE_();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Index_subtype_definitionContext* index_subtype_definition();

  class  Constrained_array_definitionContext : public antlr4::ParserRuleContext {
  public:
    Constrained_array_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LP();
    std::vector<Discrete_subtype_definitionContext *> discrete_subtype_definition();
    Discrete_subtype_definitionContext* discrete_subtype_definition(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *OF();
    Component_definitionContext *component_definition();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constrained_array_definitionContext* constrained_array_definition();

  class  Discrete_subtype_definitionContext : public antlr4::ParserRuleContext {
  public:
    Discrete_subtype_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();
    RangeContext *range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discrete_subtype_definitionContext* discrete_subtype_definition();

  class  Component_definitionContext : public antlr4::ParserRuleContext {
  public:
    Component_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *ALIASED();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_definitionContext* component_definition();

  class  Index_constraintContext : public antlr4::ParserRuleContext {
  public:
    Index_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Discrete_rangeContext *> discrete_range();
    Discrete_rangeContext* discrete_range(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Index_constraintContext* index_constraint();

  class  Discrete_rangeContext : public antlr4::ParserRuleContext {
  public:
    Discrete_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();
    RangeContext *range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discrete_rangeContext* discrete_range();

  class  Discriminant_partContext : public antlr4::ParserRuleContext {
  public:
    Discriminant_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unknown_discriminant_partContext *unknown_discriminant_part();
    Known_discriminant_partContext *known_discriminant_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discriminant_partContext* discriminant_part();

  class  Unknown_discriminant_partContext : public antlr4::ParserRuleContext {
  public:
    Unknown_discriminant_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *BOX();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unknown_discriminant_partContext* unknown_discriminant_part();

  class  Known_discriminant_partContext : public antlr4::ParserRuleContext {
  public:
    Known_discriminant_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Discriminant_specificationContext *> discriminant_specification();
    Discriminant_specificationContext* discriminant_specification(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Known_discriminant_partContext* known_discriminant_part();

  class  Discriminant_specificationContext : public antlr4::ParserRuleContext {
  public:
    Discriminant_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Subtype_markContext *subtype_mark();
    Null_exclusionContext *null_exclusion();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discriminant_specificationContext* discriminant_specification();

  class  Default_expressionContext : public antlr4::ParserRuleContext {
  public:
    Default_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_expressionContext* default_expression();

  class  Discriminant_constraintContext : public antlr4::ParserRuleContext {
  public:
    Discriminant_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Discriminant_associationContext *> discriminant_association();
    Discriminant_associationContext* discriminant_association(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discriminant_constraintContext* discriminant_constraint();

  class  Discriminant_associationContext : public antlr4::ParserRuleContext {
  public:
    Discriminant_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<Selector_nameContext *> selector_name();
    Selector_nameContext* selector_name(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discriminant_associationContext* discriminant_association();

  class  Record_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Record_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Record_definitionContext *record_definition();
    antlr4::tree::TerminalNode *TAGGED();
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *ABSTRACT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_type_definitionContext* record_type_definition();

  class  Record_definitionContext : public antlr4::ParserRuleContext {
  public:
    Record_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    Component_listContext *component_list();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_definitionContext* record_definition();

  class  Component_listContext : public antlr4::ParserRuleContext {
  public:
    Component_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Component_itemContext *> component_item();
    Component_itemContext* component_item(size_t i);
    Variant_partContext *variant_part();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_listContext* component_list();

  class  Component_itemContext : public antlr4::ParserRuleContext {
  public:
    Component_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_declarationContext *component_declaration();
    Aspect_clauseContext *aspect_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_itemContext* component_item();

  class  Component_declarationContext : public antlr4::ParserRuleContext {
  public:
    Component_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Component_definitionContext *component_definition();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ASSIGN();
    Default_expressionContext *default_expression();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_declarationContext* component_declaration();

  class  Variant_partContext : public antlr4::ParserRuleContext {
  public:
    Variant_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    Direct_nameContext *direct_name();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<VariantContext *> variant();
    VariantContext* variant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variant_partContext* variant_part();

  class  VariantContext : public antlr4::ParserRuleContext {
  public:
    VariantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Discrete_choice_listContext *discrete_choice_list();
    antlr4::tree::TerminalNode *ARROW();
    Component_listContext *component_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariantContext* variant();

  class  Discrete_choice_listContext : public antlr4::ParserRuleContext {
  public:
    Discrete_choice_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Discrete_choiceContext *> discrete_choice();
    Discrete_choiceContext* discrete_choice(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discrete_choice_listContext* discrete_choice_list();

  class  Discrete_choiceContext : public antlr4::ParserRuleContext {
  public:
    Discrete_choiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Choice_expressionContext *choice_expression();
    Subtype_indicationContext *subtype_indication();
    RangeContext *range();
    antlr4::tree::TerminalNode *OTHERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Discrete_choiceContext* discrete_choice();

  class  Record_extension_partContext : public antlr4::ParserRuleContext {
  public:
    Record_extension_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Record_definitionContext *record_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_extension_partContext* record_extension_part();

  class  Abstract_subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Abstract_subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ABSTRACT();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Abstract_subprogram_declarationContext* abstract_subprogram_declaration();

  class  Interface_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Interface_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *AND();
    Interface_listContext *interface_list();
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *TASK();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *SYNCHRONIZED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_type_definitionContext* interface_type_definition();

  class  Interface_listContext : public antlr4::ParserRuleContext {
  public:
    Interface_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Subtype_markContext *> subtype_mark();
    Subtype_markContext* subtype_mark(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_listContext* interface_list();

  class  Access_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Access_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Access_to_object_definitionContext *access_to_object_definition();
    Null_exclusionContext *null_exclusion();
    Access_to_subprogram_definitionContext *access_to_subprogram_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Access_type_definitionContext* access_type_definition();

  class  Access_to_object_definitionContext : public antlr4::ParserRuleContext {
  public:
    Access_to_object_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    Subtype_indicationContext *subtype_indication();
    General_access_modifierContext *general_access_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Access_to_object_definitionContext* access_to_object_definition();

  class  General_access_modifierContext : public antlr4::ParserRuleContext {
  public:
    General_access_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  General_access_modifierContext* general_access_modifier();

  class  Access_to_subprogram_definitionContext : public antlr4::ParserRuleContext {
  public:
    Access_to_subprogram_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROTECTED();
    Formal_partContext *formal_part();
    antlr4::tree::TerminalNode *FUNCTION();
    Parameter_and_result_profileContext *parameter_and_result_profile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Access_to_subprogram_definitionContext* access_to_subprogram_definition();

  class  Null_exclusionContext : public antlr4::ParserRuleContext {
  public:
    Null_exclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Null_exclusionContext* null_exclusion();

  class  Access_definitionContext : public antlr4::ParserRuleContext {
  public:
    Access_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    Subtype_markContext *subtype_mark();
    Null_exclusionContext *null_exclusion();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROTECTED();
    Formal_partContext *formal_part();
    antlr4::tree::TerminalNode *FUNCTION();
    Parameter_and_result_profileContext *parameter_and_result_profile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Access_definitionContext* access_definition();

  class  Incomplete_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Incomplete_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *SEMI();
    Discriminant_partContext *discriminant_part();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TAGGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Incomplete_type_declarationContext* incomplete_type_declaration();

  class  Declarative_partContext : public antlr4::ParserRuleContext {
  public:
    Declarative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Declarative_itemContext *> declarative_item();
    Declarative_itemContext* declarative_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declarative_partContext* declarative_part();

  class  Declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_declarative_itemContext *basic_declarative_item();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declarative_itemContext* declarative_item();

  class  Basic_declarative_itemContext : public antlr4::ParserRuleContext {
  public:
    Basic_declarative_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_declarationContext *basic_declaration();
    Aspect_clauseContext *aspect_clause();
    Use_clauseContext *use_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Basic_declarative_itemContext* basic_declarative_item();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Proper_bodyContext *proper_body();
    Body_stubContext *body_stub();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  Proper_bodyContext : public antlr4::ParserRuleContext {
  public:
    Proper_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_bodyContext *subprogram_body();
    Package_bodyContext *package_body();
    Task_bodyContext *task_body();
    Protected_bodyContext *protected_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Proper_bodyContext* proper_body();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Direct_nameContext *direct_name();
    Type_conversionContext *type_conversion();
    Character_literalContext *character_literal();
    Qualified_expressionContext *qualified_expression();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Discrete_rangeContext *discrete_range();
    Selector_nameContext *selector_name();
    antlr4::tree::TerminalNode *SQ();
    Attribute_designatorContext *attribute_designator();
    Actual_parameter_partContext *actual_parameter_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();
  NameContext* name(int precedence);
  class  Direct_nameContext : public antlr4::ParserRuleContext {
  public:
    Direct_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Operator_symbolContext *operator_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Direct_nameContext* direct_name();

  class  Selector_nameContext : public antlr4::ParserRuleContext {
  public:
    Selector_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Character_literalContext *character_literal();
    Operator_symbolContext *operator_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Selector_nameContext* selector_name();

  class  Attribute_designatorContext : public antlr4::ParserRuleContext {
  public:
    Attribute_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *ACCESS__();
    antlr4::tree::TerminalNode *DELTA__();
    antlr4::tree::TerminalNode *DIGITS__();
    antlr4::tree::TerminalNode *MOD__();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_designatorContext* attribute_designator();

  class  Range_attribute_referenceContext : public antlr4::ParserRuleContext {
  public:
    Range_attribute_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *SQ();
    Range_attribute_designatorContext *range_attribute_designator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_attribute_referenceContext* range_attribute_reference();

  class  Range_attribute_designatorContext : public antlr4::ParserRuleContext {
  public:
    Range_attribute_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE_();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_attribute_designatorContext* range_attribute_designator();

  class  AggregateContext : public antlr4::ParserRuleContext {
  public:
    AggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Record_aggregateContext *record_aggregate();
    Extension_aggregateContext *extension_aggregate();
    Array_aggregateContext *array_aggregate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AggregateContext* aggregate();

  class  Record_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Record_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Record_component_association_listContext *record_component_association_list();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_aggregateContext* record_aggregate();

  class  Record_component_association_listContext : public antlr4::ParserRuleContext {
  public:
    Record_component_association_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Record_component_associationContext *> record_component_association();
    Record_component_associationContext* record_component_association(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *RECORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_component_association_listContext* record_component_association_list();

  class  Record_component_associationContext : public antlr4::ParserRuleContext {
  public:
    Record_component_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Component_choice_listContext *component_choice_list();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_component_associationContext* record_component_association();

  class  Component_choice_listContext : public antlr4::ParserRuleContext {
  public:
    Component_choice_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Selector_nameContext *> selector_name();
    Selector_nameContext* selector_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);
    antlr4::tree::TerminalNode *OTHERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_choice_listContext* component_choice_list();

  class  Extension_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Extension_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Ancestor_partContext *ancestor_part();
    antlr4::tree::TerminalNode *WITH();
    Record_component_association_listContext *record_component_association_list();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_aggregateContext* extension_aggregate();

  class  Ancestor_partContext : public antlr4::ParserRuleContext {
  public:
    Ancestor_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Subtype_markContext *subtype_mark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ancestor_partContext* ancestor_part();

  class  Array_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Array_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Positional_array_aggregateContext *positional_array_aggregate();
    Named_array_aggregateContext *named_array_aggregate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_aggregateContext* array_aggregate();

  class  Positional_array_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Positional_array_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Positional_array_aggregateContext* positional_array_aggregate();

  class  Named_array_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Named_array_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Array_component_associationContext *> array_component_association();
    Array_component_associationContext* array_component_association(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_array_aggregateContext* named_array_aggregate();

  class  Array_component_associationContext : public antlr4::ParserRuleContext {
  public:
    Array_component_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Discrete_choice_listContext *discrete_choice_list();
    antlr4::tree::TerminalNode *ARROW();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_component_associationContext* array_component_association();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XOR();
    antlr4::tree::TerminalNode* XOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Choice_expressionContext : public antlr4::ParserRuleContext {
  public:
    Choice_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Choice_relationContext *> choice_relation();
    Choice_relationContext* choice_relation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XOR();
    antlr4::tree::TerminalNode* XOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Choice_expressionContext* choice_expression();

  class  Choice_relationContext : public antlr4::ParserRuleContext {
  public:
    Choice_relationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    Relational_operatorContext *relational_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Choice_relationContext* choice_relation();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    Relational_operatorContext *relational_operator();
    antlr4::tree::TerminalNode *IN();
    Membership_choice_listContext *membership_choice_list();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationContext* relation();

  class  Membership_choice_listContext : public antlr4::ParserRuleContext {
  public:
    Membership_choice_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Membership_choiceContext *> membership_choice();
    Membership_choiceContext* membership_choice(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Membership_choice_listContext* membership_choice_list();

  class  Membership_choiceContext : public antlr4::ParserRuleContext {
  public:
    Membership_choiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Choice_expressionContext *choice_expression();
    RangeContext *range();
    Subtype_markContext *subtype_mark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Membership_choiceContext* membership_choice();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    Unary_adding_operatorContext *unary_adding_operator();
    std::vector<Binary_adding_operatorContext *> binary_adding_operator();
    Binary_adding_operatorContext* binary_adding_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_expressionContext* simple_expression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Multiplying_operatorContext *> multiplying_operator();
    Multiplying_operatorContext* multiplying_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryContext *> primary();
    PrimaryContext* primary(size_t i);
    antlr4::tree::TerminalNode *EXPON();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactorContext* factor();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Numeric_literalContext *numeric_literal();
    antlr4::tree::TerminalNode *NULL_();
    String_literalContext *string_literal();
    AggregateContext *aggregate();
    NameContext *name();
    AllocatorContext *allocator();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    Conditional_expressionContext *conditional_expression();
    Qualified_expressionContext *qualified_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  Logical_operatorContext : public antlr4::ParserRuleContext {
  public:
    Logical_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logical_operatorContext* logical_operator();

  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Relational_operatorContext* relational_operator();

  class  Binary_adding_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_adding_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *AMPERSAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_adding_operatorContext* binary_adding_operator();

  class  Unary_adding_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_adding_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_adding_operatorContext* unary_adding_operator();

  class  Multiplying_operatorContext : public antlr4::ParserRuleContext {
  public:
    Multiplying_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *REM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multiplying_operatorContext* multiplying_operator();

  class  Highest_precedence_operatorContext : public antlr4::ParserRuleContext {
  public:
    Highest_precedence_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPON();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Highest_precedence_operatorContext* highest_precedence_operator();

  class  Conditional_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_expressionContext *if_expression();
    Case_expressionContext *case_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_expressionContext* conditional_expression();

  class  If_expressionContext : public antlr4::ParserRuleContext {
  public:
    If_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSIF();
    antlr4::tree::TerminalNode* ELSIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_expressionContext* if_expression();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IS();
    std::vector<Case_expression_alternativeContext *> case_expression_alternative();
    Case_expression_alternativeContext* case_expression_alternative(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_expressionContext* case_expression();

  class  Case_expression_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Case_expression_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Discrete_choice_listContext *discrete_choice_list();
    antlr4::tree::TerminalNode *ARROW();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_expression_alternativeContext* case_expression_alternative();

  class  Quantified_expressionContext : public antlr4::ParserRuleContext {
  public:
    Quantified_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    QuantifierContext *quantifier();
    Loop_parameter_specificationContext *loop_parameter_specification();
    antlr4::tree::TerminalNode *ARROW();
    PredicateContext *predicate();
    Iterator_specificationContext *iterator_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quantified_expressionContext* quantified_expression();

  class  QuantifierContext : public antlr4::ParserRuleContext {
  public:
    QuantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SOME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuantifierContext* quantifier();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateContext* predicate();

  class  Type_conversionContext : public antlr4::ParserRuleContext {
  public:
    Type_conversionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_conversionContext* type_conversion();

  class  Qualified_expressionContext : public antlr4::ParserRuleContext {
  public:
    Qualified_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *SQ();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    AggregateContext *aggregate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Qualified_expressionContext* qualified_expression();

  class  AllocatorContext : public antlr4::ParserRuleContext {
  public:
    AllocatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Subtype_indicationContext *subtype_indication();
    Subpool_specificationContext *subpool_specification();
    Qualified_expressionContext *qualified_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocatorContext* allocator();

  class  Subpool_specificationContext : public antlr4::ParserRuleContext {
  public:
    Subpool_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    NameContext *name();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subpool_specificationContext* subpool_specification();

  class  Sequence_of_statementsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_of_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_of_statementsContext* sequence_of_statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_statementContext *simple_statement();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    Compound_statementContext *compound_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Simple_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Null_statementContext *null_statement();
    Assignment_statementContext *assignment_statement();
    Exit_statementContext *exit_statement();
    Goto_statementContext *goto_statement();
    Procedure_call_statementContext *procedure_call_statement();
    Simple_return_statementContext *simple_return_statement();
    Entry_call_statementContext *entry_call_statement();
    Requeue_statementContext *requeue_statement();
    Delay_statementContext *delay_statement();
    Abort_statementContext *abort_statement();
    Raise_statementContext *raise_statement();
    Qualified_expressionContext *qualified_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_statementContext* simple_statement();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_statementContext *if_statement();
    Case_statementContext *case_statement();
    Loop_statementContext *loop_statement();
    Block_statementContext *block_statement();
    Extended_return_statementContext *extended_return_statement();
    Accept_statementContext *accept_statement();
    Select_statementContext *select_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Null_statementContext : public antlr4::ParserRuleContext {
  public:
    Null_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Null_statementContext* null_statement();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Direct_nameContext *direct_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  Assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_statementContext* assignment_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<Sequence_of_statementsContext *> sequence_of_statements();
    Sequence_of_statementsContext* sequence_of_statements(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> ELSIF();
    antlr4::tree::TerminalNode* ELSIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IS();
    std::vector<Case_statement_alternativeContext *> case_statement_alternative();
    Case_statement_alternativeContext* case_statement_alternative(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_statement_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Case_statement_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Discrete_choice_listContext *discrete_choice_list();
    antlr4::tree::TerminalNode *ARROW();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_statement_alternativeContext* case_statement_alternative();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    Sequence_of_statementsContext *sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Direct_nameContext *direct_name();
    antlr4::tree::TerminalNode *COLON();
    Iteration_schemeContext *iteration_scheme();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Iteration_schemeContext : public antlr4::ParserRuleContext {
  public:
    Iteration_schemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *FOR();
    Loop_parameter_specificationContext *loop_parameter_specification();
    Iterator_specificationContext *iterator_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Iteration_schemeContext* iteration_scheme();

  class  Loop_parameter_specificationContext : public antlr4::ParserRuleContext {
  public:
    Loop_parameter_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IN();
    Discrete_subtype_definitionContext *discrete_subtype_definition();
    antlr4::tree::TerminalNode *REVERSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_parameter_specificationContext* loop_parameter_specification();

  class  Iterator_specificationContext : public antlr4::ParserRuleContext {
  public:
    Iterator_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IN();
    NameContext *name();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *COLON();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *OF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Iterator_specificationContext* iterator_specification();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Direct_nameContext *direct_name();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *DECLARE();
    Declarative_partContext *declarative_part();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_statementContext* block_statement();

  class  Exit_statementContext : public antlr4::ParserRuleContext {
  public:
    Exit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *SEMI();
    NameContext *name();
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exit_statementContext* exit_statement();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Goto_statementContext* goto_statement();

  class  Subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_declarationContext* subprogram_declaration();

  class  Subprogram_specificationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_specificationContext *procedure_specification();
    Function_specificationContext *function_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_specificationContext* subprogram_specification();

  class  Procedure_specificationContext : public antlr4::ParserRuleContext {
  public:
    Procedure_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Defining_program_unit_nameContext *defining_program_unit_name();
    Formal_partContext *formal_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedure_specificationContext* procedure_specification();

  class  Function_specificationContext : public antlr4::ParserRuleContext {
  public:
    Function_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Defining_designatorContext *defining_designator();
    Parameter_and_result_profileContext *parameter_and_result_profile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_specificationContext* function_specification();

  class  DesignatorContext : public antlr4::ParserRuleContext {
  public:
    DesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();
    Operator_symbolContext *operator_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DesignatorContext* designator();

  class  Defining_designatorContext : public antlr4::ParserRuleContext {
  public:
    Defining_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_program_unit_nameContext *defining_program_unit_name();
    Defining_operator_symbolContext *defining_operator_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defining_designatorContext* defining_designator();

  class  Defining_program_unit_nameContext : public antlr4::ParserRuleContext {
  public:
    Defining_program_unit_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defining_program_unit_nameContext* defining_program_unit_name();

  class  Operator_symbolContext : public antlr4::ParserRuleContext {
  public:
    Operator_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_literalContext *string_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_symbolContext* operator_symbol();

  class  Defining_operator_symbolContext : public antlr4::ParserRuleContext {
  public:
    Defining_operator_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_symbolContext *operator_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defining_operator_symbolContext* defining_operator_symbol();

  class  Parameter_and_result_profileContext : public antlr4::ParserRuleContext {
  public:
    Parameter_and_result_profileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Subtype_markContext *subtype_mark();
    Formal_partContext *formal_part();
    Null_exclusionContext *null_exclusion();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_and_result_profileContext* parameter_and_result_profile();

  class  Formal_partContext : public antlr4::ParserRuleContext {
  public:
    Formal_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Parameter_specificationContext *> parameter_specification();
    Parameter_specificationContext* parameter_specification(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_partContext* formal_part();

  class  Parameter_specificationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Mode_Context *mode_();
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *ALIASED();
    Null_exclusionContext *null_exclusion();
    antlr4::tree::TerminalNode *ASSIGN();
    Default_expressionContext *default_expression();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_specificationContext* parameter_specification();

  class  Mode_Context : public antlr4::ParserRuleContext {
  public:
    Mode_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mode_Context* mode_();

  class  Subprogram_bodyContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *IS();
    Declarative_partContext *declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();
    DesignatorContext *designator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_bodyContext* subprogram_body();

  class  Procedure_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedure_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Actual_parameter_partContext *actual_parameter_part();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedure_call_statementContext* procedure_call_statement();

  class  Actual_parameter_partContext : public antlr4::ParserRuleContext {
  public:
    Actual_parameter_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Parameter_associationContext *> parameter_association();
    Parameter_associationContext* parameter_association(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Actual_parameter_partContext* actual_parameter_part();

  class  Parameter_associationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Explicit_actual_parameterContext *explicit_actual_parameter();
    Selector_nameContext *selector_name();
    antlr4::tree::TerminalNode *ARROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_associationContext* parameter_association();

  class  Explicit_actual_parameterContext : public antlr4::ParserRuleContext {
  public:
    Explicit_actual_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explicit_actual_parameterContext* explicit_actual_parameter();

  class  Simple_return_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_return_statementContext* simple_return_statement();

  class  Extended_return_object_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extended_return_object_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *COLON();
    Return_subtype_indicationContext *return_subtype_indication();
    antlr4::tree::TerminalNode *ALIASED();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extended_return_object_declarationContext* extended_return_object_declaration();

  class  Extended_return_statementContext : public antlr4::ParserRuleContext {
  public:
    Extended_return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RETURN();
    antlr4::tree::TerminalNode* RETURN(size_t i);
    Extended_return_object_declarationContext *extended_return_object_declaration();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DO();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extended_return_statementContext* extended_return_statement();

  class  Return_subtype_indicationContext : public antlr4::ParserRuleContext {
  public:
    Return_subtype_indicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subtype_indicationContext *subtype_indication();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_subtype_indicationContext* return_subtype_indication();

  class  Null_procedure_declarationContext : public antlr4::ParserRuleContext {
  public:
    Null_procedure_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_specificationContext *procedure_specification();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Null_procedure_declarationContext* null_procedure_declaration();

  class  Expression_function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Expression_function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_specificationContext *function_specification();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_function_declarationContext* expression_function_declaration();

  class  Package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_specificationContext *package_specification();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_declarationContext* package_declaration();

  class  Package_specificationContext : public antlr4::ParserRuleContext {
  public:
    Package_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    Defining_program_unit_nameContext *defining_program_unit_name();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *END();
    Aspect_specificationContext *aspect_specification();
    std::vector<Basic_declarative_itemContext *> basic_declarative_item();
    Basic_declarative_itemContext* basic_declarative_item(size_t i);
    antlr4::tree::TerminalNode *PRIVATE();
    IdentifierContext *identifier();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_specificationContext* package_specification();

  class  Package_bodyContext : public antlr4::ParserRuleContext {
  public:
    Package_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *BODY_();
    Defining_program_unit_nameContext *defining_program_unit_name();
    antlr4::tree::TerminalNode *IS();
    Declarative_partContext *declarative_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *BEGIN();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    IdentifierContext *identifier();
    NameContext *name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_bodyContext* package_body();

  class  Private_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Private_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *SEMI();
    Discriminant_partContext *discriminant_part();
    antlr4::tree::TerminalNode *TAGGED();
    antlr4::tree::TerminalNode *LIMITED();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *ABSTRACT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Private_type_declarationContext* private_type_declaration();

  class  Private_extension_declarationContext : public antlr4::ParserRuleContext {
  public:
    Private_extension_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NEW();
    Subtype_indicationContext *subtype_indication();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    Discriminant_partContext *discriminant_part();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *AND();
    Interface_listContext *interface_list();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Private_extension_declarationContext* private_extension_declaration();

  class  Overriding_indicatorContext : public antlr4::ParserRuleContext {
  public:
    Overriding_indicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Overriding_indicatorContext* overriding_indicator();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_package_clauseContext *use_package_clause();
    Use_type_clauseContext *use_type_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_clauseContext* use_clause();

  class  Use_package_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_package_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_package_clauseContext* use_package_clause();

  class  Use_type_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_type_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<Subtype_markContext *> subtype_mark();
    Subtype_markContext* subtype_mark(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_type_clauseContext* use_type_clause();

  class  Renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Object_renaming_declarationContext *object_renaming_declaration();
    Exception_renaming_declarationContext *exception_renaming_declaration();
    Package_renaming_declarationContext *package_renaming_declaration();
    Subprogram_renaming_declarationContext *subprogram_renaming_declaration();
    Generic_renaming_declarationContext *generic_renaming_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Renaming_declarationContext* renaming_declaration();

  class  Object_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Object_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *COLON();
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *RENAMES();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Null_exclusionContext *null_exclusion();
    Aspect_specificationContext *aspect_specification();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Object_renaming_declarationContext* object_renaming_declaration();

  class  Exception_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Exception_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *RENAMES();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exception_renaming_declarationContext* exception_renaming_declaration();

  class  Package_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    Defining_program_unit_nameContext *defining_program_unit_name();
    antlr4::tree::TerminalNode *RENAMES();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_renaming_declarationContext* package_renaming_declaration();

  class  Subprogram_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *RENAMES();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_renaming_declarationContext* subprogram_renaming_declaration();

  class  Generic_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Generic_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *PACKAGE();
    Defining_program_unit_nameContext *defining_program_unit_name();
    antlr4::tree::TerminalNode *RENAMES();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_renaming_declarationContext* generic_renaming_declaration();

  class  Task_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *SEMI();
    Known_discriminant_partContext *known_discriminant_part();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *IS();
    Task_definitionContext *task_definition();
    antlr4::tree::TerminalNode *NEW();
    Interface_listContext *interface_list();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_type_declarationContext* task_type_declaration();

  class  Single_task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Single_task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *IS();
    Task_definitionContext *task_definition();
    antlr4::tree::TerminalNode *NEW();
    Interface_listContext *interface_list();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Single_task_declarationContext* single_task_declaration();

  class  Task_definitionContext : public antlr4::ParserRuleContext {
  public:
    Task_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    std::vector<Task_itemContext *> task_item();
    Task_itemContext* task_item(size_t i);
    antlr4::tree::TerminalNode *PRIVATE();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_definitionContext* task_definition();

  class  Task_itemContext : public antlr4::ParserRuleContext {
  public:
    Task_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entry_declarationContext *entry_declaration();
    Aspect_clauseContext *aspect_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_itemContext* task_item();

  class  Task_bodyContext : public antlr4::ParserRuleContext {
  public:
    Task_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    antlr4::tree::TerminalNode *BODY_();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Declarative_partContext *declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_bodyContext* task_body();

  class  Protected_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protected_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Protected_definitionContext *protected_definition();
    antlr4::tree::TerminalNode *SEMI();
    Known_discriminant_partContext *known_discriminant_part();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *NEW();
    Interface_listContext *interface_list();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_type_declarationContext* protected_type_declaration();

  class  Single_protected_declarationContext : public antlr4::ParserRuleContext {
  public:
    Single_protected_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTECTED();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Protected_definitionContext *protected_definition();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *NEW();
    Interface_listContext *interface_list();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Single_protected_declarationContext* single_protected_declaration();

  class  Protected_definitionContext : public antlr4::ParserRuleContext {
  public:
    Protected_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    std::vector<Protected_operation_declarationContext *> protected_operation_declaration();
    Protected_operation_declarationContext* protected_operation_declaration(size_t i);
    antlr4::tree::TerminalNode *PRIVATE();
    IdentifierContext *identifier();
    std::vector<Protected_element_declarationContext *> protected_element_declaration();
    Protected_element_declarationContext* protected_element_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_definitionContext* protected_definition();

  class  Protected_operation_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protected_operation_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Entry_declarationContext *entry_declaration();
    Aspect_clauseContext *aspect_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_operation_declarationContext* protected_operation_declaration();

  class  Protected_element_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protected_element_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protected_operation_declarationContext *protected_operation_declaration();
    Component_declarationContext *component_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_element_declarationContext* protected_element_declaration();

  class  Protected_bodyContext : public antlr4::ParserRuleContext {
  public:
    Protected_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *BODY_();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();
    std::vector<Protected_operation_itemContext *> protected_operation_item();
    Protected_operation_itemContext* protected_operation_item(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_bodyContext* protected_body();

  class  Protected_operation_itemContext : public antlr4::ParserRuleContext {
  public:
    Protected_operation_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Subprogram_bodyContext *subprogram_body();
    Entry_bodyContext *entry_body();
    Aspect_clauseContext *aspect_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_operation_itemContext* protected_operation_item();

  class  Entry_declarationContext : public antlr4::ParserRuleContext {
  public:
    Entry_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTRY();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    antlr4::tree::TerminalNode *LP();
    Discrete_subtype_definitionContext *discrete_subtype_definition();
    antlr4::tree::TerminalNode *RP();
    Formal_partContext *formal_part();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_declarationContext* entry_declaration();

  class  Accept_statementContext : public antlr4::ParserRuleContext {
  public:
    Accept_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCEPT_();
    Entry_direct_nameContext *entry_direct_name();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LP();
    Entry_indexContext *entry_index();
    antlr4::tree::TerminalNode *RP();
    Formal_partContext *formal_part();
    antlr4::tree::TerminalNode *DO();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    Entry_identifierContext *entry_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_statementContext* accept_statement();

  class  Entry_direct_nameContext : public antlr4::ParserRuleContext {
  public:
    Entry_direct_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Direct_nameContext *direct_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_direct_nameContext* entry_direct_name();

  class  Entry_indexContext : public antlr4::ParserRuleContext {
  public:
    Entry_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_indexContext* entry_index();

  class  Entry_bodyContext : public antlr4::ParserRuleContext {
  public:
    Entry_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTRY();
    Defining_identifierContext *defining_identifier();
    Entry_body_formal_partContext *entry_body_formal_part();
    Entry_barrierContext *entry_barrier();
    antlr4::tree::TerminalNode *IS();
    Declarative_partContext *declarative_part();
    antlr4::tree::TerminalNode *BEGIN();
    Handled_sequence_of_statementsContext *handled_sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    Entry_identifierContext *entry_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_bodyContext* entry_body();

  class  Entry_identifierContext : public antlr4::ParserRuleContext {
  public:
    Entry_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_identifierContext* entry_identifier();

  class  Entry_body_formal_partContext : public antlr4::ParserRuleContext {
  public:
    Entry_body_formal_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Entry_index_specificationContext *entry_index_specification();
    antlr4::tree::TerminalNode *RP();
    Formal_partContext *formal_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_body_formal_partContext* entry_body_formal_part();

  class  Entry_barrierContext : public antlr4::ParserRuleContext {
  public:
    Entry_barrierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_barrierContext* entry_barrier();

  class  Entry_index_specificationContext : public antlr4::ParserRuleContext {
  public:
    Entry_index_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IN();
    Discrete_subtype_definitionContext *discrete_subtype_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_index_specificationContext* entry_index_specification();

  class  Entry_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Entry_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    Actual_parameter_partContext *actual_parameter_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_call_statementContext* entry_call_statement();

  class  Requeue_statementContext : public antlr4::ParserRuleContext {
  public:
    Requeue_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUEUE();
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ABORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Requeue_statementContext* requeue_statement();

  class  Delay_statementContext : public antlr4::ParserRuleContext {
  public:
    Delay_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_until_statementContext *delay_until_statement();
    Delay_relative_statementContext *delay_relative_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_statementContext* delay_statement();

  class  Delay_until_statementContext : public antlr4::ParserRuleContext {
  public:
    Delay_until_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELAY();
    antlr4::tree::TerminalNode *UNTIL();
    Delay_expressionContext *delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_until_statementContext* delay_until_statement();

  class  Delay_relative_statementContext : public antlr4::ParserRuleContext {
  public:
    Delay_relative_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELAY();
    Delay_expressionContext *delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_relative_statementContext* delay_relative_statement();

  class  Delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_expressionContext* delay_expression();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selective_acceptContext *selective_accept();
    Timed_entry_callContext *timed_entry_call();
    Conditional_entry_callContext *conditional_entry_call();
    Asynchronous_selectContext *asynchronous_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_statementContext* select_statement();

  class  Selective_acceptContext : public antlr4::ParserRuleContext {
  public:
    Selective_acceptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    std::vector<Select_alternativeContext *> select_alternative();
    Select_alternativeContext* select_alternative(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<GuardContext *> guard();
    GuardContext* guard(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Selective_acceptContext* selective_accept();

  class  GuardContext : public antlr4::ParserRuleContext {
  public:
    GuardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *ARROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardContext* guard();

  class  Select_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Select_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Accept_alternativeContext *accept_alternative();
    Delay_alternativeContext *delay_alternative();
    Terminate_alternativeContext *terminate_alternative();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_alternativeContext* select_alternative();

  class  Accept_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Accept_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Accept_statementContext *accept_statement();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_alternativeContext* accept_alternative();

  class  Delay_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Delay_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_statementContext *delay_statement();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_alternativeContext* delay_alternative();

  class  Terminate_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Terminate_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATE();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Terminate_alternativeContext* terminate_alternative();

  class  Timed_entry_callContext : public antlr4::ParserRuleContext {
  public:
    Timed_entry_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    Entry_call_alternativeContext *entry_call_alternative();
    antlr4::tree::TerminalNode *OR();
    Delay_alternativeContext *delay_alternative();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timed_entry_callContext* timed_entry_call();

  class  Entry_call_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Entry_call_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_or_entry_callContext *procedure_or_entry_call();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entry_call_alternativeContext* entry_call_alternative();

  class  Procedure_or_entry_callContext : public antlr4::ParserRuleContext {
  public:
    Procedure_or_entry_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_call_statementContext *procedure_call_statement();
    Entry_call_statementContext *entry_call_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedure_or_entry_callContext* procedure_or_entry_call();

  class  Conditional_entry_callContext : public antlr4::ParserRuleContext {
  public:
    Conditional_entry_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    Entry_call_alternativeContext *entry_call_alternative();
    antlr4::tree::TerminalNode *ELSE();
    Sequence_of_statementsContext *sequence_of_statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_entry_callContext* conditional_entry_call();

  class  Asynchronous_selectContext : public antlr4::ParserRuleContext {
  public:
    Asynchronous_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    Triggering_alternativeContext *triggering_alternative();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ABORT();
    Abortable_partContext *abortable_part();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Asynchronous_selectContext* asynchronous_select();

  class  Triggering_alternativeContext : public antlr4::ParserRuleContext {
  public:
    Triggering_alternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Triggering_statementContext *triggering_statement();
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Triggering_alternativeContext* triggering_alternative();

  class  Triggering_statementContext : public antlr4::ParserRuleContext {
  public:
    Triggering_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedure_or_entry_callContext *procedure_or_entry_call();
    Delay_statementContext *delay_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Triggering_statementContext* triggering_statement();

  class  Abortable_partContext : public antlr4::ParserRuleContext {
  public:
    Abortable_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_of_statementsContext *sequence_of_statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Abortable_partContext* abortable_part();

  class  Abort_statementContext : public antlr4::ParserRuleContext {
  public:
    Abort_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Abort_statementContext* abort_statement();

  class  CompilationContext : public antlr4::ParserRuleContext {
  public:
    CompilationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Compilation_unitContext *> compilation_unit();
    Compilation_unitContext* compilation_unit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationContext* compilation();

  class  Compilation_unitContext : public antlr4::ParserRuleContext {
  public:
    Compilation_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_itemContext *library_item();
    SubunitContext *subunit();
    std::vector<Context_itemContext *> context_item();
    Context_itemContext* context_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_unitContext* compilation_unit();

  class  Library_itemContext : public antlr4::ParserRuleContext {
  public:
    Library_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_unit_declarationContext *library_unit_declaration();
    antlr4::tree::TerminalNode *PRIVATE();
    Library_unit_bodyContext *library_unit_body();
    Library_unit_renaming_declarationContext *library_unit_renaming_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_itemContext* library_item();

  class  Library_unit_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_unit_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationContext *subprogram_declaration();
    Package_declarationContext *package_declaration();
    Generic_declarationContext *generic_declaration();
    Generic_instantiationContext *generic_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_unit_declarationContext* library_unit_declaration();

  class  Library_unit_renaming_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_unit_renaming_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_renaming_declarationContext *package_renaming_declaration();
    Generic_renaming_declarationContext *generic_renaming_declaration();
    Subprogram_renaming_declarationContext *subprogram_renaming_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_unit_renaming_declarationContext* library_unit_renaming_declaration();

  class  Library_unit_bodyContext : public antlr4::ParserRuleContext {
  public:
    Library_unit_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_bodyContext *subprogram_body();
    Package_bodyContext *package_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_unit_bodyContext* library_unit_body();

  class  Context_itemContext : public antlr4::ParserRuleContext {
  public:
    Context_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    With_clauseContext *with_clause();
    Use_clauseContext *use_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Context_itemContext* context_item();

  class  With_clauseContext : public antlr4::ParserRuleContext {
  public:
    With_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limited_with_clauseContext *limited_with_clause();
    Nonlimited_with_clauseContext *nonlimited_with_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  With_clauseContext* with_clause();

  class  Limited_with_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limited_with_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *WITH();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PRIVATE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Limited_with_clauseContext* limited_with_clause();

  class  Nonlimited_with_clauseContext : public antlr4::ParserRuleContext {
  public:
    Nonlimited_with_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PRIVATE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nonlimited_with_clauseContext* nonlimited_with_clause();

  class  Body_stubContext : public antlr4::ParserRuleContext {
  public:
    Body_stubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_body_stubContext *subprogram_body_stub();
    Package_body_stubContext *package_body_stub();
    Task_body_stubContext *task_body_stub();
    Protected_body_stubContext *protected_body_stub();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Body_stubContext* body_stub();

  class  Subprogram_body_stubContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_body_stubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *SEMI();
    Overriding_indicatorContext *overriding_indicator();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_body_stubContext* subprogram_body_stub();

  class  Package_body_stubContext : public antlr4::ParserRuleContext {
  public:
    Package_body_stubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *BODY_();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_body_stubContext* package_body_stub();

  class  Task_body_stubContext : public antlr4::ParserRuleContext {
  public:
    Task_body_stubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    antlr4::tree::TerminalNode *BODY_();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_body_stubContext* task_body_stub();

  class  Protected_body_stubContext : public antlr4::ParserRuleContext {
  public:
    Protected_body_stubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *BODY_();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protected_body_stubContext* protected_body_stub();

  class  SubunitContext : public antlr4::ParserRuleContext {
  public:
    SubunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *LP();
    NameContext *name();
    antlr4::tree::TerminalNode *RP();
    Proper_bodyContext *proper_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubunitContext* subunit();

  class  Exception_declarationContext : public antlr4::ParserRuleContext {
  public:
    Exception_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exception_declarationContext* exception_declaration();

  class  Handled_sequence_of_statementsContext : public antlr4::ParserRuleContext {
  public:
    Handled_sequence_of_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_of_statementsContext *sequence_of_statements();
    antlr4::tree::TerminalNode *EXCEPTION();
    std::vector<Exception_handlerContext *> exception_handler();
    Exception_handlerContext* exception_handler(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Handled_sequence_of_statementsContext* handled_sequence_of_statements();

  class  Exception_handlerContext : public antlr4::ParserRuleContext {
  public:
    Exception_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<Exception_choiceContext *> exception_choice();
    Exception_choiceContext* exception_choice(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    Sequence_of_statementsContext *sequence_of_statements();
    Choice_parameter_specificationContext *choice_parameter_specification();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> VL();
    antlr4::tree::TerminalNode* VL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exception_handlerContext* exception_handler();

  class  Choice_parameter_specificationContext : public antlr4::ParserRuleContext {
  public:
    Choice_parameter_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifierContext *defining_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Choice_parameter_specificationContext* choice_parameter_specification();

  class  Exception_choiceContext : public antlr4::ParserRuleContext {
  public:
    Exception_choiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *OTHERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exception_choiceContext* exception_choice();

  class  Raise_statementContext : public antlr4::ParserRuleContext {
  public:
    Raise_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *SEMI();
    NameContext *name();
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raise_statementContext* raise_statement();

  class  Generic_declarationContext : public antlr4::ParserRuleContext {
  public:
    Generic_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_subprogram_declarationContext *generic_subprogram_declaration();
    Generic_package_declarationContext *generic_package_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_declarationContext* generic_declaration();

  class  Generic_subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Generic_subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_formal_partContext *generic_formal_part();
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_subprogram_declarationContext* generic_subprogram_declaration();

  class  Generic_package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Generic_package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_formal_partContext *generic_formal_part();
    Package_specificationContext *package_specification();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_package_declarationContext* generic_package_declaration();

  class  Generic_formal_partContext : public antlr4::ParserRuleContext {
  public:
    Generic_formal_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERIC();
    std::vector<Generic_formal_parameter_declarationContext *> generic_formal_parameter_declaration();
    Generic_formal_parameter_declarationContext* generic_formal_parameter_declaration(size_t i);
    std::vector<Use_clauseContext *> use_clause();
    Use_clauseContext* use_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_formal_partContext* generic_formal_part();

  class  Generic_formal_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Generic_formal_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_object_declarationContext *formal_object_declaration();
    Formal_type_declarationContext *formal_type_declaration();
    Formal_subprogram_declarationContext *formal_subprogram_declaration();
    Formal_package_declarationContext *formal_package_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_formal_parameter_declarationContext* generic_formal_parameter_declaration();

  class  Generic_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Generic_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    Defining_program_unit_nameContext *defining_program_unit_name();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NEW();
    NameContext *name();
    Generic_actual_partContext *generic_actual_part();
    Aspect_specificationContext *aspect_specification();
    antlr4::tree::TerminalNode *PROCEDURE();
    Overriding_indicatorContext *overriding_indicator();
    antlr4::tree::TerminalNode *FUNCTION();
    Defining_designatorContext *defining_designator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_instantiationContext* generic_instantiation();

  class  Generic_actual_partContext : public antlr4::ParserRuleContext {
  public:
    Generic_actual_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Generic_associationContext *> generic_association();
    Generic_associationContext* generic_association(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_actual_partContext* generic_actual_part();

  class  Generic_associationContext : public antlr4::ParserRuleContext {
  public:
    Generic_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Explicit_generic_actual_parameterContext *explicit_generic_actual_parameter();
    Selector_nameContext *selector_name();
    antlr4::tree::TerminalNode *ARROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_associationContext* generic_association();

  class  Explicit_generic_actual_parameterContext : public antlr4::ParserRuleContext {
  public:
    Explicit_generic_actual_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    NameContext *name();
    Subtype_markContext *subtype_mark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explicit_generic_actual_parameterContext* explicit_generic_actual_parameter();

  class  Formal_object_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_object_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defining_identifier_listContext *defining_identifier_list();
    antlr4::tree::TerminalNode *COLON();
    Mode_Context *mode_();
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *SEMI();
    Null_exclusionContext *null_exclusion();
    antlr4::tree::TerminalNode *ASSIGN();
    Default_expressionContext *default_expression();
    Aspect_specificationContext *aspect_specification();
    Access_definitionContext *access_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_object_declarationContext* formal_object_declaration();

  class  Formal_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_complete_type_declarationContext *formal_complete_type_declaration();
    Formal_incomplete_type_declarationContext *formal_incomplete_type_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_type_declarationContext* formal_type_declaration();

  class  Formal_complete_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_complete_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    Formal_type_definitionContext *formal_type_definition();
    antlr4::tree::TerminalNode *SEMI();
    Discriminant_partContext *discriminant_part();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_complete_type_declarationContext* formal_complete_type_declaration();

  class  Formal_incomplete_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_incomplete_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *SEMI();
    Discriminant_partContext *discriminant_part();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TAGGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_incomplete_type_declarationContext* formal_incomplete_type_declaration();

  class  Formal_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_private_type_definitionContext *formal_private_type_definition();
    Formal_derived_type_definitionContext *formal_derived_type_definition();
    Formal_discrete_type_definitionContext *formal_discrete_type_definition();
    Formal_signed_integer_type_definitionContext *formal_signed_integer_type_definition();
    Formal_modular_type_definitionContext *formal_modular_type_definition();
    Formal_floating_point_type_definitionContext *formal_floating_point_type_definition();
    Formal_ordinary_fixed_point_type_definitionContext *formal_ordinary_fixed_point_type_definition();
    Formal_decimal_fixed_point_type_definitionContext *formal_decimal_fixed_point_type_definition();
    Formal_array_type_definitionContext *formal_array_type_definition();
    Formal_access_type_definitionContext *formal_access_type_definition();
    Formal_interface_type_definitionContext *formal_interface_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_type_definitionContext* formal_type_definition();

  class  Formal_private_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_private_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *TAGGED();
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *ABSTRACT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_private_type_definitionContext* formal_private_type_definition();

  class  Formal_derived_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_derived_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *NEW();
    Subtype_markContext *subtype_mark();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *LIMITED();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *AND();
    Interface_listContext *interface_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_derived_type_definitionContext* formal_derived_type_definition();

  class  Formal_discrete_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_discrete_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *BOX();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_discrete_type_definitionContext* formal_discrete_type_definition();

  class  Formal_signed_integer_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_signed_integer_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangeContext *range();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_signed_integer_type_definitionContext* formal_signed_integer_type_definition();

  class  Formal_modular_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_modular_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_modular_type_definitionContext* formal_modular_type_definition();

  class  Formal_floating_point_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_floating_point_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_floating_point_type_definitionContext* formal_floating_point_type_definition();

  class  Formal_ordinary_fixed_point_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_ordinary_fixed_point_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_ordinary_fixed_point_type_definitionContext* formal_ordinary_fixed_point_type_definition();

  class  Formal_decimal_fixed_point_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_decimal_fixed_point_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA();
    std::vector<antlr4::tree::TerminalNode *> BOX();
    antlr4::tree::TerminalNode* BOX(size_t i);
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_decimal_fixed_point_type_definitionContext* formal_decimal_fixed_point_type_definition();

  class  Formal_array_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_array_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_type_definitionContext *array_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_array_type_definitionContext* formal_array_type_definition();

  class  Formal_access_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_access_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Access_type_definitionContext *access_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_access_type_definitionContext* formal_access_type_definition();

  class  Formal_interface_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Formal_interface_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_type_definitionContext *interface_type_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_interface_type_definitionContext* formal_interface_type_definition();

  class  Formal_subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Formal_concrete_subprogram_declarationContext *formal_concrete_subprogram_declaration();
    Formal_abstract_subprogram_declarationContext *formal_abstract_subprogram_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_subprogram_declarationContext* formal_subprogram_declaration();

  class  Formal_concrete_subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_concrete_subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *IS();
    Subprogram_defaultContext *subprogram_default();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_concrete_subprogram_declarationContext* formal_concrete_subprogram_declaration();

  class  Formal_abstract_subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_abstract_subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Subprogram_specificationContext *subprogram_specification();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *SEMI();
    Subprogram_defaultContext *subprogram_default();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_abstract_subprogram_declarationContext* formal_abstract_subprogram_declaration();

  class  Subprogram_defaultContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *BOX();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subprogram_defaultContext* subprogram_default();

  class  Formal_package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Formal_package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PACKAGE();
    Defining_identifierContext *defining_identifier();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NEW();
    NameContext *name();
    Formal_package_actual_partContext *formal_package_actual_part();
    antlr4::tree::TerminalNode *SEMI();
    Aspect_specificationContext *aspect_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_package_declarationContext* formal_package_declaration();

  class  Formal_package_actual_partContext : public antlr4::ParserRuleContext {
  public:
    Formal_package_actual_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *BOX();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *ARROW();
    Generic_actual_partContext *generic_actual_part();
    std::vector<Formal_package_associationContext *> formal_package_association();
    Formal_package_associationContext* formal_package_association(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_package_actual_partContext* formal_package_actual_part();

  class  Formal_package_associationContext : public antlr4::ParserRuleContext {
  public:
    Formal_package_associationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_associationContext *generic_association();
    Selector_nameContext *selector_name();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Formal_package_associationContext* formal_package_association();

  class  Aspect_clauseContext : public antlr4::ParserRuleContext {
  public:
    Aspect_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_definition_clauseContext *attribute_definition_clause();
    Enumeration_representation_clauseContext *enumeration_representation_clause();
    Record_representation_clauseContext *record_representation_clause();
    At_clauseContext *at_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aspect_clauseContext* aspect_clause();

  class  Local_nameContext : public antlr4::ParserRuleContext {
  public:
    Local_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Direct_nameContext *direct_name();
    antlr4::tree::TerminalNode *SQ();
    Attribute_designatorContext *attribute_designator();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_nameContext* local_name();

  class  Aspect_specificationContext : public antlr4::ParserRuleContext {
  public:
    Aspect_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Aspect_markContext *> aspect_mark();
    Aspect_markContext* aspect_mark(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ARROW();
    antlr4::tree::TerminalNode* ARROW(size_t i);
    std::vector<Aspect_definitionContext *> aspect_definition();
    Aspect_definitionContext* aspect_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aspect_specificationContext* aspect_specification();

  class  Aspect_markContext : public antlr4::ParserRuleContext {
  public:
    Aspect_markContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Aspect_identifierContext *aspect_identifier();
    antlr4::tree::TerminalNode *SQ();
    antlr4::tree::TerminalNode *CLASS__();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aspect_markContext* aspect_mark();

  class  Aspect_identifierContext : public antlr4::ParserRuleContext {
  public:
    Aspect_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aspect_identifierContext* aspect_identifier();

  class  Aspect_definitionContext : public antlr4::ParserRuleContext {
  public:
    Aspect_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    ExpressionContext *expression();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aspect_definitionContext* aspect_definition();

  class  Attribute_definition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Attribute_definition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Local_nameContext *local_name();
    antlr4::tree::TerminalNode *SQ();
    Attribute_designatorContext *attribute_designator();
    antlr4::tree::TerminalNode *USE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_definition_clauseContext* attribute_definition_clause();

  class  Enumeration_representation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_representation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Local_nameContext *local_name();
    antlr4::tree::TerminalNode *USE();
    Enumeration_aggregateContext *enumeration_aggregate();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enumeration_representation_clauseContext* enumeration_representation_clause();

  class  Enumeration_aggregateContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_aggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_aggregateContext *array_aggregate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enumeration_aggregateContext* enumeration_aggregate();

  class  Record_representation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Record_representation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Local_nameContext *local_name();
    antlr4::tree::TerminalNode *USE();
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    antlr4::tree::TerminalNode *END();
    Mod_clauseContext *mod_clause();
    std::vector<Component_clauseContext *> component_clause();
    Component_clauseContext* component_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Record_representation_clauseContext* record_representation_clause();

  class  Component_clauseContext : public antlr4::ParserRuleContext {
  public:
    Component_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Component_local_nameContext *component_local_name();
    antlr4::tree::TerminalNode *AT();
    PositionContext *position();
    antlr4::tree::TerminalNode *RANGE_();
    First_bitContext *first_bit();
    antlr4::tree::TerminalNode *DOTDOT();
    Last_bitContext *last_bit();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_clauseContext* component_clause();

  class  Component_local_nameContext : public antlr4::ParserRuleContext {
  public:
    Component_local_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_nameContext *local_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_local_nameContext* component_local_name();

  class  PositionContext : public antlr4::ParserRuleContext {
  public:
    PositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PositionContext* position();

  class  First_bitContext : public antlr4::ParserRuleContext {
  public:
    First_bitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  First_bitContext* first_bit();

  class  Last_bitContext : public antlr4::ParserRuleContext {
  public:
    Last_bitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Last_bitContext* last_bit();

  class  Delta_constraintContext : public antlr4::ParserRuleContext {
  public:
    Delta_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA();
    ExpressionContext *expression();
    Range_constraintContext *range_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delta_constraintContext* delta_constraint();

  class  At_clauseContext : public antlr4::ParserRuleContext {
  public:
    At_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Direct_nameContext *direct_name();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *AT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  At_clauseContext* at_clause();

  class  Mod_clauseContext : public antlr4::ParserRuleContext {
  public:
    Mod_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *MOD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mod_clauseContext* mod_clause();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool nameSempred(NameContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

