
// Generated from Solidity.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SolidityParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SolidityParser.
 */
class  SolidityListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSourceUnit(SolidityParser::SourceUnitContext *ctx) = 0;
  virtual void exitSourceUnit(SolidityParser::SourceUnitContext *ctx) = 0;

  virtual void enterPragmaDirective(SolidityParser::PragmaDirectiveContext *ctx) = 0;
  virtual void exitPragmaDirective(SolidityParser::PragmaDirectiveContext *ctx) = 0;

  virtual void enterPragmaName(SolidityParser::PragmaNameContext *ctx) = 0;
  virtual void exitPragmaName(SolidityParser::PragmaNameContext *ctx) = 0;

  virtual void enterPragmaValue(SolidityParser::PragmaValueContext *ctx) = 0;
  virtual void exitPragmaValue(SolidityParser::PragmaValueContext *ctx) = 0;

  virtual void enterVersion(SolidityParser::VersionContext *ctx) = 0;
  virtual void exitVersion(SolidityParser::VersionContext *ctx) = 0;

  virtual void enterVersionConstraint(SolidityParser::VersionConstraintContext *ctx) = 0;
  virtual void exitVersionConstraint(SolidityParser::VersionConstraintContext *ctx) = 0;

  virtual void enterVersionOperator(SolidityParser::VersionOperatorContext *ctx) = 0;
  virtual void exitVersionOperator(SolidityParser::VersionOperatorContext *ctx) = 0;

  virtual void enterImportDirective(SolidityParser::ImportDirectiveContext *ctx) = 0;
  virtual void exitImportDirective(SolidityParser::ImportDirectiveContext *ctx) = 0;

  virtual void enterImportDeclaration(SolidityParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(SolidityParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterContractDefinition(SolidityParser::ContractDefinitionContext *ctx) = 0;
  virtual void exitContractDefinition(SolidityParser::ContractDefinitionContext *ctx) = 0;

  virtual void enterInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext *ctx) = 0;
  virtual void exitInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext *ctx) = 0;

  virtual void enterContractPart(SolidityParser::ContractPartContext *ctx) = 0;
  virtual void exitContractPart(SolidityParser::ContractPartContext *ctx) = 0;

  virtual void enterStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext *ctx) = 0;
  virtual void exitStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext *ctx) = 0;

  virtual void enterOverrideSpecifier(SolidityParser::OverrideSpecifierContext *ctx) = 0;
  virtual void exitOverrideSpecifier(SolidityParser::OverrideSpecifierContext *ctx) = 0;

  virtual void enterUsingForDeclaration(SolidityParser::UsingForDeclarationContext *ctx) = 0;
  virtual void exitUsingForDeclaration(SolidityParser::UsingForDeclarationContext *ctx) = 0;

  virtual void enterStructDefinition(SolidityParser::StructDefinitionContext *ctx) = 0;
  virtual void exitStructDefinition(SolidityParser::StructDefinitionContext *ctx) = 0;

  virtual void enterModifierDefinition(SolidityParser::ModifierDefinitionContext *ctx) = 0;
  virtual void exitModifierDefinition(SolidityParser::ModifierDefinitionContext *ctx) = 0;

  virtual void enterFunctionDefinition(SolidityParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(SolidityParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionDescriptor(SolidityParser::FunctionDescriptorContext *ctx) = 0;
  virtual void exitFunctionDescriptor(SolidityParser::FunctionDescriptorContext *ctx) = 0;

  virtual void enterReturnParameters(SolidityParser::ReturnParametersContext *ctx) = 0;
  virtual void exitReturnParameters(SolidityParser::ReturnParametersContext *ctx) = 0;

  virtual void enterModifierList(SolidityParser::ModifierListContext *ctx) = 0;
  virtual void exitModifierList(SolidityParser::ModifierListContext *ctx) = 0;

  virtual void enterModifierInvocation(SolidityParser::ModifierInvocationContext *ctx) = 0;
  virtual void exitModifierInvocation(SolidityParser::ModifierInvocationContext *ctx) = 0;

  virtual void enterEventDefinition(SolidityParser::EventDefinitionContext *ctx) = 0;
  virtual void exitEventDefinition(SolidityParser::EventDefinitionContext *ctx) = 0;

  virtual void enterEnumDefinition(SolidityParser::EnumDefinitionContext *ctx) = 0;
  virtual void exitEnumDefinition(SolidityParser::EnumDefinitionContext *ctx) = 0;

  virtual void enterEnumValue(SolidityParser::EnumValueContext *ctx) = 0;
  virtual void exitEnumValue(SolidityParser::EnumValueContext *ctx) = 0;

  virtual void enterParameterList(SolidityParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(SolidityParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(SolidityParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(SolidityParser::ParameterContext *ctx) = 0;

  virtual void enterEventParameterList(SolidityParser::EventParameterListContext *ctx) = 0;
  virtual void exitEventParameterList(SolidityParser::EventParameterListContext *ctx) = 0;

  virtual void enterEventParameter(SolidityParser::EventParameterContext *ctx) = 0;
  virtual void exitEventParameter(SolidityParser::EventParameterContext *ctx) = 0;

  virtual void enterVariableDeclaration(SolidityParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(SolidityParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterTypeName(SolidityParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(SolidityParser::TypeNameContext *ctx) = 0;

  virtual void enterUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext *ctx) = 0;
  virtual void exitUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext *ctx) = 0;

  virtual void enterMapping(SolidityParser::MappingContext *ctx) = 0;
  virtual void exitMapping(SolidityParser::MappingContext *ctx) = 0;

  virtual void enterFunctionTypeName(SolidityParser::FunctionTypeNameContext *ctx) = 0;
  virtual void exitFunctionTypeName(SolidityParser::FunctionTypeNameContext *ctx) = 0;

  virtual void enterStorageLocation(SolidityParser::StorageLocationContext *ctx) = 0;
  virtual void exitStorageLocation(SolidityParser::StorageLocationContext *ctx) = 0;

  virtual void enterStateMutability(SolidityParser::StateMutabilityContext *ctx) = 0;
  virtual void exitStateMutability(SolidityParser::StateMutabilityContext *ctx) = 0;

  virtual void enterBlock(SolidityParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SolidityParser::BlockContext *ctx) = 0;

  virtual void enterStatement(SolidityParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SolidityParser::StatementContext *ctx) = 0;

  virtual void enterExpressionStatement(SolidityParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(SolidityParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(SolidityParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(SolidityParser::IfStatementContext *ctx) = 0;

  virtual void enterTryStatement(SolidityParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(SolidityParser::TryStatementContext *ctx) = 0;

  virtual void enterCatchClause(SolidityParser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(SolidityParser::CatchClauseContext *ctx) = 0;

  virtual void enterWhileStatement(SolidityParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(SolidityParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(SolidityParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(SolidityParser::ForStatementContext *ctx) = 0;

  virtual void enterSimpleStatement(SolidityParser::SimpleStatementContext *ctx) = 0;
  virtual void exitSimpleStatement(SolidityParser::SimpleStatementContext *ctx) = 0;

  virtual void enterInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext *ctx) = 0;
  virtual void exitInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext *ctx) = 0;

  virtual void enterDoWhileStatement(SolidityParser::DoWhileStatementContext *ctx) = 0;
  virtual void exitDoWhileStatement(SolidityParser::DoWhileStatementContext *ctx) = 0;

  virtual void enterContinueStatement(SolidityParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(SolidityParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBreakStatement(SolidityParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(SolidityParser::BreakStatementContext *ctx) = 0;

  virtual void enterReturnStatement(SolidityParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(SolidityParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(SolidityParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(SolidityParser::ThrowStatementContext *ctx) = 0;

  virtual void enterEmitStatement(SolidityParser::EmitStatementContext *ctx) = 0;
  virtual void exitEmitStatement(SolidityParser::EmitStatementContext *ctx) = 0;

  virtual void enterVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext *ctx) = 0;
  virtual void exitVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext *ctx) = 0;

  virtual void enterVariableDeclarationList(SolidityParser::VariableDeclarationListContext *ctx) = 0;
  virtual void exitVariableDeclarationList(SolidityParser::VariableDeclarationListContext *ctx) = 0;

  virtual void enterIdentifierList(SolidityParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(SolidityParser::IdentifierListContext *ctx) = 0;

  virtual void enterElementaryTypeName(SolidityParser::ElementaryTypeNameContext *ctx) = 0;
  virtual void exitElementaryTypeName(SolidityParser::ElementaryTypeNameContext *ctx) = 0;

  virtual void enterExpression(SolidityParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SolidityParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(SolidityParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(SolidityParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterExpressionList(SolidityParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(SolidityParser::ExpressionListContext *ctx) = 0;

  virtual void enterNameValueList(SolidityParser::NameValueListContext *ctx) = 0;
  virtual void exitNameValueList(SolidityParser::NameValueListContext *ctx) = 0;

  virtual void enterNameValue(SolidityParser::NameValueContext *ctx) = 0;
  virtual void exitNameValue(SolidityParser::NameValueContext *ctx) = 0;

  virtual void enterFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext *ctx) = 0;
  virtual void exitFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext *ctx) = 0;

  virtual void enterFunctionCall(SolidityParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(SolidityParser::FunctionCallContext *ctx) = 0;

  virtual void enterTupleExpression(SolidityParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(SolidityParser::TupleExpressionContext *ctx) = 0;

  virtual void enterTypeNameExpression(SolidityParser::TypeNameExpressionContext *ctx) = 0;
  virtual void exitTypeNameExpression(SolidityParser::TypeNameExpressionContext *ctx) = 0;

  virtual void enterAssemblyItem(SolidityParser::AssemblyItemContext *ctx) = 0;
  virtual void exitAssemblyItem(SolidityParser::AssemblyItemContext *ctx) = 0;

  virtual void enterAssemblyBlock(SolidityParser::AssemblyBlockContext *ctx) = 0;
  virtual void exitAssemblyBlock(SolidityParser::AssemblyBlockContext *ctx) = 0;

  virtual void enterAssemblyExpression(SolidityParser::AssemblyExpressionContext *ctx) = 0;
  virtual void exitAssemblyExpression(SolidityParser::AssemblyExpressionContext *ctx) = 0;

  virtual void enterAssemblyCall(SolidityParser::AssemblyCallContext *ctx) = 0;
  virtual void exitAssemblyCall(SolidityParser::AssemblyCallContext *ctx) = 0;

  virtual void enterAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext *ctx) = 0;
  virtual void exitAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext *ctx) = 0;

  virtual void enterAssemblyAssignment(SolidityParser::AssemblyAssignmentContext *ctx) = 0;
  virtual void exitAssemblyAssignment(SolidityParser::AssemblyAssignmentContext *ctx) = 0;

  virtual void enterAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext *ctx) = 0;
  virtual void exitAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext *ctx) = 0;

  virtual void enterAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext *ctx) = 0;
  virtual void exitAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext *ctx) = 0;

  virtual void enterLabelDefinition(SolidityParser::LabelDefinitionContext *ctx) = 0;
  virtual void exitLabelDefinition(SolidityParser::LabelDefinitionContext *ctx) = 0;

  virtual void enterAssemblySwitch(SolidityParser::AssemblySwitchContext *ctx) = 0;
  virtual void exitAssemblySwitch(SolidityParser::AssemblySwitchContext *ctx) = 0;

  virtual void enterAssemblyCase(SolidityParser::AssemblyCaseContext *ctx) = 0;
  virtual void exitAssemblyCase(SolidityParser::AssemblyCaseContext *ctx) = 0;

  virtual void enterAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext *ctx) = 0;
  virtual void exitAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext *ctx) = 0;

  virtual void enterAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext *ctx) = 0;
  virtual void exitAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext *ctx) = 0;

  virtual void enterAssemblyFor(SolidityParser::AssemblyForContext *ctx) = 0;
  virtual void exitAssemblyFor(SolidityParser::AssemblyForContext *ctx) = 0;

  virtual void enterAssemblyIf(SolidityParser::AssemblyIfContext *ctx) = 0;
  virtual void exitAssemblyIf(SolidityParser::AssemblyIfContext *ctx) = 0;

  virtual void enterAssemblyLiteral(SolidityParser::AssemblyLiteralContext *ctx) = 0;
  virtual void exitAssemblyLiteral(SolidityParser::AssemblyLiteralContext *ctx) = 0;

  virtual void enterAssemblyTypedVariableList(SolidityParser::AssemblyTypedVariableListContext *ctx) = 0;
  virtual void exitAssemblyTypedVariableList(SolidityParser::AssemblyTypedVariableListContext *ctx) = 0;

  virtual void enterAssemblyType(SolidityParser::AssemblyTypeContext *ctx) = 0;
  virtual void exitAssemblyType(SolidityParser::AssemblyTypeContext *ctx) = 0;

  virtual void enterSubAssembly(SolidityParser::SubAssemblyContext *ctx) = 0;
  virtual void exitSubAssembly(SolidityParser::SubAssemblyContext *ctx) = 0;

  virtual void enterNumberLiteral(SolidityParser::NumberLiteralContext *ctx) = 0;
  virtual void exitNumberLiteral(SolidityParser::NumberLiteralContext *ctx) = 0;

  virtual void enterIdentifier(SolidityParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(SolidityParser::IdentifierContext *ctx) = 0;

  virtual void enterHexLiteral(SolidityParser::HexLiteralContext *ctx) = 0;
  virtual void exitHexLiteral(SolidityParser::HexLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(SolidityParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(SolidityParser::StringLiteralContext *ctx) = 0;


};

