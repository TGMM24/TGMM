// Generated from /bdata2/yyh/ASTCC/AllGrammar/swiftGrammar/Swift5Parser.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Swift5Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		AS=1, ALPHA=2, BREAK=3, CASE=4, CATCH=5, CLASS=6, CONTINUE=7, DEFAULT=8, 
		DEFER=9, DO=10, GUARD=11, ELSE=12, ENUM=13, FOR=14, FALLTHROUGH=15, FUNC=16, 
		IN=17, IF=18, IMPORT=19, INTERNAL=20, FINAL=21, OPEN=22, PRIVATE=23, PUBLIC=24, 
		WHERE=25, WHILE=26, LET=27, VAR=28, PROTOCOL=29, GET=30, SET=31, WILL_SET=32, 
		DID_SET=33, REPEAT=34, SWITCH=35, STRUCT=36, RETURN=37, THROW=38, THROWS=39, 
		RETHROWS=40, INDIRECT=41, INIT=42, DEINIT=43, ASSOCIATED_TYPE=44, EXTENSION=45, 
		SUBSCRIPT=46, PREFIX=47, INFIX=48, LEFT=49, RIGHT=50, NONE=51, PRECEDENCE_GROUP=52, 
		HIGHER_THAN=53, LOWER_THAN=54, ASSIGNMENT=55, ASSOCIATIVITY=56, POSTFIX=57, 
		OPERATOR=58, TYPEALIAS=59, OS=60, ARCH=61, SWIFT=62, COMPILER=63, CAN_IMPORT=64, 
		TARGET_ENVIRONMENT=65, CONVENIENCE=66, DYNAMIC=67, LAZY=68, OPTIONAL=69, 
		OVERRIDE=70, REQUIRED=71, STATIC=72, WEAK=73, UNOWNED=74, SAFE=75, UNSAFE=76, 
		MUTATING=77, NONMUTATING=78, FILE_PRIVATE=79, IS=80, TRY=81, SUPER=82, 
		ANY=83, FALSE=84, RED=85, BLUE=86, GREEN=87, RESOURCE_NAME=88, TRUE=89, 
		NIL=90, INOUT=91, SOME=92, TYPE=93, PRECEDENCE=94, SELF=95, SELF_BIG=96, 
		MAC_OS=97, I_OS=98, OSX=99, WATCH_OS=100, TV_OS=101, LINUX=102, WINDOWS=103, 
		I386=104, X86_64=105, ARM=106, ARM64=107, SIMULATOR=108, MAC_CATALYST=109, 
		I_OS_APPLICATION_EXTENSION=110, MAC_CATALYST_APPLICATION_EXTENSION=111, 
		MAC_OS_APPLICATION_EXTENSION=112, SOURCE_LOCATION=113, FILE=114, LINE=115, 
		ERROR=116, WARNING=117, AVAILABLE=118, HASH_IF=119, HASH_ELSEIF=120, HASH_ELSE=121, 
		HASH_ENDIF=122, HASH_FILE=123, HASH_FILE_ID=124, HASH_FILE_PATH=125, HASH_LINE=126, 
		HASH_COLUMN=127, HASH_FUNCTION=128, HASH_DSO_HANDLE=129, HASH_SELECTOR=130, 
		HASH_KEYPATH=131, HASH_COLOR_LITERAL=132, HASH_FILE_LITERAL=133, HASH_IMAGE_LITERAL=134, 
		GETTER=135, SETTER=136, Identifier=137, DOT=138, LCURLY=139, LPAREN=140, 
		LBRACK=141, RCURLY=142, RPAREN=143, RBRACK=144, COMMA=145, COLON=146, 
		SEMI=147, LT=148, GT=149, UNDERSCORE=150, BANG=151, QUESTION=152, AT=153, 
		AND=154, SUB=155, EQUAL=156, OR=157, DIV=158, ADD=159, MUL=160, MOD=161, 
		CARET=162, TILDE=163, HASH=164, BACKTICK=165, DOLLAR=166, BACKSLASH=167, 
		Operator_head_other=168, Operator_following_character=169, Binary_literal=170, 
		Octal_literal=171, Decimal_digits=172, Decimal_literal=173, Hexadecimal_literal=174, 
		Floating_point_literal=175, WS=176, HASHBANG=177, Block_comment=178, Line_comment=179, 
		Multi_line_extended_string_open=180, Single_line_extended_string_open=181, 
		Multi_line_string_open=182, Single_line_string_open=183, Interpolataion_single_line=184, 
		Single_line_string_close=185, Quoted_single_line_text=186, Interpolataion_multi_line=187, 
		Multi_line_string_close=188, Quoted_multi_line_text=189, Single_line_extended_string_close=190, 
		Quoted_single_line_extended_text=191, Multi_line_extended_string_close=192, 
		Quoted_multi_line_extended_text=193;
	public static final int
		RULE_top_level = 0, RULE_statement = 1, RULE_statements = 2, RULE_loop_statement = 3, 
		RULE_for_in_statement = 4, RULE_while_statement = 5, RULE_condition_list = 6, 
		RULE_condition = 7, RULE_case_condition = 8, RULE_optional_binding_condition = 9, 
		RULE_repeat_while_statement = 10, RULE_branch_statement = 11, RULE_if_statement = 12, 
		RULE_else_clause = 13, RULE_guard_statement = 14, RULE_switch_statement = 15, 
		RULE_switch_cases = 16, RULE_switch_case = 17, RULE_case_label = 18, RULE_case_item_list = 19, 
		RULE_default_label = 20, RULE_where_clause = 21, RULE_where_expression = 22, 
		RULE_conditional_switch_case = 23, RULE_switch_if_directive_clause = 24, 
		RULE_switch_elseif_directive_clauses = 25, RULE_switch_elseif_directive_clause = 26, 
		RULE_switch_else_directive_clause = 27, RULE_labeled_statement = 28, RULE_statement_label = 29, 
		RULE_label_name = 30, RULE_control_transfer_statement = 31, RULE_break_statement = 32, 
		RULE_continue_statement = 33, RULE_fallthrough_statement = 34, RULE_return_statement = 35, 
		RULE_throw_statement = 36, RULE_defer_statement = 37, RULE_do_statement = 38, 
		RULE_catch_clauses = 39, RULE_catch_clause = 40, RULE_catch_pattern_list = 41, 
		RULE_catch_pattern = 42, RULE_compiler_control_statement = 43, RULE_conditional_compilation_block = 44, 
		RULE_if_directive_clause = 45, RULE_elseif_directive_clauses = 46, RULE_elseif_directive_clause = 47, 
		RULE_else_directive_clause = 48, RULE_compilation_condition = 49, RULE_platform_condition = 50, 
		RULE_swift_version = 51, RULE_swift_version_continuation = 52, RULE_operating_system = 53, 
		RULE_architecture = 54, RULE_module_name = 55, RULE_environment = 56, 
		RULE_line_control_statement = 57, RULE_line_number = 58, RULE_file_name = 59, 
		RULE_diagnostic_statement = 60, RULE_diagnostic_message = 61, RULE_availability_condition = 62, 
		RULE_availability_arguments = 63, RULE_availability_argument = 64, RULE_platform_name = 65, 
		RULE_platform_version = 66, RULE_generic_parameter_clause = 67, RULE_generic_parameter_list = 68, 
		RULE_generic_parameter = 69, RULE_generic_where_clause = 70, RULE_requirement_list = 71, 
		RULE_requirement = 72, RULE_conformance_requirement = 73, RULE_same_type_requirement = 74, 
		RULE_generic_argument_clause = 75, RULE_generic_argument_list = 76, RULE_generic_argument = 77, 
		RULE_declaration = 78, RULE_declarations = 79, RULE_top_level_declaration = 80, 
		RULE_code_block = 81, RULE_import_declaration = 82, RULE_import_kind = 83, 
		RULE_import_path = 84, RULE_import_path_identifier = 85, RULE_constant_declaration = 86, 
		RULE_pattern_initializer_list = 87, RULE_pattern_initializer = 88, RULE_initializer = 89, 
		RULE_variable_declaration = 90, RULE_variable_declaration_head = 91, RULE_variable_name = 92, 
		RULE_getter_setter_block = 93, RULE_getter_clause = 94, RULE_setter_clause = 95, 
		RULE_setter_name = 96, RULE_getter_setter_keyword_block = 97, RULE_getter_keyword_clause = 98, 
		RULE_setter_keyword_clause = 99, RULE_willSet_didSet_block = 100, RULE_willSet_clause = 101, 
		RULE_didSet_clause = 102, RULE_typealias_declaration = 103, RULE_typealias_name = 104, 
		RULE_typealias_assignment = 105, RULE_function_declaration = 106, RULE_function_head = 107, 
		RULE_function_name = 108, RULE_function_signature = 109, RULE_function_result = 110, 
		RULE_function_body = 111, RULE_parameter_clause = 112, RULE_parameter_list = 113, 
		RULE_parameter = 114, RULE_external_parameter_name = 115, RULE_local_parameter_name = 116, 
		RULE_default_argument_clause = 117, RULE_enum_declaration = 118, RULE_union_style_enum = 119, 
		RULE_union_style_enum_members = 120, RULE_union_style_enum_member = 121, 
		RULE_union_style_enum_case_clause = 122, RULE_union_style_enum_case_list = 123, 
		RULE_union_style_enum_case = 124, RULE_enum_name = 125, RULE_enum_case_name = 126, 
		RULE_raw_value_style_enum = 127, RULE_raw_value_style_enum_members = 128, 
		RULE_raw_value_style_enum_member = 129, RULE_raw_value_style_enum_case_clause = 130, 
		RULE_raw_value_style_enum_case_list = 131, RULE_raw_value_style_enum_case = 132, 
		RULE_raw_value_assignment = 133, RULE_raw_value_literal = 134, RULE_struct_declaration = 135, 
		RULE_struct_name = 136, RULE_struct_body = 137, RULE_struct_members = 138, 
		RULE_struct_member = 139, RULE_class_declaration = 140, RULE_class_name = 141, 
		RULE_class_body = 142, RULE_class_members = 143, RULE_class_member = 144, 
		RULE_protocol_declaration = 145, RULE_protocol_name = 146, RULE_protocol_body = 147, 
		RULE_protocol_members = 148, RULE_protocol_member = 149, RULE_protocol_member_declaration = 150, 
		RULE_protocol_property_declaration = 151, RULE_protocol_method_declaration = 152, 
		RULE_protocol_initializer_declaration = 153, RULE_protocol_subscript_declaration = 154, 
		RULE_protocol_associated_type_declaration = 155, RULE_initializer_declaration = 156, 
		RULE_initializer_head = 157, RULE_initializer_body = 158, RULE_deinitializer_declaration = 159, 
		RULE_extension_declaration = 160, RULE_extension_body = 161, RULE_extension_members = 162, 
		RULE_extension_member = 163, RULE_subscript_declaration = 164, RULE_subscript_head = 165, 
		RULE_subscript_result = 166, RULE_operator_declaration = 167, RULE_prefix_operator_declaration = 168, 
		RULE_postfix_operator_declaration = 169, RULE_infix_operator_declaration = 170, 
		RULE_infix_operator_group = 171, RULE_precedence_group_declaration = 172, 
		RULE_precedence_group_attributes = 173, RULE_precedence_group_attribute = 174, 
		RULE_precedence_group_relation = 175, RULE_precedence_group_assignment = 176, 
		RULE_precedence_group_associativity = 177, RULE_precedence_group_names = 178, 
		RULE_precedence_group_name = 179, RULE_declaration_modifier = 180, RULE_declaration_modifiers = 181, 
		RULE_access_level_modifier = 182, RULE_mutation_modifier = 183, RULE_pattern = 184, 
		RULE_wildcard_pattern = 185, RULE_identifier_pattern = 186, RULE_value_binding_pattern = 187, 
		RULE_tuple_pattern = 188, RULE_tuple_pattern_element_list = 189, RULE_tuple_pattern_element = 190, 
		RULE_enum_case_pattern = 191, RULE_optional_pattern = 192, RULE_expression_pattern = 193, 
		RULE_attribute = 194, RULE_attribute_name = 195, RULE_attribute_argument_clause = 196, 
		RULE_attributes = 197, RULE_balanced_tokens = 198, RULE_balanced_token = 199, 
		RULE_balanced_token_punctuation = 200, RULE_expression = 201, RULE_expression_list = 202, 
		RULE_prefix_expression = 203, RULE_in_out_expression = 204, RULE_try_operator = 205, 
		RULE_binary_expression = 206, RULE_binary_expressions = 207, RULE_conditional_operator = 208, 
		RULE_type_casting_operator = 209, RULE_primary_expression = 210, RULE_unqualified_name = 211, 
		RULE_literal_expression = 212, RULE_array_literal = 213, RULE_array_literal_items = 214, 
		RULE_array_literal_item = 215, RULE_dictionary_literal = 216, RULE_dictionary_literal_items = 217, 
		RULE_dictionary_literal_item = 218, RULE_playground_literal = 219, RULE_self_expression = 220, 
		RULE_superclass_expression = 221, RULE_closure_expression = 222, RULE_closure_signature = 223, 
		RULE_closure_parameter_clause = 224, RULE_closure_parameter_list = 225, 
		RULE_closure_parameter = 226, RULE_capture_list = 227, RULE_capture_list_items = 228, 
		RULE_capture_list_item = 229, RULE_capture_specifier = 230, RULE_implicit_member_expression = 231, 
		RULE_parenthesized_operator = 232, RULE_parenthesized_expression = 233, 
		RULE_tuple_expression = 234, RULE_tuple_element_list = 235, RULE_tuple_element = 236, 
		RULE_wildcard_expression = 237, RULE_key_path_expression = 238, RULE_key_path_components = 239, 
		RULE_key_path_component = 240, RULE_key_path_postfixes = 241, RULE_key_path_postfix = 242, 
		RULE_selector_expression = 243, RULE_key_path_string_expression = 244, 
		RULE_postfix_expression = 245, RULE_function_call_suffix = 246, RULE_initializer_suffix = 247, 
		RULE_explicit_member_suffix = 248, RULE_postfix_self_suffix = 249, RULE_subscript_suffix = 250, 
		RULE_forced_value_suffix = 251, RULE_optional_chaining_suffix = 252, RULE_function_call_argument_clause = 253, 
		RULE_function_call_argument_list = 254, RULE_function_call_argument = 255, 
		RULE_trailing_closures = 256, RULE_labeled_trailing_closures = 257, RULE_labeled_trailing_closure = 258, 
		RULE_argument_names = 259, RULE_argument_name = 260, RULE_type = 261, 
		RULE_type_annotation = 262, RULE_type_identifier = 263, RULE_type_name = 264, 
		RULE_tuple_type = 265, RULE_tuple_type_element_list = 266, RULE_tuple_type_element = 267, 
		RULE_element_name = 268, RULE_function_type = 269, RULE_function_type_argument_clause = 270, 
		RULE_function_type_argument_list = 271, RULE_function_type_argument = 272, 
		RULE_argument_label = 273, RULE_array_type = 274, RULE_dictionary_type = 275, 
		RULE_protocol_composition_type = 276, RULE_trailing_composition_and = 277, 
		RULE_opaque_type = 278, RULE_any_type = 279, RULE_self_type = 280, RULE_type_inheritance_clause = 281, 
		RULE_type_inheritance_list = 282, RULE_identifier = 283, RULE_identifier_list = 284, 
		RULE_keyword = 285, RULE_assignment_operator = 286, RULE_negate_prefix_operator = 287, 
		RULE_compilation_condition_AND = 288, RULE_compilation_condition_OR = 289, 
		RULE_compilation_condition_GE = 290, RULE_compilation_condition_L = 291, 
		RULE_arrow_operator = 292, RULE_range_operator = 293, RULE_same_type_equals = 294, 
		RULE_binary_operator = 295, RULE_prefix_operator = 296, RULE_postfix_operator = 297, 
		RULE_operator = 298, RULE_operator_head = 299, RULE_operator_character = 300, 
		RULE_operator_characters = 301, RULE_dot_operator_head = 302, RULE_dot_operator_character = 303, 
		RULE_dot_operator_characters = 304, RULE_literal = 305, RULE_numeric_literal = 306, 
		RULE_boolean_literal = 307, RULE_nil_literal = 308, RULE_integer_literal = 309, 
		RULE_string_literal = 310, RULE_extended_string_literal = 311, RULE_static_string_literal = 312, 
		RULE_interpolated_string_literal = 313;
	private static String[] makeRuleNames() {
		return new String[] {
			"top_level", "statement", "statements", "loop_statement", "for_in_statement", 
			"while_statement", "condition_list", "condition", "case_condition", "optional_binding_condition", 
			"repeat_while_statement", "branch_statement", "if_statement", "else_clause", 
			"guard_statement", "switch_statement", "switch_cases", "switch_case", 
			"case_label", "case_item_list", "default_label", "where_clause", "where_expression", 
			"conditional_switch_case", "switch_if_directive_clause", "switch_elseif_directive_clauses", 
			"switch_elseif_directive_clause", "switch_else_directive_clause", "labeled_statement", 
			"statement_label", "label_name", "control_transfer_statement", "break_statement", 
			"continue_statement", "fallthrough_statement", "return_statement", "throw_statement", 
			"defer_statement", "do_statement", "catch_clauses", "catch_clause", "catch_pattern_list", 
			"catch_pattern", "compiler_control_statement", "conditional_compilation_block", 
			"if_directive_clause", "elseif_directive_clauses", "elseif_directive_clause", 
			"else_directive_clause", "compilation_condition", "platform_condition", 
			"swift_version", "swift_version_continuation", "operating_system", "architecture", 
			"module_name", "environment", "line_control_statement", "line_number", 
			"file_name", "diagnostic_statement", "diagnostic_message", "availability_condition", 
			"availability_arguments", "availability_argument", "platform_name", "platform_version", 
			"generic_parameter_clause", "generic_parameter_list", "generic_parameter", 
			"generic_where_clause", "requirement_list", "requirement", "conformance_requirement", 
			"same_type_requirement", "generic_argument_clause", "generic_argument_list", 
			"generic_argument", "declaration", "declarations", "top_level_declaration", 
			"code_block", "import_declaration", "import_kind", "import_path", "import_path_identifier", 
			"constant_declaration", "pattern_initializer_list", "pattern_initializer", 
			"initializer", "variable_declaration", "variable_declaration_head", "variable_name", 
			"getter_setter_block", "getter_clause", "setter_clause", "setter_name", 
			"getter_setter_keyword_block", "getter_keyword_clause", "setter_keyword_clause", 
			"willSet_didSet_block", "willSet_clause", "didSet_clause", "typealias_declaration", 
			"typealias_name", "typealias_assignment", "function_declaration", "function_head", 
			"function_name", "function_signature", "function_result", "function_body", 
			"parameter_clause", "parameter_list", "parameter", "external_parameter_name", 
			"local_parameter_name", "default_argument_clause", "enum_declaration", 
			"union_style_enum", "union_style_enum_members", "union_style_enum_member", 
			"union_style_enum_case_clause", "union_style_enum_case_list", "union_style_enum_case", 
			"enum_name", "enum_case_name", "raw_value_style_enum", "raw_value_style_enum_members", 
			"raw_value_style_enum_member", "raw_value_style_enum_case_clause", "raw_value_style_enum_case_list", 
			"raw_value_style_enum_case", "raw_value_assignment", "raw_value_literal", 
			"struct_declaration", "struct_name", "struct_body", "struct_members", 
			"struct_member", "class_declaration", "class_name", "class_body", "class_members", 
			"class_member", "protocol_declaration", "protocol_name", "protocol_body", 
			"protocol_members", "protocol_member", "protocol_member_declaration", 
			"protocol_property_declaration", "protocol_method_declaration", "protocol_initializer_declaration", 
			"protocol_subscript_declaration", "protocol_associated_type_declaration", 
			"initializer_declaration", "initializer_head", "initializer_body", "deinitializer_declaration", 
			"extension_declaration", "extension_body", "extension_members", "extension_member", 
			"subscript_declaration", "subscript_head", "subscript_result", "operator_declaration", 
			"prefix_operator_declaration", "postfix_operator_declaration", "infix_operator_declaration", 
			"infix_operator_group", "precedence_group_declaration", "precedence_group_attributes", 
			"precedence_group_attribute", "precedence_group_relation", "precedence_group_assignment", 
			"precedence_group_associativity", "precedence_group_names", "precedence_group_name", 
			"declaration_modifier", "declaration_modifiers", "access_level_modifier", 
			"mutation_modifier", "pattern", "wildcard_pattern", "identifier_pattern", 
			"value_binding_pattern", "tuple_pattern", "tuple_pattern_element_list", 
			"tuple_pattern_element", "enum_case_pattern", "optional_pattern", "expression_pattern", 
			"attribute", "attribute_name", "attribute_argument_clause", "attributes", 
			"balanced_tokens", "balanced_token", "balanced_token_punctuation", "expression", 
			"expression_list", "prefix_expression", "in_out_expression", "try_operator", 
			"binary_expression", "binary_expressions", "conditional_operator", "type_casting_operator", 
			"primary_expression", "unqualified_name", "literal_expression", "array_literal", 
			"array_literal_items", "array_literal_item", "dictionary_literal", "dictionary_literal_items", 
			"dictionary_literal_item", "playground_literal", "self_expression", "superclass_expression", 
			"closure_expression", "closure_signature", "closure_parameter_clause", 
			"closure_parameter_list", "closure_parameter", "capture_list", "capture_list_items", 
			"capture_list_item", "capture_specifier", "implicit_member_expression", 
			"parenthesized_operator", "parenthesized_expression", "tuple_expression", 
			"tuple_element_list", "tuple_element", "wildcard_expression", "key_path_expression", 
			"key_path_components", "key_path_component", "key_path_postfixes", "key_path_postfix", 
			"selector_expression", "key_path_string_expression", "postfix_expression", 
			"function_call_suffix", "initializer_suffix", "explicit_member_suffix", 
			"postfix_self_suffix", "subscript_suffix", "forced_value_suffix", "optional_chaining_suffix", 
			"function_call_argument_clause", "function_call_argument_list", "function_call_argument", 
			"trailing_closures", "labeled_trailing_closures", "labeled_trailing_closure", 
			"argument_names", "argument_name", "type", "type_annotation", "type_identifier", 
			"type_name", "tuple_type", "tuple_type_element_list", "tuple_type_element", 
			"element_name", "function_type", "function_type_argument_clause", "function_type_argument_list", 
			"function_type_argument", "argument_label", "array_type", "dictionary_type", 
			"protocol_composition_type", "trailing_composition_and", "opaque_type", 
			"any_type", "self_type", "type_inheritance_clause", "type_inheritance_list", 
			"identifier", "identifier_list", "keyword", "assignment_operator", "negate_prefix_operator", 
			"compilation_condition_AND", "compilation_condition_OR", "compilation_condition_GE", 
			"compilation_condition_L", "arrow_operator", "range_operator", "same_type_equals", 
			"binary_operator", "prefix_operator", "postfix_operator", "operator", 
			"operator_head", "operator_character", "operator_characters", "dot_operator_head", 
			"dot_operator_character", "dot_operator_characters", "literal", "numeric_literal", 
			"boolean_literal", "nil_literal", "integer_literal", "string_literal", 
			"extended_string_literal", "static_string_literal", "interpolated_string_literal"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'as'", "'alpha'", "'break'", "'case'", "'catch'", "'class'", "'continue'", 
			"'default'", "'defer'", "'do'", "'guard'", "'else'", "'enum'", "'for'", 
			"'fallthrough'", "'func'", "'in'", "'if'", "'import'", "'internal'", 
			"'final'", "'open'", "'private'", "'public'", "'where'", "'while'", "'let'", 
			"'var'", "'protocol'", "'get'", "'set'", "'willSet'", "'didSet'", "'repeat'", 
			"'switch'", "'struct'", "'return'", "'throw'", "'throws'", "'rethrows'", 
			"'indirect'", "'init'", "'deinit'", "'associatedtype'", "'extension'", 
			"'subscript'", "'prefix'", "'infix'", "'left'", "'right'", "'none'", 
			"'precedencegroup'", "'higherThan'", "'lowerThan'", "'assignment'", "'associativity'", 
			"'postfix'", "'operator'", "'typealias'", "'os'", "'arch'", "'swift'", 
			"'compiler'", "'canImport'", "'targetEnvironment'", "'convenience'", 
			"'dynamic'", "'lazy'", "'optional'", "'override'", "'required'", "'static'", 
			"'weak'", "'unowned'", "'safe'", "'unsafe'", "'mutating'", "'nonmutating'", 
			"'fileprivate'", "'is'", "'try'", "'super'", "'Any'", "'false'", "'red'", 
			"'blue'", "'green'", "'resourceName'", "'true'", "'nil'", "'inout'", 
			"'some'", "'Type'", "'precedence'", "'self'", "'Self'", "'macOS'", "'iOS'", 
			"'OSX'", "'watchOS'", "'tvOS'", "'Linux'", "'Windows'", "'i386'", "'x86_64'", 
			"'arm'", "'arm64'", "'simulator'", "'macCatalyst'", "'iOSApplicationExtension'", 
			"'macCatalystApplicationExtension'", "'macOSApplicationExtension'", "'#sourceLocation'", 
			"'file'", "'line'", "'#error'", "'#warning'", "'#available'", "'#if'", 
			"'#elseif'", "'#else'", "'#endif'", "'#file'", "'#fileID'", "'#filePath'", 
			"'#line'", "'#column'", "'#function'", "'#dsohandle'", "'#selector'", 
			"'#keyPath'", "'#colorLiteral'", "'#fileLiteral'", "'#imageLiteral'", 
			"'getter'", "'setter'", null, "'.'", "'{'", "'('", "'['", "'}'", "')'", 
			"']'", "','", "':'", "';'", "'<'", "'>'", "'_'", "'!'", "'?'", "'@'", 
			"'&'", "'-'", "'='", "'|'", "'/'", "'+'", "'*'", "'%'", "'^'", "'~'", 
			"'#'", "'`'", "'$'", "'\\'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AS", "ALPHA", "BREAK", "CASE", "CATCH", "CLASS", "CONTINUE", "DEFAULT", 
			"DEFER", "DO", "GUARD", "ELSE", "ENUM", "FOR", "FALLTHROUGH", "FUNC", 
			"IN", "IF", "IMPORT", "INTERNAL", "FINAL", "OPEN", "PRIVATE", "PUBLIC", 
			"WHERE", "WHILE", "LET", "VAR", "PROTOCOL", "GET", "SET", "WILL_SET", 
			"DID_SET", "REPEAT", "SWITCH", "STRUCT", "RETURN", "THROW", "THROWS", 
			"RETHROWS", "INDIRECT", "INIT", "DEINIT", "ASSOCIATED_TYPE", "EXTENSION", 
			"SUBSCRIPT", "PREFIX", "INFIX", "LEFT", "RIGHT", "NONE", "PRECEDENCE_GROUP", 
			"HIGHER_THAN", "LOWER_THAN", "ASSIGNMENT", "ASSOCIATIVITY", "POSTFIX", 
			"OPERATOR", "TYPEALIAS", "OS", "ARCH", "SWIFT", "COMPILER", "CAN_IMPORT", 
			"TARGET_ENVIRONMENT", "CONVENIENCE", "DYNAMIC", "LAZY", "OPTIONAL", "OVERRIDE", 
			"REQUIRED", "STATIC", "WEAK", "UNOWNED", "SAFE", "UNSAFE", "MUTATING", 
			"NONMUTATING", "FILE_PRIVATE", "IS", "TRY", "SUPER", "ANY", "FALSE", 
			"RED", "BLUE", "GREEN", "RESOURCE_NAME", "TRUE", "NIL", "INOUT", "SOME", 
			"TYPE", "PRECEDENCE", "SELF", "SELF_BIG", "MAC_OS", "I_OS", "OSX", "WATCH_OS", 
			"TV_OS", "LINUX", "WINDOWS", "I386", "X86_64", "ARM", "ARM64", "SIMULATOR", 
			"MAC_CATALYST", "I_OS_APPLICATION_EXTENSION", "MAC_CATALYST_APPLICATION_EXTENSION", 
			"MAC_OS_APPLICATION_EXTENSION", "SOURCE_LOCATION", "FILE", "LINE", "ERROR", 
			"WARNING", "AVAILABLE", "HASH_IF", "HASH_ELSEIF", "HASH_ELSE", "HASH_ENDIF", 
			"HASH_FILE", "HASH_FILE_ID", "HASH_FILE_PATH", "HASH_LINE", "HASH_COLUMN", 
			"HASH_FUNCTION", "HASH_DSO_HANDLE", "HASH_SELECTOR", "HASH_KEYPATH", 
			"HASH_COLOR_LITERAL", "HASH_FILE_LITERAL", "HASH_IMAGE_LITERAL", "GETTER", 
			"SETTER", "Identifier", "DOT", "LCURLY", "LPAREN", "LBRACK", "RCURLY", 
			"RPAREN", "RBRACK", "COMMA", "COLON", "SEMI", "LT", "GT", "UNDERSCORE", 
			"BANG", "QUESTION", "AT", "AND", "SUB", "EQUAL", "OR", "DIV", "ADD", 
			"MUL", "MOD", "CARET", "TILDE", "HASH", "BACKTICK", "DOLLAR", "BACKSLASH", 
			"Operator_head_other", "Operator_following_character", "Binary_literal", 
			"Octal_literal", "Decimal_digits", "Decimal_literal", "Hexadecimal_literal", 
			"Floating_point_literal", "WS", "HASHBANG", "Block_comment", "Line_comment", 
			"Multi_line_extended_string_open", "Single_line_extended_string_open", 
			"Multi_line_string_open", "Single_line_string_open", "Interpolataion_single_line", 
			"Single_line_string_close", "Quoted_single_line_text", "Interpolataion_multi_line", 
			"Multi_line_string_close", "Quoted_multi_line_text", "Single_line_extended_string_close", 
			"Quoted_single_line_extended_text", "Multi_line_extended_string_close", 
			"Quoted_multi_line_extended_text"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Swift5Parser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public Swift5Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class Top_levelContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(Swift5Parser.EOF, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Top_levelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_top_level; }
	}

	public final Top_levelContext top_level() throws RecognitionException {
		Top_levelContext _localctx = new Top_levelContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_top_level);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(629);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				{
				setState(628);
				statements();
				}
				break;
			}
			setState(631);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public Loop_statementContext loop_statement() {
			return getRuleContext(Loop_statementContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Branch_statementContext branch_statement() {
			return getRuleContext(Branch_statementContext.class,0);
		}
		public Labeled_statementContext labeled_statement() {
			return getRuleContext(Labeled_statementContext.class,0);
		}
		public Control_transfer_statementContext control_transfer_statement() {
			return getRuleContext(Control_transfer_statementContext.class,0);
		}
		public Defer_statementContext defer_statement() {
			return getRuleContext(Defer_statementContext.class,0);
		}
		public Do_statementContext do_statement() {
			return getRuleContext(Do_statementContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(Swift5Parser.SEMI, 0); }
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(647);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(641);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
				case 1:
					{
					setState(633);
					loop_statement();
					}
					break;
				case 2:
					{
					setState(634);
					declaration();
					}
					break;
				case 3:
					{
					setState(635);
					branch_statement();
					}
					break;
				case 4:
					{
					setState(636);
					labeled_statement();
					}
					break;
				case 5:
					{
					setState(637);
					control_transfer_statement();
					}
					break;
				case 6:
					{
					setState(638);
					defer_statement();
					}
					break;
				case 7:
					{
					setState(639);
					do_statement();
					}
					break;
				case 8:
					{
					setState(640);
					expression();
					}
					break;
				}
				setState(644);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
				case 1:
					{
					setState(643);
					match(SEMI);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(646);
				compiler_control_statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementsContext extends ParserRuleContext {
		public int indexBefore = -1;
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statements);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(653); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(649);
					if (!(SwiftSupport.isSeparatedStatement(_input, _localctx.indexBefore))) throw new FailedPredicateException(this, "SwiftSupport.isSeparatedStatement(_input, $indexBefore)");
					setState(650);
					statement();
					((StatementsContext)_localctx).indexBefore =  _input.index();
								
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(655); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Loop_statementContext extends ParserRuleContext {
		public For_in_statementContext for_in_statement() {
			return getRuleContext(For_in_statementContext.class,0);
		}
		public While_statementContext while_statement() {
			return getRuleContext(While_statementContext.class,0);
		}
		public Repeat_while_statementContext repeat_while_statement() {
			return getRuleContext(Repeat_while_statementContext.class,0);
		}
		public Loop_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop_statement; }
	}

	public final Loop_statementContext loop_statement() throws RecognitionException {
		Loop_statementContext _localctx = new Loop_statementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_loop_statement);
		try {
			setState(660);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FOR:
				enterOuterAlt(_localctx, 1);
				{
				setState(657);
				for_in_statement();
				}
				break;
			case WHILE:
				enterOuterAlt(_localctx, 2);
				{
				setState(658);
				while_statement();
				}
				break;
			case REPEAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(659);
				repeat_while_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class For_in_statementContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(Swift5Parser.FOR, 0); }
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public TerminalNode IN() { return getToken(Swift5Parser.IN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public For_in_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_in_statement; }
	}

	public final For_in_statementContext for_in_statement() throws RecognitionException {
		For_in_statementContext _localctx = new For_in_statementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_for_in_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(662);
			match(FOR);
			setState(664);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(663);
				match(CASE);
				}
				break;
			}
			setState(666);
			pattern(0);
			setState(667);
			match(IN);
			setState(668);
			expression();
			setState(670);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(669);
				where_clause();
				}
			}

			setState(672);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class While_statementContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(Swift5Parser.WHILE, 0); }
		public Condition_listContext condition_list() {
			return getRuleContext(Condition_listContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public While_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_statement; }
	}

	public final While_statementContext while_statement() throws RecognitionException {
		While_statementContext _localctx = new While_statementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_while_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(674);
			match(WHILE);
			setState(675);
			condition_list();
			setState(676);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Condition_listContext extends ParserRuleContext {
		public List<ConditionContext> condition() {
			return getRuleContexts(ConditionContext.class);
		}
		public ConditionContext condition(int i) {
			return getRuleContext(ConditionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Condition_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition_list; }
	}

	public final Condition_listContext condition_list() throws RecognitionException {
		Condition_listContext _localctx = new Condition_listContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_condition_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(678);
			condition();
			setState(683);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(679);
				match(COMMA);
				setState(680);
				condition();
				}
				}
				setState(685);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public Availability_conditionContext availability_condition() {
			return getRuleContext(Availability_conditionContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Case_conditionContext case_condition() {
			return getRuleContext(Case_conditionContext.class,0);
		}
		public Optional_binding_conditionContext optional_binding_condition() {
			return getRuleContext(Optional_binding_conditionContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_condition);
		try {
			setState(690);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(686);
				availability_condition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(687);
				expression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(688);
				case_condition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(689);
				optional_binding_condition();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Case_conditionContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public Case_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_case_condition; }
	}

	public final Case_conditionContext case_condition() throws RecognitionException {
		Case_conditionContext _localctx = new Case_conditionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_case_condition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(692);
			match(CASE);
			setState(693);
			pattern(0);
			setState(694);
			initializer();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Optional_binding_conditionContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public TerminalNode LET() { return getToken(Swift5Parser.LET, 0); }
		public TerminalNode VAR() { return getToken(Swift5Parser.VAR, 0); }
		public Optional_binding_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optional_binding_condition; }
	}

	public final Optional_binding_conditionContext optional_binding_condition() throws RecognitionException {
		Optional_binding_conditionContext _localctx = new Optional_binding_conditionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_optional_binding_condition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(696);
			_la = _input.LA(1);
			if ( !(_la==LET || _la==VAR) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(697);
			pattern(0);
			setState(698);
			initializer();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Repeat_while_statementContext extends ParserRuleContext {
		public TerminalNode REPEAT() { return getToken(Swift5Parser.REPEAT, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public TerminalNode WHILE() { return getToken(Swift5Parser.WHILE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Repeat_while_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_repeat_while_statement; }
	}

	public final Repeat_while_statementContext repeat_while_statement() throws RecognitionException {
		Repeat_while_statementContext _localctx = new Repeat_while_statementContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_repeat_while_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(700);
			match(REPEAT);
			setState(701);
			code_block();
			setState(702);
			match(WHILE);
			setState(703);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Branch_statementContext extends ParserRuleContext {
		public If_statementContext if_statement() {
			return getRuleContext(If_statementContext.class,0);
		}
		public Guard_statementContext guard_statement() {
			return getRuleContext(Guard_statementContext.class,0);
		}
		public Switch_statementContext switch_statement() {
			return getRuleContext(Switch_statementContext.class,0);
		}
		public Branch_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branch_statement; }
	}

	public final Branch_statementContext branch_statement() throws RecognitionException {
		Branch_statementContext _localctx = new Branch_statementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_branch_statement);
		try {
			setState(708);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IF:
				enterOuterAlt(_localctx, 1);
				{
				setState(705);
				if_statement();
				}
				break;
			case GUARD:
				enterOuterAlt(_localctx, 2);
				{
				setState(706);
				guard_statement();
				}
				break;
			case SWITCH:
				enterOuterAlt(_localctx, 3);
				{
				setState(707);
				switch_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_statementContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(Swift5Parser.IF, 0); }
		public Condition_listContext condition_list() {
			return getRuleContext(Condition_listContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Else_clauseContext else_clause() {
			return getRuleContext(Else_clauseContext.class,0);
		}
		public If_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_statement; }
	}

	public final If_statementContext if_statement() throws RecognitionException {
		If_statementContext _localctx = new If_statementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_if_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(710);
			match(IF);
			setState(711);
			condition_list();
			setState(712);
			code_block();
			setState(714);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(713);
				else_clause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Else_clauseContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(Swift5Parser.ELSE, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public If_statementContext if_statement() {
			return getRuleContext(If_statementContext.class,0);
		}
		public Else_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_clause; }
	}

	public final Else_clauseContext else_clause() throws RecognitionException {
		Else_clauseContext _localctx = new Else_clauseContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_else_clause);
		try {
			setState(720);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(716);
				match(ELSE);
				setState(717);
				code_block();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(718);
				match(ELSE);
				setState(719);
				if_statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Guard_statementContext extends ParserRuleContext {
		public TerminalNode GUARD() { return getToken(Swift5Parser.GUARD, 0); }
		public Condition_listContext condition_list() {
			return getRuleContext(Condition_listContext.class,0);
		}
		public TerminalNode ELSE() { return getToken(Swift5Parser.ELSE, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Guard_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_guard_statement; }
	}

	public final Guard_statementContext guard_statement() throws RecognitionException {
		Guard_statementContext _localctx = new Guard_statementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_guard_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(722);
			match(GUARD);
			setState(723);
			condition_list();
			setState(724);
			match(ELSE);
			setState(725);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_statementContext extends ParserRuleContext {
		public TerminalNode SWITCH() { return getToken(Swift5Parser.SWITCH, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Switch_casesContext switch_cases() {
			return getRuleContext(Switch_casesContext.class,0);
		}
		public Switch_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_statement; }
	}

	public final Switch_statementContext switch_statement() throws RecognitionException {
		Switch_statementContext _localctx = new Switch_statementContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_switch_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(727);
			match(SWITCH);
			setState(728);
			expression();
			setState(729);
			match(LCURLY);
			setState(731);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==DEFAULT || _la==HASH_IF || _la==AT) {
				{
				setState(730);
				switch_cases();
				}
			}

			setState(733);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_casesContext extends ParserRuleContext {
		public Switch_caseContext switch_case() {
			return getRuleContext(Switch_caseContext.class,0);
		}
		public Switch_casesContext switch_cases() {
			return getRuleContext(Switch_casesContext.class,0);
		}
		public Switch_casesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_cases; }
	}

	public final Switch_casesContext switch_cases() throws RecognitionException {
		Switch_casesContext _localctx = new Switch_casesContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_switch_cases);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(735);
			switch_case();
			setState(737);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==DEFAULT || _la==HASH_IF || _la==AT) {
				{
				setState(736);
				switch_cases();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_caseContext extends ParserRuleContext {
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Case_labelContext case_label() {
			return getRuleContext(Case_labelContext.class,0);
		}
		public Default_labelContext default_label() {
			return getRuleContext(Default_labelContext.class,0);
		}
		public Conditional_switch_caseContext conditional_switch_case() {
			return getRuleContext(Conditional_switch_caseContext.class,0);
		}
		public Switch_caseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_case; }
	}

	public final Switch_caseContext switch_case() throws RecognitionException {
		Switch_caseContext _localctx = new Switch_caseContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_switch_case);
		try {
			setState(746);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CASE:
			case DEFAULT:
			case AT:
				enterOuterAlt(_localctx, 1);
				{
				setState(741);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(739);
					case_label();
					}
					break;
				case 2:
					{
					setState(740);
					default_label();
					}
					break;
				}
				setState(743);
				statements();
				}
				break;
			case HASH_IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(745);
				conditional_switch_case();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Case_labelContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public Case_item_listContext case_item_list() {
			return getRuleContext(Case_item_listContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Case_labelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_case_label; }
	}

	public final Case_labelContext case_label() throws RecognitionException {
		Case_labelContext _localctx = new Case_labelContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_case_label);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(749);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(748);
				attributes();
				}
			}

			setState(751);
			match(CASE);
			setState(752);
			case_item_list();
			setState(753);
			match(COLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Case_item_listContext extends ParserRuleContext {
		public List<PatternContext> pattern() {
			return getRuleContexts(PatternContext.class);
		}
		public PatternContext pattern(int i) {
			return getRuleContext(PatternContext.class,i);
		}
		public List<Where_clauseContext> where_clause() {
			return getRuleContexts(Where_clauseContext.class);
		}
		public Where_clauseContext where_clause(int i) {
			return getRuleContext(Where_clauseContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Case_item_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_case_item_list; }
	}

	public final Case_item_listContext case_item_list() throws RecognitionException {
		Case_item_listContext _localctx = new Case_item_listContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_case_item_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(755);
			pattern(0);
			setState(757);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(756);
				where_clause();
				}
			}

			setState(766);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(759);
				match(COMMA);
				setState(760);
				pattern(0);
				setState(762);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==WHERE) {
					{
					setState(761);
					where_clause();
					}
				}

				}
				}
				setState(768);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Default_labelContext extends ParserRuleContext {
		public TerminalNode DEFAULT() { return getToken(Swift5Parser.DEFAULT, 0); }
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Default_labelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_label; }
	}

	public final Default_labelContext default_label() throws RecognitionException {
		Default_labelContext _localctx = new Default_labelContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_default_label);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(770);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(769);
				attributes();
				}
			}

			setState(772);
			match(DEFAULT);
			setState(773);
			match(COLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_clauseContext extends ParserRuleContext {
		public TerminalNode WHERE() { return getToken(Swift5Parser.WHERE, 0); }
		public Where_expressionContext where_expression() {
			return getRuleContext(Where_expressionContext.class,0);
		}
		public Where_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_clause; }
	}

	public final Where_clauseContext where_clause() throws RecognitionException {
		Where_clauseContext _localctx = new Where_clauseContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_where_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(775);
			match(WHERE);
			setState(776);
			where_expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_expressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Where_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_expression; }
	}

	public final Where_expressionContext where_expression() throws RecognitionException {
		Where_expressionContext _localctx = new Where_expressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_where_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(778);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conditional_switch_caseContext extends ParserRuleContext {
		public Switch_if_directive_clauseContext switch_if_directive_clause() {
			return getRuleContext(Switch_if_directive_clauseContext.class,0);
		}
		public TerminalNode HASH_ENDIF() { return getToken(Swift5Parser.HASH_ENDIF, 0); }
		public Switch_elseif_directive_clausesContext switch_elseif_directive_clauses() {
			return getRuleContext(Switch_elseif_directive_clausesContext.class,0);
		}
		public Switch_else_directive_clauseContext switch_else_directive_clause() {
			return getRuleContext(Switch_else_directive_clauseContext.class,0);
		}
		public Conditional_switch_caseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditional_switch_case; }
	}

	public final Conditional_switch_caseContext conditional_switch_case() throws RecognitionException {
		Conditional_switch_caseContext _localctx = new Conditional_switch_caseContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_conditional_switch_case);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(780);
			switch_if_directive_clause();
			setState(782);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HASH_ELSEIF) {
				{
				setState(781);
				switch_elseif_directive_clauses();
				}
			}

			setState(785);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HASH_ELSE) {
				{
				setState(784);
				switch_else_directive_clause();
				}
			}

			setState(787);
			match(HASH_ENDIF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_if_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_IF() { return getToken(Swift5Parser.HASH_IF, 0); }
		public Compilation_conditionContext compilation_condition() {
			return getRuleContext(Compilation_conditionContext.class,0);
		}
		public Switch_casesContext switch_cases() {
			return getRuleContext(Switch_casesContext.class,0);
		}
		public Switch_if_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_if_directive_clause; }
	}

	public final Switch_if_directive_clauseContext switch_if_directive_clause() throws RecognitionException {
		Switch_if_directive_clauseContext _localctx = new Switch_if_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_switch_if_directive_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(789);
			match(HASH_IF);
			setState(790);
			compilation_condition(0);
			setState(792);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==DEFAULT || _la==HASH_IF || _la==AT) {
				{
				setState(791);
				switch_cases();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_elseif_directive_clausesContext extends ParserRuleContext {
		public Elseif_directive_clauseContext elseif_directive_clause() {
			return getRuleContext(Elseif_directive_clauseContext.class,0);
		}
		public Switch_elseif_directive_clausesContext switch_elseif_directive_clauses() {
			return getRuleContext(Switch_elseif_directive_clausesContext.class,0);
		}
		public Switch_elseif_directive_clausesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_elseif_directive_clauses; }
	}

	public final Switch_elseif_directive_clausesContext switch_elseif_directive_clauses() throws RecognitionException {
		Switch_elseif_directive_clausesContext _localctx = new Switch_elseif_directive_clausesContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_switch_elseif_directive_clauses);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(794);
			elseif_directive_clause();
			setState(796);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HASH_ELSEIF) {
				{
				setState(795);
				switch_elseif_directive_clauses();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_elseif_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_ELSEIF() { return getToken(Swift5Parser.HASH_ELSEIF, 0); }
		public Compilation_conditionContext compilation_condition() {
			return getRuleContext(Compilation_conditionContext.class,0);
		}
		public Switch_casesContext switch_cases() {
			return getRuleContext(Switch_casesContext.class,0);
		}
		public Switch_elseif_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_elseif_directive_clause; }
	}

	public final Switch_elseif_directive_clauseContext switch_elseif_directive_clause() throws RecognitionException {
		Switch_elseif_directive_clauseContext _localctx = new Switch_elseif_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_switch_elseif_directive_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(798);
			match(HASH_ELSEIF);
			setState(799);
			compilation_condition(0);
			setState(801);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==DEFAULT || _la==HASH_IF || _la==AT) {
				{
				setState(800);
				switch_cases();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Switch_else_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_ELSE() { return getToken(Swift5Parser.HASH_ELSE, 0); }
		public Switch_casesContext switch_cases() {
			return getRuleContext(Switch_casesContext.class,0);
		}
		public Switch_else_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switch_else_directive_clause; }
	}

	public final Switch_else_directive_clauseContext switch_else_directive_clause() throws RecognitionException {
		Switch_else_directive_clauseContext _localctx = new Switch_else_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_switch_else_directive_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(803);
			match(HASH_ELSE);
			setState(805);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==DEFAULT || _la==HASH_IF || _la==AT) {
				{
				setState(804);
				switch_cases();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Labeled_statementContext extends ParserRuleContext {
		public Statement_labelContext statement_label() {
			return getRuleContext(Statement_labelContext.class,0);
		}
		public Loop_statementContext loop_statement() {
			return getRuleContext(Loop_statementContext.class,0);
		}
		public If_statementContext if_statement() {
			return getRuleContext(If_statementContext.class,0);
		}
		public Switch_statementContext switch_statement() {
			return getRuleContext(Switch_statementContext.class,0);
		}
		public Do_statementContext do_statement() {
			return getRuleContext(Do_statementContext.class,0);
		}
		public Labeled_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeled_statement; }
	}

	public final Labeled_statementContext labeled_statement() throws RecognitionException {
		Labeled_statementContext _localctx = new Labeled_statementContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_labeled_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(807);
			statement_label();
			setState(812);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FOR:
			case WHILE:
			case REPEAT:
				{
				setState(808);
				loop_statement();
				}
				break;
			case IF:
				{
				setState(809);
				if_statement();
				}
				break;
			case SWITCH:
				{
				setState(810);
				switch_statement();
				}
				break;
			case DO:
				{
				setState(811);
				do_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Statement_labelContext extends ParserRuleContext {
		public Label_nameContext label_name() {
			return getRuleContext(Label_nameContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Statement_labelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement_label; }
	}

	public final Statement_labelContext statement_label() throws RecognitionException {
		Statement_labelContext _localctx = new Statement_labelContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_statement_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(814);
			label_name();
			setState(815);
			match(COLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Label_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Label_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_label_name; }
	}

	public final Label_nameContext label_name() throws RecognitionException {
		Label_nameContext _localctx = new Label_nameContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_label_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(817);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Control_transfer_statementContext extends ParserRuleContext {
		public Break_statementContext break_statement() {
			return getRuleContext(Break_statementContext.class,0);
		}
		public Continue_statementContext continue_statement() {
			return getRuleContext(Continue_statementContext.class,0);
		}
		public Fallthrough_statementContext fallthrough_statement() {
			return getRuleContext(Fallthrough_statementContext.class,0);
		}
		public Return_statementContext return_statement() {
			return getRuleContext(Return_statementContext.class,0);
		}
		public Throw_statementContext throw_statement() {
			return getRuleContext(Throw_statementContext.class,0);
		}
		public Control_transfer_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_control_transfer_statement; }
	}

	public final Control_transfer_statementContext control_transfer_statement() throws RecognitionException {
		Control_transfer_statementContext _localctx = new Control_transfer_statementContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_control_transfer_statement);
		try {
			setState(824);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BREAK:
				enterOuterAlt(_localctx, 1);
				{
				setState(819);
				break_statement();
				}
				break;
			case CONTINUE:
				enterOuterAlt(_localctx, 2);
				{
				setState(820);
				continue_statement();
				}
				break;
			case FALLTHROUGH:
				enterOuterAlt(_localctx, 3);
				{
				setState(821);
				fallthrough_statement();
				}
				break;
			case RETURN:
				enterOuterAlt(_localctx, 4);
				{
				setState(822);
				return_statement();
				}
				break;
			case THROW:
				enterOuterAlt(_localctx, 5);
				{
				setState(823);
				throw_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Break_statementContext extends ParserRuleContext {
		public TerminalNode BREAK() { return getToken(Swift5Parser.BREAK, 0); }
		public Label_nameContext label_name() {
			return getRuleContext(Label_nameContext.class,0);
		}
		public Break_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_break_statement; }
	}

	public final Break_statementContext break_statement() throws RecognitionException {
		Break_statementContext _localctx = new Break_statementContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_break_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(826);
			match(BREAK);
			setState(828);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				{
				setState(827);
				label_name();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Continue_statementContext extends ParserRuleContext {
		public TerminalNode CONTINUE() { return getToken(Swift5Parser.CONTINUE, 0); }
		public Label_nameContext label_name() {
			return getRuleContext(Label_nameContext.class,0);
		}
		public Continue_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_continue_statement; }
	}

	public final Continue_statementContext continue_statement() throws RecognitionException {
		Continue_statementContext _localctx = new Continue_statementContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_continue_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(830);
			match(CONTINUE);
			setState(832);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				{
				setState(831);
				label_name();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fallthrough_statementContext extends ParserRuleContext {
		public TerminalNode FALLTHROUGH() { return getToken(Swift5Parser.FALLTHROUGH, 0); }
		public Fallthrough_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fallthrough_statement; }
	}

	public final Fallthrough_statementContext fallthrough_statement() throws RecognitionException {
		Fallthrough_statementContext _localctx = new Fallthrough_statementContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_fallthrough_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(834);
			match(FALLTHROUGH);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Return_statementContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(Swift5Parser.RETURN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Return_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_statement; }
	}

	public final Return_statementContext return_statement() throws RecognitionException {
		Return_statementContext _localctx = new Return_statementContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_return_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(836);
			match(RETURN);
			setState(838);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(837);
				expression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Throw_statementContext extends ParserRuleContext {
		public TerminalNode THROW() { return getToken(Swift5Parser.THROW, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Throw_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_throw_statement; }
	}

	public final Throw_statementContext throw_statement() throws RecognitionException {
		Throw_statementContext _localctx = new Throw_statementContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_throw_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(840);
			match(THROW);
			setState(841);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Defer_statementContext extends ParserRuleContext {
		public TerminalNode DEFER() { return getToken(Swift5Parser.DEFER, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Defer_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defer_statement; }
	}

	public final Defer_statementContext defer_statement() throws RecognitionException {
		Defer_statementContext _localctx = new Defer_statementContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_defer_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(843);
			match(DEFER);
			setState(844);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Do_statementContext extends ParserRuleContext {
		public TerminalNode DO() { return getToken(Swift5Parser.DO, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Catch_clausesContext catch_clauses() {
			return getRuleContext(Catch_clausesContext.class,0);
		}
		public Do_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_do_statement; }
	}

	public final Do_statementContext do_statement() throws RecognitionException {
		Do_statementContext _localctx = new Do_statementContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_do_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(846);
			match(DO);
			setState(847);
			code_block();
			setState(849);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(848);
				catch_clauses();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Catch_clausesContext extends ParserRuleContext {
		public List<Catch_clauseContext> catch_clause() {
			return getRuleContexts(Catch_clauseContext.class);
		}
		public Catch_clauseContext catch_clause(int i) {
			return getRuleContext(Catch_clauseContext.class,i);
		}
		public Catch_clausesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_catch_clauses; }
	}

	public final Catch_clausesContext catch_clauses() throws RecognitionException {
		Catch_clausesContext _localctx = new Catch_clausesContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_catch_clauses);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(852); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(851);
					catch_clause();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(854); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Catch_clauseContext extends ParserRuleContext {
		public TerminalNode CATCH() { return getToken(Swift5Parser.CATCH, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Catch_pattern_listContext catch_pattern_list() {
			return getRuleContext(Catch_pattern_listContext.class,0);
		}
		public Catch_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_catch_clause; }
	}

	public final Catch_clauseContext catch_clause() throws RecognitionException {
		Catch_clauseContext _localctx = new Catch_clauseContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_catch_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(856);
			match(CATCH);
			setState(858);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				{
				setState(857);
				catch_pattern_list();
				}
				break;
			}
			setState(860);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Catch_pattern_listContext extends ParserRuleContext {
		public List<Catch_patternContext> catch_pattern() {
			return getRuleContexts(Catch_patternContext.class);
		}
		public Catch_patternContext catch_pattern(int i) {
			return getRuleContext(Catch_patternContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Catch_pattern_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_catch_pattern_list; }
	}

	public final Catch_pattern_listContext catch_pattern_list() throws RecognitionException {
		Catch_pattern_listContext _localctx = new Catch_pattern_listContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_catch_pattern_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(862);
			catch_pattern();
			setState(869);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(863);
					catch_pattern();
					setState(864);
					match(COMMA);
					setState(865);
					catch_pattern();
					}
					} 
				}
				setState(871);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Catch_patternContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Catch_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_catch_pattern; }
	}

	public final Catch_patternContext catch_pattern() throws RecognitionException {
		Catch_patternContext _localctx = new Catch_patternContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_catch_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(872);
			pattern(0);
			setState(874);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				{
				setState(873);
				where_clause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compiler_control_statementContext extends ParserRuleContext {
		public Conditional_compilation_blockContext conditional_compilation_block() {
			return getRuleContext(Conditional_compilation_blockContext.class,0);
		}
		public Line_control_statementContext line_control_statement() {
			return getRuleContext(Line_control_statementContext.class,0);
		}
		public Diagnostic_statementContext diagnostic_statement() {
			return getRuleContext(Diagnostic_statementContext.class,0);
		}
		public Compiler_control_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compiler_control_statement; }
	}

	public final Compiler_control_statementContext compiler_control_statement() throws RecognitionException {
		Compiler_control_statementContext _localctx = new Compiler_control_statementContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_compiler_control_statement);
		try {
			setState(879);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case HASH_IF:
				enterOuterAlt(_localctx, 1);
				{
				setState(876);
				conditional_compilation_block();
				}
				break;
			case SOURCE_LOCATION:
				enterOuterAlt(_localctx, 2);
				{
				setState(877);
				line_control_statement();
				}
				break;
			case ERROR:
			case WARNING:
				enterOuterAlt(_localctx, 3);
				{
				setState(878);
				diagnostic_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conditional_compilation_blockContext extends ParserRuleContext {
		public If_directive_clauseContext if_directive_clause() {
			return getRuleContext(If_directive_clauseContext.class,0);
		}
		public TerminalNode HASH_ENDIF() { return getToken(Swift5Parser.HASH_ENDIF, 0); }
		public Elseif_directive_clausesContext elseif_directive_clauses() {
			return getRuleContext(Elseif_directive_clausesContext.class,0);
		}
		public Else_directive_clauseContext else_directive_clause() {
			return getRuleContext(Else_directive_clauseContext.class,0);
		}
		public Conditional_compilation_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditional_compilation_block; }
	}

	public final Conditional_compilation_blockContext conditional_compilation_block() throws RecognitionException {
		Conditional_compilation_blockContext _localctx = new Conditional_compilation_blockContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_conditional_compilation_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(881);
			if_directive_clause();
			setState(883);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HASH_ELSEIF) {
				{
				setState(882);
				elseif_directive_clauses();
				}
			}

			setState(886);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HASH_ELSE) {
				{
				setState(885);
				else_directive_clause();
				}
			}

			setState(888);
			match(HASH_ENDIF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_IF() { return getToken(Swift5Parser.HASH_IF, 0); }
		public Compilation_conditionContext compilation_condition() {
			return getRuleContext(Compilation_conditionContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public If_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_directive_clause; }
	}

	public final If_directive_clauseContext if_directive_clause() throws RecognitionException {
		If_directive_clauseContext _localctx = new If_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_if_directive_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(890);
			match(HASH_IF);
			setState(891);
			compilation_condition(0);
			setState(893);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(892);
				statements();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Elseif_directive_clausesContext extends ParserRuleContext {
		public List<Elseif_directive_clauseContext> elseif_directive_clause() {
			return getRuleContexts(Elseif_directive_clauseContext.class);
		}
		public Elseif_directive_clauseContext elseif_directive_clause(int i) {
			return getRuleContext(Elseif_directive_clauseContext.class,i);
		}
		public Elseif_directive_clausesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseif_directive_clauses; }
	}

	public final Elseif_directive_clausesContext elseif_directive_clauses() throws RecognitionException {
		Elseif_directive_clausesContext _localctx = new Elseif_directive_clausesContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_elseif_directive_clauses);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(896); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(895);
				elseif_directive_clause();
				}
				}
				setState(898); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==HASH_ELSEIF );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Elseif_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_ELSEIF() { return getToken(Swift5Parser.HASH_ELSEIF, 0); }
		public Compilation_conditionContext compilation_condition() {
			return getRuleContext(Compilation_conditionContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Elseif_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseif_directive_clause; }
	}

	public final Elseif_directive_clauseContext elseif_directive_clause() throws RecognitionException {
		Elseif_directive_clauseContext _localctx = new Elseif_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_elseif_directive_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(900);
			match(HASH_ELSEIF);
			setState(901);
			compilation_condition(0);
			setState(903);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				{
				setState(902);
				statements();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Else_directive_clauseContext extends ParserRuleContext {
		public TerminalNode HASH_ELSE() { return getToken(Swift5Parser.HASH_ELSE, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Else_directive_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_directive_clause; }
	}

	public final Else_directive_clauseContext else_directive_clause() throws RecognitionException {
		Else_directive_clauseContext _localctx = new Else_directive_clauseContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_else_directive_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(905);
			match(HASH_ELSE);
			setState(907);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				{
				setState(906);
				statements();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compilation_conditionContext extends ParserRuleContext {
		public Platform_conditionContext platform_condition() {
			return getRuleContext(Platform_conditionContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Boolean_literalContext boolean_literal() {
			return getRuleContext(Boolean_literalContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public List<Compilation_conditionContext> compilation_condition() {
			return getRuleContexts(Compilation_conditionContext.class);
		}
		public Compilation_conditionContext compilation_condition(int i) {
			return getRuleContext(Compilation_conditionContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Compilation_condition_ANDContext compilation_condition_AND() {
			return getRuleContext(Compilation_condition_ANDContext.class,0);
		}
		public Compilation_condition_ORContext compilation_condition_OR() {
			return getRuleContext(Compilation_condition_ORContext.class,0);
		}
		public Compilation_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilation_condition; }
	}

	public final Compilation_conditionContext compilation_condition() throws RecognitionException {
		return compilation_condition(0);
	}

	private Compilation_conditionContext compilation_condition(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Compilation_conditionContext _localctx = new Compilation_conditionContext(_ctx, _parentState);
		Compilation_conditionContext _prevctx = _localctx;
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_compilation_condition, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(919);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				{
				setState(910);
				platform_condition();
				}
				break;
			case 2:
				{
				setState(911);
				identifier();
				}
				break;
			case 3:
				{
				setState(912);
				boolean_literal();
				}
				break;
			case 4:
				{
				setState(913);
				match(LPAREN);
				setState(914);
				compilation_condition(0);
				setState(915);
				match(RPAREN);
				}
				break;
			case 5:
				{
				setState(917);
				match(BANG);
				setState(918);
				compilation_condition(2);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(930);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,47,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Compilation_conditionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_compilation_condition);
					setState(921);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(924);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
					case 1:
						{
						setState(922);
						compilation_condition_AND();
						}
						break;
					case 2:
						{
						setState(923);
						compilation_condition_OR();
						}
						break;
					}
					setState(926);
					compilation_condition(2);
					}
					} 
				}
				setState(932);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,47,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Platform_conditionContext extends ParserRuleContext {
		public TerminalNode OS() { return getToken(Swift5Parser.OS, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Operating_systemContext operating_system() {
			return getRuleContext(Operating_systemContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode ARCH() { return getToken(Swift5Parser.ARCH, 0); }
		public ArchitectureContext architecture() {
			return getRuleContext(ArchitectureContext.class,0);
		}
		public Swift_versionContext swift_version() {
			return getRuleContext(Swift_versionContext.class,0);
		}
		public TerminalNode SWIFT() { return getToken(Swift5Parser.SWIFT, 0); }
		public TerminalNode COMPILER() { return getToken(Swift5Parser.COMPILER, 0); }
		public Compilation_condition_GEContext compilation_condition_GE() {
			return getRuleContext(Compilation_condition_GEContext.class,0);
		}
		public Compilation_condition_LContext compilation_condition_L() {
			return getRuleContext(Compilation_condition_LContext.class,0);
		}
		public TerminalNode CAN_IMPORT() { return getToken(Swift5Parser.CAN_IMPORT, 0); }
		public Module_nameContext module_name() {
			return getRuleContext(Module_nameContext.class,0);
		}
		public TerminalNode TARGET_ENVIRONMENT() { return getToken(Swift5Parser.TARGET_ENVIRONMENT, 0); }
		public EnvironmentContext environment() {
			return getRuleContext(EnvironmentContext.class,0);
		}
		public Platform_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_platform_condition; }
	}

	public final Platform_conditionContext platform_condition() throws RecognitionException {
		Platform_conditionContext _localctx = new Platform_conditionContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_platform_condition);
		int _la;
		try {
			setState(962);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OS:
				enterOuterAlt(_localctx, 1);
				{
				setState(933);
				match(OS);
				setState(934);
				match(LPAREN);
				setState(935);
				operating_system();
				setState(936);
				match(RPAREN);
				}
				break;
			case ARCH:
				enterOuterAlt(_localctx, 2);
				{
				setState(938);
				match(ARCH);
				setState(939);
				match(LPAREN);
				setState(940);
				architecture();
				setState(941);
				match(RPAREN);
				}
				break;
			case SWIFT:
			case COMPILER:
				enterOuterAlt(_localctx, 3);
				{
				setState(943);
				_la = _input.LA(1);
				if ( !(_la==SWIFT || _la==COMPILER) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(944);
				match(LPAREN);
				setState(947);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
				case 1:
					{
					setState(945);
					compilation_condition_GE();
					}
					break;
				case 2:
					{
					setState(946);
					compilation_condition_L();
					}
					break;
				}
				setState(949);
				swift_version();
				setState(950);
				match(RPAREN);
				}
				break;
			case CAN_IMPORT:
				enterOuterAlt(_localctx, 4);
				{
				setState(952);
				match(CAN_IMPORT);
				setState(953);
				match(LPAREN);
				setState(954);
				module_name();
				setState(955);
				match(RPAREN);
				}
				break;
			case TARGET_ENVIRONMENT:
				enterOuterAlt(_localctx, 5);
				{
				setState(957);
				match(TARGET_ENVIRONMENT);
				setState(958);
				match(LPAREN);
				setState(959);
				environment();
				setState(960);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Swift_versionContext extends ParserRuleContext {
		public TerminalNode Decimal_digits() { return getToken(Swift5Parser.Decimal_digits, 0); }
		public Swift_version_continuationContext swift_version_continuation() {
			return getRuleContext(Swift_version_continuationContext.class,0);
		}
		public Swift_versionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_swift_version; }
	}

	public final Swift_versionContext swift_version() throws RecognitionException {
		Swift_versionContext _localctx = new Swift_versionContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_swift_version);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(964);
			match(Decimal_digits);
			setState(966);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT) {
				{
				setState(965);
				swift_version_continuation();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Swift_version_continuationContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode Decimal_digits() { return getToken(Swift5Parser.Decimal_digits, 0); }
		public Swift_version_continuationContext swift_version_continuation() {
			return getRuleContext(Swift_version_continuationContext.class,0);
		}
		public Swift_version_continuationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_swift_version_continuation; }
	}

	public final Swift_version_continuationContext swift_version_continuation() throws RecognitionException {
		Swift_version_continuationContext _localctx = new Swift_version_continuationContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_swift_version_continuation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(968);
			match(DOT);
			setState(969);
			match(Decimal_digits);
			setState(971);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOT) {
				{
				setState(970);
				swift_version_continuation();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Operating_systemContext extends ParserRuleContext {
		public TerminalNode MAC_OS() { return getToken(Swift5Parser.MAC_OS, 0); }
		public TerminalNode I_OS() { return getToken(Swift5Parser.I_OS, 0); }
		public TerminalNode OSX() { return getToken(Swift5Parser.OSX, 0); }
		public TerminalNode WATCH_OS() { return getToken(Swift5Parser.WATCH_OS, 0); }
		public TerminalNode TV_OS() { return getToken(Swift5Parser.TV_OS, 0); }
		public TerminalNode LINUX() { return getToken(Swift5Parser.LINUX, 0); }
		public TerminalNode WINDOWS() { return getToken(Swift5Parser.WINDOWS, 0); }
		public Operating_systemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operating_system; }
	}

	public final Operating_systemContext operating_system() throws RecognitionException {
		Operating_systemContext _localctx = new Operating_systemContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_operating_system);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(973);
			_la = _input.LA(1);
			if ( !(((((_la - 97)) & ~0x3f) == 0 && ((1L << (_la - 97)) & ((1L << (MAC_OS - 97)) | (1L << (I_OS - 97)) | (1L << (OSX - 97)) | (1L << (WATCH_OS - 97)) | (1L << (TV_OS - 97)) | (1L << (LINUX - 97)) | (1L << (WINDOWS - 97)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArchitectureContext extends ParserRuleContext {
		public TerminalNode I386() { return getToken(Swift5Parser.I386, 0); }
		public TerminalNode X86_64() { return getToken(Swift5Parser.X86_64, 0); }
		public TerminalNode ARM() { return getToken(Swift5Parser.ARM, 0); }
		public TerminalNode ARM64() { return getToken(Swift5Parser.ARM64, 0); }
		public ArchitectureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_architecture; }
	}

	public final ArchitectureContext architecture() throws RecognitionException {
		ArchitectureContext _localctx = new ArchitectureContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_architecture);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(975);
			_la = _input.LA(1);
			if ( !(((((_la - 104)) & ~0x3f) == 0 && ((1L << (_la - 104)) & ((1L << (I386 - 104)) | (1L << (X86_64 - 104)) | (1L << (ARM - 104)) | (1L << (ARM64 - 104)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Module_nameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Module_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_module_name; }
	}

	public final Module_nameContext module_name() throws RecognitionException {
		Module_nameContext _localctx = new Module_nameContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_module_name);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(977);
			identifier();
			setState(982);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(978);
				match(DOT);
				setState(979);
				identifier();
				}
				}
				setState(984);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnvironmentContext extends ParserRuleContext {
		public TerminalNode SIMULATOR() { return getToken(Swift5Parser.SIMULATOR, 0); }
		public TerminalNode MAC_CATALYST() { return getToken(Swift5Parser.MAC_CATALYST, 0); }
		public EnvironmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_environment; }
	}

	public final EnvironmentContext environment() throws RecognitionException {
		EnvironmentContext _localctx = new EnvironmentContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_environment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(985);
			_la = _input.LA(1);
			if ( !(_la==SIMULATOR || _la==MAC_CATALYST) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Line_control_statementContext extends ParserRuleContext {
		public TerminalNode SOURCE_LOCATION() { return getToken(Swift5Parser.SOURCE_LOCATION, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode FILE() { return getToken(Swift5Parser.FILE, 0); }
		public List<TerminalNode> COLON() { return getTokens(Swift5Parser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(Swift5Parser.COLON, i);
		}
		public File_nameContext file_name() {
			return getRuleContext(File_nameContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(Swift5Parser.COMMA, 0); }
		public TerminalNode LINE() { return getToken(Swift5Parser.LINE, 0); }
		public Line_numberContext line_number() {
			return getRuleContext(Line_numberContext.class,0);
		}
		public Line_control_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line_control_statement; }
	}

	public final Line_control_statementContext line_control_statement() throws RecognitionException {
		Line_control_statementContext _localctx = new Line_control_statementContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_line_control_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(987);
			match(SOURCE_LOCATION);
			setState(988);
			match(LPAREN);
			setState(997);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FILE) {
				{
				setState(989);
				match(FILE);
				setState(990);
				match(COLON);
				setState(991);
				file_name();
				setState(992);
				match(COMMA);
				setState(993);
				match(LINE);
				setState(994);
				match(COLON);
				setState(995);
				line_number();
				}
			}

			setState(999);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Line_numberContext extends ParserRuleContext {
		public TerminalNode Decimal_literal() { return getToken(Swift5Parser.Decimal_literal, 0); }
		public Line_numberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line_number; }
	}

	public final Line_numberContext line_number() throws RecognitionException {
		Line_numberContext _localctx = new Line_numberContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_line_number);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1001);
			match(Decimal_literal);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class File_nameContext extends ParserRuleContext {
		public Static_string_literalContext static_string_literal() {
			return getRuleContext(Static_string_literalContext.class,0);
		}
		public File_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file_name; }
	}

	public final File_nameContext file_name() throws RecognitionException {
		File_nameContext _localctx = new File_nameContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_file_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1003);
			static_string_literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Diagnostic_statementContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Diagnostic_messageContext diagnostic_message() {
			return getRuleContext(Diagnostic_messageContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode ERROR() { return getToken(Swift5Parser.ERROR, 0); }
		public TerminalNode WARNING() { return getToken(Swift5Parser.WARNING, 0); }
		public Diagnostic_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_diagnostic_statement; }
	}

	public final Diagnostic_statementContext diagnostic_statement() throws RecognitionException {
		Diagnostic_statementContext _localctx = new Diagnostic_statementContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_diagnostic_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1005);
			_la = _input.LA(1);
			if ( !(_la==ERROR || _la==WARNING) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(1006);
			match(LPAREN);
			setState(1007);
			diagnostic_message();
			setState(1008);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Diagnostic_messageContext extends ParserRuleContext {
		public Static_string_literalContext static_string_literal() {
			return getRuleContext(Static_string_literalContext.class,0);
		}
		public Diagnostic_messageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_diagnostic_message; }
	}

	public final Diagnostic_messageContext diagnostic_message() throws RecognitionException {
		Diagnostic_messageContext _localctx = new Diagnostic_messageContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_diagnostic_message);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1010);
			static_string_literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Availability_conditionContext extends ParserRuleContext {
		public TerminalNode AVAILABLE() { return getToken(Swift5Parser.AVAILABLE, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Availability_argumentsContext availability_arguments() {
			return getRuleContext(Availability_argumentsContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Availability_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_availability_condition; }
	}

	public final Availability_conditionContext availability_condition() throws RecognitionException {
		Availability_conditionContext _localctx = new Availability_conditionContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_availability_condition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1012);
			match(AVAILABLE);
			setState(1013);
			match(LPAREN);
			setState(1014);
			availability_arguments();
			setState(1015);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Availability_argumentsContext extends ParserRuleContext {
		public List<Availability_argumentContext> availability_argument() {
			return getRuleContexts(Availability_argumentContext.class);
		}
		public Availability_argumentContext availability_argument(int i) {
			return getRuleContext(Availability_argumentContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Availability_argumentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_availability_arguments; }
	}

	public final Availability_argumentsContext availability_arguments() throws RecognitionException {
		Availability_argumentsContext _localctx = new Availability_argumentsContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_availability_arguments);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1017);
			availability_argument();
			setState(1022);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1018);
				match(COMMA);
				setState(1019);
				availability_argument();
				}
				}
				setState(1024);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Availability_argumentContext extends ParserRuleContext {
		public Platform_nameContext platform_name() {
			return getRuleContext(Platform_nameContext.class,0);
		}
		public Platform_versionContext platform_version() {
			return getRuleContext(Platform_versionContext.class,0);
		}
		public TerminalNode MUL() { return getToken(Swift5Parser.MUL, 0); }
		public Availability_argumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_availability_argument; }
	}

	public final Availability_argumentContext availability_argument() throws RecognitionException {
		Availability_argumentContext _localctx = new Availability_argumentContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_availability_argument);
		try {
			setState(1029);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
				enterOuterAlt(_localctx, 1);
				{
				setState(1025);
				platform_name();
				setState(1026);
				platform_version();
				}
				break;
			case MUL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1028);
				match(MUL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Platform_nameContext extends ParserRuleContext {
		public TerminalNode I_OS() { return getToken(Swift5Parser.I_OS, 0); }
		public TerminalNode OSX() { return getToken(Swift5Parser.OSX, 0); }
		public TerminalNode I_OS_APPLICATION_EXTENSION() { return getToken(Swift5Parser.I_OS_APPLICATION_EXTENSION, 0); }
		public TerminalNode MAC_OS() { return getToken(Swift5Parser.MAC_OS, 0); }
		public TerminalNode MAC_OS_APPLICATION_EXTENSION() { return getToken(Swift5Parser.MAC_OS_APPLICATION_EXTENSION, 0); }
		public TerminalNode MAC_CATALYST() { return getToken(Swift5Parser.MAC_CATALYST, 0); }
		public TerminalNode MAC_CATALYST_APPLICATION_EXTENSION() { return getToken(Swift5Parser.MAC_CATALYST_APPLICATION_EXTENSION, 0); }
		public TerminalNode WATCH_OS() { return getToken(Swift5Parser.WATCH_OS, 0); }
		public TerminalNode TV_OS() { return getToken(Swift5Parser.TV_OS, 0); }
		public Platform_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_platform_name; }
	}

	public final Platform_nameContext platform_name() throws RecognitionException {
		Platform_nameContext _localctx = new Platform_nameContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_platform_name);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1031);
			_la = _input.LA(1);
			if ( !(((((_la - 97)) & ~0x3f) == 0 && ((1L << (_la - 97)) & ((1L << (MAC_OS - 97)) | (1L << (I_OS - 97)) | (1L << (OSX - 97)) | (1L << (WATCH_OS - 97)) | (1L << (TV_OS - 97)) | (1L << (MAC_CATALYST - 97)) | (1L << (I_OS_APPLICATION_EXTENSION - 97)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 97)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 97)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Platform_versionContext extends ParserRuleContext {
		public TerminalNode Decimal_literal() { return getToken(Swift5Parser.Decimal_literal, 0); }
		public TerminalNode Decimal_digits() { return getToken(Swift5Parser.Decimal_digits, 0); }
		public TerminalNode Floating_point_literal() { return getToken(Swift5Parser.Floating_point_literal, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Platform_versionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_platform_version; }
	}

	public final Platform_versionContext platform_version() throws RecognitionException {
		Platform_versionContext _localctx = new Platform_versionContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_platform_version);
		int _la;
		try {
			setState(1040);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Decimal_literal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1033);
				match(Decimal_literal);
				}
				break;
			case Decimal_digits:
				enterOuterAlt(_localctx, 2);
				{
				setState(1034);
				match(Decimal_digits);
				}
				break;
			case Floating_point_literal:
				enterOuterAlt(_localctx, 3);
				{
				setState(1035);
				match(Floating_point_literal);
				setState(1038);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DOT) {
					{
					setState(1036);
					match(DOT);
					setState(1037);
					match(Decimal_digits);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_parameter_clauseContext extends ParserRuleContext {
		public TerminalNode LT() { return getToken(Swift5Parser.LT, 0); }
		public Generic_parameter_listContext generic_parameter_list() {
			return getRuleContext(Generic_parameter_listContext.class,0);
		}
		public TerminalNode GT() { return getToken(Swift5Parser.GT, 0); }
		public Generic_parameter_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_parameter_clause; }
	}

	public final Generic_parameter_clauseContext generic_parameter_clause() throws RecognitionException {
		Generic_parameter_clauseContext _localctx = new Generic_parameter_clauseContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_generic_parameter_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1042);
			match(LT);
			setState(1043);
			generic_parameter_list();
			setState(1044);
			match(GT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_parameter_listContext extends ParserRuleContext {
		public List<Generic_parameterContext> generic_parameter() {
			return getRuleContexts(Generic_parameterContext.class);
		}
		public Generic_parameterContext generic_parameter(int i) {
			return getRuleContext(Generic_parameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Generic_parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_parameter_list; }
	}

	public final Generic_parameter_listContext generic_parameter_list() throws RecognitionException {
		Generic_parameter_listContext _localctx = new Generic_parameter_listContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_generic_parameter_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1046);
			generic_parameter();
			setState(1051);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1047);
				match(COMMA);
				setState(1048);
				generic_parameter();
				}
				}
				setState(1053);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_parameterContext extends ParserRuleContext {
		public Type_nameContext type_name() {
			return getRuleContext(Type_nameContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Type_identifierContext type_identifier() {
			return getRuleContext(Type_identifierContext.class,0);
		}
		public Protocol_composition_typeContext protocol_composition_type() {
			return getRuleContext(Protocol_composition_typeContext.class,0);
		}
		public Generic_parameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_parameter; }
	}

	public final Generic_parameterContext generic_parameter() throws RecognitionException {
		Generic_parameterContext _localctx = new Generic_parameterContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_generic_parameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1054);
			type_name();
			setState(1060);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1055);
				match(COLON);
				setState(1058);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
				case 1:
					{
					setState(1056);
					type_identifier();
					}
					break;
				case 2:
					{
					setState(1057);
					protocol_composition_type();
					}
					break;
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_where_clauseContext extends ParserRuleContext {
		public TerminalNode WHERE() { return getToken(Swift5Parser.WHERE, 0); }
		public Requirement_listContext requirement_list() {
			return getRuleContext(Requirement_listContext.class,0);
		}
		public Generic_where_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_where_clause; }
	}

	public final Generic_where_clauseContext generic_where_clause() throws RecognitionException {
		Generic_where_clauseContext _localctx = new Generic_where_clauseContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_generic_where_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1062);
			match(WHERE);
			setState(1063);
			requirement_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Requirement_listContext extends ParserRuleContext {
		public List<RequirementContext> requirement() {
			return getRuleContexts(RequirementContext.class);
		}
		public RequirementContext requirement(int i) {
			return getRuleContext(RequirementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Requirement_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_requirement_list; }
	}

	public final Requirement_listContext requirement_list() throws RecognitionException {
		Requirement_listContext _localctx = new Requirement_listContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_requirement_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1065);
			requirement();
			setState(1070);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1066);
					match(COMMA);
					setState(1067);
					requirement();
					}
					} 
				}
				setState(1072);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RequirementContext extends ParserRuleContext {
		public Conformance_requirementContext conformance_requirement() {
			return getRuleContext(Conformance_requirementContext.class,0);
		}
		public Same_type_requirementContext same_type_requirement() {
			return getRuleContext(Same_type_requirementContext.class,0);
		}
		public RequirementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_requirement; }
	}

	public final RequirementContext requirement() throws RecognitionException {
		RequirementContext _localctx = new RequirementContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_requirement);
		try {
			setState(1075);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1073);
				conformance_requirement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1074);
				same_type_requirement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conformance_requirementContext extends ParserRuleContext {
		public List<Type_identifierContext> type_identifier() {
			return getRuleContexts(Type_identifierContext.class);
		}
		public Type_identifierContext type_identifier(int i) {
			return getRuleContext(Type_identifierContext.class,i);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Protocol_composition_typeContext protocol_composition_type() {
			return getRuleContext(Protocol_composition_typeContext.class,0);
		}
		public Conformance_requirementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conformance_requirement; }
	}

	public final Conformance_requirementContext conformance_requirement() throws RecognitionException {
		Conformance_requirementContext _localctx = new Conformance_requirementContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_conformance_requirement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1077);
			type_identifier();
			setState(1078);
			match(COLON);
			setState(1081);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				{
				setState(1079);
				type_identifier();
				}
				break;
			case 2:
				{
				setState(1080);
				protocol_composition_type();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Same_type_requirementContext extends ParserRuleContext {
		public List<Type_identifierContext> type_identifier() {
			return getRuleContexts(Type_identifierContext.class);
		}
		public Type_identifierContext type_identifier(int i) {
			return getRuleContext(Type_identifierContext.class,i);
		}
		public Same_type_equalsContext same_type_equals() {
			return getRuleContext(Same_type_equalsContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Same_type_requirementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_same_type_requirement; }
	}

	public final Same_type_requirementContext same_type_requirement() throws RecognitionException {
		Same_type_requirementContext _localctx = new Same_type_requirementContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_same_type_requirement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1083);
			type_identifier();
			setState(1084);
			same_type_equals();
			setState(1087);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
			case 1:
				{
				setState(1085);
				type_identifier();
				}
				break;
			case 2:
				{
				setState(1086);
				type(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_argument_clauseContext extends ParserRuleContext {
		public TerminalNode LT() { return getToken(Swift5Parser.LT, 0); }
		public Generic_argument_listContext generic_argument_list() {
			return getRuleContext(Generic_argument_listContext.class,0);
		}
		public TerminalNode GT() { return getToken(Swift5Parser.GT, 0); }
		public Generic_argument_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_argument_clause; }
	}

	public final Generic_argument_clauseContext generic_argument_clause() throws RecognitionException {
		Generic_argument_clauseContext _localctx = new Generic_argument_clauseContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_generic_argument_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1089);
			match(LT);
			setState(1090);
			generic_argument_list();
			setState(1091);
			match(GT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_argument_listContext extends ParserRuleContext {
		public List<Generic_argumentContext> generic_argument() {
			return getRuleContexts(Generic_argumentContext.class);
		}
		public Generic_argumentContext generic_argument(int i) {
			return getRuleContext(Generic_argumentContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Generic_argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_argument_list; }
	}

	public final Generic_argument_listContext generic_argument_list() throws RecognitionException {
		Generic_argument_listContext _localctx = new Generic_argument_listContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_generic_argument_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1093);
			generic_argument();
			setState(1098);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1094);
				match(COMMA);
				setState(1095);
				generic_argument();
				}
				}
				setState(1100);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Generic_argumentContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Generic_argumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generic_argument; }
	}

	public final Generic_argumentContext generic_argument() throws RecognitionException {
		Generic_argumentContext _localctx = new Generic_argumentContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_generic_argument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1101);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public Import_declarationContext import_declaration() {
			return getRuleContext(Import_declarationContext.class,0);
		}
		public Constant_declarationContext constant_declaration() {
			return getRuleContext(Constant_declarationContext.class,0);
		}
		public Variable_declarationContext variable_declaration() {
			return getRuleContext(Variable_declarationContext.class,0);
		}
		public Typealias_declarationContext typealias_declaration() {
			return getRuleContext(Typealias_declarationContext.class,0);
		}
		public Function_declarationContext function_declaration() {
			return getRuleContext(Function_declarationContext.class,0);
		}
		public Enum_declarationContext enum_declaration() {
			return getRuleContext(Enum_declarationContext.class,0);
		}
		public Struct_declarationContext struct_declaration() {
			return getRuleContext(Struct_declarationContext.class,0);
		}
		public Class_declarationContext class_declaration() {
			return getRuleContext(Class_declarationContext.class,0);
		}
		public Protocol_declarationContext protocol_declaration() {
			return getRuleContext(Protocol_declarationContext.class,0);
		}
		public Initializer_declarationContext initializer_declaration() {
			return getRuleContext(Initializer_declarationContext.class,0);
		}
		public Deinitializer_declarationContext deinitializer_declaration() {
			return getRuleContext(Deinitializer_declarationContext.class,0);
		}
		public Extension_declarationContext extension_declaration() {
			return getRuleContext(Extension_declarationContext.class,0);
		}
		public Subscript_declarationContext subscript_declaration() {
			return getRuleContext(Subscript_declarationContext.class,0);
		}
		public Operator_declarationContext operator_declaration() {
			return getRuleContext(Operator_declarationContext.class,0);
		}
		public Precedence_group_declarationContext precedence_group_declaration() {
			return getRuleContext(Precedence_group_declarationContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(Swift5Parser.SEMI, 0); }
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				{
				setState(1103);
				import_declaration();
				}
				break;
			case 2:
				{
				setState(1104);
				constant_declaration();
				}
				break;
			case 3:
				{
				setState(1105);
				variable_declaration();
				}
				break;
			case 4:
				{
				setState(1106);
				typealias_declaration();
				}
				break;
			case 5:
				{
				setState(1107);
				function_declaration();
				}
				break;
			case 6:
				{
				setState(1108);
				enum_declaration();
				}
				break;
			case 7:
				{
				setState(1109);
				struct_declaration();
				}
				break;
			case 8:
				{
				setState(1110);
				class_declaration();
				}
				break;
			case 9:
				{
				setState(1111);
				protocol_declaration();
				}
				break;
			case 10:
				{
				setState(1112);
				initializer_declaration();
				}
				break;
			case 11:
				{
				setState(1113);
				deinitializer_declaration();
				}
				break;
			case 12:
				{
				setState(1114);
				extension_declaration();
				}
				break;
			case 13:
				{
				setState(1115);
				subscript_declaration();
				}
				break;
			case 14:
				{
				setState(1116);
				operator_declaration();
				}
				break;
			case 15:
				{
				setState(1117);
				precedence_group_declaration();
				}
				break;
			}
			setState(1121);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				{
				setState(1120);
				match(SEMI);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationsContext extends ParserRuleContext {
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public DeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarations; }
	}

	public final DeclarationsContext declarations() throws RecognitionException {
		DeclarationsContext _localctx = new DeclarationsContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_declarations);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1124); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1123);
				declaration();
				}
				}
				setState(1126); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0) || _la==AT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Top_level_declarationContext extends ParserRuleContext {
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Top_level_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_top_level_declaration; }
	}

	public final Top_level_declarationContext top_level_declaration() throws RecognitionException {
		Top_level_declarationContext _localctx = new Top_level_declarationContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_top_level_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1129);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				{
				setState(1128);
				statements();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Code_blockContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Code_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code_block; }
	}

	public final Code_blockContext code_block() throws RecognitionException {
		Code_blockContext _localctx = new Code_blockContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_code_block);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1131);
			match(LCURLY);
			setState(1133);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				{
				setState(1132);
				statements();
				}
				break;
			}
			setState(1135);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Import_declarationContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(Swift5Parser.IMPORT, 0); }
		public Import_pathContext import_path() {
			return getRuleContext(Import_pathContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Import_kindContext import_kind() {
			return getRuleContext(Import_kindContext.class,0);
		}
		public Import_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_import_declaration; }
	}

	public final Import_declarationContext import_declaration() throws RecognitionException {
		Import_declarationContext _localctx = new Import_declarationContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_import_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1137);
				attributes();
				}
			}

			setState(1140);
			match(IMPORT);
			setState(1142);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				{
				setState(1141);
				import_kind();
				}
				break;
			}
			setState(1144);
			import_path();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Import_kindContext extends ParserRuleContext {
		public TerminalNode TYPEALIAS() { return getToken(Swift5Parser.TYPEALIAS, 0); }
		public TerminalNode STRUCT() { return getToken(Swift5Parser.STRUCT, 0); }
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public TerminalNode ENUM() { return getToken(Swift5Parser.ENUM, 0); }
		public TerminalNode PROTOCOL() { return getToken(Swift5Parser.PROTOCOL, 0); }
		public TerminalNode LET() { return getToken(Swift5Parser.LET, 0); }
		public TerminalNode VAR() { return getToken(Swift5Parser.VAR, 0); }
		public TerminalNode FUNC() { return getToken(Swift5Parser.FUNC, 0); }
		public Import_kindContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_import_kind; }
	}

	public final Import_kindContext import_kind() throws RecognitionException {
		Import_kindContext _localctx = new Import_kindContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_import_kind);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1146);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << TYPEALIAS))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Import_pathContext extends ParserRuleContext {
		public List<Import_path_identifierContext> import_path_identifier() {
			return getRuleContexts(Import_path_identifierContext.class);
		}
		public Import_path_identifierContext import_path_identifier(int i) {
			return getRuleContext(Import_path_identifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Import_pathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_import_path; }
	}

	public final Import_pathContext import_path() throws RecognitionException {
		Import_pathContext _localctx = new Import_pathContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_import_path);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1148);
			import_path_identifier();
			setState(1153);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1149);
					match(DOT);
					setState(1150);
					import_path_identifier();
					}
					} 
				}
				setState(1155);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Import_path_identifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Import_path_identifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_import_path_identifier; }
	}

	public final Import_path_identifierContext import_path_identifier() throws RecognitionException {
		Import_path_identifierContext _localctx = new Import_path_identifierContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_import_path_identifier);
		try {
			setState(1158);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AS:
			case ALPHA:
			case CATCH:
			case CLASS:
			case DEFAULT:
			case DO:
			case GUARD:
			case FOR:
			case IN:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case WHILE:
			case PROTOCOL:
			case GET:
			case SET:
			case WILL_SET:
			case DID_SET:
			case INDIRECT:
			case PREFIX:
			case INFIX:
			case LEFT:
			case RIGHT:
			case NONE:
			case PRECEDENCE_GROUP:
			case HIGHER_THAN:
			case LOWER_THAN:
			case ASSIGNMENT:
			case ASSOCIATIVITY:
			case POSTFIX:
			case OPERATOR:
			case OS:
			case ARCH:
			case SWIFT:
			case COMPILER:
			case CAN_IMPORT:
			case TARGET_ENVIRONMENT:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case WEAK:
			case UNOWNED:
			case SAFE:
			case UNSAFE:
			case MUTATING:
			case NONMUTATING:
			case RED:
			case BLUE:
			case GREEN:
			case RESOURCE_NAME:
			case SOME:
			case TYPE:
			case PRECEDENCE:
			case SELF:
			case SELF_BIG:
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case LINUX:
			case WINDOWS:
			case I386:
			case X86_64:
			case ARM:
			case ARM64:
			case SIMULATOR:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
			case FILE:
			case LINE:
			case GETTER:
			case SETTER:
			case Identifier:
			case BACKTICK:
				enterOuterAlt(_localctx, 1);
				{
				setState(1156);
				identifier();
				}
				break;
			case DOT:
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
			case Operator_head_other:
				enterOuterAlt(_localctx, 2);
				{
				setState(1157);
				operator();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Constant_declarationContext extends ParserRuleContext {
		public TerminalNode LET() { return getToken(Swift5Parser.LET, 0); }
		public Pattern_initializer_listContext pattern_initializer_list() {
			return getRuleContext(Pattern_initializer_listContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Declaration_modifiersContext declaration_modifiers() {
			return getRuleContext(Declaration_modifiersContext.class,0);
		}
		public Constant_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant_declaration; }
	}

	public final Constant_declarationContext constant_declaration() throws RecognitionException {
		Constant_declarationContext _localctx = new Constant_declarationContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_constant_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1160);
				attributes();
				}
			}

			setState(1164);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0)) {
				{
				setState(1163);
				declaration_modifiers();
				}
			}

			setState(1166);
			match(LET);
			setState(1167);
			pattern_initializer_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pattern_initializer_listContext extends ParserRuleContext {
		public List<Pattern_initializerContext> pattern_initializer() {
			return getRuleContexts(Pattern_initializerContext.class);
		}
		public Pattern_initializerContext pattern_initializer(int i) {
			return getRuleContext(Pattern_initializerContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Pattern_initializer_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pattern_initializer_list; }
	}

	public final Pattern_initializer_listContext pattern_initializer_list() throws RecognitionException {
		Pattern_initializer_listContext _localctx = new Pattern_initializer_listContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_pattern_initializer_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1169);
			pattern_initializer();
			setState(1174);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1170);
					match(COMMA);
					setState(1171);
					pattern_initializer();
					}
					} 
				}
				setState(1176);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pattern_initializerContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public Pattern_initializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pattern_initializer; }
	}

	public final Pattern_initializerContext pattern_initializer() throws RecognitionException {
		Pattern_initializerContext _localctx = new Pattern_initializerContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_pattern_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1177);
			pattern(0);
			setState(1179);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				{
				setState(1178);
				initializer();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public InitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer; }
	}

	public final InitializerContext initializer() throws RecognitionException {
		InitializerContext _localctx = new InitializerContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1181);
			match(EQUAL);
			setState(1182);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_declarationContext extends ParserRuleContext {
		public Variable_declaration_headContext variable_declaration_head() {
			return getRuleContext(Variable_declaration_headContext.class,0);
		}
		public Variable_nameContext variable_name() {
			return getRuleContext(Variable_nameContext.class,0);
		}
		public Pattern_initializer_listContext pattern_initializer_list() {
			return getRuleContext(Pattern_initializer_listContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public WillSet_didSet_blockContext willSet_didSet_block() {
			return getRuleContext(WillSet_didSet_blockContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Getter_setter_blockContext getter_setter_block() {
			return getRuleContext(Getter_setter_blockContext.class,0);
		}
		public Getter_setter_keyword_blockContext getter_setter_keyword_block() {
			return getRuleContext(Getter_setter_keyword_blockContext.class,0);
		}
		public Variable_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_declaration; }
	}

	public final Variable_declarationContext variable_declaration() throws RecognitionException {
		Variable_declarationContext _localctx = new Variable_declarationContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_variable_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1184);
			variable_declaration_head();
			setState(1201);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
			case 1:
				{
				setState(1185);
				variable_name();
				setState(1198);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case EQUAL:
					{
					setState(1186);
					initializer();
					setState(1187);
					willSet_didSet_block();
					}
					break;
				case COLON:
					{
					setState(1189);
					type_annotation();
					setState(1196);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
					case 1:
						{
						setState(1191);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==EQUAL) {
							{
							setState(1190);
							initializer();
							}
						}

						setState(1193);
						willSet_didSet_block();
						}
						break;
					case 2:
						{
						setState(1194);
						getter_setter_block();
						}
						break;
					case 3:
						{
						setState(1195);
						getter_setter_keyword_block();
						}
						break;
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 2:
				{
				setState(1200);
				pattern_initializer_list();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_declaration_headContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(Swift5Parser.VAR, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Declaration_modifiersContext declaration_modifiers() {
			return getRuleContext(Declaration_modifiersContext.class,0);
		}
		public Variable_declaration_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_declaration_head; }
	}

	public final Variable_declaration_headContext variable_declaration_head() throws RecognitionException {
		Variable_declaration_headContext _localctx = new Variable_declaration_headContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_variable_declaration_head);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1203);
				attributes();
				}
			}

			setState(1207);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0)) {
				{
				setState(1206);
				declaration_modifiers();
				}
			}

			setState(1209);
			match(VAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Variable_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_name; }
	}

	public final Variable_nameContext variable_name() throws RecognitionException {
		Variable_nameContext _localctx = new Variable_nameContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_variable_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1211);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Getter_setter_blockContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Getter_clauseContext getter_clause() {
			return getRuleContext(Getter_clauseContext.class,0);
		}
		public Setter_clauseContext setter_clause() {
			return getRuleContext(Setter_clauseContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Getter_setter_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getter_setter_block; }
	}

	public final Getter_setter_blockContext getter_setter_block() throws RecognitionException {
		Getter_setter_blockContext _localctx = new Getter_setter_blockContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_getter_setter_block);
		int _la;
		try {
			setState(1226);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1213);
				match(LCURLY);
				setState(1221);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
				case 1:
					{
					setState(1214);
					getter_clause();
					setState(1216);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 31)) & ~0x3f) == 0 && ((1L << (_la - 31)) & ((1L << (SET - 31)) | (1L << (MUTATING - 31)) | (1L << (NONMUTATING - 31)))) != 0) || _la==AT) {
						{
						setState(1215);
						setter_clause();
						}
					}

					}
					break;
				case 2:
					{
					setState(1218);
					setter_clause();
					setState(1219);
					getter_clause();
					}
					break;
				}
				setState(1223);
				match(RCURLY);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1225);
				code_block();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Getter_clauseContext extends ParserRuleContext {
		public TerminalNode GET() { return getToken(Swift5Parser.GET, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Mutation_modifierContext mutation_modifier() {
			return getRuleContext(Mutation_modifierContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Getter_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getter_clause; }
	}

	public final Getter_clauseContext getter_clause() throws RecognitionException {
		Getter_clauseContext _localctx = new Getter_clauseContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_getter_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1228);
				attributes();
				}
			}

			setState(1232);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MUTATING || _la==NONMUTATING) {
				{
				setState(1231);
				mutation_modifier();
				}
			}

			setState(1234);
			match(GET);
			setState(1236);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LCURLY) {
				{
				setState(1235);
				code_block();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Setter_clauseContext extends ParserRuleContext {
		public TerminalNode SET() { return getToken(Swift5Parser.SET, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Mutation_modifierContext mutation_modifier() {
			return getRuleContext(Mutation_modifierContext.class,0);
		}
		public Setter_nameContext setter_name() {
			return getRuleContext(Setter_nameContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Setter_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setter_clause; }
	}

	public final Setter_clauseContext setter_clause() throws RecognitionException {
		Setter_clauseContext _localctx = new Setter_clauseContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_setter_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1239);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1238);
				attributes();
				}
			}

			setState(1242);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MUTATING || _la==NONMUTATING) {
				{
				setState(1241);
				mutation_modifier();
				}
			}

			setState(1244);
			match(SET);
			setState(1246);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(1245);
				setter_name();
				}
			}

			setState(1249);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LCURLY) {
				{
				setState(1248);
				code_block();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Setter_nameContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Setter_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setter_name; }
	}

	public final Setter_nameContext setter_name() throws RecognitionException {
		Setter_nameContext _localctx = new Setter_nameContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_setter_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1251);
			match(LPAREN);
			setState(1252);
			identifier();
			setState(1253);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Getter_setter_keyword_blockContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Getter_keyword_clauseContext getter_keyword_clause() {
			return getRuleContext(Getter_keyword_clauseContext.class,0);
		}
		public Setter_keyword_clauseContext setter_keyword_clause() {
			return getRuleContext(Setter_keyword_clauseContext.class,0);
		}
		public Getter_setter_keyword_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getter_setter_keyword_block; }
	}

	public final Getter_setter_keyword_blockContext getter_setter_keyword_block() throws RecognitionException {
		Getter_setter_keyword_blockContext _localctx = new Getter_setter_keyword_blockContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_getter_setter_keyword_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1255);
			match(LCURLY);
			setState(1263);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				{
				setState(1256);
				getter_keyword_clause();
				setState(1258);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 31)) & ~0x3f) == 0 && ((1L << (_la - 31)) & ((1L << (SET - 31)) | (1L << (MUTATING - 31)) | (1L << (NONMUTATING - 31)))) != 0) || _la==AT) {
					{
					setState(1257);
					setter_keyword_clause();
					}
				}

				}
				break;
			case 2:
				{
				setState(1260);
				setter_keyword_clause();
				setState(1261);
				getter_keyword_clause();
				}
				break;
			}
			setState(1265);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Getter_keyword_clauseContext extends ParserRuleContext {
		public TerminalNode GET() { return getToken(Swift5Parser.GET, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Mutation_modifierContext mutation_modifier() {
			return getRuleContext(Mutation_modifierContext.class,0);
		}
		public Getter_keyword_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getter_keyword_clause; }
	}

	public final Getter_keyword_clauseContext getter_keyword_clause() throws RecognitionException {
		Getter_keyword_clauseContext _localctx = new Getter_keyword_clauseContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_getter_keyword_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1268);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1267);
				attributes();
				}
			}

			setState(1271);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MUTATING || _la==NONMUTATING) {
				{
				setState(1270);
				mutation_modifier();
				}
			}

			setState(1273);
			match(GET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Setter_keyword_clauseContext extends ParserRuleContext {
		public TerminalNode SET() { return getToken(Swift5Parser.SET, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Mutation_modifierContext mutation_modifier() {
			return getRuleContext(Mutation_modifierContext.class,0);
		}
		public Setter_keyword_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setter_keyword_clause; }
	}

	public final Setter_keyword_clauseContext setter_keyword_clause() throws RecognitionException {
		Setter_keyword_clauseContext _localctx = new Setter_keyword_clauseContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_setter_keyword_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1276);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1275);
				attributes();
				}
			}

			setState(1279);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MUTATING || _la==NONMUTATING) {
				{
				setState(1278);
				mutation_modifier();
				}
			}

			setState(1281);
			match(SET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WillSet_didSet_blockContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public WillSet_clauseContext willSet_clause() {
			return getRuleContext(WillSet_clauseContext.class,0);
		}
		public DidSet_clauseContext didSet_clause() {
			return getRuleContext(DidSet_clauseContext.class,0);
		}
		public WillSet_didSet_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_willSet_didSet_block; }
	}

	public final WillSet_didSet_blockContext willSet_didSet_block() throws RecognitionException {
		WillSet_didSet_blockContext _localctx = new WillSet_didSet_blockContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_willSet_didSet_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1283);
			match(LCURLY);
			setState(1292);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,103,_ctx) ) {
			case 1:
				{
				setState(1284);
				willSet_clause();
				setState(1286);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DID_SET || _la==AT) {
					{
					setState(1285);
					didSet_clause();
					}
				}

				}
				break;
			case 2:
				{
				setState(1288);
				didSet_clause();
				setState(1290);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==WILL_SET || _la==AT) {
					{
					setState(1289);
					willSet_clause();
					}
				}

				}
				break;
			}
			setState(1294);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WillSet_clauseContext extends ParserRuleContext {
		public TerminalNode WILL_SET() { return getToken(Swift5Parser.WILL_SET, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Setter_nameContext setter_name() {
			return getRuleContext(Setter_nameContext.class,0);
		}
		public WillSet_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_willSet_clause; }
	}

	public final WillSet_clauseContext willSet_clause() throws RecognitionException {
		WillSet_clauseContext _localctx = new WillSet_clauseContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_willSet_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1297);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1296);
				attributes();
				}
			}

			setState(1299);
			match(WILL_SET);
			setState(1301);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(1300);
				setter_name();
				}
			}

			setState(1303);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DidSet_clauseContext extends ParserRuleContext {
		public TerminalNode DID_SET() { return getToken(Swift5Parser.DID_SET, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Setter_nameContext setter_name() {
			return getRuleContext(Setter_nameContext.class,0);
		}
		public DidSet_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_didSet_clause; }
	}

	public final DidSet_clauseContext didSet_clause() throws RecognitionException {
		DidSet_clauseContext _localctx = new DidSet_clauseContext(_ctx, getState());
		enterRule(_localctx, 204, RULE_didSet_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1306);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1305);
				attributes();
				}
			}

			setState(1308);
			match(DID_SET);
			setState(1310);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(1309);
				setter_name();
				}
			}

			setState(1312);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Typealias_declarationContext extends ParserRuleContext {
		public TerminalNode TYPEALIAS() { return getToken(Swift5Parser.TYPEALIAS, 0); }
		public Typealias_nameContext typealias_name() {
			return getRuleContext(Typealias_nameContext.class,0);
		}
		public Typealias_assignmentContext typealias_assignment() {
			return getRuleContext(Typealias_assignmentContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Typealias_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typealias_declaration; }
	}

	public final Typealias_declarationContext typealias_declaration() throws RecognitionException {
		Typealias_declarationContext _localctx = new Typealias_declarationContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_typealias_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1315);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1314);
				attributes();
				}
			}

			setState(1318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1317);
				access_level_modifier();
				}
			}

			setState(1320);
			match(TYPEALIAS);
			setState(1321);
			typealias_name();
			setState(1323);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1322);
				generic_parameter_clause();
				}
			}

			setState(1325);
			typealias_assignment();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Typealias_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Typealias_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typealias_name; }
	}

	public final Typealias_nameContext typealias_name() throws RecognitionException {
		Typealias_nameContext _localctx = new Typealias_nameContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_typealias_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1327);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Typealias_assignmentContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Typealias_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typealias_assignment; }
	}

	public final Typealias_assignmentContext typealias_assignment() throws RecognitionException {
		Typealias_assignmentContext _localctx = new Typealias_assignmentContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_typealias_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1329);
			match(EQUAL);
			setState(1330);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_declarationContext extends ParserRuleContext {
		public Function_headContext function_head() {
			return getRuleContext(Function_headContext.class,0);
		}
		public Function_nameContext function_name() {
			return getRuleContext(Function_nameContext.class,0);
		}
		public Function_signatureContext function_signature() {
			return getRuleContext(Function_signatureContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Function_bodyContext function_body() {
			return getRuleContext(Function_bodyContext.class,0);
		}
		public Function_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_declaration; }
	}

	public final Function_declarationContext function_declaration() throws RecognitionException {
		Function_declarationContext _localctx = new Function_declarationContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_function_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1332);
			function_head();
			setState(1333);
			function_name();
			setState(1335);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1334);
				generic_parameter_clause();
				}
			}

			setState(1337);
			function_signature();
			setState(1339);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,112,_ctx) ) {
			case 1:
				{
				setState(1338);
				generic_where_clause();
				}
				break;
			}
			setState(1342);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,113,_ctx) ) {
			case 1:
				{
				setState(1341);
				function_body();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_headContext extends ParserRuleContext {
		public TerminalNode FUNC() { return getToken(Swift5Parser.FUNC, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Declaration_modifiersContext declaration_modifiers() {
			return getRuleContext(Declaration_modifiersContext.class,0);
		}
		public Function_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_head; }
	}

	public final Function_headContext function_head() throws RecognitionException {
		Function_headContext _localctx = new Function_headContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_function_head);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1345);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1344);
				attributes();
				}
			}

			setState(1348);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0)) {
				{
				setState(1347);
				declaration_modifiers();
				}
			}

			setState(1350);
			match(FUNC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Function_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_name; }
	}

	public final Function_nameContext function_name() throws RecognitionException {
		Function_nameContext _localctx = new Function_nameContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_function_name);
		try {
			setState(1354);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AS:
			case ALPHA:
			case CATCH:
			case CLASS:
			case DEFAULT:
			case DO:
			case GUARD:
			case FOR:
			case IN:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case WHILE:
			case PROTOCOL:
			case GET:
			case SET:
			case WILL_SET:
			case DID_SET:
			case INDIRECT:
			case PREFIX:
			case INFIX:
			case LEFT:
			case RIGHT:
			case NONE:
			case PRECEDENCE_GROUP:
			case HIGHER_THAN:
			case LOWER_THAN:
			case ASSIGNMENT:
			case ASSOCIATIVITY:
			case POSTFIX:
			case OPERATOR:
			case OS:
			case ARCH:
			case SWIFT:
			case COMPILER:
			case CAN_IMPORT:
			case TARGET_ENVIRONMENT:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case WEAK:
			case UNOWNED:
			case SAFE:
			case UNSAFE:
			case MUTATING:
			case NONMUTATING:
			case RED:
			case BLUE:
			case GREEN:
			case RESOURCE_NAME:
			case SOME:
			case TYPE:
			case PRECEDENCE:
			case SELF:
			case SELF_BIG:
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case LINUX:
			case WINDOWS:
			case I386:
			case X86_64:
			case ARM:
			case ARM64:
			case SIMULATOR:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
			case FILE:
			case LINE:
			case GETTER:
			case SETTER:
			case Identifier:
			case BACKTICK:
				enterOuterAlt(_localctx, 1);
				{
				setState(1352);
				identifier();
				}
				break;
			case DOT:
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
			case Operator_head_other:
				enterOuterAlt(_localctx, 2);
				{
				setState(1353);
				operator();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_signatureContext extends ParserRuleContext {
		public Parameter_clauseContext parameter_clause() {
			return getRuleContext(Parameter_clauseContext.class,0);
		}
		public TerminalNode RETHROWS() { return getToken(Swift5Parser.RETHROWS, 0); }
		public Function_resultContext function_result() {
			return getRuleContext(Function_resultContext.class,0);
		}
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public Function_signatureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_signature; }
	}

	public final Function_signatureContext function_signature() throws RecognitionException {
		Function_signatureContext _localctx = new Function_signatureContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_function_signature);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1356);
			parameter_clause();
			setState(1361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
			case 1:
				{
				setState(1358);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,117,_ctx) ) {
				case 1:
					{
					setState(1357);
					match(THROWS);
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1360);
				match(RETHROWS);
				}
				break;
			}
			setState(1364);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
			case 1:
				{
				setState(1363);
				function_result();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_resultContext extends ParserRuleContext {
		public Arrow_operatorContext arrow_operator() {
			return getRuleContext(Arrow_operatorContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Function_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_result; }
	}

	public final Function_resultContext function_result() throws RecognitionException {
		Function_resultContext _localctx = new Function_resultContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_function_result);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1366);
			arrow_operator();
			setState(1368);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				{
				setState(1367);
				attributes();
				}
				break;
			}
			setState(1370);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_bodyContext extends ParserRuleContext {
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Function_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_body; }
	}

	public final Function_bodyContext function_body() throws RecognitionException {
		Function_bodyContext _localctx = new Function_bodyContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_function_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1372);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parameter_clauseContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public Parameter_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_clause; }
	}

	public final Parameter_clauseContext parameter_clause() throws RecognitionException {
		Parameter_clauseContext _localctx = new Parameter_clauseContext(_ctx, getState());
		enterRule(_localctx, 224, RULE_parameter_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1374);
			match(LPAREN);
			setState(1376);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (AT - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
				{
				setState(1375);
				parameter_list();
				}
			}

			setState(1378);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parameter_listContext extends ParserRuleContext {
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_list; }
	}

	public final Parameter_listContext parameter_list() throws RecognitionException {
		Parameter_listContext _localctx = new Parameter_listContext(_ctx, getState());
		enterRule(_localctx, 226, RULE_parameter_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1380);
			parameter();
			setState(1385);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1381);
				match(COMMA);
				setState(1382);
				parameter();
				}
				}
				setState(1387);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterContext extends ParserRuleContext {
		public Local_parameter_nameContext local_parameter_name() {
			return getRuleContext(Local_parameter_nameContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Range_operatorContext range_operator() {
			return getRuleContext(Range_operatorContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public External_parameter_nameContext external_parameter_name() {
			return getRuleContext(External_parameter_nameContext.class,0);
		}
		public Default_argument_clauseContext default_argument_clause() {
			return getRuleContext(Default_argument_clauseContext.class,0);
		}
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_parameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1389);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1388);
				attributes();
				}
			}

			setState(1392);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				{
				setState(1391);
				external_parameter_name();
				}
				break;
			}
			setState(1394);
			local_parameter_name();
			setState(1395);
			type_annotation();
			setState(1400);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
			case 1:
				{
				setState(1397);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==EQUAL) {
					{
					setState(1396);
					default_argument_clause();
					}
				}

				}
				break;
			case 2:
				{
				setState(1399);
				range_operator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class External_parameter_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public External_parameter_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_external_parameter_name; }
	}

	public final External_parameter_nameContext external_parameter_name() throws RecognitionException {
		External_parameter_nameContext _localctx = new External_parameter_nameContext(_ctx, getState());
		enterRule(_localctx, 230, RULE_external_parameter_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1402);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Local_parameter_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Local_parameter_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_local_parameter_name; }
	}

	public final Local_parameter_nameContext local_parameter_name() throws RecognitionException {
		Local_parameter_nameContext _localctx = new Local_parameter_nameContext(_ctx, getState());
		enterRule(_localctx, 232, RULE_local_parameter_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1404);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Default_argument_clauseContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Default_argument_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_default_argument_clause; }
	}

	public final Default_argument_clauseContext default_argument_clause() throws RecognitionException {
		Default_argument_clauseContext _localctx = new Default_argument_clauseContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_default_argument_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1406);
			match(EQUAL);
			setState(1407);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_declarationContext extends ParserRuleContext {
		public Union_style_enumContext union_style_enum() {
			return getRuleContext(Union_style_enumContext.class,0);
		}
		public Raw_value_style_enumContext raw_value_style_enum() {
			return getRuleContext(Raw_value_style_enumContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Enum_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_declaration; }
	}

	public final Enum_declarationContext enum_declaration() throws RecognitionException {
		Enum_declarationContext _localctx = new Enum_declarationContext(_ctx, getState());
		enterRule(_localctx, 236, RULE_enum_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1410);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1409);
				attributes();
				}
			}

			setState(1413);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1412);
				access_level_modifier();
				}
			}

			setState(1417);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				{
				setState(1415);
				union_style_enum();
				}
				break;
			case 2:
				{
				setState(1416);
				raw_value_style_enum();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enumContext extends ParserRuleContext {
		public TerminalNode ENUM() { return getToken(Swift5Parser.ENUM, 0); }
		public Enum_nameContext enum_name() {
			return getRuleContext(Enum_nameContext.class,0);
		}
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public TerminalNode INDIRECT() { return getToken(Swift5Parser.INDIRECT, 0); }
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Union_style_enum_membersContext union_style_enum_members() {
			return getRuleContext(Union_style_enum_membersContext.class,0);
		}
		public Union_style_enumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum; }
	}

	public final Union_style_enumContext union_style_enum() throws RecognitionException {
		Union_style_enumContext _localctx = new Union_style_enumContext(_ctx, getState());
		enterRule(_localctx, 238, RULE_union_style_enum);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1420);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INDIRECT) {
				{
				setState(1419);
				match(INDIRECT);
				}
			}

			setState(1422);
			match(ENUM);
			setState(1423);
			enum_name();
			setState(1425);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1424);
				generic_parameter_clause();
				}
			}

			setState(1428);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1427);
				type_inheritance_clause();
				}
			}

			setState(1431);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1430);
				generic_where_clause();
				}
			}

			setState(1433);
			match(LCURLY);
			setState(1435);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CASE) | (1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT) {
				{
				setState(1434);
				union_style_enum_members();
				}
			}

			setState(1437);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enum_membersContext extends ParserRuleContext {
		public List<Union_style_enum_memberContext> union_style_enum_member() {
			return getRuleContexts(Union_style_enum_memberContext.class);
		}
		public Union_style_enum_memberContext union_style_enum_member(int i) {
			return getRuleContext(Union_style_enum_memberContext.class,i);
		}
		public Union_style_enum_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum_members; }
	}

	public final Union_style_enum_membersContext union_style_enum_members() throws RecognitionException {
		Union_style_enum_membersContext _localctx = new Union_style_enum_membersContext(_ctx, getState());
		enterRule(_localctx, 240, RULE_union_style_enum_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1440); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1439);
				union_style_enum_member();
				}
				}
				setState(1442); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CASE) | (1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enum_memberContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Union_style_enum_case_clauseContext union_style_enum_case_clause() {
			return getRuleContext(Union_style_enum_case_clauseContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Union_style_enum_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum_member; }
	}

	public final Union_style_enum_memberContext union_style_enum_member() throws RecognitionException {
		Union_style_enum_memberContext _localctx = new Union_style_enum_memberContext(_ctx, getState());
		enterRule(_localctx, 242, RULE_union_style_enum_member);
		try {
			setState(1447);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1444);
				declaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1445);
				union_style_enum_case_clause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1446);
				compiler_control_statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enum_case_clauseContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public Union_style_enum_case_listContext union_style_enum_case_list() {
			return getRuleContext(Union_style_enum_case_listContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public TerminalNode INDIRECT() { return getToken(Swift5Parser.INDIRECT, 0); }
		public Union_style_enum_case_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum_case_clause; }
	}

	public final Union_style_enum_case_clauseContext union_style_enum_case_clause() throws RecognitionException {
		Union_style_enum_case_clauseContext _localctx = new Union_style_enum_case_clauseContext(_ctx, getState());
		enterRule(_localctx, 244, RULE_union_style_enum_case_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1449);
				attributes();
				}
			}

			setState(1453);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INDIRECT) {
				{
				setState(1452);
				match(INDIRECT);
				}
			}

			setState(1455);
			match(CASE);
			setState(1456);
			union_style_enum_case_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enum_case_listContext extends ParserRuleContext {
		public List<Union_style_enum_caseContext> union_style_enum_case() {
			return getRuleContexts(Union_style_enum_caseContext.class);
		}
		public Union_style_enum_caseContext union_style_enum_case(int i) {
			return getRuleContext(Union_style_enum_caseContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Union_style_enum_case_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum_case_list; }
	}

	public final Union_style_enum_case_listContext union_style_enum_case_list() throws RecognitionException {
		Union_style_enum_case_listContext _localctx = new Union_style_enum_case_listContext(_ctx, getState());
		enterRule(_localctx, 246, RULE_union_style_enum_case_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1458);
			union_style_enum_case();
			setState(1463);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1459);
				match(COMMA);
				setState(1460);
				union_style_enum_case();
				}
				}
				setState(1465);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_style_enum_caseContext extends ParserRuleContext {
		public Opaque_typeContext opaque_type() {
			return getRuleContext(Opaque_typeContext.class,0);
		}
		public Enum_case_nameContext enum_case_name() {
			return getRuleContext(Enum_case_nameContext.class,0);
		}
		public Tuple_typeContext tuple_type() {
			return getRuleContext(Tuple_typeContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Union_style_enum_caseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_style_enum_case; }
	}

	public final Union_style_enum_caseContext union_style_enum_case() throws RecognitionException {
		Union_style_enum_caseContext _localctx = new Union_style_enum_caseContext(_ctx, getState());
		enterRule(_localctx, 248, RULE_union_style_enum_case);
		try {
			setState(1475);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1466);
				opaque_type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1467);
				enum_case_name();
				setState(1473);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
				case 1:
					{
					setState(1468);
					tuple_type();
					}
					break;
				case 2:
					{
					setState(1469);
					match(LPAREN);
					setState(1470);
					type(0);
					setState(1471);
					match(RPAREN);
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Enum_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_name; }
	}

	public final Enum_nameContext enum_name() throws RecognitionException {
		Enum_nameContext _localctx = new Enum_nameContext(_ctx, getState());
		enterRule(_localctx, 250, RULE_enum_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1477);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_case_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Enum_case_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_case_name; }
	}

	public final Enum_case_nameContext enum_case_name() throws RecognitionException {
		Enum_case_nameContext _localctx = new Enum_case_nameContext(_ctx, getState());
		enterRule(_localctx, 252, RULE_enum_case_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1479);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enumContext extends ParserRuleContext {
		public TerminalNode ENUM() { return getToken(Swift5Parser.ENUM, 0); }
		public Enum_nameContext enum_name() {
			return getRuleContext(Enum_nameContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public Raw_value_style_enum_membersContext raw_value_style_enum_members() {
			return getRuleContext(Raw_value_style_enum_membersContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Raw_value_style_enumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum; }
	}

	public final Raw_value_style_enumContext raw_value_style_enum() throws RecognitionException {
		Raw_value_style_enumContext _localctx = new Raw_value_style_enumContext(_ctx, getState());
		enterRule(_localctx, 254, RULE_raw_value_style_enum);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1481);
			match(ENUM);
			setState(1482);
			enum_name();
			setState(1484);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1483);
				generic_parameter_clause();
				}
			}

			setState(1486);
			type_inheritance_clause();
			setState(1488);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1487);
				generic_where_clause();
				}
			}

			setState(1490);
			match(LCURLY);
			setState(1491);
			raw_value_style_enum_members();
			setState(1492);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enum_membersContext extends ParserRuleContext {
		public List<Raw_value_style_enum_memberContext> raw_value_style_enum_member() {
			return getRuleContexts(Raw_value_style_enum_memberContext.class);
		}
		public Raw_value_style_enum_memberContext raw_value_style_enum_member(int i) {
			return getRuleContext(Raw_value_style_enum_memberContext.class,i);
		}
		public Raw_value_style_enum_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum_members; }
	}

	public final Raw_value_style_enum_membersContext raw_value_style_enum_members() throws RecognitionException {
		Raw_value_style_enum_membersContext _localctx = new Raw_value_style_enum_membersContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_raw_value_style_enum_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1495); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1494);
				raw_value_style_enum_member();
				}
				}
				setState(1497); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CASE) | (1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enum_memberContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Raw_value_style_enum_case_clauseContext raw_value_style_enum_case_clause() {
			return getRuleContext(Raw_value_style_enum_case_clauseContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Raw_value_style_enum_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum_member; }
	}

	public final Raw_value_style_enum_memberContext raw_value_style_enum_member() throws RecognitionException {
		Raw_value_style_enum_memberContext _localctx = new Raw_value_style_enum_memberContext(_ctx, getState());
		enterRule(_localctx, 258, RULE_raw_value_style_enum_member);
		try {
			setState(1502);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1499);
				declaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1500);
				raw_value_style_enum_case_clause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1501);
				compiler_control_statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enum_case_clauseContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public Raw_value_style_enum_case_listContext raw_value_style_enum_case_list() {
			return getRuleContext(Raw_value_style_enum_case_listContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Raw_value_style_enum_case_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum_case_clause; }
	}

	public final Raw_value_style_enum_case_clauseContext raw_value_style_enum_case_clause() throws RecognitionException {
		Raw_value_style_enum_case_clauseContext _localctx = new Raw_value_style_enum_case_clauseContext(_ctx, getState());
		enterRule(_localctx, 260, RULE_raw_value_style_enum_case_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1505);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1504);
				attributes();
				}
			}

			setState(1507);
			match(CASE);
			setState(1508);
			raw_value_style_enum_case_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enum_case_listContext extends ParserRuleContext {
		public List<Raw_value_style_enum_caseContext> raw_value_style_enum_case() {
			return getRuleContexts(Raw_value_style_enum_caseContext.class);
		}
		public Raw_value_style_enum_caseContext raw_value_style_enum_case(int i) {
			return getRuleContext(Raw_value_style_enum_caseContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Raw_value_style_enum_case_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum_case_list; }
	}

	public final Raw_value_style_enum_case_listContext raw_value_style_enum_case_list() throws RecognitionException {
		Raw_value_style_enum_case_listContext _localctx = new Raw_value_style_enum_case_listContext(_ctx, getState());
		enterRule(_localctx, 262, RULE_raw_value_style_enum_case_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1510);
			raw_value_style_enum_case();
			setState(1515);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1511);
				match(COMMA);
				setState(1512);
				raw_value_style_enum_case();
				}
				}
				setState(1517);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_style_enum_caseContext extends ParserRuleContext {
		public Enum_case_nameContext enum_case_name() {
			return getRuleContext(Enum_case_nameContext.class,0);
		}
		public Raw_value_assignmentContext raw_value_assignment() {
			return getRuleContext(Raw_value_assignmentContext.class,0);
		}
		public Raw_value_style_enum_caseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_style_enum_case; }
	}

	public final Raw_value_style_enum_caseContext raw_value_style_enum_case() throws RecognitionException {
		Raw_value_style_enum_caseContext _localctx = new Raw_value_style_enum_caseContext(_ctx, getState());
		enterRule(_localctx, 264, RULE_raw_value_style_enum_case);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1518);
			enum_case_name();
			setState(1520);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQUAL) {
				{
				setState(1519);
				raw_value_assignment();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_assignmentContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public Raw_value_literalContext raw_value_literal() {
			return getRuleContext(Raw_value_literalContext.class,0);
		}
		public Raw_value_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_assignment; }
	}

	public final Raw_value_assignmentContext raw_value_assignment() throws RecognitionException {
		Raw_value_assignmentContext _localctx = new Raw_value_assignmentContext(_ctx, getState());
		enterRule(_localctx, 266, RULE_raw_value_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1522);
			match(EQUAL);
			setState(1523);
			raw_value_literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Raw_value_literalContext extends ParserRuleContext {
		public Numeric_literalContext numeric_literal() {
			return getRuleContext(Numeric_literalContext.class,0);
		}
		public Static_string_literalContext static_string_literal() {
			return getRuleContext(Static_string_literalContext.class,0);
		}
		public Boolean_literalContext boolean_literal() {
			return getRuleContext(Boolean_literalContext.class,0);
		}
		public Raw_value_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_raw_value_literal; }
	}

	public final Raw_value_literalContext raw_value_literal() throws RecognitionException {
		Raw_value_literalContext _localctx = new Raw_value_literalContext(_ctx, getState());
		enterRule(_localctx, 268, RULE_raw_value_literal);
		try {
			setState(1528);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1525);
				numeric_literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1526);
				static_string_literal();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1527);
				boolean_literal();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_declarationContext extends ParserRuleContext {
		public TerminalNode STRUCT() { return getToken(Swift5Parser.STRUCT, 0); }
		public Struct_nameContext struct_name() {
			return getRuleContext(Struct_nameContext.class,0);
		}
		public Struct_bodyContext struct_body() {
			return getRuleContext(Struct_bodyContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Struct_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_declaration; }
	}

	public final Struct_declarationContext struct_declaration() throws RecognitionException {
		Struct_declarationContext _localctx = new Struct_declarationContext(_ctx, getState());
		enterRule(_localctx, 270, RULE_struct_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1531);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1530);
				attributes();
				}
			}

			setState(1534);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1533);
				access_level_modifier();
				}
			}

			setState(1536);
			match(STRUCT);
			setState(1537);
			struct_name();
			setState(1539);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1538);
				generic_parameter_clause();
				}
			}

			setState(1542);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1541);
				type_inheritance_clause();
				}
			}

			setState(1545);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1544);
				generic_where_clause();
				}
			}

			setState(1547);
			struct_body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Struct_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_name; }
	}

	public final Struct_nameContext struct_name() throws RecognitionException {
		Struct_nameContext _localctx = new Struct_nameContext(_ctx, getState());
		enterRule(_localctx, 272, RULE_struct_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1549);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_bodyContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public Struct_membersContext struct_members() {
			return getRuleContext(Struct_membersContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Struct_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_body; }
	}

	public final Struct_bodyContext struct_body() throws RecognitionException {
		Struct_bodyContext _localctx = new Struct_bodyContext(_ctx, getState());
		enterRule(_localctx, 274, RULE_struct_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1551);
			match(LCURLY);
			setState(1552);
			struct_members();
			setState(1553);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_membersContext extends ParserRuleContext {
		public List<Struct_memberContext> struct_member() {
			return getRuleContexts(Struct_memberContext.class);
		}
		public Struct_memberContext struct_member(int i) {
			return getRuleContext(Struct_memberContext.class,i);
		}
		public Struct_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_members; }
	}

	public final Struct_membersContext struct_members() throws RecognitionException {
		Struct_membersContext _localctx = new Struct_membersContext(_ctx, getState());
		enterRule(_localctx, 276, RULE_struct_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1558);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT) {
				{
				{
				setState(1555);
				struct_member();
				}
				}
				setState(1560);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_memberContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Struct_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_member; }
	}

	public final Struct_memberContext struct_member() throws RecognitionException {
		Struct_memberContext _localctx = new Struct_memberContext(_ctx, getState());
		enterRule(_localctx, 278, RULE_struct_member);
		try {
			setState(1563);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
			case ENUM:
			case FUNC:
			case IMPORT:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case LET:
			case VAR:
			case PROTOCOL:
			case STRUCT:
			case INDIRECT:
			case INIT:
			case DEINIT:
			case EXTENSION:
			case SUBSCRIPT:
			case PREFIX:
			case INFIX:
			case PRECEDENCE_GROUP:
			case POSTFIX:
			case TYPEALIAS:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case STATIC:
			case WEAK:
			case UNOWNED:
			case MUTATING:
			case NONMUTATING:
			case FILE_PRIVATE:
			case AT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1561);
				declaration();
				}
				break;
			case SOURCE_LOCATION:
			case ERROR:
			case WARNING:
			case HASH_IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(1562);
				compiler_control_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Class_declarationContext extends ParserRuleContext {
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public Class_nameContext class_name() {
			return getRuleContext(Class_nameContext.class,0);
		}
		public Class_bodyContext class_body() {
			return getRuleContext(Class_bodyContext.class,0);
		}
		public TerminalNode FINAL() { return getToken(Swift5Parser.FINAL, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Class_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_declaration; }
	}

	public final Class_declarationContext class_declaration() throws RecognitionException {
		Class_declarationContext _localctx = new Class_declarationContext(_ctx, getState());
		enterRule(_localctx, 280, RULE_class_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1566);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1565);
				attributes();
				}
			}

			setState(1578);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,161,_ctx) ) {
			case 1:
				{
				setState(1569);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
					{
					setState(1568);
					access_level_modifier();
					}
				}

				setState(1572);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==FINAL) {
					{
					setState(1571);
					match(FINAL);
					}
				}

				}
				break;
			case 2:
				{
				setState(1574);
				match(FINAL);
				setState(1576);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
					{
					setState(1575);
					access_level_modifier();
					}
				}

				}
				break;
			}
			setState(1580);
			match(CLASS);
			setState(1581);
			class_name();
			setState(1583);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1582);
				generic_parameter_clause();
				}
			}

			setState(1586);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1585);
				type_inheritance_clause();
				}
			}

			setState(1589);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1588);
				generic_where_clause();
				}
			}

			setState(1591);
			class_body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Class_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Class_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_name; }
	}

	public final Class_nameContext class_name() throws RecognitionException {
		Class_nameContext _localctx = new Class_nameContext(_ctx, getState());
		enterRule(_localctx, 282, RULE_class_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1593);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Class_bodyContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public Class_membersContext class_members() {
			return getRuleContext(Class_membersContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Class_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_body; }
	}

	public final Class_bodyContext class_body() throws RecognitionException {
		Class_bodyContext _localctx = new Class_bodyContext(_ctx, getState());
		enterRule(_localctx, 284, RULE_class_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1595);
			match(LCURLY);
			setState(1596);
			class_members();
			setState(1597);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Class_membersContext extends ParserRuleContext {
		public List<Class_memberContext> class_member() {
			return getRuleContexts(Class_memberContext.class);
		}
		public Class_memberContext class_member(int i) {
			return getRuleContext(Class_memberContext.class,i);
		}
		public Class_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_members; }
	}

	public final Class_membersContext class_members() throws RecognitionException {
		Class_membersContext _localctx = new Class_membersContext(_ctx, getState());
		enterRule(_localctx, 286, RULE_class_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1602);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT) {
				{
				{
				setState(1599);
				class_member();
				}
				}
				setState(1604);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Class_memberContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Class_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_member; }
	}

	public final Class_memberContext class_member() throws RecognitionException {
		Class_memberContext _localctx = new Class_memberContext(_ctx, getState());
		enterRule(_localctx, 288, RULE_class_member);
		try {
			setState(1607);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
			case ENUM:
			case FUNC:
			case IMPORT:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case LET:
			case VAR:
			case PROTOCOL:
			case STRUCT:
			case INDIRECT:
			case INIT:
			case DEINIT:
			case EXTENSION:
			case SUBSCRIPT:
			case PREFIX:
			case INFIX:
			case PRECEDENCE_GROUP:
			case POSTFIX:
			case TYPEALIAS:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case STATIC:
			case WEAK:
			case UNOWNED:
			case MUTATING:
			case NONMUTATING:
			case FILE_PRIVATE:
			case AT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1605);
				declaration();
				}
				break;
			case SOURCE_LOCATION:
			case ERROR:
			case WARNING:
			case HASH_IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(1606);
				compiler_control_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_declarationContext extends ParserRuleContext {
		public TerminalNode PROTOCOL() { return getToken(Swift5Parser.PROTOCOL, 0); }
		public Protocol_nameContext protocol_name() {
			return getRuleContext(Protocol_nameContext.class,0);
		}
		public Protocol_bodyContext protocol_body() {
			return getRuleContext(Protocol_bodyContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Protocol_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_declaration; }
	}

	public final Protocol_declarationContext protocol_declaration() throws RecognitionException {
		Protocol_declarationContext _localctx = new Protocol_declarationContext(_ctx, getState());
		enterRule(_localctx, 290, RULE_protocol_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1610);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1609);
				attributes();
				}
			}

			setState(1613);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1612);
				access_level_modifier();
				}
			}

			setState(1615);
			match(PROTOCOL);
			setState(1616);
			protocol_name();
			setState(1620);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
			case 1:
				{
				setState(1617);
				match(COLON);
				setState(1618);
				match(CLASS);
				}
				break;
			case 2:
				{
				setState(1619);
				type_inheritance_clause();
				}
				break;
			}
			setState(1623);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1622);
				generic_where_clause();
				}
			}

			setState(1625);
			protocol_body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Protocol_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_name; }
	}

	public final Protocol_nameContext protocol_name() throws RecognitionException {
		Protocol_nameContext _localctx = new Protocol_nameContext(_ctx, getState());
		enterRule(_localctx, 292, RULE_protocol_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1627);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_bodyContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public Protocol_membersContext protocol_members() {
			return getRuleContext(Protocol_membersContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Protocol_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_body; }
	}

	public final Protocol_bodyContext protocol_body() throws RecognitionException {
		Protocol_bodyContext _localctx = new Protocol_bodyContext(_ctx, getState());
		enterRule(_localctx, 294, RULE_protocol_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1629);
			match(LCURLY);
			setState(1630);
			protocol_members();
			setState(1631);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_membersContext extends ParserRuleContext {
		public List<Protocol_memberContext> protocol_member() {
			return getRuleContexts(Protocol_memberContext.class);
		}
		public Protocol_memberContext protocol_member(int i) {
			return getRuleContext(Protocol_memberContext.class,i);
		}
		public Protocol_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_members; }
	}

	public final Protocol_membersContext protocol_members() throws RecognitionException {
		Protocol_membersContext _localctx = new Protocol_membersContext(_ctx, getState());
		enterRule(_localctx, 296, RULE_protocol_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1636);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << FUNC) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << VAR) | (1L << INIT) | (1L << ASSOCIATED_TYPE) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT) {
				{
				{
				setState(1633);
				protocol_member();
				}
				}
				setState(1638);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_memberContext extends ParserRuleContext {
		public Protocol_member_declarationContext protocol_member_declaration() {
			return getRuleContext(Protocol_member_declarationContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Protocol_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_member; }
	}

	public final Protocol_memberContext protocol_member() throws RecognitionException {
		Protocol_memberContext _localctx = new Protocol_memberContext(_ctx, getState());
		enterRule(_localctx, 298, RULE_protocol_member);
		try {
			setState(1641);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
			case FUNC:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case VAR:
			case INIT:
			case ASSOCIATED_TYPE:
			case SUBSCRIPT:
			case PREFIX:
			case INFIX:
			case POSTFIX:
			case TYPEALIAS:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case STATIC:
			case WEAK:
			case UNOWNED:
			case MUTATING:
			case NONMUTATING:
			case FILE_PRIVATE:
			case AT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1639);
				protocol_member_declaration();
				}
				break;
			case SOURCE_LOCATION:
			case ERROR:
			case WARNING:
			case HASH_IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(1640);
				compiler_control_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_member_declarationContext extends ParserRuleContext {
		public Protocol_property_declarationContext protocol_property_declaration() {
			return getRuleContext(Protocol_property_declarationContext.class,0);
		}
		public Protocol_method_declarationContext protocol_method_declaration() {
			return getRuleContext(Protocol_method_declarationContext.class,0);
		}
		public Protocol_initializer_declarationContext protocol_initializer_declaration() {
			return getRuleContext(Protocol_initializer_declarationContext.class,0);
		}
		public Protocol_subscript_declarationContext protocol_subscript_declaration() {
			return getRuleContext(Protocol_subscript_declarationContext.class,0);
		}
		public Protocol_associated_type_declarationContext protocol_associated_type_declaration() {
			return getRuleContext(Protocol_associated_type_declarationContext.class,0);
		}
		public Typealias_declarationContext typealias_declaration() {
			return getRuleContext(Typealias_declarationContext.class,0);
		}
		public Protocol_member_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_member_declaration; }
	}

	public final Protocol_member_declarationContext protocol_member_declaration() throws RecognitionException {
		Protocol_member_declarationContext _localctx = new Protocol_member_declarationContext(_ctx, getState());
		enterRule(_localctx, 300, RULE_protocol_member_declaration);
		try {
			setState(1649);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,173,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1643);
				protocol_property_declaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1644);
				protocol_method_declaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1645);
				protocol_initializer_declaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1646);
				protocol_subscript_declaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1647);
				protocol_associated_type_declaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1648);
				typealias_declaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_property_declarationContext extends ParserRuleContext {
		public Variable_declaration_headContext variable_declaration_head() {
			return getRuleContext(Variable_declaration_headContext.class,0);
		}
		public Variable_nameContext variable_name() {
			return getRuleContext(Variable_nameContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Getter_setter_keyword_blockContext getter_setter_keyword_block() {
			return getRuleContext(Getter_setter_keyword_blockContext.class,0);
		}
		public Protocol_property_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_property_declaration; }
	}

	public final Protocol_property_declarationContext protocol_property_declaration() throws RecognitionException {
		Protocol_property_declarationContext _localctx = new Protocol_property_declarationContext(_ctx, getState());
		enterRule(_localctx, 302, RULE_protocol_property_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1651);
			variable_declaration_head();
			setState(1652);
			variable_name();
			setState(1653);
			type_annotation();
			setState(1654);
			getter_setter_keyword_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_method_declarationContext extends ParserRuleContext {
		public Function_headContext function_head() {
			return getRuleContext(Function_headContext.class,0);
		}
		public Function_nameContext function_name() {
			return getRuleContext(Function_nameContext.class,0);
		}
		public Function_signatureContext function_signature() {
			return getRuleContext(Function_signatureContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Protocol_method_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_method_declaration; }
	}

	public final Protocol_method_declarationContext protocol_method_declaration() throws RecognitionException {
		Protocol_method_declarationContext _localctx = new Protocol_method_declarationContext(_ctx, getState());
		enterRule(_localctx, 304, RULE_protocol_method_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1656);
			function_head();
			setState(1657);
			function_name();
			setState(1659);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1658);
				generic_parameter_clause();
				}
			}

			setState(1661);
			function_signature();
			setState(1663);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1662);
				generic_where_clause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_initializer_declarationContext extends ParserRuleContext {
		public Initializer_headContext initializer_head() {
			return getRuleContext(Initializer_headContext.class,0);
		}
		public Parameter_clauseContext parameter_clause() {
			return getRuleContext(Parameter_clauseContext.class,0);
		}
		public TerminalNode RETHROWS() { return getToken(Swift5Parser.RETHROWS, 0); }
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public Protocol_initializer_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_initializer_declaration; }
	}

	public final Protocol_initializer_declarationContext protocol_initializer_declaration() throws RecognitionException {
		Protocol_initializer_declarationContext _localctx = new Protocol_initializer_declarationContext(_ctx, getState());
		enterRule(_localctx, 306, RULE_protocol_initializer_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1665);
			initializer_head();
			setState(1667);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1666);
				generic_parameter_clause();
				}
			}

			setState(1669);
			parameter_clause();
			setState(1674);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
			case FUNC:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case VAR:
			case THROWS:
			case INIT:
			case ASSOCIATED_TYPE:
			case SUBSCRIPT:
			case PREFIX:
			case INFIX:
			case POSTFIX:
			case TYPEALIAS:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case STATIC:
			case WEAK:
			case UNOWNED:
			case MUTATING:
			case NONMUTATING:
			case FILE_PRIVATE:
			case SOURCE_LOCATION:
			case ERROR:
			case WARNING:
			case HASH_IF:
			case RCURLY:
			case AT:
				{
				setState(1671);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THROWS) {
					{
					setState(1670);
					match(THROWS);
					}
				}

				}
				break;
			case RETHROWS:
				{
				setState(1673);
				match(RETHROWS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(1677);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1676);
				generic_where_clause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_subscript_declarationContext extends ParserRuleContext {
		public Subscript_headContext subscript_head() {
			return getRuleContext(Subscript_headContext.class,0);
		}
		public Subscript_resultContext subscript_result() {
			return getRuleContext(Subscript_resultContext.class,0);
		}
		public Getter_setter_keyword_blockContext getter_setter_keyword_block() {
			return getRuleContext(Getter_setter_keyword_blockContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Protocol_subscript_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_subscript_declaration; }
	}

	public final Protocol_subscript_declarationContext protocol_subscript_declaration() throws RecognitionException {
		Protocol_subscript_declarationContext _localctx = new Protocol_subscript_declarationContext(_ctx, getState());
		enterRule(_localctx, 308, RULE_protocol_subscript_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1679);
			subscript_head();
			setState(1680);
			subscript_result();
			setState(1682);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1681);
				generic_where_clause();
				}
			}

			setState(1684);
			getter_setter_keyword_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_associated_type_declarationContext extends ParserRuleContext {
		public TerminalNode ASSOCIATED_TYPE() { return getToken(Swift5Parser.ASSOCIATED_TYPE, 0); }
		public Typealias_nameContext typealias_name() {
			return getRuleContext(Typealias_nameContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Typealias_assignmentContext typealias_assignment() {
			return getRuleContext(Typealias_assignmentContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Protocol_associated_type_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_associated_type_declaration; }
	}

	public final Protocol_associated_type_declarationContext protocol_associated_type_declaration() throws RecognitionException {
		Protocol_associated_type_declarationContext _localctx = new Protocol_associated_type_declarationContext(_ctx, getState());
		enterRule(_localctx, 310, RULE_protocol_associated_type_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1687);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1686);
				attributes();
				}
			}

			setState(1690);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1689);
				access_level_modifier();
				}
			}

			setState(1692);
			match(ASSOCIATED_TYPE);
			setState(1693);
			typealias_name();
			setState(1695);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1694);
				type_inheritance_clause();
				}
			}

			setState(1698);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQUAL) {
				{
				setState(1697);
				typealias_assignment();
				}
			}

			setState(1701);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1700);
				generic_where_clause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Initializer_declarationContext extends ParserRuleContext {
		public Initializer_headContext initializer_head() {
			return getRuleContext(Initializer_headContext.class,0);
		}
		public Parameter_clauseContext parameter_clause() {
			return getRuleContext(Parameter_clauseContext.class,0);
		}
		public Initializer_bodyContext initializer_body() {
			return getRuleContext(Initializer_bodyContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public TerminalNode RETHROWS() { return getToken(Swift5Parser.RETHROWS, 0); }
		public Initializer_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer_declaration; }
	}

	public final Initializer_declarationContext initializer_declaration() throws RecognitionException {
		Initializer_declarationContext _localctx = new Initializer_declarationContext(_ctx, getState());
		enterRule(_localctx, 312, RULE_initializer_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1703);
			initializer_head();
			setState(1705);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1704);
				generic_parameter_clause();
				}
			}

			setState(1707);
			parameter_clause();
			setState(1709);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==THROWS || _la==RETHROWS) {
				{
				setState(1708);
				_la = _input.LA(1);
				if ( !(_la==THROWS || _la==RETHROWS) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(1712);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1711);
				generic_where_clause();
				}
			}

			setState(1714);
			initializer_body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Initializer_headContext extends ParserRuleContext {
		public TerminalNode INIT() { return getToken(Swift5Parser.INIT, 0); }
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Declaration_modifiersContext declaration_modifiers() {
			return getRuleContext(Declaration_modifiersContext.class,0);
		}
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Initializer_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer_head; }
	}

	public final Initializer_headContext initializer_head() throws RecognitionException {
		Initializer_headContext _localctx = new Initializer_headContext(_ctx, getState());
		enterRule(_localctx, 314, RULE_initializer_head);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1717);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1716);
				attributes();
				}
			}

			setState(1720);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0)) {
				{
				setState(1719);
				declaration_modifiers();
				}
			}

			setState(1722);
			match(INIT);
			setState(1724);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==BANG || _la==QUESTION) {
				{
				setState(1723);
				_la = _input.LA(1);
				if ( !(_la==BANG || _la==QUESTION) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Initializer_bodyContext extends ParserRuleContext {
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Initializer_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer_body; }
	}

	public final Initializer_bodyContext initializer_body() throws RecognitionException {
		Initializer_bodyContext _localctx = new Initializer_bodyContext(_ctx, getState());
		enterRule(_localctx, 316, RULE_initializer_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1726);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Deinitializer_declarationContext extends ParserRuleContext {
		public TerminalNode DEINIT() { return getToken(Swift5Parser.DEINIT, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Deinitializer_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deinitializer_declaration; }
	}

	public final Deinitializer_declarationContext deinitializer_declaration() throws RecognitionException {
		Deinitializer_declarationContext _localctx = new Deinitializer_declarationContext(_ctx, getState());
		enterRule(_localctx, 318, RULE_deinitializer_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1729);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1728);
				attributes();
				}
			}

			setState(1731);
			match(DEINIT);
			setState(1732);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extension_declarationContext extends ParserRuleContext {
		public TerminalNode EXTENSION() { return getToken(Swift5Parser.EXTENSION, 0); }
		public Type_identifierContext type_identifier() {
			return getRuleContext(Type_identifierContext.class,0);
		}
		public Extension_bodyContext extension_body() {
			return getRuleContext(Extension_bodyContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Type_inheritance_clauseContext type_inheritance_clause() {
			return getRuleContext(Type_inheritance_clauseContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Extension_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extension_declaration; }
	}

	public final Extension_declarationContext extension_declaration() throws RecognitionException {
		Extension_declarationContext _localctx = new Extension_declarationContext(_ctx, getState());
		enterRule(_localctx, 320, RULE_extension_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1735);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1734);
				attributes();
				}
			}

			setState(1738);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) {
				{
				setState(1737);
				access_level_modifier();
				}
			}

			setState(1740);
			match(EXTENSION);
			setState(1741);
			type_identifier();
			setState(1743);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(1742);
				type_inheritance_clause();
				}
			}

			setState(1746);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1745);
				generic_where_clause();
				}
			}

			setState(1748);
			extension_body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extension_bodyContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public Extension_membersContext extension_members() {
			return getRuleContext(Extension_membersContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Extension_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extension_body; }
	}

	public final Extension_bodyContext extension_body() throws RecognitionException {
		Extension_bodyContext _localctx = new Extension_bodyContext(_ctx, getState());
		enterRule(_localctx, 322, RULE_extension_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1750);
			match(LCURLY);
			setState(1751);
			extension_members();
			setState(1752);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extension_membersContext extends ParserRuleContext {
		public List<Extension_memberContext> extension_member() {
			return getRuleContexts(Extension_memberContext.class);
		}
		public Extension_memberContext extension_member(int i) {
			return getRuleContext(Extension_memberContext.class,i);
		}
		public Extension_membersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extension_members; }
	}

	public final Extension_membersContext extension_members() throws RecognitionException {
		Extension_membersContext _localctx = new Extension_membersContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_extension_members);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1757);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << ENUM) | (1L << FUNC) | (1L << IMPORT) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << STRUCT) | (1L << INDIRECT) | (1L << INIT) | (1L << DEINIT) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << PREFIX) | (1L << INFIX) | (1L << PRECEDENCE_GROUP) | (1L << POSTFIX) | (1L << TYPEALIAS))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)) | (1L << (SOURCE_LOCATION - 66)) | (1L << (ERROR - 66)) | (1L << (WARNING - 66)) | (1L << (HASH_IF - 66)))) != 0) || _la==AT) {
				{
				{
				setState(1754);
				extension_member();
				}
				}
				setState(1759);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extension_memberContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Compiler_control_statementContext compiler_control_statement() {
			return getRuleContext(Compiler_control_statementContext.class,0);
		}
		public Extension_memberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extension_member; }
	}

	public final Extension_memberContext extension_member() throws RecognitionException {
		Extension_memberContext _localctx = new Extension_memberContext(_ctx, getState());
		enterRule(_localctx, 326, RULE_extension_member);
		try {
			setState(1762);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
			case ENUM:
			case FUNC:
			case IMPORT:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case LET:
			case VAR:
			case PROTOCOL:
			case STRUCT:
			case INDIRECT:
			case INIT:
			case DEINIT:
			case EXTENSION:
			case SUBSCRIPT:
			case PREFIX:
			case INFIX:
			case PRECEDENCE_GROUP:
			case POSTFIX:
			case TYPEALIAS:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case STATIC:
			case WEAK:
			case UNOWNED:
			case MUTATING:
			case NONMUTATING:
			case FILE_PRIVATE:
			case AT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1760);
				declaration();
				}
				break;
			case SOURCE_LOCATION:
			case ERROR:
			case WARNING:
			case HASH_IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(1761);
				compiler_control_statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Subscript_declarationContext extends ParserRuleContext {
		public Subscript_headContext subscript_head() {
			return getRuleContext(Subscript_headContext.class,0);
		}
		public Subscript_resultContext subscript_result() {
			return getRuleContext(Subscript_resultContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Getter_setter_blockContext getter_setter_block() {
			return getRuleContext(Getter_setter_blockContext.class,0);
		}
		public Getter_setter_keyword_blockContext getter_setter_keyword_block() {
			return getRuleContext(Getter_setter_keyword_blockContext.class,0);
		}
		public Generic_where_clauseContext generic_where_clause() {
			return getRuleContext(Generic_where_clauseContext.class,0);
		}
		public Subscript_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subscript_declaration; }
	}

	public final Subscript_declarationContext subscript_declaration() throws RecognitionException {
		Subscript_declarationContext _localctx = new Subscript_declarationContext(_ctx, getState());
		enterRule(_localctx, 328, RULE_subscript_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1764);
			subscript_head();
			setState(1765);
			subscript_result();
			setState(1767);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(1766);
				generic_where_clause();
				}
			}

			setState(1772);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
			case 1:
				{
				setState(1769);
				code_block();
				}
				break;
			case 2:
				{
				setState(1770);
				getter_setter_block();
				}
				break;
			case 3:
				{
				setState(1771);
				getter_setter_keyword_block();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Subscript_headContext extends ParserRuleContext {
		public TerminalNode SUBSCRIPT() { return getToken(Swift5Parser.SUBSCRIPT, 0); }
		public Parameter_clauseContext parameter_clause() {
			return getRuleContext(Parameter_clauseContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Declaration_modifiersContext declaration_modifiers() {
			return getRuleContext(Declaration_modifiersContext.class,0);
		}
		public Generic_parameter_clauseContext generic_parameter_clause() {
			return getRuleContext(Generic_parameter_clauseContext.class,0);
		}
		public Subscript_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subscript_head; }
	}

	public final Subscript_headContext subscript_head() throws RecognitionException {
		Subscript_headContext _localctx = new Subscript_headContext(_ctx, getState());
		enterRule(_localctx, 330, RULE_subscript_head);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1775);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(1774);
				attributes();
				}
			}

			setState(1778);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0)) {
				{
				setState(1777);
				declaration_modifiers();
				}
			}

			setState(1780);
			match(SUBSCRIPT);
			setState(1782);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(1781);
				generic_parameter_clause();
				}
			}

			setState(1784);
			parameter_clause();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Subscript_resultContext extends ParserRuleContext {
		public Arrow_operatorContext arrow_operator() {
			return getRuleContext(Arrow_operatorContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public Subscript_resultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subscript_result; }
	}

	public final Subscript_resultContext subscript_result() throws RecognitionException {
		Subscript_resultContext _localctx = new Subscript_resultContext(_ctx, getState());
		enterRule(_localctx, 332, RULE_subscript_result);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1786);
			arrow_operator();
			setState(1788);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
			case 1:
				{
				setState(1787);
				attributes();
				}
				break;
			}
			setState(1790);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Operator_declarationContext extends ParserRuleContext {
		public Prefix_operator_declarationContext prefix_operator_declaration() {
			return getRuleContext(Prefix_operator_declarationContext.class,0);
		}
		public Postfix_operator_declarationContext postfix_operator_declaration() {
			return getRuleContext(Postfix_operator_declarationContext.class,0);
		}
		public Infix_operator_declarationContext infix_operator_declaration() {
			return getRuleContext(Infix_operator_declarationContext.class,0);
		}
		public Operator_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_declaration; }
	}

	public final Operator_declarationContext operator_declaration() throws RecognitionException {
		Operator_declarationContext _localctx = new Operator_declarationContext(_ctx, getState());
		enterRule(_localctx, 334, RULE_operator_declaration);
		try {
			setState(1795);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PREFIX:
				enterOuterAlt(_localctx, 1);
				{
				setState(1792);
				prefix_operator_declaration();
				}
				break;
			case POSTFIX:
				enterOuterAlt(_localctx, 2);
				{
				setState(1793);
				postfix_operator_declaration();
				}
				break;
			case INFIX:
				enterOuterAlt(_localctx, 3);
				{
				setState(1794);
				infix_operator_declaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Prefix_operator_declarationContext extends ParserRuleContext {
		public TerminalNode PREFIX() { return getToken(Swift5Parser.PREFIX, 0); }
		public TerminalNode OPERATOR() { return getToken(Swift5Parser.OPERATOR, 0); }
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Prefix_operator_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefix_operator_declaration; }
	}

	public final Prefix_operator_declarationContext prefix_operator_declaration() throws RecognitionException {
		Prefix_operator_declarationContext _localctx = new Prefix_operator_declarationContext(_ctx, getState());
		enterRule(_localctx, 336, RULE_prefix_operator_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1797);
			match(PREFIX);
			setState(1798);
			match(OPERATOR);
			setState(1799);
			operator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Postfix_operator_declarationContext extends ParserRuleContext {
		public TerminalNode POSTFIX() { return getToken(Swift5Parser.POSTFIX, 0); }
		public TerminalNode OPERATOR() { return getToken(Swift5Parser.OPERATOR, 0); }
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Postfix_operator_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfix_operator_declaration; }
	}

	public final Postfix_operator_declarationContext postfix_operator_declaration() throws RecognitionException {
		Postfix_operator_declarationContext _localctx = new Postfix_operator_declarationContext(_ctx, getState());
		enterRule(_localctx, 338, RULE_postfix_operator_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1801);
			match(POSTFIX);
			setState(1802);
			match(OPERATOR);
			setState(1803);
			operator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Infix_operator_declarationContext extends ParserRuleContext {
		public TerminalNode INFIX() { return getToken(Swift5Parser.INFIX, 0); }
		public TerminalNode OPERATOR() { return getToken(Swift5Parser.OPERATOR, 0); }
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Infix_operator_groupContext infix_operator_group() {
			return getRuleContext(Infix_operator_groupContext.class,0);
		}
		public Infix_operator_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_infix_operator_declaration; }
	}

	public final Infix_operator_declarationContext infix_operator_declaration() throws RecognitionException {
		Infix_operator_declarationContext _localctx = new Infix_operator_declarationContext(_ctx, getState());
		enterRule(_localctx, 340, RULE_infix_operator_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1805);
			match(INFIX);
			setState(1806);
			match(OPERATOR);
			setState(1807);
			operator();
			setState(1809);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
			case 1:
				{
				setState(1808);
				infix_operator_group();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Infix_operator_groupContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Precedence_group_nameContext precedence_group_name() {
			return getRuleContext(Precedence_group_nameContext.class,0);
		}
		public Infix_operator_groupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_infix_operator_group; }
	}

	public final Infix_operator_groupContext infix_operator_group() throws RecognitionException {
		Infix_operator_groupContext _localctx = new Infix_operator_groupContext(_ctx, getState());
		enterRule(_localctx, 342, RULE_infix_operator_group);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1811);
			match(COLON);
			setState(1812);
			precedence_group_name();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_declarationContext extends ParserRuleContext {
		public TerminalNode PRECEDENCE_GROUP() { return getToken(Swift5Parser.PRECEDENCE_GROUP, 0); }
		public Precedence_group_nameContext precedence_group_name() {
			return getRuleContext(Precedence_group_nameContext.class,0);
		}
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Precedence_group_attributesContext precedence_group_attributes() {
			return getRuleContext(Precedence_group_attributesContext.class,0);
		}
		public Precedence_group_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_declaration; }
	}

	public final Precedence_group_declarationContext precedence_group_declaration() throws RecognitionException {
		Precedence_group_declarationContext _localctx = new Precedence_group_declarationContext(_ctx, getState());
		enterRule(_localctx, 344, RULE_precedence_group_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1814);
			match(PRECEDENCE_GROUP);
			setState(1815);
			precedence_group_name();
			setState(1816);
			match(LCURLY);
			setState(1818);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY))) != 0)) {
				{
				setState(1817);
				precedence_group_attributes();
				}
			}

			setState(1820);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_attributesContext extends ParserRuleContext {
		public List<Precedence_group_attributeContext> precedence_group_attribute() {
			return getRuleContexts(Precedence_group_attributeContext.class);
		}
		public Precedence_group_attributeContext precedence_group_attribute(int i) {
			return getRuleContext(Precedence_group_attributeContext.class,i);
		}
		public Precedence_group_attributesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_attributes; }
	}

	public final Precedence_group_attributesContext precedence_group_attributes() throws RecognitionException {
		Precedence_group_attributesContext _localctx = new Precedence_group_attributesContext(_ctx, getState());
		enterRule(_localctx, 346, RULE_precedence_group_attributes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1823); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1822);
				precedence_group_attribute();
				}
				}
				setState(1825); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_attributeContext extends ParserRuleContext {
		public Precedence_group_relationContext precedence_group_relation() {
			return getRuleContext(Precedence_group_relationContext.class,0);
		}
		public Precedence_group_assignmentContext precedence_group_assignment() {
			return getRuleContext(Precedence_group_assignmentContext.class,0);
		}
		public Precedence_group_associativityContext precedence_group_associativity() {
			return getRuleContext(Precedence_group_associativityContext.class,0);
		}
		public Precedence_group_attributeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_attribute; }
	}

	public final Precedence_group_attributeContext precedence_group_attribute() throws RecognitionException {
		Precedence_group_attributeContext _localctx = new Precedence_group_attributeContext(_ctx, getState());
		enterRule(_localctx, 348, RULE_precedence_group_attribute);
		try {
			setState(1830);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case HIGHER_THAN:
			case LOWER_THAN:
				enterOuterAlt(_localctx, 1);
				{
				setState(1827);
				precedence_group_relation();
				}
				break;
			case ASSIGNMENT:
				enterOuterAlt(_localctx, 2);
				{
				setState(1828);
				precedence_group_assignment();
				}
				break;
			case ASSOCIATIVITY:
				enterOuterAlt(_localctx, 3);
				{
				setState(1829);
				precedence_group_associativity();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_relationContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Precedence_group_namesContext precedence_group_names() {
			return getRuleContext(Precedence_group_namesContext.class,0);
		}
		public TerminalNode HIGHER_THAN() { return getToken(Swift5Parser.HIGHER_THAN, 0); }
		public TerminalNode LOWER_THAN() { return getToken(Swift5Parser.LOWER_THAN, 0); }
		public Precedence_group_relationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_relation; }
	}

	public final Precedence_group_relationContext precedence_group_relation() throws RecognitionException {
		Precedence_group_relationContext _localctx = new Precedence_group_relationContext(_ctx, getState());
		enterRule(_localctx, 350, RULE_precedence_group_relation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1832);
			_la = _input.LA(1);
			if ( !(_la==HIGHER_THAN || _la==LOWER_THAN) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(1833);
			match(COLON);
			setState(1834);
			precedence_group_names();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_assignmentContext extends ParserRuleContext {
		public TerminalNode ASSIGNMENT() { return getToken(Swift5Parser.ASSIGNMENT, 0); }
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Boolean_literalContext boolean_literal() {
			return getRuleContext(Boolean_literalContext.class,0);
		}
		public Precedence_group_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_assignment; }
	}

	public final Precedence_group_assignmentContext precedence_group_assignment() throws RecognitionException {
		Precedence_group_assignmentContext _localctx = new Precedence_group_assignmentContext(_ctx, getState());
		enterRule(_localctx, 352, RULE_precedence_group_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1836);
			match(ASSIGNMENT);
			setState(1837);
			match(COLON);
			setState(1838);
			boolean_literal();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_associativityContext extends ParserRuleContext {
		public TerminalNode ASSOCIATIVITY() { return getToken(Swift5Parser.ASSOCIATIVITY, 0); }
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TerminalNode LEFT() { return getToken(Swift5Parser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(Swift5Parser.RIGHT, 0); }
		public TerminalNode NONE() { return getToken(Swift5Parser.NONE, 0); }
		public Precedence_group_associativityContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_associativity; }
	}

	public final Precedence_group_associativityContext precedence_group_associativity() throws RecognitionException {
		Precedence_group_associativityContext _localctx = new Precedence_group_associativityContext(_ctx, getState());
		enterRule(_localctx, 354, RULE_precedence_group_associativity);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1840);
			match(ASSOCIATIVITY);
			setState(1841);
			match(COLON);
			setState(1842);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LEFT) | (1L << RIGHT) | (1L << NONE))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_namesContext extends ParserRuleContext {
		public List<Precedence_group_nameContext> precedence_group_name() {
			return getRuleContexts(Precedence_group_nameContext.class);
		}
		public Precedence_group_nameContext precedence_group_name(int i) {
			return getRuleContext(Precedence_group_nameContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Precedence_group_namesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_names; }
	}

	public final Precedence_group_namesContext precedence_group_names() throws RecognitionException {
		Precedence_group_namesContext _localctx = new Precedence_group_namesContext(_ctx, getState());
		enterRule(_localctx, 356, RULE_precedence_group_names);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1844);
			precedence_group_name();
			setState(1849);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1845);
				match(COMMA);
				setState(1846);
				precedence_group_name();
				}
				}
				setState(1851);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Precedence_group_nameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Precedence_group_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precedence_group_name; }
	}

	public final Precedence_group_nameContext precedence_group_name() throws RecognitionException {
		Precedence_group_nameContext _localctx = new Precedence_group_nameContext(_ctx, getState());
		enterRule(_localctx, 358, RULE_precedence_group_name);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1852);
			identifier();
			setState(1857);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,211,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1853);
					match(DOT);
					setState(1854);
					identifier();
					}
					} 
				}
				setState(1859);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,211,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Declaration_modifierContext extends ParserRuleContext {
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public TerminalNode CONVENIENCE() { return getToken(Swift5Parser.CONVENIENCE, 0); }
		public TerminalNode DYNAMIC() { return getToken(Swift5Parser.DYNAMIC, 0); }
		public TerminalNode FINAL() { return getToken(Swift5Parser.FINAL, 0); }
		public TerminalNode INFIX() { return getToken(Swift5Parser.INFIX, 0); }
		public TerminalNode LAZY() { return getToken(Swift5Parser.LAZY, 0); }
		public TerminalNode OPTIONAL() { return getToken(Swift5Parser.OPTIONAL, 0); }
		public TerminalNode OVERRIDE() { return getToken(Swift5Parser.OVERRIDE, 0); }
		public TerminalNode POSTFIX() { return getToken(Swift5Parser.POSTFIX, 0); }
		public TerminalNode PREFIX() { return getToken(Swift5Parser.PREFIX, 0); }
		public TerminalNode REQUIRED() { return getToken(Swift5Parser.REQUIRED, 0); }
		public TerminalNode STATIC() { return getToken(Swift5Parser.STATIC, 0); }
		public TerminalNode UNOWNED() { return getToken(Swift5Parser.UNOWNED, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode SAFE() { return getToken(Swift5Parser.SAFE, 0); }
		public TerminalNode UNSAFE() { return getToken(Swift5Parser.UNSAFE, 0); }
		public TerminalNode WEAK() { return getToken(Swift5Parser.WEAK, 0); }
		public Access_level_modifierContext access_level_modifier() {
			return getRuleContext(Access_level_modifierContext.class,0);
		}
		public Mutation_modifierContext mutation_modifier() {
			return getRuleContext(Mutation_modifierContext.class,0);
		}
		public Declaration_modifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_modifier; }
	}

	public final Declaration_modifierContext declaration_modifier() throws RecognitionException {
		Declaration_modifierContext _localctx = new Declaration_modifierContext(_ctx, getState());
		enterRule(_localctx, 360, RULE_declaration_modifier);
		int _la;
		try {
			setState(1881);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLASS:
				enterOuterAlt(_localctx, 1);
				{
				setState(1860);
				match(CLASS);
				}
				break;
			case CONVENIENCE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1861);
				match(CONVENIENCE);
				}
				break;
			case DYNAMIC:
				enterOuterAlt(_localctx, 3);
				{
				setState(1862);
				match(DYNAMIC);
				}
				break;
			case FINAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(1863);
				match(FINAL);
				}
				break;
			case INFIX:
				enterOuterAlt(_localctx, 5);
				{
				setState(1864);
				match(INFIX);
				}
				break;
			case LAZY:
				enterOuterAlt(_localctx, 6);
				{
				setState(1865);
				match(LAZY);
				}
				break;
			case OPTIONAL:
				enterOuterAlt(_localctx, 7);
				{
				setState(1866);
				match(OPTIONAL);
				}
				break;
			case OVERRIDE:
				enterOuterAlt(_localctx, 8);
				{
				setState(1867);
				match(OVERRIDE);
				}
				break;
			case POSTFIX:
				enterOuterAlt(_localctx, 9);
				{
				setState(1868);
				match(POSTFIX);
				}
				break;
			case PREFIX:
				enterOuterAlt(_localctx, 10);
				{
				setState(1869);
				match(PREFIX);
				}
				break;
			case REQUIRED:
				enterOuterAlt(_localctx, 11);
				{
				setState(1870);
				match(REQUIRED);
				}
				break;
			case STATIC:
				enterOuterAlt(_localctx, 12);
				{
				setState(1871);
				match(STATIC);
				}
				break;
			case UNOWNED:
				enterOuterAlt(_localctx, 13);
				{
				setState(1872);
				match(UNOWNED);
				setState(1876);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LPAREN) {
					{
					setState(1873);
					match(LPAREN);
					setState(1874);
					_la = _input.LA(1);
					if ( !(_la==SAFE || _la==UNSAFE) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(1875);
					match(RPAREN);
					}
				}

				}
				break;
			case WEAK:
				enterOuterAlt(_localctx, 14);
				{
				setState(1878);
				match(WEAK);
				}
				break;
			case INTERNAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case FILE_PRIVATE:
				enterOuterAlt(_localctx, 15);
				{
				setState(1879);
				access_level_modifier();
				}
				break;
			case MUTATING:
			case NONMUTATING:
				enterOuterAlt(_localctx, 16);
				{
				setState(1880);
				mutation_modifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Declaration_modifiersContext extends ParserRuleContext {
		public List<Declaration_modifierContext> declaration_modifier() {
			return getRuleContexts(Declaration_modifierContext.class);
		}
		public Declaration_modifierContext declaration_modifier(int i) {
			return getRuleContext(Declaration_modifierContext.class,i);
		}
		public Declaration_modifiersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_modifiers; }
	}

	public final Declaration_modifiersContext declaration_modifiers() throws RecognitionException {
		Declaration_modifiersContext _localctx = new Declaration_modifiersContext(_ctx, getState());
		enterRule(_localctx, 362, RULE_declaration_modifiers);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1884); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1883);
				declaration_modifier();
				}
				}
				setState(1886); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CLASS) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << PREFIX) | (1L << INFIX) | (1L << POSTFIX))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (CONVENIENCE - 66)) | (1L << (DYNAMIC - 66)) | (1L << (LAZY - 66)) | (1L << (OPTIONAL - 66)) | (1L << (OVERRIDE - 66)) | (1L << (REQUIRED - 66)) | (1L << (STATIC - 66)) | (1L << (WEAK - 66)) | (1L << (UNOWNED - 66)) | (1L << (MUTATING - 66)) | (1L << (NONMUTATING - 66)) | (1L << (FILE_PRIVATE - 66)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Access_level_modifierContext extends ParserRuleContext {
		public TerminalNode PRIVATE() { return getToken(Swift5Parser.PRIVATE, 0); }
		public TerminalNode FILE_PRIVATE() { return getToken(Swift5Parser.FILE_PRIVATE, 0); }
		public TerminalNode INTERNAL() { return getToken(Swift5Parser.INTERNAL, 0); }
		public TerminalNode PUBLIC() { return getToken(Swift5Parser.PUBLIC, 0); }
		public TerminalNode OPEN() { return getToken(Swift5Parser.OPEN, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode SET() { return getToken(Swift5Parser.SET, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Access_level_modifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_access_level_modifier; }
	}

	public final Access_level_modifierContext access_level_modifier() throws RecognitionException {
		Access_level_modifierContext _localctx = new Access_level_modifierContext(_ctx, getState());
		enterRule(_localctx, 364, RULE_access_level_modifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1888);
			_la = _input.LA(1);
			if ( !(((((_la - 20)) & ~0x3f) == 0 && ((1L << (_la - 20)) & ((1L << (INTERNAL - 20)) | (1L << (OPEN - 20)) | (1L << (PRIVATE - 20)) | (1L << (PUBLIC - 20)) | (1L << (FILE_PRIVATE - 20)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(1892);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(1889);
				match(LPAREN);
				setState(1890);
				match(SET);
				setState(1891);
				match(RPAREN);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mutation_modifierContext extends ParserRuleContext {
		public TerminalNode MUTATING() { return getToken(Swift5Parser.MUTATING, 0); }
		public TerminalNode NONMUTATING() { return getToken(Swift5Parser.NONMUTATING, 0); }
		public Mutation_modifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mutation_modifier; }
	}

	public final Mutation_modifierContext mutation_modifier() throws RecognitionException {
		Mutation_modifierContext _localctx = new Mutation_modifierContext(_ctx, getState());
		enterRule(_localctx, 366, RULE_mutation_modifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1894);
			_la = _input.LA(1);
			if ( !(_la==MUTATING || _la==NONMUTATING) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PatternContext extends ParserRuleContext {
		public Wildcard_patternContext wildcard_pattern() {
			return getRuleContext(Wildcard_patternContext.class,0);
		}
		public Identifier_patternContext identifier_pattern() {
			return getRuleContext(Identifier_patternContext.class,0);
		}
		public Tuple_patternContext tuple_pattern() {
			return getRuleContext(Tuple_patternContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Value_binding_patternContext value_binding_pattern() {
			return getRuleContext(Value_binding_patternContext.class,0);
		}
		public Enum_case_patternContext enum_case_pattern() {
			return getRuleContext(Enum_case_patternContext.class,0);
		}
		public Optional_patternContext optional_pattern() {
			return getRuleContext(Optional_patternContext.class,0);
		}
		public TerminalNode IS() { return getToken(Swift5Parser.IS, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Expression_patternContext expression_pattern() {
			return getRuleContext(Expression_patternContext.class,0);
		}
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public TerminalNode AS() { return getToken(Swift5Parser.AS, 0); }
		public PatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pattern; }
	}

	public final PatternContext pattern() throws RecognitionException {
		return pattern(0);
	}

	private PatternContext pattern(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PatternContext _localctx = new PatternContext(_ctx, _parentState);
		PatternContext _prevctx = _localctx;
		int _startState = 368;
		enterRecursionRule(_localctx, 368, RULE_pattern, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1911);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,218,_ctx) ) {
			case 1:
				{
				setState(1900);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case UNDERSCORE:
					{
					setState(1897);
					wildcard_pattern();
					}
					break;
				case AS:
				case ALPHA:
				case CATCH:
				case CLASS:
				case DEFAULT:
				case DO:
				case GUARD:
				case FOR:
				case IN:
				case INTERNAL:
				case FINAL:
				case OPEN:
				case PRIVATE:
				case PUBLIC:
				case WHERE:
				case WHILE:
				case PROTOCOL:
				case GET:
				case SET:
				case WILL_SET:
				case DID_SET:
				case INDIRECT:
				case PREFIX:
				case INFIX:
				case LEFT:
				case RIGHT:
				case NONE:
				case PRECEDENCE_GROUP:
				case HIGHER_THAN:
				case LOWER_THAN:
				case ASSIGNMENT:
				case ASSOCIATIVITY:
				case POSTFIX:
				case OPERATOR:
				case OS:
				case ARCH:
				case SWIFT:
				case COMPILER:
				case CAN_IMPORT:
				case TARGET_ENVIRONMENT:
				case CONVENIENCE:
				case DYNAMIC:
				case LAZY:
				case OPTIONAL:
				case OVERRIDE:
				case REQUIRED:
				case WEAK:
				case UNOWNED:
				case SAFE:
				case UNSAFE:
				case MUTATING:
				case NONMUTATING:
				case RED:
				case BLUE:
				case GREEN:
				case RESOURCE_NAME:
				case SOME:
				case TYPE:
				case PRECEDENCE:
				case SELF:
				case SELF_BIG:
				case MAC_OS:
				case I_OS:
				case OSX:
				case WATCH_OS:
				case TV_OS:
				case LINUX:
				case WINDOWS:
				case I386:
				case X86_64:
				case ARM:
				case ARM64:
				case SIMULATOR:
				case MAC_CATALYST:
				case I_OS_APPLICATION_EXTENSION:
				case MAC_CATALYST_APPLICATION_EXTENSION:
				case MAC_OS_APPLICATION_EXTENSION:
				case FILE:
				case LINE:
				case GETTER:
				case SETTER:
				case Identifier:
				case BACKTICK:
					{
					setState(1898);
					identifier_pattern();
					}
					break;
				case LPAREN:
					{
					setState(1899);
					tuple_pattern();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(1903);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,217,_ctx) ) {
				case 1:
					{
					setState(1902);
					type_annotation();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1905);
				value_binding_pattern();
				}
				break;
			case 3:
				{
				setState(1906);
				enum_case_pattern();
				}
				break;
			case 4:
				{
				setState(1907);
				optional_pattern();
				}
				break;
			case 5:
				{
				setState(1908);
				match(IS);
				setState(1909);
				type(0);
				}
				break;
			case 6:
				{
				setState(1910);
				expression_pattern();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1918);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,219,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new PatternContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_pattern);
					setState(1913);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(1914);
					match(AS);
					setState(1915);
					type(0);
					}
					} 
				}
				setState(1920);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,219,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Wildcard_patternContext extends ParserRuleContext {
		public TerminalNode UNDERSCORE() { return getToken(Swift5Parser.UNDERSCORE, 0); }
		public Wildcard_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_wildcard_pattern; }
	}

	public final Wildcard_patternContext wildcard_pattern() throws RecognitionException {
		Wildcard_patternContext _localctx = new Wildcard_patternContext(_ctx, getState());
		enterRule(_localctx, 370, RULE_wildcard_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1921);
			match(UNDERSCORE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Identifier_patternContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Identifier_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier_pattern; }
	}

	public final Identifier_patternContext identifier_pattern() throws RecognitionException {
		Identifier_patternContext _localctx = new Identifier_patternContext(_ctx, getState());
		enterRule(_localctx, 372, RULE_identifier_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1923);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Value_binding_patternContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(Swift5Parser.VAR, 0); }
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public TerminalNode LET() { return getToken(Swift5Parser.LET, 0); }
		public Value_binding_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value_binding_pattern; }
	}

	public final Value_binding_patternContext value_binding_pattern() throws RecognitionException {
		Value_binding_patternContext _localctx = new Value_binding_patternContext(_ctx, getState());
		enterRule(_localctx, 374, RULE_value_binding_pattern);
		try {
			setState(1929);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(1925);
				match(VAR);
				setState(1926);
				pattern(0);
				}
				break;
			case LET:
				enterOuterAlt(_localctx, 2);
				{
				setState(1927);
				match(LET);
				setState(1928);
				pattern(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_patternContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Tuple_pattern_element_listContext tuple_pattern_element_list() {
			return getRuleContext(Tuple_pattern_element_listContext.class,0);
		}
		public Tuple_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_pattern; }
	}

	public final Tuple_patternContext tuple_pattern() throws RecognitionException {
		Tuple_patternContext _localctx = new Tuple_patternContext(_ctx, getState());
		enterRule(_localctx, 376, RULE_tuple_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1931);
			match(LPAREN);
			setState(1933);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,221,_ctx) ) {
			case 1:
				{
				setState(1932);
				tuple_pattern_element_list();
				}
				break;
			}
			setState(1935);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_pattern_element_listContext extends ParserRuleContext {
		public List<Tuple_pattern_elementContext> tuple_pattern_element() {
			return getRuleContexts(Tuple_pattern_elementContext.class);
		}
		public Tuple_pattern_elementContext tuple_pattern_element(int i) {
			return getRuleContext(Tuple_pattern_elementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Tuple_pattern_element_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_pattern_element_list; }
	}

	public final Tuple_pattern_element_listContext tuple_pattern_element_list() throws RecognitionException {
		Tuple_pattern_element_listContext _localctx = new Tuple_pattern_element_listContext(_ctx, getState());
		enterRule(_localctx, 378, RULE_tuple_pattern_element_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1937);
			tuple_pattern_element();
			setState(1942);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1938);
				match(COMMA);
				setState(1939);
				tuple_pattern_element();
				}
				}
				setState(1944);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_pattern_elementContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Tuple_pattern_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_pattern_element; }
	}

	public final Tuple_pattern_elementContext tuple_pattern_element() throws RecognitionException {
		Tuple_pattern_elementContext _localctx = new Tuple_pattern_elementContext(_ctx, getState());
		enterRule(_localctx, 380, RULE_tuple_pattern_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1948);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
			case 1:
				{
				setState(1945);
				identifier();
				setState(1946);
				match(COLON);
				}
				break;
			}
			setState(1950);
			pattern(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_case_patternContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Enum_case_nameContext enum_case_name() {
			return getRuleContext(Enum_case_nameContext.class,0);
		}
		public Type_identifierContext type_identifier() {
			return getRuleContext(Type_identifierContext.class,0);
		}
		public Tuple_patternContext tuple_pattern() {
			return getRuleContext(Tuple_patternContext.class,0);
		}
		public Enum_case_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_case_pattern; }
	}

	public final Enum_case_patternContext enum_case_pattern() throws RecognitionException {
		Enum_case_patternContext _localctx = new Enum_case_patternContext(_ctx, getState());
		enterRule(_localctx, 382, RULE_enum_case_pattern);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1953);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
				{
				setState(1952);
				type_identifier();
				}
			}

			setState(1955);
			match(DOT);
			setState(1956);
			enum_case_name();
			setState(1958);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,225,_ctx) ) {
			case 1:
				{
				setState(1957);
				tuple_pattern();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Optional_patternContext extends ParserRuleContext {
		public Identifier_patternContext identifier_pattern() {
			return getRuleContext(Identifier_patternContext.class,0);
		}
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public Optional_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optional_pattern; }
	}

	public final Optional_patternContext optional_pattern() throws RecognitionException {
		Optional_patternContext _localctx = new Optional_patternContext(_ctx, getState());
		enterRule(_localctx, 384, RULE_optional_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1960);
			identifier_pattern();
			setState(1961);
			match(QUESTION);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expression_patternContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Expression_patternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_pattern; }
	}

	public final Expression_patternContext expression_pattern() throws RecognitionException {
		Expression_patternContext _localctx = new Expression_patternContext(_ctx, getState());
		enterRule(_localctx, 386, RULE_expression_pattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1963);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeContext extends ParserRuleContext {
		public TerminalNode AT() { return getToken(Swift5Parser.AT, 0); }
		public Attribute_nameContext attribute_name() {
			return getRuleContext(Attribute_nameContext.class,0);
		}
		public Attribute_argument_clauseContext attribute_argument_clause() {
			return getRuleContext(Attribute_argument_clauseContext.class,0);
		}
		public AttributeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute; }
	}

	public final AttributeContext attribute() throws RecognitionException {
		AttributeContext _localctx = new AttributeContext(_ctx, getState());
		enterRule(_localctx, 388, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1965);
			match(AT);
			setState(1966);
			attribute_name();
			setState(1968);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,226,_ctx) ) {
			case 1:
				{
				setState(1967);
				attribute_argument_clause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Attribute_nameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Attribute_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute_name; }
	}

	public final Attribute_nameContext attribute_name() throws RecognitionException {
		Attribute_nameContext _localctx = new Attribute_nameContext(_ctx, getState());
		enterRule(_localctx, 390, RULE_attribute_name);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1970);
			identifier();
			setState(1975);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(1971);
				match(DOT);
				setState(1972);
				identifier();
				}
				}
				setState(1977);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Attribute_argument_clauseContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Balanced_tokensContext balanced_tokens() {
			return getRuleContext(Balanced_tokensContext.class,0);
		}
		public Attribute_argument_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute_argument_clause; }
	}

	public final Attribute_argument_clauseContext attribute_argument_clause() throws RecognitionException {
		Attribute_argument_clauseContext _localctx = new Attribute_argument_clauseContext(_ctx, getState());
		enterRule(_localctx, 392, RULE_attribute_argument_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1978);
			match(LPAREN);
			setState(1980);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
			case 1:
				{
				setState(1979);
				balanced_tokens();
				}
				break;
			}
			setState(1982);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributesContext extends ParserRuleContext {
		public List<AttributeContext> attribute() {
			return getRuleContexts(AttributeContext.class);
		}
		public AttributeContext attribute(int i) {
			return getRuleContext(AttributeContext.class,i);
		}
		public AttributesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributes; }
	}

	public final AttributesContext attributes() throws RecognitionException {
		AttributesContext _localctx = new AttributesContext(_ctx, getState());
		enterRule(_localctx, 394, RULE_attributes);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1985); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(1984);
					attribute();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(1987); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Balanced_tokensContext extends ParserRuleContext {
		public List<Balanced_tokenContext> balanced_token() {
			return getRuleContexts(Balanced_tokenContext.class);
		}
		public Balanced_tokenContext balanced_token(int i) {
			return getRuleContext(Balanced_tokenContext.class,i);
		}
		public Balanced_tokensContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balanced_tokens; }
	}

	public final Balanced_tokensContext balanced_tokens() throws RecognitionException {
		Balanced_tokensContext _localctx = new Balanced_tokensContext(_ctx, getState());
		enterRule(_localctx, 396, RULE_balanced_tokens);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1990); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(1989);
					balanced_token();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(1992); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,230,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Balanced_tokenContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Balanced_tokensContext balanced_tokens() {
			return getRuleContext(Balanced_tokensContext.class,0);
		}
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public KeywordContext keyword() {
			return getRuleContext(KeywordContext.class,0);
		}
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Balanced_token_punctuationContext balanced_token_punctuation() {
			return getRuleContext(Balanced_token_punctuationContext.class,0);
		}
		public Balanced_tokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balanced_token; }
	}

	public final Balanced_tokenContext balanced_token() throws RecognitionException {
		Balanced_tokenContext _localctx = new Balanced_tokenContext(_ctx, getState());
		enterRule(_localctx, 398, RULE_balanced_token);
		try {
			setState(2014);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,234,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1994);
				match(LPAREN);
				setState(1996);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,231,_ctx) ) {
				case 1:
					{
					setState(1995);
					balanced_tokens();
					}
					break;
				}
				setState(1998);
				match(RPAREN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1999);
				match(LBRACK);
				setState(2001);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
				case 1:
					{
					setState(2000);
					balanced_tokens();
					}
					break;
				}
				setState(2003);
				match(RBRACK);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2004);
				match(LCURLY);
				setState(2006);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,233,_ctx) ) {
				case 1:
					{
					setState(2005);
					balanced_tokens();
					}
					break;
				}
				setState(2008);
				match(RCURLY);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2009);
				identifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2010);
				keyword();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2011);
				literal();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2012);
				operator();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2013);
				balanced_token_punctuation();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Balanced_token_punctuationContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode COMMA() { return getToken(Swift5Parser.COMMA, 0); }
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TerminalNode SEMI() { return getToken(Swift5Parser.SEMI, 0); }
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public TerminalNode AT() { return getToken(Swift5Parser.AT, 0); }
		public TerminalNode HASH() { return getToken(Swift5Parser.HASH, 0); }
		public TerminalNode BACKTICK() { return getToken(Swift5Parser.BACKTICK, 0); }
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public Arrow_operatorContext arrow_operator() {
			return getRuleContext(Arrow_operatorContext.class,0);
		}
		public TerminalNode AND() { return getToken(Swift5Parser.AND, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Balanced_token_punctuationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balanced_token_punctuation; }
	}

	public final Balanced_token_punctuationContext balanced_token_punctuation() throws RecognitionException {
		Balanced_token_punctuationContext _localctx = new Balanced_token_punctuationContext(_ctx, getState());
		enterRule(_localctx, 400, RULE_balanced_token_punctuation);
		int _la;
		try {
			setState(2022);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,235,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2016);
				_la = _input.LA(1);
				if ( !(((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (DOT - 138)) | (1L << (COMMA - 138)) | (1L << (COLON - 138)) | (1L << (SEMI - 138)) | (1L << (QUESTION - 138)) | (1L << (AT - 138)) | (1L << (EQUAL - 138)) | (1L << (HASH - 138)) | (1L << (BACKTICK - 138)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2017);
				arrow_operator();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2018);
				if (!(SwiftSupport.isPrefixOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isPrefixOp(_input)");
				setState(2019);
				match(AND);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2020);
				if (!(SwiftSupport.isPostfixOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isPostfixOp(_input)");
				setState(2021);
				match(BANG);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public Prefix_expressionContext prefix_expression() {
			return getRuleContext(Prefix_expressionContext.class,0);
		}
		public Try_operatorContext try_operator() {
			return getRuleContext(Try_operatorContext.class,0);
		}
		public Binary_expressionsContext binary_expressions() {
			return getRuleContext(Binary_expressionsContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 402, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2025);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,236,_ctx) ) {
			case 1:
				{
				setState(2024);
				try_operator();
				}
				break;
			}
			setState(2027);
			prefix_expression();
			setState(2029);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,237,_ctx) ) {
			case 1:
				{
				setState(2028);
				binary_expressions();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expression_listContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_list; }
	}

	public final Expression_listContext expression_list() throws RecognitionException {
		Expression_listContext _localctx = new Expression_listContext(_ctx, getState());
		enterRule(_localctx, 404, RULE_expression_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2031);
			expression();
			setState(2036);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2032);
				match(COMMA);
				setState(2033);
				expression();
				}
				}
				setState(2038);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Prefix_expressionContext extends ParserRuleContext {
		public Postfix_expressionContext postfix_expression() {
			return getRuleContext(Postfix_expressionContext.class,0);
		}
		public Prefix_operatorContext prefix_operator() {
			return getRuleContext(Prefix_operatorContext.class,0);
		}
		public In_out_expressionContext in_out_expression() {
			return getRuleContext(In_out_expressionContext.class,0);
		}
		public Prefix_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefix_expression; }
	}

	public final Prefix_expressionContext prefix_expression() throws RecognitionException {
		Prefix_expressionContext _localctx = new Prefix_expressionContext(_ctx, getState());
		enterRule(_localctx, 406, RULE_prefix_expression);
		try {
			setState(2044);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,240,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2040);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,239,_ctx) ) {
				case 1:
					{
					setState(2039);
					prefix_operator();
					}
					break;
				}
				setState(2042);
				postfix_expression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2043);
				in_out_expression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class In_out_expressionContext extends ParserRuleContext {
		public TerminalNode AND() { return getToken(Swift5Parser.AND, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public In_out_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_in_out_expression; }
	}

	public final In_out_expressionContext in_out_expression() throws RecognitionException {
		In_out_expressionContext _localctx = new In_out_expressionContext(_ctx, getState());
		enterRule(_localctx, 408, RULE_in_out_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2046);
			match(AND);
			setState(2047);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Try_operatorContext extends ParserRuleContext {
		public TerminalNode TRY() { return getToken(Swift5Parser.TRY, 0); }
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Try_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_try_operator; }
	}

	public final Try_operatorContext try_operator() throws RecognitionException {
		Try_operatorContext _localctx = new Try_operatorContext(_ctx, getState());
		enterRule(_localctx, 410, RULE_try_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2049);
			match(TRY);
			setState(2051);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,241,_ctx) ) {
			case 1:
				{
				setState(2050);
				_la = _input.LA(1);
				if ( !(_la==BANG || _la==QUESTION) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Binary_expressionContext extends ParserRuleContext {
		public Binary_operatorContext binary_operator() {
			return getRuleContext(Binary_operatorContext.class,0);
		}
		public Prefix_expressionContext prefix_expression() {
			return getRuleContext(Prefix_expressionContext.class,0);
		}
		public Assignment_operatorContext assignment_operator() {
			return getRuleContext(Assignment_operatorContext.class,0);
		}
		public Conditional_operatorContext conditional_operator() {
			return getRuleContext(Conditional_operatorContext.class,0);
		}
		public Try_operatorContext try_operator() {
			return getRuleContext(Try_operatorContext.class,0);
		}
		public Type_casting_operatorContext type_casting_operator() {
			return getRuleContext(Type_casting_operatorContext.class,0);
		}
		public Binary_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binary_expression; }
	}

	public final Binary_expressionContext binary_expression() throws RecognitionException {
		Binary_expressionContext _localctx = new Binary_expressionContext(_ctx, getState());
		enterRule(_localctx, 412, RULE_binary_expression);
		try {
			setState(2066);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,244,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2053);
				binary_operator();
				setState(2054);
				prefix_expression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2058);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,242,_ctx) ) {
				case 1:
					{
					setState(2056);
					assignment_operator();
					}
					break;
				case 2:
					{
					setState(2057);
					conditional_operator();
					}
					break;
				}
				setState(2061);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,243,_ctx) ) {
				case 1:
					{
					setState(2060);
					try_operator();
					}
					break;
				}
				setState(2063);
				prefix_expression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2065);
				type_casting_operator();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Binary_expressionsContext extends ParserRuleContext {
		public List<Binary_expressionContext> binary_expression() {
			return getRuleContexts(Binary_expressionContext.class);
		}
		public Binary_expressionContext binary_expression(int i) {
			return getRuleContext(Binary_expressionContext.class,i);
		}
		public Binary_expressionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binary_expressions; }
	}

	public final Binary_expressionsContext binary_expressions() throws RecognitionException {
		Binary_expressionsContext _localctx = new Binary_expressionsContext(_ctx, getState());
		enterRule(_localctx, 414, RULE_binary_expressions);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2069); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(2068);
					binary_expression();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2071); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,245,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Conditional_operatorContext extends ParserRuleContext {
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Conditional_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditional_operator; }
	}

	public final Conditional_operatorContext conditional_operator() throws RecognitionException {
		Conditional_operatorContext _localctx = new Conditional_operatorContext(_ctx, getState());
		enterRule(_localctx, 416, RULE_conditional_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2073);
			match(QUESTION);
			setState(2074);
			expression();
			setState(2075);
			match(COLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_casting_operatorContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode IS() { return getToken(Swift5Parser.IS, 0); }
		public TerminalNode AS() { return getToken(Swift5Parser.AS, 0); }
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Type_casting_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_casting_operator; }
	}

	public final Type_casting_operatorContext type_casting_operator() throws RecognitionException {
		Type_casting_operatorContext _localctx = new Type_casting_operatorContext(_ctx, getState());
		enterRule(_localctx, 418, RULE_type_casting_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2082);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IS:
				{
				setState(2077);
				match(IS);
				}
				break;
			case AS:
				{
				setState(2078);
				match(AS);
				setState(2080);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==BANG || _la==QUESTION) {
					{
					setState(2079);
					_la = _input.LA(1);
					if ( !(_la==BANG || _la==QUESTION) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(2084);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Primary_expressionContext extends ParserRuleContext {
		public Unqualified_nameContext unqualified_name() {
			return getRuleContext(Unqualified_nameContext.class,0);
		}
		public Generic_argument_clauseContext generic_argument_clause() {
			return getRuleContext(Generic_argument_clauseContext.class,0);
		}
		public Array_typeContext array_type() {
			return getRuleContext(Array_typeContext.class,0);
		}
		public Dictionary_typeContext dictionary_type() {
			return getRuleContext(Dictionary_typeContext.class,0);
		}
		public Literal_expressionContext literal_expression() {
			return getRuleContext(Literal_expressionContext.class,0);
		}
		public Self_expressionContext self_expression() {
			return getRuleContext(Self_expressionContext.class,0);
		}
		public Superclass_expressionContext superclass_expression() {
			return getRuleContext(Superclass_expressionContext.class,0);
		}
		public Closure_expressionContext closure_expression() {
			return getRuleContext(Closure_expressionContext.class,0);
		}
		public Parenthesized_operatorContext parenthesized_operator() {
			return getRuleContext(Parenthesized_operatorContext.class,0);
		}
		public Parenthesized_expressionContext parenthesized_expression() {
			return getRuleContext(Parenthesized_expressionContext.class,0);
		}
		public Tuple_expressionContext tuple_expression() {
			return getRuleContext(Tuple_expressionContext.class,0);
		}
		public Implicit_member_expressionContext implicit_member_expression() {
			return getRuleContext(Implicit_member_expressionContext.class,0);
		}
		public Wildcard_expressionContext wildcard_expression() {
			return getRuleContext(Wildcard_expressionContext.class,0);
		}
		public Key_path_expressionContext key_path_expression() {
			return getRuleContext(Key_path_expressionContext.class,0);
		}
		public Selector_expressionContext selector_expression() {
			return getRuleContext(Selector_expressionContext.class,0);
		}
		public Key_path_string_expressionContext key_path_string_expression() {
			return getRuleContext(Key_path_string_expressionContext.class,0);
		}
		public Primary_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primary_expression; }
	}

	public final Primary_expressionContext primary_expression() throws RecognitionException {
		Primary_expressionContext _localctx = new Primary_expressionContext(_ctx, getState());
		enterRule(_localctx, 420, RULE_primary_expression);
		try {
			setState(2104);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,249,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2086);
				unqualified_name();
				setState(2088);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,248,_ctx) ) {
				case 1:
					{
					setState(2087);
					generic_argument_clause();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2090);
				array_type();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2091);
				dictionary_type();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2092);
				literal_expression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2093);
				self_expression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2094);
				superclass_expression();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2095);
				closure_expression();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2096);
				parenthesized_operator();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2097);
				parenthesized_expression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2098);
				tuple_expression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2099);
				implicit_member_expression();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2100);
				wildcard_expression();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2101);
				key_path_expression();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2102);
				selector_expression();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2103);
				key_path_string_expression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Unqualified_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Argument_namesContext argument_names() {
			return getRuleContext(Argument_namesContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Unqualified_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unqualified_name; }
	}

	public final Unqualified_nameContext unqualified_name() throws RecognitionException {
		Unqualified_nameContext _localctx = new Unqualified_nameContext(_ctx, getState());
		enterRule(_localctx, 422, RULE_unqualified_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2106);
			identifier();
			setState(2111);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,250,_ctx) ) {
			case 1:
				{
				setState(2107);
				match(LPAREN);
				setState(2108);
				argument_names();
				setState(2109);
				match(RPAREN);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Literal_expressionContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public Array_literalContext array_literal() {
			return getRuleContext(Array_literalContext.class,0);
		}
		public Dictionary_literalContext dictionary_literal() {
			return getRuleContext(Dictionary_literalContext.class,0);
		}
		public Playground_literalContext playground_literal() {
			return getRuleContext(Playground_literalContext.class,0);
		}
		public TerminalNode HASH_FILE() { return getToken(Swift5Parser.HASH_FILE, 0); }
		public TerminalNode HASH_FILE_ID() { return getToken(Swift5Parser.HASH_FILE_ID, 0); }
		public TerminalNode HASH_FILE_PATH() { return getToken(Swift5Parser.HASH_FILE_PATH, 0); }
		public TerminalNode HASH_LINE() { return getToken(Swift5Parser.HASH_LINE, 0); }
		public TerminalNode HASH_COLUMN() { return getToken(Swift5Parser.HASH_COLUMN, 0); }
		public TerminalNode HASH_FUNCTION() { return getToken(Swift5Parser.HASH_FUNCTION, 0); }
		public TerminalNode HASH_DSO_HANDLE() { return getToken(Swift5Parser.HASH_DSO_HANDLE, 0); }
		public Literal_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal_expression; }
	}

	public final Literal_expressionContext literal_expression() throws RecognitionException {
		Literal_expressionContext _localctx = new Literal_expressionContext(_ctx, getState());
		enterRule(_localctx, 424, RULE_literal_expression);
		try {
			setState(2124);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,251,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2113);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2114);
				array_literal();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2115);
				dictionary_literal();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2116);
				playground_literal();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2117);
				match(HASH_FILE);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2118);
				match(HASH_FILE_ID);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2119);
				match(HASH_FILE_PATH);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2120);
				match(HASH_LINE);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2121);
				match(HASH_COLUMN);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2122);
				match(HASH_FUNCTION);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2123);
				match(HASH_DSO_HANDLE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_literalContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Array_literal_itemsContext array_literal_items() {
			return getRuleContext(Array_literal_itemsContext.class,0);
		}
		public Array_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_literal; }
	}

	public final Array_literalContext array_literal() throws RecognitionException {
		Array_literalContext _localctx = new Array_literalContext(_ctx, getState());
		enterRule(_localctx, 426, RULE_array_literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2126);
			match(LBRACK);
			setState(2128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,252,_ctx) ) {
			case 1:
				{
				setState(2127);
				array_literal_items();
				}
				break;
			}
			setState(2130);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_literal_itemsContext extends ParserRuleContext {
		public List<Array_literal_itemContext> array_literal_item() {
			return getRuleContexts(Array_literal_itemContext.class);
		}
		public Array_literal_itemContext array_literal_item(int i) {
			return getRuleContext(Array_literal_itemContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Array_literal_itemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_literal_items; }
	}

	public final Array_literal_itemsContext array_literal_items() throws RecognitionException {
		Array_literal_itemsContext _localctx = new Array_literal_itemsContext(_ctx, getState());
		enterRule(_localctx, 428, RULE_array_literal_items);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2132);
			array_literal_item();
			setState(2137);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,253,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2133);
					match(COMMA);
					setState(2134);
					array_literal_item();
					}
					} 
				}
				setState(2139);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,253,_ctx);
			}
			setState(2141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(2140);
				match(COMMA);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_literal_itemContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Array_literal_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_literal_item; }
	}

	public final Array_literal_itemContext array_literal_item() throws RecognitionException {
		Array_literal_itemContext _localctx = new Array_literal_itemContext(_ctx, getState());
		enterRule(_localctx, 430, RULE_array_literal_item);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2143);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dictionary_literalContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Dictionary_literal_itemsContext dictionary_literal_items() {
			return getRuleContext(Dictionary_literal_itemsContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Dictionary_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dictionary_literal; }
	}

	public final Dictionary_literalContext dictionary_literal() throws RecognitionException {
		Dictionary_literalContext _localctx = new Dictionary_literalContext(_ctx, getState());
		enterRule(_localctx, 432, RULE_dictionary_literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2145);
			match(LBRACK);
			setState(2148);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,255,_ctx) ) {
			case 1:
				{
				setState(2146);
				dictionary_literal_items();
				}
				break;
			case 2:
				{
				setState(2147);
				match(COLON);
				}
				break;
			}
			setState(2150);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dictionary_literal_itemsContext extends ParserRuleContext {
		public List<Dictionary_literal_itemContext> dictionary_literal_item() {
			return getRuleContexts(Dictionary_literal_itemContext.class);
		}
		public Dictionary_literal_itemContext dictionary_literal_item(int i) {
			return getRuleContext(Dictionary_literal_itemContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Dictionary_literal_itemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dictionary_literal_items; }
	}

	public final Dictionary_literal_itemsContext dictionary_literal_items() throws RecognitionException {
		Dictionary_literal_itemsContext _localctx = new Dictionary_literal_itemsContext(_ctx, getState());
		enterRule(_localctx, 434, RULE_dictionary_literal_items);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2152);
			dictionary_literal_item();
			setState(2157);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,256,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2153);
					match(COMMA);
					setState(2154);
					dictionary_literal_item();
					}
					} 
				}
				setState(2159);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,256,_ctx);
			}
			setState(2161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(2160);
				match(COMMA);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dictionary_literal_itemContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Dictionary_literal_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dictionary_literal_item; }
	}

	public final Dictionary_literal_itemContext dictionary_literal_item() throws RecognitionException {
		Dictionary_literal_itemContext _localctx = new Dictionary_literal_itemContext(_ctx, getState());
		enterRule(_localctx, 436, RULE_dictionary_literal_item);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2163);
			expression();
			setState(2164);
			match(COLON);
			setState(2165);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Playground_literalContext extends ParserRuleContext {
		public TerminalNode HASH_COLOR_LITERAL() { return getToken(Swift5Parser.HASH_COLOR_LITERAL, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RED() { return getToken(Swift5Parser.RED, 0); }
		public List<TerminalNode> COLON() { return getTokens(Swift5Parser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(Swift5Parser.COLON, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public TerminalNode GREEN() { return getToken(Swift5Parser.GREEN, 0); }
		public TerminalNode BLUE() { return getToken(Swift5Parser.BLUE, 0); }
		public TerminalNode ALPHA() { return getToken(Swift5Parser.ALPHA, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode HASH_FILE_LITERAL() { return getToken(Swift5Parser.HASH_FILE_LITERAL, 0); }
		public TerminalNode RESOURCE_NAME() { return getToken(Swift5Parser.RESOURCE_NAME, 0); }
		public TerminalNode HASH_IMAGE_LITERAL() { return getToken(Swift5Parser.HASH_IMAGE_LITERAL, 0); }
		public Playground_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_playground_literal; }
	}

	public final Playground_literalContext playground_literal() throws RecognitionException {
		Playground_literalContext _localctx = new Playground_literalContext(_ctx, getState());
		enterRule(_localctx, 438, RULE_playground_literal);
		try {
			setState(2200);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case HASH_COLOR_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(2167);
				match(HASH_COLOR_LITERAL);
				setState(2168);
				match(LPAREN);
				setState(2169);
				match(RED);
				setState(2170);
				match(COLON);
				setState(2171);
				expression();
				setState(2172);
				match(COMMA);
				setState(2173);
				match(GREEN);
				setState(2174);
				match(COLON);
				setState(2175);
				expression();
				setState(2176);
				match(COMMA);
				setState(2177);
				match(BLUE);
				setState(2178);
				match(COLON);
				setState(2179);
				expression();
				setState(2180);
				match(COMMA);
				setState(2181);
				match(ALPHA);
				setState(2182);
				match(COLON);
				setState(2183);
				expression();
				setState(2184);
				match(RPAREN);
				}
				break;
			case HASH_FILE_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(2186);
				match(HASH_FILE_LITERAL);
				setState(2187);
				match(LPAREN);
				setState(2188);
				match(RESOURCE_NAME);
				setState(2189);
				match(COLON);
				setState(2190);
				expression();
				setState(2191);
				match(RPAREN);
				}
				break;
			case HASH_IMAGE_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(2193);
				match(HASH_IMAGE_LITERAL);
				setState(2194);
				match(LPAREN);
				setState(2195);
				match(RESOURCE_NAME);
				setState(2196);
				match(COLON);
				setState(2197);
				expression();
				setState(2198);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Self_expressionContext extends ParserRuleContext {
		public Self_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_self_expression; }
	 
		public Self_expressionContext() { }
		public void copyFrom(Self_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Self_initializer_expressionContext extends Self_expressionContext {
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode INIT() { return getToken(Swift5Parser.INIT, 0); }
		public Self_initializer_expressionContext(Self_expressionContext ctx) { copyFrom(ctx); }
	}
	public static class Self_pure_expressionContext extends Self_expressionContext {
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public Self_pure_expressionContext(Self_expressionContext ctx) { copyFrom(ctx); }
	}
	public static class Self_subscript_expressionContext extends Self_expressionContext {
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public Function_call_argument_listContext function_call_argument_list() {
			return getRuleContext(Function_call_argument_listContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Self_subscript_expressionContext(Self_expressionContext ctx) { copyFrom(ctx); }
	}
	public static class Self_method_expressionContext extends Self_expressionContext {
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Self_method_expressionContext(Self_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Self_expressionContext self_expression() throws RecognitionException {
		Self_expressionContext _localctx = new Self_expressionContext(_ctx, getState());
		enterRule(_localctx, 440, RULE_self_expression);
		try {
			setState(2214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
			case 1:
				_localctx = new Self_pure_expressionContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(2202);
				match(SELF);
				}
				break;
			case 2:
				_localctx = new Self_method_expressionContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(2203);
				match(SELF);
				setState(2204);
				match(DOT);
				setState(2205);
				identifier();
				}
				break;
			case 3:
				_localctx = new Self_subscript_expressionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(2206);
				match(SELF);
				setState(2207);
				match(LBRACK);
				setState(2208);
				function_call_argument_list();
				setState(2209);
				match(RBRACK);
				}
				break;
			case 4:
				_localctx = new Self_initializer_expressionContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(2211);
				match(SELF);
				setState(2212);
				match(DOT);
				setState(2213);
				match(INIT);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Superclass_expressionContext extends ParserRuleContext {
		public Superclass_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_superclass_expression; }
	 
		public Superclass_expressionContext() { }
		public void copyFrom(Superclass_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Superclass_subscript_expressionContext extends Superclass_expressionContext {
		public TerminalNode SUPER() { return getToken(Swift5Parser.SUPER, 0); }
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public Function_call_argument_listContext function_call_argument_list() {
			return getRuleContext(Function_call_argument_listContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Superclass_subscript_expressionContext(Superclass_expressionContext ctx) { copyFrom(ctx); }
	}
	public static class Superclass_initializer_expressionContext extends Superclass_expressionContext {
		public TerminalNode SUPER() { return getToken(Swift5Parser.SUPER, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode INIT() { return getToken(Swift5Parser.INIT, 0); }
		public Superclass_initializer_expressionContext(Superclass_expressionContext ctx) { copyFrom(ctx); }
	}
	public static class Superclass_method_expressionContext extends Superclass_expressionContext {
		public TerminalNode SUPER() { return getToken(Swift5Parser.SUPER, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Superclass_method_expressionContext(Superclass_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Superclass_expressionContext superclass_expression() throws RecognitionException {
		Superclass_expressionContext _localctx = new Superclass_expressionContext(_ctx, getState());
		enterRule(_localctx, 442, RULE_superclass_expression);
		try {
			setState(2227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,260,_ctx) ) {
			case 1:
				_localctx = new Superclass_method_expressionContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(2216);
				match(SUPER);
				setState(2217);
				match(DOT);
				setState(2218);
				identifier();
				}
				break;
			case 2:
				_localctx = new Superclass_subscript_expressionContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(2219);
				match(SUPER);
				setState(2220);
				match(LBRACK);
				setState(2221);
				function_call_argument_list();
				setState(2222);
				match(RBRACK);
				}
				break;
			case 3:
				_localctx = new Superclass_initializer_expressionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(2224);
				match(SUPER);
				setState(2225);
				match(DOT);
				setState(2226);
				match(INIT);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_expressionContext extends ParserRuleContext {
		public TerminalNode LCURLY() { return getToken(Swift5Parser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(Swift5Parser.RCURLY, 0); }
		public Closure_signatureContext closure_signature() {
			return getRuleContext(Closure_signatureContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Closure_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_expression; }
	}

	public final Closure_expressionContext closure_expression() throws RecognitionException {
		Closure_expressionContext _localctx = new Closure_expressionContext(_ctx, getState());
		enterRule(_localctx, 444, RULE_closure_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2229);
			match(LCURLY);
			setState(2231);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,261,_ctx) ) {
			case 1:
				{
				setState(2230);
				closure_signature();
				}
				break;
			}
			setState(2234);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,262,_ctx) ) {
			case 1:
				{
				setState(2233);
				statements();
				}
				break;
			}
			setState(2236);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_signatureContext extends ParserRuleContext {
		public Closure_parameter_clauseContext closure_parameter_clause() {
			return getRuleContext(Closure_parameter_clauseContext.class,0);
		}
		public TerminalNode IN() { return getToken(Swift5Parser.IN, 0); }
		public Capture_listContext capture_list() {
			return getRuleContext(Capture_listContext.class,0);
		}
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public Function_resultContext function_result() {
			return getRuleContext(Function_resultContext.class,0);
		}
		public Closure_signatureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_signature; }
	}

	public final Closure_signatureContext closure_signature() throws RecognitionException {
		Closure_signatureContext _localctx = new Closure_signatureContext(_ctx, getState());
		enterRule(_localctx, 446, RULE_closure_signature);
		int _la;
		try {
			setState(2253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,266,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2239);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LBRACK) {
					{
					setState(2238);
					capture_list();
					}
				}

				setState(2241);
				closure_parameter_clause();
				setState(2243);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
				case 1:
					{
					setState(2242);
					match(THROWS);
					}
					break;
				}
				setState(2246);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
				case 1:
					{
					setState(2245);
					function_result();
					}
					break;
				}
				setState(2248);
				match(IN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2250);
				capture_list();
				setState(2251);
				match(IN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_parameter_clauseContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Closure_parameter_listContext closure_parameter_list() {
			return getRuleContext(Closure_parameter_listContext.class,0);
		}
		public Identifier_listContext identifier_list() {
			return getRuleContext(Identifier_listContext.class,0);
		}
		public Closure_parameter_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_parameter_clause; }
	}

	public final Closure_parameter_clauseContext closure_parameter_clause() throws RecognitionException {
		Closure_parameter_clauseContext _localctx = new Closure_parameter_clauseContext(_ctx, getState());
		enterRule(_localctx, 448, RULE_closure_parameter_clause);
		int _la;
		try {
			setState(2261);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				enterOuterAlt(_localctx, 1);
				{
				setState(2255);
				match(LPAREN);
				setState(2257);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
					{
					setState(2256);
					closure_parameter_list();
					}
				}

				setState(2259);
				match(RPAREN);
				}
				break;
			case AS:
			case ALPHA:
			case CATCH:
			case CLASS:
			case DEFAULT:
			case DO:
			case GUARD:
			case FOR:
			case IN:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case WHILE:
			case PROTOCOL:
			case GET:
			case SET:
			case WILL_SET:
			case DID_SET:
			case INDIRECT:
			case PREFIX:
			case INFIX:
			case LEFT:
			case RIGHT:
			case NONE:
			case PRECEDENCE_GROUP:
			case HIGHER_THAN:
			case LOWER_THAN:
			case ASSIGNMENT:
			case ASSOCIATIVITY:
			case POSTFIX:
			case OPERATOR:
			case OS:
			case ARCH:
			case SWIFT:
			case COMPILER:
			case CAN_IMPORT:
			case TARGET_ENVIRONMENT:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case WEAK:
			case UNOWNED:
			case SAFE:
			case UNSAFE:
			case MUTATING:
			case NONMUTATING:
			case RED:
			case BLUE:
			case GREEN:
			case RESOURCE_NAME:
			case SOME:
			case TYPE:
			case PRECEDENCE:
			case SELF:
			case SELF_BIG:
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case LINUX:
			case WINDOWS:
			case I386:
			case X86_64:
			case ARM:
			case ARM64:
			case SIMULATOR:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
			case FILE:
			case LINE:
			case GETTER:
			case SETTER:
			case Identifier:
			case BACKTICK:
				enterOuterAlt(_localctx, 2);
				{
				setState(2260);
				identifier_list();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_parameter_listContext extends ParserRuleContext {
		public List<Closure_parameterContext> closure_parameter() {
			return getRuleContexts(Closure_parameterContext.class);
		}
		public Closure_parameterContext closure_parameter(int i) {
			return getRuleContext(Closure_parameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Closure_parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_parameter_list; }
	}

	public final Closure_parameter_listContext closure_parameter_list() throws RecognitionException {
		Closure_parameter_listContext _localctx = new Closure_parameter_listContext(_ctx, getState());
		enterRule(_localctx, 450, RULE_closure_parameter_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2263);
			closure_parameter();
			setState(2268);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2264);
				match(COMMA);
				setState(2265);
				closure_parameter();
				}
				}
				setState(2270);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_parameterContext extends ParserRuleContext {
		public IdentifierContext closure_parameter_name;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Range_operatorContext range_operator() {
			return getRuleContext(Range_operatorContext.class,0);
		}
		public Closure_parameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_parameter; }
	}

	public final Closure_parameterContext closure_parameter() throws RecognitionException {
		Closure_parameterContext _localctx = new Closure_parameterContext(_ctx, getState());
		enterRule(_localctx, 452, RULE_closure_parameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2271);
			((Closure_parameterContext)_localctx).closure_parameter_name = identifier();
			setState(2276);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(2272);
				type_annotation();
				setState(2274);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
				case 1:
					{
					setState(2273);
					range_operator();
					}
					break;
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Capture_listContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public Capture_list_itemsContext capture_list_items() {
			return getRuleContext(Capture_list_itemsContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Capture_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture_list; }
	}

	public final Capture_listContext capture_list() throws RecognitionException {
		Capture_listContext _localctx = new Capture_listContext(_ctx, getState());
		enterRule(_localctx, 454, RULE_capture_list);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2278);
			match(LBRACK);
			setState(2279);
			capture_list_items();
			setState(2280);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Capture_list_itemsContext extends ParserRuleContext {
		public List<Capture_list_itemContext> capture_list_item() {
			return getRuleContexts(Capture_list_itemContext.class);
		}
		public Capture_list_itemContext capture_list_item(int i) {
			return getRuleContext(Capture_list_itemContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Capture_list_itemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture_list_items; }
	}

	public final Capture_list_itemsContext capture_list_items() throws RecognitionException {
		Capture_list_itemsContext _localctx = new Capture_list_itemsContext(_ctx, getState());
		enterRule(_localctx, 456, RULE_capture_list_items);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2282);
			capture_list_item();
			setState(2287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2283);
				match(COMMA);
				setState(2284);
				capture_list_item();
				}
				}
				setState(2289);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Capture_list_itemContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Self_expressionContext self_expression() {
			return getRuleContext(Self_expressionContext.class,0);
		}
		public Capture_specifierContext capture_specifier() {
			return getRuleContext(Capture_specifierContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public Capture_list_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture_list_item; }
	}

	public final Capture_list_itemContext capture_list_item() throws RecognitionException {
		Capture_list_itemContext _localctx = new Capture_list_itemContext(_ctx, getState());
		enterRule(_localctx, 458, RULE_capture_list_item);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2291);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,273,_ctx) ) {
			case 1:
				{
				setState(2290);
				capture_specifier();
				}
				break;
			}
			setState(2300);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,275,_ctx) ) {
			case 1:
				{
				setState(2293);
				identifier();
				setState(2295);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
				case 1:
					{
					setState(2294);
					match(EQUAL);
					}
					break;
				}
				setState(2297);
				expression();
				}
				break;
			case 2:
				{
				setState(2299);
				self_expression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Capture_specifierContext extends ParserRuleContext {
		public TerminalNode WEAK() { return getToken(Swift5Parser.WEAK, 0); }
		public TerminalNode UNOWNED() { return getToken(Swift5Parser.UNOWNED, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode SAFE() { return getToken(Swift5Parser.SAFE, 0); }
		public TerminalNode UNSAFE() { return getToken(Swift5Parser.UNSAFE, 0); }
		public Capture_specifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture_specifier; }
	}

	public final Capture_specifierContext capture_specifier() throws RecognitionException {
		Capture_specifierContext _localctx = new Capture_specifierContext(_ctx, getState());
		enterRule(_localctx, 460, RULE_capture_specifier);
		int _la;
		try {
			setState(2309);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WEAK:
				enterOuterAlt(_localctx, 1);
				{
				setState(2302);
				match(WEAK);
				}
				break;
			case UNOWNED:
				enterOuterAlt(_localctx, 2);
				{
				setState(2303);
				match(UNOWNED);
				setState(2307);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LPAREN) {
					{
					setState(2304);
					match(LPAREN);
					setState(2305);
					_la = _input.LA(1);
					if ( !(_la==SAFE || _la==UNSAFE) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(2306);
					match(RPAREN);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Implicit_member_expressionContext extends ParserRuleContext {
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public KeywordContext keyword() {
			return getRuleContext(KeywordContext.class,0);
		}
		public Postfix_expressionContext postfix_expression() {
			return getRuleContext(Postfix_expressionContext.class,0);
		}
		public Implicit_member_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_implicit_member_expression; }
	}

	public final Implicit_member_expressionContext implicit_member_expression() throws RecognitionException {
		Implicit_member_expressionContext _localctx = new Implicit_member_expressionContext(_ctx, getState());
		enterRule(_localctx, 462, RULE_implicit_member_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2311);
			match(DOT);
			setState(2314);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
			case 1:
				{
				setState(2312);
				identifier();
				}
				break;
			case 2:
				{
				setState(2313);
				keyword();
				}
				break;
			}
			setState(2318);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
			case 1:
				{
				setState(2316);
				match(DOT);
				setState(2317);
				postfix_expression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parenthesized_operatorContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Parenthesized_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parenthesized_operator; }
	}

	public final Parenthesized_operatorContext parenthesized_operator() throws RecognitionException {
		Parenthesized_operatorContext _localctx = new Parenthesized_operatorContext(_ctx, getState());
		enterRule(_localctx, 464, RULE_parenthesized_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2320);
			match(LPAREN);
			setState(2321);
			operator();
			setState(2322);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parenthesized_expressionContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Parenthesized_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parenthesized_expression; }
	}

	public final Parenthesized_expressionContext parenthesized_expression() throws RecognitionException {
		Parenthesized_expressionContext _localctx = new Parenthesized_expressionContext(_ctx, getState());
		enterRule(_localctx, 466, RULE_parenthesized_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2324);
			match(LPAREN);
			setState(2325);
			expression();
			setState(2326);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_expressionContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Tuple_elementContext tuple_element() {
			return getRuleContext(Tuple_elementContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(Swift5Parser.COMMA, 0); }
		public Tuple_element_listContext tuple_element_list() {
			return getRuleContext(Tuple_element_listContext.class,0);
		}
		public Tuple_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_expression; }
	}

	public final Tuple_expressionContext tuple_expression() throws RecognitionException {
		Tuple_expressionContext _localctx = new Tuple_expressionContext(_ctx, getState());
		enterRule(_localctx, 468, RULE_tuple_expression);
		try {
			setState(2336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2328);
				match(LPAREN);
				setState(2329);
				match(RPAREN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2330);
				match(LPAREN);
				setState(2331);
				tuple_element();
				setState(2332);
				match(COMMA);
				setState(2333);
				tuple_element_list();
				setState(2334);
				match(RPAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_element_listContext extends ParserRuleContext {
		public List<Tuple_elementContext> tuple_element() {
			return getRuleContexts(Tuple_elementContext.class);
		}
		public Tuple_elementContext tuple_element(int i) {
			return getRuleContext(Tuple_elementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Tuple_element_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_element_list; }
	}

	public final Tuple_element_listContext tuple_element_list() throws RecognitionException {
		Tuple_element_listContext _localctx = new Tuple_element_listContext(_ctx, getState());
		enterRule(_localctx, 470, RULE_tuple_element_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2338);
			tuple_element();
			setState(2343);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2339);
				match(COMMA);
				setState(2340);
				tuple_element();
				}
				}
				setState(2345);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_elementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Tuple_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_element; }
	}

	public final Tuple_elementContext tuple_element() throws RecognitionException {
		Tuple_elementContext _localctx = new Tuple_elementContext(_ctx, getState());
		enterRule(_localctx, 472, RULE_tuple_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2349);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				{
				setState(2346);
				identifier();
				setState(2347);
				match(COLON);
				}
				break;
			}
			setState(2351);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Wildcard_expressionContext extends ParserRuleContext {
		public TerminalNode UNDERSCORE() { return getToken(Swift5Parser.UNDERSCORE, 0); }
		public Wildcard_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_wildcard_expression; }
	}

	public final Wildcard_expressionContext wildcard_expression() throws RecognitionException {
		Wildcard_expressionContext _localctx = new Wildcard_expressionContext(_ctx, getState());
		enterRule(_localctx, 474, RULE_wildcard_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2353);
			match(UNDERSCORE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_expressionContext extends ParserRuleContext {
		public TerminalNode BACKSLASH() { return getToken(Swift5Parser.BACKSLASH, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Key_path_componentsContext key_path_components() {
			return getRuleContext(Key_path_componentsContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Key_path_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_expression; }
	}

	public final Key_path_expressionContext key_path_expression() throws RecognitionException {
		Key_path_expressionContext _localctx = new Key_path_expressionContext(_ctx, getState());
		enterRule(_localctx, 476, RULE_key_path_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2355);
			match(BACKSLASH);
			setState(2357);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (ANY - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (LPAREN - 135)) | (1L << (LBRACK - 135)) | (1L << (AT - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
				{
				setState(2356);
				type(0);
				}
			}

			setState(2359);
			match(DOT);
			setState(2360);
			key_path_components();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_componentsContext extends ParserRuleContext {
		public List<Key_path_componentContext> key_path_component() {
			return getRuleContexts(Key_path_componentContext.class);
		}
		public Key_path_componentContext key_path_component(int i) {
			return getRuleContext(Key_path_componentContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Key_path_componentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_components; }
	}

	public final Key_path_componentsContext key_path_components() throws RecognitionException {
		Key_path_componentsContext _localctx = new Key_path_componentsContext(_ctx, getState());
		enterRule(_localctx, 478, RULE_key_path_components);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2362);
			key_path_component();
			setState(2367);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,284,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2363);
					match(DOT);
					setState(2364);
					key_path_component();
					}
					} 
				}
				setState(2369);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,284,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_componentContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Key_path_postfixesContext key_path_postfixes() {
			return getRuleContext(Key_path_postfixesContext.class,0);
		}
		public Key_path_componentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_component; }
	}

	public final Key_path_componentContext key_path_component() throws RecognitionException {
		Key_path_componentContext _localctx = new Key_path_componentContext(_ctx, getState());
		enterRule(_localctx, 480, RULE_key_path_component);
		try {
			setState(2375);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2370);
				identifier();
				setState(2372);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
				case 1:
					{
					setState(2371);
					key_path_postfixes();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2374);
				key_path_postfixes();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_postfixesContext extends ParserRuleContext {
		public List<Key_path_postfixContext> key_path_postfix() {
			return getRuleContexts(Key_path_postfixContext.class);
		}
		public Key_path_postfixContext key_path_postfix(int i) {
			return getRuleContext(Key_path_postfixContext.class,i);
		}
		public Key_path_postfixesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_postfixes; }
	}

	public final Key_path_postfixesContext key_path_postfixes() throws RecognitionException {
		Key_path_postfixesContext _localctx = new Key_path_postfixesContext(_ctx, getState());
		enterRule(_localctx, 482, RULE_key_path_postfixes);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2378); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(2377);
					key_path_postfix();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2380); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,287,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_postfixContext extends ParserRuleContext {
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public Function_call_argument_listContext function_call_argument_list() {
			return getRuleContext(Function_call_argument_listContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Key_path_postfixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_postfix; }
	}

	public final Key_path_postfixContext key_path_postfix() throws RecognitionException {
		Key_path_postfixContext _localctx = new Key_path_postfixContext(_ctx, getState());
		enterRule(_localctx, 484, RULE_key_path_postfix);
		try {
			setState(2389);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QUESTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(2382);
				match(QUESTION);
				}
				break;
			case BANG:
				enterOuterAlt(_localctx, 2);
				{
				setState(2383);
				match(BANG);
				}
				break;
			case SELF:
				enterOuterAlt(_localctx, 3);
				{
				setState(2384);
				match(SELF);
				}
				break;
			case LBRACK:
				enterOuterAlt(_localctx, 4);
				{
				setState(2385);
				match(LBRACK);
				setState(2386);
				function_call_argument_list();
				setState(2387);
				match(RBRACK);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Selector_expressionContext extends ParserRuleContext {
		public TerminalNode HASH_SELECTOR() { return getToken(Swift5Parser.HASH_SELECTOR, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TerminalNode GETTER() { return getToken(Swift5Parser.GETTER, 0); }
		public TerminalNode SETTER() { return getToken(Swift5Parser.SETTER, 0); }
		public Selector_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selector_expression; }
	}

	public final Selector_expressionContext selector_expression() throws RecognitionException {
		Selector_expressionContext _localctx = new Selector_expressionContext(_ctx, getState());
		enterRule(_localctx, 486, RULE_selector_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2391);
			match(HASH_SELECTOR);
			setState(2392);
			match(LPAREN);
			setState(2395);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				{
				setState(2393);
				_la = _input.LA(1);
				if ( !(_la==GETTER || _la==SETTER) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(2394);
				match(COLON);
				}
				break;
			}
			setState(2397);
			expression();
			setState(2398);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Key_path_string_expressionContext extends ParserRuleContext {
		public TerminalNode HASH_KEYPATH() { return getToken(Swift5Parser.HASH_KEYPATH, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Key_path_string_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_path_string_expression; }
	}

	public final Key_path_string_expressionContext key_path_string_expression() throws RecognitionException {
		Key_path_string_expressionContext _localctx = new Key_path_string_expressionContext(_ctx, getState());
		enterRule(_localctx, 488, RULE_key_path_string_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2400);
			match(HASH_KEYPATH);
			setState(2401);
			match(LPAREN);
			setState(2402);
			expression();
			setState(2403);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Postfix_expressionContext extends ParserRuleContext {
		public Primary_expressionContext primary_expression() {
			return getRuleContext(Primary_expressionContext.class,0);
		}
		public List<Function_call_suffixContext> function_call_suffix() {
			return getRuleContexts(Function_call_suffixContext.class);
		}
		public Function_call_suffixContext function_call_suffix(int i) {
			return getRuleContext(Function_call_suffixContext.class,i);
		}
		public List<Initializer_suffixContext> initializer_suffix() {
			return getRuleContexts(Initializer_suffixContext.class);
		}
		public Initializer_suffixContext initializer_suffix(int i) {
			return getRuleContext(Initializer_suffixContext.class,i);
		}
		public List<Explicit_member_suffixContext> explicit_member_suffix() {
			return getRuleContexts(Explicit_member_suffixContext.class);
		}
		public Explicit_member_suffixContext explicit_member_suffix(int i) {
			return getRuleContext(Explicit_member_suffixContext.class,i);
		}
		public List<Postfix_self_suffixContext> postfix_self_suffix() {
			return getRuleContexts(Postfix_self_suffixContext.class);
		}
		public Postfix_self_suffixContext postfix_self_suffix(int i) {
			return getRuleContext(Postfix_self_suffixContext.class,i);
		}
		public List<Subscript_suffixContext> subscript_suffix() {
			return getRuleContexts(Subscript_suffixContext.class);
		}
		public Subscript_suffixContext subscript_suffix(int i) {
			return getRuleContext(Subscript_suffixContext.class,i);
		}
		public List<Forced_value_suffixContext> forced_value_suffix() {
			return getRuleContexts(Forced_value_suffixContext.class);
		}
		public Forced_value_suffixContext forced_value_suffix(int i) {
			return getRuleContext(Forced_value_suffixContext.class,i);
		}
		public List<Optional_chaining_suffixContext> optional_chaining_suffix() {
			return getRuleContexts(Optional_chaining_suffixContext.class);
		}
		public Optional_chaining_suffixContext optional_chaining_suffix(int i) {
			return getRuleContext(Optional_chaining_suffixContext.class,i);
		}
		public List<Postfix_operatorContext> postfix_operator() {
			return getRuleContexts(Postfix_operatorContext.class);
		}
		public Postfix_operatorContext postfix_operator(int i) {
			return getRuleContext(Postfix_operatorContext.class,i);
		}
		public Postfix_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfix_expression; }
	}

	public final Postfix_expressionContext postfix_expression() throws RecognitionException {
		Postfix_expressionContext _localctx = new Postfix_expressionContext(_ctx, getState());
		enterRule(_localctx, 490, RULE_postfix_expression);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2405);
			primary_expression();
			setState(2415);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,291,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(2413);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
					case 1:
						{
						setState(2406);
						function_call_suffix();
						}
						break;
					case 2:
						{
						setState(2407);
						initializer_suffix();
						}
						break;
					case 3:
						{
						setState(2408);
						explicit_member_suffix();
						}
						break;
					case 4:
						{
						setState(2409);
						postfix_self_suffix();
						}
						break;
					case 5:
						{
						setState(2410);
						subscript_suffix();
						}
						break;
					case 6:
						{
						setState(2411);
						forced_value_suffix();
						}
						break;
					case 7:
						{
						setState(2412);
						optional_chaining_suffix();
						}
						break;
					}
					} 
				}
				setState(2417);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,291,_ctx);
			}
			setState(2421);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,292,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					{
					setState(2418);
					postfix_operator();
					}
					} 
				}
				setState(2423);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,292,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_call_suffixContext extends ParserRuleContext {
		public Trailing_closuresContext trailing_closures() {
			return getRuleContext(Trailing_closuresContext.class,0);
		}
		public Function_call_argument_clauseContext function_call_argument_clause() {
			return getRuleContext(Function_call_argument_clauseContext.class,0);
		}
		public Function_call_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_suffix; }
	}

	public final Function_call_suffixContext function_call_suffix() throws RecognitionException {
		Function_call_suffixContext _localctx = new Function_call_suffixContext(_ctx, getState());
		enterRule(_localctx, 492, RULE_function_call_suffix);
		int _la;
		try {
			setState(2429);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,294,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2425);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LPAREN) {
					{
					setState(2424);
					function_call_argument_clause();
					}
				}

				setState(2427);
				trailing_closures();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2428);
				function_call_argument_clause();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Initializer_suffixContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode INIT() { return getToken(Swift5Parser.INIT, 0); }
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Argument_namesContext argument_names() {
			return getRuleContext(Argument_namesContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Initializer_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer_suffix; }
	}

	public final Initializer_suffixContext initializer_suffix() throws RecognitionException {
		Initializer_suffixContext _localctx = new Initializer_suffixContext(_ctx, getState());
		enterRule(_localctx, 494, RULE_initializer_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2431);
			match(DOT);
			setState(2432);
			match(INIT);
			setState(2437);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,295,_ctx) ) {
			case 1:
				{
				setState(2433);
				match(LPAREN);
				setState(2434);
				argument_names();
				setState(2435);
				match(RPAREN);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Explicit_member_suffixContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode Decimal_digits() { return getToken(Swift5Parser.Decimal_digits, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Generic_argument_clauseContext generic_argument_clause() {
			return getRuleContext(Generic_argument_clauseContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public Argument_namesContext argument_names() {
			return getRuleContext(Argument_namesContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Explicit_member_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicit_member_suffix; }
	}

	public final Explicit_member_suffixContext explicit_member_suffix() throws RecognitionException {
		Explicit_member_suffixContext _localctx = new Explicit_member_suffixContext(_ctx, getState());
		enterRule(_localctx, 496, RULE_explicit_member_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2439);
			match(DOT);
			setState(2449);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Decimal_digits:
				{
				setState(2440);
				match(Decimal_digits);
				}
				break;
			case AS:
			case ALPHA:
			case CATCH:
			case CLASS:
			case DEFAULT:
			case DO:
			case GUARD:
			case FOR:
			case IN:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case WHILE:
			case PROTOCOL:
			case GET:
			case SET:
			case WILL_SET:
			case DID_SET:
			case INDIRECT:
			case PREFIX:
			case INFIX:
			case LEFT:
			case RIGHT:
			case NONE:
			case PRECEDENCE_GROUP:
			case HIGHER_THAN:
			case LOWER_THAN:
			case ASSIGNMENT:
			case ASSOCIATIVITY:
			case POSTFIX:
			case OPERATOR:
			case OS:
			case ARCH:
			case SWIFT:
			case COMPILER:
			case CAN_IMPORT:
			case TARGET_ENVIRONMENT:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case WEAK:
			case UNOWNED:
			case SAFE:
			case UNSAFE:
			case MUTATING:
			case NONMUTATING:
			case RED:
			case BLUE:
			case GREEN:
			case RESOURCE_NAME:
			case SOME:
			case TYPE:
			case PRECEDENCE:
			case SELF:
			case SELF_BIG:
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case LINUX:
			case WINDOWS:
			case I386:
			case X86_64:
			case ARM:
			case ARM64:
			case SIMULATOR:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
			case FILE:
			case LINE:
			case GETTER:
			case SETTER:
			case Identifier:
			case BACKTICK:
				{
				setState(2441);
				identifier();
				setState(2447);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2442);
					generic_argument_clause();
					}
					break;
				case 2:
					{
					setState(2443);
					match(LPAREN);
					setState(2444);
					argument_names();
					setState(2445);
					match(RPAREN);
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Postfix_self_suffixContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public Postfix_self_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfix_self_suffix; }
	}

	public final Postfix_self_suffixContext postfix_self_suffix() throws RecognitionException {
		Postfix_self_suffixContext _localctx = new Postfix_self_suffixContext(_ctx, getState());
		enterRule(_localctx, 498, RULE_postfix_self_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2451);
			match(DOT);
			setState(2452);
			match(SELF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Subscript_suffixContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public Function_call_argument_listContext function_call_argument_list() {
			return getRuleContext(Function_call_argument_listContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Subscript_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subscript_suffix; }
	}

	public final Subscript_suffixContext subscript_suffix() throws RecognitionException {
		Subscript_suffixContext _localctx = new Subscript_suffixContext(_ctx, getState());
		enterRule(_localctx, 500, RULE_subscript_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2454);
			match(LBRACK);
			setState(2455);
			function_call_argument_list();
			setState(2456);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Forced_value_suffixContext extends ParserRuleContext {
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public Forced_value_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forced_value_suffix; }
	}

	public final Forced_value_suffixContext forced_value_suffix() throws RecognitionException {
		Forced_value_suffixContext _localctx = new Forced_value_suffixContext(_ctx, getState());
		enterRule(_localctx, 502, RULE_forced_value_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2458);
			if (!(!SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "!SwiftSupport.isBinaryOp(_input)");
			setState(2459);
			match(BANG);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Optional_chaining_suffixContext extends ParserRuleContext {
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public Optional_chaining_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optional_chaining_suffix; }
	}

	public final Optional_chaining_suffixContext optional_chaining_suffix() throws RecognitionException {
		Optional_chaining_suffixContext _localctx = new Optional_chaining_suffixContext(_ctx, getState());
		enterRule(_localctx, 504, RULE_optional_chaining_suffix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2461);
			if (!(!SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "!SwiftSupport.isBinaryOp(_input)");
			setState(2462);
			match(QUESTION);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_call_argument_clauseContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Function_call_argument_listContext function_call_argument_list() {
			return getRuleContext(Function_call_argument_listContext.class,0);
		}
		public Function_call_argument_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_argument_clause; }
	}

	public final Function_call_argument_clauseContext function_call_argument_clause() throws RecognitionException {
		Function_call_argument_clauseContext _localctx = new Function_call_argument_clauseContext(_ctx, getState());
		enterRule(_localctx, 506, RULE_function_call_argument_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2464);
			match(LPAREN);
			setState(2466);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
			case 1:
				{
				setState(2465);
				function_call_argument_list();
				}
				break;
			}
			setState(2468);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_call_argument_listContext extends ParserRuleContext {
		public List<Function_call_argumentContext> function_call_argument() {
			return getRuleContexts(Function_call_argumentContext.class);
		}
		public Function_call_argumentContext function_call_argument(int i) {
			return getRuleContext(Function_call_argumentContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Function_call_argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_argument_list; }
	}

	public final Function_call_argument_listContext function_call_argument_list() throws RecognitionException {
		Function_call_argument_listContext _localctx = new Function_call_argument_listContext(_ctx, getState());
		enterRule(_localctx, 508, RULE_function_call_argument_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2470);
			function_call_argument();
			setState(2475);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2471);
				match(COMMA);
				setState(2472);
				function_call_argument();
				}
				}
				setState(2477);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_call_argumentContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Argument_nameContext argument_name() {
			return getRuleContext(Argument_nameContext.class,0);
		}
		public Function_call_argumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call_argument; }
	}

	public final Function_call_argumentContext function_call_argument() throws RecognitionException {
		Function_call_argumentContext _localctx = new Function_call_argumentContext(_ctx, getState());
		enterRule(_localctx, 510, RULE_function_call_argument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2479);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,300,_ctx) ) {
			case 1:
				{
				setState(2478);
				argument_name();
				}
				break;
			}
			setState(2484);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,301,_ctx) ) {
			case 1:
				{
				setState(2481);
				identifier();
				}
				break;
			case 2:
				{
				setState(2482);
				expression();
				}
				break;
			case 3:
				{
				setState(2483);
				operator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trailing_closuresContext extends ParserRuleContext {
		public Closure_expressionContext closure_expression() {
			return getRuleContext(Closure_expressionContext.class,0);
		}
		public Labeled_trailing_closuresContext labeled_trailing_closures() {
			return getRuleContext(Labeled_trailing_closuresContext.class,0);
		}
		public Trailing_closuresContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailing_closures; }
	}

	public final Trailing_closuresContext trailing_closures() throws RecognitionException {
		Trailing_closuresContext _localctx = new Trailing_closuresContext(_ctx, getState());
		enterRule(_localctx, 512, RULE_trailing_closures);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2486);
			closure_expression();
			setState(2488);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				{
				setState(2487);
				labeled_trailing_closures();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Labeled_trailing_closuresContext extends ParserRuleContext {
		public List<Labeled_trailing_closureContext> labeled_trailing_closure() {
			return getRuleContexts(Labeled_trailing_closureContext.class);
		}
		public Labeled_trailing_closureContext labeled_trailing_closure(int i) {
			return getRuleContext(Labeled_trailing_closureContext.class,i);
		}
		public Labeled_trailing_closuresContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeled_trailing_closures; }
	}

	public final Labeled_trailing_closuresContext labeled_trailing_closures() throws RecognitionException {
		Labeled_trailing_closuresContext _localctx = new Labeled_trailing_closuresContext(_ctx, getState());
		enterRule(_localctx, 514, RULE_labeled_trailing_closures);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2491); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(2490);
					labeled_trailing_closure();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2493); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,303,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Labeled_trailing_closureContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Closure_expressionContext closure_expression() {
			return getRuleContext(Closure_expressionContext.class,0);
		}
		public Labeled_trailing_closureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeled_trailing_closure; }
	}

	public final Labeled_trailing_closureContext labeled_trailing_closure() throws RecognitionException {
		Labeled_trailing_closureContext _localctx = new Labeled_trailing_closureContext(_ctx, getState());
		enterRule(_localctx, 516, RULE_labeled_trailing_closure);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2495);
			identifier();
			setState(2496);
			match(COLON);
			setState(2497);
			closure_expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Argument_namesContext extends ParserRuleContext {
		public List<Argument_nameContext> argument_name() {
			return getRuleContexts(Argument_nameContext.class);
		}
		public Argument_nameContext argument_name(int i) {
			return getRuleContext(Argument_nameContext.class,i);
		}
		public Argument_namesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_names; }
	}

	public final Argument_namesContext argument_names() throws RecognitionException {
		Argument_namesContext _localctx = new Argument_namesContext(_ctx, getState());
		enterRule(_localctx, 518, RULE_argument_names);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2500); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(2499);
				argument_name();
				}
				}
				setState(2502); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (BACKTICK - 135)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Argument_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Argument_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_name; }
	}

	public final Argument_nameContext argument_name() throws RecognitionException {
		Argument_nameContext _localctx = new Argument_nameContext(_ctx, getState());
		enterRule(_localctx, 520, RULE_argument_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2504);
			identifier();
			setState(2505);
			match(COLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public Function_typeContext function_type() {
			return getRuleContext(Function_typeContext.class,0);
		}
		public Array_typeContext array_type() {
			return getRuleContext(Array_typeContext.class,0);
		}
		public Dictionary_typeContext dictionary_type() {
			return getRuleContext(Dictionary_typeContext.class,0);
		}
		public Protocol_composition_typeContext protocol_composition_type() {
			return getRuleContext(Protocol_composition_typeContext.class,0);
		}
		public Type_identifierContext type_identifier() {
			return getRuleContext(Type_identifierContext.class,0);
		}
		public Tuple_typeContext tuple_type() {
			return getRuleContext(Tuple_typeContext.class,0);
		}
		public Opaque_typeContext opaque_type() {
			return getRuleContext(Opaque_typeContext.class,0);
		}
		public Any_typeContext any_type() {
			return getRuleContext(Any_typeContext.class,0);
		}
		public Self_typeContext self_type() {
			return getRuleContext(Self_typeContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public TerminalNode TYPE() { return getToken(Swift5Parser.TYPE, 0); }
		public TerminalNode PROTOCOL() { return getToken(Swift5Parser.PROTOCOL, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		return type(0);
	}

	private TypeContext type(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeContext _localctx = new TypeContext(_ctx, _parentState);
		TypeContext _prevctx = _localctx;
		int _startState = 522;
		enterRecursionRule(_localctx, 522, RULE_type, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2521);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,305,_ctx) ) {
			case 1:
				{
				setState(2508);
				function_type();
				}
				break;
			case 2:
				{
				setState(2509);
				array_type();
				}
				break;
			case 3:
				{
				setState(2510);
				dictionary_type();
				}
				break;
			case 4:
				{
				setState(2511);
				protocol_composition_type();
				}
				break;
			case 5:
				{
				setState(2512);
				type_identifier();
				}
				break;
			case 6:
				{
				setState(2513);
				tuple_type();
				}
				break;
			case 7:
				{
				setState(2514);
				opaque_type();
				}
				break;
			case 8:
				{
				setState(2515);
				any_type();
				}
				break;
			case 9:
				{
				setState(2516);
				self_type();
				}
				break;
			case 10:
				{
				setState(2517);
				match(LPAREN);
				setState(2518);
				type(0);
				setState(2519);
				match(RPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(2536);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,307,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_type);
					setState(2523);
					if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
					setState(2532);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,306,_ctx) ) {
					case 1:
						{
						setState(2524);
						if (!(!SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "!SwiftSupport.isBinaryOp(_input)");
						setState(2525);
						match(QUESTION);
						}
						break;
					case 2:
						{
						setState(2526);
						if (!(!SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "!SwiftSupport.isBinaryOp(_input)");
						setState(2527);
						match(BANG);
						}
						break;
					case 3:
						{
						setState(2528);
						match(DOT);
						setState(2529);
						match(TYPE);
						}
						break;
					case 4:
						{
						setState(2530);
						match(DOT);
						setState(2531);
						match(PROTOCOL);
						}
						break;
					}
					}
					} 
				}
				setState(2538);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,307,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Type_annotationContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public TerminalNode INOUT() { return getToken(Swift5Parser.INOUT, 0); }
		public Type_annotationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_annotation; }
	}

	public final Type_annotationContext type_annotation() throws RecognitionException {
		Type_annotationContext _localctx = new Type_annotationContext(_ctx, getState());
		enterRule(_localctx, 524, RULE_type_annotation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2539);
			match(COLON);
			setState(2541);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,308,_ctx) ) {
			case 1:
				{
				setState(2540);
				attributes();
				}
				break;
			}
			setState(2544);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INOUT) {
				{
				setState(2543);
				match(INOUT);
				}
			}

			setState(2546);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_identifierContext extends ParserRuleContext {
		public Type_nameContext type_name() {
			return getRuleContext(Type_nameContext.class,0);
		}
		public Generic_argument_clauseContext generic_argument_clause() {
			return getRuleContext(Generic_argument_clauseContext.class,0);
		}
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Type_identifierContext type_identifier() {
			return getRuleContext(Type_identifierContext.class,0);
		}
		public Type_identifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_identifier; }
	}

	public final Type_identifierContext type_identifier() throws RecognitionException {
		Type_identifierContext _localctx = new Type_identifierContext(_ctx, getState());
		enterRule(_localctx, 526, RULE_type_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2548);
			type_name();
			setState(2550);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,310,_ctx) ) {
			case 1:
				{
				setState(2549);
				generic_argument_clause();
				}
				break;
			}
			setState(2554);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,311,_ctx) ) {
			case 1:
				{
				setState(2552);
				match(DOT);
				setState(2553);
				type_identifier();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_nameContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_name; }
	}

	public final Type_nameContext type_name() throws RecognitionException {
		Type_nameContext _localctx = new Type_nameContext(_ctx, getState());
		enterRule(_localctx, 528, RULE_type_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2556);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_typeContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Tuple_type_element_listContext tuple_type_element_list() {
			return getRuleContext(Tuple_type_element_listContext.class,0);
		}
		public Tuple_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_type; }
	}

	public final Tuple_typeContext tuple_type() throws RecognitionException {
		Tuple_typeContext _localctx = new Tuple_typeContext(_ctx, getState());
		enterRule(_localctx, 530, RULE_tuple_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2558);
			match(LPAREN);
			setState(2560);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (ANY - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (LPAREN - 135)) | (1L << (LBRACK - 135)) | (1L << (AT - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
				{
				setState(2559);
				tuple_type_element_list();
				}
			}

			setState(2562);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_type_element_listContext extends ParserRuleContext {
		public List<Tuple_type_elementContext> tuple_type_element() {
			return getRuleContexts(Tuple_type_elementContext.class);
		}
		public Tuple_type_elementContext tuple_type_element(int i) {
			return getRuleContext(Tuple_type_elementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Tuple_type_element_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_type_element_list; }
	}

	public final Tuple_type_element_listContext tuple_type_element_list() throws RecognitionException {
		Tuple_type_element_listContext _localctx = new Tuple_type_element_listContext(_ctx, getState());
		enterRule(_localctx, 532, RULE_tuple_type_element_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2564);
			tuple_type_element();
			setState(2569);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2565);
				match(COMMA);
				setState(2566);
				tuple_type_element();
				}
				}
				setState(2571);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_type_elementContext extends ParserRuleContext {
		public Element_nameContext element_name() {
			return getRuleContext(Element_nameContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Tuple_type_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_type_element; }
	}

	public final Tuple_type_elementContext tuple_type_element() throws RecognitionException {
		Tuple_type_elementContext _localctx = new Tuple_type_elementContext(_ctx, getState());
		enterRule(_localctx, 534, RULE_tuple_type_element);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2576);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,314,_ctx) ) {
			case 1:
				{
				setState(2572);
				element_name();
				setState(2573);
				type_annotation();
				}
				break;
			case 2:
				{
				setState(2575);
				type(0);
				}
				break;
			}
			setState(2580);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQUAL) {
				{
				setState(2578);
				match(EQUAL);
				setState(2579);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Element_nameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public Element_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element_name; }
	}

	public final Element_nameContext element_name() throws RecognitionException {
		Element_nameContext _localctx = new Element_nameContext(_ctx, getState());
		enterRule(_localctx, 536, RULE_element_name);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2583); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(2582);
				identifier();
				}
				}
				setState(2585); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (BACKTICK - 135)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_typeContext extends ParserRuleContext {
		public Function_type_argument_clauseContext function_type_argument_clause() {
			return getRuleContext(Function_type_argument_clauseContext.class,0);
		}
		public Arrow_operatorContext arrow_operator() {
			return getRuleContext(Arrow_operatorContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public Function_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_type; }
	}

	public final Function_typeContext function_type() throws RecognitionException {
		Function_typeContext _localctx = new Function_typeContext(_ctx, getState());
		enterRule(_localctx, 538, RULE_function_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2588);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AT) {
				{
				setState(2587);
				attributes();
				}
			}

			setState(2590);
			function_type_argument_clause();
			setState(2592);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,318,_ctx) ) {
			case 1:
				{
				setState(2591);
				match(THROWS);
				}
				break;
			}
			setState(2594);
			arrow_operator();
			setState(2595);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_type_argument_clauseContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(Swift5Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(Swift5Parser.RPAREN, 0); }
		public Function_type_argument_listContext function_type_argument_list() {
			return getRuleContext(Function_type_argument_listContext.class,0);
		}
		public Range_operatorContext range_operator() {
			return getRuleContext(Range_operatorContext.class,0);
		}
		public Function_type_argument_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_type_argument_clause; }
	}

	public final Function_type_argument_clauseContext function_type_argument_clause() throws RecognitionException {
		Function_type_argument_clauseContext _localctx = new Function_type_argument_clauseContext(_ctx, getState());
		enterRule(_localctx, 540, RULE_function_type_argument_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2597);
			match(LPAREN);
			setState(2602);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (ANY - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (INOUT - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (LPAREN - 135)) | (1L << (LBRACK - 135)) | (1L << (AT - 135)) | (1L << (BACKTICK - 135)))) != 0)) {
				{
				setState(2598);
				function_type_argument_list();
				setState(2600);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,319,_ctx) ) {
				case 1:
					{
					setState(2599);
					range_operator();
					}
					break;
				}
				}
			}

			setState(2604);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_type_argument_listContext extends ParserRuleContext {
		public List<Function_type_argumentContext> function_type_argument() {
			return getRuleContexts(Function_type_argumentContext.class);
		}
		public Function_type_argumentContext function_type_argument(int i) {
			return getRuleContext(Function_type_argumentContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Function_type_argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_type_argument_list; }
	}

	public final Function_type_argument_listContext function_type_argument_list() throws RecognitionException {
		Function_type_argument_listContext _localctx = new Function_type_argument_listContext(_ctx, getState());
		enterRule(_localctx, 542, RULE_function_type_argument_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2606);
			function_type_argument();
			setState(2611);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,321,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2607);
					match(COMMA);
					setState(2608);
					function_type_argument();
					}
					} 
				}
				setState(2613);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,321,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_type_argumentContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AttributesContext attributes() {
			return getRuleContext(AttributesContext.class,0);
		}
		public TerminalNode INOUT() { return getToken(Swift5Parser.INOUT, 0); }
		public Argument_labelContext argument_label() {
			return getRuleContext(Argument_labelContext.class,0);
		}
		public Type_annotationContext type_annotation() {
			return getRuleContext(Type_annotationContext.class,0);
		}
		public Function_type_argumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_type_argument; }
	}

	public final Function_type_argumentContext function_type_argument() throws RecognitionException {
		Function_type_argumentContext _localctx = new Function_type_argumentContext(_ctx, getState());
		enterRule(_localctx, 544, RULE_function_type_argument);
		int _la;
		try {
			setState(2624);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,324,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2615);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,322,_ctx) ) {
				case 1:
					{
					setState(2614);
					attributes();
					}
					break;
				}
				setState(2618);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INOUT) {
					{
					setState(2617);
					match(INOUT);
					}
				}

				setState(2620);
				type(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2621);
				argument_label();
				setState(2622);
				type_annotation();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Argument_labelContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public Argument_labelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_label; }
	}

	public final Argument_labelContext argument_label() throws RecognitionException {
		Argument_labelContext _localctx = new Argument_labelContext(_ctx, getState());
		enterRule(_localctx, 546, RULE_argument_label);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2627); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(2626);
				identifier();
				}
				}
				setState(2629); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || ((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (GETTER - 135)) | (1L << (SETTER - 135)) | (1L << (Identifier - 135)) | (1L << (BACKTICK - 135)))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_typeContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Array_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_type; }
	}

	public final Array_typeContext array_type() throws RecognitionException {
		Array_typeContext _localctx = new Array_typeContext(_ctx, getState());
		enterRule(_localctx, 548, RULE_array_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2631);
			match(LBRACK);
			setState(2632);
			type(0);
			setState(2633);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dictionary_typeContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(Swift5Parser.LBRACK, 0); }
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public TerminalNode RBRACK() { return getToken(Swift5Parser.RBRACK, 0); }
		public Dictionary_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dictionary_type; }
	}

	public final Dictionary_typeContext dictionary_type() throws RecognitionException {
		Dictionary_typeContext _localctx = new Dictionary_typeContext(_ctx, getState());
		enterRule(_localctx, 550, RULE_dictionary_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2635);
			match(LBRACK);
			setState(2636);
			type(0);
			setState(2637);
			match(COLON);
			setState(2638);
			type(0);
			setState(2639);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Protocol_composition_typeContext extends ParserRuleContext {
		public List<Type_identifierContext> type_identifier() {
			return getRuleContexts(Type_identifierContext.class);
		}
		public Type_identifierContext type_identifier(int i) {
			return getRuleContext(Type_identifierContext.class,i);
		}
		public List<TerminalNode> AND() { return getTokens(Swift5Parser.AND); }
		public TerminalNode AND(int i) {
			return getToken(Swift5Parser.AND, i);
		}
		public Trailing_composition_andContext trailing_composition_and() {
			return getRuleContext(Trailing_composition_andContext.class,0);
		}
		public Protocol_composition_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_protocol_composition_type; }
	}

	public final Protocol_composition_typeContext protocol_composition_type() throws RecognitionException {
		Protocol_composition_typeContext _localctx = new Protocol_composition_typeContext(_ctx, getState());
		enterRule(_localctx, 552, RULE_protocol_composition_type);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2641);
			type_identifier();
			setState(2646);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,326,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2642);
					match(AND);
					setState(2643);
					type_identifier();
					}
					} 
				}
				setState(2648);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,326,_ctx);
			}
			setState(2650);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,327,_ctx) ) {
			case 1:
				{
				setState(2649);
				trailing_composition_and();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trailing_composition_andContext extends ParserRuleContext {
		public TerminalNode AND() { return getToken(Swift5Parser.AND, 0); }
		public Trailing_composition_andContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailing_composition_and; }
	}

	public final Trailing_composition_andContext trailing_composition_and() throws RecognitionException {
		Trailing_composition_andContext _localctx = new Trailing_composition_andContext(_ctx, getState());
		enterRule(_localctx, 554, RULE_trailing_composition_and);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2652);
			if (!(!SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "!SwiftSupport.isBinaryOp(_input)");
			setState(2653);
			match(AND);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Opaque_typeContext extends ParserRuleContext {
		public TerminalNode SOME() { return getToken(Swift5Parser.SOME, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Opaque_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opaque_type; }
	}

	public final Opaque_typeContext opaque_type() throws RecognitionException {
		Opaque_typeContext _localctx = new Opaque_typeContext(_ctx, getState());
		enterRule(_localctx, 556, RULE_opaque_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2655);
			match(SOME);
			setState(2656);
			type(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Any_typeContext extends ParserRuleContext {
		public TerminalNode ANY() { return getToken(Swift5Parser.ANY, 0); }
		public Any_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_any_type; }
	}

	public final Any_typeContext any_type() throws RecognitionException {
		Any_typeContext _localctx = new Any_typeContext(_ctx, getState());
		enterRule(_localctx, 558, RULE_any_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2658);
			match(ANY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Self_typeContext extends ParserRuleContext {
		public TerminalNode SELF_BIG() { return getToken(Swift5Parser.SELF_BIG, 0); }
		public Self_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_self_type; }
	}

	public final Self_typeContext self_type() throws RecognitionException {
		Self_typeContext _localctx = new Self_typeContext(_ctx, getState());
		enterRule(_localctx, 560, RULE_self_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2660);
			match(SELF_BIG);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_inheritance_clauseContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(Swift5Parser.COLON, 0); }
		public Type_inheritance_listContext type_inheritance_list() {
			return getRuleContext(Type_inheritance_listContext.class,0);
		}
		public Type_inheritance_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_inheritance_clause; }
	}

	public final Type_inheritance_clauseContext type_inheritance_clause() throws RecognitionException {
		Type_inheritance_clauseContext _localctx = new Type_inheritance_clauseContext(_ctx, getState());
		enterRule(_localctx, 562, RULE_type_inheritance_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2662);
			match(COLON);
			setState(2663);
			type_inheritance_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_inheritance_listContext extends ParserRuleContext {
		public List<Type_identifierContext> type_identifier() {
			return getRuleContexts(Type_identifierContext.class);
		}
		public Type_identifierContext type_identifier(int i) {
			return getRuleContext(Type_identifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Type_inheritance_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_inheritance_list; }
	}

	public final Type_inheritance_listContext type_inheritance_list() throws RecognitionException {
		Type_inheritance_listContext _localctx = new Type_inheritance_listContext(_ctx, getState());
		enterRule(_localctx, 564, RULE_type_inheritance_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2665);
			type_identifier();
			setState(2670);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(2666);
				match(COMMA);
				setState(2667);
				type_identifier();
				}
				}
				setState(2672);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode LINUX() { return getToken(Swift5Parser.LINUX, 0); }
		public TerminalNode WINDOWS() { return getToken(Swift5Parser.WINDOWS, 0); }
		public TerminalNode ALPHA() { return getToken(Swift5Parser.ALPHA, 0); }
		public TerminalNode ARCH() { return getToken(Swift5Parser.ARCH, 0); }
		public TerminalNode ARM() { return getToken(Swift5Parser.ARM, 0); }
		public TerminalNode ARM64() { return getToken(Swift5Parser.ARM64, 0); }
		public TerminalNode ASSIGNMENT() { return getToken(Swift5Parser.ASSIGNMENT, 0); }
		public TerminalNode BLUE() { return getToken(Swift5Parser.BLUE, 0); }
		public TerminalNode CAN_IMPORT() { return getToken(Swift5Parser.CAN_IMPORT, 0); }
		public TerminalNode COMPILER() { return getToken(Swift5Parser.COMPILER, 0); }
		public TerminalNode FILE() { return getToken(Swift5Parser.FILE, 0); }
		public TerminalNode GREEN() { return getToken(Swift5Parser.GREEN, 0); }
		public TerminalNode HIGHER_THAN() { return getToken(Swift5Parser.HIGHER_THAN, 0); }
		public TerminalNode I386() { return getToken(Swift5Parser.I386, 0); }
		public TerminalNode I_OS() { return getToken(Swift5Parser.I_OS, 0); }
		public TerminalNode OSX() { return getToken(Swift5Parser.OSX, 0); }
		public TerminalNode I_OS_APPLICATION_EXTENSION() { return getToken(Swift5Parser.I_OS_APPLICATION_EXTENSION, 0); }
		public TerminalNode LINE() { return getToken(Swift5Parser.LINE, 0); }
		public TerminalNode LOWER_THAN() { return getToken(Swift5Parser.LOWER_THAN, 0); }
		public TerminalNode MAC_CATALYST() { return getToken(Swift5Parser.MAC_CATALYST, 0); }
		public TerminalNode MAC_CATALYST_APPLICATION_EXTENSION() { return getToken(Swift5Parser.MAC_CATALYST_APPLICATION_EXTENSION, 0); }
		public TerminalNode MAC_OS() { return getToken(Swift5Parser.MAC_OS, 0); }
		public TerminalNode MAC_OS_APPLICATION_EXTENSION() { return getToken(Swift5Parser.MAC_OS_APPLICATION_EXTENSION, 0); }
		public TerminalNode OS() { return getToken(Swift5Parser.OS, 0); }
		public TerminalNode PRECEDENCE_GROUP() { return getToken(Swift5Parser.PRECEDENCE_GROUP, 0); }
		public TerminalNode RED() { return getToken(Swift5Parser.RED, 0); }
		public TerminalNode RESOURCE_NAME() { return getToken(Swift5Parser.RESOURCE_NAME, 0); }
		public TerminalNode SAFE() { return getToken(Swift5Parser.SAFE, 0); }
		public TerminalNode SIMULATOR() { return getToken(Swift5Parser.SIMULATOR, 0); }
		public TerminalNode SOME() { return getToken(Swift5Parser.SOME, 0); }
		public TerminalNode SWIFT() { return getToken(Swift5Parser.SWIFT, 0); }
		public TerminalNode TARGET_ENVIRONMENT() { return getToken(Swift5Parser.TARGET_ENVIRONMENT, 0); }
		public TerminalNode TV_OS() { return getToken(Swift5Parser.TV_OS, 0); }
		public TerminalNode UNSAFE() { return getToken(Swift5Parser.UNSAFE, 0); }
		public TerminalNode WATCH_OS() { return getToken(Swift5Parser.WATCH_OS, 0); }
		public TerminalNode X86_64() { return getToken(Swift5Parser.X86_64, 0); }
		public TerminalNode ASSOCIATIVITY() { return getToken(Swift5Parser.ASSOCIATIVITY, 0); }
		public TerminalNode CONVENIENCE() { return getToken(Swift5Parser.CONVENIENCE, 0); }
		public TerminalNode DYNAMIC() { return getToken(Swift5Parser.DYNAMIC, 0); }
		public TerminalNode DID_SET() { return getToken(Swift5Parser.DID_SET, 0); }
		public TerminalNode FINAL() { return getToken(Swift5Parser.FINAL, 0); }
		public TerminalNode GET() { return getToken(Swift5Parser.GET, 0); }
		public TerminalNode INFIX() { return getToken(Swift5Parser.INFIX, 0); }
		public TerminalNode INDIRECT() { return getToken(Swift5Parser.INDIRECT, 0); }
		public TerminalNode LAZY() { return getToken(Swift5Parser.LAZY, 0); }
		public TerminalNode LEFT() { return getToken(Swift5Parser.LEFT, 0); }
		public TerminalNode MUTATING() { return getToken(Swift5Parser.MUTATING, 0); }
		public TerminalNode NONE() { return getToken(Swift5Parser.NONE, 0); }
		public TerminalNode NONMUTATING() { return getToken(Swift5Parser.NONMUTATING, 0); }
		public TerminalNode OPTIONAL() { return getToken(Swift5Parser.OPTIONAL, 0); }
		public TerminalNode OVERRIDE() { return getToken(Swift5Parser.OVERRIDE, 0); }
		public TerminalNode POSTFIX() { return getToken(Swift5Parser.POSTFIX, 0); }
		public TerminalNode PRECEDENCE() { return getToken(Swift5Parser.PRECEDENCE, 0); }
		public TerminalNode PREFIX() { return getToken(Swift5Parser.PREFIX, 0); }
		public TerminalNode PROTOCOL() { return getToken(Swift5Parser.PROTOCOL, 0); }
		public TerminalNode REQUIRED() { return getToken(Swift5Parser.REQUIRED, 0); }
		public TerminalNode RIGHT() { return getToken(Swift5Parser.RIGHT, 0); }
		public TerminalNode SET() { return getToken(Swift5Parser.SET, 0); }
		public TerminalNode TYPE() { return getToken(Swift5Parser.TYPE, 0); }
		public TerminalNode UNOWNED() { return getToken(Swift5Parser.UNOWNED, 0); }
		public TerminalNode WEAK() { return getToken(Swift5Parser.WEAK, 0); }
		public TerminalNode WILL_SET() { return getToken(Swift5Parser.WILL_SET, 0); }
		public TerminalNode IN() { return getToken(Swift5Parser.IN, 0); }
		public TerminalNode FOR() { return getToken(Swift5Parser.FOR, 0); }
		public TerminalNode GUARD() { return getToken(Swift5Parser.GUARD, 0); }
		public TerminalNode WHERE() { return getToken(Swift5Parser.WHERE, 0); }
		public TerminalNode DEFAULT() { return getToken(Swift5Parser.DEFAULT, 0); }
		public TerminalNode INTERNAL() { return getToken(Swift5Parser.INTERNAL, 0); }
		public TerminalNode PRIVATE() { return getToken(Swift5Parser.PRIVATE, 0); }
		public TerminalNode PUBLIC() { return getToken(Swift5Parser.PUBLIC, 0); }
		public TerminalNode OPEN() { return getToken(Swift5Parser.OPEN, 0); }
		public TerminalNode AS() { return getToken(Swift5Parser.AS, 0); }
		public TerminalNode WHILE() { return getToken(Swift5Parser.WHILE, 0); }
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode SELF_BIG() { return getToken(Swift5Parser.SELF_BIG, 0); }
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public TerminalNode GETTER() { return getToken(Swift5Parser.GETTER, 0); }
		public TerminalNode SETTER() { return getToken(Swift5Parser.SETTER, 0); }
		public TerminalNode OPERATOR() { return getToken(Swift5Parser.OPERATOR, 0); }
		public TerminalNode DO() { return getToken(Swift5Parser.DO, 0); }
		public TerminalNode CATCH() { return getToken(Swift5Parser.CATCH, 0); }
		public TerminalNode Identifier() { return getToken(Swift5Parser.Identifier, 0); }
		public List<TerminalNode> BACKTICK() { return getTokens(Swift5Parser.BACKTICK); }
		public TerminalNode BACKTICK(int i) {
			return getToken(Swift5Parser.BACKTICK, i);
		}
		public KeywordContext keyword() {
			return getRuleContext(KeywordContext.class,0);
		}
		public TerminalNode DOLLAR() { return getToken(Swift5Parser.DOLLAR, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 566, RULE_identifier);
		int _la;
		try {
			setState(2682);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AS:
			case ALPHA:
			case CATCH:
			case CLASS:
			case DEFAULT:
			case DO:
			case GUARD:
			case FOR:
			case IN:
			case INTERNAL:
			case FINAL:
			case OPEN:
			case PRIVATE:
			case PUBLIC:
			case WHERE:
			case WHILE:
			case PROTOCOL:
			case GET:
			case SET:
			case WILL_SET:
			case DID_SET:
			case INDIRECT:
			case PREFIX:
			case INFIX:
			case LEFT:
			case RIGHT:
			case NONE:
			case PRECEDENCE_GROUP:
			case HIGHER_THAN:
			case LOWER_THAN:
			case ASSIGNMENT:
			case ASSOCIATIVITY:
			case POSTFIX:
			case OPERATOR:
			case OS:
			case ARCH:
			case SWIFT:
			case COMPILER:
			case CAN_IMPORT:
			case TARGET_ENVIRONMENT:
			case CONVENIENCE:
			case DYNAMIC:
			case LAZY:
			case OPTIONAL:
			case OVERRIDE:
			case REQUIRED:
			case WEAK:
			case UNOWNED:
			case SAFE:
			case UNSAFE:
			case MUTATING:
			case NONMUTATING:
			case RED:
			case BLUE:
			case GREEN:
			case RESOURCE_NAME:
			case SOME:
			case TYPE:
			case PRECEDENCE:
			case SELF:
			case SELF_BIG:
			case MAC_OS:
			case I_OS:
			case OSX:
			case WATCH_OS:
			case TV_OS:
			case LINUX:
			case WINDOWS:
			case I386:
			case X86_64:
			case ARM:
			case ARM64:
			case SIMULATOR:
			case MAC_CATALYST:
			case I_OS_APPLICATION_EXTENSION:
			case MAC_CATALYST_APPLICATION_EXTENSION:
			case MAC_OS_APPLICATION_EXTENSION:
			case FILE:
			case LINE:
			case GETTER:
			case SETTER:
				enterOuterAlt(_localctx, 1);
				{
				setState(2673);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << ALPHA) | (1L << CATCH) | (1L << CLASS) | (1L << DEFAULT) | (1L << DO) | (1L << GUARD) | (1L << FOR) | (1L << IN) | (1L << INTERNAL) | (1L << FINAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << PROTOCOL) | (1L << GET) | (1L << SET) | (1L << WILL_SET) | (1L << DID_SET) | (1L << INDIRECT) | (1L << PREFIX) | (1L << INFIX) | (1L << LEFT) | (1L << RIGHT) | (1L << NONE) | (1L << PRECEDENCE_GROUP) | (1L << HIGHER_THAN) | (1L << LOWER_THAN) | (1L << ASSIGNMENT) | (1L << ASSOCIATIVITY) | (1L << POSTFIX) | (1L << OPERATOR) | (1L << OS) | (1L << ARCH) | (1L << SWIFT) | (1L << COMPILER))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CAN_IMPORT - 64)) | (1L << (TARGET_ENVIRONMENT - 64)) | (1L << (CONVENIENCE - 64)) | (1L << (DYNAMIC - 64)) | (1L << (LAZY - 64)) | (1L << (OPTIONAL - 64)) | (1L << (OVERRIDE - 64)) | (1L << (REQUIRED - 64)) | (1L << (WEAK - 64)) | (1L << (UNOWNED - 64)) | (1L << (SAFE - 64)) | (1L << (UNSAFE - 64)) | (1L << (MUTATING - 64)) | (1L << (NONMUTATING - 64)) | (1L << (RED - 64)) | (1L << (BLUE - 64)) | (1L << (GREEN - 64)) | (1L << (RESOURCE_NAME - 64)) | (1L << (SOME - 64)) | (1L << (TYPE - 64)) | (1L << (PRECEDENCE - 64)) | (1L << (SELF - 64)) | (1L << (SELF_BIG - 64)) | (1L << (MAC_OS - 64)) | (1L << (I_OS - 64)) | (1L << (OSX - 64)) | (1L << (WATCH_OS - 64)) | (1L << (TV_OS - 64)) | (1L << (LINUX - 64)) | (1L << (WINDOWS - 64)) | (1L << (I386 - 64)) | (1L << (X86_64 - 64)) | (1L << (ARM - 64)) | (1L << (ARM64 - 64)) | (1L << (SIMULATOR - 64)) | (1L << (MAC_CATALYST - 64)) | (1L << (I_OS_APPLICATION_EXTENSION - 64)) | (1L << (MAC_CATALYST_APPLICATION_EXTENSION - 64)) | (1L << (MAC_OS_APPLICATION_EXTENSION - 64)) | (1L << (FILE - 64)) | (1L << (LINE - 64)))) != 0) || _la==GETTER || _la==SETTER) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(2674);
				match(Identifier);
				}
				break;
			case BACKTICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(2675);
				match(BACKTICK);
				setState(2679);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case AS:
				case BREAK:
				case CASE:
				case CATCH:
				case CLASS:
				case CONTINUE:
				case DEFAULT:
				case DEFER:
				case DO:
				case GUARD:
				case ELSE:
				case ENUM:
				case FOR:
				case FALLTHROUGH:
				case FUNC:
				case IN:
				case IF:
				case IMPORT:
				case INTERNAL:
				case OPEN:
				case PRIVATE:
				case PUBLIC:
				case WHERE:
				case WHILE:
				case LET:
				case VAR:
				case PROTOCOL:
				case REPEAT:
				case SWITCH:
				case STRUCT:
				case RETURN:
				case THROW:
				case THROWS:
				case RETHROWS:
				case INIT:
				case DEINIT:
				case ASSOCIATED_TYPE:
				case EXTENSION:
				case SUBSCRIPT:
				case OPERATOR:
				case TYPEALIAS:
				case STATIC:
				case FILE_PRIVATE:
				case IS:
				case TRY:
				case SUPER:
				case ANY:
				case FALSE:
				case TRUE:
				case NIL:
				case INOUT:
				case SELF:
				case SELF_BIG:
				case SOURCE_LOCATION:
				case ERROR:
				case WARNING:
				case AVAILABLE:
				case HASH_IF:
				case HASH_ELSEIF:
				case HASH_ELSE:
				case HASH_ENDIF:
				case HASH_FILE:
				case HASH_FILE_ID:
				case HASH_FILE_PATH:
				case HASH_LINE:
				case HASH_COLUMN:
				case HASH_FUNCTION:
				case HASH_SELECTOR:
				case HASH_COLOR_LITERAL:
				case HASH_FILE_LITERAL:
				case HASH_IMAGE_LITERAL:
				case UNDERSCORE:
					{
					setState(2676);
					keyword();
					}
					break;
				case Identifier:
					{
					setState(2677);
					match(Identifier);
					}
					break;
				case DOLLAR:
					{
					setState(2678);
					match(DOLLAR);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2681);
				match(BACKTICK);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Identifier_listContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public Identifier_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier_list; }
	}

	public final Identifier_listContext identifier_list() throws RecognitionException {
		Identifier_listContext _localctx = new Identifier_listContext(_ctx, getState());
		enterRule(_localctx, 568, RULE_identifier_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2684);
			identifier();
			setState(2689);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,331,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2685);
					match(COMMA);
					setState(2686);
					identifier();
					}
					} 
				}
				setState(2691);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,331,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeywordContext extends ParserRuleContext {
		public TerminalNode ASSOCIATED_TYPE() { return getToken(Swift5Parser.ASSOCIATED_TYPE, 0); }
		public TerminalNode CLASS() { return getToken(Swift5Parser.CLASS, 0); }
		public TerminalNode DEINIT() { return getToken(Swift5Parser.DEINIT, 0); }
		public TerminalNode ENUM() { return getToken(Swift5Parser.ENUM, 0); }
		public TerminalNode EXTENSION() { return getToken(Swift5Parser.EXTENSION, 0); }
		public TerminalNode FILE_PRIVATE() { return getToken(Swift5Parser.FILE_PRIVATE, 0); }
		public TerminalNode FUNC() { return getToken(Swift5Parser.FUNC, 0); }
		public TerminalNode IMPORT() { return getToken(Swift5Parser.IMPORT, 0); }
		public TerminalNode INIT() { return getToken(Swift5Parser.INIT, 0); }
		public TerminalNode INOUT() { return getToken(Swift5Parser.INOUT, 0); }
		public TerminalNode INTERNAL() { return getToken(Swift5Parser.INTERNAL, 0); }
		public TerminalNode LET() { return getToken(Swift5Parser.LET, 0); }
		public TerminalNode OPEN() { return getToken(Swift5Parser.OPEN, 0); }
		public TerminalNode OPERATOR() { return getToken(Swift5Parser.OPERATOR, 0); }
		public TerminalNode PRIVATE() { return getToken(Swift5Parser.PRIVATE, 0); }
		public TerminalNode PROTOCOL() { return getToken(Swift5Parser.PROTOCOL, 0); }
		public TerminalNode PUBLIC() { return getToken(Swift5Parser.PUBLIC, 0); }
		public TerminalNode RETHROWS() { return getToken(Swift5Parser.RETHROWS, 0); }
		public TerminalNode STATIC() { return getToken(Swift5Parser.STATIC, 0); }
		public TerminalNode STRUCT() { return getToken(Swift5Parser.STRUCT, 0); }
		public TerminalNode SUBSCRIPT() { return getToken(Swift5Parser.SUBSCRIPT, 0); }
		public TerminalNode TYPEALIAS() { return getToken(Swift5Parser.TYPEALIAS, 0); }
		public TerminalNode VAR() { return getToken(Swift5Parser.VAR, 0); }
		public TerminalNode BREAK() { return getToken(Swift5Parser.BREAK, 0); }
		public TerminalNode CASE() { return getToken(Swift5Parser.CASE, 0); }
		public TerminalNode CONTINUE() { return getToken(Swift5Parser.CONTINUE, 0); }
		public TerminalNode DEFAULT() { return getToken(Swift5Parser.DEFAULT, 0); }
		public TerminalNode DEFER() { return getToken(Swift5Parser.DEFER, 0); }
		public TerminalNode DO() { return getToken(Swift5Parser.DO, 0); }
		public TerminalNode ELSE() { return getToken(Swift5Parser.ELSE, 0); }
		public TerminalNode FALLTHROUGH() { return getToken(Swift5Parser.FALLTHROUGH, 0); }
		public TerminalNode FOR() { return getToken(Swift5Parser.FOR, 0); }
		public TerminalNode GUARD() { return getToken(Swift5Parser.GUARD, 0); }
		public TerminalNode IF() { return getToken(Swift5Parser.IF, 0); }
		public TerminalNode IN() { return getToken(Swift5Parser.IN, 0); }
		public TerminalNode REPEAT() { return getToken(Swift5Parser.REPEAT, 0); }
		public TerminalNode RETURN() { return getToken(Swift5Parser.RETURN, 0); }
		public TerminalNode SWITCH() { return getToken(Swift5Parser.SWITCH, 0); }
		public TerminalNode WHERE() { return getToken(Swift5Parser.WHERE, 0); }
		public TerminalNode WHILE() { return getToken(Swift5Parser.WHILE, 0); }
		public TerminalNode AS() { return getToken(Swift5Parser.AS, 0); }
		public TerminalNode ANY() { return getToken(Swift5Parser.ANY, 0); }
		public TerminalNode CATCH() { return getToken(Swift5Parser.CATCH, 0); }
		public TerminalNode FALSE() { return getToken(Swift5Parser.FALSE, 0); }
		public TerminalNode IS() { return getToken(Swift5Parser.IS, 0); }
		public TerminalNode NIL() { return getToken(Swift5Parser.NIL, 0); }
		public TerminalNode SUPER() { return getToken(Swift5Parser.SUPER, 0); }
		public TerminalNode SELF() { return getToken(Swift5Parser.SELF, 0); }
		public TerminalNode SELF_BIG() { return getToken(Swift5Parser.SELF_BIG, 0); }
		public TerminalNode THROW() { return getToken(Swift5Parser.THROW, 0); }
		public TerminalNode THROWS() { return getToken(Swift5Parser.THROWS, 0); }
		public TerminalNode TRUE() { return getToken(Swift5Parser.TRUE, 0); }
		public TerminalNode TRY() { return getToken(Swift5Parser.TRY, 0); }
		public TerminalNode UNDERSCORE() { return getToken(Swift5Parser.UNDERSCORE, 0); }
		public TerminalNode AVAILABLE() { return getToken(Swift5Parser.AVAILABLE, 0); }
		public TerminalNode HASH_COLOR_LITERAL() { return getToken(Swift5Parser.HASH_COLOR_LITERAL, 0); }
		public TerminalNode HASH_COLUMN() { return getToken(Swift5Parser.HASH_COLUMN, 0); }
		public TerminalNode HASH_ELSE() { return getToken(Swift5Parser.HASH_ELSE, 0); }
		public TerminalNode HASH_ELSEIF() { return getToken(Swift5Parser.HASH_ELSEIF, 0); }
		public TerminalNode HASH_ENDIF() { return getToken(Swift5Parser.HASH_ENDIF, 0); }
		public TerminalNode ERROR() { return getToken(Swift5Parser.ERROR, 0); }
		public TerminalNode HASH_FILE() { return getToken(Swift5Parser.HASH_FILE, 0); }
		public TerminalNode HASH_FILE_ID() { return getToken(Swift5Parser.HASH_FILE_ID, 0); }
		public TerminalNode HASH_FILE_LITERAL() { return getToken(Swift5Parser.HASH_FILE_LITERAL, 0); }
		public TerminalNode HASH_FILE_PATH() { return getToken(Swift5Parser.HASH_FILE_PATH, 0); }
		public TerminalNode HASH_FUNCTION() { return getToken(Swift5Parser.HASH_FUNCTION, 0); }
		public TerminalNode HASH_IF() { return getToken(Swift5Parser.HASH_IF, 0); }
		public TerminalNode HASH_IMAGE_LITERAL() { return getToken(Swift5Parser.HASH_IMAGE_LITERAL, 0); }
		public TerminalNode HASH_LINE() { return getToken(Swift5Parser.HASH_LINE, 0); }
		public TerminalNode HASH_SELECTOR() { return getToken(Swift5Parser.HASH_SELECTOR, 0); }
		public TerminalNode SOURCE_LOCATION() { return getToken(Swift5Parser.SOURCE_LOCATION, 0); }
		public TerminalNode WARNING() { return getToken(Swift5Parser.WARNING, 0); }
		public KeywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyword; }
	}

	public final KeywordContext keyword() throws RecognitionException {
		KeywordContext _localctx = new KeywordContext(_ctx, getState());
		enterRule(_localctx, 570, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2692);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AS) | (1L << BREAK) | (1L << CASE) | (1L << CATCH) | (1L << CLASS) | (1L << CONTINUE) | (1L << DEFAULT) | (1L << DEFER) | (1L << DO) | (1L << GUARD) | (1L << ELSE) | (1L << ENUM) | (1L << FOR) | (1L << FALLTHROUGH) | (1L << FUNC) | (1L << IN) | (1L << IF) | (1L << IMPORT) | (1L << INTERNAL) | (1L << OPEN) | (1L << PRIVATE) | (1L << PUBLIC) | (1L << WHERE) | (1L << WHILE) | (1L << LET) | (1L << VAR) | (1L << PROTOCOL) | (1L << REPEAT) | (1L << SWITCH) | (1L << STRUCT) | (1L << RETURN) | (1L << THROW) | (1L << THROWS) | (1L << RETHROWS) | (1L << INIT) | (1L << DEINIT) | (1L << ASSOCIATED_TYPE) | (1L << EXTENSION) | (1L << SUBSCRIPT) | (1L << OPERATOR) | (1L << TYPEALIAS))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (STATIC - 72)) | (1L << (FILE_PRIVATE - 72)) | (1L << (IS - 72)) | (1L << (TRY - 72)) | (1L << (SUPER - 72)) | (1L << (ANY - 72)) | (1L << (FALSE - 72)) | (1L << (TRUE - 72)) | (1L << (NIL - 72)) | (1L << (INOUT - 72)) | (1L << (SELF - 72)) | (1L << (SELF_BIG - 72)) | (1L << (SOURCE_LOCATION - 72)) | (1L << (ERROR - 72)) | (1L << (WARNING - 72)) | (1L << (AVAILABLE - 72)) | (1L << (HASH_IF - 72)) | (1L << (HASH_ELSEIF - 72)) | (1L << (HASH_ELSE - 72)) | (1L << (HASH_ENDIF - 72)) | (1L << (HASH_FILE - 72)) | (1L << (HASH_FILE_ID - 72)) | (1L << (HASH_FILE_PATH - 72)) | (1L << (HASH_LINE - 72)) | (1L << (HASH_COLUMN - 72)) | (1L << (HASH_FUNCTION - 72)) | (1L << (HASH_SELECTOR - 72)) | (1L << (HASH_COLOR_LITERAL - 72)) | (1L << (HASH_FILE_LITERAL - 72)) | (1L << (HASH_IMAGE_LITERAL - 72)))) != 0) || _la==UNDERSCORE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Assignment_operatorContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public Assignment_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment_operator; }
	}

	public final Assignment_operatorContext assignment_operator() throws RecognitionException {
		Assignment_operatorContext _localctx = new Assignment_operatorContext(_ctx, getState());
		enterRule(_localctx, 572, RULE_assignment_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2694);
			if (!(SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isBinaryOp(_input)");
			setState(2695);
			match(EQUAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Negate_prefix_operatorContext extends ParserRuleContext {
		public TerminalNode SUB() { return getToken(Swift5Parser.SUB, 0); }
		public Negate_prefix_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_negate_prefix_operator; }
	}

	public final Negate_prefix_operatorContext negate_prefix_operator() throws RecognitionException {
		Negate_prefix_operatorContext _localctx = new Negate_prefix_operatorContext(_ctx, getState());
		enterRule(_localctx, 574, RULE_negate_prefix_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2697);
			if (!(SwiftSupport.isPrefixOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isPrefixOp(_input)");
			setState(2698);
			match(SUB);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compilation_condition_ANDContext extends ParserRuleContext {
		public List<TerminalNode> AND() { return getTokens(Swift5Parser.AND); }
		public TerminalNode AND(int i) {
			return getToken(Swift5Parser.AND, i);
		}
		public Compilation_condition_ANDContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilation_condition_AND; }
	}

	public final Compilation_condition_ANDContext compilation_condition_AND() throws RecognitionException {
		Compilation_condition_ANDContext _localctx = new Compilation_condition_ANDContext(_ctx, getState());
		enterRule(_localctx, 576, RULE_compilation_condition_AND);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2700);
			if (!(SwiftSupport.isOperator(_input,"&&"))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"&&\")");
			setState(2701);
			match(AND);
			setState(2702);
			match(AND);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compilation_condition_ORContext extends ParserRuleContext {
		public List<TerminalNode> OR() { return getTokens(Swift5Parser.OR); }
		public TerminalNode OR(int i) {
			return getToken(Swift5Parser.OR, i);
		}
		public Compilation_condition_ORContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilation_condition_OR; }
	}

	public final Compilation_condition_ORContext compilation_condition_OR() throws RecognitionException {
		Compilation_condition_ORContext _localctx = new Compilation_condition_ORContext(_ctx, getState());
		enterRule(_localctx, 578, RULE_compilation_condition_OR);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2704);
			if (!(SwiftSupport.isOperator(_input,"||"))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"||\")");
			setState(2705);
			match(OR);
			setState(2706);
			match(OR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compilation_condition_GEContext extends ParserRuleContext {
		public TerminalNode GT() { return getToken(Swift5Parser.GT, 0); }
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public Compilation_condition_GEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilation_condition_GE; }
	}

	public final Compilation_condition_GEContext compilation_condition_GE() throws RecognitionException {
		Compilation_condition_GEContext _localctx = new Compilation_condition_GEContext(_ctx, getState());
		enterRule(_localctx, 580, RULE_compilation_condition_GE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2708);
			if (!(SwiftSupport.isOperator(_input,">="))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\">=\")");
			setState(2709);
			match(GT);
			setState(2710);
			match(EQUAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compilation_condition_LContext extends ParserRuleContext {
		public TerminalNode LT() { return getToken(Swift5Parser.LT, 0); }
		public Compilation_condition_LContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilation_condition_L; }
	}

	public final Compilation_condition_LContext compilation_condition_L() throws RecognitionException {
		Compilation_condition_LContext _localctx = new Compilation_condition_LContext(_ctx, getState());
		enterRule(_localctx, 582, RULE_compilation_condition_L);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2712);
			if (!(SwiftSupport.isOperator(_input,"<"))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"<\")");
			setState(2713);
			match(LT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Arrow_operatorContext extends ParserRuleContext {
		public TerminalNode SUB() { return getToken(Swift5Parser.SUB, 0); }
		public TerminalNode GT() { return getToken(Swift5Parser.GT, 0); }
		public Arrow_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrow_operator; }
	}

	public final Arrow_operatorContext arrow_operator() throws RecognitionException {
		Arrow_operatorContext _localctx = new Arrow_operatorContext(_ctx, getState());
		enterRule(_localctx, 584, RULE_arrow_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2715);
			if (!(SwiftSupport.isOperator(_input,"->"))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"->\")");
			setState(2716);
			match(SUB);
			setState(2717);
			match(GT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Range_operatorContext extends ParserRuleContext {
		public List<TerminalNode> DOT() { return getTokens(Swift5Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(Swift5Parser.DOT, i);
		}
		public Range_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range_operator; }
	}

	public final Range_operatorContext range_operator() throws RecognitionException {
		Range_operatorContext _localctx = new Range_operatorContext(_ctx, getState());
		enterRule(_localctx, 586, RULE_range_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2719);
			if (!(SwiftSupport.isOperator(_input,"..."))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"...\")");
			setState(2720);
			match(DOT);
			setState(2721);
			match(DOT);
			setState(2722);
			match(DOT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Same_type_equalsContext extends ParserRuleContext {
		public List<TerminalNode> EQUAL() { return getTokens(Swift5Parser.EQUAL); }
		public TerminalNode EQUAL(int i) {
			return getToken(Swift5Parser.EQUAL, i);
		}
		public Same_type_equalsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_same_type_equals; }
	}

	public final Same_type_equalsContext same_type_equals() throws RecognitionException {
		Same_type_equalsContext _localctx = new Same_type_equalsContext(_ctx, getState());
		enterRule(_localctx, 588, RULE_same_type_equals);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2724);
			if (!(SwiftSupport.isOperator(_input,"=="))) throw new FailedPredicateException(this, "SwiftSupport.isOperator(_input,\"==\")");
			setState(2725);
			match(EQUAL);
			setState(2726);
			match(EQUAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Binary_operatorContext extends ParserRuleContext {
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Binary_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binary_operator; }
	}

	public final Binary_operatorContext binary_operator() throws RecognitionException {
		Binary_operatorContext _localctx = new Binary_operatorContext(_ctx, getState());
		enterRule(_localctx, 590, RULE_binary_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2728);
			if (!(SwiftSupport.isBinaryOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isBinaryOp(_input)");
			setState(2729);
			operator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Prefix_operatorContext extends ParserRuleContext {
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Prefix_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefix_operator; }
	}

	public final Prefix_operatorContext prefix_operator() throws RecognitionException {
		Prefix_operatorContext _localctx = new Prefix_operatorContext(_ctx, getState());
		enterRule(_localctx, 592, RULE_prefix_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2731);
			if (!(SwiftSupport.isPrefixOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isPrefixOp(_input)");
			setState(2732);
			operator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Postfix_operatorContext extends ParserRuleContext {
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public Postfix_operatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfix_operator; }
	}

	public final Postfix_operatorContext postfix_operator() throws RecognitionException {
		Postfix_operatorContext _localctx = new Postfix_operatorContext(_ctx, getState());
		enterRule(_localctx, 594, RULE_postfix_operator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2734);
			if (!(SwiftSupport.isPostfixOp(_input))) throw new FailedPredicateException(this, "SwiftSupport.isPostfixOp(_input)");
			setState(2735);
			operator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OperatorContext extends ParserRuleContext {
		public Operator_headContext operator_head() {
			return getRuleContext(Operator_headContext.class,0);
		}
		public Operator_charactersContext operator_characters() {
			return getRuleContext(Operator_charactersContext.class,0);
		}
		public Dot_operator_headContext dot_operator_head() {
			return getRuleContext(Dot_operator_headContext.class,0);
		}
		public Dot_operator_charactersContext dot_operator_characters() {
			return getRuleContext(Dot_operator_charactersContext.class,0);
		}
		public OperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator; }
	}

	public final OperatorContext operator() throws RecognitionException {
		OperatorContext _localctx = new OperatorContext(_ctx, getState());
		enterRule(_localctx, 596, RULE_operator);
		try {
			setState(2744);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
			case Operator_head_other:
				enterOuterAlt(_localctx, 1);
				{
				setState(2737);
				operator_head();
				setState(2739);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,332,_ctx) ) {
				case 1:
					{
					setState(2738);
					operator_characters();
					}
					break;
				}
				}
				break;
			case DOT:
				enterOuterAlt(_localctx, 2);
				{
				setState(2741);
				dot_operator_head();
				setState(2742);
				dot_operator_characters();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Operator_headContext extends ParserRuleContext {
		public TerminalNode DIV() { return getToken(Swift5Parser.DIV, 0); }
		public TerminalNode EQUAL() { return getToken(Swift5Parser.EQUAL, 0); }
		public TerminalNode SUB() { return getToken(Swift5Parser.SUB, 0); }
		public TerminalNode ADD() { return getToken(Swift5Parser.ADD, 0); }
		public TerminalNode BANG() { return getToken(Swift5Parser.BANG, 0); }
		public TerminalNode MUL() { return getToken(Swift5Parser.MUL, 0); }
		public TerminalNode MOD() { return getToken(Swift5Parser.MOD, 0); }
		public TerminalNode AND() { return getToken(Swift5Parser.AND, 0); }
		public TerminalNode OR() { return getToken(Swift5Parser.OR, 0); }
		public TerminalNode LT() { return getToken(Swift5Parser.LT, 0); }
		public TerminalNode GT() { return getToken(Swift5Parser.GT, 0); }
		public TerminalNode CARET() { return getToken(Swift5Parser.CARET, 0); }
		public TerminalNode TILDE() { return getToken(Swift5Parser.TILDE, 0); }
		public TerminalNode QUESTION() { return getToken(Swift5Parser.QUESTION, 0); }
		public TerminalNode Operator_head_other() { return getToken(Swift5Parser.Operator_head_other, 0); }
		public Operator_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_head; }
	}

	public final Operator_headContext operator_head() throws RecognitionException {
		Operator_headContext _localctx = new Operator_headContext(_ctx, getState());
		enterRule(_localctx, 598, RULE_operator_head);
		int _la;
		try {
			setState(2748);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
				enterOuterAlt(_localctx, 1);
				{
				setState(2746);
				_la = _input.LA(1);
				if ( !(((((_la - 148)) & ~0x3f) == 0 && ((1L << (_la - 148)) & ((1L << (LT - 148)) | (1L << (GT - 148)) | (1L << (BANG - 148)) | (1L << (QUESTION - 148)) | (1L << (AND - 148)) | (1L << (SUB - 148)) | (1L << (EQUAL - 148)) | (1L << (OR - 148)) | (1L << (DIV - 148)) | (1L << (ADD - 148)) | (1L << (MUL - 148)) | (1L << (MOD - 148)) | (1L << (CARET - 148)) | (1L << (TILDE - 148)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case Operator_head_other:
				enterOuterAlt(_localctx, 2);
				{
				setState(2747);
				match(Operator_head_other);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Operator_characterContext extends ParserRuleContext {
		public Operator_headContext operator_head() {
			return getRuleContext(Operator_headContext.class,0);
		}
		public TerminalNode Operator_following_character() { return getToken(Swift5Parser.Operator_following_character, 0); }
		public Operator_characterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_character; }
	}

	public final Operator_characterContext operator_character() throws RecognitionException {
		Operator_characterContext _localctx = new Operator_characterContext(_ctx, getState());
		enterRule(_localctx, 600, RULE_operator_character);
		try {
			setState(2752);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
			case Operator_head_other:
				enterOuterAlt(_localctx, 1);
				{
				setState(2750);
				operator_head();
				}
				break;
			case Operator_following_character:
				enterOuterAlt(_localctx, 2);
				{
				setState(2751);
				match(Operator_following_character);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Operator_charactersContext extends ParserRuleContext {
		public List<Operator_characterContext> operator_character() {
			return getRuleContexts(Operator_characterContext.class);
		}
		public Operator_characterContext operator_character(int i) {
			return getRuleContext(Operator_characterContext.class,i);
		}
		public Operator_charactersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_characters; }
	}

	public final Operator_charactersContext operator_characters() throws RecognitionException {
		Operator_charactersContext _localctx = new Operator_charactersContext(_ctx, getState());
		enterRule(_localctx, 602, RULE_operator_characters);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2756); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(2754);
					if (!(_input.get(_input.index()-1).getType()!=WS)) throw new FailedPredicateException(this, "_input.get(_input.index()-1).getType()!=WS");
					setState(2755);
					operator_character();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2758); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,336,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dot_operator_headContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Dot_operator_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dot_operator_head; }
	}

	public final Dot_operator_headContext dot_operator_head() throws RecognitionException {
		Dot_operator_headContext _localctx = new Dot_operator_headContext(_ctx, getState());
		enterRule(_localctx, 604, RULE_dot_operator_head);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2760);
			match(DOT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dot_operator_characterContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(Swift5Parser.DOT, 0); }
		public Operator_characterContext operator_character() {
			return getRuleContext(Operator_characterContext.class,0);
		}
		public Dot_operator_characterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dot_operator_character; }
	}

	public final Dot_operator_characterContext dot_operator_character() throws RecognitionException {
		Dot_operator_characterContext _localctx = new Dot_operator_characterContext(_ctx, getState());
		enterRule(_localctx, 606, RULE_dot_operator_character);
		try {
			setState(2764);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(2762);
				match(DOT);
				}
				break;
			case LT:
			case GT:
			case BANG:
			case QUESTION:
			case AND:
			case SUB:
			case EQUAL:
			case OR:
			case DIV:
			case ADD:
			case MUL:
			case MOD:
			case CARET:
			case TILDE:
			case Operator_head_other:
			case Operator_following_character:
				enterOuterAlt(_localctx, 2);
				{
				setState(2763);
				operator_character();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Dot_operator_charactersContext extends ParserRuleContext {
		public List<Dot_operator_characterContext> dot_operator_character() {
			return getRuleContexts(Dot_operator_characterContext.class);
		}
		public Dot_operator_characterContext dot_operator_character(int i) {
			return getRuleContext(Dot_operator_characterContext.class,i);
		}
		public Dot_operator_charactersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dot_operator_characters; }
	}

	public final Dot_operator_charactersContext dot_operator_characters() throws RecognitionException {
		Dot_operator_charactersContext _localctx = new Dot_operator_charactersContext(_ctx, getState());
		enterRule(_localctx, 608, RULE_dot_operator_characters);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2768); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(2766);
					if (!(_input.get(_input.index()-1).getType()!=WS)) throw new FailedPredicateException(this, "_input.get(_input.index()-1).getType()!=WS");
					setState(2767);
					dot_operator_character();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2770); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,338,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public Numeric_literalContext numeric_literal() {
			return getRuleContext(Numeric_literalContext.class,0);
		}
		public String_literalContext string_literal() {
			return getRuleContext(String_literalContext.class,0);
		}
		public Boolean_literalContext boolean_literal() {
			return getRuleContext(Boolean_literalContext.class,0);
		}
		public Nil_literalContext nil_literal() {
			return getRuleContext(Nil_literalContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 610, RULE_literal);
		try {
			setState(2776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,339,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2772);
				numeric_literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2773);
				string_literal();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2774);
				boolean_literal();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2775);
				nil_literal();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_literalContext extends ParserRuleContext {
		public Integer_literalContext integer_literal() {
			return getRuleContext(Integer_literalContext.class,0);
		}
		public Negate_prefix_operatorContext negate_prefix_operator() {
			return getRuleContext(Negate_prefix_operatorContext.class,0);
		}
		public TerminalNode Floating_point_literal() { return getToken(Swift5Parser.Floating_point_literal, 0); }
		public Numeric_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_literal; }
	}

	public final Numeric_literalContext numeric_literal() throws RecognitionException {
		Numeric_literalContext _localctx = new Numeric_literalContext(_ctx, getState());
		enterRule(_localctx, 612, RULE_numeric_literal);
		try {
			setState(2786);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,342,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2779);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,340,_ctx) ) {
				case 1:
					{
					setState(2778);
					negate_prefix_operator();
					}
					break;
				}
				setState(2781);
				integer_literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2783);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,341,_ctx) ) {
				case 1:
					{
					setState(2782);
					negate_prefix_operator();
					}
					break;
				}
				setState(2785);
				match(Floating_point_literal);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_literalContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(Swift5Parser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(Swift5Parser.FALSE, 0); }
		public Boolean_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_literal; }
	}

	public final Boolean_literalContext boolean_literal() throws RecognitionException {
		Boolean_literalContext _localctx = new Boolean_literalContext(_ctx, getState());
		enterRule(_localctx, 614, RULE_boolean_literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2788);
			_la = _input.LA(1);
			if ( !(_la==FALSE || _la==TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Nil_literalContext extends ParserRuleContext {
		public TerminalNode NIL() { return getToken(Swift5Parser.NIL, 0); }
		public Nil_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nil_literal; }
	}

	public final Nil_literalContext nil_literal() throws RecognitionException {
		Nil_literalContext _localctx = new Nil_literalContext(_ctx, getState());
		enterRule(_localctx, 616, RULE_nil_literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2790);
			match(NIL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Integer_literalContext extends ParserRuleContext {
		public TerminalNode Decimal_digits() { return getToken(Swift5Parser.Decimal_digits, 0); }
		public TerminalNode Decimal_literal() { return getToken(Swift5Parser.Decimal_literal, 0); }
		public TerminalNode Binary_literal() { return getToken(Swift5Parser.Binary_literal, 0); }
		public TerminalNode Octal_literal() { return getToken(Swift5Parser.Octal_literal, 0); }
		public TerminalNode Hexadecimal_literal() { return getToken(Swift5Parser.Hexadecimal_literal, 0); }
		public Integer_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integer_literal; }
	}

	public final Integer_literalContext integer_literal() throws RecognitionException {
		Integer_literalContext _localctx = new Integer_literalContext(_ctx, getState());
		enterRule(_localctx, 618, RULE_integer_literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2792);
			_la = _input.LA(1);
			if ( !(((((_la - 170)) & ~0x3f) == 0 && ((1L << (_la - 170)) & ((1L << (Binary_literal - 170)) | (1L << (Octal_literal - 170)) | (1L << (Decimal_digits - 170)) | (1L << (Decimal_literal - 170)) | (1L << (Hexadecimal_literal - 170)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class String_literalContext extends ParserRuleContext {
		public Extended_string_literalContext extended_string_literal() {
			return getRuleContext(Extended_string_literalContext.class,0);
		}
		public Interpolated_string_literalContext interpolated_string_literal() {
			return getRuleContext(Interpolated_string_literalContext.class,0);
		}
		public Static_string_literalContext static_string_literal() {
			return getRuleContext(Static_string_literalContext.class,0);
		}
		public String_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_literal; }
	}

	public final String_literalContext string_literal() throws RecognitionException {
		String_literalContext _localctx = new String_literalContext(_ctx, getState());
		enterRule(_localctx, 620, RULE_string_literal);
		try {
			setState(2797);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,343,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2794);
				extended_string_literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2795);
				interpolated_string_literal();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2796);
				static_string_literal();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extended_string_literalContext extends ParserRuleContext {
		public TerminalNode Multi_line_extended_string_open() { return getToken(Swift5Parser.Multi_line_extended_string_open, 0); }
		public TerminalNode Multi_line_extended_string_close() { return getToken(Swift5Parser.Multi_line_extended_string_close, 0); }
		public List<TerminalNode> Quoted_multi_line_extended_text() { return getTokens(Swift5Parser.Quoted_multi_line_extended_text); }
		public TerminalNode Quoted_multi_line_extended_text(int i) {
			return getToken(Swift5Parser.Quoted_multi_line_extended_text, i);
		}
		public TerminalNode Single_line_extended_string_open() { return getToken(Swift5Parser.Single_line_extended_string_open, 0); }
		public TerminalNode Single_line_extended_string_close() { return getToken(Swift5Parser.Single_line_extended_string_close, 0); }
		public List<TerminalNode> Quoted_single_line_extended_text() { return getTokens(Swift5Parser.Quoted_single_line_extended_text); }
		public TerminalNode Quoted_single_line_extended_text(int i) {
			return getToken(Swift5Parser.Quoted_single_line_extended_text, i);
		}
		public Extended_string_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extended_string_literal; }
	}

	public final Extended_string_literalContext extended_string_literal() throws RecognitionException {
		Extended_string_literalContext _localctx = new Extended_string_literalContext(_ctx, getState());
		enterRule(_localctx, 622, RULE_extended_string_literal);
		int _la;
		try {
			setState(2813);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Multi_line_extended_string_open:
				enterOuterAlt(_localctx, 1);
				{
				setState(2799);
				match(Multi_line_extended_string_open);
				setState(2801); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(2800);
					match(Quoted_multi_line_extended_text);
					}
					}
					setState(2803); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==Quoted_multi_line_extended_text );
				setState(2805);
				match(Multi_line_extended_string_close);
				}
				break;
			case Single_line_extended_string_open:
				enterOuterAlt(_localctx, 2);
				{
				setState(2806);
				match(Single_line_extended_string_open);
				setState(2808); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(2807);
					match(Quoted_single_line_extended_text);
					}
					}
					setState(2810); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==Quoted_single_line_extended_text );
				setState(2812);
				match(Single_line_extended_string_close);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Static_string_literalContext extends ParserRuleContext {
		public TerminalNode Single_line_string_open() { return getToken(Swift5Parser.Single_line_string_open, 0); }
		public TerminalNode Single_line_string_close() { return getToken(Swift5Parser.Single_line_string_close, 0); }
		public List<TerminalNode> Quoted_single_line_text() { return getTokens(Swift5Parser.Quoted_single_line_text); }
		public TerminalNode Quoted_single_line_text(int i) {
			return getToken(Swift5Parser.Quoted_single_line_text, i);
		}
		public TerminalNode Multi_line_string_open() { return getToken(Swift5Parser.Multi_line_string_open, 0); }
		public TerminalNode Multi_line_string_close() { return getToken(Swift5Parser.Multi_line_string_close, 0); }
		public List<TerminalNode> Quoted_multi_line_text() { return getTokens(Swift5Parser.Quoted_multi_line_text); }
		public TerminalNode Quoted_multi_line_text(int i) {
			return getToken(Swift5Parser.Quoted_multi_line_text, i);
		}
		public Static_string_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_static_string_literal; }
	}

	public final Static_string_literalContext static_string_literal() throws RecognitionException {
		Static_string_literalContext _localctx = new Static_string_literalContext(_ctx, getState());
		enterRule(_localctx, 624, RULE_static_string_literal);
		int _la;
		try {
			setState(2831);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Single_line_string_open:
				enterOuterAlt(_localctx, 1);
				{
				setState(2815);
				match(Single_line_string_open);
				setState(2819);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Quoted_single_line_text) {
					{
					{
					setState(2816);
					match(Quoted_single_line_text);
					}
					}
					setState(2821);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(2822);
				match(Single_line_string_close);
				}
				break;
			case Multi_line_string_open:
				enterOuterAlt(_localctx, 2);
				{
				setState(2823);
				match(Multi_line_string_open);
				setState(2827);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Quoted_multi_line_text) {
					{
					{
					setState(2824);
					match(Quoted_multi_line_text);
					}
					}
					setState(2829);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(2830);
				match(Multi_line_string_close);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Interpolated_string_literalContext extends ParserRuleContext {
		public TerminalNode Single_line_string_open() { return getToken(Swift5Parser.Single_line_string_open, 0); }
		public TerminalNode Single_line_string_close() { return getToken(Swift5Parser.Single_line_string_close, 0); }
		public List<TerminalNode> Quoted_single_line_text() { return getTokens(Swift5Parser.Quoted_single_line_text); }
		public TerminalNode Quoted_single_line_text(int i) {
			return getToken(Swift5Parser.Quoted_single_line_text, i);
		}
		public List<TerminalNode> Interpolataion_single_line() { return getTokens(Swift5Parser.Interpolataion_single_line); }
		public TerminalNode Interpolataion_single_line(int i) {
			return getToken(Swift5Parser.Interpolataion_single_line, i);
		}
		public List<TerminalNode> RPAREN() { return getTokens(Swift5Parser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(Swift5Parser.RPAREN, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<Tuple_elementContext> tuple_element() {
			return getRuleContexts(Tuple_elementContext.class);
		}
		public Tuple_elementContext tuple_element(int i) {
			return getRuleContext(Tuple_elementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(Swift5Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(Swift5Parser.COMMA, i);
		}
		public List<Tuple_element_listContext> tuple_element_list() {
			return getRuleContexts(Tuple_element_listContext.class);
		}
		public Tuple_element_listContext tuple_element_list(int i) {
			return getRuleContext(Tuple_element_listContext.class,i);
		}
		public TerminalNode Multi_line_string_open() { return getToken(Swift5Parser.Multi_line_string_open, 0); }
		public TerminalNode Multi_line_string_close() { return getToken(Swift5Parser.Multi_line_string_close, 0); }
		public List<TerminalNode> Quoted_multi_line_text() { return getTokens(Swift5Parser.Quoted_multi_line_text); }
		public TerminalNode Quoted_multi_line_text(int i) {
			return getToken(Swift5Parser.Quoted_multi_line_text, i);
		}
		public List<TerminalNode> Interpolataion_multi_line() { return getTokens(Swift5Parser.Interpolataion_multi_line); }
		public TerminalNode Interpolataion_multi_line(int i) {
			return getToken(Swift5Parser.Interpolataion_multi_line, i);
		}
		public Interpolated_string_literalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interpolated_string_literal; }
	}

	public final Interpolated_string_literalContext interpolated_string_literal() throws RecognitionException {
		Interpolated_string_literalContext _localctx = new Interpolated_string_literalContext(_ctx, getState());
		enterRule(_localctx, 626, RULE_interpolated_string_literal);
		int _la;
		try {
			setState(2869);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Single_line_string_open:
				enterOuterAlt(_localctx, 1);
				{
				setState(2833);
				match(Single_line_string_open);
				setState(2847);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Interpolataion_single_line || _la==Quoted_single_line_text) {
					{
					setState(2845);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case Quoted_single_line_text:
						{
						setState(2834);
						match(Quoted_single_line_text);
						}
						break;
					case Interpolataion_single_line:
						{
						setState(2835);
						match(Interpolataion_single_line);
						setState(2841);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,350,_ctx) ) {
						case 1:
							{
							setState(2836);
							expression();
							}
							break;
						case 2:
							{
							setState(2837);
							tuple_element();
							setState(2838);
							match(COMMA);
							setState(2839);
							tuple_element_list();
							}
							break;
						}
						setState(2843);
						match(RPAREN);
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					setState(2849);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(2850);
				match(Single_line_string_close);
				}
				break;
			case Multi_line_string_open:
				enterOuterAlt(_localctx, 2);
				{
				setState(2851);
				match(Multi_line_string_open);
				setState(2865);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Interpolataion_multi_line || _la==Quoted_multi_line_text) {
					{
					setState(2863);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case Quoted_multi_line_text:
						{
						setState(2852);
						match(Quoted_multi_line_text);
						}
						break;
					case Interpolataion_multi_line:
						{
						setState(2853);
						match(Interpolataion_multi_line);
						setState(2859);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,353,_ctx) ) {
						case 1:
							{
							setState(2854);
							expression();
							}
							break;
						case 2:
							{
							setState(2855);
							tuple_element();
							setState(2856);
							match(COMMA);
							setState(2857);
							tuple_element_list();
							}
							break;
						}
						setState(2861);
						match(RPAREN);
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					setState(2867);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(2868);
				match(Multi_line_string_close);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 2:
			return statements_sempred((StatementsContext)_localctx, predIndex);
		case 49:
			return compilation_condition_sempred((Compilation_conditionContext)_localctx, predIndex);
		case 184:
			return pattern_sempred((PatternContext)_localctx, predIndex);
		case 200:
			return balanced_token_punctuation_sempred((Balanced_token_punctuationContext)_localctx, predIndex);
		case 251:
			return forced_value_suffix_sempred((Forced_value_suffixContext)_localctx, predIndex);
		case 252:
			return optional_chaining_suffix_sempred((Optional_chaining_suffixContext)_localctx, predIndex);
		case 261:
			return type_sempred((TypeContext)_localctx, predIndex);
		case 277:
			return trailing_composition_and_sempred((Trailing_composition_andContext)_localctx, predIndex);
		case 286:
			return assignment_operator_sempred((Assignment_operatorContext)_localctx, predIndex);
		case 287:
			return negate_prefix_operator_sempred((Negate_prefix_operatorContext)_localctx, predIndex);
		case 288:
			return compilation_condition_AND_sempred((Compilation_condition_ANDContext)_localctx, predIndex);
		case 289:
			return compilation_condition_OR_sempred((Compilation_condition_ORContext)_localctx, predIndex);
		case 290:
			return compilation_condition_GE_sempred((Compilation_condition_GEContext)_localctx, predIndex);
		case 291:
			return compilation_condition_L_sempred((Compilation_condition_LContext)_localctx, predIndex);
		case 292:
			return arrow_operator_sempred((Arrow_operatorContext)_localctx, predIndex);
		case 293:
			return range_operator_sempred((Range_operatorContext)_localctx, predIndex);
		case 294:
			return same_type_equals_sempred((Same_type_equalsContext)_localctx, predIndex);
		case 295:
			return binary_operator_sempred((Binary_operatorContext)_localctx, predIndex);
		case 296:
			return prefix_operator_sempred((Prefix_operatorContext)_localctx, predIndex);
		case 297:
			return postfix_operator_sempred((Postfix_operatorContext)_localctx, predIndex);
		case 301:
			return operator_characters_sempred((Operator_charactersContext)_localctx, predIndex);
		case 304:
			return dot_operator_characters_sempred((Dot_operator_charactersContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean statements_sempred(StatementsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return SwiftSupport.isSeparatedStatement(_input, _localctx.indexBefore);
		}
		return true;
	}
	private boolean compilation_condition_sempred(Compilation_conditionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean pattern_sempred(PatternContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean balanced_token_punctuation_sempred(Balanced_token_punctuationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return SwiftSupport.isPrefixOp(_input);
		case 4:
			return SwiftSupport.isPostfixOp(_input);
		}
		return true;
	}
	private boolean forced_value_suffix_sempred(Forced_value_suffixContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return !SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean optional_chaining_suffix_sempred(Optional_chaining_suffixContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return !SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean type_sempred(TypeContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 4);
		case 8:
			return !SwiftSupport.isBinaryOp(_input);
		case 9:
			return !SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean trailing_composition_and_sempred(Trailing_composition_andContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return !SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean assignment_operator_sempred(Assignment_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean negate_prefix_operator_sempred(Negate_prefix_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return SwiftSupport.isPrefixOp(_input);
		}
		return true;
	}
	private boolean compilation_condition_AND_sempred(Compilation_condition_ANDContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return SwiftSupport.isOperator(_input,"&&");
		}
		return true;
	}
	private boolean compilation_condition_OR_sempred(Compilation_condition_ORContext _localctx, int predIndex) {
		switch (predIndex) {
		case 14:
			return SwiftSupport.isOperator(_input,"||");
		}
		return true;
	}
	private boolean compilation_condition_GE_sempred(Compilation_condition_GEContext _localctx, int predIndex) {
		switch (predIndex) {
		case 15:
			return SwiftSupport.isOperator(_input,">=");
		}
		return true;
	}
	private boolean compilation_condition_L_sempred(Compilation_condition_LContext _localctx, int predIndex) {
		switch (predIndex) {
		case 16:
			return SwiftSupport.isOperator(_input,"<");
		}
		return true;
	}
	private boolean arrow_operator_sempred(Arrow_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 17:
			return SwiftSupport.isOperator(_input,"->");
		}
		return true;
	}
	private boolean range_operator_sempred(Range_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return SwiftSupport.isOperator(_input,"...");
		}
		return true;
	}
	private boolean same_type_equals_sempred(Same_type_equalsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 19:
			return SwiftSupport.isOperator(_input,"==");
		}
		return true;
	}
	private boolean binary_operator_sempred(Binary_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return SwiftSupport.isBinaryOp(_input);
		}
		return true;
	}
	private boolean prefix_operator_sempred(Prefix_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 21:
			return SwiftSupport.isPrefixOp(_input);
		}
		return true;
	}
	private boolean postfix_operator_sempred(Postfix_operatorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 22:
			return SwiftSupport.isPostfixOp(_input);
		}
		return true;
	}
	private boolean operator_characters_sempred(Operator_charactersContext _localctx, int predIndex) {
		switch (predIndex) {
		case 23:
			return _input.get(_input.index()-1).getType()!=WS;
		}
		return true;
	}
	private boolean dot_operator_characters_sempred(Dot_operator_charactersContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return _input.get(_input.index()-1).getType()!=WS;
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00c3\u0b3a\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t\u0080"+
		"\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084\4\u0085"+
		"\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089\t\u0089"+
		"\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d\4\u008e"+
		"\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092\t\u0092"+
		"\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096\4\u0097"+
		"\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b\t\u009b"+
		"\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f\4\u00a0"+
		"\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4\t\u00a4"+
		"\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8\4\u00a9"+
		"\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad\t\u00ad"+
		"\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1\4\u00b2"+
		"\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\4\u00b6\t\u00b6"+
		"\4\u00b7\t\u00b7\4\u00b8\t\u00b8\4\u00b9\t\u00b9\4\u00ba\t\u00ba\4\u00bb"+
		"\t\u00bb\4\u00bc\t\u00bc\4\u00bd\t\u00bd\4\u00be\t\u00be\4\u00bf\t\u00bf"+
		"\4\u00c0\t\u00c0\4\u00c1\t\u00c1\4\u00c2\t\u00c2\4\u00c3\t\u00c3\4\u00c4"+
		"\t\u00c4\4\u00c5\t\u00c5\4\u00c6\t\u00c6\4\u00c7\t\u00c7\4\u00c8\t\u00c8"+
		"\4\u00c9\t\u00c9\4\u00ca\t\u00ca\4\u00cb\t\u00cb\4\u00cc\t\u00cc\4\u00cd"+
		"\t\u00cd\4\u00ce\t\u00ce\4\u00cf\t\u00cf\4\u00d0\t\u00d0\4\u00d1\t\u00d1"+
		"\4\u00d2\t\u00d2\4\u00d3\t\u00d3\4\u00d4\t\u00d4\4\u00d5\t\u00d5\4\u00d6"+
		"\t\u00d6\4\u00d7\t\u00d7\4\u00d8\t\u00d8\4\u00d9\t\u00d9\4\u00da\t\u00da"+
		"\4\u00db\t\u00db\4\u00dc\t\u00dc\4\u00dd\t\u00dd\4\u00de\t\u00de\4\u00df"+
		"\t\u00df\4\u00e0\t\u00e0\4\u00e1\t\u00e1\4\u00e2\t\u00e2\4\u00e3\t\u00e3"+
		"\4\u00e4\t\u00e4\4\u00e5\t\u00e5\4\u00e6\t\u00e6\4\u00e7\t\u00e7\4\u00e8"+
		"\t\u00e8\4\u00e9\t\u00e9\4\u00ea\t\u00ea\4\u00eb\t\u00eb\4\u00ec\t\u00ec"+
		"\4\u00ed\t\u00ed\4\u00ee\t\u00ee\4\u00ef\t\u00ef\4\u00f0\t\u00f0\4\u00f1"+
		"\t\u00f1\4\u00f2\t\u00f2\4\u00f3\t\u00f3\4\u00f4\t\u00f4\4\u00f5\t\u00f5"+
		"\4\u00f6\t\u00f6\4\u00f7\t\u00f7\4\u00f8\t\u00f8\4\u00f9\t\u00f9\4\u00fa"+
		"\t\u00fa\4\u00fb\t\u00fb\4\u00fc\t\u00fc\4\u00fd\t\u00fd\4\u00fe\t\u00fe"+
		"\4\u00ff\t\u00ff\4\u0100\t\u0100\4\u0101\t\u0101\4\u0102\t\u0102\4\u0103"+
		"\t\u0103\4\u0104\t\u0104\4\u0105\t\u0105\4\u0106\t\u0106\4\u0107\t\u0107"+
		"\4\u0108\t\u0108\4\u0109\t\u0109\4\u010a\t\u010a\4\u010b\t\u010b\4\u010c"+
		"\t\u010c\4\u010d\t\u010d\4\u010e\t\u010e\4\u010f\t\u010f\4\u0110\t\u0110"+
		"\4\u0111\t\u0111\4\u0112\t\u0112\4\u0113\t\u0113\4\u0114\t\u0114\4\u0115"+
		"\t\u0115\4\u0116\t\u0116\4\u0117\t\u0117\4\u0118\t\u0118\4\u0119\t\u0119"+
		"\4\u011a\t\u011a\4\u011b\t\u011b\4\u011c\t\u011c\4\u011d\t\u011d\4\u011e"+
		"\t\u011e\4\u011f\t\u011f\4\u0120\t\u0120\4\u0121\t\u0121\4\u0122\t\u0122"+
		"\4\u0123\t\u0123\4\u0124\t\u0124\4\u0125\t\u0125\4\u0126\t\u0126\4\u0127"+
		"\t\u0127\4\u0128\t\u0128\4\u0129\t\u0129\4\u012a\t\u012a\4\u012b\t\u012b"+
		"\4\u012c\t\u012c\4\u012d\t\u012d\4\u012e\t\u012e\4\u012f\t\u012f\4\u0130"+
		"\t\u0130\4\u0131\t\u0131\4\u0132\t\u0132\4\u0133\t\u0133\4\u0134\t\u0134"+
		"\4\u0135\t\u0135\4\u0136\t\u0136\4\u0137\t\u0137\4\u0138\t\u0138\4\u0139"+
		"\t\u0139\4\u013a\t\u013a\4\u013b\t\u013b\3\2\5\2\u0278\n\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\u0284\n\3\3\3\5\3\u0287\n\3\3\3\5\3\u028a"+
		"\n\3\3\4\3\4\3\4\3\4\6\4\u0290\n\4\r\4\16\4\u0291\3\5\3\5\3\5\5\5\u0297"+
		"\n\5\3\6\3\6\5\6\u029b\n\6\3\6\3\6\3\6\3\6\5\6\u02a1\n\6\3\6\3\6\3\7\3"+
		"\7\3\7\3\7\3\b\3\b\3\b\7\b\u02ac\n\b\f\b\16\b\u02af\13\b\3\t\3\t\3\t\3"+
		"\t\5\t\u02b5\n\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3"+
		"\f\3\r\3\r\3\r\5\r\u02c7\n\r\3\16\3\16\3\16\3\16\5\16\u02cd\n\16\3\17"+
		"\3\17\3\17\3\17\5\17\u02d3\n\17\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21"+
		"\3\21\5\21\u02de\n\21\3\21\3\21\3\22\3\22\5\22\u02e4\n\22\3\23\3\23\5"+
		"\23\u02e8\n\23\3\23\3\23\3\23\5\23\u02ed\n\23\3\24\5\24\u02f0\n\24\3\24"+
		"\3\24\3\24\3\24\3\25\3\25\5\25\u02f8\n\25\3\25\3\25\3\25\5\25\u02fd\n"+
		"\25\7\25\u02ff\n\25\f\25\16\25\u0302\13\25\3\26\5\26\u0305\n\26\3\26\3"+
		"\26\3\26\3\27\3\27\3\27\3\30\3\30\3\31\3\31\5\31\u0311\n\31\3\31\5\31"+
		"\u0314\n\31\3\31\3\31\3\32\3\32\3\32\5\32\u031b\n\32\3\33\3\33\5\33\u031f"+
		"\n\33\3\34\3\34\3\34\5\34\u0324\n\34\3\35\3\35\5\35\u0328\n\35\3\36\3"+
		"\36\3\36\3\36\3\36\5\36\u032f\n\36\3\37\3\37\3\37\3 \3 \3!\3!\3!\3!\3"+
		"!\5!\u033b\n!\3\"\3\"\5\"\u033f\n\"\3#\3#\5#\u0343\n#\3$\3$\3%\3%\5%\u0349"+
		"\n%\3&\3&\3&\3\'\3\'\3\'\3(\3(\3(\5(\u0354\n(\3)\6)\u0357\n)\r)\16)\u0358"+
		"\3*\3*\5*\u035d\n*\3*\3*\3+\3+\3+\3+\3+\7+\u0366\n+\f+\16+\u0369\13+\3"+
		",\3,\5,\u036d\n,\3-\3-\3-\5-\u0372\n-\3.\3.\5.\u0376\n.\3.\5.\u0379\n"+
		".\3.\3.\3/\3/\3/\5/\u0380\n/\3\60\6\60\u0383\n\60\r\60\16\60\u0384\3\61"+
		"\3\61\3\61\5\61\u038a\n\61\3\62\3\62\5\62\u038e\n\62\3\63\3\63\3\63\3"+
		"\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u039a\n\63\3\63\3\63\3\63\5\63"+
		"\u039f\n\63\3\63\3\63\7\63\u03a3\n\63\f\63\16\63\u03a6\13\63\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\5\64\u03b6"+
		"\n\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64"+
		"\5\64\u03c5\n\64\3\65\3\65\5\65\u03c9\n\65\3\66\3\66\3\66\5\66\u03ce\n"+
		"\66\3\67\3\67\38\38\39\39\39\79\u03d7\n9\f9\169\u03da\139\3:\3:\3;\3;"+
		"\3;\3;\3;\3;\3;\3;\3;\3;\5;\u03e8\n;\3;\3;\3<\3<\3=\3=\3>\3>\3>\3>\3>"+
		"\3?\3?\3@\3@\3@\3@\3@\3A\3A\3A\7A\u03ff\nA\fA\16A\u0402\13A\3B\3B\3B\3"+
		"B\5B\u0408\nB\3C\3C\3D\3D\3D\3D\3D\5D\u0411\nD\5D\u0413\nD\3E\3E\3E\3"+
		"E\3F\3F\3F\7F\u041c\nF\fF\16F\u041f\13F\3G\3G\3G\3G\5G\u0425\nG\5G\u0427"+
		"\nG\3H\3H\3H\3I\3I\3I\7I\u042f\nI\fI\16I\u0432\13I\3J\3J\5J\u0436\nJ\3"+
		"K\3K\3K\3K\5K\u043c\nK\3L\3L\3L\3L\5L\u0442\nL\3M\3M\3M\3M\3N\3N\3N\7"+
		"N\u044b\nN\fN\16N\u044e\13N\3O\3O\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P"+
		"\3P\3P\3P\5P\u0461\nP\3P\5P\u0464\nP\3Q\6Q\u0467\nQ\rQ\16Q\u0468\3R\5"+
		"R\u046c\nR\3S\3S\5S\u0470\nS\3S\3S\3T\5T\u0475\nT\3T\3T\5T\u0479\nT\3"+
		"T\3T\3U\3U\3V\3V\3V\7V\u0482\nV\fV\16V\u0485\13V\3W\3W\5W\u0489\nW\3X"+
		"\5X\u048c\nX\3X\5X\u048f\nX\3X\3X\3X\3Y\3Y\3Y\7Y\u0497\nY\fY\16Y\u049a"+
		"\13Y\3Z\3Z\5Z\u049e\nZ\3[\3[\3[\3\\\3\\\3\\\3\\\3\\\3\\\3\\\5\\\u04aa"+
		"\n\\\3\\\3\\\3\\\5\\\u04af\n\\\5\\\u04b1\n\\\3\\\5\\\u04b4\n\\\3]\5]\u04b7"+
		"\n]\3]\5]\u04ba\n]\3]\3]\3^\3^\3_\3_\3_\5_\u04c3\n_\3_\3_\3_\5_\u04c8"+
		"\n_\3_\3_\3_\5_\u04cd\n_\3`\5`\u04d0\n`\3`\5`\u04d3\n`\3`\3`\5`\u04d7"+
		"\n`\3a\5a\u04da\na\3a\5a\u04dd\na\3a\3a\5a\u04e1\na\3a\5a\u04e4\na\3b"+
		"\3b\3b\3b\3c\3c\3c\5c\u04ed\nc\3c\3c\3c\5c\u04f2\nc\3c\3c\3d\5d\u04f7"+
		"\nd\3d\5d\u04fa\nd\3d\3d\3e\5e\u04ff\ne\3e\5e\u0502\ne\3e\3e\3f\3f\3f"+
		"\5f\u0509\nf\3f\3f\5f\u050d\nf\5f\u050f\nf\3f\3f\3g\5g\u0514\ng\3g\3g"+
		"\5g\u0518\ng\3g\3g\3h\5h\u051d\nh\3h\3h\5h\u0521\nh\3h\3h\3i\5i\u0526"+
		"\ni\3i\5i\u0529\ni\3i\3i\3i\5i\u052e\ni\3i\3i\3j\3j\3k\3k\3k\3l\3l\3l"+
		"\5l\u053a\nl\3l\3l\5l\u053e\nl\3l\5l\u0541\nl\3m\5m\u0544\nm\3m\5m\u0547"+
		"\nm\3m\3m\3n\3n\5n\u054d\nn\3o\3o\5o\u0551\no\3o\5o\u0554\no\3o\5o\u0557"+
		"\no\3p\3p\5p\u055b\np\3p\3p\3q\3q\3r\3r\5r\u0563\nr\3r\3r\3s\3s\3s\7s"+
		"\u056a\ns\fs\16s\u056d\13s\3t\5t\u0570\nt\3t\5t\u0573\nt\3t\3t\3t\5t\u0578"+
		"\nt\3t\5t\u057b\nt\3u\3u\3v\3v\3w\3w\3w\3x\5x\u0585\nx\3x\5x\u0588\nx"+
		"\3x\3x\5x\u058c\nx\3y\5y\u058f\ny\3y\3y\3y\5y\u0594\ny\3y\5y\u0597\ny"+
		"\3y\5y\u059a\ny\3y\3y\5y\u059e\ny\3y\3y\3z\6z\u05a3\nz\rz\16z\u05a4\3"+
		"{\3{\3{\5{\u05aa\n{\3|\5|\u05ad\n|\3|\5|\u05b0\n|\3|\3|\3|\3}\3}\3}\7"+
		"}\u05b8\n}\f}\16}\u05bb\13}\3~\3~\3~\3~\3~\3~\3~\5~\u05c4\n~\5~\u05c6"+
		"\n~\3\177\3\177\3\u0080\3\u0080\3\u0081\3\u0081\3\u0081\5\u0081\u05cf"+
		"\n\u0081\3\u0081\3\u0081\5\u0081\u05d3\n\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0081\3\u0082\6\u0082\u05da\n\u0082\r\u0082\16\u0082\u05db\3\u0083"+
		"\3\u0083\3\u0083\5\u0083\u05e1\n\u0083\3\u0084\5\u0084\u05e4\n\u0084\3"+
		"\u0084\3\u0084\3\u0084\3\u0085\3\u0085\3\u0085\7\u0085\u05ec\n\u0085\f"+
		"\u0085\16\u0085\u05ef\13\u0085\3\u0086\3\u0086\5\u0086\u05f3\n\u0086\3"+
		"\u0087\3\u0087\3\u0087\3\u0088\3\u0088\3\u0088\5\u0088\u05fb\n\u0088\3"+
		"\u0089\5\u0089\u05fe\n\u0089\3\u0089\5\u0089\u0601\n\u0089\3\u0089\3\u0089"+
		"\3\u0089\5\u0089\u0606\n\u0089\3\u0089\5\u0089\u0609\n\u0089\3\u0089\5"+
		"\u0089\u060c\n\u0089\3\u0089\3\u0089\3\u008a\3\u008a\3\u008b\3\u008b\3"+
		"\u008b\3\u008b\3\u008c\7\u008c\u0617\n\u008c\f\u008c\16\u008c\u061a\13"+
		"\u008c\3\u008d\3\u008d\5\u008d\u061e\n\u008d\3\u008e\5\u008e\u0621\n\u008e"+
		"\3\u008e\5\u008e\u0624\n\u008e\3\u008e\5\u008e\u0627\n\u008e\3\u008e\3"+
		"\u008e\5\u008e\u062b\n\u008e\5\u008e\u062d\n\u008e\3\u008e\3\u008e\3\u008e"+
		"\5\u008e\u0632\n\u008e\3\u008e\5\u008e\u0635\n\u008e\3\u008e\5\u008e\u0638"+
		"\n\u008e\3\u008e\3\u008e\3\u008f\3\u008f\3\u0090\3\u0090\3\u0090\3\u0090"+
		"\3\u0091\7\u0091\u0643\n\u0091\f\u0091\16\u0091\u0646\13\u0091\3\u0092"+
		"\3\u0092\5\u0092\u064a\n\u0092\3\u0093\5\u0093\u064d\n\u0093\3\u0093\5"+
		"\u0093\u0650\n\u0093\3\u0093\3\u0093\3\u0093\3\u0093\3\u0093\5\u0093\u0657"+
		"\n\u0093\3\u0093\5\u0093\u065a\n\u0093\3\u0093\3\u0093\3\u0094\3\u0094"+
		"\3\u0095\3\u0095\3\u0095\3\u0095\3\u0096\7\u0096\u0665\n\u0096\f\u0096"+
		"\16\u0096\u0668\13\u0096\3\u0097\3\u0097\5\u0097\u066c\n\u0097\3\u0098"+
		"\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098\u0674\n\u0098\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\3\u0099\3\u009a\3\u009a\3\u009a\5\u009a\u067e"+
		"\n\u009a\3\u009a\3\u009a\5\u009a\u0682\n\u009a\3\u009b\3\u009b\5\u009b"+
		"\u0686\n\u009b\3\u009b\3\u009b\5\u009b\u068a\n\u009b\3\u009b\5\u009b\u068d"+
		"\n\u009b\3\u009b\5\u009b\u0690\n\u009b\3\u009c\3\u009c\3\u009c\5\u009c"+
		"\u0695\n\u009c\3\u009c\3\u009c\3\u009d\5\u009d\u069a\n\u009d\3\u009d\5"+
		"\u009d\u069d\n\u009d\3\u009d\3\u009d\3\u009d\5\u009d\u06a2\n\u009d\3\u009d"+
		"\5\u009d\u06a5\n\u009d\3\u009d\5\u009d\u06a8\n\u009d\3\u009e\3\u009e\5"+
		"\u009e\u06ac\n\u009e\3\u009e\3\u009e\5\u009e\u06b0\n\u009e\3\u009e\5\u009e"+
		"\u06b3\n\u009e\3\u009e\3\u009e\3\u009f\5\u009f\u06b8\n\u009f\3\u009f\5"+
		"\u009f\u06bb\n\u009f\3\u009f\3\u009f\5\u009f\u06bf\n\u009f\3\u00a0\3\u00a0"+
		"\3\u00a1\5\u00a1\u06c4\n\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a2\5\u00a2"+
		"\u06ca\n\u00a2\3\u00a2\5\u00a2\u06cd\n\u00a2\3\u00a2\3\u00a2\3\u00a2\5"+
		"\u00a2\u06d2\n\u00a2\3\u00a2\5\u00a2\u06d5\n\u00a2\3\u00a2\3\u00a2\3\u00a3"+
		"\3\u00a3\3\u00a3\3\u00a3\3\u00a4\7\u00a4\u06de\n\u00a4\f\u00a4\16\u00a4"+
		"\u06e1\13\u00a4\3\u00a5\3\u00a5\5\u00a5\u06e5\n\u00a5\3\u00a6\3\u00a6"+
		"\3\u00a6\5\u00a6\u06ea\n\u00a6\3\u00a6\3\u00a6\3\u00a6\5\u00a6\u06ef\n"+
		"\u00a6\3\u00a7\5\u00a7\u06f2\n\u00a7\3\u00a7\5\u00a7\u06f5\n\u00a7\3\u00a7"+
		"\3\u00a7\5\u00a7\u06f9\n\u00a7\3\u00a7\3\u00a7\3\u00a8\3\u00a8\5\u00a8"+
		"\u06ff\n\u00a8\3\u00a8\3\u00a8\3\u00a9\3\u00a9\3\u00a9\5\u00a9\u0706\n"+
		"\u00a9\3\u00aa\3\u00aa\3\u00aa\3\u00aa\3\u00ab\3\u00ab\3\u00ab\3\u00ab"+
		"\3\u00ac\3\u00ac\3\u00ac\3\u00ac\5\u00ac\u0714\n\u00ac\3\u00ad\3\u00ad"+
		"\3\u00ad\3\u00ae\3\u00ae\3\u00ae\3\u00ae\5\u00ae\u071d\n\u00ae\3\u00ae"+
		"\3\u00ae\3\u00af\6\u00af\u0722\n\u00af\r\u00af\16\u00af\u0723\3\u00b0"+
		"\3\u00b0\3\u00b0\5\u00b0\u0729\n\u00b0\3\u00b1\3\u00b1\3\u00b1\3\u00b1"+
		"\3\u00b2\3\u00b2\3\u00b2\3\u00b2\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b4"+
		"\3\u00b4\3\u00b4\7\u00b4\u073a\n\u00b4\f\u00b4\16\u00b4\u073d\13\u00b4"+
		"\3\u00b5\3\u00b5\3\u00b5\7\u00b5\u0742\n\u00b5\f\u00b5\16\u00b5\u0745"+
		"\13\u00b5\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6"+
		"\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\5\u00b6"+
		"\u0757\n\u00b6\3\u00b6\3\u00b6\3\u00b6\5\u00b6\u075c\n\u00b6\3\u00b7\6"+
		"\u00b7\u075f\n\u00b7\r\u00b7\16\u00b7\u0760\3\u00b8\3\u00b8\3\u00b8\3"+
		"\u00b8\5\u00b8\u0767\n\u00b8\3\u00b9\3\u00b9\3\u00ba\3\u00ba\3\u00ba\3"+
		"\u00ba\5\u00ba\u076f\n\u00ba\3\u00ba\5\u00ba\u0772\n\u00ba\3\u00ba\3\u00ba"+
		"\3\u00ba\3\u00ba\3\u00ba\3\u00ba\5\u00ba\u077a\n\u00ba\3\u00ba\3\u00ba"+
		"\3\u00ba\7\u00ba\u077f\n\u00ba\f\u00ba\16\u00ba\u0782\13\u00ba\3\u00bb"+
		"\3\u00bb\3\u00bc\3\u00bc\3\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u078c"+
		"\n\u00bd\3\u00be\3\u00be\5\u00be\u0790\n\u00be\3\u00be\3\u00be\3\u00bf"+
		"\3\u00bf\3\u00bf\7\u00bf\u0797\n\u00bf\f\u00bf\16\u00bf\u079a\13\u00bf"+
		"\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u079f\n\u00c0\3\u00c0\3\u00c0\3\u00c1"+
		"\5\u00c1\u07a4\n\u00c1\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u07a9\n\u00c1\3"+
		"\u00c2\3\u00c2\3\u00c2\3\u00c3\3\u00c3\3\u00c4\3\u00c4\3\u00c4\5\u00c4"+
		"\u07b3\n\u00c4\3\u00c5\3\u00c5\3\u00c5\7\u00c5\u07b8\n\u00c5\f\u00c5\16"+
		"\u00c5\u07bb\13\u00c5\3\u00c6\3\u00c6\5\u00c6\u07bf\n\u00c6\3\u00c6\3"+
		"\u00c6\3\u00c7\6\u00c7\u07c4\n\u00c7\r\u00c7\16\u00c7\u07c5\3\u00c8\6"+
		"\u00c8\u07c9\n\u00c8\r\u00c8\16\u00c8\u07ca\3\u00c9\3\u00c9\5\u00c9\u07cf"+
		"\n\u00c9\3\u00c9\3\u00c9\3\u00c9\5\u00c9\u07d4\n\u00c9\3\u00c9\3\u00c9"+
		"\3\u00c9\5\u00c9\u07d9\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9"+
		"\3\u00c9\5\u00c9\u07e1\n\u00c9\3\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00ca"+
		"\3\u00ca\5\u00ca\u07e9\n\u00ca\3\u00cb\5\u00cb\u07ec\n\u00cb\3\u00cb\3"+
		"\u00cb\5\u00cb\u07f0\n\u00cb\3\u00cc\3\u00cc\3\u00cc\7\u00cc\u07f5\n\u00cc"+
		"\f\u00cc\16\u00cc\u07f8\13\u00cc\3\u00cd\5\u00cd\u07fb\n\u00cd\3\u00cd"+
		"\3\u00cd\5\u00cd\u07ff\n\u00cd\3\u00ce\3\u00ce\3\u00ce\3\u00cf\3\u00cf"+
		"\5\u00cf\u0806\n\u00cf\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\5\u00d0"+
		"\u080d\n\u00d0\3\u00d0\5\u00d0\u0810\n\u00d0\3\u00d0\3\u00d0\3\u00d0\5"+
		"\u00d0\u0815\n\u00d0\3\u00d1\6\u00d1\u0818\n\u00d1\r\u00d1\16\u00d1\u0819"+
		"\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d3\3\u00d3\3\u00d3\5\u00d3\u0823"+
		"\n\u00d3\5\u00d3\u0825\n\u00d3\3\u00d3\3\u00d3\3\u00d4\3\u00d4\5\u00d4"+
		"\u082b\n\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4"+
		"\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\5\u00d4\u083b"+
		"\n\u00d4\3\u00d5\3\u00d5\3\u00d5\3\u00d5\3\u00d5\5\u00d5\u0842\n\u00d5"+
		"\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6"+
		"\3\u00d6\3\u00d6\5\u00d6\u084f\n\u00d6\3\u00d7\3\u00d7\5\u00d7\u0853\n"+
		"\u00d7\3\u00d7\3\u00d7\3\u00d8\3\u00d8\3\u00d8\7\u00d8\u085a\n\u00d8\f"+
		"\u00d8\16\u00d8\u085d\13\u00d8\3\u00d8\5\u00d8\u0860\n\u00d8\3\u00d9\3"+
		"\u00d9\3\u00da\3\u00da\3\u00da\5\u00da\u0867\n\u00da\3\u00da\3\u00da\3"+
		"\u00db\3\u00db\3\u00db\7\u00db\u086e\n\u00db\f\u00db\16\u00db\u0871\13"+
		"\u00db\3\u00db\5\u00db\u0874\n\u00db\3\u00dc\3\u00dc\3\u00dc\3\u00dc\3"+
		"\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd"+
		"\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd"+
		"\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd"+
		"\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\3\u00dd\5\u00dd\u089b\n\u00dd"+
		"\3\u00de\3\u00de\3\u00de\3\u00de\3\u00de\3\u00de\3\u00de\3\u00de\3\u00de"+
		"\3\u00de\3\u00de\3\u00de\5\u00de\u08a9\n\u00de\3\u00df\3\u00df\3\u00df"+
		"\3\u00df\3\u00df\3\u00df\3\u00df\3\u00df\3\u00df\3\u00df\3\u00df\5\u00df"+
		"\u08b6\n\u00df\3\u00e0\3\u00e0\5\u00e0\u08ba\n\u00e0\3\u00e0\5\u00e0\u08bd"+
		"\n\u00e0\3\u00e0\3\u00e0\3\u00e1\5\u00e1\u08c2\n\u00e1\3\u00e1\3\u00e1"+
		"\5\u00e1\u08c6\n\u00e1\3\u00e1\5\u00e1\u08c9\n\u00e1\3\u00e1\3\u00e1\3"+
		"\u00e1\3\u00e1\3\u00e1\5\u00e1\u08d0\n\u00e1\3\u00e2\3\u00e2\5\u00e2\u08d4"+
		"\n\u00e2\3\u00e2\3\u00e2\5\u00e2\u08d8\n\u00e2\3\u00e3\3\u00e3\3\u00e3"+
		"\7\u00e3\u08dd\n\u00e3\f\u00e3\16\u00e3\u08e0\13\u00e3\3\u00e4\3\u00e4"+
		"\3\u00e4\5\u00e4\u08e5\n\u00e4\5\u00e4\u08e7\n\u00e4\3\u00e5\3\u00e5\3"+
		"\u00e5\3\u00e5\3\u00e6\3\u00e6\3\u00e6\7\u00e6\u08f0\n\u00e6\f\u00e6\16"+
		"\u00e6\u08f3\13\u00e6\3\u00e7\5\u00e7\u08f6\n\u00e7\3\u00e7\3\u00e7\5"+
		"\u00e7\u08fa\n\u00e7\3\u00e7\3\u00e7\3\u00e7\5\u00e7\u08ff\n\u00e7\3\u00e8"+
		"\3\u00e8\3\u00e8\3\u00e8\3\u00e8\5\u00e8\u0906\n\u00e8\5\u00e8\u0908\n"+
		"\u00e8\3\u00e9\3\u00e9\3\u00e9\5\u00e9\u090d\n\u00e9\3\u00e9\3\u00e9\5"+
		"\u00e9\u0911\n\u00e9\3\u00ea\3\u00ea\3\u00ea\3\u00ea\3\u00eb\3\u00eb\3"+
		"\u00eb\3\u00eb\3\u00ec\3\u00ec\3\u00ec\3\u00ec\3\u00ec\3\u00ec\3\u00ec"+
		"\3\u00ec\5\u00ec\u0923\n\u00ec\3\u00ed\3\u00ed\3\u00ed\7\u00ed\u0928\n"+
		"\u00ed\f\u00ed\16\u00ed\u092b\13\u00ed\3\u00ee\3\u00ee\3\u00ee\5\u00ee"+
		"\u0930\n\u00ee\3\u00ee\3\u00ee\3\u00ef\3\u00ef\3\u00f0\3\u00f0\5\u00f0"+
		"\u0938\n\u00f0\3\u00f0\3\u00f0\3\u00f0\3\u00f1\3\u00f1\3\u00f1\7\u00f1"+
		"\u0940\n\u00f1\f\u00f1\16\u00f1\u0943\13\u00f1\3\u00f2\3\u00f2\5\u00f2"+
		"\u0947\n\u00f2\3\u00f2\5\u00f2\u094a\n\u00f2\3\u00f3\6\u00f3\u094d\n\u00f3"+
		"\r\u00f3\16\u00f3\u094e\3\u00f4\3\u00f4\3\u00f4\3\u00f4\3\u00f4\3\u00f4"+
		"\3\u00f4\5\u00f4\u0958\n\u00f4\3\u00f5\3\u00f5\3\u00f5\3\u00f5\5\u00f5"+
		"\u095e\n\u00f5\3\u00f5\3\u00f5\3\u00f5\3\u00f6\3\u00f6\3\u00f6\3\u00f6"+
		"\3\u00f6\3\u00f7\3\u00f7\3\u00f7\3\u00f7\3\u00f7\3\u00f7\3\u00f7\3\u00f7"+
		"\7\u00f7\u0970\n\u00f7\f\u00f7\16\u00f7\u0973\13\u00f7\3\u00f7\7\u00f7"+
		"\u0976\n\u00f7\f\u00f7\16\u00f7\u0979\13\u00f7\3\u00f8\5\u00f8\u097c\n"+
		"\u00f8\3\u00f8\3\u00f8\5\u00f8\u0980\n\u00f8\3\u00f9\3\u00f9\3\u00f9\3"+
		"\u00f9\3\u00f9\3\u00f9\5\u00f9\u0988\n\u00f9\3\u00fa\3\u00fa\3\u00fa\3"+
		"\u00fa\3\u00fa\3\u00fa\3\u00fa\3\u00fa\5\u00fa\u0992\n\u00fa\5\u00fa\u0994"+
		"\n\u00fa\3\u00fb\3\u00fb\3\u00fb\3\u00fc\3\u00fc\3\u00fc\3\u00fc\3\u00fd"+
		"\3\u00fd\3\u00fd\3\u00fe\3\u00fe\3\u00fe\3\u00ff\3\u00ff\5\u00ff\u09a5"+
		"\n\u00ff\3\u00ff\3\u00ff\3\u0100\3\u0100\3\u0100\7\u0100\u09ac\n\u0100"+
		"\f\u0100\16\u0100\u09af\13\u0100\3\u0101\5\u0101\u09b2\n\u0101\3\u0101"+
		"\3\u0101\3\u0101\5\u0101\u09b7\n\u0101\3\u0102\3\u0102\5\u0102\u09bb\n"+
		"\u0102\3\u0103\6\u0103\u09be\n\u0103\r\u0103\16\u0103\u09bf\3\u0104\3"+
		"\u0104\3\u0104\3\u0104\3\u0105\6\u0105\u09c7\n\u0105\r\u0105\16\u0105"+
		"\u09c8\3\u0106\3\u0106\3\u0106\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107"+
		"\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107"+
		"\5\u0107\u09dc\n\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107\3\u0107"+
		"\3\u0107\3\u0107\3\u0107\5\u0107\u09e7\n\u0107\7\u0107\u09e9\n\u0107\f"+
		"\u0107\16\u0107\u09ec\13\u0107\3\u0108\3\u0108\5\u0108\u09f0\n\u0108\3"+
		"\u0108\5\u0108\u09f3\n\u0108\3\u0108\3\u0108\3\u0109\3\u0109\5\u0109\u09f9"+
		"\n\u0109\3\u0109\3\u0109\5\u0109\u09fd\n\u0109\3\u010a\3\u010a\3\u010b"+
		"\3\u010b\5\u010b\u0a03\n\u010b\3\u010b\3\u010b\3\u010c\3\u010c\3\u010c"+
		"\7\u010c\u0a0a\n\u010c\f\u010c\16\u010c\u0a0d\13\u010c\3\u010d\3\u010d"+
		"\3\u010d\3\u010d\5\u010d\u0a13\n\u010d\3\u010d\3\u010d\5\u010d\u0a17\n"+
		"\u010d\3\u010e\6\u010e\u0a1a\n\u010e\r\u010e\16\u010e\u0a1b\3\u010f\5"+
		"\u010f\u0a1f\n\u010f\3\u010f\3\u010f\5\u010f\u0a23\n\u010f\3\u010f\3\u010f"+
		"\3\u010f\3\u0110\3\u0110\3\u0110\5\u0110\u0a2b\n\u0110\5\u0110\u0a2d\n"+
		"\u0110\3\u0110\3\u0110\3\u0111\3\u0111\3\u0111\7\u0111\u0a34\n\u0111\f"+
		"\u0111\16\u0111\u0a37\13\u0111\3\u0112\5\u0112\u0a3a\n\u0112\3\u0112\5"+
		"\u0112\u0a3d\n\u0112\3\u0112\3\u0112\3\u0112\3\u0112\5\u0112\u0a43\n\u0112"+
		"\3\u0113\6\u0113\u0a46\n\u0113\r\u0113\16\u0113\u0a47\3\u0114\3\u0114"+
		"\3\u0114\3\u0114\3\u0115\3\u0115\3\u0115\3\u0115\3\u0115\3\u0115\3\u0116"+
		"\3\u0116\3\u0116\7\u0116\u0a57\n\u0116\f\u0116\16\u0116\u0a5a\13\u0116"+
		"\3\u0116\5\u0116\u0a5d\n\u0116\3\u0117\3\u0117\3\u0117\3\u0118\3\u0118"+
		"\3\u0118\3\u0119\3\u0119\3\u011a\3\u011a\3\u011b\3\u011b\3\u011b\3\u011c"+
		"\3\u011c\3\u011c\7\u011c\u0a6f\n\u011c\f\u011c\16\u011c\u0a72\13\u011c"+
		"\3\u011d\3\u011d\3\u011d\3\u011d\3\u011d\3\u011d\5\u011d\u0a7a\n\u011d"+
		"\3\u011d\5\u011d\u0a7d\n\u011d\3\u011e\3\u011e\3\u011e\7\u011e\u0a82\n"+
		"\u011e\f\u011e\16\u011e\u0a85\13\u011e\3\u011f\3\u011f\3\u0120\3\u0120"+
		"\3\u0120\3\u0121\3\u0121\3\u0121\3\u0122\3\u0122\3\u0122\3\u0122\3\u0123"+
		"\3\u0123\3\u0123\3\u0123\3\u0124\3\u0124\3\u0124\3\u0124\3\u0125\3\u0125"+
		"\3\u0125\3\u0126\3\u0126\3\u0126\3\u0126\3\u0127\3\u0127\3\u0127\3\u0127"+
		"\3\u0127\3\u0128\3\u0128\3\u0128\3\u0128\3\u0129\3\u0129\3\u0129\3\u012a"+
		"\3\u012a\3\u012a\3\u012b\3\u012b\3\u012b\3\u012c\3\u012c\5\u012c\u0ab6"+
		"\n\u012c\3\u012c\3\u012c\3\u012c\5\u012c\u0abb\n\u012c\3\u012d\3\u012d"+
		"\5\u012d\u0abf\n\u012d\3\u012e\3\u012e\5\u012e\u0ac3\n\u012e\3\u012f\3"+
		"\u012f\6\u012f\u0ac7\n\u012f\r\u012f\16\u012f\u0ac8\3\u0130\3\u0130\3"+
		"\u0131\3\u0131\5\u0131\u0acf\n\u0131\3\u0132\3\u0132\6\u0132\u0ad3\n\u0132"+
		"\r\u0132\16\u0132\u0ad4\3\u0133\3\u0133\3\u0133\3\u0133\5\u0133\u0adb"+
		"\n\u0133\3\u0134\5\u0134\u0ade\n\u0134\3\u0134\3\u0134\5\u0134\u0ae2\n"+
		"\u0134\3\u0134\5\u0134\u0ae5\n\u0134\3\u0135\3\u0135\3\u0136\3\u0136\3"+
		"\u0137\3\u0137\3\u0138\3\u0138\3\u0138\5\u0138\u0af0\n\u0138\3\u0139\3"+
		"\u0139\6\u0139\u0af4\n\u0139\r\u0139\16\u0139\u0af5\3\u0139\3\u0139\3"+
		"\u0139\6\u0139\u0afb\n\u0139\r\u0139\16\u0139\u0afc\3\u0139\5\u0139\u0b00"+
		"\n\u0139\3\u013a\3\u013a\7\u013a\u0b04\n\u013a\f\u013a\16\u013a\u0b07"+
		"\13\u013a\3\u013a\3\u013a\3\u013a\7\u013a\u0b0c\n\u013a\f\u013a\16\u013a"+
		"\u0b0f\13\u013a\3\u013a\5\u013a\u0b12\n\u013a\3\u013b\3\u013b\3\u013b"+
		"\3\u013b\3\u013b\3\u013b\3\u013b\3\u013b\5\u013b\u0b1c\n\u013b\3\u013b"+
		"\3\u013b\7\u013b\u0b20\n\u013b\f\u013b\16\u013b\u0b23\13\u013b\3\u013b"+
		"\3\u013b\3\u013b\3\u013b\3\u013b\3\u013b\3\u013b\3\u013b\3\u013b\5\u013b"+
		"\u0b2e\n\u013b\3\u013b\3\u013b\7\u013b\u0b32\n\u013b\f\u013b\16\u013b"+
		"\u0b35\13\u013b\3\u013b\5\u013b\u0b38\n\u013b\3\u013b\3\u0977\5d\u0172"+
		"\u020c\u013c\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64"+
		"\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088"+
		"\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0"+
		"\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8"+
		"\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0"+
		"\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8"+
		"\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100"+
		"\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118"+
		"\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130"+
		"\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148"+
		"\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160"+
		"\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178"+
		"\u017a\u017c\u017e\u0180\u0182\u0184\u0186\u0188\u018a\u018c\u018e\u0190"+
		"\u0192\u0194\u0196\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4\u01a6\u01a8"+
		"\u01aa\u01ac\u01ae\u01b0\u01b2\u01b4\u01b6\u01b8\u01ba\u01bc\u01be\u01c0"+
		"\u01c2\u01c4\u01c6\u01c8\u01ca\u01cc\u01ce\u01d0\u01d2\u01d4\u01d6\u01d8"+
		"\u01da\u01dc\u01de\u01e0\u01e2\u01e4\u01e6\u01e8\u01ea\u01ec\u01ee\u01f0"+
		"\u01f2\u01f4\u01f6\u01f8\u01fa\u01fc\u01fe\u0200\u0202\u0204\u0206\u0208"+
		"\u020a\u020c\u020e\u0210\u0212\u0214\u0216\u0218\u021a\u021c\u021e\u0220"+
		"\u0222\u0224\u0226\u0228\u022a\u022c\u022e\u0230\u0232\u0234\u0236\u0238"+
		"\u023a\u023c\u023e\u0240\u0242\u0244\u0246\u0248\u024a\u024c\u024e\u0250"+
		"\u0252\u0254\u0256\u0258\u025a\u025c\u025e\u0260\u0262\u0264\u0266\u0268"+
		"\u026a\u026c\u026e\u0270\u0272\u0274\2\30\3\2\35\36\3\2@A\3\2ci\3\2jm"+
		"\3\2no\3\2vw\4\2cgor\b\2\b\b\17\17\22\22\35\37&&==\3\2)*\3\2\u0099\u009a"+
		"\3\2\678\3\2\63\65\3\2MN\5\2\26\26\30\32QQ\3\2OP\7\2\u008c\u008c\u0093"+
		"\u0095\u009a\u009b\u009e\u009e\u00a6\u00a7\3\2\u0089\u008a\22\2\3\4\7"+
		"\b\n\n\f\r\20\20\23\23\26\34\37#++\61<>IKPWZ^rtu\u0089\u008a\21\2\3\3"+
		"\5\26\30\37$*,\60<=JJQV[]abssv\u0082\u0084\u0084\u0086\u0088\u0098\u0098"+
		"\5\2\u0096\u0097\u0099\u009a\u009c\u00a5\4\2VV[[\3\2\u00ac\u00b0\2\u0be3"+
		"\2\u0277\3\2\2\2\4\u0289\3\2\2\2\6\u028f\3\2\2\2\b\u0296\3\2\2\2\n\u0298"+
		"\3\2\2\2\f\u02a4\3\2\2\2\16\u02a8\3\2\2\2\20\u02b4\3\2\2\2\22\u02b6\3"+
		"\2\2\2\24\u02ba\3\2\2\2\26\u02be\3\2\2\2\30\u02c6\3\2\2\2\32\u02c8\3\2"+
		"\2\2\34\u02d2\3\2\2\2\36\u02d4\3\2\2\2 \u02d9\3\2\2\2\"\u02e1\3\2\2\2"+
		"$\u02ec\3\2\2\2&\u02ef\3\2\2\2(\u02f5\3\2\2\2*\u0304\3\2\2\2,\u0309\3"+
		"\2\2\2.\u030c\3\2\2\2\60\u030e\3\2\2\2\62\u0317\3\2\2\2\64\u031c\3\2\2"+
		"\2\66\u0320\3\2\2\28\u0325\3\2\2\2:\u0329\3\2\2\2<\u0330\3\2\2\2>\u0333"+
		"\3\2\2\2@\u033a\3\2\2\2B\u033c\3\2\2\2D\u0340\3\2\2\2F\u0344\3\2\2\2H"+
		"\u0346\3\2\2\2J\u034a\3\2\2\2L\u034d\3\2\2\2N\u0350\3\2\2\2P\u0356\3\2"+
		"\2\2R\u035a\3\2\2\2T\u0360\3\2\2\2V\u036a\3\2\2\2X\u0371\3\2\2\2Z\u0373"+
		"\3\2\2\2\\\u037c\3\2\2\2^\u0382\3\2\2\2`\u0386\3\2\2\2b\u038b\3\2\2\2"+
		"d\u0399\3\2\2\2f\u03c4\3\2\2\2h\u03c6\3\2\2\2j\u03ca\3\2\2\2l\u03cf\3"+
		"\2\2\2n\u03d1\3\2\2\2p\u03d3\3\2\2\2r\u03db\3\2\2\2t\u03dd\3\2\2\2v\u03eb"+
		"\3\2\2\2x\u03ed\3\2\2\2z\u03ef\3\2\2\2|\u03f4\3\2\2\2~\u03f6\3\2\2\2\u0080"+
		"\u03fb\3\2\2\2\u0082\u0407\3\2\2\2\u0084\u0409\3\2\2\2\u0086\u0412\3\2"+
		"\2\2\u0088\u0414\3\2\2\2\u008a\u0418\3\2\2\2\u008c\u0420\3\2\2\2\u008e"+
		"\u0428\3\2\2\2\u0090\u042b\3\2\2\2\u0092\u0435\3\2\2\2\u0094\u0437\3\2"+
		"\2\2\u0096\u043d\3\2\2\2\u0098\u0443\3\2\2\2\u009a\u0447\3\2\2\2\u009c"+
		"\u044f\3\2\2\2\u009e\u0460\3\2\2\2\u00a0\u0466\3\2\2\2\u00a2\u046b\3\2"+
		"\2\2\u00a4\u046d\3\2\2\2\u00a6\u0474\3\2\2\2\u00a8\u047c\3\2\2\2\u00aa"+
		"\u047e\3\2\2\2\u00ac\u0488\3\2\2\2\u00ae\u048b\3\2\2\2\u00b0\u0493\3\2"+
		"\2\2\u00b2\u049b\3\2\2\2\u00b4\u049f\3\2\2\2\u00b6\u04a2\3\2\2\2\u00b8"+
		"\u04b6\3\2\2\2\u00ba\u04bd\3\2\2\2\u00bc\u04cc\3\2\2\2\u00be\u04cf\3\2"+
		"\2\2\u00c0\u04d9\3\2\2\2\u00c2\u04e5\3\2\2\2\u00c4\u04e9\3\2\2\2\u00c6"+
		"\u04f6\3\2\2\2\u00c8\u04fe\3\2\2\2\u00ca\u0505\3\2\2\2\u00cc\u0513\3\2"+
		"\2\2\u00ce\u051c\3\2\2\2\u00d0\u0525\3\2\2\2\u00d2\u0531\3\2\2\2\u00d4"+
		"\u0533\3\2\2\2\u00d6\u0536\3\2\2\2\u00d8\u0543\3\2\2\2\u00da\u054c\3\2"+
		"\2\2\u00dc\u054e\3\2\2\2\u00de\u0558\3\2\2\2\u00e0\u055e\3\2\2\2\u00e2"+
		"\u0560\3\2\2\2\u00e4\u0566\3\2\2\2\u00e6\u056f\3\2\2\2\u00e8\u057c\3\2"+
		"\2\2\u00ea\u057e\3\2\2\2\u00ec\u0580\3\2\2\2\u00ee\u0584\3\2\2\2\u00f0"+
		"\u058e\3\2\2\2\u00f2\u05a2\3\2\2\2\u00f4\u05a9\3\2\2\2\u00f6\u05ac\3\2"+
		"\2\2\u00f8\u05b4\3\2\2\2\u00fa\u05c5\3\2\2\2\u00fc\u05c7\3\2\2\2\u00fe"+
		"\u05c9\3\2\2\2\u0100\u05cb\3\2\2\2\u0102\u05d9\3\2\2\2\u0104\u05e0\3\2"+
		"\2\2\u0106\u05e3\3\2\2\2\u0108\u05e8\3\2\2\2\u010a\u05f0\3\2\2\2\u010c"+
		"\u05f4\3\2\2\2\u010e\u05fa\3\2\2\2\u0110\u05fd\3\2\2\2\u0112\u060f\3\2"+
		"\2\2\u0114\u0611\3\2\2\2\u0116\u0618\3\2\2\2\u0118\u061d\3\2\2\2\u011a"+
		"\u0620\3\2\2\2\u011c\u063b\3\2\2\2\u011e\u063d\3\2\2\2\u0120\u0644\3\2"+
		"\2\2\u0122\u0649\3\2\2\2\u0124\u064c\3\2\2\2\u0126\u065d\3\2\2\2\u0128"+
		"\u065f\3\2\2\2\u012a\u0666\3\2\2\2\u012c\u066b\3\2\2\2\u012e\u0673\3\2"+
		"\2\2\u0130\u0675\3\2\2\2\u0132\u067a\3\2\2\2\u0134\u0683\3\2\2\2\u0136"+
		"\u0691\3\2\2\2\u0138\u0699\3\2\2\2\u013a\u06a9\3\2\2\2\u013c\u06b7\3\2"+
		"\2\2\u013e\u06c0\3\2\2\2\u0140\u06c3\3\2\2\2\u0142\u06c9\3\2\2\2\u0144"+
		"\u06d8\3\2\2\2\u0146\u06df\3\2\2\2\u0148\u06e4\3\2\2\2\u014a\u06e6\3\2"+
		"\2\2\u014c\u06f1\3\2\2\2\u014e\u06fc\3\2\2\2\u0150\u0705\3\2\2\2\u0152"+
		"\u0707\3\2\2\2\u0154\u070b\3\2\2\2\u0156\u070f\3\2\2\2\u0158\u0715\3\2"+
		"\2\2\u015a\u0718\3\2\2\2\u015c\u0721\3\2\2\2\u015e\u0728\3\2\2\2\u0160"+
		"\u072a\3\2\2\2\u0162\u072e\3\2\2\2\u0164\u0732\3\2\2\2\u0166\u0736\3\2"+
		"\2\2\u0168\u073e\3\2\2\2\u016a\u075b\3\2\2\2\u016c\u075e\3\2\2\2\u016e"+
		"\u0762\3\2\2\2\u0170\u0768\3\2\2\2\u0172\u0779\3\2\2\2\u0174\u0783\3\2"+
		"\2\2\u0176\u0785\3\2\2\2\u0178\u078b\3\2\2\2\u017a\u078d\3\2\2\2\u017c"+
		"\u0793\3\2\2\2\u017e\u079e\3\2\2\2\u0180\u07a3\3\2\2\2\u0182\u07aa\3\2"+
		"\2\2\u0184\u07ad\3\2\2\2\u0186\u07af\3\2\2\2\u0188\u07b4\3\2\2\2\u018a"+
		"\u07bc\3\2\2\2\u018c\u07c3\3\2\2\2\u018e\u07c8\3\2\2\2\u0190\u07e0\3\2"+
		"\2\2\u0192\u07e8\3\2\2\2\u0194\u07eb\3\2\2\2\u0196\u07f1\3\2\2\2\u0198"+
		"\u07fe\3\2\2\2\u019a\u0800\3\2\2\2\u019c\u0803\3\2\2\2\u019e\u0814\3\2"+
		"\2\2\u01a0\u0817\3\2\2\2\u01a2\u081b\3\2\2\2\u01a4\u0824\3\2\2\2\u01a6"+
		"\u083a\3\2\2\2\u01a8\u083c\3\2\2\2\u01aa\u084e\3\2\2\2\u01ac\u0850\3\2"+
		"\2\2\u01ae\u0856\3\2\2\2\u01b0\u0861\3\2\2\2\u01b2\u0863\3\2\2\2\u01b4"+
		"\u086a\3\2\2\2\u01b6\u0875\3\2\2\2\u01b8\u089a\3\2\2\2\u01ba\u08a8\3\2"+
		"\2\2\u01bc\u08b5\3\2\2\2\u01be\u08b7\3\2\2\2\u01c0\u08cf\3\2\2\2\u01c2"+
		"\u08d7\3\2\2\2\u01c4\u08d9\3\2\2\2\u01c6\u08e1\3\2\2\2\u01c8\u08e8\3\2"+
		"\2\2\u01ca\u08ec\3\2\2\2\u01cc\u08f5\3\2\2\2\u01ce\u0907\3\2\2\2\u01d0"+
		"\u0909\3\2\2\2\u01d2\u0912\3\2\2\2\u01d4\u0916\3\2\2\2\u01d6\u0922\3\2"+
		"\2\2\u01d8\u0924\3\2\2\2\u01da\u092f\3\2\2\2\u01dc\u0933\3\2\2\2\u01de"+
		"\u0935\3\2\2\2\u01e0\u093c\3\2\2\2\u01e2\u0949\3\2\2\2\u01e4\u094c\3\2"+
		"\2\2\u01e6\u0957\3\2\2\2\u01e8\u0959\3\2\2\2\u01ea\u0962\3\2\2\2\u01ec"+
		"\u0967\3\2\2\2\u01ee\u097f\3\2\2\2\u01f0\u0981\3\2\2\2\u01f2\u0989\3\2"+
		"\2\2\u01f4\u0995\3\2\2\2\u01f6\u0998\3\2\2\2\u01f8\u099c\3\2\2\2\u01fa"+
		"\u099f\3\2\2\2\u01fc\u09a2\3\2\2\2\u01fe\u09a8\3\2\2\2\u0200\u09b1\3\2"+
		"\2\2\u0202\u09b8\3\2\2\2\u0204\u09bd\3\2\2\2\u0206\u09c1\3\2\2\2\u0208"+
		"\u09c6\3\2\2\2\u020a\u09ca\3\2\2\2\u020c\u09db\3\2\2\2\u020e\u09ed\3\2"+
		"\2\2\u0210\u09f6\3\2\2\2\u0212\u09fe\3\2\2\2\u0214\u0a00\3\2\2\2\u0216"+
		"\u0a06\3\2\2\2\u0218\u0a12\3\2\2\2\u021a\u0a19\3\2\2\2\u021c\u0a1e\3\2"+
		"\2\2\u021e\u0a27\3\2\2\2\u0220\u0a30\3\2\2\2\u0222\u0a42\3\2\2\2\u0224"+
		"\u0a45\3\2\2\2\u0226\u0a49\3\2\2\2\u0228\u0a4d\3\2\2\2\u022a\u0a53\3\2"+
		"\2\2\u022c\u0a5e\3\2\2\2\u022e\u0a61\3\2\2\2\u0230\u0a64\3\2\2\2\u0232"+
		"\u0a66\3\2\2\2\u0234\u0a68\3\2\2\2\u0236\u0a6b\3\2\2\2\u0238\u0a7c\3\2"+
		"\2\2\u023a\u0a7e\3\2\2\2\u023c\u0a86\3\2\2\2\u023e\u0a88\3\2\2\2\u0240"+
		"\u0a8b\3\2\2\2\u0242\u0a8e\3\2\2\2\u0244\u0a92\3\2\2\2\u0246\u0a96\3\2"+
		"\2\2\u0248\u0a9a\3\2\2\2\u024a\u0a9d\3\2\2\2\u024c\u0aa1\3\2\2\2\u024e"+
		"\u0aa6\3\2\2\2\u0250\u0aaa\3\2\2\2\u0252\u0aad\3\2\2\2\u0254\u0ab0\3\2"+
		"\2\2\u0256\u0aba\3\2\2\2\u0258\u0abe\3\2\2\2\u025a\u0ac2\3\2\2\2\u025c"+
		"\u0ac6\3\2\2\2\u025e\u0aca\3\2\2\2\u0260\u0ace\3\2\2\2\u0262\u0ad2\3\2"+
		"\2\2\u0264\u0ada\3\2\2\2\u0266\u0ae4\3\2\2\2\u0268\u0ae6\3\2\2\2\u026a"+
		"\u0ae8\3\2\2\2\u026c\u0aea\3\2\2\2\u026e\u0aef\3\2\2\2\u0270\u0aff\3\2"+
		"\2\2\u0272\u0b11\3\2\2\2\u0274\u0b37\3\2\2\2\u0276\u0278\5\6\4\2\u0277"+
		"\u0276\3\2\2\2\u0277\u0278\3\2\2\2\u0278\u0279\3\2\2\2\u0279\u027a\7\2"+
		"\2\3\u027a\3\3\2\2\2\u027b\u0284\5\b\5\2\u027c\u0284\5\u009eP\2\u027d"+
		"\u0284\5\30\r\2\u027e\u0284\5:\36\2\u027f\u0284\5@!\2\u0280\u0284\5L\'"+
		"\2\u0281\u0284\5N(\2\u0282\u0284\5\u0194\u00cb\2\u0283\u027b\3\2\2\2\u0283"+
		"\u027c\3\2\2\2\u0283\u027d\3\2\2\2\u0283\u027e\3\2\2\2\u0283\u027f\3\2"+
		"\2\2\u0283\u0280\3\2\2\2\u0283\u0281\3\2\2\2\u0283\u0282\3\2\2\2\u0284"+
		"\u0286\3\2\2\2\u0285\u0287\7\u0095\2\2\u0286\u0285\3\2\2\2\u0286\u0287"+
		"\3\2\2\2\u0287\u028a\3\2\2\2\u0288\u028a\5X-\2\u0289\u0283\3\2\2\2\u0289"+
		"\u0288\3\2\2\2\u028a\5\3\2\2\2\u028b\u028c\6\4\2\3\u028c\u028d\5\4\3\2"+
		"\u028d\u028e\b\4\1\2\u028e\u0290\3\2\2\2\u028f\u028b\3\2\2\2\u0290\u0291"+
		"\3\2\2\2\u0291\u028f\3\2\2\2\u0291\u0292\3\2\2\2\u0292\7\3\2\2\2\u0293"+
		"\u0297\5\n\6\2\u0294\u0297\5\f\7\2\u0295\u0297\5\26\f\2\u0296\u0293\3"+
		"\2\2\2\u0296\u0294\3\2\2\2\u0296\u0295\3\2\2\2\u0297\t\3\2\2\2\u0298\u029a"+
		"\7\20\2\2\u0299\u029b\7\6\2\2\u029a\u0299\3\2\2\2\u029a\u029b\3\2\2\2"+
		"\u029b\u029c\3\2\2\2\u029c\u029d\5\u0172\u00ba\2\u029d\u029e\7\23\2\2"+
		"\u029e\u02a0\5\u0194\u00cb\2\u029f\u02a1\5,\27\2\u02a0\u029f\3\2\2\2\u02a0"+
		"\u02a1\3\2\2\2\u02a1\u02a2\3\2\2\2\u02a2\u02a3\5\u00a4S\2\u02a3\13\3\2"+
		"\2\2\u02a4\u02a5\7\34\2\2\u02a5\u02a6\5\16\b\2\u02a6\u02a7\5\u00a4S\2"+
		"\u02a7\r\3\2\2\2\u02a8\u02ad\5\20\t\2\u02a9\u02aa\7\u0093\2\2\u02aa\u02ac"+
		"\5\20\t\2\u02ab\u02a9\3\2\2\2\u02ac\u02af\3\2\2\2\u02ad\u02ab\3\2\2\2"+
		"\u02ad\u02ae\3\2\2\2\u02ae\17\3\2\2\2\u02af\u02ad\3\2\2\2\u02b0\u02b5"+
		"\5~@\2\u02b1\u02b5\5\u0194\u00cb\2\u02b2\u02b5\5\22\n\2\u02b3\u02b5\5"+
		"\24\13\2\u02b4\u02b0\3\2\2\2\u02b4\u02b1\3\2\2\2\u02b4\u02b2\3\2\2\2\u02b4"+
		"\u02b3\3\2\2\2\u02b5\21\3\2\2\2\u02b6\u02b7\7\6\2\2\u02b7\u02b8\5\u0172"+
		"\u00ba\2\u02b8\u02b9\5\u00b4[\2\u02b9\23\3\2\2\2\u02ba\u02bb\t\2\2\2\u02bb"+
		"\u02bc\5\u0172\u00ba\2\u02bc\u02bd\5\u00b4[\2\u02bd\25\3\2\2\2\u02be\u02bf"+
		"\7$\2\2\u02bf\u02c0\5\u00a4S\2\u02c0\u02c1\7\34\2\2\u02c1\u02c2\5\u0194"+
		"\u00cb\2\u02c2\27\3\2\2\2\u02c3\u02c7\5\32\16\2\u02c4\u02c7\5\36\20\2"+
		"\u02c5\u02c7\5 \21\2\u02c6\u02c3\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c6\u02c5"+
		"\3\2\2\2\u02c7\31\3\2\2\2\u02c8\u02c9\7\24\2\2\u02c9\u02ca\5\16\b\2\u02ca"+
		"\u02cc\5\u00a4S\2\u02cb\u02cd\5\34\17\2\u02cc\u02cb\3\2\2\2\u02cc\u02cd"+
		"\3\2\2\2\u02cd\33\3\2\2\2\u02ce\u02cf\7\16\2\2\u02cf\u02d3\5\u00a4S\2"+
		"\u02d0\u02d1\7\16\2\2\u02d1\u02d3\5\32\16\2\u02d2\u02ce\3\2\2\2\u02d2"+
		"\u02d0\3\2\2\2\u02d3\35\3\2\2\2\u02d4\u02d5\7\r\2\2\u02d5\u02d6\5\16\b"+
		"\2\u02d6\u02d7\7\16\2\2\u02d7\u02d8\5\u00a4S\2\u02d8\37\3\2\2\2\u02d9"+
		"\u02da\7%\2\2\u02da\u02db\5\u0194\u00cb\2\u02db\u02dd\7\u008d\2\2\u02dc"+
		"\u02de\5\"\22\2\u02dd\u02dc\3\2\2\2\u02dd\u02de\3\2\2\2\u02de\u02df\3"+
		"\2\2\2\u02df\u02e0\7\u0090\2\2\u02e0!\3\2\2\2\u02e1\u02e3\5$\23\2\u02e2"+
		"\u02e4\5\"\22\2\u02e3\u02e2\3\2\2\2\u02e3\u02e4\3\2\2\2\u02e4#\3\2\2\2"+
		"\u02e5\u02e8\5&\24\2\u02e6\u02e8\5*\26\2\u02e7\u02e5\3\2\2\2\u02e7\u02e6"+
		"\3\2\2\2\u02e8\u02e9\3\2\2\2\u02e9\u02ea\5\6\4\2\u02ea\u02ed\3\2\2\2\u02eb"+
		"\u02ed\5\60\31\2\u02ec\u02e7\3\2\2\2\u02ec\u02eb\3\2\2\2\u02ed%\3\2\2"+
		"\2\u02ee\u02f0\5\u018c\u00c7\2\u02ef\u02ee\3\2\2\2\u02ef\u02f0\3\2\2\2"+
		"\u02f0\u02f1\3\2\2\2\u02f1\u02f2\7\6\2\2\u02f2\u02f3\5(\25\2\u02f3\u02f4"+
		"\7\u0094\2\2\u02f4\'\3\2\2\2\u02f5\u02f7\5\u0172\u00ba\2\u02f6\u02f8\5"+
		",\27\2\u02f7\u02f6\3\2\2\2\u02f7\u02f8\3\2\2\2\u02f8\u0300\3\2\2\2\u02f9"+
		"\u02fa\7\u0093\2\2\u02fa\u02fc\5\u0172\u00ba\2\u02fb\u02fd\5,\27\2\u02fc"+
		"\u02fb\3\2\2\2\u02fc\u02fd\3\2\2\2\u02fd\u02ff\3\2\2\2\u02fe\u02f9\3\2"+
		"\2\2\u02ff\u0302\3\2\2\2\u0300\u02fe\3\2\2\2\u0300\u0301\3\2\2\2\u0301"+
		")\3\2\2\2\u0302\u0300\3\2\2\2\u0303\u0305\5\u018c\u00c7\2\u0304\u0303"+
		"\3\2\2\2\u0304\u0305\3\2\2\2\u0305\u0306\3\2\2\2\u0306\u0307\7\n\2\2\u0307"+
		"\u0308\7\u0094\2\2\u0308+\3\2\2\2\u0309\u030a\7\33\2\2\u030a\u030b\5."+
		"\30\2\u030b-\3\2\2\2\u030c\u030d\5\u0194\u00cb\2\u030d/\3\2\2\2\u030e"+
		"\u0310\5\62\32\2\u030f\u0311\5\64\33\2\u0310\u030f\3\2\2\2\u0310\u0311"+
		"\3\2\2\2\u0311\u0313\3\2\2\2\u0312\u0314\58\35\2\u0313\u0312\3\2\2\2\u0313"+
		"\u0314\3\2\2\2\u0314\u0315\3\2\2\2\u0315\u0316\7|\2\2\u0316\61\3\2\2\2"+
		"\u0317\u0318\7y\2\2\u0318\u031a\5d\63\2\u0319\u031b\5\"\22\2\u031a\u0319"+
		"\3\2\2\2\u031a\u031b\3\2\2\2\u031b\63\3\2\2\2\u031c\u031e\5`\61\2\u031d"+
		"\u031f\5\64\33\2\u031e\u031d\3\2\2\2\u031e\u031f\3\2\2\2\u031f\65\3\2"+
		"\2\2\u0320\u0321\7z\2\2\u0321\u0323\5d\63\2\u0322\u0324\5\"\22\2\u0323"+
		"\u0322\3\2\2\2\u0323\u0324\3\2\2\2\u0324\67\3\2\2\2\u0325\u0327\7{\2\2"+
		"\u0326\u0328\5\"\22\2\u0327\u0326\3\2\2\2\u0327\u0328\3\2\2\2\u03289\3"+
		"\2\2\2\u0329\u032e\5<\37\2\u032a\u032f\5\b\5\2\u032b\u032f\5\32\16\2\u032c"+
		"\u032f\5 \21\2\u032d\u032f\5N(\2\u032e\u032a\3\2\2\2\u032e\u032b\3\2\2"+
		"\2\u032e\u032c\3\2\2\2\u032e\u032d\3\2\2\2\u032f;\3\2\2\2\u0330\u0331"+
		"\5> \2\u0331\u0332\7\u0094\2\2\u0332=\3\2\2\2\u0333\u0334\5\u0238\u011d"+
		"\2\u0334?\3\2\2\2\u0335\u033b\5B\"\2\u0336\u033b\5D#\2\u0337\u033b\5F"+
		"$\2\u0338\u033b\5H%\2\u0339\u033b\5J&\2\u033a\u0335\3\2\2\2\u033a\u0336"+
		"\3\2\2\2\u033a\u0337\3\2\2\2\u033a\u0338\3\2\2\2\u033a\u0339\3\2\2\2\u033b"+
		"A\3\2\2\2\u033c\u033e\7\5\2\2\u033d\u033f\5> \2\u033e\u033d\3\2\2\2\u033e"+
		"\u033f\3\2\2\2\u033fC\3\2\2\2\u0340\u0342\7\t\2\2\u0341\u0343\5> \2\u0342"+
		"\u0341\3\2\2\2\u0342\u0343\3\2\2\2\u0343E\3\2\2\2\u0344\u0345\7\21\2\2"+
		"\u0345G\3\2\2\2\u0346\u0348\7\'\2\2\u0347\u0349\5\u0194\u00cb\2\u0348"+
		"\u0347\3\2\2\2\u0348\u0349\3\2\2\2\u0349I\3\2\2\2\u034a\u034b\7(\2\2\u034b"+
		"\u034c\5\u0194\u00cb\2\u034cK\3\2\2\2\u034d\u034e\7\13\2\2\u034e\u034f"+
		"\5\u00a4S\2\u034fM\3\2\2\2\u0350\u0351\7\f\2\2\u0351\u0353\5\u00a4S\2"+
		"\u0352\u0354\5P)\2\u0353\u0352\3\2\2\2\u0353\u0354\3\2\2\2\u0354O\3\2"+
		"\2\2\u0355\u0357\5R*\2\u0356\u0355\3\2\2\2\u0357\u0358\3\2\2\2\u0358\u0356"+
		"\3\2\2\2\u0358\u0359\3\2\2\2\u0359Q\3\2\2\2\u035a\u035c\7\7\2\2\u035b"+
		"\u035d\5T+\2\u035c\u035b\3\2\2\2\u035c\u035d\3\2\2\2\u035d\u035e\3\2\2"+
		"\2\u035e\u035f\5\u00a4S\2\u035fS\3\2\2\2\u0360\u0367\5V,\2\u0361\u0362"+
		"\5V,\2\u0362\u0363\7\u0093\2\2\u0363\u0364\5V,\2\u0364\u0366\3\2\2\2\u0365"+
		"\u0361\3\2\2\2\u0366\u0369\3\2\2\2\u0367\u0365\3\2\2\2\u0367\u0368\3\2"+
		"\2\2\u0368U\3\2\2\2\u0369\u0367\3\2\2\2\u036a\u036c\5\u0172\u00ba\2\u036b"+
		"\u036d\5,\27\2\u036c\u036b\3\2\2\2\u036c\u036d\3\2\2\2\u036dW\3\2\2\2"+
		"\u036e\u0372\5Z.\2\u036f\u0372\5t;\2\u0370\u0372\5z>\2\u0371\u036e\3\2"+
		"\2\2\u0371\u036f\3\2\2\2\u0371\u0370\3\2\2\2\u0372Y\3\2\2\2\u0373\u0375"+
		"\5\\/\2\u0374\u0376\5^\60\2\u0375\u0374\3\2\2\2\u0375\u0376\3\2\2\2\u0376"+
		"\u0378\3\2\2\2\u0377\u0379\5b\62\2\u0378\u0377\3\2\2\2\u0378\u0379\3\2"+
		"\2\2\u0379\u037a\3\2\2\2\u037a\u037b\7|\2\2\u037b[\3\2\2\2\u037c\u037d"+
		"\7y\2\2\u037d\u037f\5d\63\2\u037e\u0380\5\6\4\2\u037f\u037e\3\2\2\2\u037f"+
		"\u0380\3\2\2\2\u0380]\3\2\2\2\u0381\u0383\5`\61\2\u0382\u0381\3\2\2\2"+
		"\u0383\u0384\3\2\2\2\u0384\u0382\3\2\2\2\u0384\u0385\3\2\2\2\u0385_\3"+
		"\2\2\2\u0386\u0387\7z\2\2\u0387\u0389\5d\63\2\u0388\u038a\5\6\4\2\u0389"+
		"\u0388\3\2\2\2\u0389\u038a\3\2\2\2\u038aa\3\2\2\2\u038b\u038d\7{\2\2\u038c"+
		"\u038e\5\6\4\2\u038d\u038c\3\2\2\2\u038d\u038e\3\2\2\2\u038ec\3\2\2\2"+
		"\u038f\u0390\b\63\1\2\u0390\u039a\5f\64\2\u0391\u039a\5\u0238\u011d\2"+
		"\u0392\u039a\5\u0268\u0135\2\u0393\u0394\7\u008e\2\2\u0394\u0395\5d\63"+
		"\2\u0395\u0396\7\u0091\2\2\u0396\u039a\3\2\2\2\u0397\u0398\7\u0099\2\2"+
		"\u0398\u039a\5d\63\4\u0399\u038f\3\2\2\2\u0399\u0391\3\2\2\2\u0399\u0392"+
		"\3\2\2\2\u0399\u0393\3\2\2\2\u0399\u0397\3\2\2\2\u039a\u03a4\3\2\2\2\u039b"+
		"\u039e\f\3\2\2\u039c\u039f\5\u0242\u0122\2\u039d\u039f\5\u0244\u0123\2"+
		"\u039e\u039c\3\2\2\2\u039e\u039d\3\2\2\2\u039f\u03a0\3\2\2\2\u03a0\u03a1"+
		"\5d\63\4\u03a1\u03a3\3\2\2\2\u03a2\u039b\3\2\2\2\u03a3\u03a6\3\2\2\2\u03a4"+
		"\u03a2\3\2\2\2\u03a4\u03a5\3\2\2\2\u03a5e\3\2\2\2\u03a6\u03a4\3\2\2\2"+
		"\u03a7\u03a8\7>\2\2\u03a8\u03a9\7\u008e\2\2\u03a9\u03aa\5l\67\2\u03aa"+
		"\u03ab\7\u0091\2\2\u03ab\u03c5\3\2\2\2\u03ac\u03ad\7?\2\2\u03ad\u03ae"+
		"\7\u008e\2\2\u03ae\u03af\5n8\2\u03af\u03b0\7\u0091\2\2\u03b0\u03c5\3\2"+
		"\2\2\u03b1\u03b2\t\3\2\2\u03b2\u03b5\7\u008e\2\2\u03b3\u03b6\5\u0246\u0124"+
		"\2\u03b4\u03b6\5\u0248\u0125\2\u03b5\u03b3\3\2\2\2\u03b5\u03b4\3\2\2\2"+
		"\u03b6\u03b7\3\2\2\2\u03b7\u03b8\5h\65\2\u03b8\u03b9\7\u0091\2\2\u03b9"+
		"\u03c5\3\2\2\2\u03ba\u03bb\7B\2\2\u03bb\u03bc\7\u008e\2\2\u03bc\u03bd"+
		"\5p9\2\u03bd\u03be\7\u0091\2\2\u03be\u03c5\3\2\2\2\u03bf\u03c0\7C\2\2"+
		"\u03c0\u03c1\7\u008e\2\2\u03c1\u03c2\5r:\2\u03c2\u03c3\7\u0091\2\2\u03c3"+
		"\u03c5\3\2\2\2\u03c4\u03a7\3\2\2\2\u03c4\u03ac\3\2\2\2\u03c4\u03b1\3\2"+
		"\2\2\u03c4\u03ba\3\2\2\2\u03c4\u03bf\3\2\2\2\u03c5g\3\2\2\2\u03c6\u03c8"+
		"\7\u00ae\2\2\u03c7\u03c9\5j\66\2\u03c8\u03c7\3\2\2\2\u03c8\u03c9\3\2\2"+
		"\2\u03c9i\3\2\2\2\u03ca\u03cb\7\u008c\2\2\u03cb\u03cd\7\u00ae\2\2\u03cc"+
		"\u03ce\5j\66\2\u03cd\u03cc\3\2\2\2\u03cd\u03ce\3\2\2\2\u03cek\3\2\2\2"+
		"\u03cf\u03d0\t\4\2\2\u03d0m\3\2\2\2\u03d1\u03d2\t\5\2\2\u03d2o\3\2\2\2"+
		"\u03d3\u03d8\5\u0238\u011d\2\u03d4\u03d5\7\u008c\2\2\u03d5\u03d7\5\u0238"+
		"\u011d\2\u03d6\u03d4\3\2\2\2\u03d7\u03da\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d8"+
		"\u03d9\3\2\2\2\u03d9q\3\2\2\2\u03da\u03d8\3\2\2\2\u03db\u03dc\t\6\2\2"+
		"\u03dcs\3\2\2\2\u03dd\u03de\7s\2\2\u03de\u03e7\7\u008e\2\2\u03df\u03e0"+
		"\7t\2\2\u03e0\u03e1\7\u0094\2\2\u03e1\u03e2\5x=\2\u03e2\u03e3\7\u0093"+
		"\2\2\u03e3\u03e4\7u\2\2\u03e4\u03e5\7\u0094\2\2\u03e5\u03e6\5v<\2\u03e6"+
		"\u03e8\3\2\2\2\u03e7\u03df\3\2\2\2\u03e7\u03e8\3\2\2\2\u03e8\u03e9\3\2"+
		"\2\2\u03e9\u03ea\7\u0091\2\2\u03eau\3\2\2\2\u03eb\u03ec\7\u00af\2\2\u03ec"+
		"w\3\2\2\2\u03ed\u03ee\5\u0272\u013a\2\u03eey\3\2\2\2\u03ef\u03f0\t\7\2"+
		"\2\u03f0\u03f1\7\u008e\2\2\u03f1\u03f2\5|?\2\u03f2\u03f3\7\u0091\2\2\u03f3"+
		"{\3\2\2\2\u03f4\u03f5\5\u0272\u013a\2\u03f5}\3\2\2\2\u03f6\u03f7\7x\2"+
		"\2\u03f7\u03f8\7\u008e\2\2\u03f8\u03f9\5\u0080A\2\u03f9\u03fa\7\u0091"+
		"\2\2\u03fa\177\3\2\2\2\u03fb\u0400\5\u0082B\2\u03fc\u03fd\7\u0093\2\2"+
		"\u03fd\u03ff\5\u0082B\2\u03fe\u03fc\3\2\2\2\u03ff\u0402\3\2\2\2\u0400"+
		"\u03fe\3\2\2\2\u0400\u0401\3\2\2\2\u0401\u0081\3\2\2\2\u0402\u0400\3\2"+
		"\2\2\u0403\u0404\5\u0084C\2\u0404\u0405\5\u0086D\2\u0405\u0408\3\2\2\2"+
		"\u0406\u0408\7\u00a2\2\2\u0407\u0403\3\2\2\2\u0407\u0406\3\2\2\2\u0408"+
		"\u0083\3\2\2\2\u0409\u040a\t\b\2\2\u040a\u0085\3\2\2\2\u040b\u0413\7\u00af"+
		"\2\2\u040c\u0413\7\u00ae\2\2\u040d\u0410\7\u00b1\2\2\u040e\u040f\7\u008c"+
		"\2\2\u040f\u0411\7\u00ae\2\2\u0410\u040e\3\2\2\2\u0410\u0411\3\2\2\2\u0411"+
		"\u0413\3\2\2\2\u0412\u040b\3\2\2\2\u0412\u040c\3\2\2\2\u0412\u040d\3\2"+
		"\2\2\u0413\u0087\3\2\2\2\u0414\u0415\7\u0096\2\2\u0415\u0416\5\u008aF"+
		"\2\u0416\u0417\7\u0097\2\2\u0417\u0089\3\2\2\2\u0418\u041d\5\u008cG\2"+
		"\u0419\u041a\7\u0093\2\2\u041a\u041c\5\u008cG\2\u041b\u0419\3\2\2\2\u041c"+
		"\u041f\3\2\2\2\u041d\u041b\3\2\2\2\u041d\u041e\3\2\2\2\u041e\u008b\3\2"+
		"\2\2\u041f\u041d\3\2\2\2\u0420\u0426\5\u0212\u010a\2\u0421\u0424\7\u0094"+
		"\2\2\u0422\u0425\5\u0210\u0109\2\u0423\u0425\5\u022a\u0116\2\u0424\u0422"+
		"\3\2\2\2\u0424\u0423\3\2\2\2\u0425\u0427\3\2\2\2\u0426\u0421\3\2\2\2\u0426"+
		"\u0427\3\2\2\2\u0427\u008d\3\2\2\2\u0428\u0429\7\33\2\2\u0429\u042a\5"+
		"\u0090I\2\u042a\u008f\3\2\2\2\u042b\u0430\5\u0092J\2\u042c\u042d\7\u0093"+
		"\2\2\u042d\u042f\5\u0092J\2\u042e\u042c\3\2\2\2\u042f\u0432\3\2\2\2\u0430"+
		"\u042e\3\2\2\2\u0430\u0431\3\2\2\2\u0431\u0091\3\2\2\2\u0432\u0430\3\2"+
		"\2\2\u0433\u0436\5\u0094K\2\u0434\u0436\5\u0096L\2\u0435\u0433\3\2\2\2"+
		"\u0435\u0434\3\2\2\2\u0436\u0093\3\2\2\2\u0437\u0438\5\u0210\u0109\2\u0438"+
		"\u043b\7\u0094\2\2\u0439\u043c\5\u0210\u0109\2\u043a\u043c\5\u022a\u0116"+
		"\2\u043b\u0439\3\2\2\2\u043b\u043a\3\2\2\2\u043c\u0095\3\2\2\2\u043d\u043e"+
		"\5\u0210\u0109\2\u043e\u0441\5\u024e\u0128\2\u043f\u0442\5\u0210\u0109"+
		"\2\u0440\u0442\5\u020c\u0107\2\u0441\u043f\3\2\2\2\u0441\u0440\3\2\2\2"+
		"\u0442\u0097\3\2\2\2\u0443\u0444\7\u0096\2\2\u0444\u0445\5\u009aN\2\u0445"+
		"\u0446\7\u0097\2\2\u0446\u0099\3\2\2\2\u0447\u044c\5\u009cO\2\u0448\u0449"+
		"\7\u0093\2\2\u0449\u044b\5\u009cO\2\u044a\u0448\3\2\2\2\u044b\u044e\3"+
		"\2\2\2\u044c\u044a\3\2\2\2\u044c\u044d\3\2\2\2\u044d\u009b\3\2\2\2\u044e"+
		"\u044c\3\2\2\2\u044f\u0450\5\u020c\u0107\2\u0450\u009d\3\2\2\2\u0451\u0461"+
		"\5\u00a6T\2\u0452\u0461\5\u00aeX\2\u0453\u0461\5\u00b6\\\2\u0454\u0461"+
		"\5\u00d0i\2\u0455\u0461\5\u00d6l\2\u0456\u0461\5\u00eex\2\u0457\u0461"+
		"\5\u0110\u0089\2\u0458\u0461\5\u011a\u008e\2\u0459\u0461\5\u0124\u0093"+
		"\2\u045a\u0461\5\u013a\u009e\2\u045b\u0461\5\u0140\u00a1\2\u045c\u0461"+
		"\5\u0142\u00a2\2\u045d\u0461\5\u014a\u00a6\2\u045e\u0461\5\u0150\u00a9"+
		"\2\u045f\u0461\5\u015a\u00ae\2\u0460\u0451\3\2\2\2\u0460\u0452\3\2\2\2"+
		"\u0460\u0453\3\2\2\2\u0460\u0454\3\2\2\2\u0460\u0455\3\2\2\2\u0460\u0456"+
		"\3\2\2\2\u0460\u0457\3\2\2\2\u0460\u0458\3\2\2\2\u0460\u0459\3\2\2\2\u0460"+
		"\u045a\3\2\2\2\u0460\u045b\3\2\2\2\u0460\u045c\3\2\2\2\u0460\u045d\3\2"+
		"\2\2\u0460\u045e\3\2\2\2\u0460\u045f\3\2\2\2\u0461\u0463\3\2\2\2\u0462"+
		"\u0464\7\u0095\2\2\u0463\u0462\3\2\2\2\u0463\u0464\3\2\2\2\u0464\u009f"+
		"\3\2\2\2\u0465\u0467\5\u009eP\2\u0466\u0465\3\2\2\2\u0467\u0468\3\2\2"+
		"\2\u0468\u0466\3\2\2\2\u0468\u0469\3\2\2\2\u0469\u00a1\3\2\2\2\u046a\u046c"+
		"\5\6\4\2\u046b\u046a\3\2\2\2\u046b\u046c\3\2\2\2\u046c\u00a3\3\2\2\2\u046d"+
		"\u046f\7\u008d\2\2\u046e\u0470\5\6\4\2\u046f\u046e\3\2\2\2\u046f\u0470"+
		"\3\2\2\2\u0470\u0471\3\2\2\2\u0471\u0472\7\u0090\2\2\u0472\u00a5\3\2\2"+
		"\2\u0473\u0475\5\u018c\u00c7\2\u0474\u0473\3\2\2\2\u0474\u0475\3\2\2\2"+
		"\u0475\u0476\3\2\2\2\u0476\u0478\7\25\2\2\u0477\u0479\5\u00a8U\2\u0478"+
		"\u0477\3\2\2\2\u0478\u0479\3\2\2\2\u0479\u047a\3\2\2\2\u047a\u047b\5\u00aa"+
		"V\2\u047b\u00a7\3\2\2\2\u047c\u047d\t\t\2\2\u047d\u00a9\3\2\2\2\u047e"+
		"\u0483\5\u00acW\2\u047f\u0480\7\u008c\2\2\u0480\u0482\5\u00acW\2\u0481"+
		"\u047f\3\2\2\2\u0482\u0485\3\2\2\2\u0483\u0481\3\2\2\2\u0483\u0484\3\2"+
		"\2\2\u0484\u00ab\3\2\2\2\u0485\u0483\3\2\2\2\u0486\u0489\5\u0238\u011d"+
		"\2\u0487\u0489\5\u0256\u012c\2\u0488\u0486\3\2\2\2\u0488\u0487\3\2\2\2"+
		"\u0489\u00ad\3\2\2\2\u048a\u048c\5\u018c\u00c7\2\u048b\u048a\3\2\2\2\u048b"+
		"\u048c\3\2\2\2\u048c\u048e\3\2\2\2\u048d\u048f\5\u016c\u00b7\2\u048e\u048d"+
		"\3\2\2\2\u048e\u048f\3\2\2\2\u048f\u0490\3\2\2\2\u0490\u0491\7\35\2\2"+
		"\u0491\u0492\5\u00b0Y\2\u0492\u00af\3\2\2\2\u0493\u0498\5\u00b2Z\2\u0494"+
		"\u0495\7\u0093\2\2\u0495\u0497\5\u00b2Z\2\u0496\u0494\3\2\2\2\u0497\u049a"+
		"\3\2\2\2\u0498\u0496\3\2\2\2\u0498\u0499\3\2\2\2\u0499\u00b1\3\2\2\2\u049a"+
		"\u0498\3\2\2\2\u049b\u049d\5\u0172\u00ba\2\u049c\u049e\5\u00b4[\2\u049d"+
		"\u049c\3\2\2\2\u049d\u049e\3\2\2\2\u049e\u00b3\3\2\2\2\u049f\u04a0\7\u009e"+
		"\2\2\u04a0\u04a1\5\u0194\u00cb\2\u04a1\u00b5\3\2\2\2\u04a2\u04b3\5\u00b8"+
		"]\2\u04a3\u04b0\5\u00ba^\2\u04a4\u04a5\5\u00b4[\2\u04a5\u04a6\5\u00ca"+
		"f\2\u04a6\u04b1\3\2\2\2\u04a7\u04ae\5\u020e\u0108\2\u04a8\u04aa\5\u00b4"+
		"[\2\u04a9\u04a8\3\2\2\2\u04a9\u04aa\3\2\2\2\u04aa\u04ab\3\2\2\2\u04ab"+
		"\u04af\5\u00caf\2\u04ac\u04af\5\u00bc_\2\u04ad\u04af\5\u00c4c\2\u04ae"+
		"\u04a9\3\2\2\2\u04ae\u04ac\3\2\2\2\u04ae\u04ad\3\2\2\2\u04af\u04b1\3\2"+
		"\2\2\u04b0\u04a4\3\2\2\2\u04b0\u04a7\3\2\2\2\u04b1\u04b4\3\2\2\2\u04b2"+
		"\u04b4\5\u00b0Y\2\u04b3\u04a3\3\2\2\2\u04b3\u04b2\3\2\2\2\u04b4\u00b7"+
		"\3\2\2\2\u04b5\u04b7\5\u018c\u00c7\2\u04b6\u04b5\3\2\2\2\u04b6\u04b7\3"+
		"\2\2\2\u04b7\u04b9\3\2\2\2\u04b8\u04ba\5\u016c\u00b7\2\u04b9\u04b8\3\2"+
		"\2\2\u04b9\u04ba\3\2\2\2\u04ba\u04bb\3\2\2\2\u04bb\u04bc\7\36\2\2\u04bc"+
		"\u00b9\3\2\2\2\u04bd\u04be\5\u0238\u011d\2\u04be\u00bb\3\2\2\2\u04bf\u04c7"+
		"\7\u008d\2\2\u04c0\u04c2\5\u00be`\2\u04c1\u04c3\5\u00c0a\2\u04c2\u04c1"+
		"\3\2\2\2\u04c2\u04c3\3\2\2\2\u04c3\u04c8\3\2\2\2\u04c4\u04c5\5\u00c0a"+
		"\2\u04c5\u04c6\5\u00be`\2\u04c6\u04c8\3\2\2\2\u04c7\u04c0\3\2\2\2\u04c7"+
		"\u04c4\3\2\2\2\u04c8\u04c9\3\2\2\2\u04c9\u04ca\7\u0090\2\2\u04ca\u04cd"+
		"\3\2\2\2\u04cb\u04cd\5\u00a4S\2\u04cc\u04bf\3\2\2\2\u04cc\u04cb\3\2\2"+
		"\2\u04cd\u00bd\3\2\2\2\u04ce\u04d0\5\u018c\u00c7\2\u04cf\u04ce\3\2\2\2"+
		"\u04cf\u04d0\3\2\2\2\u04d0\u04d2\3\2\2\2\u04d1\u04d3\5\u0170\u00b9\2\u04d2"+
		"\u04d1\3\2\2\2\u04d2\u04d3\3\2\2\2\u04d3\u04d4\3\2\2\2\u04d4\u04d6\7 "+
		"\2\2\u04d5\u04d7\5\u00a4S\2\u04d6\u04d5\3\2\2\2\u04d6\u04d7\3\2\2\2\u04d7"+
		"\u00bf\3\2\2\2\u04d8\u04da\5\u018c\u00c7\2\u04d9\u04d8\3\2\2\2\u04d9\u04da"+
		"\3\2\2\2\u04da\u04dc\3\2\2\2\u04db\u04dd\5\u0170\u00b9\2\u04dc\u04db\3"+
		"\2\2\2\u04dc\u04dd\3\2\2\2\u04dd\u04de\3\2\2\2\u04de\u04e0\7!\2\2\u04df"+
		"\u04e1\5\u00c2b\2\u04e0\u04df\3\2\2\2\u04e0\u04e1\3\2\2\2\u04e1\u04e3"+
		"\3\2\2\2\u04e2\u04e4\5\u00a4S\2\u04e3\u04e2\3\2\2\2\u04e3\u04e4\3\2\2"+
		"\2\u04e4\u00c1\3\2\2\2\u04e5\u04e6\7\u008e\2\2\u04e6\u04e7\5\u0238\u011d"+
		"\2\u04e7\u04e8\7\u0091\2\2\u04e8\u00c3\3\2\2\2\u04e9\u04f1\7\u008d\2\2"+
		"\u04ea\u04ec\5\u00c6d\2\u04eb\u04ed\5\u00c8e\2\u04ec\u04eb\3\2\2\2\u04ec"+
		"\u04ed\3\2\2\2\u04ed\u04f2\3\2\2\2\u04ee\u04ef\5\u00c8e\2\u04ef\u04f0"+
		"\5\u00c6d\2\u04f0\u04f2\3\2\2\2\u04f1\u04ea\3\2\2\2\u04f1\u04ee\3\2\2"+
		"\2\u04f2\u04f3\3\2\2\2\u04f3\u04f4\7\u0090\2\2\u04f4\u00c5\3\2\2\2\u04f5"+
		"\u04f7\5\u018c\u00c7\2\u04f6\u04f5\3\2\2\2\u04f6\u04f7\3\2\2\2\u04f7\u04f9"+
		"\3\2\2\2\u04f8\u04fa\5\u0170\u00b9\2\u04f9\u04f8\3\2\2\2\u04f9\u04fa\3"+
		"\2\2\2\u04fa\u04fb\3\2\2\2\u04fb\u04fc\7 \2\2\u04fc\u00c7\3\2\2\2\u04fd"+
		"\u04ff\5\u018c\u00c7\2\u04fe\u04fd\3\2\2\2\u04fe\u04ff\3\2\2\2\u04ff\u0501"+
		"\3\2\2\2\u0500\u0502\5\u0170\u00b9\2\u0501\u0500\3\2\2\2\u0501\u0502\3"+
		"\2\2\2\u0502\u0503\3\2\2\2\u0503\u0504\7!\2\2\u0504\u00c9\3\2\2\2\u0505"+
		"\u050e\7\u008d\2\2\u0506\u0508\5\u00ccg\2\u0507\u0509\5\u00ceh\2\u0508"+
		"\u0507\3\2\2\2\u0508\u0509\3\2\2\2\u0509\u050f\3\2\2\2\u050a\u050c\5\u00ce"+
		"h\2\u050b\u050d\5\u00ccg\2\u050c\u050b\3\2\2\2\u050c\u050d\3\2\2\2\u050d"+
		"\u050f\3\2\2\2\u050e\u0506\3\2\2\2\u050e\u050a\3\2\2\2\u050f\u0510\3\2"+
		"\2\2\u0510\u0511\7\u0090\2\2\u0511\u00cb\3\2\2\2\u0512\u0514\5\u018c\u00c7"+
		"\2\u0513\u0512\3\2\2\2\u0513\u0514\3\2\2\2\u0514\u0515\3\2\2\2\u0515\u0517"+
		"\7\"\2\2\u0516\u0518\5\u00c2b\2\u0517\u0516\3\2\2\2\u0517\u0518\3\2\2"+
		"\2\u0518\u0519\3\2\2\2\u0519\u051a\5\u00a4S\2\u051a\u00cd\3\2\2\2\u051b"+
		"\u051d\5\u018c\u00c7\2\u051c\u051b\3\2\2\2\u051c\u051d\3\2\2\2\u051d\u051e"+
		"\3\2\2\2\u051e\u0520\7#\2\2\u051f\u0521\5\u00c2b\2\u0520\u051f\3\2\2\2"+
		"\u0520\u0521\3\2\2\2\u0521\u0522\3\2\2\2\u0522\u0523\5\u00a4S\2\u0523"+
		"\u00cf\3\2\2\2\u0524\u0526\5\u018c\u00c7\2\u0525\u0524\3\2\2\2\u0525\u0526"+
		"\3\2\2\2\u0526\u0528\3\2\2\2\u0527\u0529\5\u016e\u00b8\2\u0528\u0527\3"+
		"\2\2\2\u0528\u0529\3\2\2\2\u0529\u052a\3\2\2\2\u052a\u052b\7=\2\2\u052b"+
		"\u052d\5\u00d2j\2\u052c\u052e\5\u0088E\2\u052d\u052c\3\2\2\2\u052d\u052e"+
		"\3\2\2\2\u052e\u052f\3\2\2\2\u052f\u0530\5\u00d4k\2\u0530\u00d1\3\2\2"+
		"\2\u0531\u0532\5\u0238\u011d\2\u0532\u00d3\3\2\2\2\u0533\u0534\7\u009e"+
		"\2\2\u0534\u0535\5\u020c\u0107\2\u0535\u00d5\3\2\2\2\u0536\u0537\5\u00d8"+
		"m\2\u0537\u0539\5\u00dan\2\u0538\u053a\5\u0088E\2\u0539\u0538\3\2\2\2"+
		"\u0539\u053a\3\2\2\2\u053a\u053b\3\2\2\2\u053b\u053d\5\u00dco\2\u053c"+
		"\u053e\5\u008eH\2\u053d\u053c\3\2\2\2\u053d\u053e\3\2\2\2\u053e\u0540"+
		"\3\2\2\2\u053f\u0541\5\u00e0q\2\u0540\u053f\3\2\2\2\u0540\u0541\3\2\2"+
		"\2\u0541\u00d7\3\2\2\2\u0542\u0544\5\u018c\u00c7\2\u0543\u0542\3\2\2\2"+
		"\u0543\u0544\3\2\2\2\u0544\u0546\3\2\2\2\u0545\u0547\5\u016c\u00b7\2\u0546"+
		"\u0545\3\2\2\2\u0546\u0547\3\2\2\2\u0547\u0548\3\2\2\2\u0548\u0549\7\22"+
		"\2\2\u0549\u00d9\3\2\2\2\u054a\u054d\5\u0238\u011d\2\u054b\u054d\5\u0256"+
		"\u012c\2\u054c\u054a\3\2\2\2\u054c\u054b\3\2\2\2\u054d\u00db\3\2\2\2\u054e"+
		"\u0553\5\u00e2r\2\u054f\u0551\7)\2\2\u0550\u054f\3\2\2\2\u0550\u0551\3"+
		"\2\2\2\u0551\u0554\3\2\2\2\u0552\u0554\7*\2\2\u0553\u0550\3\2\2\2\u0553"+
		"\u0552\3\2\2\2\u0554\u0556\3\2\2\2\u0555\u0557\5\u00dep\2\u0556\u0555"+
		"\3\2\2\2\u0556\u0557\3\2\2\2\u0557\u00dd\3\2\2\2\u0558\u055a\5\u024a\u0126"+
		"\2\u0559\u055b\5\u018c\u00c7\2\u055a\u0559\3\2\2\2\u055a\u055b\3\2\2\2"+
		"\u055b\u055c\3\2\2\2\u055c\u055d\5\u020c\u0107\2\u055d\u00df\3\2\2\2\u055e"+
		"\u055f\5\u00a4S\2\u055f\u00e1\3\2\2\2\u0560\u0562\7\u008e\2\2\u0561\u0563"+
		"\5\u00e4s\2\u0562\u0561\3\2\2\2\u0562\u0563\3\2\2\2\u0563\u0564\3\2\2"+
		"\2\u0564\u0565\7\u0091\2\2\u0565\u00e3\3\2\2\2\u0566\u056b\5\u00e6t\2"+
		"\u0567\u0568\7\u0093\2\2\u0568\u056a\5\u00e6t\2\u0569\u0567\3\2\2\2\u056a"+
		"\u056d\3\2\2\2\u056b\u0569\3\2\2\2\u056b\u056c\3\2\2\2\u056c\u00e5\3\2"+
		"\2\2\u056d\u056b\3\2\2\2\u056e\u0570\5\u018c\u00c7\2\u056f\u056e\3\2\2"+
		"\2\u056f\u0570\3\2\2\2\u0570\u0572\3\2\2\2\u0571\u0573\5\u00e8u\2\u0572"+
		"\u0571\3\2\2\2\u0572\u0573\3\2\2\2\u0573\u0574\3\2\2\2\u0574\u0575\5\u00ea"+
		"v\2\u0575\u057a\5\u020e\u0108\2\u0576\u0578\5\u00ecw\2\u0577\u0576\3\2"+
		"\2\2\u0577\u0578\3\2\2\2\u0578\u057b\3\2\2\2\u0579\u057b\5\u024c\u0127"+
		"\2\u057a\u0577\3\2\2\2\u057a\u0579\3\2\2\2\u057b\u00e7\3\2\2\2\u057c\u057d"+
		"\5\u0238\u011d\2\u057d\u00e9\3\2\2\2\u057e\u057f\5\u0238\u011d\2\u057f"+
		"\u00eb\3\2\2\2\u0580\u0581\7\u009e\2\2\u0581\u0582\5\u0194\u00cb\2\u0582"+
		"\u00ed\3\2\2\2\u0583\u0585\5\u018c\u00c7\2\u0584\u0583\3\2\2\2\u0584\u0585"+
		"\3\2\2\2\u0585\u0587\3\2\2\2\u0586\u0588\5\u016e\u00b8\2\u0587\u0586\3"+
		"\2\2\2\u0587\u0588\3\2\2\2\u0588\u058b\3\2\2\2\u0589\u058c\5\u00f0y\2"+
		"\u058a\u058c\5\u0100\u0081\2\u058b\u0589\3\2\2\2\u058b\u058a\3\2\2\2\u058c"+
		"\u00ef\3\2\2\2\u058d\u058f\7+\2\2\u058e\u058d\3\2\2\2\u058e\u058f\3\2"+
		"\2\2\u058f\u0590\3\2\2\2\u0590\u0591\7\17\2\2\u0591\u0593\5\u00fc\177"+
		"\2\u0592\u0594\5\u0088E\2\u0593\u0592\3\2\2\2\u0593\u0594\3\2\2\2\u0594"+
		"\u0596\3\2\2\2\u0595\u0597\5\u0234\u011b\2\u0596\u0595\3\2\2\2\u0596\u0597"+
		"\3\2\2\2\u0597\u0599\3\2\2\2\u0598\u059a\5\u008eH\2\u0599\u0598\3\2\2"+
		"\2\u0599\u059a\3\2\2\2\u059a\u059b\3\2\2\2\u059b\u059d\7\u008d\2\2\u059c"+
		"\u059e\5\u00f2z\2\u059d\u059c\3\2\2\2\u059d\u059e\3\2\2\2\u059e\u059f"+
		"\3\2\2\2\u059f\u05a0\7\u0090\2\2\u05a0\u00f1\3\2\2\2\u05a1\u05a3\5\u00f4"+
		"{\2\u05a2\u05a1\3\2\2\2\u05a3\u05a4\3\2\2\2\u05a4\u05a2\3\2\2\2\u05a4"+
		"\u05a5\3\2\2\2\u05a5\u00f3\3\2\2\2\u05a6\u05aa\5\u009eP\2\u05a7\u05aa"+
		"\5\u00f6|\2\u05a8\u05aa\5X-\2\u05a9\u05a6\3\2\2\2\u05a9\u05a7\3\2\2\2"+
		"\u05a9\u05a8\3\2\2\2\u05aa\u00f5\3\2\2\2\u05ab\u05ad\5\u018c\u00c7\2\u05ac"+
		"\u05ab\3\2\2\2\u05ac\u05ad\3\2\2\2\u05ad\u05af\3\2\2\2\u05ae\u05b0\7+"+
		"\2\2\u05af\u05ae\3\2\2\2\u05af\u05b0\3\2\2\2\u05b0\u05b1\3\2\2\2\u05b1"+
		"\u05b2\7\6\2\2\u05b2\u05b3\5\u00f8}\2\u05b3\u00f7\3\2\2\2\u05b4\u05b9"+
		"\5\u00fa~\2\u05b5\u05b6\7\u0093\2\2\u05b6\u05b8\5\u00fa~\2\u05b7\u05b5"+
		"\3\2\2\2\u05b8\u05bb\3\2\2\2\u05b9\u05b7\3\2\2\2\u05b9\u05ba\3\2\2\2\u05ba"+
		"\u00f9\3\2\2\2\u05bb\u05b9\3\2\2\2\u05bc\u05c6\5\u022e\u0118\2\u05bd\u05c3"+
		"\5\u00fe\u0080\2\u05be\u05c4\5\u0214\u010b\2\u05bf\u05c0\7\u008e\2\2\u05c0"+
		"\u05c1\5\u020c\u0107\2\u05c1\u05c2\7\u0091\2\2\u05c2\u05c4\3\2\2\2\u05c3"+
		"\u05be\3\2\2\2\u05c3\u05bf\3\2\2\2\u05c3\u05c4\3\2\2\2\u05c4\u05c6\3\2"+
		"\2\2\u05c5\u05bc\3\2\2\2\u05c5\u05bd\3\2\2\2\u05c6\u00fb\3\2\2\2\u05c7"+
		"\u05c8\5\u0238\u011d\2\u05c8\u00fd\3\2\2\2\u05c9\u05ca\5\u0238\u011d\2"+
		"\u05ca\u00ff\3\2\2\2\u05cb\u05cc\7\17\2\2\u05cc\u05ce\5\u00fc\177\2\u05cd"+
		"\u05cf\5\u0088E\2\u05ce\u05cd\3\2\2\2\u05ce\u05cf\3\2\2\2\u05cf\u05d0"+
		"\3\2\2\2\u05d0\u05d2\5\u0234\u011b\2\u05d1\u05d3\5\u008eH\2\u05d2\u05d1"+
		"\3\2\2\2\u05d2\u05d3\3\2\2\2\u05d3\u05d4\3\2\2\2\u05d4\u05d5\7\u008d\2"+
		"\2\u05d5\u05d6\5\u0102\u0082\2\u05d6\u05d7\7\u0090\2\2\u05d7\u0101\3\2"+
		"\2\2\u05d8\u05da\5\u0104\u0083\2\u05d9\u05d8\3\2\2\2\u05da\u05db\3\2\2"+
		"\2\u05db\u05d9\3\2\2\2\u05db\u05dc\3\2\2\2\u05dc\u0103\3\2\2\2\u05dd\u05e1"+
		"\5\u009eP\2\u05de\u05e1\5\u0106\u0084\2\u05df\u05e1\5X-\2\u05e0\u05dd"+
		"\3\2\2\2\u05e0\u05de\3\2\2\2\u05e0\u05df\3\2\2\2\u05e1\u0105\3\2\2\2\u05e2"+
		"\u05e4\5\u018c\u00c7\2\u05e3\u05e2\3\2\2\2\u05e3\u05e4\3\2\2\2\u05e4\u05e5"+
		"\3\2\2\2\u05e5\u05e6\7\6\2\2\u05e6\u05e7\5\u0108\u0085\2\u05e7\u0107\3"+
		"\2\2\2\u05e8\u05ed\5\u010a\u0086\2\u05e9\u05ea\7\u0093\2\2\u05ea\u05ec"+
		"\5\u010a\u0086\2\u05eb\u05e9\3\2\2\2\u05ec\u05ef\3\2\2\2\u05ed\u05eb\3"+
		"\2\2\2\u05ed\u05ee\3\2\2\2\u05ee\u0109\3\2\2\2\u05ef\u05ed\3\2\2\2\u05f0"+
		"\u05f2\5\u00fe\u0080\2\u05f1\u05f3\5\u010c\u0087\2\u05f2\u05f1\3\2\2\2"+
		"\u05f2\u05f3\3\2\2\2\u05f3\u010b\3\2\2\2\u05f4\u05f5\7\u009e\2\2\u05f5"+
		"\u05f6\5\u010e\u0088\2\u05f6\u010d\3\2\2\2\u05f7\u05fb\5\u0266\u0134\2"+
		"\u05f8\u05fb\5\u0272\u013a\2\u05f9\u05fb\5\u0268\u0135\2\u05fa\u05f7\3"+
		"\2\2\2\u05fa\u05f8\3\2\2\2\u05fa\u05f9\3\2\2\2\u05fb\u010f\3\2\2\2\u05fc"+
		"\u05fe\5\u018c\u00c7\2\u05fd\u05fc\3\2\2\2\u05fd\u05fe\3\2\2\2\u05fe\u0600"+
		"\3\2\2\2\u05ff\u0601\5\u016e\u00b8\2\u0600\u05ff\3\2\2\2\u0600\u0601\3"+
		"\2\2\2\u0601\u0602\3\2\2\2\u0602\u0603\7&\2\2\u0603\u0605\5\u0112\u008a"+
		"\2\u0604\u0606\5\u0088E\2\u0605\u0604\3\2\2\2\u0605\u0606\3\2\2\2\u0606"+
		"\u0608\3\2\2\2\u0607\u0609\5\u0234\u011b\2\u0608\u0607\3\2\2\2\u0608\u0609"+
		"\3\2\2\2\u0609\u060b\3\2\2\2\u060a\u060c\5\u008eH\2\u060b\u060a\3\2\2"+
		"\2\u060b\u060c\3\2\2\2\u060c\u060d\3\2\2\2\u060d\u060e\5\u0114\u008b\2"+
		"\u060e\u0111\3\2\2\2\u060f\u0610\5\u0238\u011d\2\u0610\u0113\3\2\2\2\u0611"+
		"\u0612\7\u008d\2\2\u0612\u0613\5\u0116\u008c\2\u0613\u0614\7\u0090\2\2"+
		"\u0614\u0115\3\2\2\2\u0615\u0617\5\u0118\u008d\2\u0616\u0615\3\2\2\2\u0617"+
		"\u061a\3\2\2\2\u0618\u0616\3\2\2\2\u0618\u0619\3\2\2\2\u0619\u0117\3\2"+
		"\2\2\u061a\u0618\3\2\2\2\u061b\u061e\5\u009eP\2\u061c\u061e\5X-\2\u061d"+
		"\u061b\3\2\2\2\u061d\u061c\3\2\2\2\u061e\u0119\3\2\2\2\u061f\u0621\5\u018c"+
		"\u00c7\2\u0620\u061f\3\2\2\2\u0620\u0621\3\2\2\2\u0621\u062c\3\2\2\2\u0622"+
		"\u0624\5\u016e\u00b8\2\u0623\u0622\3\2\2\2\u0623\u0624\3\2\2\2\u0624\u0626"+
		"\3\2\2\2\u0625\u0627\7\27\2\2\u0626\u0625\3\2\2\2\u0626\u0627\3\2\2\2"+
		"\u0627\u062d\3\2\2\2\u0628\u062a\7\27\2\2\u0629\u062b\5\u016e\u00b8\2"+
		"\u062a\u0629\3\2\2\2\u062a\u062b\3\2\2\2\u062b\u062d\3\2\2\2\u062c\u0623"+
		"\3\2\2\2\u062c\u0628\3\2\2\2\u062d\u062e\3\2\2\2\u062e\u062f\7\b\2\2\u062f"+
		"\u0631\5\u011c\u008f\2\u0630\u0632\5\u0088E\2\u0631\u0630\3\2\2\2\u0631"+
		"\u0632\3\2\2\2\u0632\u0634\3\2\2\2\u0633\u0635\5\u0234\u011b\2\u0634\u0633"+
		"\3\2\2\2\u0634\u0635\3\2\2\2\u0635\u0637\3\2\2\2\u0636\u0638\5\u008eH"+
		"\2\u0637\u0636\3\2\2\2\u0637\u0638\3\2\2\2\u0638\u0639\3\2\2\2\u0639\u063a"+
		"\5\u011e\u0090\2\u063a\u011b\3\2\2\2\u063b\u063c\5\u0238\u011d\2\u063c"+
		"\u011d\3\2\2\2\u063d\u063e\7\u008d\2\2\u063e\u063f\5\u0120\u0091\2\u063f"+
		"\u0640\7\u0090\2\2\u0640\u011f\3\2\2\2\u0641\u0643\5\u0122\u0092\2\u0642"+
		"\u0641\3\2\2\2\u0643\u0646\3\2\2\2\u0644\u0642\3\2\2\2\u0644\u0645\3\2"+
		"\2\2\u0645\u0121\3\2\2\2\u0646\u0644\3\2\2\2\u0647\u064a\5\u009eP\2\u0648"+
		"\u064a\5X-\2\u0649\u0647\3\2\2\2\u0649\u0648\3\2\2\2\u064a\u0123\3\2\2"+
		"\2\u064b\u064d\5\u018c\u00c7\2\u064c\u064b\3\2\2\2\u064c\u064d\3\2\2\2"+
		"\u064d\u064f\3\2\2\2\u064e\u0650\5\u016e\u00b8\2\u064f\u064e\3\2\2\2\u064f"+
		"\u0650\3\2\2\2\u0650\u0651\3\2\2\2\u0651\u0652\7\37\2\2\u0652\u0656\5"+
		"\u0126\u0094\2\u0653\u0654\7\u0094\2\2\u0654\u0657\7\b\2\2\u0655\u0657"+
		"\5\u0234\u011b\2\u0656\u0653\3\2\2\2\u0656\u0655\3\2\2\2\u0656\u0657\3"+
		"\2\2\2\u0657\u0659\3\2\2\2\u0658\u065a\5\u008eH\2\u0659\u0658\3\2\2\2"+
		"\u0659\u065a\3\2\2\2\u065a\u065b\3\2\2\2\u065b\u065c\5\u0128\u0095\2\u065c"+
		"\u0125\3\2\2\2\u065d\u065e\5\u0238\u011d\2\u065e\u0127\3\2\2\2\u065f\u0660"+
		"\7\u008d\2\2\u0660\u0661\5\u012a\u0096\2\u0661\u0662\7\u0090\2\2\u0662"+
		"\u0129\3\2\2\2\u0663\u0665\5\u012c\u0097\2\u0664\u0663\3\2\2\2\u0665\u0668"+
		"\3\2\2\2\u0666\u0664\3\2\2\2\u0666\u0667\3\2\2\2\u0667\u012b\3\2\2\2\u0668"+
		"\u0666\3\2\2\2\u0669\u066c\5\u012e\u0098\2\u066a\u066c\5X-\2\u066b\u0669"+
		"\3\2\2\2\u066b\u066a\3\2\2\2\u066c\u012d\3\2\2\2\u066d\u0674\5\u0130\u0099"+
		"\2\u066e\u0674\5\u0132\u009a\2\u066f\u0674\5\u0134\u009b\2\u0670\u0674"+
		"\5\u0136\u009c\2\u0671\u0674\5\u0138\u009d\2\u0672\u0674\5\u00d0i\2\u0673"+
		"\u066d\3\2\2\2\u0673\u066e\3\2\2\2\u0673\u066f\3\2\2\2\u0673\u0670\3\2"+
		"\2\2\u0673\u0671\3\2\2\2\u0673\u0672\3\2\2\2\u0674\u012f\3\2\2\2\u0675"+
		"\u0676\5\u00b8]\2\u0676\u0677\5\u00ba^\2\u0677\u0678\5\u020e\u0108\2\u0678"+
		"\u0679\5\u00c4c\2\u0679\u0131\3\2\2\2\u067a\u067b\5\u00d8m\2\u067b\u067d"+
		"\5\u00dan\2\u067c\u067e\5\u0088E\2\u067d\u067c\3\2\2\2\u067d\u067e\3\2"+
		"\2\2\u067e\u067f\3\2\2\2\u067f\u0681\5\u00dco\2\u0680\u0682\5\u008eH\2"+
		"\u0681\u0680\3\2\2\2\u0681\u0682\3\2\2\2\u0682\u0133\3\2\2\2\u0683\u0685"+
		"\5\u013c\u009f\2\u0684\u0686\5\u0088E\2\u0685\u0684\3\2\2\2\u0685\u0686"+
		"\3\2\2\2\u0686\u0687\3\2\2\2\u0687\u068c\5\u00e2r\2\u0688\u068a\7)\2\2"+
		"\u0689\u0688\3\2\2\2\u0689\u068a\3\2\2\2\u068a\u068d\3\2\2\2\u068b\u068d"+
		"\7*\2\2\u068c\u0689\3\2\2\2\u068c\u068b\3\2\2\2\u068d\u068f\3\2\2\2\u068e"+
		"\u0690\5\u008eH\2\u068f\u068e\3\2\2\2\u068f\u0690\3\2\2\2\u0690\u0135"+
		"\3\2\2\2\u0691\u0692\5\u014c\u00a7\2\u0692\u0694\5\u014e\u00a8\2\u0693"+
		"\u0695\5\u008eH\2\u0694\u0693\3\2\2\2\u0694\u0695\3\2\2\2\u0695\u0696"+
		"\3\2\2\2\u0696\u0697\5\u00c4c\2\u0697\u0137\3\2\2\2\u0698\u069a\5\u018c"+
		"\u00c7\2\u0699\u0698\3\2\2\2\u0699\u069a\3\2\2\2\u069a\u069c\3\2\2\2\u069b"+
		"\u069d\5\u016e\u00b8\2\u069c\u069b\3\2\2\2\u069c\u069d\3\2\2\2\u069d\u069e"+
		"\3\2\2\2\u069e\u069f\7.\2\2\u069f\u06a1\5\u00d2j\2\u06a0\u06a2\5\u0234"+
		"\u011b\2\u06a1\u06a0\3\2\2\2\u06a1\u06a2\3\2\2\2\u06a2\u06a4\3\2\2\2\u06a3"+
		"\u06a5\5\u00d4k\2\u06a4\u06a3\3\2\2\2\u06a4\u06a5\3\2\2\2\u06a5\u06a7"+
		"\3\2\2\2\u06a6\u06a8\5\u008eH\2\u06a7\u06a6\3\2\2\2\u06a7\u06a8\3\2\2"+
		"\2\u06a8\u0139\3\2\2\2\u06a9\u06ab\5\u013c\u009f\2\u06aa\u06ac\5\u0088"+
		"E\2\u06ab\u06aa\3\2\2\2\u06ab\u06ac\3\2\2\2\u06ac\u06ad\3\2\2\2\u06ad"+
		"\u06af\5\u00e2r\2\u06ae\u06b0\t\n\2\2\u06af\u06ae\3\2\2\2\u06af\u06b0"+
		"\3\2\2\2\u06b0\u06b2\3\2\2\2\u06b1\u06b3\5\u008eH\2\u06b2\u06b1\3\2\2"+
		"\2\u06b2\u06b3\3\2\2\2\u06b3\u06b4\3\2\2\2\u06b4\u06b5\5\u013e\u00a0\2"+
		"\u06b5\u013b\3\2\2\2\u06b6\u06b8\5\u018c\u00c7\2\u06b7\u06b6\3\2\2\2\u06b7"+
		"\u06b8\3\2\2\2\u06b8\u06ba\3\2\2\2\u06b9\u06bb\5\u016c\u00b7\2\u06ba\u06b9"+
		"\3\2\2\2\u06ba\u06bb\3\2\2\2\u06bb\u06bc\3\2\2\2\u06bc\u06be\7,\2\2\u06bd"+
		"\u06bf\t\13\2\2\u06be\u06bd\3\2\2\2\u06be\u06bf\3\2\2\2\u06bf\u013d\3"+
		"\2\2\2\u06c0\u06c1\5\u00a4S\2\u06c1\u013f\3\2\2\2\u06c2\u06c4\5\u018c"+
		"\u00c7\2\u06c3\u06c2\3\2\2\2\u06c3\u06c4\3\2\2\2\u06c4\u06c5\3\2\2\2\u06c5"+
		"\u06c6\7-\2\2\u06c6\u06c7\5\u00a4S\2\u06c7\u0141\3\2\2\2\u06c8\u06ca\5"+
		"\u018c\u00c7\2\u06c9\u06c8\3\2\2\2\u06c9\u06ca\3\2\2\2\u06ca\u06cc\3\2"+
		"\2\2\u06cb\u06cd\5\u016e\u00b8\2\u06cc\u06cb\3\2\2\2\u06cc\u06cd\3\2\2"+
		"\2\u06cd\u06ce\3\2\2\2\u06ce\u06cf\7/\2\2\u06cf\u06d1\5\u0210\u0109\2"+
		"\u06d0\u06d2\5\u0234\u011b\2\u06d1\u06d0\3\2\2\2\u06d1\u06d2\3\2\2\2\u06d2"+
		"\u06d4\3\2\2\2\u06d3\u06d5\5\u008eH\2\u06d4\u06d3\3\2\2\2\u06d4\u06d5"+
		"\3\2\2\2\u06d5\u06d6\3\2\2\2\u06d6\u06d7\5\u0144\u00a3\2\u06d7\u0143\3"+
		"\2\2\2\u06d8\u06d9\7\u008d\2\2\u06d9\u06da\5\u0146\u00a4\2\u06da\u06db"+
		"\7\u0090\2\2\u06db\u0145\3\2\2\2\u06dc\u06de\5\u0148\u00a5\2\u06dd\u06dc"+
		"\3\2\2\2\u06de\u06e1\3\2\2\2\u06df\u06dd\3\2\2\2\u06df\u06e0\3\2\2\2\u06e0"+
		"\u0147\3\2\2\2\u06e1\u06df\3\2\2\2\u06e2\u06e5\5\u009eP\2\u06e3\u06e5"+
		"\5X-\2\u06e4\u06e2\3\2\2\2\u06e4\u06e3\3\2\2\2\u06e5\u0149\3\2\2\2\u06e6"+
		"\u06e7\5\u014c\u00a7\2\u06e7\u06e9\5\u014e\u00a8\2\u06e8\u06ea\5\u008e"+
		"H\2\u06e9\u06e8\3\2\2\2\u06e9\u06ea\3\2\2\2\u06ea\u06ee\3\2\2\2\u06eb"+
		"\u06ef\5\u00a4S\2\u06ec\u06ef\5\u00bc_\2\u06ed\u06ef\5\u00c4c\2\u06ee"+
		"\u06eb\3\2\2\2\u06ee\u06ec\3\2\2\2\u06ee\u06ed\3\2\2\2\u06ef\u014b\3\2"+
		"\2\2\u06f0\u06f2\5\u018c\u00c7\2\u06f1\u06f0\3\2\2\2\u06f1\u06f2\3\2\2"+
		"\2\u06f2\u06f4\3\2\2\2\u06f3\u06f5\5\u016c\u00b7\2\u06f4\u06f3\3\2\2\2"+
		"\u06f4\u06f5\3\2\2\2\u06f5\u06f6\3\2\2\2\u06f6\u06f8\7\60\2\2\u06f7\u06f9"+
		"\5\u0088E\2\u06f8\u06f7\3\2\2\2\u06f8\u06f9\3\2\2\2\u06f9\u06fa\3\2\2"+
		"\2\u06fa\u06fb\5\u00e2r\2\u06fb\u014d\3\2\2\2\u06fc\u06fe\5\u024a\u0126"+
		"\2\u06fd\u06ff\5\u018c\u00c7\2\u06fe\u06fd\3\2\2\2\u06fe\u06ff\3\2\2\2"+
		"\u06ff\u0700\3\2\2\2\u0700\u0701\5\u020c\u0107\2\u0701\u014f\3\2\2\2\u0702"+
		"\u0706\5\u0152\u00aa\2\u0703\u0706\5\u0154\u00ab\2\u0704\u0706\5\u0156"+
		"\u00ac\2\u0705\u0702\3\2\2\2\u0705\u0703\3\2\2\2\u0705\u0704\3\2\2\2\u0706"+
		"\u0151\3\2\2\2\u0707\u0708\7\61\2\2\u0708\u0709\7<\2\2\u0709\u070a\5\u0256"+
		"\u012c\2\u070a\u0153\3\2\2\2\u070b\u070c\7;\2\2\u070c\u070d\7<\2\2\u070d"+
		"\u070e\5\u0256\u012c\2\u070e\u0155\3\2\2\2\u070f\u0710\7\62\2\2\u0710"+
		"\u0711\7<\2\2\u0711\u0713\5\u0256\u012c\2\u0712\u0714\5\u0158\u00ad\2"+
		"\u0713\u0712\3\2\2\2\u0713\u0714\3\2\2\2\u0714\u0157\3\2\2\2\u0715\u0716"+
		"\7\u0094\2\2\u0716\u0717\5\u0168\u00b5\2\u0717\u0159\3\2\2\2\u0718\u0719"+
		"\7\66\2\2\u0719\u071a\5\u0168\u00b5\2\u071a\u071c\7\u008d\2\2\u071b\u071d"+
		"\5\u015c\u00af\2\u071c\u071b\3\2\2\2\u071c\u071d\3\2\2\2\u071d\u071e\3"+
		"\2\2\2\u071e\u071f\7\u0090\2\2\u071f\u015b\3\2\2\2\u0720\u0722\5\u015e"+
		"\u00b0\2\u0721\u0720\3\2\2\2\u0722\u0723\3\2\2\2\u0723\u0721\3\2\2\2\u0723"+
		"\u0724\3\2\2\2\u0724\u015d\3\2\2\2\u0725\u0729\5\u0160\u00b1\2\u0726\u0729"+
		"\5\u0162\u00b2\2\u0727\u0729\5\u0164\u00b3\2\u0728\u0725\3\2\2\2\u0728"+
		"\u0726\3\2\2\2\u0728\u0727\3\2\2\2\u0729\u015f\3\2\2\2\u072a\u072b\t\f"+
		"\2\2\u072b\u072c\7\u0094\2\2\u072c\u072d\5\u0166\u00b4\2\u072d\u0161\3"+
		"\2\2\2\u072e\u072f\79\2\2\u072f\u0730\7\u0094\2\2\u0730\u0731\5\u0268"+
		"\u0135\2\u0731\u0163\3\2\2\2\u0732\u0733\7:\2\2\u0733\u0734\7\u0094\2"+
		"\2\u0734\u0735\t\r\2\2\u0735\u0165\3\2\2\2\u0736\u073b\5\u0168\u00b5\2"+
		"\u0737\u0738\7\u0093\2\2\u0738\u073a\5\u0168\u00b5\2\u0739\u0737\3\2\2"+
		"\2\u073a\u073d\3\2\2\2\u073b\u0739\3\2\2\2\u073b\u073c\3\2\2\2\u073c\u0167"+
		"\3\2\2\2\u073d\u073b\3\2\2\2\u073e\u0743\5\u0238\u011d\2\u073f\u0740\7"+
		"\u008c\2\2\u0740\u0742\5\u0238\u011d\2\u0741\u073f\3\2\2\2\u0742\u0745"+
		"\3\2\2\2\u0743\u0741\3\2\2\2\u0743\u0744\3\2\2\2\u0744\u0169\3\2\2\2\u0745"+
		"\u0743\3\2\2\2\u0746\u075c\7\b\2\2\u0747\u075c\7D\2\2\u0748\u075c\7E\2"+
		"\2\u0749\u075c\7\27\2\2\u074a\u075c\7\62\2\2\u074b\u075c\7F\2\2\u074c"+
		"\u075c\7G\2\2\u074d\u075c\7H\2\2\u074e\u075c\7;\2\2\u074f\u075c\7\61\2"+
		"\2\u0750\u075c\7I\2\2\u0751\u075c\7J\2\2\u0752\u0756\7L\2\2\u0753\u0754"+
		"\7\u008e\2\2\u0754\u0755\t\16\2\2\u0755\u0757\7\u0091\2\2\u0756\u0753"+
		"\3\2\2\2\u0756\u0757\3\2\2\2\u0757\u075c\3\2\2\2\u0758\u075c\7K\2\2\u0759"+
		"\u075c\5\u016e\u00b8\2\u075a\u075c\5\u0170\u00b9\2\u075b\u0746\3\2\2\2"+
		"\u075b\u0747\3\2\2\2\u075b\u0748\3\2\2\2\u075b\u0749\3\2\2\2\u075b\u074a"+
		"\3\2\2\2\u075b\u074b\3\2\2\2\u075b\u074c\3\2\2\2\u075b\u074d\3\2\2\2\u075b"+
		"\u074e\3\2\2\2\u075b\u074f\3\2\2\2\u075b\u0750\3\2\2\2\u075b\u0751\3\2"+
		"\2\2\u075b\u0752\3\2\2\2\u075b\u0758\3\2\2\2\u075b\u0759\3\2\2\2\u075b"+
		"\u075a\3\2\2\2\u075c\u016b\3\2\2\2\u075d\u075f\5\u016a\u00b6\2\u075e\u075d"+
		"\3\2\2\2\u075f\u0760\3\2\2\2\u0760\u075e\3\2\2\2\u0760\u0761\3\2\2\2\u0761"+
		"\u016d\3\2\2\2\u0762\u0766\t\17\2\2\u0763\u0764\7\u008e\2\2\u0764\u0765"+
		"\7!\2\2\u0765\u0767\7\u0091\2\2\u0766\u0763\3\2\2\2\u0766\u0767\3\2\2"+
		"\2\u0767\u016f\3\2\2\2\u0768\u0769\t\20\2\2\u0769\u0171\3\2\2\2\u076a"+
		"\u076e\b\u00ba\1\2\u076b\u076f\5\u0174\u00bb\2\u076c\u076f\5\u0176\u00bc"+
		"\2\u076d\u076f\5\u017a\u00be\2\u076e\u076b\3\2\2\2\u076e\u076c\3\2\2\2"+
		"\u076e\u076d\3\2\2\2\u076f\u0771\3\2\2\2\u0770\u0772\5\u020e\u0108\2\u0771"+
		"\u0770\3\2\2\2\u0771\u0772\3\2\2\2\u0772\u077a\3\2\2\2\u0773\u077a\5\u0178"+
		"\u00bd\2\u0774\u077a\5\u0180\u00c1\2\u0775\u077a\5\u0182\u00c2\2\u0776"+
		"\u0777\7R\2\2\u0777\u077a\5\u020c\u0107\2\u0778\u077a\5\u0184\u00c3\2"+
		"\u0779\u076a\3\2\2\2\u0779\u0773\3\2\2\2\u0779\u0774\3\2\2\2\u0779\u0775"+
		"\3\2\2\2\u0779\u0776\3\2\2\2\u0779\u0778\3\2\2\2\u077a\u0780\3\2\2\2\u077b"+
		"\u077c\f\4\2\2\u077c\u077d\7\3\2\2\u077d\u077f\5\u020c\u0107\2\u077e\u077b"+
		"\3\2\2\2\u077f\u0782\3\2\2\2\u0780\u077e\3\2\2\2\u0780\u0781\3\2\2\2\u0781"+
		"\u0173\3\2\2\2\u0782\u0780\3\2\2\2\u0783\u0784\7\u0098\2\2\u0784\u0175"+
		"\3\2\2\2\u0785\u0786\5\u0238\u011d\2\u0786\u0177\3\2\2\2\u0787\u0788\7"+
		"\36\2\2\u0788\u078c\5\u0172\u00ba\2\u0789\u078a\7\35\2\2\u078a\u078c\5"+
		"\u0172\u00ba\2\u078b\u0787\3\2\2\2\u078b\u0789\3\2\2\2\u078c\u0179\3\2"+
		"\2\2\u078d\u078f\7\u008e\2\2\u078e\u0790\5\u017c\u00bf\2\u078f\u078e\3"+
		"\2\2\2\u078f\u0790\3\2\2\2\u0790\u0791\3\2\2\2\u0791\u0792\7\u0091\2\2"+
		"\u0792\u017b\3\2\2\2\u0793\u0798\5\u017e\u00c0\2\u0794\u0795\7\u0093\2"+
		"\2\u0795\u0797\5\u017e\u00c0\2\u0796\u0794\3\2\2\2\u0797\u079a\3\2\2\2"+
		"\u0798\u0796\3\2\2\2\u0798\u0799\3\2\2\2\u0799\u017d\3\2\2\2\u079a\u0798"+
		"\3\2\2\2\u079b\u079c\5\u0238\u011d\2\u079c\u079d\7\u0094\2\2\u079d\u079f"+
		"\3\2\2\2\u079e\u079b\3\2\2\2\u079e\u079f\3\2\2\2\u079f\u07a0\3\2\2\2\u07a0"+
		"\u07a1\5\u0172\u00ba\2\u07a1\u017f\3\2\2\2\u07a2\u07a4\5\u0210\u0109\2"+
		"\u07a3\u07a2\3\2\2\2\u07a3\u07a4\3\2\2\2\u07a4\u07a5\3\2\2\2\u07a5\u07a6"+
		"\7\u008c\2\2\u07a6\u07a8\5\u00fe\u0080\2\u07a7\u07a9\5\u017a\u00be\2\u07a8"+
		"\u07a7\3\2\2\2\u07a8\u07a9\3\2\2\2\u07a9\u0181\3\2\2\2\u07aa\u07ab\5\u0176"+
		"\u00bc\2\u07ab\u07ac\7\u009a\2\2\u07ac\u0183\3\2\2\2\u07ad\u07ae\5\u0194"+
		"\u00cb\2\u07ae\u0185\3\2\2\2\u07af\u07b0\7\u009b\2\2\u07b0\u07b2\5\u0188"+
		"\u00c5\2\u07b1\u07b3\5\u018a\u00c6\2\u07b2\u07b1\3\2\2\2\u07b2\u07b3\3"+
		"\2\2\2\u07b3\u0187\3\2\2\2\u07b4\u07b9\5\u0238\u011d\2\u07b5\u07b6\7\u008c"+
		"\2\2\u07b6\u07b8\5\u0238\u011d\2\u07b7\u07b5\3\2\2\2\u07b8\u07bb\3\2\2"+
		"\2\u07b9\u07b7\3\2\2\2\u07b9\u07ba\3\2\2\2\u07ba\u0189\3\2\2\2\u07bb\u07b9"+
		"\3\2\2\2\u07bc\u07be\7\u008e\2\2\u07bd\u07bf\5\u018e\u00c8\2\u07be\u07bd"+
		"\3\2\2\2\u07be\u07bf\3\2\2\2\u07bf\u07c0\3\2\2\2\u07c0\u07c1\7\u0091\2"+
		"\2\u07c1\u018b\3\2\2\2\u07c2\u07c4\5\u0186\u00c4\2\u07c3\u07c2\3\2\2\2"+
		"\u07c4\u07c5\3\2\2\2\u07c5\u07c3\3\2\2\2\u07c5\u07c6\3\2\2\2\u07c6\u018d"+
		"\3\2\2\2\u07c7\u07c9\5\u0190\u00c9\2\u07c8\u07c7\3\2\2\2\u07c9\u07ca\3"+
		"\2\2\2\u07ca\u07c8\3\2\2\2\u07ca\u07cb\3\2\2\2\u07cb\u018f\3\2\2\2\u07cc"+
		"\u07ce\7\u008e\2\2\u07cd\u07cf\5\u018e\u00c8\2\u07ce\u07cd\3\2\2\2\u07ce"+
		"\u07cf\3\2\2\2\u07cf\u07d0\3\2\2\2\u07d0\u07e1\7\u0091\2\2\u07d1\u07d3"+
		"\7\u008f\2\2\u07d2\u07d4\5\u018e\u00c8\2\u07d3\u07d2\3\2\2\2\u07d3\u07d4"+
		"\3\2\2\2\u07d4\u07d5\3\2\2\2\u07d5\u07e1\7\u0092\2\2\u07d6\u07d8\7\u008d"+
		"\2\2\u07d7\u07d9\5\u018e\u00c8\2\u07d8\u07d7\3\2\2\2\u07d8\u07d9\3\2\2"+
		"\2\u07d9\u07da\3\2\2\2\u07da\u07e1\7\u0090\2\2\u07db\u07e1\5\u0238\u011d"+
		"\2\u07dc\u07e1\5\u023c\u011f\2\u07dd\u07e1\5\u0264\u0133\2\u07de\u07e1"+
		"\5\u0256\u012c\2\u07df\u07e1\5\u0192\u00ca\2\u07e0\u07cc\3\2\2\2\u07e0"+
		"\u07d1\3\2\2\2\u07e0\u07d6\3\2\2\2\u07e0\u07db\3\2\2\2\u07e0\u07dc\3\2"+
		"\2\2\u07e0\u07dd\3\2\2\2\u07e0\u07de\3\2\2\2\u07e0\u07df\3\2\2\2\u07e1"+
		"\u0191\3\2\2\2\u07e2\u07e9\t\21\2\2\u07e3\u07e9\5\u024a\u0126\2\u07e4"+
		"\u07e5\6\u00ca\5\2\u07e5\u07e9\7\u009c\2\2\u07e6\u07e7\6\u00ca\6\2\u07e7"+
		"\u07e9\7\u0099\2\2\u07e8\u07e2\3\2\2\2\u07e8\u07e3\3\2\2\2\u07e8\u07e4"+
		"\3\2\2\2\u07e8\u07e6\3\2\2\2\u07e9\u0193\3\2\2\2\u07ea\u07ec\5\u019c\u00cf"+
		"\2\u07eb\u07ea\3\2\2\2\u07eb\u07ec\3\2\2\2\u07ec\u07ed\3\2\2\2\u07ed\u07ef"+
		"\5\u0198\u00cd\2\u07ee\u07f0\5\u01a0\u00d1\2\u07ef\u07ee\3\2\2\2\u07ef"+
		"\u07f0\3\2\2\2\u07f0\u0195\3\2\2\2\u07f1\u07f6\5\u0194\u00cb\2\u07f2\u07f3"+
		"\7\u0093\2\2\u07f3\u07f5\5\u0194\u00cb\2\u07f4\u07f2\3\2\2\2\u07f5\u07f8"+
		"\3\2\2\2\u07f6\u07f4\3\2\2\2\u07f6\u07f7\3\2\2\2\u07f7\u0197\3\2\2\2\u07f8"+
		"\u07f6\3\2\2\2\u07f9\u07fb\5\u0252\u012a\2\u07fa\u07f9\3\2\2\2\u07fa\u07fb"+
		"\3\2\2\2\u07fb\u07fc\3\2\2\2\u07fc\u07ff\5\u01ec\u00f7\2\u07fd\u07ff\5"+
		"\u019a\u00ce\2\u07fe\u07fa\3\2\2\2\u07fe\u07fd\3\2\2\2\u07ff\u0199\3\2"+
		"\2\2\u0800\u0801\7\u009c\2\2\u0801\u0802\5\u0238\u011d\2\u0802\u019b\3"+
		"\2\2\2\u0803\u0805\7S\2\2\u0804\u0806\t\13\2\2\u0805\u0804\3\2\2\2\u0805"+
		"\u0806\3\2\2\2\u0806\u019d\3\2\2\2\u0807\u0808\5\u0250\u0129\2\u0808\u0809"+
		"\5\u0198\u00cd\2\u0809\u0815\3\2\2\2\u080a\u080d\5\u023e\u0120\2\u080b"+
		"\u080d\5\u01a2\u00d2\2\u080c\u080a\3\2\2\2\u080c\u080b\3\2\2\2\u080d\u080f"+
		"\3\2\2\2\u080e\u0810\5\u019c\u00cf\2\u080f\u080e\3\2\2\2\u080f\u0810\3"+
		"\2\2\2\u0810\u0811\3\2\2\2\u0811\u0812\5\u0198\u00cd\2\u0812\u0815\3\2"+
		"\2\2\u0813\u0815\5\u01a4\u00d3\2\u0814\u0807\3\2\2\2\u0814\u080c\3\2\2"+
		"\2\u0814\u0813\3\2\2\2\u0815\u019f\3\2\2\2\u0816\u0818\5\u019e\u00d0\2"+
		"\u0817\u0816\3\2\2\2\u0818\u0819\3\2\2\2\u0819\u0817\3\2\2\2\u0819\u081a"+
		"\3\2\2\2\u081a\u01a1\3\2\2\2\u081b\u081c\7\u009a\2\2\u081c\u081d\5\u0194"+
		"\u00cb\2\u081d\u081e\7\u0094\2\2\u081e\u01a3\3\2\2\2\u081f\u0825\7R\2"+
		"\2\u0820\u0822\7\3\2\2\u0821\u0823\t\13\2\2\u0822\u0821\3\2\2\2\u0822"+
		"\u0823\3\2\2\2\u0823\u0825\3\2\2\2\u0824\u081f\3\2\2\2\u0824\u0820\3\2"+
		"\2\2\u0825\u0826\3\2\2\2\u0826\u0827\5\u020c\u0107\2\u0827\u01a5\3\2\2"+
		"\2\u0828\u082a\5\u01a8\u00d5\2\u0829\u082b\5\u0098M\2\u082a\u0829\3\2"+
		"\2\2\u082a\u082b\3\2\2\2\u082b\u083b\3\2\2\2\u082c\u083b\5\u0226\u0114"+
		"\2\u082d\u083b\5\u0228\u0115\2\u082e\u083b\5\u01aa\u00d6\2\u082f\u083b"+
		"\5\u01ba\u00de\2\u0830\u083b\5\u01bc\u00df\2\u0831\u083b\5\u01be\u00e0"+
		"\2\u0832\u083b\5\u01d2\u00ea\2\u0833\u083b\5\u01d4\u00eb\2\u0834\u083b"+
		"\5\u01d6\u00ec\2\u0835\u083b\5\u01d0\u00e9\2\u0836\u083b\5\u01dc\u00ef"+
		"\2\u0837\u083b\5\u01de\u00f0\2\u0838\u083b\5\u01e8\u00f5\2\u0839\u083b"+
		"\5\u01ea\u00f6\2\u083a\u0828\3\2\2\2\u083a\u082c\3\2\2\2\u083a\u082d\3"+
		"\2\2\2\u083a\u082e\3\2\2\2\u083a\u082f\3\2\2\2\u083a\u0830\3\2\2\2\u083a"+
		"\u0831\3\2\2\2\u083a\u0832\3\2\2\2\u083a\u0833\3\2\2\2\u083a\u0834\3\2"+
		"\2\2\u083a\u0835\3\2\2\2\u083a\u0836\3\2\2\2\u083a\u0837\3\2\2\2\u083a"+
		"\u0838\3\2\2\2\u083a\u0839\3\2\2\2\u083b\u01a7\3\2\2\2\u083c\u0841\5\u0238"+
		"\u011d\2\u083d\u083e\7\u008e\2\2\u083e\u083f\5\u0208\u0105\2\u083f\u0840"+
		"\7\u0091\2\2\u0840\u0842\3\2\2\2\u0841\u083d\3\2\2\2\u0841\u0842\3\2\2"+
		"\2\u0842\u01a9\3\2\2\2\u0843\u084f\5\u0264\u0133\2\u0844\u084f\5\u01ac"+
		"\u00d7\2\u0845\u084f\5\u01b2\u00da\2\u0846\u084f\5\u01b8\u00dd\2\u0847"+
		"\u084f\7}\2\2\u0848\u084f\7~\2\2\u0849\u084f\7\177\2\2\u084a\u084f\7\u0080"+
		"\2\2\u084b\u084f\7\u0081\2\2\u084c\u084f\7\u0082\2\2\u084d\u084f\7\u0083"+
		"\2\2\u084e\u0843\3\2\2\2\u084e\u0844\3\2\2\2\u084e\u0845\3\2\2\2\u084e"+
		"\u0846\3\2\2\2\u084e\u0847\3\2\2\2\u084e\u0848\3\2\2\2\u084e\u0849\3\2"+
		"\2\2\u084e\u084a\3\2\2\2\u084e\u084b\3\2\2\2\u084e\u084c\3\2\2\2\u084e"+
		"\u084d\3\2\2\2\u084f\u01ab\3\2\2\2\u0850\u0852\7\u008f\2\2\u0851\u0853"+
		"\5\u01ae\u00d8\2\u0852\u0851\3\2\2\2\u0852\u0853\3\2\2\2\u0853\u0854\3"+
		"\2\2\2\u0854\u0855\7\u0092\2\2\u0855\u01ad\3\2\2\2\u0856\u085b\5\u01b0"+
		"\u00d9\2\u0857\u0858\7\u0093\2\2\u0858\u085a\5\u01b0\u00d9\2\u0859\u0857"+
		"\3\2\2\2\u085a\u085d\3\2\2\2\u085b\u0859\3\2\2\2\u085b\u085c\3\2\2\2\u085c"+
		"\u085f\3\2\2\2\u085d\u085b\3\2\2\2\u085e\u0860\7\u0093\2\2\u085f\u085e"+
		"\3\2\2\2\u085f\u0860\3\2\2\2\u0860\u01af\3\2\2\2\u0861\u0862\5\u0194\u00cb"+
		"\2\u0862\u01b1\3\2\2\2\u0863\u0866\7\u008f\2\2\u0864\u0867\5\u01b4\u00db"+
		"\2\u0865\u0867\7\u0094\2\2\u0866\u0864\3\2\2\2\u0866\u0865\3\2\2\2\u0867"+
		"\u0868\3\2\2\2\u0868\u0869\7\u0092\2\2\u0869\u01b3\3\2\2\2\u086a\u086f"+
		"\5\u01b6\u00dc\2\u086b\u086c\7\u0093\2\2\u086c\u086e\5\u01b6\u00dc\2\u086d"+
		"\u086b\3\2\2\2\u086e\u0871\3\2\2\2\u086f\u086d\3\2\2\2\u086f\u0870\3\2"+
		"\2\2\u0870\u0873\3\2\2\2\u0871\u086f\3\2\2\2\u0872\u0874\7\u0093\2\2\u0873"+
		"\u0872\3\2\2\2\u0873\u0874\3\2\2\2\u0874\u01b5\3\2\2\2\u0875\u0876\5\u0194"+
		"\u00cb\2\u0876\u0877\7\u0094\2\2\u0877\u0878\5\u0194\u00cb\2\u0878\u01b7"+
		"\3\2\2\2\u0879\u087a\7\u0086\2\2\u087a\u087b\7\u008e\2\2\u087b\u087c\7"+
		"W\2\2\u087c\u087d\7\u0094\2\2\u087d\u087e\5\u0194\u00cb\2\u087e\u087f"+
		"\7\u0093\2\2\u087f\u0880\7Y\2\2\u0880\u0881\7\u0094\2\2\u0881\u0882\5"+
		"\u0194\u00cb\2\u0882\u0883\7\u0093\2\2\u0883\u0884\7X\2\2\u0884\u0885"+
		"\7\u0094\2\2\u0885\u0886\5\u0194\u00cb\2\u0886\u0887\7\u0093\2\2\u0887"+
		"\u0888\7\4\2\2\u0888\u0889\7\u0094\2\2\u0889\u088a\5\u0194\u00cb\2\u088a"+
		"\u088b\7\u0091\2\2\u088b\u089b\3\2\2\2\u088c\u088d\7\u0087\2\2\u088d\u088e"+
		"\7\u008e\2\2\u088e\u088f\7Z\2\2\u088f\u0890\7\u0094\2\2\u0890\u0891\5"+
		"\u0194\u00cb\2\u0891\u0892\7\u0091\2\2\u0892\u089b\3\2\2\2\u0893\u0894"+
		"\7\u0088\2\2\u0894\u0895\7\u008e\2\2\u0895\u0896\7Z\2\2\u0896\u0897\7"+
		"\u0094\2\2\u0897\u0898\5\u0194\u00cb\2\u0898\u0899\7\u0091\2\2\u0899\u089b"+
		"\3\2\2\2\u089a\u0879\3\2\2\2\u089a\u088c\3\2\2\2\u089a\u0893\3\2\2\2\u089b"+
		"\u01b9\3\2\2\2\u089c\u08a9\7a\2\2\u089d\u089e\7a\2\2\u089e\u089f\7\u008c"+
		"\2\2\u089f\u08a9\5\u0238\u011d\2\u08a0\u08a1\7a\2\2\u08a1\u08a2\7\u008f"+
		"\2\2\u08a2\u08a3\5\u01fe\u0100\2\u08a3\u08a4\7\u0092\2\2\u08a4\u08a9\3"+
		"\2\2\2\u08a5\u08a6\7a\2\2\u08a6\u08a7\7\u008c\2\2\u08a7\u08a9\7,\2\2\u08a8"+
		"\u089c\3\2\2\2\u08a8\u089d\3\2\2\2\u08a8\u08a0\3\2\2\2\u08a8\u08a5\3\2"+
		"\2\2\u08a9\u01bb\3\2\2\2\u08aa\u08ab\7T\2\2\u08ab\u08ac\7\u008c\2\2\u08ac"+
		"\u08b6\5\u0238\u011d\2\u08ad\u08ae\7T\2\2\u08ae\u08af\7\u008f\2\2\u08af"+
		"\u08b0\5\u01fe\u0100\2\u08b0\u08b1\7\u0092\2\2\u08b1\u08b6\3\2\2\2\u08b2"+
		"\u08b3\7T\2\2\u08b3\u08b4\7\u008c\2\2\u08b4\u08b6\7,\2\2\u08b5\u08aa\3"+
		"\2\2\2\u08b5\u08ad\3\2\2\2\u08b5\u08b2\3\2\2\2\u08b6\u01bd\3\2\2\2\u08b7"+
		"\u08b9\7\u008d\2\2\u08b8\u08ba\5\u01c0\u00e1\2\u08b9\u08b8\3\2\2\2\u08b9"+
		"\u08ba\3\2\2\2\u08ba\u08bc\3\2\2\2\u08bb\u08bd\5\6\4\2\u08bc\u08bb\3\2"+
		"\2\2\u08bc\u08bd\3\2\2\2\u08bd\u08be\3\2\2\2\u08be\u08bf\7\u0090\2\2\u08bf"+
		"\u01bf\3\2\2\2\u08c0\u08c2\5\u01c8\u00e5\2\u08c1\u08c0\3\2\2\2\u08c1\u08c2"+
		"\3\2\2\2\u08c2\u08c3\3\2\2\2\u08c3\u08c5\5\u01c2\u00e2\2\u08c4\u08c6\7"+
		")\2\2\u08c5\u08c4\3\2\2\2\u08c5\u08c6\3\2\2\2\u08c6\u08c8\3\2\2\2\u08c7"+
		"\u08c9\5\u00dep\2\u08c8\u08c7\3\2\2\2\u08c8\u08c9\3\2\2\2\u08c9\u08ca"+
		"\3\2\2\2\u08ca\u08cb\7\23\2\2\u08cb\u08d0\3\2\2\2\u08cc\u08cd\5\u01c8"+
		"\u00e5\2\u08cd\u08ce\7\23\2\2\u08ce\u08d0\3\2\2\2\u08cf\u08c1\3\2\2\2"+
		"\u08cf\u08cc\3\2\2\2\u08d0\u01c1\3\2\2\2\u08d1\u08d3\7\u008e\2\2\u08d2"+
		"\u08d4\5\u01c4\u00e3\2\u08d3\u08d2\3\2\2\2\u08d3\u08d4\3\2\2\2\u08d4\u08d5"+
		"\3\2\2\2\u08d5\u08d8\7\u0091\2\2\u08d6\u08d8\5\u023a\u011e\2\u08d7\u08d1"+
		"\3\2\2\2\u08d7\u08d6\3\2\2\2\u08d8\u01c3\3\2\2\2\u08d9\u08de\5\u01c6\u00e4"+
		"\2\u08da\u08db\7\u0093\2\2\u08db\u08dd\5\u01c6\u00e4\2\u08dc\u08da\3\2"+
		"\2\2\u08dd\u08e0\3\2\2\2\u08de\u08dc\3\2\2\2\u08de\u08df\3\2\2\2\u08df"+
		"\u01c5\3\2\2\2\u08e0\u08de\3\2\2\2\u08e1\u08e6\5\u0238\u011d\2\u08e2\u08e4"+
		"\5\u020e\u0108\2\u08e3\u08e5\5\u024c\u0127\2\u08e4\u08e3\3\2\2\2\u08e4"+
		"\u08e5\3\2\2\2\u08e5\u08e7\3\2\2\2\u08e6\u08e2\3\2\2\2\u08e6\u08e7\3\2"+
		"\2\2\u08e7\u01c7\3\2\2\2\u08e8\u08e9\7\u008f\2\2\u08e9\u08ea\5\u01ca\u00e6"+
		"\2\u08ea\u08eb\7\u0092\2\2\u08eb\u01c9\3\2\2\2\u08ec\u08f1\5\u01cc\u00e7"+
		"\2\u08ed\u08ee\7\u0093\2\2\u08ee\u08f0\5\u01cc\u00e7\2\u08ef\u08ed\3\2"+
		"\2\2\u08f0\u08f3\3\2\2\2\u08f1\u08ef\3\2\2\2\u08f1\u08f2\3\2\2\2\u08f2"+
		"\u01cb\3\2\2\2\u08f3\u08f1\3\2\2\2\u08f4\u08f6\5\u01ce\u00e8\2\u08f5\u08f4"+
		"\3\2\2\2\u08f5\u08f6\3\2\2\2\u08f6\u08fe\3\2\2\2\u08f7\u08f9\5\u0238\u011d"+
		"\2\u08f8\u08fa\7\u009e\2\2\u08f9\u08f8\3\2\2\2\u08f9\u08fa\3\2\2\2\u08fa"+
		"\u08fb\3\2\2\2\u08fb\u08fc\5\u0194\u00cb\2\u08fc\u08ff\3\2\2\2\u08fd\u08ff"+
		"\5\u01ba\u00de\2\u08fe\u08f7\3\2\2\2\u08fe\u08fd\3\2\2\2\u08ff\u01cd\3"+
		"\2\2\2\u0900\u0908\7K\2\2\u0901\u0905\7L\2\2\u0902\u0903\7\u008e\2\2\u0903"+
		"\u0904\t\16\2\2\u0904\u0906\7\u0091\2\2\u0905\u0902\3\2\2\2\u0905\u0906"+
		"\3\2\2\2\u0906\u0908\3\2\2\2\u0907\u0900\3\2\2\2\u0907\u0901\3\2\2\2\u0908"+
		"\u01cf\3\2\2\2\u0909\u090c\7\u008c\2\2\u090a\u090d\5\u0238\u011d\2\u090b"+
		"\u090d\5\u023c\u011f\2\u090c\u090a\3\2\2\2\u090c\u090b\3\2\2\2\u090d\u0910"+
		"\3\2\2\2\u090e\u090f\7\u008c\2\2\u090f\u0911\5\u01ec\u00f7\2\u0910\u090e"+
		"\3\2\2\2\u0910\u0911\3\2\2\2\u0911\u01d1\3\2\2\2\u0912\u0913\7\u008e\2"+
		"\2\u0913\u0914\5\u0256\u012c\2\u0914\u0915\7\u0091\2\2\u0915\u01d3\3\2"+
		"\2\2\u0916\u0917\7\u008e\2\2\u0917\u0918\5\u0194\u00cb\2\u0918\u0919\7"+
		"\u0091\2\2\u0919\u01d5\3\2\2\2\u091a\u091b\7\u008e\2\2\u091b\u0923\7\u0091"+
		"\2\2\u091c\u091d\7\u008e\2\2\u091d\u091e\5\u01da\u00ee\2\u091e\u091f\7"+
		"\u0093\2\2\u091f\u0920\5\u01d8\u00ed\2\u0920\u0921\7\u0091\2\2\u0921\u0923"+
		"\3\2\2\2\u0922\u091a\3\2\2\2\u0922\u091c\3\2\2\2\u0923\u01d7\3\2\2\2\u0924"+
		"\u0929\5\u01da\u00ee\2\u0925\u0926\7\u0093\2\2\u0926\u0928\5\u01da\u00ee"+
		"\2\u0927\u0925\3\2\2\2\u0928\u092b\3\2\2\2\u0929\u0927\3\2\2\2\u0929\u092a"+
		"\3\2\2\2\u092a\u01d9\3\2\2\2\u092b\u0929\3\2\2\2\u092c\u092d\5\u0238\u011d"+
		"\2\u092d\u092e\7\u0094\2\2\u092e\u0930\3\2\2\2\u092f\u092c\3\2\2\2\u092f"+
		"\u0930\3\2\2\2\u0930\u0931\3\2\2\2\u0931\u0932\5\u0194\u00cb\2\u0932\u01db"+
		"\3\2\2\2\u0933\u0934\7\u0098\2\2\u0934\u01dd\3\2\2\2\u0935\u0937\7\u00a9"+
		"\2\2\u0936\u0938\5\u020c\u0107\2\u0937\u0936\3\2\2\2\u0937\u0938\3\2\2"+
		"\2\u0938\u0939\3\2\2\2\u0939\u093a\7\u008c\2\2\u093a\u093b\5\u01e0\u00f1"+
		"\2\u093b\u01df\3\2\2\2\u093c\u0941\5\u01e2\u00f2\2\u093d\u093e\7\u008c"+
		"\2\2\u093e\u0940\5\u01e2\u00f2\2\u093f\u093d\3\2\2\2\u0940\u0943\3\2\2"+
		"\2\u0941\u093f\3\2\2\2\u0941\u0942\3\2\2\2\u0942\u01e1\3\2\2\2\u0943\u0941"+
		"\3\2\2\2\u0944\u0946\5\u0238\u011d\2\u0945\u0947\5\u01e4\u00f3\2\u0946"+
		"\u0945\3\2\2\2\u0946\u0947\3\2\2\2\u0947\u094a\3\2\2\2\u0948\u094a\5\u01e4"+
		"\u00f3\2\u0949\u0944\3\2\2\2\u0949\u0948\3\2\2\2\u094a\u01e3\3\2\2\2\u094b"+
		"\u094d\5\u01e6\u00f4\2\u094c\u094b\3\2\2\2\u094d\u094e\3\2\2\2\u094e\u094c"+
		"\3\2\2\2\u094e\u094f\3\2\2\2\u094f\u01e5\3\2\2\2\u0950\u0958\7\u009a\2"+
		"\2\u0951\u0958\7\u0099\2\2\u0952\u0958\7a\2\2\u0953\u0954\7\u008f\2\2"+
		"\u0954\u0955\5\u01fe\u0100\2\u0955\u0956\7\u0092\2\2\u0956\u0958\3\2\2"+
		"\2\u0957\u0950\3\2\2\2\u0957\u0951\3\2\2\2\u0957\u0952\3\2\2\2\u0957\u0953"+
		"\3\2\2\2\u0958\u01e7\3\2\2\2\u0959\u095a\7\u0084\2\2\u095a\u095d\7\u008e"+
		"\2\2\u095b\u095c\t\22\2\2\u095c\u095e\7\u0094\2\2\u095d\u095b\3\2\2\2"+
		"\u095d\u095e\3\2\2\2\u095e\u095f\3\2\2\2\u095f\u0960\5\u0194\u00cb\2\u0960"+
		"\u0961\7\u0091\2\2\u0961\u01e9\3\2\2\2\u0962\u0963\7\u0085\2\2\u0963\u0964"+
		"\7\u008e\2\2\u0964\u0965\5\u0194\u00cb\2\u0965\u0966\7\u0091\2\2\u0966"+
		"\u01eb\3\2\2\2\u0967\u0971\5\u01a6\u00d4\2\u0968\u0970\5\u01ee\u00f8\2"+
		"\u0969\u0970\5\u01f0\u00f9\2\u096a\u0970\5\u01f2\u00fa\2\u096b\u0970\5"+
		"\u01f4\u00fb\2\u096c\u0970\5\u01f6\u00fc\2\u096d\u0970\5\u01f8\u00fd\2"+
		"\u096e\u0970\5\u01fa\u00fe\2\u096f\u0968\3\2\2\2\u096f\u0969\3\2\2\2\u096f"+
		"\u096a\3\2\2\2\u096f\u096b\3\2\2\2\u096f\u096c\3\2\2\2\u096f\u096d\3\2"+
		"\2\2\u096f\u096e\3\2\2\2\u0970\u0973\3\2\2\2\u0971\u096f\3\2\2\2\u0971"+
		"\u0972\3\2\2\2\u0972\u0977\3\2\2\2\u0973\u0971\3\2\2\2\u0974\u0976\5\u0254"+
		"\u012b\2\u0975\u0974\3\2\2\2\u0976\u0979\3\2\2\2\u0977\u0978\3\2\2\2\u0977"+
		"\u0975\3\2\2\2\u0978\u01ed\3\2\2\2\u0979\u0977\3\2\2\2\u097a\u097c\5\u01fc"+
		"\u00ff\2\u097b\u097a\3\2\2\2\u097b\u097c\3\2\2\2\u097c\u097d\3\2\2\2\u097d"+
		"\u0980\5\u0202\u0102\2\u097e\u0980\5\u01fc\u00ff\2\u097f\u097b\3\2\2\2"+
		"\u097f\u097e\3\2\2\2\u0980\u01ef\3\2\2\2\u0981\u0982\7\u008c\2\2\u0982"+
		"\u0987\7,\2\2\u0983\u0984\7\u008e\2\2\u0984\u0985\5\u0208\u0105\2\u0985"+
		"\u0986\7\u0091\2\2\u0986\u0988\3\2\2\2\u0987\u0983\3";
	private static final String _serializedATNSegment1 =
		"\2\2\2\u0987\u0988\3\2\2\2\u0988\u01f1\3\2\2\2\u0989\u0993\7\u008c\2\2"+
		"\u098a\u0994\7\u00ae\2\2\u098b\u0991\5\u0238\u011d\2\u098c\u0992\5\u0098"+
		"M\2\u098d\u098e\7\u008e\2\2\u098e\u098f\5\u0208\u0105\2\u098f\u0990\7"+
		"\u0091\2\2\u0990\u0992\3\2\2\2\u0991\u098c\3\2\2\2\u0991\u098d\3\2\2\2"+
		"\u0991\u0992\3\2\2\2\u0992\u0994\3\2\2\2\u0993\u098a\3\2\2\2\u0993\u098b"+
		"\3\2\2\2\u0994\u01f3\3\2\2\2\u0995\u0996\7\u008c\2\2\u0996\u0997\7a\2"+
		"\2\u0997\u01f5\3\2\2\2\u0998\u0999\7\u008f\2\2\u0999\u099a\5\u01fe\u0100"+
		"\2\u099a\u099b\7\u0092\2\2\u099b\u01f7\3\2\2\2\u099c\u099d\6\u00fd\7\2"+
		"\u099d\u099e\7\u0099\2\2\u099e\u01f9\3\2\2\2\u099f\u09a0\6\u00fe\b\2\u09a0"+
		"\u09a1\7\u009a\2\2\u09a1\u01fb\3\2\2\2\u09a2\u09a4\7\u008e\2\2\u09a3\u09a5"+
		"\5\u01fe\u0100\2\u09a4\u09a3\3\2\2\2\u09a4\u09a5\3\2\2\2\u09a5\u09a6\3"+
		"\2\2\2\u09a6\u09a7\7\u0091\2\2\u09a7\u01fd\3\2\2\2\u09a8\u09ad\5\u0200"+
		"\u0101\2\u09a9\u09aa\7\u0093\2\2\u09aa\u09ac\5\u0200\u0101\2\u09ab\u09a9"+
		"\3\2\2\2\u09ac\u09af\3\2\2\2\u09ad\u09ab\3\2\2\2\u09ad\u09ae\3\2\2\2\u09ae"+
		"\u01ff\3\2\2\2\u09af\u09ad\3\2\2\2\u09b0\u09b2\5\u020a\u0106\2\u09b1\u09b0"+
		"\3\2\2\2\u09b1\u09b2\3\2\2\2\u09b2\u09b6\3\2\2\2\u09b3\u09b7\5\u0238\u011d"+
		"\2\u09b4\u09b7\5\u0194\u00cb\2\u09b5\u09b7\5\u0256\u012c\2\u09b6\u09b3"+
		"\3\2\2\2\u09b6\u09b4\3\2\2\2\u09b6\u09b5\3\2\2\2\u09b7\u0201\3\2\2\2\u09b8"+
		"\u09ba\5\u01be\u00e0\2\u09b9\u09bb\5\u0204\u0103\2\u09ba\u09b9\3\2\2\2"+
		"\u09ba\u09bb\3\2\2\2\u09bb\u0203\3\2\2\2\u09bc\u09be\5\u0206\u0104\2\u09bd"+
		"\u09bc\3\2\2\2\u09be\u09bf\3\2\2\2\u09bf\u09bd\3\2\2\2\u09bf\u09c0\3\2"+
		"\2\2\u09c0\u0205\3\2\2\2\u09c1\u09c2\5\u0238\u011d\2\u09c2\u09c3\7\u0094"+
		"\2\2\u09c3\u09c4\5\u01be\u00e0\2\u09c4\u0207\3\2\2\2\u09c5\u09c7\5\u020a"+
		"\u0106\2\u09c6\u09c5\3\2\2\2\u09c7\u09c8\3\2\2\2\u09c8\u09c6\3\2\2\2\u09c8"+
		"\u09c9\3\2\2\2\u09c9\u0209\3\2\2\2\u09ca\u09cb\5\u0238\u011d\2\u09cb\u09cc"+
		"\7\u0094\2\2\u09cc\u020b\3\2\2\2\u09cd\u09ce\b\u0107\1\2\u09ce\u09dc\5"+
		"\u021c\u010f\2\u09cf\u09dc\5\u0226\u0114\2\u09d0\u09dc\5\u0228\u0115\2"+
		"\u09d1\u09dc\5\u022a\u0116\2\u09d2\u09dc\5\u0210\u0109\2\u09d3\u09dc\5"+
		"\u0214\u010b\2\u09d4\u09dc\5\u022e\u0118\2\u09d5\u09dc\5\u0230\u0119\2"+
		"\u09d6\u09dc\5\u0232\u011a\2\u09d7\u09d8\7\u008e\2\2\u09d8\u09d9\5\u020c"+
		"\u0107\2\u09d9\u09da\7\u0091\2\2\u09da\u09dc\3\2\2\2\u09db\u09cd\3\2\2"+
		"\2\u09db\u09cf\3\2\2\2\u09db\u09d0\3\2\2\2\u09db\u09d1\3\2\2\2\u09db\u09d2"+
		"\3\2\2\2\u09db\u09d3\3\2\2\2\u09db\u09d4\3\2\2\2\u09db\u09d5\3\2\2\2\u09db"+
		"\u09d6\3\2\2\2\u09db\u09d7\3\2\2\2\u09dc\u09ea\3\2\2\2\u09dd\u09e6\f\6"+
		"\2\2\u09de\u09df\6\u0107\n\2\u09df\u09e7\7\u009a\2\2\u09e0\u09e1\6\u0107"+
		"\13\2\u09e1\u09e7\7\u0099\2\2\u09e2\u09e3\7\u008c\2\2\u09e3\u09e7\7_\2"+
		"\2\u09e4\u09e5\7\u008c\2\2\u09e5\u09e7\7\37\2\2\u09e6\u09de\3\2\2\2\u09e6"+
		"\u09e0\3\2\2\2\u09e6\u09e2\3\2\2\2\u09e6\u09e4\3\2\2\2\u09e7\u09e9\3\2"+
		"\2\2\u09e8\u09dd\3\2\2\2\u09e9\u09ec\3\2\2\2\u09ea\u09e8\3\2\2\2\u09ea"+
		"\u09eb\3\2\2\2\u09eb\u020d\3\2\2\2\u09ec\u09ea\3\2\2\2\u09ed\u09ef\7\u0094"+
		"\2\2\u09ee\u09f0\5\u018c\u00c7\2\u09ef\u09ee\3\2\2\2\u09ef\u09f0\3\2\2"+
		"\2\u09f0\u09f2\3\2\2\2\u09f1\u09f3\7]\2\2\u09f2\u09f1\3\2\2\2\u09f2\u09f3"+
		"\3\2\2\2\u09f3\u09f4\3\2\2\2\u09f4\u09f5\5\u020c\u0107\2\u09f5\u020f\3"+
		"\2\2\2\u09f6\u09f8\5\u0212\u010a\2\u09f7\u09f9\5\u0098M\2\u09f8\u09f7"+
		"\3\2\2\2\u09f8\u09f9\3\2\2\2\u09f9\u09fc\3\2\2\2\u09fa\u09fb\7\u008c\2"+
		"\2\u09fb\u09fd\5\u0210\u0109\2\u09fc\u09fa\3\2\2\2\u09fc\u09fd\3\2\2\2"+
		"\u09fd\u0211\3\2\2\2\u09fe\u09ff\5\u0238\u011d\2\u09ff\u0213\3\2\2\2\u0a00"+
		"\u0a02\7\u008e\2\2\u0a01\u0a03\5\u0216\u010c\2\u0a02\u0a01\3\2\2\2\u0a02"+
		"\u0a03\3\2\2\2\u0a03\u0a04\3\2\2\2\u0a04\u0a05\7\u0091\2\2\u0a05\u0215"+
		"\3\2\2\2\u0a06\u0a0b\5\u0218\u010d\2\u0a07\u0a08\7\u0093\2\2\u0a08\u0a0a"+
		"\5\u0218\u010d\2\u0a09\u0a07\3\2\2\2\u0a0a\u0a0d\3\2\2\2\u0a0b\u0a09\3"+
		"\2\2\2\u0a0b\u0a0c\3\2\2\2\u0a0c\u0217\3\2\2\2\u0a0d\u0a0b\3\2\2\2\u0a0e"+
		"\u0a0f\5\u021a\u010e\2\u0a0f\u0a10\5\u020e\u0108\2\u0a10\u0a13\3\2\2\2"+
		"\u0a11\u0a13\5\u020c\u0107\2\u0a12\u0a0e\3\2\2\2\u0a12\u0a11\3\2\2\2\u0a13"+
		"\u0a16\3\2\2\2\u0a14\u0a15\7\u009e\2\2\u0a15\u0a17\5\u0194\u00cb\2\u0a16"+
		"\u0a14\3\2\2\2\u0a16\u0a17\3\2\2\2\u0a17\u0219\3\2\2\2\u0a18\u0a1a\5\u0238"+
		"\u011d\2\u0a19\u0a18\3\2\2\2\u0a1a\u0a1b\3\2\2\2\u0a1b\u0a19\3\2\2\2\u0a1b"+
		"\u0a1c\3\2\2\2\u0a1c\u021b\3\2\2\2\u0a1d\u0a1f\5\u018c\u00c7\2\u0a1e\u0a1d"+
		"\3\2\2\2\u0a1e\u0a1f\3\2\2\2\u0a1f\u0a20\3\2\2\2\u0a20\u0a22\5\u021e\u0110"+
		"\2\u0a21\u0a23\7)\2\2\u0a22\u0a21\3\2\2\2\u0a22\u0a23\3\2\2\2\u0a23\u0a24"+
		"\3\2\2\2\u0a24\u0a25\5\u024a\u0126\2\u0a25\u0a26\5\u020c\u0107\2\u0a26"+
		"\u021d\3\2\2\2\u0a27\u0a2c\7\u008e\2\2\u0a28\u0a2a\5\u0220\u0111\2\u0a29"+
		"\u0a2b\5\u024c\u0127\2\u0a2a\u0a29\3\2\2\2\u0a2a\u0a2b\3\2\2\2\u0a2b\u0a2d"+
		"\3\2\2\2\u0a2c\u0a28\3\2\2\2\u0a2c\u0a2d\3\2\2\2\u0a2d\u0a2e\3\2\2\2\u0a2e"+
		"\u0a2f\7\u0091\2\2\u0a2f\u021f\3\2\2\2\u0a30\u0a35\5\u0222\u0112\2\u0a31"+
		"\u0a32\7\u0093\2\2\u0a32\u0a34\5\u0222\u0112\2\u0a33\u0a31\3\2\2\2\u0a34"+
		"\u0a37\3\2\2\2\u0a35\u0a33\3\2\2\2\u0a35\u0a36\3\2\2\2\u0a36\u0221\3\2"+
		"\2\2\u0a37\u0a35\3\2\2\2\u0a38\u0a3a\5\u018c\u00c7\2\u0a39\u0a38\3\2\2"+
		"\2\u0a39\u0a3a\3\2\2\2\u0a3a\u0a3c\3\2\2\2\u0a3b\u0a3d\7]\2\2\u0a3c\u0a3b"+
		"\3\2\2\2\u0a3c\u0a3d\3\2\2\2\u0a3d\u0a3e\3\2\2\2\u0a3e\u0a43\5\u020c\u0107"+
		"\2\u0a3f\u0a40\5\u0224\u0113\2\u0a40\u0a41\5\u020e\u0108\2\u0a41\u0a43"+
		"\3\2\2\2\u0a42\u0a39\3\2\2\2\u0a42\u0a3f\3\2\2\2\u0a43\u0223\3\2\2\2\u0a44"+
		"\u0a46\5\u0238\u011d\2\u0a45\u0a44\3\2\2\2\u0a46\u0a47\3\2\2\2\u0a47\u0a45"+
		"\3\2\2\2\u0a47\u0a48\3\2\2\2\u0a48\u0225\3\2\2\2\u0a49\u0a4a\7\u008f\2"+
		"\2\u0a4a\u0a4b\5\u020c\u0107\2\u0a4b\u0a4c\7\u0092\2\2\u0a4c\u0227\3\2"+
		"\2\2\u0a4d\u0a4e\7\u008f\2\2\u0a4e\u0a4f\5\u020c\u0107\2\u0a4f\u0a50\7"+
		"\u0094\2\2\u0a50\u0a51\5\u020c\u0107\2\u0a51\u0a52\7\u0092\2\2\u0a52\u0229"+
		"\3\2\2\2\u0a53\u0a58\5\u0210\u0109\2\u0a54\u0a55\7\u009c\2\2\u0a55\u0a57"+
		"\5\u0210\u0109\2\u0a56\u0a54\3\2\2\2\u0a57\u0a5a\3\2\2\2\u0a58\u0a56\3"+
		"\2\2\2\u0a58\u0a59\3\2\2\2\u0a59\u0a5c\3\2\2\2\u0a5a\u0a58\3\2\2\2\u0a5b"+
		"\u0a5d\5\u022c\u0117\2\u0a5c\u0a5b\3\2\2\2\u0a5c\u0a5d\3\2\2\2\u0a5d\u022b"+
		"\3\2\2\2\u0a5e\u0a5f\6\u0117\f\2\u0a5f\u0a60\7\u009c\2\2\u0a60\u022d\3"+
		"\2\2\2\u0a61\u0a62\7^\2\2\u0a62\u0a63\5\u020c\u0107\2\u0a63\u022f\3\2"+
		"\2\2\u0a64\u0a65\7U\2\2\u0a65\u0231\3\2\2\2\u0a66\u0a67\7b\2\2\u0a67\u0233"+
		"\3\2\2\2\u0a68\u0a69\7\u0094\2\2\u0a69\u0a6a\5\u0236\u011c\2\u0a6a\u0235"+
		"\3\2\2\2\u0a6b\u0a70\5\u0210\u0109\2\u0a6c\u0a6d\7\u0093\2\2\u0a6d\u0a6f"+
		"\5\u0210\u0109\2\u0a6e\u0a6c\3\2\2\2\u0a6f\u0a72\3\2\2\2\u0a70\u0a6e\3"+
		"\2\2\2\u0a70\u0a71\3\2\2\2\u0a71\u0237\3\2\2\2\u0a72\u0a70\3\2\2\2\u0a73"+
		"\u0a7d\t\23\2\2\u0a74\u0a7d\7\u008b\2\2\u0a75\u0a79\7\u00a7\2\2\u0a76"+
		"\u0a7a\5\u023c\u011f\2\u0a77\u0a7a\7\u008b\2\2\u0a78\u0a7a\7\u00a8\2\2"+
		"\u0a79\u0a76\3\2\2\2\u0a79\u0a77\3\2\2\2\u0a79\u0a78\3\2\2\2\u0a7a\u0a7b"+
		"\3\2\2\2\u0a7b\u0a7d\7\u00a7\2\2\u0a7c\u0a73\3\2\2\2\u0a7c\u0a74\3\2\2"+
		"\2\u0a7c\u0a75\3\2\2\2\u0a7d\u0239\3\2\2\2\u0a7e\u0a83\5\u0238\u011d\2"+
		"\u0a7f\u0a80\7\u0093\2\2\u0a80\u0a82\5\u0238\u011d\2\u0a81\u0a7f\3\2\2"+
		"\2\u0a82\u0a85\3\2\2\2\u0a83\u0a81\3\2\2\2\u0a83\u0a84\3\2\2\2\u0a84\u023b"+
		"\3\2\2\2\u0a85\u0a83\3\2\2\2\u0a86\u0a87\t\24\2\2\u0a87\u023d\3\2\2\2"+
		"\u0a88\u0a89\6\u0120\r\2\u0a89\u0a8a\7\u009e\2\2\u0a8a\u023f\3\2\2\2\u0a8b"+
		"\u0a8c\6\u0121\16\2\u0a8c\u0a8d\7\u009d\2\2\u0a8d\u0241\3\2\2\2\u0a8e"+
		"\u0a8f\6\u0122\17\2\u0a8f\u0a90\7\u009c\2\2\u0a90\u0a91\7\u009c\2\2\u0a91"+
		"\u0243\3\2\2\2\u0a92\u0a93\6\u0123\20\2\u0a93\u0a94\7\u009f\2\2\u0a94"+
		"\u0a95\7\u009f\2\2\u0a95\u0245\3\2\2\2\u0a96\u0a97\6\u0124\21\2\u0a97"+
		"\u0a98\7\u0097\2\2\u0a98\u0a99\7\u009e\2\2\u0a99\u0247\3\2\2\2\u0a9a\u0a9b"+
		"\6\u0125\22\2\u0a9b\u0a9c\7\u0096\2\2\u0a9c\u0249\3\2\2\2\u0a9d\u0a9e"+
		"\6\u0126\23\2\u0a9e\u0a9f\7\u009d\2\2\u0a9f\u0aa0\7\u0097\2\2\u0aa0\u024b"+
		"\3\2\2\2\u0aa1\u0aa2\6\u0127\24\2\u0aa2\u0aa3\7\u008c\2\2\u0aa3\u0aa4"+
		"\7\u008c\2\2\u0aa4\u0aa5\7\u008c\2\2\u0aa5\u024d\3\2\2\2\u0aa6\u0aa7\6"+
		"\u0128\25\2\u0aa7\u0aa8\7\u009e\2\2\u0aa8\u0aa9\7\u009e\2\2\u0aa9\u024f"+
		"\3\2\2\2\u0aaa\u0aab\6\u0129\26\2\u0aab\u0aac\5\u0256\u012c\2\u0aac\u0251"+
		"\3\2\2\2\u0aad\u0aae\6\u012a\27\2\u0aae\u0aaf\5\u0256\u012c\2\u0aaf\u0253"+
		"\3\2\2\2\u0ab0\u0ab1\6\u012b\30\2\u0ab1\u0ab2\5\u0256\u012c\2\u0ab2\u0255"+
		"\3\2\2\2\u0ab3\u0ab5\5\u0258\u012d\2\u0ab4\u0ab6\5\u025c\u012f\2\u0ab5"+
		"\u0ab4\3\2\2\2\u0ab5\u0ab6\3\2\2\2\u0ab6\u0abb\3\2\2\2\u0ab7\u0ab8\5\u025e"+
		"\u0130\2\u0ab8\u0ab9\5\u0262\u0132\2\u0ab9\u0abb\3\2\2\2\u0aba\u0ab3\3"+
		"\2\2\2\u0aba\u0ab7\3\2\2\2\u0abb\u0257\3\2\2\2\u0abc\u0abf\t\25\2\2\u0abd"+
		"\u0abf\7\u00aa\2\2\u0abe\u0abc\3\2\2\2\u0abe\u0abd\3\2\2\2\u0abf\u0259"+
		"\3\2\2\2\u0ac0\u0ac3\5\u0258\u012d\2\u0ac1\u0ac3\7\u00ab\2\2\u0ac2\u0ac0"+
		"\3\2\2\2\u0ac2\u0ac1\3\2\2\2\u0ac3\u025b\3\2\2\2\u0ac4\u0ac5\6\u012f\31"+
		"\2\u0ac5\u0ac7\5\u025a\u012e\2\u0ac6\u0ac4\3\2\2\2\u0ac7\u0ac8\3\2\2\2"+
		"\u0ac8\u0ac6\3\2\2\2\u0ac8\u0ac9\3\2\2\2\u0ac9\u025d\3\2\2\2\u0aca\u0acb"+
		"\7\u008c\2\2\u0acb\u025f\3\2\2\2\u0acc\u0acf\7\u008c\2\2\u0acd\u0acf\5"+
		"\u025a\u012e\2\u0ace\u0acc\3\2\2\2\u0ace\u0acd\3\2\2\2\u0acf\u0261\3\2"+
		"\2\2\u0ad0\u0ad1\6\u0132\32\2\u0ad1\u0ad3\5\u0260\u0131\2\u0ad2\u0ad0"+
		"\3\2\2\2\u0ad3\u0ad4\3\2\2\2\u0ad4\u0ad2\3\2\2\2\u0ad4\u0ad5\3\2\2\2\u0ad5"+
		"\u0263\3\2\2\2\u0ad6\u0adb\5\u0266\u0134\2\u0ad7\u0adb\5\u026e\u0138\2"+
		"\u0ad8\u0adb\5\u0268\u0135\2\u0ad9\u0adb\5\u026a\u0136\2\u0ada\u0ad6\3"+
		"\2\2\2\u0ada\u0ad7\3\2\2\2\u0ada\u0ad8\3\2\2\2\u0ada\u0ad9\3\2\2\2\u0adb"+
		"\u0265\3\2\2\2\u0adc\u0ade\5\u0240\u0121\2\u0add\u0adc\3\2\2\2\u0add\u0ade"+
		"\3\2\2\2\u0ade\u0adf\3\2\2\2\u0adf\u0ae5\5\u026c\u0137\2\u0ae0\u0ae2\5"+
		"\u0240\u0121\2\u0ae1\u0ae0\3\2\2\2\u0ae1\u0ae2\3\2\2\2\u0ae2\u0ae3\3\2"+
		"\2\2\u0ae3\u0ae5\7\u00b1\2\2\u0ae4\u0add\3\2\2\2\u0ae4\u0ae1\3\2\2\2\u0ae5"+
		"\u0267\3\2\2\2\u0ae6\u0ae7\t\26\2\2\u0ae7\u0269\3\2\2\2\u0ae8\u0ae9\7"+
		"\\\2\2\u0ae9\u026b\3\2\2\2\u0aea\u0aeb\t\27\2\2\u0aeb\u026d\3\2\2\2\u0aec"+
		"\u0af0\5\u0270\u0139\2\u0aed\u0af0\5\u0274\u013b\2\u0aee\u0af0\5\u0272"+
		"\u013a\2\u0aef\u0aec\3\2\2\2\u0aef\u0aed\3\2\2\2\u0aef\u0aee\3\2\2\2\u0af0"+
		"\u026f\3\2\2\2\u0af1\u0af3\7\u00b6\2\2\u0af2\u0af4\7\u00c3\2\2\u0af3\u0af2"+
		"\3\2\2\2\u0af4\u0af5\3\2\2\2\u0af5\u0af3\3\2\2\2\u0af5\u0af6\3\2\2\2\u0af6"+
		"\u0af7\3\2\2\2\u0af7\u0b00\7\u00c2\2\2\u0af8\u0afa\7\u00b7\2\2\u0af9\u0afb"+
		"\7\u00c1\2\2\u0afa\u0af9\3\2\2\2\u0afb\u0afc\3\2\2\2\u0afc\u0afa\3\2\2"+
		"\2\u0afc\u0afd\3\2\2\2\u0afd\u0afe\3\2\2\2\u0afe\u0b00\7\u00c0\2\2\u0aff"+
		"\u0af1\3\2\2\2\u0aff\u0af8\3\2\2\2\u0b00\u0271\3\2\2\2\u0b01\u0b05\7\u00b9"+
		"\2\2\u0b02\u0b04\7\u00bc\2\2\u0b03\u0b02\3\2\2\2\u0b04\u0b07\3\2\2\2\u0b05"+
		"\u0b03\3\2\2\2\u0b05\u0b06\3\2\2\2\u0b06\u0b08\3\2\2\2\u0b07\u0b05\3\2"+
		"\2\2\u0b08\u0b12\7\u00bb\2\2\u0b09\u0b0d\7\u00b8\2\2\u0b0a\u0b0c\7\u00bf"+
		"\2\2\u0b0b\u0b0a\3\2\2\2\u0b0c\u0b0f\3\2\2\2\u0b0d\u0b0b\3\2\2\2\u0b0d"+
		"\u0b0e\3\2\2\2\u0b0e\u0b10\3\2\2\2\u0b0f\u0b0d\3\2\2\2\u0b10\u0b12\7\u00be"+
		"\2\2\u0b11\u0b01\3\2\2\2\u0b11\u0b09\3\2\2\2\u0b12\u0273\3\2\2\2\u0b13"+
		"\u0b21\7\u00b9\2\2\u0b14\u0b20\7\u00bc\2\2\u0b15\u0b1b\7\u00ba\2\2\u0b16"+
		"\u0b1c\5\u0194\u00cb\2\u0b17\u0b18\5\u01da\u00ee\2\u0b18\u0b19\7\u0093"+
		"\2\2\u0b19\u0b1a\5\u01d8\u00ed\2\u0b1a\u0b1c\3\2\2\2\u0b1b\u0b16\3\2\2"+
		"\2\u0b1b\u0b17\3\2\2\2\u0b1c\u0b1d\3\2\2\2\u0b1d\u0b1e\7\u0091\2\2\u0b1e"+
		"\u0b20\3\2\2\2\u0b1f\u0b14\3\2\2\2\u0b1f\u0b15\3\2\2\2\u0b20\u0b23\3\2"+
		"\2\2\u0b21\u0b1f\3\2\2\2\u0b21\u0b22\3\2\2\2\u0b22\u0b24\3\2\2\2\u0b23"+
		"\u0b21\3\2\2\2\u0b24\u0b38\7\u00bb\2\2\u0b25\u0b33\7\u00b8\2\2\u0b26\u0b32"+
		"\7\u00bf\2\2\u0b27\u0b2d\7\u00bd\2\2\u0b28\u0b2e\5\u0194\u00cb\2\u0b29"+
		"\u0b2a\5\u01da\u00ee\2\u0b2a\u0b2b\7\u0093\2\2\u0b2b\u0b2c\5\u01d8\u00ed"+
		"\2\u0b2c\u0b2e\3\2\2\2\u0b2d\u0b28\3\2\2\2\u0b2d\u0b29\3\2\2\2\u0b2e\u0b2f"+
		"\3\2\2\2\u0b2f\u0b30\7\u0091\2\2\u0b30\u0b32\3\2\2\2\u0b31\u0b26\3\2\2"+
		"\2\u0b31\u0b27\3\2\2\2\u0b32\u0b35\3\2\2\2\u0b33\u0b31\3\2\2\2\u0b33\u0b34"+
		"\3\2\2\2\u0b34\u0b36\3\2\2\2\u0b35\u0b33\3\2\2\2\u0b36\u0b38\7\u00be\2"+
		"\2\u0b37\u0b13\3\2\2\2\u0b37\u0b25\3\2\2\2\u0b38\u0275\3\2\2\2\u0167\u0277"+
		"\u0283\u0286\u0289\u0291\u0296\u029a\u02a0\u02ad\u02b4\u02c6\u02cc\u02d2"+
		"\u02dd\u02e3\u02e7\u02ec\u02ef\u02f7\u02fc\u0300\u0304\u0310\u0313\u031a"+
		"\u031e\u0323\u0327\u032e\u033a\u033e\u0342\u0348\u0353\u0358\u035c\u0367"+
		"\u036c\u0371\u0375\u0378\u037f\u0384\u0389\u038d\u0399\u039e\u03a4\u03b5"+
		"\u03c4\u03c8\u03cd\u03d8\u03e7\u0400\u0407\u0410\u0412\u041d\u0424\u0426"+
		"\u0430\u0435\u043b\u0441\u044c\u0460\u0463\u0468\u046b\u046f\u0474\u0478"+
		"\u0483\u0488\u048b\u048e\u0498\u049d\u04a9\u04ae\u04b0\u04b3\u04b6\u04b9"+
		"\u04c2\u04c7\u04cc\u04cf\u04d2\u04d6\u04d9\u04dc\u04e0\u04e3\u04ec\u04f1"+
		"\u04f6\u04f9\u04fe\u0501\u0508\u050c\u050e\u0513\u0517\u051c\u0520\u0525"+
		"\u0528\u052d\u0539\u053d\u0540\u0543\u0546\u054c\u0550\u0553\u0556\u055a"+
		"\u0562\u056b\u056f\u0572\u0577\u057a\u0584\u0587\u058b\u058e\u0593\u0596"+
		"\u0599\u059d\u05a4\u05a9\u05ac\u05af\u05b9\u05c3\u05c5\u05ce\u05d2\u05db"+
		"\u05e0\u05e3\u05ed\u05f2\u05fa\u05fd\u0600\u0605\u0608\u060b\u0618\u061d"+
		"\u0620\u0623\u0626\u062a\u062c\u0631\u0634\u0637\u0644\u0649\u064c\u064f"+
		"\u0656\u0659\u0666\u066b\u0673\u067d\u0681\u0685\u0689\u068c\u068f\u0694"+
		"\u0699\u069c\u06a1\u06a4\u06a7\u06ab\u06af\u06b2\u06b7\u06ba\u06be\u06c3"+
		"\u06c9\u06cc\u06d1\u06d4\u06df\u06e4\u06e9\u06ee\u06f1\u06f4\u06f8\u06fe"+
		"\u0705\u0713\u071c\u0723\u0728\u073b\u0743\u0756\u075b\u0760\u0766\u076e"+
		"\u0771\u0779\u0780\u078b\u078f\u0798\u079e\u07a3\u07a8\u07b2\u07b9\u07be"+
		"\u07c5\u07ca\u07ce\u07d3\u07d8\u07e0\u07e8\u07eb\u07ef\u07f6\u07fa\u07fe"+
		"\u0805\u080c\u080f\u0814\u0819\u0822\u0824\u082a\u083a\u0841\u084e\u0852"+
		"\u085b\u085f\u0866\u086f\u0873\u089a\u08a8\u08b5\u08b9\u08bc\u08c1\u08c5"+
		"\u08c8\u08cf\u08d3\u08d7\u08de\u08e4\u08e6\u08f1\u08f5\u08f9\u08fe\u0905"+
		"\u0907\u090c\u0910\u0922\u0929\u092f\u0937\u0941\u0946\u0949\u094e\u0957"+
		"\u095d\u096f\u0971\u0977\u097b\u097f\u0987\u0991\u0993\u09a4\u09ad\u09b1"+
		"\u09b6\u09ba\u09bf\u09c8\u09db\u09e6\u09ea\u09ef\u09f2\u09f8\u09fc\u0a02"+
		"\u0a0b\u0a12\u0a16\u0a1b\u0a1e\u0a22\u0a2a\u0a2c\u0a35\u0a39\u0a3c\u0a42"+
		"\u0a47\u0a58\u0a5c\u0a70\u0a79\u0a7c\u0a83\u0ab5\u0aba\u0abe\u0ac2\u0ac8"+
		"\u0ace\u0ad4\u0ada\u0add\u0ae1\u0ae4\u0aef\u0af5\u0afc\u0aff\u0b05\u0b0d"+
		"\u0b11\u0b1b\u0b1f\u0b21\u0b2d\u0b31\u0b33\u0b37";
	public static final String _serializedATN = Utils.join(
		new String[] {
			_serializedATNSegment0,
			_serializedATNSegment1
		},
		""
	);
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}