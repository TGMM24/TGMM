
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  myParser : public antlr4::Parser {
public:
  enum {
    AS = 1, ALPHA = 2, BREAK = 3, CASE = 4, CATCH = 5, CLASS = 6, CONTINUE = 7, 
    DEFAULT = 8, DEFER = 9, DO = 10, GUARD = 11, ELSE = 12, ENUM = 13, FOR = 14, 
    FALLTHROUGH = 15, FUNC = 16, IN = 17, IF = 18, IMPORT = 19, INTERNAL = 20, 
    FINAL = 21, OPEN = 22, PRIVATE = 23, PUBLIC = 24, WHERE = 25, WHILE = 26, 
    LET = 27, VAR = 28, PROTOCOL = 29, GET = 30, SET = 31, WILL_SET = 32, 
    DID_SET = 33, REPEAT = 34, SWITCH = 35, STRUCT = 36, RETURN = 37, THROW = 38, 
    THROWS = 39, RETHROWS = 40, INDIRECT = 41, INIT = 42, DEINIT = 43, ASSOCIATED_TYPE = 44, 
    EXTENSION = 45, SUBSCRIPT = 46, PREFIX = 47, INFIX = 48, LEFT = 49, 
    RIGHT = 50, NONE = 51, PRECEDENCE_GROUP = 52, HIGHER_THAN = 53, LOWER_THAN = 54, 
    ASSIGNMENT = 55, ASSOCIATIVITY = 56, POSTFIX = 57, OPERATOR = 58, TYPEALIAS = 59, 
    OS = 60, ARCH = 61, SWIFT = 62, COMPILER = 63, CAN_IMPORT = 64, TARGET_ENVIRONMENT = 65, 
    CONVENIENCE = 66, DYNAMIC = 67, LAZY = 68, OPTIONAL = 69, OVERRIDE = 70, 
    REQUIRED = 71, STATIC = 72, WEAK = 73, UNOWNED = 74, SAFE = 75, UNSAFE = 76, 
    MUTATING = 77, NONMUTATING = 78, FILE_PRIVATE = 79, IS = 80, TRY = 81, 
    SUPER = 82, ANY = 83, FALSE = 84, RED = 85, BLUE = 86, GREEN = 87, RESOURCE_NAME = 88, 
    TRUE = 89, NIL = 90, INOUT = 91, SOME = 92, TYPE = 93, PRECEDENCE = 94, 
    SELF = 95, SELF_BIG = 96, MAC_OS = 97, I_OS = 98, OSX = 99, WATCH_OS = 100, 
    TV_OS = 101, LINUX = 102, WINDOWS = 103, I386 = 104, X86_64 = 105, ARM = 106, 
    ARM64 = 107, SIMULATOR = 108, MAC_CATALYST = 109, I_OS_APPLICATION_EXTENSION = 110, 
    MAC_CATALYST_APPLICATION_EXTENSION = 111, MAC_OS_APPLICATION_EXTENSION = 112, 
    SOURCE_LOCATION = 113, FILE = 114, LINE = 115, ERROR = 116, WARNING = 117, 
    AVAILABLE = 118, HASH_IF = 119, HASH_ELSEIF = 120, HASH_ELSE = 121, 
    HASH_ENDIF = 122, HASH_FILE = 123, HASH_FILE_ID = 124, HASH_FILE_PATH = 125, 
    HASH_LINE = 126, HASH_COLUMN = 127, HASH_FUNCTION = 128, HASH_DSO_HANDLE = 129, 
    HASH_SELECTOR = 130, HASH_KEYPATH = 131, HASH_COLOR_LITERAL = 132, HASH_FILE_LITERAL = 133, 
    HASH_IMAGE_LITERAL = 134, GETTER = 135, SETTER = 136, Identifier = 137, 
    DOT = 138, LCURLY = 139, LPAREN = 140, LBRACK = 141, RCURLY = 142, RPAREN = 143, 
    RBRACK = 144, COMMA = 145, COLON = 146, SEMI = 147, LT = 148, GT = 149, 
    UNDERSCORE = 150, BANG = 151, QUESTION = 152, AT = 153, AND = 154, SUB = 155, 
    EQUAL = 156, OR = 157, DIV = 158, ADD = 159, MUL = 160, MOD = 161, CARET = 162, 
    TILDE = 163, HASH = 164, BACKTICK = 165, DOLLAR = 166, BACKSLASH = 167, 
    Operator_head_other = 168, Operator_following_character = 169, Binary_literal = 170, 
    Octal_literal = 171, Decimal_digits = 172, Decimal_literal = 173, Hexadecimal_literal = 174, 
    Floating_point_literal = 175, WS = 176, HASHBANG = 177, Block_comment = 178, 
    Line_comment = 179, Multi_line_extended_string_open = 180, Single_line_extended_string_open = 181, 
    Multi_line_string_open = 182, Single_line_string_open = 183, Interpolataion_single_line = 184, 
    Single_line_string_close = 185, Quoted_single_line_text = 186, Interpolataion_multi_line = 187, 
    Multi_line_string_close = 188, Quoted_multi_line_text = 189, Single_line_extended_string_close = 190, 
    Quoted_single_line_extended_text = 191, Multi_line_extended_string_close = 192, 
    Quoted_multi_line_extended_text = 193
  };

  enum {
    RuleTop_level = 0, RuleStatement = 1, RuleStatements = 2, RuleLoop_statement = 3, 
    RuleFor_in_statement = 4, RuleWhile_statement = 5, RuleCondition_list = 6, 
    RuleCondition = 7, RuleCase_condition = 8, RuleOptional_binding_condition = 9, 
    RuleRepeat_while_statement = 10, RuleBranch_statement = 11, RuleIf_statement = 12, 
    RuleElse_clause = 13, RuleGuard_statement = 14, RuleSwitch_statement = 15, 
    RuleSwitch_cases = 16, RuleSwitch_case = 17, RuleCase_label = 18, RuleCase_item_list = 19, 
    RuleDefault_label = 20, RuleWhere_clause = 21, RuleWhere_expression = 22, 
    RuleConditional_switch_case = 23, RuleSwitch_if_directive_clause = 24, 
    RuleSwitch_elseif_directive_clauses = 25, RuleSwitch_elseif_directive_clause = 26, 
    RuleSwitch_else_directive_clause = 27, RuleLabeled_statement = 28, RuleStatement_label = 29, 
    RuleLabel_name = 30, RuleControl_transfer_statement = 31, RuleBreak_statement = 32, 
    RuleContinue_statement = 33, RuleFallthrough_statement = 34, RuleReturn_statement = 35, 
    RuleThrow_statement = 36, RuleDefer_statement = 37, RuleDo_statement = 38, 
    RuleCatch_clauses = 39, RuleCatch_clause = 40, RuleCatch_pattern_list = 41, 
    RuleCatch_pattern = 42, RuleCompiler_control_statement = 43, RuleConditional_compilation_block = 44, 
    RuleIf_directive_clause = 45, RuleElseif_directive_clauses = 46, RuleElseif_directive_clause = 47, 
    RuleElse_directive_clause = 48, RuleCompilation_condition = 49, RulePlatform_condition = 50, 
    RuleSwift_version = 51, RuleSwift_version_continuation = 52, RuleOperating_system = 53, 
    RuleArchitecture = 54, RuleModule_name = 55, RuleEnvironment = 56, RuleLine_control_statement = 57, 
    RuleLine_number = 58, RuleFile_name = 59, RuleDiagnostic_statement = 60, 
    RuleDiagnostic_message = 61, RuleAvailability_condition = 62, RuleAvailability_arguments = 63, 
    RuleAvailability_argument = 64, RulePlatform_name = 65, RulePlatform_version = 66, 
    RuleGeneric_parameter_clause = 67, RuleGeneric_parameter_list = 68, 
    RuleGeneric_parameter = 69, RuleGeneric_where_clause = 70, RuleRequirement_list = 71, 
    RuleRequirement = 72, RuleConformance_requirement = 73, RuleSame_type_requirement = 74, 
    RuleGeneric_argument_clause = 75, RuleGeneric_argument_list = 76, RuleGeneric_argument = 77, 
    RuleDeclaration = 78, RuleDeclarations = 79, RuleTop_level_declaration = 80, 
    RuleCode_block = 81, RuleImport_declaration = 82, RuleImport_kind = 83, 
    RuleImport_path = 84, RuleImport_path_identifier = 85, RuleConstant_declaration = 86, 
    RulePattern_initializer_list = 87, RulePattern_initializer = 88, RuleInitializer = 89, 
    RuleVariable_declaration = 90, RuleVariable_declaration_head = 91, RuleVariable_name = 92, 
    RuleGetter_setter_block = 93, RuleGetter_clause = 94, RuleSetter_clause = 95, 
    RuleSetter_name = 96, RuleGetter_setter_keyword_block = 97, RuleGetter_keyword_clause = 98, 
    RuleSetter_keyword_clause = 99, RuleWillSet_didSet_block = 100, RuleWillSet_clause = 101, 
    RuleDidSet_clause = 102, RuleTypealias_declaration = 103, RuleTypealias_name = 104, 
    RuleTypealias_assignment = 105, RuleFunction_declaration = 106, RuleFunction_head = 107, 
    RuleFunction_name = 108, RuleFunction_signature = 109, RuleFunction_result = 110, 
    RuleFunction_body = 111, RuleParameter_clause = 112, RuleParameter_list = 113, 
    RuleParameter = 114, RuleExternal_parameter_name = 115, RuleLocal_parameter_name = 116, 
    RuleDefault_argument_clause = 117, RuleEnum_declaration = 118, RuleUnion_style_enum = 119, 
    RuleUnion_style_enum_members = 120, RuleUnion_style_enum_member = 121, 
    RuleUnion_style_enum_case_clause = 122, RuleUnion_style_enum_case_list = 123, 
    RuleUnion_style_enum_case = 124, RuleEnum_name = 125, RuleEnum_case_name = 126, 
    RuleRaw_value_style_enum = 127, RuleRaw_value_style_enum_members = 128, 
    RuleRaw_value_style_enum_member = 129, RuleRaw_value_style_enum_case_clause = 130, 
    RuleRaw_value_style_enum_case_list = 131, RuleRaw_value_style_enum_case = 132, 
    RuleRaw_value_assignment = 133, RuleRaw_value_literal = 134, RuleStruct_declaration = 135, 
    RuleStruct_name = 136, RuleStruct_body = 137, RuleStruct_members = 138, 
    RuleStruct_member = 139, RuleClass_declaration = 140, RuleClass_name = 141, 
    RuleClass_body = 142, RuleClass_members = 143, RuleClass_member = 144, 
    RuleProtocol_declaration = 145, RuleProtocol_name = 146, RuleProtocol_body = 147, 
    RuleProtocol_members = 148, RuleProtocol_member = 149, RuleProtocol_member_declaration = 150, 
    RuleProtocol_property_declaration = 151, RuleProtocol_method_declaration = 152, 
    RuleProtocol_initializer_declaration = 153, RuleProtocol_subscript_declaration = 154, 
    RuleProtocol_associated_type_declaration = 155, RuleInitializer_declaration = 156, 
    RuleInitializer_head = 157, RuleInitializer_body = 158, RuleDeinitializer_declaration = 159, 
    RuleExtension_declaration = 160, RuleExtension_body = 161, RuleExtension_members = 162, 
    RuleExtension_member = 163, RuleSubscript_declaration = 164, RuleSubscript_head = 165, 
    RuleSubscript_result = 166, RuleOperator_declaration = 167, RulePrefix_operator_declaration = 168, 
    RulePostfix_operator_declaration = 169, RuleInfix_operator_declaration = 170, 
    RuleInfix_operator_group = 171, RulePrecedence_group_declaration = 172, 
    RulePrecedence_group_attributes = 173, RulePrecedence_group_attribute = 174, 
    RulePrecedence_group_relation = 175, RulePrecedence_group_assignment = 176, 
    RulePrecedence_group_associativity = 177, RulePrecedence_group_names = 178, 
    RulePrecedence_group_name = 179, RuleDeclaration_modifier = 180, RuleDeclaration_modifiers = 181, 
    RuleAccess_level_modifier = 182, RuleMutation_modifier = 183, RulePattern = 184, 
    RuleWildcard_pattern = 185, RuleIdentifier_pattern = 186, RuleValue_binding_pattern = 187, 
    RuleTuple_pattern = 188, RuleTuple_pattern_element_list = 189, RuleTuple_pattern_element = 190, 
    RuleEnum_case_pattern = 191, RuleOptional_pattern = 192, RuleExpression_pattern = 193, 
    RuleAttribute = 194, RuleAttribute_name = 195, RuleAttribute_argument_clause = 196, 
    RuleAttributes = 197, RuleBalanced_tokens = 198, RuleBalanced_token = 199, 
    RuleBalanced_token_punctuation = 200, RuleExpression = 201, RuleExpression_list = 202, 
    RulePrefix_expression = 203, RuleIn_out_expression = 204, RuleTry_operator = 205, 
    RuleBinary_expression = 206, RuleBinary_expressions = 207, RuleConditional_operator = 208, 
    RuleType_casting_operator = 209, RulePrimary_expression = 210, RuleUnqualified_name = 211, 
    RuleLiteral_expression = 212, RuleArray_literal = 213, RuleArray_literal_items = 214, 
    RuleArray_literal_item = 215, RuleDictionary_literal = 216, RuleDictionary_literal_items = 217, 
    RuleDictionary_literal_item = 218, RulePlayground_literal = 219, RuleSelf_expression = 220, 
    RuleSuperclass_expression = 221, RuleClosure_expression = 222, RuleClosure_signature = 223, 
    RuleClosure_parameter_clause = 224, RuleClosure_parameter_list = 225, 
    RuleClosure_parameter = 226, RuleCapture_list = 227, RuleCapture_list_items = 228, 
    RuleCapture_list_item = 229, RuleCapture_specifier = 230, RuleImplicit_member_expression = 231, 
    RuleParenthesized_operator = 232, RuleParenthesized_expression = 233, 
    RuleTuple_expression = 234, RuleTuple_element_list = 235, RuleTuple_element = 236, 
    RuleWildcard_expression = 237, RuleKey_path_expression = 238, RuleKey_path_components = 239, 
    RuleKey_path_component = 240, RuleKey_path_postfixes = 241, RuleKey_path_postfix = 242, 
    RuleSelector_expression = 243, RuleKey_path_string_expression = 244, 
    RulePostfix_expression = 245, RuleFunction_call_suffix = 246, RuleInitializer_suffix = 247, 
    RuleExplicit_member_suffix = 248, RulePostfix_self_suffix = 249, RuleSubscript_suffix = 250, 
    RuleForced_value_suffix = 251, RuleOptional_chaining_suffix = 252, RuleFunction_call_argument_clause = 253, 
    RuleFunction_call_argument_list = 254, RuleFunction_call_argument = 255, 
    RuleTrailing_closures = 256, RuleLabeled_trailing_closures = 257, RuleLabeled_trailing_closure = 258, 
    RuleArgument_names = 259, RuleArgument_name = 260, RuleType = 261, RuleType_annotation = 262, 
    RuleType_identifier = 263, RuleType_name = 264, RuleTuple_type = 265, 
    RuleTuple_type_element_list = 266, RuleTuple_type_element = 267, RuleElement_name = 268, 
    RuleFunction_type = 269, RuleFunction_type_argument_clause = 270, RuleFunction_type_argument_list = 271, 
    RuleFunction_type_argument = 272, RuleArgument_label = 273, RuleArray_type = 274, 
    RuleDictionary_type = 275, RuleProtocol_composition_type = 276, RuleTrailing_composition_and = 277, 
    RuleOpaque_type = 278, RuleAny_type = 279, RuleSelf_type = 280, RuleType_inheritance_clause = 281, 
    RuleType_inheritance_list = 282, RuleIdentifier = 283, RuleIdentifier_list = 284, 
    RuleKeyword = 285, RuleAssignment_operator = 286, RuleNegate_prefix_operator = 287, 
    RuleCompilation_condition_AND = 288, RuleCompilation_condition_OR = 289, 
    RuleCompilation_condition_GE = 290, RuleCompilation_condition_L = 291, 
    RuleArrow_operator = 292, RuleRange_operator = 293, RuleSame_type_equals = 294, 
    RuleBinary_operator = 295, RulePrefix_operator = 296, RulePostfix_operator = 297, 
    RuleOperator = 298, RuleOperator_head = 299, RuleOperator_character = 300, 
    RuleOperator_characters = 301, RuleDot_operator_head = 302, RuleDot_operator_character = 303, 
    RuleDot_operator_characters = 304, RuleLiteral = 305, RuleNumeric_literal = 306, 
    RuleBoolean_literal = 307, RuleNil_literal = 308, RuleInteger_literal = 309, 
    RuleString_literal = 310, RuleExtended_string_literal = 311, RuleStatic_string_literal = 312, 
    RuleInterpolated_string_literal = 313
  };

  explicit myParser(antlr4::TokenStream *input);

  myParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~myParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Top_levelContext;
  class StatementContext;
  class StatementsContext;
  class Loop_statementContext;
  class For_in_statementContext;
  class While_statementContext;
  class Condition_listContext;
  class ConditionContext;
  class Case_conditionContext;
  class Optional_binding_conditionContext;
  class Repeat_while_statementContext;
  class Branch_statementContext;
  class If_statementContext;
  class Else_clauseContext;
  class Guard_statementContext;
  class Switch_statementContext;
  class Switch_casesContext;
  class Switch_caseContext;
  class Case_labelContext;
  class Case_item_listContext;
  class Default_labelContext;
  class Where_clauseContext;
  class Where_expressionContext;
  class Conditional_switch_caseContext;
  class Switch_if_directive_clauseContext;
  class Switch_elseif_directive_clausesContext;
  class Switch_elseif_directive_clauseContext;
  class Switch_else_directive_clauseContext;
  class Labeled_statementContext;
  class Statement_labelContext;
  class Label_nameContext;
  class Control_transfer_statementContext;
  class Break_statementContext;
  class Continue_statementContext;
  class Fallthrough_statementContext;
  class Return_statementContext;
  class Throw_statementContext;
  class Defer_statementContext;
  class Do_statementContext;
  class Catch_clausesContext;
  class Catch_clauseContext;
  class Catch_pattern_listContext;
  class Catch_patternContext;
  class Compiler_control_statementContext;
  class Conditional_compilation_blockContext;
  class If_directive_clauseContext;
  class Elseif_directive_clausesContext;
  class Elseif_directive_clauseContext;
  class Else_directive_clauseContext;
  class Compilation_conditionContext;
  class Platform_conditionContext;
  class Swift_versionContext;
  class Swift_version_continuationContext;
  class Operating_systemContext;
  class ArchitectureContext;
  class Module_nameContext;
  class EnvironmentContext;
  class Line_control_statementContext;
  class Line_numberContext;
  class File_nameContext;
  class Diagnostic_statementContext;
  class Diagnostic_messageContext;
  class Availability_conditionContext;
  class Availability_argumentsContext;
  class Availability_argumentContext;
  class Platform_nameContext;
  class Platform_versionContext;
  class Generic_parameter_clauseContext;
  class Generic_parameter_listContext;
  class Generic_parameterContext;
  class Generic_where_clauseContext;
  class Requirement_listContext;
  class RequirementContext;
  class Conformance_requirementContext;
  class Same_type_requirementContext;
  class Generic_argument_clauseContext;
  class Generic_argument_listContext;
  class Generic_argumentContext;
  class DeclarationContext;
  class DeclarationsContext;
  class Top_level_declarationContext;
  class Code_blockContext;
  class Import_declarationContext;
  class Import_kindContext;
  class Import_pathContext;
  class Import_path_identifierContext;
  class Constant_declarationContext;
  class Pattern_initializer_listContext;
  class Pattern_initializerContext;
  class InitializerContext;
  class Variable_declarationContext;
  class Variable_declaration_headContext;
  class Variable_nameContext;
  class Getter_setter_blockContext;
  class Getter_clauseContext;
  class Setter_clauseContext;
  class Setter_nameContext;
  class Getter_setter_keyword_blockContext;
  class Getter_keyword_clauseContext;
  class Setter_keyword_clauseContext;
  class WillSet_didSet_blockContext;
  class WillSet_clauseContext;
  class DidSet_clauseContext;
  class Typealias_declarationContext;
  class Typealias_nameContext;
  class Typealias_assignmentContext;
  class Function_declarationContext;
  class Function_headContext;
  class Function_nameContext;
  class Function_signatureContext;
  class Function_resultContext;
  class Function_bodyContext;
  class Parameter_clauseContext;
  class Parameter_listContext;
  class ParameterContext;
  class External_parameter_nameContext;
  class Local_parameter_nameContext;
  class Default_argument_clauseContext;
  class Enum_declarationContext;
  class Union_style_enumContext;
  class Union_style_enum_membersContext;
  class Union_style_enum_memberContext;
  class Union_style_enum_case_clauseContext;
  class Union_style_enum_case_listContext;
  class Union_style_enum_caseContext;
  class Enum_nameContext;
  class Enum_case_nameContext;
  class Raw_value_style_enumContext;
  class Raw_value_style_enum_membersContext;
  class Raw_value_style_enum_memberContext;
  class Raw_value_style_enum_case_clauseContext;
  class Raw_value_style_enum_case_listContext;
  class Raw_value_style_enum_caseContext;
  class Raw_value_assignmentContext;
  class Raw_value_literalContext;
  class Struct_declarationContext;
  class Struct_nameContext;
  class Struct_bodyContext;
  class Struct_membersContext;
  class Struct_memberContext;
  class Class_declarationContext;
  class Class_nameContext;
  class Class_bodyContext;
  class Class_membersContext;
  class Class_memberContext;
  class Protocol_declarationContext;
  class Protocol_nameContext;
  class Protocol_bodyContext;
  class Protocol_membersContext;
  class Protocol_memberContext;
  class Protocol_member_declarationContext;
  class Protocol_property_declarationContext;
  class Protocol_method_declarationContext;
  class Protocol_initializer_declarationContext;
  class Protocol_subscript_declarationContext;
  class Protocol_associated_type_declarationContext;
  class Initializer_declarationContext;
  class Initializer_headContext;
  class Initializer_bodyContext;
  class Deinitializer_declarationContext;
  class Extension_declarationContext;
  class Extension_bodyContext;
  class Extension_membersContext;
  class Extension_memberContext;
  class Subscript_declarationContext;
  class Subscript_headContext;
  class Subscript_resultContext;
  class Operator_declarationContext;
  class Prefix_operator_declarationContext;
  class Postfix_operator_declarationContext;
  class Infix_operator_declarationContext;
  class Infix_operator_groupContext;
  class Precedence_group_declarationContext;
  class Precedence_group_attributesContext;
  class Precedence_group_attributeContext;
  class Precedence_group_relationContext;
  class Precedence_group_assignmentContext;
  class Precedence_group_associativityContext;
  class Precedence_group_namesContext;
  class Precedence_group_nameContext;
  class Declaration_modifierContext;
  class Declaration_modifiersContext;
  class Access_level_modifierContext;
  class Mutation_modifierContext;
  class PatternContext;
  class Wildcard_patternContext;
  class Identifier_patternContext;
  class Value_binding_patternContext;
  class Tuple_patternContext;
  class Tuple_pattern_element_listContext;
  class Tuple_pattern_elementContext;
  class Enum_case_patternContext;
  class Optional_patternContext;
  class Expression_patternContext;
  class AttributeContext;
  class Attribute_nameContext;
  class Attribute_argument_clauseContext;
  class AttributesContext;
  class Balanced_tokensContext;
  class Balanced_tokenContext;
  class Balanced_token_punctuationContext;
  class ExpressionContext;
  class Expression_listContext;
  class Prefix_expressionContext;
  class In_out_expressionContext;
  class Try_operatorContext;
  class Binary_expressionContext;
  class Binary_expressionsContext;
  class Conditional_operatorContext;
  class Type_casting_operatorContext;
  class Primary_expressionContext;
  class Unqualified_nameContext;
  class Literal_expressionContext;
  class Array_literalContext;
  class Array_literal_itemsContext;
  class Array_literal_itemContext;
  class Dictionary_literalContext;
  class Dictionary_literal_itemsContext;
  class Dictionary_literal_itemContext;
  class Playground_literalContext;
  class Self_expressionContext;
  class Superclass_expressionContext;
  class Closure_expressionContext;
  class Closure_signatureContext;
  class Closure_parameter_clauseContext;
  class Closure_parameter_listContext;
  class Closure_parameterContext;
  class Capture_listContext;
  class Capture_list_itemsContext;
  class Capture_list_itemContext;
  class Capture_specifierContext;
  class Implicit_member_expressionContext;
  class Parenthesized_operatorContext;
  class Parenthesized_expressionContext;
  class Tuple_expressionContext;
  class Tuple_element_listContext;
  class Tuple_elementContext;
  class Wildcard_expressionContext;
  class Key_path_expressionContext;
  class Key_path_componentsContext;
  class Key_path_componentContext;
  class Key_path_postfixesContext;
  class Key_path_postfixContext;
  class Selector_expressionContext;
  class Key_path_string_expressionContext;
  class Postfix_expressionContext;
  class Function_call_suffixContext;
  class Initializer_suffixContext;
  class Explicit_member_suffixContext;
  class Postfix_self_suffixContext;
  class Subscript_suffixContext;
  class Forced_value_suffixContext;
  class Optional_chaining_suffixContext;
  class Function_call_argument_clauseContext;
  class Function_call_argument_listContext;
  class Function_call_argumentContext;
  class Trailing_closuresContext;
  class Labeled_trailing_closuresContext;
  class Labeled_trailing_closureContext;
  class Argument_namesContext;
  class Argument_nameContext;
  class TypeContext;
  class Type_annotationContext;
  class Type_identifierContext;
  class Type_nameContext;
  class Tuple_typeContext;
  class Tuple_type_element_listContext;
  class Tuple_type_elementContext;
  class Element_nameContext;
  class Function_typeContext;
  class Function_type_argument_clauseContext;
  class Function_type_argument_listContext;
  class Function_type_argumentContext;
  class Argument_labelContext;
  class Array_typeContext;
  class Dictionary_typeContext;
  class Protocol_composition_typeContext;
  class Trailing_composition_andContext;
  class Opaque_typeContext;
  class Any_typeContext;
  class Self_typeContext;
  class Type_inheritance_clauseContext;
  class Type_inheritance_listContext;
  class IdentifierContext;
  class Identifier_listContext;
  class KeywordContext;
  class Assignment_operatorContext;
  class Negate_prefix_operatorContext;
  class Compilation_condition_ANDContext;
  class Compilation_condition_ORContext;
  class Compilation_condition_GEContext;
  class Compilation_condition_LContext;
  class Arrow_operatorContext;
  class Range_operatorContext;
  class Same_type_equalsContext;
  class Binary_operatorContext;
  class Prefix_operatorContext;
  class Postfix_operatorContext;
  class OperatorContext;
  class Operator_headContext;
  class Operator_characterContext;
  class Operator_charactersContext;
  class Dot_operator_headContext;
  class Dot_operator_characterContext;
  class Dot_operator_charactersContext;
  class LiteralContext;
  class Numeric_literalContext;
  class Boolean_literalContext;
  class Nil_literalContext;
  class Integer_literalContext;
  class String_literalContext;
  class Extended_string_literalContext;
  class Static_string_literalContext;
  class Interpolated_string_literalContext; 

  class  Top_levelContext : public antlr4::ParserRuleContext {
  public:
    Top_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Top_levelContext* top_level();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loop_statementContext *loop_statement();
    DeclarationContext *declaration();
    Branch_statementContext *branch_statement();
    Labeled_statementContext *labeled_statement();
    Control_transfer_statementContext *control_transfer_statement();
    Defer_statementContext *defer_statement();
    Do_statementContext *do_statement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    int indexBefore = -1;
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementsContext* statements();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_in_statementContext *for_in_statement();
    While_statementContext *while_statement();
    Repeat_while_statementContext *repeat_while_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_statementContext* loop_statement();

  class  For_in_statementContext : public antlr4::ParserRuleContext {
  public:
    For_in_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    Code_blockContext *code_block();
    antlr4::tree::TerminalNode *CASE();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_in_statementContext* for_in_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Condition_listContext *condition_list();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_statementContext* while_statement();

  class  Condition_listContext : public antlr4::ParserRuleContext {
  public:
    Condition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Condition_listContext* condition_list();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Availability_conditionContext *availability_condition();
    ExpressionContext *expression();
    Case_conditionContext *case_condition();
    Optional_binding_conditionContext *optional_binding_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  Case_conditionContext : public antlr4::ParserRuleContext {
  public:
    Case_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    PatternContext *pattern();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_conditionContext* case_condition();

  class  Optional_binding_conditionContext : public antlr4::ParserRuleContext {
  public:
    Optional_binding_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Optional_binding_conditionContext* optional_binding_condition();

  class  Repeat_while_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_while_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Code_blockContext *code_block();
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Repeat_while_statementContext* repeat_while_statement();

  class  Branch_statementContext : public antlr4::ParserRuleContext {
  public:
    Branch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_statementContext *if_statement();
    Guard_statementContext *guard_statement();
    Switch_statementContext *switch_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Branch_statementContext* branch_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Condition_listContext *condition_list();
    Code_blockContext *code_block();
    Else_clauseContext *else_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  Else_clauseContext : public antlr4::ParserRuleContext {
  public:
    Else_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    Code_blockContext *code_block();
    If_statementContext *if_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Else_clauseContext* else_clause();

  class  Guard_statementContext : public antlr4::ParserRuleContext {
  public:
    Guard_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GUARD();
    Condition_listContext *condition_list();
    antlr4::tree::TerminalNode *ELSE();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guard_statementContext* guard_statement();

  class  Switch_statementContext : public antlr4::ParserRuleContext {
  public:
    Switch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    Switch_casesContext *switch_cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_statementContext* switch_statement();

  class  Switch_casesContext : public antlr4::ParserRuleContext {
  public:
    Switch_casesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Switch_caseContext *switch_case();
    Switch_casesContext *switch_cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_casesContext* switch_cases();

  class  Switch_caseContext : public antlr4::ParserRuleContext {
  public:
    Switch_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();
    Case_labelContext *case_label();
    Default_labelContext *default_label();
    Conditional_switch_caseContext *conditional_switch_case();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_caseContext* switch_case();

  class  Case_labelContext : public antlr4::ParserRuleContext {
  public:
    Case_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    Case_item_listContext *case_item_list();
    antlr4::tree::TerminalNode *COLON();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_labelContext* case_label();

  class  Case_item_listContext : public antlr4::ParserRuleContext {
  public:
    Case_item_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<Where_clauseContext *> where_clause();
    Where_clauseContext* where_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_item_listContext* case_item_list();

  class  Default_labelContext : public antlr4::ParserRuleContext {
  public:
    Default_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLON();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_labelContext* default_label();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Where_expressionContext *where_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_clauseContext* where_clause();

  class  Where_expressionContext : public antlr4::ParserRuleContext {
  public:
    Where_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_expressionContext* where_expression();

  class  Conditional_switch_caseContext : public antlr4::ParserRuleContext {
  public:
    Conditional_switch_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Switch_if_directive_clauseContext *switch_if_directive_clause();
    antlr4::tree::TerminalNode *HASH_ENDIF();
    Switch_elseif_directive_clausesContext *switch_elseif_directive_clauses();
    Switch_else_directive_clauseContext *switch_else_directive_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_switch_caseContext* conditional_switch_case();

  class  Switch_if_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    Switch_if_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_IF();
    Compilation_conditionContext *compilation_condition();
    Switch_casesContext *switch_cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_if_directive_clauseContext* switch_if_directive_clause();

  class  Switch_elseif_directive_clausesContext : public antlr4::ParserRuleContext {
  public:
    Switch_elseif_directive_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Elseif_directive_clauseContext *elseif_directive_clause();
    Switch_elseif_directive_clausesContext *switch_elseif_directive_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_elseif_directive_clausesContext* switch_elseif_directive_clauses();

  class  Switch_elseif_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    Switch_elseif_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_ELSEIF();
    Compilation_conditionContext *compilation_condition();
    Switch_casesContext *switch_cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_elseif_directive_clauseContext* switch_elseif_directive_clause();

  class  Switch_else_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    Switch_else_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_ELSE();
    Switch_casesContext *switch_cases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_else_directive_clauseContext* switch_else_directive_clause();

  class  Labeled_statementContext : public antlr4::ParserRuleContext {
  public:
    Labeled_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_labelContext *statement_label();
    Loop_statementContext *loop_statement();
    If_statementContext *if_statement();
    Switch_statementContext *switch_statement();
    Do_statementContext *do_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Labeled_statementContext* labeled_statement();

  class  Statement_labelContext : public antlr4::ParserRuleContext {
  public:
    Statement_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_labelContext* statement_label();

  class  Label_nameContext : public antlr4::ParserRuleContext {
  public:
    Label_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Label_nameContext* label_name();

  class  Control_transfer_statementContext : public antlr4::ParserRuleContext {
  public:
    Control_transfer_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Break_statementContext *break_statement();
    Continue_statementContext *continue_statement();
    Fallthrough_statementContext *fallthrough_statement();
    Return_statementContext *return_statement();
    Throw_statementContext *throw_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Control_transfer_statementContext* control_transfer_statement();

  class  Break_statementContext : public antlr4::ParserRuleContext {
  public:
    Break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    Label_nameContext *label_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Break_statementContext* break_statement();

  class  Continue_statementContext : public antlr4::ParserRuleContext {
  public:
    Continue_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    Label_nameContext *label_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Continue_statementContext* continue_statement();

  class  Fallthrough_statementContext : public antlr4::ParserRuleContext {
  public:
    Fallthrough_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FALLTHROUGH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fallthrough_statementContext* fallthrough_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_statementContext* return_statement();

  class  Throw_statementContext : public antlr4::ParserRuleContext {
  public:
    Throw_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Throw_statementContext* throw_statement();

  class  Defer_statementContext : public antlr4::ParserRuleContext {
  public:
    Defer_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFER();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defer_statementContext* defer_statement();

  class  Do_statementContext : public antlr4::ParserRuleContext {
  public:
    Do_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    Code_blockContext *code_block();
    Catch_clausesContext *catch_clauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_statementContext* do_statement();

  class  Catch_clausesContext : public antlr4::ParserRuleContext {
  public:
    Catch_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Catch_clauseContext *> catch_clause();
    Catch_clauseContext* catch_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Catch_clausesContext* catch_clauses();

  class  Catch_clauseContext : public antlr4::ParserRuleContext {
  public:
    Catch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    Code_blockContext *code_block();
    Catch_pattern_listContext *catch_pattern_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Catch_clauseContext* catch_clause();

  class  Catch_pattern_listContext : public antlr4::ParserRuleContext {
  public:
    Catch_pattern_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Catch_patternContext *> catch_pattern();
    Catch_patternContext* catch_pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Catch_pattern_listContext* catch_pattern_list();

  class  Catch_patternContext : public antlr4::ParserRuleContext {
  public:
    Catch_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Catch_patternContext* catch_pattern();

  class  Compiler_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Compiler_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_compilation_blockContext *conditional_compilation_block();
    Line_control_statementContext *line_control_statement();
    Diagnostic_statementContext *diagnostic_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compiler_control_statementContext* compiler_control_statement();

  class  Conditional_compilation_blockContext : public antlr4::ParserRuleContext {
  public:
    Conditional_compilation_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_directive_clauseContext *if_directive_clause();
    antlr4::tree::TerminalNode *HASH_ENDIF();
    Elseif_directive_clausesContext *elseif_directive_clauses();
    Else_directive_clauseContext *else_directive_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_compilation_blockContext* conditional_compilation_block();

  class  If_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    If_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_IF();
    Compilation_conditionContext *compilation_condition();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_directive_clauseContext* if_directive_clause();

  class  Elseif_directive_clausesContext : public antlr4::ParserRuleContext {
  public:
    Elseif_directive_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Elseif_directive_clauseContext *> elseif_directive_clause();
    Elseif_directive_clauseContext* elseif_directive_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elseif_directive_clausesContext* elseif_directive_clauses();

  class  Elseif_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    Elseif_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_ELSEIF();
    Compilation_conditionContext *compilation_condition();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elseif_directive_clauseContext* elseif_directive_clause();

  class  Else_directive_clauseContext : public antlr4::ParserRuleContext {
  public:
    Else_directive_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_ELSE();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Else_directive_clauseContext* else_directive_clause();

  class  Compilation_conditionContext : public antlr4::ParserRuleContext {
  public:
    Compilation_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Platform_conditionContext *platform_condition();
    IdentifierContext *identifier();
    Boolean_literalContext *boolean_literal();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Compilation_conditionContext *> compilation_condition();
    Compilation_conditionContext* compilation_condition(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *BANG();
    Compilation_condition_ANDContext *compilation_condition_AND();
    Compilation_condition_ORContext *compilation_condition_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_conditionContext* compilation_condition();
  Compilation_conditionContext* compilation_condition(int precedence);
  class  Platform_conditionContext : public antlr4::ParserRuleContext {
  public:
    Platform_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS();
    antlr4::tree::TerminalNode *LPAREN();
    Operating_systemContext *operating_system();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ARCH();
    ArchitectureContext *architecture();
    Swift_versionContext *swift_version();
    antlr4::tree::TerminalNode *SWIFT();
    antlr4::tree::TerminalNode *COMPILER();
    Compilation_condition_GEContext *compilation_condition_GE();
    Compilation_condition_LContext *compilation_condition_L();
    antlr4::tree::TerminalNode *CAN_IMPORT();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *TARGET_ENVIRONMENT();
    EnvironmentContext *environment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Platform_conditionContext* platform_condition();

  class  Swift_versionContext : public antlr4::ParserRuleContext {
  public:
    Swift_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal_digits();
    Swift_version_continuationContext *swift_version_continuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Swift_versionContext* swift_version();

  class  Swift_version_continuationContext : public antlr4::ParserRuleContext {
  public:
    Swift_version_continuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *Decimal_digits();
    Swift_version_continuationContext *swift_version_continuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Swift_version_continuationContext* swift_version_continuation();

  class  Operating_systemContext : public antlr4::ParserRuleContext {
  public:
    Operating_systemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAC_OS();
    antlr4::tree::TerminalNode *I_OS();
    antlr4::tree::TerminalNode *OSX();
    antlr4::tree::TerminalNode *WATCH_OS();
    antlr4::tree::TerminalNode *TV_OS();
    antlr4::tree::TerminalNode *LINUX();
    antlr4::tree::TerminalNode *WINDOWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operating_systemContext* operating_system();

  class  ArchitectureContext : public antlr4::ParserRuleContext {
  public:
    ArchitectureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *I386();
    antlr4::tree::TerminalNode *X86_64();
    antlr4::tree::TerminalNode *ARM();
    antlr4::tree::TerminalNode *ARM64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArchitectureContext* architecture();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_nameContext* module_name();

  class  EnvironmentContext : public antlr4::ParserRuleContext {
  public:
    EnvironmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMULATOR();
    antlr4::tree::TerminalNode *MAC_CATALYST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnvironmentContext* environment();

  class  Line_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Line_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE_LOCATION();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *FILE();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    File_nameContext *file_name();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *LINE();
    Line_numberContext *line_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Line_control_statementContext* line_control_statement();

  class  Line_numberContext : public antlr4::ParserRuleContext {
  public:
    Line_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Line_numberContext* line_number();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Static_string_literalContext *static_string_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  File_nameContext* file_name();

  class  Diagnostic_statementContext : public antlr4::ParserRuleContext {
  public:
    Diagnostic_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Diagnostic_messageContext *diagnostic_message();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *WARNING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Diagnostic_statementContext* diagnostic_statement();

  class  Diagnostic_messageContext : public antlr4::ParserRuleContext {
  public:
    Diagnostic_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Static_string_literalContext *static_string_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Diagnostic_messageContext* diagnostic_message();

  class  Availability_conditionContext : public antlr4::ParserRuleContext {
  public:
    Availability_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AVAILABLE();
    antlr4::tree::TerminalNode *LPAREN();
    Availability_argumentsContext *availability_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Availability_conditionContext* availability_condition();

  class  Availability_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Availability_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Availability_argumentContext *> availability_argument();
    Availability_argumentContext* availability_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Availability_argumentsContext* availability_arguments();

  class  Availability_argumentContext : public antlr4::ParserRuleContext {
  public:
    Availability_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Platform_nameContext *platform_name();
    Platform_versionContext *platform_version();
    antlr4::tree::TerminalNode *MUL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Availability_argumentContext* availability_argument();

  class  Platform_nameContext : public antlr4::ParserRuleContext {
  public:
    Platform_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *I_OS();
    antlr4::tree::TerminalNode *OSX();
    antlr4::tree::TerminalNode *I_OS_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *MAC_OS();
    antlr4::tree::TerminalNode *MAC_OS_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *MAC_CATALYST();
    antlr4::tree::TerminalNode *MAC_CATALYST_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *WATCH_OS();
    antlr4::tree::TerminalNode *TV_OS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Platform_nameContext* platform_name();

  class  Platform_versionContext : public antlr4::ParserRuleContext {
  public:
    Platform_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal_literal();
    antlr4::tree::TerminalNode *Decimal_digits();
    antlr4::tree::TerminalNode *Floating_point_literal();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Platform_versionContext* platform_version();

  class  Generic_parameter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generic_parameter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    Generic_parameter_listContext *generic_parameter_list();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_parameter_clauseContext* generic_parameter_clause();

  class  Generic_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Generic_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generic_parameterContext *> generic_parameter();
    Generic_parameterContext* generic_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_parameter_listContext* generic_parameter_list();

  class  Generic_parameterContext : public antlr4::ParserRuleContext {
  public:
    Generic_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *COLON();
    Type_identifierContext *type_identifier();
    Protocol_composition_typeContext *protocol_composition_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_parameterContext* generic_parameter();

  class  Generic_where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generic_where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Requirement_listContext *requirement_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_where_clauseContext* generic_where_clause();

  class  Requirement_listContext : public antlr4::ParserRuleContext {
  public:
    Requirement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequirementContext *> requirement();
    RequirementContext* requirement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Requirement_listContext* requirement_list();

  class  RequirementContext : public antlr4::ParserRuleContext {
  public:
    RequirementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conformance_requirementContext *conformance_requirement();
    Same_type_requirementContext *same_type_requirement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequirementContext* requirement();

  class  Conformance_requirementContext : public antlr4::ParserRuleContext {
  public:
    Conformance_requirementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_identifierContext *> type_identifier();
    Type_identifierContext* type_identifier(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Protocol_composition_typeContext *protocol_composition_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conformance_requirementContext* conformance_requirement();

  class  Same_type_requirementContext : public antlr4::ParserRuleContext {
  public:
    Same_type_requirementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_identifierContext *> type_identifier();
    Type_identifierContext* type_identifier(size_t i);
    Same_type_equalsContext *same_type_equals();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Same_type_requirementContext* same_type_requirement();

  class  Generic_argument_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generic_argument_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    Generic_argument_listContext *generic_argument_list();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_argument_clauseContext* generic_argument_clause();

  class  Generic_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Generic_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generic_argumentContext *> generic_argument();
    Generic_argumentContext* generic_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_argument_listContext* generic_argument_list();

  class  Generic_argumentContext : public antlr4::ParserRuleContext {
  public:
    Generic_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generic_argumentContext* generic_argument();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_declarationContext *import_declaration();
    Constant_declarationContext *constant_declaration();
    Variable_declarationContext *variable_declaration();
    Typealias_declarationContext *typealias_declaration();
    Function_declarationContext *function_declaration();
    Enum_declarationContext *enum_declaration();
    Struct_declarationContext *struct_declaration();
    Class_declarationContext *class_declaration();
    Protocol_declarationContext *protocol_declaration();
    Initializer_declarationContext *initializer_declaration();
    Deinitializer_declarationContext *deinitializer_declaration();
    Extension_declarationContext *extension_declaration();
    Subscript_declarationContext *subscript_declaration();
    Operator_declarationContext *operator_declaration();
    Precedence_group_declarationContext *precedence_group_declaration();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationsContext* declarations();

  class  Top_level_declarationContext : public antlr4::ParserRuleContext {
  public:
    Top_level_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Top_level_declarationContext* top_level_declaration();

  class  Code_blockContext : public antlr4::ParserRuleContext {
  public:
    Code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Code_blockContext* code_block();

  class  Import_declarationContext : public antlr4::ParserRuleContext {
  public:
    Import_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    Import_pathContext *import_path();
    AttributesContext *attributes();
    Import_kindContext *import_kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_declarationContext* import_declaration();

  class  Import_kindContext : public antlr4::ParserRuleContext {
  public:
    Import_kindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEALIAS();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *FUNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_kindContext* import_kind();

  class  Import_pathContext : public antlr4::ParserRuleContext {
  public:
    Import_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Import_path_identifierContext *> import_path_identifier();
    Import_path_identifierContext* import_path_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_pathContext* import_path();

  class  Import_path_identifierContext : public antlr4::ParserRuleContext {
  public:
    Import_path_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_path_identifierContext* import_path_identifier();

  class  Constant_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constant_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    Pattern_initializer_listContext *pattern_initializer_list();
    AttributesContext *attributes();
    Declaration_modifiersContext *declaration_modifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_declarationContext* constant_declaration();

  class  Pattern_initializer_listContext : public antlr4::ParserRuleContext {
  public:
    Pattern_initializer_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pattern_initializerContext *> pattern_initializer();
    Pattern_initializerContext* pattern_initializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern_initializer_listContext* pattern_initializer_list();

  class  Pattern_initializerContext : public antlr4::ParserRuleContext {
  public:
    Pattern_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern_initializerContext* pattern_initializer();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerContext* initializer();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declaration_headContext *variable_declaration_head();
    Variable_nameContext *variable_name();
    Pattern_initializer_listContext *pattern_initializer_list();
    InitializerContext *initializer();
    WillSet_didSet_blockContext *willSet_didSet_block();
    Type_annotationContext *type_annotation();
    Getter_setter_blockContext *getter_setter_block();
    Getter_setter_keyword_blockContext *getter_setter_keyword_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Variable_declaration_headContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaration_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    AttributesContext *attributes();
    Declaration_modifiersContext *declaration_modifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_declaration_headContext* variable_declaration_head();

  class  Variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_nameContext* variable_name();

  class  Getter_setter_blockContext : public antlr4::ParserRuleContext {
  public:
    Getter_setter_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    Getter_clauseContext *getter_clause();
    Setter_clauseContext *setter_clause();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Getter_setter_blockContext* getter_setter_block();

  class  Getter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Getter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    AttributesContext *attributes();
    Mutation_modifierContext *mutation_modifier();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Getter_clauseContext* getter_clause();

  class  Setter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Setter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    AttributesContext *attributes();
    Mutation_modifierContext *mutation_modifier();
    Setter_nameContext *setter_name();
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setter_clauseContext* setter_clause();

  class  Setter_nameContext : public antlr4::ParserRuleContext {
  public:
    Setter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setter_nameContext* setter_name();

  class  Getter_setter_keyword_blockContext : public antlr4::ParserRuleContext {
  public:
    Getter_setter_keyword_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    Getter_keyword_clauseContext *getter_keyword_clause();
    Setter_keyword_clauseContext *setter_keyword_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Getter_setter_keyword_blockContext* getter_setter_keyword_block();

  class  Getter_keyword_clauseContext : public antlr4::ParserRuleContext {
  public:
    Getter_keyword_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    AttributesContext *attributes();
    Mutation_modifierContext *mutation_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Getter_keyword_clauseContext* getter_keyword_clause();

  class  Setter_keyword_clauseContext : public antlr4::ParserRuleContext {
  public:
    Setter_keyword_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    AttributesContext *attributes();
    Mutation_modifierContext *mutation_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setter_keyword_clauseContext* setter_keyword_clause();

  class  WillSet_didSet_blockContext : public antlr4::ParserRuleContext {
  public:
    WillSet_didSet_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    WillSet_clauseContext *willSet_clause();
    DidSet_clauseContext *didSet_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WillSet_didSet_blockContext* willSet_didSet_block();

  class  WillSet_clauseContext : public antlr4::ParserRuleContext {
  public:
    WillSet_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WILL_SET();
    Code_blockContext *code_block();
    AttributesContext *attributes();
    Setter_nameContext *setter_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WillSet_clauseContext* willSet_clause();

  class  DidSet_clauseContext : public antlr4::ParserRuleContext {
  public:
    DidSet_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DID_SET();
    Code_blockContext *code_block();
    AttributesContext *attributes();
    Setter_nameContext *setter_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DidSet_clauseContext* didSet_clause();

  class  Typealias_declarationContext : public antlr4::ParserRuleContext {
  public:
    Typealias_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEALIAS();
    Typealias_nameContext *typealias_name();
    Typealias_assignmentContext *typealias_assignment();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();
    Generic_parameter_clauseContext *generic_parameter_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Typealias_declarationContext* typealias_declaration();

  class  Typealias_nameContext : public antlr4::ParserRuleContext {
  public:
    Typealias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Typealias_nameContext* typealias_name();

  class  Typealias_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Typealias_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Typealias_assignmentContext* typealias_assignment();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_headContext *function_head();
    Function_nameContext *function_name();
    Function_signatureContext *function_signature();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Generic_where_clauseContext *generic_where_clause();
    Function_bodyContext *function_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Function_headContext : public antlr4::ParserRuleContext {
  public:
    Function_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    AttributesContext *attributes();
    Declaration_modifiersContext *declaration_modifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_headContext* function_head();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_nameContext* function_name();

  class  Function_signatureContext : public antlr4::ParserRuleContext {
  public:
    Function_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_clauseContext *parameter_clause();
    antlr4::tree::TerminalNode *RETHROWS();
    Function_resultContext *function_result();
    antlr4::tree::TerminalNode *THROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_signatureContext* function_signature();

  class  Function_resultContext : public antlr4::ParserRuleContext {
  public:
    Function_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arrow_operatorContext *arrow_operator();
    TypeContext *type();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_resultContext* function_result();

  class  Function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_bodyContext* function_body();

  class  Parameter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Parameter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_clauseContext* parameter_clause();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_listContext* parameter_list();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_parameter_nameContext *local_parameter_name();
    Type_annotationContext *type_annotation();
    Range_operatorContext *range_operator();
    AttributesContext *attributes();
    External_parameter_nameContext *external_parameter_name();
    Default_argument_clauseContext *default_argument_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  External_parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    External_parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  External_parameter_nameContext* external_parameter_name();

  class  Local_parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_parameter_nameContext* local_parameter_name();

  class  Default_argument_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_argument_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_argument_clauseContext* default_argument_clause();

  class  Enum_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Union_style_enumContext *union_style_enum();
    Raw_value_style_enumContext *raw_value_style_enum();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_declarationContext* enum_declaration();

  class  Union_style_enumContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    Enum_nameContext *enum_name();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    antlr4::tree::TerminalNode *INDIRECT();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Generic_where_clauseContext *generic_where_clause();
    Union_style_enum_membersContext *union_style_enum_members();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enumContext* union_style_enum();

  class  Union_style_enum_membersContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enum_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Union_style_enum_memberContext *> union_style_enum_member();
    Union_style_enum_memberContext* union_style_enum_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enum_membersContext* union_style_enum_members();

  class  Union_style_enum_memberContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enum_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    Union_style_enum_case_clauseContext *union_style_enum_case_clause();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enum_memberContext* union_style_enum_member();

  class  Union_style_enum_case_clauseContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enum_case_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    Union_style_enum_case_listContext *union_style_enum_case_list();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *INDIRECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enum_case_clauseContext* union_style_enum_case_clause();

  class  Union_style_enum_case_listContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enum_case_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Union_style_enum_caseContext *> union_style_enum_case();
    Union_style_enum_caseContext* union_style_enum_case(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enum_case_listContext* union_style_enum_case_list();

  class  Union_style_enum_caseContext : public antlr4::ParserRuleContext {
  public:
    Union_style_enum_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Opaque_typeContext *opaque_type();
    Enum_case_nameContext *enum_case_name();
    Tuple_typeContext *tuple_type();
    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_style_enum_caseContext* union_style_enum_case();

  class  Enum_nameContext : public antlr4::ParserRuleContext {
  public:
    Enum_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_nameContext* enum_name();

  class  Enum_case_nameContext : public antlr4::ParserRuleContext {
  public:
    Enum_case_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_case_nameContext* enum_case_name();

  class  Raw_value_style_enumContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    Enum_nameContext *enum_name();
    Type_inheritance_clauseContext *type_inheritance_clause();
    antlr4::tree::TerminalNode *LCURLY();
    Raw_value_style_enum_membersContext *raw_value_style_enum_members();
    antlr4::tree::TerminalNode *RCURLY();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enumContext* raw_value_style_enum();

  class  Raw_value_style_enum_membersContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enum_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Raw_value_style_enum_memberContext *> raw_value_style_enum_member();
    Raw_value_style_enum_memberContext* raw_value_style_enum_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enum_membersContext* raw_value_style_enum_members();

  class  Raw_value_style_enum_memberContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enum_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    Raw_value_style_enum_case_clauseContext *raw_value_style_enum_case_clause();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enum_memberContext* raw_value_style_enum_member();

  class  Raw_value_style_enum_case_clauseContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enum_case_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    Raw_value_style_enum_case_listContext *raw_value_style_enum_case_list();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enum_case_clauseContext* raw_value_style_enum_case_clause();

  class  Raw_value_style_enum_case_listContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enum_case_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Raw_value_style_enum_caseContext *> raw_value_style_enum_case();
    Raw_value_style_enum_caseContext* raw_value_style_enum_case(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enum_case_listContext* raw_value_style_enum_case_list();

  class  Raw_value_style_enum_caseContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_style_enum_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enum_case_nameContext *enum_case_name();
    Raw_value_assignmentContext *raw_value_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_style_enum_caseContext* raw_value_style_enum_case();

  class  Raw_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    Raw_value_literalContext *raw_value_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_assignmentContext* raw_value_assignment();

  class  Raw_value_literalContext : public antlr4::ParserRuleContext {
  public:
    Raw_value_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Numeric_literalContext *numeric_literal();
    Static_string_literalContext *static_string_literal();
    Boolean_literalContext *boolean_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_value_literalContext* raw_value_literal();

  class  Struct_declarationContext : public antlr4::ParserRuleContext {
  public:
    Struct_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    Struct_nameContext *struct_name();
    Struct_bodyContext *struct_body();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_declarationContext* struct_declaration();

  class  Struct_nameContext : public antlr4::ParserRuleContext {
  public:
    Struct_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_nameContext* struct_name();

  class  Struct_bodyContext : public antlr4::ParserRuleContext {
  public:
    Struct_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    Struct_membersContext *struct_members();
    antlr4::tree::TerminalNode *RCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_bodyContext* struct_body();

  class  Struct_membersContext : public antlr4::ParserRuleContext {
  public:
    Struct_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Struct_memberContext *> struct_member();
    Struct_memberContext* struct_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_membersContext* struct_members();

  class  Struct_memberContext : public antlr4::ParserRuleContext {
  public:
    Struct_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_memberContext* struct_member();

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    Class_nameContext *class_name();
    Class_bodyContext *class_body();
    antlr4::tree::TerminalNode *FINAL();
    AttributesContext *attributes();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Generic_where_clauseContext *generic_where_clause();
    Access_level_modifierContext *access_level_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_declarationContext* class_declaration();

  class  Class_nameContext : public antlr4::ParserRuleContext {
  public:
    Class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_nameContext* class_name();

  class  Class_bodyContext : public antlr4::ParserRuleContext {
  public:
    Class_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    Class_membersContext *class_members();
    antlr4::tree::TerminalNode *RCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_bodyContext* class_body();

  class  Class_membersContext : public antlr4::ParserRuleContext {
  public:
    Class_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_memberContext *> class_member();
    Class_memberContext* class_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_membersContext* class_members();

  class  Class_memberContext : public antlr4::ParserRuleContext {
  public:
    Class_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_memberContext* class_member();

  class  Protocol_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTOCOL();
    Protocol_nameContext *protocol_name();
    Protocol_bodyContext *protocol_body();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLASS();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_declarationContext* protocol_declaration();

  class  Protocol_nameContext : public antlr4::ParserRuleContext {
  public:
    Protocol_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_nameContext* protocol_name();

  class  Protocol_bodyContext : public antlr4::ParserRuleContext {
  public:
    Protocol_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    Protocol_membersContext *protocol_members();
    antlr4::tree::TerminalNode *RCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_bodyContext* protocol_body();

  class  Protocol_membersContext : public antlr4::ParserRuleContext {
  public:
    Protocol_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Protocol_memberContext *> protocol_member();
    Protocol_memberContext* protocol_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_membersContext* protocol_members();

  class  Protocol_memberContext : public antlr4::ParserRuleContext {
  public:
    Protocol_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protocol_member_declarationContext *protocol_member_declaration();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_memberContext* protocol_member();

  class  Protocol_member_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_member_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protocol_property_declarationContext *protocol_property_declaration();
    Protocol_method_declarationContext *protocol_method_declaration();
    Protocol_initializer_declarationContext *protocol_initializer_declaration();
    Protocol_subscript_declarationContext *protocol_subscript_declaration();
    Protocol_associated_type_declarationContext *protocol_associated_type_declaration();
    Typealias_declarationContext *typealias_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_member_declarationContext* protocol_member_declaration();

  class  Protocol_property_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_property_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declaration_headContext *variable_declaration_head();
    Variable_nameContext *variable_name();
    Type_annotationContext *type_annotation();
    Getter_setter_keyword_blockContext *getter_setter_keyword_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_property_declarationContext* protocol_property_declaration();

  class  Protocol_method_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_method_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_headContext *function_head();
    Function_nameContext *function_name();
    Function_signatureContext *function_signature();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_method_declarationContext* protocol_method_declaration();

  class  Protocol_initializer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_initializer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_headContext *initializer_head();
    Parameter_clauseContext *parameter_clause();
    antlr4::tree::TerminalNode *RETHROWS();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Generic_where_clauseContext *generic_where_clause();
    antlr4::tree::TerminalNode *THROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_initializer_declarationContext* protocol_initializer_declaration();

  class  Protocol_subscript_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_subscript_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subscript_headContext *subscript_head();
    Subscript_resultContext *subscript_result();
    Getter_setter_keyword_blockContext *getter_setter_keyword_block();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_subscript_declarationContext* protocol_subscript_declaration();

  class  Protocol_associated_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Protocol_associated_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSOCIATED_TYPE();
    Typealias_nameContext *typealias_name();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Typealias_assignmentContext *typealias_assignment();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_associated_type_declarationContext* protocol_associated_type_declaration();

  class  Initializer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Initializer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_headContext *initializer_head();
    Parameter_clauseContext *parameter_clause();
    Initializer_bodyContext *initializer_body();
    Generic_parameter_clauseContext *generic_parameter_clause();
    Generic_where_clauseContext *generic_where_clause();
    antlr4::tree::TerminalNode *THROWS();
    antlr4::tree::TerminalNode *RETHROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initializer_declarationContext* initializer_declaration();

  class  Initializer_headContext : public antlr4::ParserRuleContext {
  public:
    Initializer_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INIT();
    AttributesContext *attributes();
    Declaration_modifiersContext *declaration_modifiers();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initializer_headContext* initializer_head();

  class  Initializer_bodyContext : public antlr4::ParserRuleContext {
  public:
    Initializer_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Code_blockContext *code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initializer_bodyContext* initializer_body();

  class  Deinitializer_declarationContext : public antlr4::ParserRuleContext {
  public:
    Deinitializer_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEINIT();
    Code_blockContext *code_block();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deinitializer_declarationContext* deinitializer_declaration();

  class  Extension_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extension_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENSION();
    Type_identifierContext *type_identifier();
    Extension_bodyContext *extension_body();
    AttributesContext *attributes();
    Access_level_modifierContext *access_level_modifier();
    Type_inheritance_clauseContext *type_inheritance_clause();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_declarationContext* extension_declaration();

  class  Extension_bodyContext : public antlr4::ParserRuleContext {
  public:
    Extension_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    Extension_membersContext *extension_members();
    antlr4::tree::TerminalNode *RCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_bodyContext* extension_body();

  class  Extension_membersContext : public antlr4::ParserRuleContext {
  public:
    Extension_membersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Extension_memberContext *> extension_member();
    Extension_memberContext* extension_member(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_membersContext* extension_members();

  class  Extension_memberContext : public antlr4::ParserRuleContext {
  public:
    Extension_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    Compiler_control_statementContext *compiler_control_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_memberContext* extension_member();

  class  Subscript_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subscript_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subscript_headContext *subscript_head();
    Subscript_resultContext *subscript_result();
    Code_blockContext *code_block();
    Getter_setter_blockContext *getter_setter_block();
    Getter_setter_keyword_blockContext *getter_setter_keyword_block();
    Generic_where_clauseContext *generic_where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subscript_declarationContext* subscript_declaration();

  class  Subscript_headContext : public antlr4::ParserRuleContext {
  public:
    Subscript_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBSCRIPT();
    Parameter_clauseContext *parameter_clause();
    AttributesContext *attributes();
    Declaration_modifiersContext *declaration_modifiers();
    Generic_parameter_clauseContext *generic_parameter_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subscript_headContext* subscript_head();

  class  Subscript_resultContext : public antlr4::ParserRuleContext {
  public:
    Subscript_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arrow_operatorContext *arrow_operator();
    TypeContext *type();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subscript_resultContext* subscript_result();

  class  Operator_declarationContext : public antlr4::ParserRuleContext {
  public:
    Operator_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prefix_operator_declarationContext *prefix_operator_declaration();
    Postfix_operator_declarationContext *postfix_operator_declaration();
    Infix_operator_declarationContext *infix_operator_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_declarationContext* operator_declaration();

  class  Prefix_operator_declarationContext : public antlr4::ParserRuleContext {
  public:
    Prefix_operator_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREFIX();
    antlr4::tree::TerminalNode *OPERATOR();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prefix_operator_declarationContext* prefix_operator_declaration();

  class  Postfix_operator_declarationContext : public antlr4::ParserRuleContext {
  public:
    Postfix_operator_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSTFIX();
    antlr4::tree::TerminalNode *OPERATOR();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Postfix_operator_declarationContext* postfix_operator_declaration();

  class  Infix_operator_declarationContext : public antlr4::ParserRuleContext {
  public:
    Infix_operator_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *OPERATOR();
    OperatorContext *operator_();
    Infix_operator_groupContext *infix_operator_group();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Infix_operator_declarationContext* infix_operator_declaration();

  class  Infix_operator_groupContext : public antlr4::ParserRuleContext {
  public:
    Infix_operator_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Precedence_group_nameContext *precedence_group_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Infix_operator_groupContext* infix_operator_group();

  class  Precedence_group_declarationContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRECEDENCE_GROUP();
    Precedence_group_nameContext *precedence_group_name();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    Precedence_group_attributesContext *precedence_group_attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_declarationContext* precedence_group_declaration();

  class  Precedence_group_attributesContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Precedence_group_attributeContext *> precedence_group_attribute();
    Precedence_group_attributeContext* precedence_group_attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_attributesContext* precedence_group_attributes();

  class  Precedence_group_attributeContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Precedence_group_relationContext *precedence_group_relation();
    Precedence_group_assignmentContext *precedence_group_assignment();
    Precedence_group_associativityContext *precedence_group_associativity();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_attributeContext* precedence_group_attribute();

  class  Precedence_group_relationContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_relationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Precedence_group_namesContext *precedence_group_names();
    antlr4::tree::TerminalNode *HIGHER_THAN();
    antlr4::tree::TerminalNode *LOWER_THAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_relationContext* precedence_group_relation();

  class  Precedence_group_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *COLON();
    Boolean_literalContext *boolean_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_assignmentContext* precedence_group_assignment();

  class  Precedence_group_associativityContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_associativityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSOCIATIVITY();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_associativityContext* precedence_group_associativity();

  class  Precedence_group_namesContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Precedence_group_nameContext *> precedence_group_name();
    Precedence_group_nameContext* precedence_group_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_namesContext* precedence_group_names();

  class  Precedence_group_nameContext : public antlr4::ParserRuleContext {
  public:
    Precedence_group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Precedence_group_nameContext* precedence_group_name();

  class  Declaration_modifierContext : public antlr4::ParserRuleContext {
  public:
    Declaration_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CONVENIENCE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *POSTFIX();
    antlr4::tree::TerminalNode *PREFIX();
    antlr4::tree::TerminalNode *REQUIRED();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *UNOWNED();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *WEAK();
    Access_level_modifierContext *access_level_modifier();
    Mutation_modifierContext *mutation_modifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declaration_modifierContext* declaration_modifier();

  class  Declaration_modifiersContext : public antlr4::ParserRuleContext {
  public:
    Declaration_modifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Declaration_modifierContext *> declaration_modifier();
    Declaration_modifierContext* declaration_modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declaration_modifiersContext* declaration_modifiers();

  class  Access_level_modifierContext : public antlr4::ParserRuleContext {
  public:
    Access_level_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *FILE_PRIVATE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Access_level_modifierContext* access_level_modifier();

  class  Mutation_modifierContext : public antlr4::ParserRuleContext {
  public:
    Mutation_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUTATING();
    antlr4::tree::TerminalNode *NONMUTATING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mutation_modifierContext* mutation_modifier();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Wildcard_patternContext *wildcard_pattern();
    Identifier_patternContext *identifier_pattern();
    Tuple_patternContext *tuple_pattern();
    Type_annotationContext *type_annotation();
    Value_binding_patternContext *value_binding_pattern();
    Enum_case_patternContext *enum_case_pattern();
    Optional_patternContext *optional_pattern();
    antlr4::tree::TerminalNode *IS();
    TypeContext *type();
    Expression_patternContext *expression_pattern();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternContext* pattern();
  PatternContext* pattern(int precedence);
  class  Wildcard_patternContext : public antlr4::ParserRuleContext {
  public:
    Wildcard_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Wildcard_patternContext* wildcard_pattern();

  class  Identifier_patternContext : public antlr4::ParserRuleContext {
  public:
    Identifier_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifier_patternContext* identifier_pattern();

  class  Value_binding_patternContext : public antlr4::ParserRuleContext {
  public:
    Value_binding_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *LET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Value_binding_patternContext* value_binding_pattern();

  class  Tuple_patternContext : public antlr4::ParserRuleContext {
  public:
    Tuple_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Tuple_pattern_element_listContext *tuple_pattern_element_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_patternContext* tuple_pattern();

  class  Tuple_pattern_element_listContext : public antlr4::ParserRuleContext {
  public:
    Tuple_pattern_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tuple_pattern_elementContext *> tuple_pattern_element();
    Tuple_pattern_elementContext* tuple_pattern_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_pattern_element_listContext* tuple_pattern_element_list();

  class  Tuple_pattern_elementContext : public antlr4::ParserRuleContext {
  public:
    Tuple_pattern_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_pattern_elementContext* tuple_pattern_element();

  class  Enum_case_patternContext : public antlr4::ParserRuleContext {
  public:
    Enum_case_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Enum_case_nameContext *enum_case_name();
    Type_identifierContext *type_identifier();
    Tuple_patternContext *tuple_pattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_case_patternContext* enum_case_pattern();

  class  Optional_patternContext : public antlr4::ParserRuleContext {
  public:
    Optional_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_patternContext *identifier_pattern();
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Optional_patternContext* optional_pattern();

  class  Expression_patternContext : public antlr4::ParserRuleContext {
  public:
    Expression_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_patternContext* expression_pattern();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Attribute_nameContext *attribute_name();
    Attribute_argument_clauseContext *attribute_argument_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  Attribute_nameContext : public antlr4::ParserRuleContext {
  public:
    Attribute_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_nameContext* attribute_name();

  class  Attribute_argument_clauseContext : public antlr4::ParserRuleContext {
  public:
    Attribute_argument_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Balanced_tokensContext *balanced_tokens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_argument_clauseContext* attribute_argument_clause();

  class  AttributesContext : public antlr4::ParserRuleContext {
  public:
    AttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributesContext* attributes();

  class  Balanced_tokensContext : public antlr4::ParserRuleContext {
  public:
    Balanced_tokensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Balanced_tokenContext *> balanced_token();
    Balanced_tokenContext* balanced_token(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Balanced_tokensContext* balanced_tokens();

  class  Balanced_tokenContext : public antlr4::ParserRuleContext {
  public:
    Balanced_tokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Balanced_tokensContext *balanced_tokens();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    IdentifierContext *identifier();
    KeywordContext *keyword();
    LiteralContext *literal();
    OperatorContext *operator_();
    Balanced_token_punctuationContext *balanced_token_punctuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Balanced_tokenContext* balanced_token();

  class  Balanced_token_punctuationContext : public antlr4::ParserRuleContext {
  public:
    Balanced_token_punctuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *BACKTICK();
    antlr4::tree::TerminalNode *QUESTION();
    Arrow_operatorContext *arrow_operator();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Balanced_token_punctuationContext* balanced_token_punctuation();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prefix_expressionContext *prefix_expression();
    Try_operatorContext *try_operator();
    Binary_expressionsContext *binary_expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_listContext* expression_list();

  class  Prefix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Prefix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_expressionContext *postfix_expression();
    Prefix_operatorContext *prefix_operator();
    In_out_expressionContext *in_out_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prefix_expressionContext* prefix_expression();

  class  In_out_expressionContext : public antlr4::ParserRuleContext {
  public:
    In_out_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  In_out_expressionContext* in_out_expression();

  class  Try_operatorContext : public antlr4::ParserRuleContext {
  public:
    Try_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Try_operatorContext* try_operator();

  class  Binary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Binary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_operatorContext *binary_operator();
    Prefix_expressionContext *prefix_expression();
    Assignment_operatorContext *assignment_operator();
    Conditional_operatorContext *conditional_operator();
    Try_operatorContext *try_operator();
    Type_casting_operatorContext *type_casting_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_expressionContext* binary_expression();

  class  Binary_expressionsContext : public antlr4::ParserRuleContext {
  public:
    Binary_expressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Binary_expressionContext *> binary_expression();
    Binary_expressionContext* binary_expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_expressionsContext* binary_expressions();

  class  Conditional_operatorContext : public antlr4::ParserRuleContext {
  public:
    Conditional_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_operatorContext* conditional_operator();

  class  Type_casting_operatorContext : public antlr4::ParserRuleContext {
  public:
    Type_casting_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_casting_operatorContext* type_casting_operator();

  class  Primary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unqualified_nameContext *unqualified_name();
    Generic_argument_clauseContext *generic_argument_clause();
    Array_typeContext *array_type();
    Dictionary_typeContext *dictionary_type();
    Literal_expressionContext *literal_expression();
    Self_expressionContext *self_expression();
    Superclass_expressionContext *superclass_expression();
    Closure_expressionContext *closure_expression();
    Parenthesized_operatorContext *parenthesized_operator();
    Parenthesized_expressionContext *parenthesized_expression();
    Tuple_expressionContext *tuple_expression();
    Implicit_member_expressionContext *implicit_member_expression();
    Wildcard_expressionContext *wildcard_expression();
    Key_path_expressionContext *key_path_expression();
    Selector_expressionContext *selector_expression();
    Key_path_string_expressionContext *key_path_string_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primary_expressionContext* primary_expression();

  class  Unqualified_nameContext : public antlr4::ParserRuleContext {
  public:
    Unqualified_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_namesContext *argument_names();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unqualified_nameContext* unqualified_name();

  class  Literal_expressionContext : public antlr4::ParserRuleContext {
  public:
    Literal_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    Array_literalContext *array_literal();
    Dictionary_literalContext *dictionary_literal();
    Playground_literalContext *playground_literal();
    antlr4::tree::TerminalNode *HASH_FILE();
    antlr4::tree::TerminalNode *HASH_FILE_ID();
    antlr4::tree::TerminalNode *HASH_FILE_PATH();
    antlr4::tree::TerminalNode *HASH_LINE();
    antlr4::tree::TerminalNode *HASH_COLUMN();
    antlr4::tree::TerminalNode *HASH_FUNCTION();
    antlr4::tree::TerminalNode *HASH_DSO_HANDLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Literal_expressionContext* literal_expression();

  class  Array_literalContext : public antlr4::ParserRuleContext {
  public:
    Array_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    Array_literal_itemsContext *array_literal_items();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_literalContext* array_literal();

  class  Array_literal_itemsContext : public antlr4::ParserRuleContext {
  public:
    Array_literal_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Array_literal_itemContext *> array_literal_item();
    Array_literal_itemContext* array_literal_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_literal_itemsContext* array_literal_items();

  class  Array_literal_itemContext : public antlr4::ParserRuleContext {
  public:
    Array_literal_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_literal_itemContext* array_literal_item();

  class  Dictionary_literalContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    Dictionary_literal_itemsContext *dictionary_literal_items();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_literalContext* dictionary_literal();

  class  Dictionary_literal_itemsContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_literal_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dictionary_literal_itemContext *> dictionary_literal_item();
    Dictionary_literal_itemContext* dictionary_literal_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_literal_itemsContext* dictionary_literal_items();

  class  Dictionary_literal_itemContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_literal_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_literal_itemContext* dictionary_literal_item();

  class  Playground_literalContext : public antlr4::ParserRuleContext {
  public:
    Playground_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_COLOR_LITERAL();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RED();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GREEN();
    antlr4::tree::TerminalNode *BLUE();
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *HASH_FILE_LITERAL();
    antlr4::tree::TerminalNode *RESOURCE_NAME();
    antlr4::tree::TerminalNode *HASH_IMAGE_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Playground_literalContext* playground_literal();

  class  Self_expressionContext : public antlr4::ParserRuleContext {
  public:
    Self_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Self_expressionContext() = default;
    void copyFrom(Self_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Self_initializer_expressionContext : public Self_expressionContext {
  public:
    Self_initializer_expressionContext(Self_expressionContext *ctx);

    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Self_pure_expressionContext : public Self_expressionContext {
  public:
    Self_pure_expressionContext(Self_expressionContext *ctx);

    antlr4::tree::TerminalNode *SELF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Self_subscript_expressionContext : public Self_expressionContext {
  public:
    Self_subscript_expressionContext(Self_expressionContext *ctx);

    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *LBRACK();
    Function_call_argument_listContext *function_call_argument_list();
    antlr4::tree::TerminalNode *RBRACK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Self_method_expressionContext : public Self_expressionContext {
  public:
    Self_method_expressionContext(Self_expressionContext *ctx);

    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Self_expressionContext* self_expression();

  class  Superclass_expressionContext : public antlr4::ParserRuleContext {
  public:
    Superclass_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Superclass_expressionContext() = default;
    void copyFrom(Superclass_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Superclass_subscript_expressionContext : public Superclass_expressionContext {
  public:
    Superclass_subscript_expressionContext(Superclass_expressionContext *ctx);

    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *LBRACK();
    Function_call_argument_listContext *function_call_argument_list();
    antlr4::tree::TerminalNode *RBRACK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Superclass_initializer_expressionContext : public Superclass_expressionContext {
  public:
    Superclass_initializer_expressionContext(Superclass_expressionContext *ctx);

    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  Superclass_method_expressionContext : public Superclass_expressionContext {
  public:
    Superclass_method_expressionContext(Superclass_expressionContext *ctx);

    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  Superclass_expressionContext* superclass_expression();

  class  Closure_expressionContext : public antlr4::ParserRuleContext {
  public:
    Closure_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    Closure_signatureContext *closure_signature();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_expressionContext* closure_expression();

  class  Closure_signatureContext : public antlr4::ParserRuleContext {
  public:
    Closure_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Closure_parameter_clauseContext *closure_parameter_clause();
    antlr4::tree::TerminalNode *IN();
    Capture_listContext *capture_list();
    antlr4::tree::TerminalNode *THROWS();
    Function_resultContext *function_result();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_signatureContext* closure_signature();

  class  Closure_parameter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Closure_parameter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Closure_parameter_listContext *closure_parameter_list();
    Identifier_listContext *identifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_parameter_clauseContext* closure_parameter_clause();

  class  Closure_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Closure_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Closure_parameterContext *> closure_parameter();
    Closure_parameterContext* closure_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_parameter_listContext* closure_parameter_list();

  class  Closure_parameterContext : public antlr4::ParserRuleContext {
  public:
    myParser::IdentifierContext *closure_parameter_name = nullptr;
    Closure_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Type_annotationContext *type_annotation();
    Range_operatorContext *range_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_parameterContext* closure_parameter();

  class  Capture_listContext : public antlr4::ParserRuleContext {
  public:
    Capture_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    Capture_list_itemsContext *capture_list_items();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Capture_listContext* capture_list();

  class  Capture_list_itemsContext : public antlr4::ParserRuleContext {
  public:
    Capture_list_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Capture_list_itemContext *> capture_list_item();
    Capture_list_itemContext* capture_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Capture_list_itemsContext* capture_list_items();

  class  Capture_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Capture_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionContext *expression();
    Self_expressionContext *self_expression();
    Capture_specifierContext *capture_specifier();
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Capture_list_itemContext* capture_list_item();

  class  Capture_specifierContext : public antlr4::ParserRuleContext {
  public:
    Capture_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *UNOWNED();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *UNSAFE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Capture_specifierContext* capture_specifier();

  class  Implicit_member_expressionContext : public antlr4::ParserRuleContext {
  public:
    Implicit_member_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    IdentifierContext *identifier();
    KeywordContext *keyword();
    Postfix_expressionContext *postfix_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Implicit_member_expressionContext* implicit_member_expression();

  class  Parenthesized_operatorContext : public antlr4::ParserRuleContext {
  public:
    Parenthesized_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    OperatorContext *operator_();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parenthesized_operatorContext* parenthesized_operator();

  class  Parenthesized_expressionContext : public antlr4::ParserRuleContext {
  public:
    Parenthesized_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parenthesized_expressionContext* parenthesized_expression();

  class  Tuple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tuple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Tuple_elementContext *tuple_element();
    antlr4::tree::TerminalNode *COMMA();
    Tuple_element_listContext *tuple_element_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_expressionContext* tuple_expression();

  class  Tuple_element_listContext : public antlr4::ParserRuleContext {
  public:
    Tuple_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tuple_elementContext *> tuple_element();
    Tuple_elementContext* tuple_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_element_listContext* tuple_element_list();

  class  Tuple_elementContext : public antlr4::ParserRuleContext {
  public:
    Tuple_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_elementContext* tuple_element();

  class  Wildcard_expressionContext : public antlr4::ParserRuleContext {
  public:
    Wildcard_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Wildcard_expressionContext* wildcard_expression();

  class  Key_path_expressionContext : public antlr4::ParserRuleContext {
  public:
    Key_path_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKSLASH();
    antlr4::tree::TerminalNode *DOT();
    Key_path_componentsContext *key_path_components();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_expressionContext* key_path_expression();

  class  Key_path_componentsContext : public antlr4::ParserRuleContext {
  public:
    Key_path_componentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Key_path_componentContext *> key_path_component();
    Key_path_componentContext* key_path_component(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_componentsContext* key_path_components();

  class  Key_path_componentContext : public antlr4::ParserRuleContext {
  public:
    Key_path_componentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Key_path_postfixesContext *key_path_postfixes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_componentContext* key_path_component();

  class  Key_path_postfixesContext : public antlr4::ParserRuleContext {
  public:
    Key_path_postfixesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Key_path_postfixContext *> key_path_postfix();
    Key_path_postfixContext* key_path_postfix(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_postfixesContext* key_path_postfixes();

  class  Key_path_postfixContext : public antlr4::ParserRuleContext {
  public:
    Key_path_postfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *LBRACK();
    Function_call_argument_listContext *function_call_argument_list();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_postfixContext* key_path_postfix();

  class  Selector_expressionContext : public antlr4::ParserRuleContext {
  public:
    Selector_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_SELECTOR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *GETTER();
    antlr4::tree::TerminalNode *SETTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Selector_expressionContext* selector_expression();

  class  Key_path_string_expressionContext : public antlr4::ParserRuleContext {
  public:
    Key_path_string_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH_KEYPATH();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Key_path_string_expressionContext* key_path_string_expression();

  class  Postfix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Postfix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expressionContext *primary_expression();
    std::vector<Function_call_suffixContext *> function_call_suffix();
    Function_call_suffixContext* function_call_suffix(size_t i);
    std::vector<Initializer_suffixContext *> initializer_suffix();
    Initializer_suffixContext* initializer_suffix(size_t i);
    std::vector<Explicit_member_suffixContext *> explicit_member_suffix();
    Explicit_member_suffixContext* explicit_member_suffix(size_t i);
    std::vector<Postfix_self_suffixContext *> postfix_self_suffix();
    Postfix_self_suffixContext* postfix_self_suffix(size_t i);
    std::vector<Subscript_suffixContext *> subscript_suffix();
    Subscript_suffixContext* subscript_suffix(size_t i);
    std::vector<Forced_value_suffixContext *> forced_value_suffix();
    Forced_value_suffixContext* forced_value_suffix(size_t i);
    std::vector<Optional_chaining_suffixContext *> optional_chaining_suffix();
    Optional_chaining_suffixContext* optional_chaining_suffix(size_t i);
    std::vector<Postfix_operatorContext *> postfix_operator();
    Postfix_operatorContext* postfix_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Postfix_expressionContext* postfix_expression();

  class  Function_call_suffixContext : public antlr4::ParserRuleContext {
  public:
    Function_call_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Trailing_closuresContext *trailing_closures();
    Function_call_argument_clauseContext *function_call_argument_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_suffixContext* function_call_suffix();

  class  Initializer_suffixContext : public antlr4::ParserRuleContext {
  public:
    Initializer_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INIT();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_namesContext *argument_names();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initializer_suffixContext* initializer_suffix();

  class  Explicit_member_suffixContext : public antlr4::ParserRuleContext {
  public:
    Explicit_member_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *Decimal_digits();
    IdentifierContext *identifier();
    Generic_argument_clauseContext *generic_argument_clause();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_namesContext *argument_names();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explicit_member_suffixContext* explicit_member_suffix();

  class  Postfix_self_suffixContext : public antlr4::ParserRuleContext {
  public:
    Postfix_self_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *SELF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Postfix_self_suffixContext* postfix_self_suffix();

  class  Subscript_suffixContext : public antlr4::ParserRuleContext {
  public:
    Subscript_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    Function_call_argument_listContext *function_call_argument_list();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subscript_suffixContext* subscript_suffix();

  class  Forced_value_suffixContext : public antlr4::ParserRuleContext {
  public:
    Forced_value_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Forced_value_suffixContext* forced_value_suffix();

  class  Optional_chaining_suffixContext : public antlr4::ParserRuleContext {
  public:
    Optional_chaining_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Optional_chaining_suffixContext* optional_chaining_suffix();

  class  Function_call_argument_clauseContext : public antlr4::ParserRuleContext {
  public:
    Function_call_argument_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Function_call_argument_listContext *function_call_argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_argument_clauseContext* function_call_argument_clause();

  class  Function_call_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Function_call_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_call_argumentContext *> function_call_argument();
    Function_call_argumentContext* function_call_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_argument_listContext* function_call_argument_list();

  class  Function_call_argumentContext : public antlr4::ParserRuleContext {
  public:
    Function_call_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionContext *expression();
    OperatorContext *operator_();
    Argument_nameContext *argument_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_argumentContext* function_call_argument();

  class  Trailing_closuresContext : public antlr4::ParserRuleContext {
  public:
    Trailing_closuresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Closure_expressionContext *closure_expression();
    Labeled_trailing_closuresContext *labeled_trailing_closures();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trailing_closuresContext* trailing_closures();

  class  Labeled_trailing_closuresContext : public antlr4::ParserRuleContext {
  public:
    Labeled_trailing_closuresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Labeled_trailing_closureContext *> labeled_trailing_closure();
    Labeled_trailing_closureContext* labeled_trailing_closure(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Labeled_trailing_closuresContext* labeled_trailing_closures();

  class  Labeled_trailing_closureContext : public antlr4::ParserRuleContext {
  public:
    Labeled_trailing_closureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    Closure_expressionContext *closure_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Labeled_trailing_closureContext* labeled_trailing_closure();

  class  Argument_namesContext : public antlr4::ParserRuleContext {
  public:
    Argument_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Argument_nameContext *> argument_name();
    Argument_nameContext* argument_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_namesContext* argument_names();

  class  Argument_nameContext : public antlr4::ParserRuleContext {
  public:
    Argument_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_nameContext* argument_name();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_typeContext *function_type();
    Array_typeContext *array_type();
    Dictionary_typeContext *dictionary_type();
    Protocol_composition_typeContext *protocol_composition_type();
    Type_identifierContext *type_identifier();
    Tuple_typeContext *tuple_type();
    Opaque_typeContext *opaque_type();
    Any_typeContext *any_type();
    Self_typeContext *self_type();
    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *PROTOCOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();
  TypeContext* type(int precedence);
  class  Type_annotationContext : public antlr4::ParserRuleContext {
  public:
    Type_annotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_annotationContext* type_annotation();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    Generic_argument_clauseContext *generic_argument_clause();
    antlr4::tree::TerminalNode *DOT();
    Type_identifierContext *type_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_nameContext* type_name();

  class  Tuple_typeContext : public antlr4::ParserRuleContext {
  public:
    Tuple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Tuple_type_element_listContext *tuple_type_element_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_typeContext* tuple_type();

  class  Tuple_type_element_listContext : public antlr4::ParserRuleContext {
  public:
    Tuple_type_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tuple_type_elementContext *> tuple_type_element();
    Tuple_type_elementContext* tuple_type_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_type_element_listContext* tuple_type_element_list();

  class  Tuple_type_elementContext : public antlr4::ParserRuleContext {
  public:
    Tuple_type_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_nameContext *element_name();
    Type_annotationContext *type_annotation();
    TypeContext *type();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_type_elementContext* tuple_type_element();

  class  Element_nameContext : public antlr4::ParserRuleContext {
  public:
    Element_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_nameContext* element_name();

  class  Function_typeContext : public antlr4::ParserRuleContext {
  public:
    Function_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_type_argument_clauseContext *function_type_argument_clause();
    Arrow_operatorContext *arrow_operator();
    TypeContext *type();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *THROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_typeContext* function_type();

  class  Function_type_argument_clauseContext : public antlr4::ParserRuleContext {
  public:
    Function_type_argument_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Function_type_argument_listContext *function_type_argument_list();
    Range_operatorContext *range_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_type_argument_clauseContext* function_type_argument_clause();

  class  Function_type_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Function_type_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_type_argumentContext *> function_type_argument();
    Function_type_argumentContext* function_type_argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_type_argument_listContext* function_type_argument_list();

  class  Function_type_argumentContext : public antlr4::ParserRuleContext {
  public:
    Function_type_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *INOUT();
    Argument_labelContext *argument_label();
    Type_annotationContext *type_annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_type_argumentContext* function_type_argument();

  class  Argument_labelContext : public antlr4::ParserRuleContext {
  public:
    Argument_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_labelContext* argument_label();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    TypeContext *type();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_typeContext* array_type();

  class  Dictionary_typeContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dictionary_typeContext* dictionary_type();

  class  Protocol_composition_typeContext : public antlr4::ParserRuleContext {
  public:
    Protocol_composition_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_identifierContext *> type_identifier();
    Type_identifierContext* type_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    Trailing_composition_andContext *trailing_composition_and();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_composition_typeContext* protocol_composition_type();

  class  Trailing_composition_andContext : public antlr4::ParserRuleContext {
  public:
    Trailing_composition_andContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trailing_composition_andContext* trailing_composition_and();

  class  Opaque_typeContext : public antlr4::ParserRuleContext {
  public:
    Opaque_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOME();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opaque_typeContext* opaque_type();

  class  Any_typeContext : public antlr4::ParserRuleContext {
  public:
    Any_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Any_typeContext* any_type();

  class  Self_typeContext : public antlr4::ParserRuleContext {
  public:
    Self_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELF_BIG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Self_typeContext* self_type();

  class  Type_inheritance_clauseContext : public antlr4::ParserRuleContext {
  public:
    Type_inheritance_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Type_inheritance_listContext *type_inheritance_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_inheritance_clauseContext* type_inheritance_clause();

  class  Type_inheritance_listContext : public antlr4::ParserRuleContext {
  public:
    Type_inheritance_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_identifierContext *> type_identifier();
    Type_identifierContext* type_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_inheritance_listContext* type_inheritance_list();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINUX();
    antlr4::tree::TerminalNode *WINDOWS();
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *ARCH();
    antlr4::tree::TerminalNode *ARM();
    antlr4::tree::TerminalNode *ARM64();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *BLUE();
    antlr4::tree::TerminalNode *CAN_IMPORT();
    antlr4::tree::TerminalNode *COMPILER();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *GREEN();
    antlr4::tree::TerminalNode *HIGHER_THAN();
    antlr4::tree::TerminalNode *I386();
    antlr4::tree::TerminalNode *I_OS();
    antlr4::tree::TerminalNode *OSX();
    antlr4::tree::TerminalNode *I_OS_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *LINE();
    antlr4::tree::TerminalNode *LOWER_THAN();
    antlr4::tree::TerminalNode *MAC_CATALYST();
    antlr4::tree::TerminalNode *MAC_CATALYST_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *MAC_OS();
    antlr4::tree::TerminalNode *MAC_OS_APPLICATION_EXTENSION();
    antlr4::tree::TerminalNode *OS();
    antlr4::tree::TerminalNode *PRECEDENCE_GROUP();
    antlr4::tree::TerminalNode *RED();
    antlr4::tree::TerminalNode *RESOURCE_NAME();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *SIMULATOR();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SWIFT();
    antlr4::tree::TerminalNode *TARGET_ENVIRONMENT();
    antlr4::tree::TerminalNode *TV_OS();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *WATCH_OS();
    antlr4::tree::TerminalNode *X86_64();
    antlr4::tree::TerminalNode *ASSOCIATIVITY();
    antlr4::tree::TerminalNode *CONVENIENCE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DID_SET();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INDIRECT();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *MUTATING();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NONMUTATING();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *POSTFIX();
    antlr4::tree::TerminalNode *PRECEDENCE();
    antlr4::tree::TerminalNode *PREFIX();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *REQUIRED();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNOWNED();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WILL_SET();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *GUARD();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SELF_BIG();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *GETTER();
    antlr4::tree::TerminalNode *SETTER();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> BACKTICK();
    antlr4::tree::TerminalNode* BACKTICK(size_t i);
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifier_listContext* identifier_list();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSOCIATED_TYPE();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *DEINIT();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *FILE_PRIVATE();
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INIT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *RETHROWS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SUBSCRIPT();
    antlr4::tree::TerminalNode *TYPEALIAS();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFER();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FALLTHROUGH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *GUARD();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SELF_BIG();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *THROWS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *UNDERSCORE();
    antlr4::tree::TerminalNode *AVAILABLE();
    antlr4::tree::TerminalNode *HASH_COLOR_LITERAL();
    antlr4::tree::TerminalNode *HASH_COLUMN();
    antlr4::tree::TerminalNode *HASH_ELSE();
    antlr4::tree::TerminalNode *HASH_ELSEIF();
    antlr4::tree::TerminalNode *HASH_ENDIF();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *HASH_FILE();
    antlr4::tree::TerminalNode *HASH_FILE_ID();
    antlr4::tree::TerminalNode *HASH_FILE_LITERAL();
    antlr4::tree::TerminalNode *HASH_FILE_PATH();
    antlr4::tree::TerminalNode *HASH_FUNCTION();
    antlr4::tree::TerminalNode *HASH_IF();
    antlr4::tree::TerminalNode *HASH_IMAGE_LITERAL();
    antlr4::tree::TerminalNode *HASH_LINE();
    antlr4::tree::TerminalNode *HASH_SELECTOR();
    antlr4::tree::TerminalNode *SOURCE_LOCATION();
    antlr4::tree::TerminalNode *WARNING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Negate_prefix_operatorContext : public antlr4::ParserRuleContext {
  public:
    Negate_prefix_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Negate_prefix_operatorContext* negate_prefix_operator();

  class  Compilation_condition_ANDContext : public antlr4::ParserRuleContext {
  public:
    Compilation_condition_ANDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_condition_ANDContext* compilation_condition_AND();

  class  Compilation_condition_ORContext : public antlr4::ParserRuleContext {
  public:
    Compilation_condition_ORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_condition_ORContext* compilation_condition_OR();

  class  Compilation_condition_GEContext : public antlr4::ParserRuleContext {
  public:
    Compilation_condition_GEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_condition_GEContext* compilation_condition_GE();

  class  Compilation_condition_LContext : public antlr4::ParserRuleContext {
  public:
    Compilation_condition_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compilation_condition_LContext* compilation_condition_L();

  class  Arrow_operatorContext : public antlr4::ParserRuleContext {
  public:
    Arrow_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arrow_operatorContext* arrow_operator();

  class  Range_operatorContext : public antlr4::ParserRuleContext {
  public:
    Range_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_operatorContext* range_operator();

  class  Same_type_equalsContext : public antlr4::ParserRuleContext {
  public:
    Same_type_equalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Same_type_equalsContext* same_type_equals();

  class  Binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_operatorContext* binary_operator();

  class  Prefix_operatorContext : public antlr4::ParserRuleContext {
  public:
    Prefix_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prefix_operatorContext* prefix_operator();

  class  Postfix_operatorContext : public antlr4::ParserRuleContext {
  public:
    Postfix_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Postfix_operatorContext* postfix_operator();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_headContext *operator_head();
    Operator_charactersContext *operator_characters();
    Dot_operator_headContext *dot_operator_head();
    Dot_operator_charactersContext *dot_operator_characters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorContext* operator_();

  class  Operator_headContext : public antlr4::ParserRuleContext {
  public:
    Operator_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *Operator_head_other();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_headContext* operator_head();

  class  Operator_characterContext : public antlr4::ParserRuleContext {
  public:
    Operator_characterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_headContext *operator_head();
    antlr4::tree::TerminalNode *Operator_following_character();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_characterContext* operator_character();

  class  Operator_charactersContext : public antlr4::ParserRuleContext {
  public:
    Operator_charactersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Operator_characterContext *> operator_character();
    Operator_characterContext* operator_character(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_charactersContext* operator_characters();

  class  Dot_operator_headContext : public antlr4::ParserRuleContext {
  public:
    Dot_operator_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dot_operator_headContext* dot_operator_head();

  class  Dot_operator_characterContext : public antlr4::ParserRuleContext {
  public:
    Dot_operator_characterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    Operator_characterContext *operator_character();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dot_operator_characterContext* dot_operator_character();

  class  Dot_operator_charactersContext : public antlr4::ParserRuleContext {
  public:
    Dot_operator_charactersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dot_operator_characterContext *> dot_operator_character();
    Dot_operator_characterContext* dot_operator_character(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dot_operator_charactersContext* dot_operator_characters();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Numeric_literalContext *numeric_literal();
    String_literalContext *string_literal();
    Boolean_literalContext *boolean_literal();
    Nil_literalContext *nil_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  Numeric_literalContext : public antlr4::ParserRuleContext {
  public:
    Numeric_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_literalContext *integer_literal();
    Negate_prefix_operatorContext *negate_prefix_operator();
    antlr4::tree::TerminalNode *Floating_point_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Numeric_literalContext* numeric_literal();

  class  Boolean_literalContext : public antlr4::ParserRuleContext {
  public:
    Boolean_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Boolean_literalContext* boolean_literal();

  class  Nil_literalContext : public antlr4::ParserRuleContext {
  public:
    Nil_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nil_literalContext* nil_literal();

  class  Integer_literalContext : public antlr4::ParserRuleContext {
  public:
    Integer_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decimal_digits();
    antlr4::tree::TerminalNode *Decimal_literal();
    antlr4::tree::TerminalNode *Binary_literal();
    antlr4::tree::TerminalNode *Octal_literal();
    antlr4::tree::TerminalNode *Hexadecimal_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_literalContext* integer_literal();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extended_string_literalContext *extended_string_literal();
    Interpolated_string_literalContext *interpolated_string_literal();
    Static_string_literalContext *static_string_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_literalContext* string_literal();

  class  Extended_string_literalContext : public antlr4::ParserRuleContext {
  public:
    Extended_string_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Multi_line_extended_string_open();
    antlr4::tree::TerminalNode *Multi_line_extended_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_multi_line_extended_text();
    antlr4::tree::TerminalNode* Quoted_multi_line_extended_text(size_t i);
    antlr4::tree::TerminalNode *Single_line_extended_string_open();
    antlr4::tree::TerminalNode *Single_line_extended_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_single_line_extended_text();
    antlr4::tree::TerminalNode* Quoted_single_line_extended_text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extended_string_literalContext* extended_string_literal();

  class  Static_string_literalContext : public antlr4::ParserRuleContext {
  public:
    Static_string_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Single_line_string_open();
    antlr4::tree::TerminalNode *Single_line_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_single_line_text();
    antlr4::tree::TerminalNode* Quoted_single_line_text(size_t i);
    antlr4::tree::TerminalNode *Multi_line_string_open();
    antlr4::tree::TerminalNode *Multi_line_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_multi_line_text();
    antlr4::tree::TerminalNode* Quoted_multi_line_text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Static_string_literalContext* static_string_literal();

  class  Interpolated_string_literalContext : public antlr4::ParserRuleContext {
  public:
    Interpolated_string_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Single_line_string_open();
    antlr4::tree::TerminalNode *Single_line_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_single_line_text();
    antlr4::tree::TerminalNode* Quoted_single_line_text(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Interpolataion_single_line();
    antlr4::tree::TerminalNode* Interpolataion_single_line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Tuple_elementContext *> tuple_element();
    Tuple_elementContext* tuple_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Tuple_element_listContext *> tuple_element_list();
    Tuple_element_listContext* tuple_element_list(size_t i);
    antlr4::tree::TerminalNode *Multi_line_string_open();
    antlr4::tree::TerminalNode *Multi_line_string_close();
    std::vector<antlr4::tree::TerminalNode *> Quoted_multi_line_text();
    antlr4::tree::TerminalNode* Quoted_multi_line_text(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Interpolataion_multi_line();
    antlr4::tree::TerminalNode* Interpolataion_multi_line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interpolated_string_literalContext* interpolated_string_literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool statementsSempred(StatementsContext *_localctx, size_t predicateIndex);
  bool compilation_conditionSempred(Compilation_conditionContext *_localctx, size_t predicateIndex);
  bool patternSempred(PatternContext *_localctx, size_t predicateIndex);
  bool balanced_token_punctuationSempred(Balanced_token_punctuationContext *_localctx, size_t predicateIndex);
  bool forced_value_suffixSempred(Forced_value_suffixContext *_localctx, size_t predicateIndex);
  bool optional_chaining_suffixSempred(Optional_chaining_suffixContext *_localctx, size_t predicateIndex);
  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);
  bool trailing_composition_andSempred(Trailing_composition_andContext *_localctx, size_t predicateIndex);
  bool assignment_operatorSempred(Assignment_operatorContext *_localctx, size_t predicateIndex);
  bool negate_prefix_operatorSempred(Negate_prefix_operatorContext *_localctx, size_t predicateIndex);
  bool compilation_condition_ANDSempred(Compilation_condition_ANDContext *_localctx, size_t predicateIndex);
  bool compilation_condition_ORSempred(Compilation_condition_ORContext *_localctx, size_t predicateIndex);
  bool compilation_condition_GESempred(Compilation_condition_GEContext *_localctx, size_t predicateIndex);
  bool compilation_condition_LSempred(Compilation_condition_LContext *_localctx, size_t predicateIndex);
  bool arrow_operatorSempred(Arrow_operatorContext *_localctx, size_t predicateIndex);
  bool range_operatorSempred(Range_operatorContext *_localctx, size_t predicateIndex);
  bool same_type_equalsSempred(Same_type_equalsContext *_localctx, size_t predicateIndex);
  bool binary_operatorSempred(Binary_operatorContext *_localctx, size_t predicateIndex);
  bool prefix_operatorSempred(Prefix_operatorContext *_localctx, size_t predicateIndex);
  bool postfix_operatorSempred(Postfix_operatorContext *_localctx, size_t predicateIndex);
  bool operator_charactersSempred(Operator_charactersContext *_localctx, size_t predicateIndex);
  bool dot_operator_charactersSempred(Dot_operator_charactersContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

