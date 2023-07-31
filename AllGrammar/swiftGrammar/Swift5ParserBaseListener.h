
// Generated from Swift5Parser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "Swift5ParserListener.h"


/**
 * This class provides an empty implementation of Swift5ParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Swift5ParserBaseListener : public Swift5ParserListener {
public:

  virtual void enterTop_level(Swift5Parser::Top_levelContext * /*ctx*/) override { }
  virtual void exitTop_level(Swift5Parser::Top_levelContext * /*ctx*/) override { }

  virtual void enterStatement(Swift5Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(Swift5Parser::StatementContext * /*ctx*/) override { }

  virtual void enterStatements(Swift5Parser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(Swift5Parser::StatementsContext * /*ctx*/) override { }

  virtual void enterLoop_statement(Swift5Parser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(Swift5Parser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterFor_in_statement(Swift5Parser::For_in_statementContext * /*ctx*/) override { }
  virtual void exitFor_in_statement(Swift5Parser::For_in_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(Swift5Parser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(Swift5Parser::While_statementContext * /*ctx*/) override { }

  virtual void enterCondition_list(Swift5Parser::Condition_listContext * /*ctx*/) override { }
  virtual void exitCondition_list(Swift5Parser::Condition_listContext * /*ctx*/) override { }

  virtual void enterCondition(Swift5Parser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(Swift5Parser::ConditionContext * /*ctx*/) override { }

  virtual void enterCase_condition(Swift5Parser::Case_conditionContext * /*ctx*/) override { }
  virtual void exitCase_condition(Swift5Parser::Case_conditionContext * /*ctx*/) override { }

  virtual void enterOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext * /*ctx*/) override { }
  virtual void exitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext * /*ctx*/) override { }

  virtual void enterRepeat_while_statement(Swift5Parser::Repeat_while_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext * /*ctx*/) override { }

  virtual void enterBranch_statement(Swift5Parser::Branch_statementContext * /*ctx*/) override { }
  virtual void exitBranch_statement(Swift5Parser::Branch_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(Swift5Parser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(Swift5Parser::If_statementContext * /*ctx*/) override { }

  virtual void enterElse_clause(Swift5Parser::Else_clauseContext * /*ctx*/) override { }
  virtual void exitElse_clause(Swift5Parser::Else_clauseContext * /*ctx*/) override { }

  virtual void enterGuard_statement(Swift5Parser::Guard_statementContext * /*ctx*/) override { }
  virtual void exitGuard_statement(Swift5Parser::Guard_statementContext * /*ctx*/) override { }

  virtual void enterSwitch_statement(Swift5Parser::Switch_statementContext * /*ctx*/) override { }
  virtual void exitSwitch_statement(Swift5Parser::Switch_statementContext * /*ctx*/) override { }

  virtual void enterSwitch_cases(Swift5Parser::Switch_casesContext * /*ctx*/) override { }
  virtual void exitSwitch_cases(Swift5Parser::Switch_casesContext * /*ctx*/) override { }

  virtual void enterSwitch_case(Swift5Parser::Switch_caseContext * /*ctx*/) override { }
  virtual void exitSwitch_case(Swift5Parser::Switch_caseContext * /*ctx*/) override { }

  virtual void enterCase_label(Swift5Parser::Case_labelContext * /*ctx*/) override { }
  virtual void exitCase_label(Swift5Parser::Case_labelContext * /*ctx*/) override { }

  virtual void enterCase_item_list(Swift5Parser::Case_item_listContext * /*ctx*/) override { }
  virtual void exitCase_item_list(Swift5Parser::Case_item_listContext * /*ctx*/) override { }

  virtual void enterDefault_label(Swift5Parser::Default_labelContext * /*ctx*/) override { }
  virtual void exitDefault_label(Swift5Parser::Default_labelContext * /*ctx*/) override { }

  virtual void enterWhere_clause(Swift5Parser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(Swift5Parser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_expression(Swift5Parser::Where_expressionContext * /*ctx*/) override { }
  virtual void exitWhere_expression(Swift5Parser::Where_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_switch_case(Swift5Parser::Conditional_switch_caseContext * /*ctx*/) override { }
  virtual void exitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext * /*ctx*/) override { }

  virtual void enterSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext * /*ctx*/) override { }

  virtual void enterSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext * /*ctx*/) override { }
  virtual void exitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext * /*ctx*/) override { }

  virtual void enterSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext * /*ctx*/) override { }

  virtual void enterSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext * /*ctx*/) override { }

  virtual void enterLabeled_statement(Swift5Parser::Labeled_statementContext * /*ctx*/) override { }
  virtual void exitLabeled_statement(Swift5Parser::Labeled_statementContext * /*ctx*/) override { }

  virtual void enterStatement_label(Swift5Parser::Statement_labelContext * /*ctx*/) override { }
  virtual void exitStatement_label(Swift5Parser::Statement_labelContext * /*ctx*/) override { }

  virtual void enterLabel_name(Swift5Parser::Label_nameContext * /*ctx*/) override { }
  virtual void exitLabel_name(Swift5Parser::Label_nameContext * /*ctx*/) override { }

  virtual void enterControl_transfer_statement(Swift5Parser::Control_transfer_statementContext * /*ctx*/) override { }
  virtual void exitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext * /*ctx*/) override { }

  virtual void enterBreak_statement(Swift5Parser::Break_statementContext * /*ctx*/) override { }
  virtual void exitBreak_statement(Swift5Parser::Break_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(Swift5Parser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(Swift5Parser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterFallthrough_statement(Swift5Parser::Fallthrough_statementContext * /*ctx*/) override { }
  virtual void exitFallthrough_statement(Swift5Parser::Fallthrough_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(Swift5Parser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(Swift5Parser::Return_statementContext * /*ctx*/) override { }

  virtual void enterThrow_statement(Swift5Parser::Throw_statementContext * /*ctx*/) override { }
  virtual void exitThrow_statement(Swift5Parser::Throw_statementContext * /*ctx*/) override { }

  virtual void enterDefer_statement(Swift5Parser::Defer_statementContext * /*ctx*/) override { }
  virtual void exitDefer_statement(Swift5Parser::Defer_statementContext * /*ctx*/) override { }

  virtual void enterDo_statement(Swift5Parser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(Swift5Parser::Do_statementContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(Swift5Parser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(Swift5Parser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterCatch_clause(Swift5Parser::Catch_clauseContext * /*ctx*/) override { }
  virtual void exitCatch_clause(Swift5Parser::Catch_clauseContext * /*ctx*/) override { }

  virtual void enterCatch_pattern_list(Swift5Parser::Catch_pattern_listContext * /*ctx*/) override { }
  virtual void exitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext * /*ctx*/) override { }

  virtual void enterCatch_pattern(Swift5Parser::Catch_patternContext * /*ctx*/) override { }
  virtual void exitCatch_pattern(Swift5Parser::Catch_patternContext * /*ctx*/) override { }

  virtual void enterCompiler_control_statement(Swift5Parser::Compiler_control_statementContext * /*ctx*/) override { }
  virtual void exitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext * /*ctx*/) override { }

  virtual void enterConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext * /*ctx*/) override { }
  virtual void exitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext * /*ctx*/) override { }

  virtual void enterIf_directive_clause(Swift5Parser::If_directive_clauseContext * /*ctx*/) override { }
  virtual void exitIf_directive_clause(Swift5Parser::If_directive_clauseContext * /*ctx*/) override { }

  virtual void enterElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext * /*ctx*/) override { }
  virtual void exitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext * /*ctx*/) override { }

  virtual void enterElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext * /*ctx*/) override { }
  virtual void exitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext * /*ctx*/) override { }

  virtual void enterElse_directive_clause(Swift5Parser::Else_directive_clauseContext * /*ctx*/) override { }
  virtual void exitElse_directive_clause(Swift5Parser::Else_directive_clauseContext * /*ctx*/) override { }

  virtual void enterCompilation_condition(Swift5Parser::Compilation_conditionContext * /*ctx*/) override { }
  virtual void exitCompilation_condition(Swift5Parser::Compilation_conditionContext * /*ctx*/) override { }

  virtual void enterPlatform_condition(Swift5Parser::Platform_conditionContext * /*ctx*/) override { }
  virtual void exitPlatform_condition(Swift5Parser::Platform_conditionContext * /*ctx*/) override { }

  virtual void enterSwift_version(Swift5Parser::Swift_versionContext * /*ctx*/) override { }
  virtual void exitSwift_version(Swift5Parser::Swift_versionContext * /*ctx*/) override { }

  virtual void enterSwift_version_continuation(Swift5Parser::Swift_version_continuationContext * /*ctx*/) override { }
  virtual void exitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext * /*ctx*/) override { }

  virtual void enterOperating_system(Swift5Parser::Operating_systemContext * /*ctx*/) override { }
  virtual void exitOperating_system(Swift5Parser::Operating_systemContext * /*ctx*/) override { }

  virtual void enterArchitecture(Swift5Parser::ArchitectureContext * /*ctx*/) override { }
  virtual void exitArchitecture(Swift5Parser::ArchitectureContext * /*ctx*/) override { }

  virtual void enterModule_name(Swift5Parser::Module_nameContext * /*ctx*/) override { }
  virtual void exitModule_name(Swift5Parser::Module_nameContext * /*ctx*/) override { }

  virtual void enterEnvironment(Swift5Parser::EnvironmentContext * /*ctx*/) override { }
  virtual void exitEnvironment(Swift5Parser::EnvironmentContext * /*ctx*/) override { }

  virtual void enterLine_control_statement(Swift5Parser::Line_control_statementContext * /*ctx*/) override { }
  virtual void exitLine_control_statement(Swift5Parser::Line_control_statementContext * /*ctx*/) override { }

  virtual void enterLine_number(Swift5Parser::Line_numberContext * /*ctx*/) override { }
  virtual void exitLine_number(Swift5Parser::Line_numberContext * /*ctx*/) override { }

  virtual void enterFile_name(Swift5Parser::File_nameContext * /*ctx*/) override { }
  virtual void exitFile_name(Swift5Parser::File_nameContext * /*ctx*/) override { }

  virtual void enterDiagnostic_statement(Swift5Parser::Diagnostic_statementContext * /*ctx*/) override { }
  virtual void exitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext * /*ctx*/) override { }

  virtual void enterDiagnostic_message(Swift5Parser::Diagnostic_messageContext * /*ctx*/) override { }
  virtual void exitDiagnostic_message(Swift5Parser::Diagnostic_messageContext * /*ctx*/) override { }

  virtual void enterAvailability_condition(Swift5Parser::Availability_conditionContext * /*ctx*/) override { }
  virtual void exitAvailability_condition(Swift5Parser::Availability_conditionContext * /*ctx*/) override { }

  virtual void enterAvailability_arguments(Swift5Parser::Availability_argumentsContext * /*ctx*/) override { }
  virtual void exitAvailability_arguments(Swift5Parser::Availability_argumentsContext * /*ctx*/) override { }

  virtual void enterAvailability_argument(Swift5Parser::Availability_argumentContext * /*ctx*/) override { }
  virtual void exitAvailability_argument(Swift5Parser::Availability_argumentContext * /*ctx*/) override { }

  virtual void enterPlatform_name(Swift5Parser::Platform_nameContext * /*ctx*/) override { }
  virtual void exitPlatform_name(Swift5Parser::Platform_nameContext * /*ctx*/) override { }

  virtual void enterPlatform_version(Swift5Parser::Platform_versionContext * /*ctx*/) override { }
  virtual void exitPlatform_version(Swift5Parser::Platform_versionContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter(Swift5Parser::Generic_parameterContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter(Swift5Parser::Generic_parameterContext * /*ctx*/) override { }

  virtual void enterGeneric_where_clause(Swift5Parser::Generic_where_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext * /*ctx*/) override { }

  virtual void enterRequirement_list(Swift5Parser::Requirement_listContext * /*ctx*/) override { }
  virtual void exitRequirement_list(Swift5Parser::Requirement_listContext * /*ctx*/) override { }

  virtual void enterRequirement(Swift5Parser::RequirementContext * /*ctx*/) override { }
  virtual void exitRequirement(Swift5Parser::RequirementContext * /*ctx*/) override { }

  virtual void enterConformance_requirement(Swift5Parser::Conformance_requirementContext * /*ctx*/) override { }
  virtual void exitConformance_requirement(Swift5Parser::Conformance_requirementContext * /*ctx*/) override { }

  virtual void enterSame_type_requirement(Swift5Parser::Same_type_requirementContext * /*ctx*/) override { }
  virtual void exitSame_type_requirement(Swift5Parser::Same_type_requirementContext * /*ctx*/) override { }

  virtual void enterGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext * /*ctx*/) override { }

  virtual void enterGeneric_argument_list(Swift5Parser::Generic_argument_listContext * /*ctx*/) override { }
  virtual void exitGeneric_argument_list(Swift5Parser::Generic_argument_listContext * /*ctx*/) override { }

  virtual void enterGeneric_argument(Swift5Parser::Generic_argumentContext * /*ctx*/) override { }
  virtual void exitGeneric_argument(Swift5Parser::Generic_argumentContext * /*ctx*/) override { }

  virtual void enterDeclaration(Swift5Parser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(Swift5Parser::DeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarations(Swift5Parser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(Swift5Parser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterTop_level_declaration(Swift5Parser::Top_level_declarationContext * /*ctx*/) override { }
  virtual void exitTop_level_declaration(Swift5Parser::Top_level_declarationContext * /*ctx*/) override { }

  virtual void enterCode_block(Swift5Parser::Code_blockContext * /*ctx*/) override { }
  virtual void exitCode_block(Swift5Parser::Code_blockContext * /*ctx*/) override { }

  virtual void enterImport_declaration(Swift5Parser::Import_declarationContext * /*ctx*/) override { }
  virtual void exitImport_declaration(Swift5Parser::Import_declarationContext * /*ctx*/) override { }

  virtual void enterImport_kind(Swift5Parser::Import_kindContext * /*ctx*/) override { }
  virtual void exitImport_kind(Swift5Parser::Import_kindContext * /*ctx*/) override { }

  virtual void enterImport_path(Swift5Parser::Import_pathContext * /*ctx*/) override { }
  virtual void exitImport_path(Swift5Parser::Import_pathContext * /*ctx*/) override { }

  virtual void enterImport_path_identifier(Swift5Parser::Import_path_identifierContext * /*ctx*/) override { }
  virtual void exitImport_path_identifier(Swift5Parser::Import_path_identifierContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(Swift5Parser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(Swift5Parser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext * /*ctx*/) override { }
  virtual void exitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext * /*ctx*/) override { }

  virtual void enterPattern_initializer(Swift5Parser::Pattern_initializerContext * /*ctx*/) override { }
  virtual void exitPattern_initializer(Swift5Parser::Pattern_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer(Swift5Parser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(Swift5Parser::InitializerContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(Swift5Parser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(Swift5Parser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterVariable_declaration_head(Swift5Parser::Variable_declaration_headContext * /*ctx*/) override { }
  virtual void exitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext * /*ctx*/) override { }

  virtual void enterVariable_name(Swift5Parser::Variable_nameContext * /*ctx*/) override { }
  virtual void exitVariable_name(Swift5Parser::Variable_nameContext * /*ctx*/) override { }

  virtual void enterGetter_setter_block(Swift5Parser::Getter_setter_blockContext * /*ctx*/) override { }
  virtual void exitGetter_setter_block(Swift5Parser::Getter_setter_blockContext * /*ctx*/) override { }

  virtual void enterGetter_clause(Swift5Parser::Getter_clauseContext * /*ctx*/) override { }
  virtual void exitGetter_clause(Swift5Parser::Getter_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_clause(Swift5Parser::Setter_clauseContext * /*ctx*/) override { }
  virtual void exitSetter_clause(Swift5Parser::Setter_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_name(Swift5Parser::Setter_nameContext * /*ctx*/) override { }
  virtual void exitSetter_name(Swift5Parser::Setter_nameContext * /*ctx*/) override { }

  virtual void enterGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext * /*ctx*/) override { }
  virtual void exitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext * /*ctx*/) override { }

  virtual void enterGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext * /*ctx*/) override { }
  virtual void exitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext * /*ctx*/) override { }
  virtual void exitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext * /*ctx*/) override { }

  virtual void enterWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext * /*ctx*/) override { }
  virtual void exitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext * /*ctx*/) override { }

  virtual void enterWillSet_clause(Swift5Parser::WillSet_clauseContext * /*ctx*/) override { }
  virtual void exitWillSet_clause(Swift5Parser::WillSet_clauseContext * /*ctx*/) override { }

  virtual void enterDidSet_clause(Swift5Parser::DidSet_clauseContext * /*ctx*/) override { }
  virtual void exitDidSet_clause(Swift5Parser::DidSet_clauseContext * /*ctx*/) override { }

  virtual void enterTypealias_declaration(Swift5Parser::Typealias_declarationContext * /*ctx*/) override { }
  virtual void exitTypealias_declaration(Swift5Parser::Typealias_declarationContext * /*ctx*/) override { }

  virtual void enterTypealias_name(Swift5Parser::Typealias_nameContext * /*ctx*/) override { }
  virtual void exitTypealias_name(Swift5Parser::Typealias_nameContext * /*ctx*/) override { }

  virtual void enterTypealias_assignment(Swift5Parser::Typealias_assignmentContext * /*ctx*/) override { }
  virtual void exitTypealias_assignment(Swift5Parser::Typealias_assignmentContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(Swift5Parser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(Swift5Parser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_head(Swift5Parser::Function_headContext * /*ctx*/) override { }
  virtual void exitFunction_head(Swift5Parser::Function_headContext * /*ctx*/) override { }

  virtual void enterFunction_name(Swift5Parser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(Swift5Parser::Function_nameContext * /*ctx*/) override { }

  virtual void enterFunction_signature(Swift5Parser::Function_signatureContext * /*ctx*/) override { }
  virtual void exitFunction_signature(Swift5Parser::Function_signatureContext * /*ctx*/) override { }

  virtual void enterFunction_result(Swift5Parser::Function_resultContext * /*ctx*/) override { }
  virtual void exitFunction_result(Swift5Parser::Function_resultContext * /*ctx*/) override { }

  virtual void enterFunction_body(Swift5Parser::Function_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_body(Swift5Parser::Function_bodyContext * /*ctx*/) override { }

  virtual void enterParameter_clause(Swift5Parser::Parameter_clauseContext * /*ctx*/) override { }
  virtual void exitParameter_clause(Swift5Parser::Parameter_clauseContext * /*ctx*/) override { }

  virtual void enterParameter_list(Swift5Parser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(Swift5Parser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParameter(Swift5Parser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(Swift5Parser::ParameterContext * /*ctx*/) override { }

  virtual void enterExternal_parameter_name(Swift5Parser::External_parameter_nameContext * /*ctx*/) override { }
  virtual void exitExternal_parameter_name(Swift5Parser::External_parameter_nameContext * /*ctx*/) override { }

  virtual void enterLocal_parameter_name(Swift5Parser::Local_parameter_nameContext * /*ctx*/) override { }
  virtual void exitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext * /*ctx*/) override { }

  virtual void enterDefault_argument_clause(Swift5Parser::Default_argument_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext * /*ctx*/) override { }

  virtual void enterEnum_declaration(Swift5Parser::Enum_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_declaration(Swift5Parser::Enum_declarationContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum(Swift5Parser::Union_style_enumContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum(Swift5Parser::Union_style_enumContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext * /*ctx*/) override { }

  virtual void enterEnum_name(Swift5Parser::Enum_nameContext * /*ctx*/) override { }
  virtual void exitEnum_name(Swift5Parser::Enum_nameContext * /*ctx*/) override { }

  virtual void enterEnum_case_name(Swift5Parser::Enum_case_nameContext * /*ctx*/) override { }
  virtual void exitEnum_case_name(Swift5Parser::Enum_case_nameContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext * /*ctx*/) override { }

  virtual void enterRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext * /*ctx*/) override { }
  virtual void exitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext * /*ctx*/) override { }

  virtual void enterRaw_value_literal(Swift5Parser::Raw_value_literalContext * /*ctx*/) override { }
  virtual void exitRaw_value_literal(Swift5Parser::Raw_value_literalContext * /*ctx*/) override { }

  virtual void enterStruct_declaration(Swift5Parser::Struct_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_declaration(Swift5Parser::Struct_declarationContext * /*ctx*/) override { }

  virtual void enterStruct_name(Swift5Parser::Struct_nameContext * /*ctx*/) override { }
  virtual void exitStruct_name(Swift5Parser::Struct_nameContext * /*ctx*/) override { }

  virtual void enterStruct_body(Swift5Parser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(Swift5Parser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_members(Swift5Parser::Struct_membersContext * /*ctx*/) override { }
  virtual void exitStruct_members(Swift5Parser::Struct_membersContext * /*ctx*/) override { }

  virtual void enterStruct_member(Swift5Parser::Struct_memberContext * /*ctx*/) override { }
  virtual void exitStruct_member(Swift5Parser::Struct_memberContext * /*ctx*/) override { }

  virtual void enterClass_declaration(Swift5Parser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(Swift5Parser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterClass_name(Swift5Parser::Class_nameContext * /*ctx*/) override { }
  virtual void exitClass_name(Swift5Parser::Class_nameContext * /*ctx*/) override { }

  virtual void enterClass_body(Swift5Parser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(Swift5Parser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_members(Swift5Parser::Class_membersContext * /*ctx*/) override { }
  virtual void exitClass_members(Swift5Parser::Class_membersContext * /*ctx*/) override { }

  virtual void enterClass_member(Swift5Parser::Class_memberContext * /*ctx*/) override { }
  virtual void exitClass_member(Swift5Parser::Class_memberContext * /*ctx*/) override { }

  virtual void enterProtocol_declaration(Swift5Parser::Protocol_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_declaration(Swift5Parser::Protocol_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_name(Swift5Parser::Protocol_nameContext * /*ctx*/) override { }
  virtual void exitProtocol_name(Swift5Parser::Protocol_nameContext * /*ctx*/) override { }

  virtual void enterProtocol_body(Swift5Parser::Protocol_bodyContext * /*ctx*/) override { }
  virtual void exitProtocol_body(Swift5Parser::Protocol_bodyContext * /*ctx*/) override { }

  virtual void enterProtocol_members(Swift5Parser::Protocol_membersContext * /*ctx*/) override { }
  virtual void exitProtocol_members(Swift5Parser::Protocol_membersContext * /*ctx*/) override { }

  virtual void enterProtocol_member(Swift5Parser::Protocol_memberContext * /*ctx*/) override { }
  virtual void exitProtocol_member(Swift5Parser::Protocol_memberContext * /*ctx*/) override { }

  virtual void enterProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext * /*ctx*/) override { }

  virtual void enterInitializer_declaration(Swift5Parser::Initializer_declarationContext * /*ctx*/) override { }
  virtual void exitInitializer_declaration(Swift5Parser::Initializer_declarationContext * /*ctx*/) override { }

  virtual void enterInitializer_head(Swift5Parser::Initializer_headContext * /*ctx*/) override { }
  virtual void exitInitializer_head(Swift5Parser::Initializer_headContext * /*ctx*/) override { }

  virtual void enterInitializer_body(Swift5Parser::Initializer_bodyContext * /*ctx*/) override { }
  virtual void exitInitializer_body(Swift5Parser::Initializer_bodyContext * /*ctx*/) override { }

  virtual void enterDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext * /*ctx*/) override { }
  virtual void exitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext * /*ctx*/) override { }

  virtual void enterExtension_declaration(Swift5Parser::Extension_declarationContext * /*ctx*/) override { }
  virtual void exitExtension_declaration(Swift5Parser::Extension_declarationContext * /*ctx*/) override { }

  virtual void enterExtension_body(Swift5Parser::Extension_bodyContext * /*ctx*/) override { }
  virtual void exitExtension_body(Swift5Parser::Extension_bodyContext * /*ctx*/) override { }

  virtual void enterExtension_members(Swift5Parser::Extension_membersContext * /*ctx*/) override { }
  virtual void exitExtension_members(Swift5Parser::Extension_membersContext * /*ctx*/) override { }

  virtual void enterExtension_member(Swift5Parser::Extension_memberContext * /*ctx*/) override { }
  virtual void exitExtension_member(Swift5Parser::Extension_memberContext * /*ctx*/) override { }

  virtual void enterSubscript_declaration(Swift5Parser::Subscript_declarationContext * /*ctx*/) override { }
  virtual void exitSubscript_declaration(Swift5Parser::Subscript_declarationContext * /*ctx*/) override { }

  virtual void enterSubscript_head(Swift5Parser::Subscript_headContext * /*ctx*/) override { }
  virtual void exitSubscript_head(Swift5Parser::Subscript_headContext * /*ctx*/) override { }

  virtual void enterSubscript_result(Swift5Parser::Subscript_resultContext * /*ctx*/) override { }
  virtual void exitSubscript_result(Swift5Parser::Subscript_resultContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(Swift5Parser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(Swift5Parser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterInfix_operator_group(Swift5Parser::Infix_operator_groupContext * /*ctx*/) override { }
  virtual void exitInfix_operator_group(Swift5Parser::Infix_operator_groupContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_names(Swift5Parser::Precedence_group_namesContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_name(Swift5Parser::Precedence_group_nameContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext * /*ctx*/) override { }

  virtual void enterDeclaration_modifier(Swift5Parser::Declaration_modifierContext * /*ctx*/) override { }
  virtual void exitDeclaration_modifier(Swift5Parser::Declaration_modifierContext * /*ctx*/) override { }

  virtual void enterDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext * /*ctx*/) override { }
  virtual void exitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext * /*ctx*/) override { }

  virtual void enterAccess_level_modifier(Swift5Parser::Access_level_modifierContext * /*ctx*/) override { }
  virtual void exitAccess_level_modifier(Swift5Parser::Access_level_modifierContext * /*ctx*/) override { }

  virtual void enterMutation_modifier(Swift5Parser::Mutation_modifierContext * /*ctx*/) override { }
  virtual void exitMutation_modifier(Swift5Parser::Mutation_modifierContext * /*ctx*/) override { }

  virtual void enterPattern(Swift5Parser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(Swift5Parser::PatternContext * /*ctx*/) override { }

  virtual void enterWildcard_pattern(Swift5Parser::Wildcard_patternContext * /*ctx*/) override { }
  virtual void exitWildcard_pattern(Swift5Parser::Wildcard_patternContext * /*ctx*/) override { }

  virtual void enterIdentifier_pattern(Swift5Parser::Identifier_patternContext * /*ctx*/) override { }
  virtual void exitIdentifier_pattern(Swift5Parser::Identifier_patternContext * /*ctx*/) override { }

  virtual void enterValue_binding_pattern(Swift5Parser::Value_binding_patternContext * /*ctx*/) override { }
  virtual void exitValue_binding_pattern(Swift5Parser::Value_binding_patternContext * /*ctx*/) override { }

  virtual void enterTuple_pattern(Swift5Parser::Tuple_patternContext * /*ctx*/) override { }
  virtual void exitTuple_pattern(Swift5Parser::Tuple_patternContext * /*ctx*/) override { }

  virtual void enterTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext * /*ctx*/) override { }
  virtual void exitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext * /*ctx*/) override { }

  virtual void enterEnum_case_pattern(Swift5Parser::Enum_case_patternContext * /*ctx*/) override { }
  virtual void exitEnum_case_pattern(Swift5Parser::Enum_case_patternContext * /*ctx*/) override { }

  virtual void enterOptional_pattern(Swift5Parser::Optional_patternContext * /*ctx*/) override { }
  virtual void exitOptional_pattern(Swift5Parser::Optional_patternContext * /*ctx*/) override { }

  virtual void enterExpression_pattern(Swift5Parser::Expression_patternContext * /*ctx*/) override { }
  virtual void exitExpression_pattern(Swift5Parser::Expression_patternContext * /*ctx*/) override { }

  virtual void enterAttribute(Swift5Parser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(Swift5Parser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_name(Swift5Parser::Attribute_nameContext * /*ctx*/) override { }
  virtual void exitAttribute_name(Swift5Parser::Attribute_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext * /*ctx*/) override { }
  virtual void exitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext * /*ctx*/) override { }

  virtual void enterAttributes(Swift5Parser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(Swift5Parser::AttributesContext * /*ctx*/) override { }

  virtual void enterBalanced_tokens(Swift5Parser::Balanced_tokensContext * /*ctx*/) override { }
  virtual void exitBalanced_tokens(Swift5Parser::Balanced_tokensContext * /*ctx*/) override { }

  virtual void enterBalanced_token(Swift5Parser::Balanced_tokenContext * /*ctx*/) override { }
  virtual void exitBalanced_token(Swift5Parser::Balanced_tokenContext * /*ctx*/) override { }

  virtual void enterBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext * /*ctx*/) override { }
  virtual void exitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext * /*ctx*/) override { }

  virtual void enterExpression(Swift5Parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(Swift5Parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExpression_list(Swift5Parser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(Swift5Parser::Expression_listContext * /*ctx*/) override { }

  virtual void enterPrefix_expression(Swift5Parser::Prefix_expressionContext * /*ctx*/) override { }
  virtual void exitPrefix_expression(Swift5Parser::Prefix_expressionContext * /*ctx*/) override { }

  virtual void enterIn_out_expression(Swift5Parser::In_out_expressionContext * /*ctx*/) override { }
  virtual void exitIn_out_expression(Swift5Parser::In_out_expressionContext * /*ctx*/) override { }

  virtual void enterTry_operator(Swift5Parser::Try_operatorContext * /*ctx*/) override { }
  virtual void exitTry_operator(Swift5Parser::Try_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_expression(Swift5Parser::Binary_expressionContext * /*ctx*/) override { }
  virtual void exitBinary_expression(Swift5Parser::Binary_expressionContext * /*ctx*/) override { }

  virtual void enterBinary_expressions(Swift5Parser::Binary_expressionsContext * /*ctx*/) override { }
  virtual void exitBinary_expressions(Swift5Parser::Binary_expressionsContext * /*ctx*/) override { }

  virtual void enterConditional_operator(Swift5Parser::Conditional_operatorContext * /*ctx*/) override { }
  virtual void exitConditional_operator(Swift5Parser::Conditional_operatorContext * /*ctx*/) override { }

  virtual void enterType_casting_operator(Swift5Parser::Type_casting_operatorContext * /*ctx*/) override { }
  virtual void exitType_casting_operator(Swift5Parser::Type_casting_operatorContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(Swift5Parser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(Swift5Parser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterUnqualified_name(Swift5Parser::Unqualified_nameContext * /*ctx*/) override { }
  virtual void exitUnqualified_name(Swift5Parser::Unqualified_nameContext * /*ctx*/) override { }

  virtual void enterLiteral_expression(Swift5Parser::Literal_expressionContext * /*ctx*/) override { }
  virtual void exitLiteral_expression(Swift5Parser::Literal_expressionContext * /*ctx*/) override { }

  virtual void enterArray_literal(Swift5Parser::Array_literalContext * /*ctx*/) override { }
  virtual void exitArray_literal(Swift5Parser::Array_literalContext * /*ctx*/) override { }

  virtual void enterArray_literal_items(Swift5Parser::Array_literal_itemsContext * /*ctx*/) override { }
  virtual void exitArray_literal_items(Swift5Parser::Array_literal_itemsContext * /*ctx*/) override { }

  virtual void enterArray_literal_item(Swift5Parser::Array_literal_itemContext * /*ctx*/) override { }
  virtual void exitArray_literal_item(Swift5Parser::Array_literal_itemContext * /*ctx*/) override { }

  virtual void enterDictionary_literal(Swift5Parser::Dictionary_literalContext * /*ctx*/) override { }
  virtual void exitDictionary_literal(Swift5Parser::Dictionary_literalContext * /*ctx*/) override { }

  virtual void enterDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext * /*ctx*/) override { }
  virtual void exitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext * /*ctx*/) override { }

  virtual void enterDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext * /*ctx*/) override { }
  virtual void exitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext * /*ctx*/) override { }

  virtual void enterPlayground_literal(Swift5Parser::Playground_literalContext * /*ctx*/) override { }
  virtual void exitPlayground_literal(Swift5Parser::Playground_literalContext * /*ctx*/) override { }

  virtual void enterSelf_pure_expression(Swift5Parser::Self_pure_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_pure_expression(Swift5Parser::Self_pure_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_method_expression(Swift5Parser::Self_method_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_method_expression(Swift5Parser::Self_method_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext * /*ctx*/) override { }

  virtual void enterClosure_expression(Swift5Parser::Closure_expressionContext * /*ctx*/) override { }
  virtual void exitClosure_expression(Swift5Parser::Closure_expressionContext * /*ctx*/) override { }

  virtual void enterClosure_signature(Swift5Parser::Closure_signatureContext * /*ctx*/) override { }
  virtual void exitClosure_signature(Swift5Parser::Closure_signatureContext * /*ctx*/) override { }

  virtual void enterClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext * /*ctx*/) override { }
  virtual void exitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext * /*ctx*/) override { }

  virtual void enterClosure_parameter_list(Swift5Parser::Closure_parameter_listContext * /*ctx*/) override { }
  virtual void exitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext * /*ctx*/) override { }

  virtual void enterClosure_parameter(Swift5Parser::Closure_parameterContext * /*ctx*/) override { }
  virtual void exitClosure_parameter(Swift5Parser::Closure_parameterContext * /*ctx*/) override { }

  virtual void enterCapture_list(Swift5Parser::Capture_listContext * /*ctx*/) override { }
  virtual void exitCapture_list(Swift5Parser::Capture_listContext * /*ctx*/) override { }

  virtual void enterCapture_list_items(Swift5Parser::Capture_list_itemsContext * /*ctx*/) override { }
  virtual void exitCapture_list_items(Swift5Parser::Capture_list_itemsContext * /*ctx*/) override { }

  virtual void enterCapture_list_item(Swift5Parser::Capture_list_itemContext * /*ctx*/) override { }
  virtual void exitCapture_list_item(Swift5Parser::Capture_list_itemContext * /*ctx*/) override { }

  virtual void enterCapture_specifier(Swift5Parser::Capture_specifierContext * /*ctx*/) override { }
  virtual void exitCapture_specifier(Swift5Parser::Capture_specifierContext * /*ctx*/) override { }

  virtual void enterImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext * /*ctx*/) override { }
  virtual void exitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext * /*ctx*/) override { }

  virtual void enterParenthesized_operator(Swift5Parser::Parenthesized_operatorContext * /*ctx*/) override { }
  virtual void exitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext * /*ctx*/) override { }

  virtual void enterParenthesized_expression(Swift5Parser::Parenthesized_expressionContext * /*ctx*/) override { }
  virtual void exitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext * /*ctx*/) override { }

  virtual void enterTuple_expression(Swift5Parser::Tuple_expressionContext * /*ctx*/) override { }
  virtual void exitTuple_expression(Swift5Parser::Tuple_expressionContext * /*ctx*/) override { }

  virtual void enterTuple_element_list(Swift5Parser::Tuple_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_element_list(Swift5Parser::Tuple_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_element(Swift5Parser::Tuple_elementContext * /*ctx*/) override { }
  virtual void exitTuple_element(Swift5Parser::Tuple_elementContext * /*ctx*/) override { }

  virtual void enterWildcard_expression(Swift5Parser::Wildcard_expressionContext * /*ctx*/) override { }
  virtual void exitWildcard_expression(Swift5Parser::Wildcard_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_expression(Swift5Parser::Key_path_expressionContext * /*ctx*/) override { }
  virtual void exitKey_path_expression(Swift5Parser::Key_path_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_components(Swift5Parser::Key_path_componentsContext * /*ctx*/) override { }
  virtual void exitKey_path_components(Swift5Parser::Key_path_componentsContext * /*ctx*/) override { }

  virtual void enterKey_path_component(Swift5Parser::Key_path_componentContext * /*ctx*/) override { }
  virtual void exitKey_path_component(Swift5Parser::Key_path_componentContext * /*ctx*/) override { }

  virtual void enterKey_path_postfixes(Swift5Parser::Key_path_postfixesContext * /*ctx*/) override { }
  virtual void exitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext * /*ctx*/) override { }

  virtual void enterKey_path_postfix(Swift5Parser::Key_path_postfixContext * /*ctx*/) override { }
  virtual void exitKey_path_postfix(Swift5Parser::Key_path_postfixContext * /*ctx*/) override { }

  virtual void enterSelector_expression(Swift5Parser::Selector_expressionContext * /*ctx*/) override { }
  virtual void exitSelector_expression(Swift5Parser::Selector_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext * /*ctx*/) override { }
  virtual void exitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext * /*ctx*/) override { }

  virtual void enterPostfix_expression(Swift5Parser::Postfix_expressionContext * /*ctx*/) override { }
  virtual void exitPostfix_expression(Swift5Parser::Postfix_expressionContext * /*ctx*/) override { }

  virtual void enterFunction_call_suffix(Swift5Parser::Function_call_suffixContext * /*ctx*/) override { }
  virtual void exitFunction_call_suffix(Swift5Parser::Function_call_suffixContext * /*ctx*/) override { }

  virtual void enterInitializer_suffix(Swift5Parser::Initializer_suffixContext * /*ctx*/) override { }
  virtual void exitInitializer_suffix(Swift5Parser::Initializer_suffixContext * /*ctx*/) override { }

  virtual void enterExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext * /*ctx*/) override { }
  virtual void exitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext * /*ctx*/) override { }

  virtual void enterPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext * /*ctx*/) override { }
  virtual void exitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext * /*ctx*/) override { }

  virtual void enterSubscript_suffix(Swift5Parser::Subscript_suffixContext * /*ctx*/) override { }
  virtual void exitSubscript_suffix(Swift5Parser::Subscript_suffixContext * /*ctx*/) override { }

  virtual void enterForced_value_suffix(Swift5Parser::Forced_value_suffixContext * /*ctx*/) override { }
  virtual void exitForced_value_suffix(Swift5Parser::Forced_value_suffixContext * /*ctx*/) override { }

  virtual void enterOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext * /*ctx*/) override { }
  virtual void exitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument(Swift5Parser::Function_call_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument(Swift5Parser::Function_call_argumentContext * /*ctx*/) override { }

  virtual void enterTrailing_closures(Swift5Parser::Trailing_closuresContext * /*ctx*/) override { }
  virtual void exitTrailing_closures(Swift5Parser::Trailing_closuresContext * /*ctx*/) override { }

  virtual void enterLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext * /*ctx*/) override { }
  virtual void exitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext * /*ctx*/) override { }

  virtual void enterLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext * /*ctx*/) override { }
  virtual void exitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext * /*ctx*/) override { }

  virtual void enterArgument_names(Swift5Parser::Argument_namesContext * /*ctx*/) override { }
  virtual void exitArgument_names(Swift5Parser::Argument_namesContext * /*ctx*/) override { }

  virtual void enterArgument_name(Swift5Parser::Argument_nameContext * /*ctx*/) override { }
  virtual void exitArgument_name(Swift5Parser::Argument_nameContext * /*ctx*/) override { }

  virtual void enterType(Swift5Parser::TypeContext * /*ctx*/) override { }
  virtual void exitType(Swift5Parser::TypeContext * /*ctx*/) override { }

  virtual void enterType_annotation(Swift5Parser::Type_annotationContext * /*ctx*/) override { }
  virtual void exitType_annotation(Swift5Parser::Type_annotationContext * /*ctx*/) override { }

  virtual void enterType_identifier(Swift5Parser::Type_identifierContext * /*ctx*/) override { }
  virtual void exitType_identifier(Swift5Parser::Type_identifierContext * /*ctx*/) override { }

  virtual void enterType_name(Swift5Parser::Type_nameContext * /*ctx*/) override { }
  virtual void exitType_name(Swift5Parser::Type_nameContext * /*ctx*/) override { }

  virtual void enterTuple_type(Swift5Parser::Tuple_typeContext * /*ctx*/) override { }
  virtual void exitTuple_type(Swift5Parser::Tuple_typeContext * /*ctx*/) override { }

  virtual void enterTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_type_element(Swift5Parser::Tuple_type_elementContext * /*ctx*/) override { }
  virtual void exitTuple_type_element(Swift5Parser::Tuple_type_elementContext * /*ctx*/) override { }

  virtual void enterElement_name(Swift5Parser::Element_nameContext * /*ctx*/) override { }
  virtual void exitElement_name(Swift5Parser::Element_nameContext * /*ctx*/) override { }

  virtual void enterFunction_type(Swift5Parser::Function_typeContext * /*ctx*/) override { }
  virtual void exitFunction_type(Swift5Parser::Function_typeContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument(Swift5Parser::Function_type_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument(Swift5Parser::Function_type_argumentContext * /*ctx*/) override { }

  virtual void enterArgument_label(Swift5Parser::Argument_labelContext * /*ctx*/) override { }
  virtual void exitArgument_label(Swift5Parser::Argument_labelContext * /*ctx*/) override { }

  virtual void enterArray_type(Swift5Parser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(Swift5Parser::Array_typeContext * /*ctx*/) override { }

  virtual void enterDictionary_type(Swift5Parser::Dictionary_typeContext * /*ctx*/) override { }
  virtual void exitDictionary_type(Swift5Parser::Dictionary_typeContext * /*ctx*/) override { }

  virtual void enterProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext * /*ctx*/) override { }
  virtual void exitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext * /*ctx*/) override { }

  virtual void enterTrailing_composition_and(Swift5Parser::Trailing_composition_andContext * /*ctx*/) override { }
  virtual void exitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext * /*ctx*/) override { }

  virtual void enterOpaque_type(Swift5Parser::Opaque_typeContext * /*ctx*/) override { }
  virtual void exitOpaque_type(Swift5Parser::Opaque_typeContext * /*ctx*/) override { }

  virtual void enterAny_type(Swift5Parser::Any_typeContext * /*ctx*/) override { }
  virtual void exitAny_type(Swift5Parser::Any_typeContext * /*ctx*/) override { }

  virtual void enterSelf_type(Swift5Parser::Self_typeContext * /*ctx*/) override { }
  virtual void exitSelf_type(Swift5Parser::Self_typeContext * /*ctx*/) override { }

  virtual void enterType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext * /*ctx*/) override { }
  virtual void exitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext * /*ctx*/) override { }

  virtual void enterType_inheritance_list(Swift5Parser::Type_inheritance_listContext * /*ctx*/) override { }
  virtual void exitType_inheritance_list(Swift5Parser::Type_inheritance_listContext * /*ctx*/) override { }

  virtual void enterIdentifier(Swift5Parser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(Swift5Parser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifier_list(Swift5Parser::Identifier_listContext * /*ctx*/) override { }
  virtual void exitIdentifier_list(Swift5Parser::Identifier_listContext * /*ctx*/) override { }

  virtual void enterKeyword(Swift5Parser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(Swift5Parser::KeywordContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(Swift5Parser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(Swift5Parser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext * /*ctx*/) override { }
  virtual void exitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_L(Swift5Parser::Compilation_condition_LContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext * /*ctx*/) override { }

  virtual void enterArrow_operator(Swift5Parser::Arrow_operatorContext * /*ctx*/) override { }
  virtual void exitArrow_operator(Swift5Parser::Arrow_operatorContext * /*ctx*/) override { }

  virtual void enterRange_operator(Swift5Parser::Range_operatorContext * /*ctx*/) override { }
  virtual void exitRange_operator(Swift5Parser::Range_operatorContext * /*ctx*/) override { }

  virtual void enterSame_type_equals(Swift5Parser::Same_type_equalsContext * /*ctx*/) override { }
  virtual void exitSame_type_equals(Swift5Parser::Same_type_equalsContext * /*ctx*/) override { }

  virtual void enterBinary_operator(Swift5Parser::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(Swift5Parser::Binary_operatorContext * /*ctx*/) override { }

  virtual void enterPrefix_operator(Swift5Parser::Prefix_operatorContext * /*ctx*/) override { }
  virtual void exitPrefix_operator(Swift5Parser::Prefix_operatorContext * /*ctx*/) override { }

  virtual void enterPostfix_operator(Swift5Parser::Postfix_operatorContext * /*ctx*/) override { }
  virtual void exitPostfix_operator(Swift5Parser::Postfix_operatorContext * /*ctx*/) override { }

  virtual void enterOperator(Swift5Parser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(Swift5Parser::OperatorContext * /*ctx*/) override { }

  virtual void enterOperator_head(Swift5Parser::Operator_headContext * /*ctx*/) override { }
  virtual void exitOperator_head(Swift5Parser::Operator_headContext * /*ctx*/) override { }

  virtual void enterOperator_character(Swift5Parser::Operator_characterContext * /*ctx*/) override { }
  virtual void exitOperator_character(Swift5Parser::Operator_characterContext * /*ctx*/) override { }

  virtual void enterOperator_characters(Swift5Parser::Operator_charactersContext * /*ctx*/) override { }
  virtual void exitOperator_characters(Swift5Parser::Operator_charactersContext * /*ctx*/) override { }

  virtual void enterDot_operator_head(Swift5Parser::Dot_operator_headContext * /*ctx*/) override { }
  virtual void exitDot_operator_head(Swift5Parser::Dot_operator_headContext * /*ctx*/) override { }

  virtual void enterDot_operator_character(Swift5Parser::Dot_operator_characterContext * /*ctx*/) override { }
  virtual void exitDot_operator_character(Swift5Parser::Dot_operator_characterContext * /*ctx*/) override { }

  virtual void enterDot_operator_characters(Swift5Parser::Dot_operator_charactersContext * /*ctx*/) override { }
  virtual void exitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext * /*ctx*/) override { }

  virtual void enterLiteral(Swift5Parser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(Swift5Parser::LiteralContext * /*ctx*/) override { }

  virtual void enterNumeric_literal(Swift5Parser::Numeric_literalContext * /*ctx*/) override { }
  virtual void exitNumeric_literal(Swift5Parser::Numeric_literalContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(Swift5Parser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(Swift5Parser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterNil_literal(Swift5Parser::Nil_literalContext * /*ctx*/) override { }
  virtual void exitNil_literal(Swift5Parser::Nil_literalContext * /*ctx*/) override { }

  virtual void enterInteger_literal(Swift5Parser::Integer_literalContext * /*ctx*/) override { }
  virtual void exitInteger_literal(Swift5Parser::Integer_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(Swift5Parser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(Swift5Parser::String_literalContext * /*ctx*/) override { }

  virtual void enterExtended_string_literal(Swift5Parser::Extended_string_literalContext * /*ctx*/) override { }
  virtual void exitExtended_string_literal(Swift5Parser::Extended_string_literalContext * /*ctx*/) override { }

  virtual void enterStatic_string_literal(Swift5Parser::Static_string_literalContext * /*ctx*/) override { }
  virtual void exitStatic_string_literal(Swift5Parser::Static_string_literalContext * /*ctx*/) override { }

  virtual void enterInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext * /*ctx*/) override { }
  virtual void exitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

