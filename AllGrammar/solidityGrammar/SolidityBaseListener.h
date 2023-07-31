
// Generated from Solidity.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SolidityListener.h"


/**
 * This class provides an empty implementation of SolidityListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SolidityBaseListener : public SolidityListener {
public:

  virtual void enterSourceUnit(SolidityParser::SourceUnitContext * /*ctx*/) override { }
  virtual void exitSourceUnit(SolidityParser::SourceUnitContext * /*ctx*/) override { }

  virtual void enterPragmaDirective(SolidityParser::PragmaDirectiveContext * /*ctx*/) override { }
  virtual void exitPragmaDirective(SolidityParser::PragmaDirectiveContext * /*ctx*/) override { }

  virtual void enterPragmaName(SolidityParser::PragmaNameContext * /*ctx*/) override { }
  virtual void exitPragmaName(SolidityParser::PragmaNameContext * /*ctx*/) override { }

  virtual void enterPragmaValue(SolidityParser::PragmaValueContext * /*ctx*/) override { }
  virtual void exitPragmaValue(SolidityParser::PragmaValueContext * /*ctx*/) override { }

  virtual void enterVersion(SolidityParser::VersionContext * /*ctx*/) override { }
  virtual void exitVersion(SolidityParser::VersionContext * /*ctx*/) override { }

  virtual void enterVersionConstraint(SolidityParser::VersionConstraintContext * /*ctx*/) override { }
  virtual void exitVersionConstraint(SolidityParser::VersionConstraintContext * /*ctx*/) override { }

  virtual void enterVersionOperator(SolidityParser::VersionOperatorContext * /*ctx*/) override { }
  virtual void exitVersionOperator(SolidityParser::VersionOperatorContext * /*ctx*/) override { }

  virtual void enterImportDirective(SolidityParser::ImportDirectiveContext * /*ctx*/) override { }
  virtual void exitImportDirective(SolidityParser::ImportDirectiveContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(SolidityParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(SolidityParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterContractDefinition(SolidityParser::ContractDefinitionContext * /*ctx*/) override { }
  virtual void exitContractDefinition(SolidityParser::ContractDefinitionContext * /*ctx*/) override { }

  virtual void enterInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext * /*ctx*/) override { }
  virtual void exitInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext * /*ctx*/) override { }

  virtual void enterContractPart(SolidityParser::ContractPartContext * /*ctx*/) override { }
  virtual void exitContractPart(SolidityParser::ContractPartContext * /*ctx*/) override { }

  virtual void enterStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterOverrideSpecifier(SolidityParser::OverrideSpecifierContext * /*ctx*/) override { }
  virtual void exitOverrideSpecifier(SolidityParser::OverrideSpecifierContext * /*ctx*/) override { }

  virtual void enterUsingForDeclaration(SolidityParser::UsingForDeclarationContext * /*ctx*/) override { }
  virtual void exitUsingForDeclaration(SolidityParser::UsingForDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDefinition(SolidityParser::StructDefinitionContext * /*ctx*/) override { }
  virtual void exitStructDefinition(SolidityParser::StructDefinitionContext * /*ctx*/) override { }

  virtual void enterModifierDefinition(SolidityParser::ModifierDefinitionContext * /*ctx*/) override { }
  virtual void exitModifierDefinition(SolidityParser::ModifierDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(SolidityParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(SolidityParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDescriptor(SolidityParser::FunctionDescriptorContext * /*ctx*/) override { }
  virtual void exitFunctionDescriptor(SolidityParser::FunctionDescriptorContext * /*ctx*/) override { }

  virtual void enterReturnParameters(SolidityParser::ReturnParametersContext * /*ctx*/) override { }
  virtual void exitReturnParameters(SolidityParser::ReturnParametersContext * /*ctx*/) override { }

  virtual void enterModifierList(SolidityParser::ModifierListContext * /*ctx*/) override { }
  virtual void exitModifierList(SolidityParser::ModifierListContext * /*ctx*/) override { }

  virtual void enterModifierInvocation(SolidityParser::ModifierInvocationContext * /*ctx*/) override { }
  virtual void exitModifierInvocation(SolidityParser::ModifierInvocationContext * /*ctx*/) override { }

  virtual void enterEventDefinition(SolidityParser::EventDefinitionContext * /*ctx*/) override { }
  virtual void exitEventDefinition(SolidityParser::EventDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumDefinition(SolidityParser::EnumDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumDefinition(SolidityParser::EnumDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumValue(SolidityParser::EnumValueContext * /*ctx*/) override { }
  virtual void exitEnumValue(SolidityParser::EnumValueContext * /*ctx*/) override { }

  virtual void enterParameterList(SolidityParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(SolidityParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(SolidityParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(SolidityParser::ParameterContext * /*ctx*/) override { }

  virtual void enterEventParameterList(SolidityParser::EventParameterListContext * /*ctx*/) override { }
  virtual void exitEventParameterList(SolidityParser::EventParameterListContext * /*ctx*/) override { }

  virtual void enterEventParameter(SolidityParser::EventParameterContext * /*ctx*/) override { }
  virtual void exitEventParameter(SolidityParser::EventParameterContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(SolidityParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(SolidityParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeName(SolidityParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(SolidityParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext * /*ctx*/) override { }
  virtual void exitUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext * /*ctx*/) override { }

  virtual void enterMapping(SolidityParser::MappingContext * /*ctx*/) override { }
  virtual void exitMapping(SolidityParser::MappingContext * /*ctx*/) override { }

  virtual void enterFunctionTypeName(SolidityParser::FunctionTypeNameContext * /*ctx*/) override { }
  virtual void exitFunctionTypeName(SolidityParser::FunctionTypeNameContext * /*ctx*/) override { }

  virtual void enterStorageLocation(SolidityParser::StorageLocationContext * /*ctx*/) override { }
  virtual void exitStorageLocation(SolidityParser::StorageLocationContext * /*ctx*/) override { }

  virtual void enterStateMutability(SolidityParser::StateMutabilityContext * /*ctx*/) override { }
  virtual void exitStateMutability(SolidityParser::StateMutabilityContext * /*ctx*/) override { }

  virtual void enterBlock(SolidityParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SolidityParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(SolidityParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SolidityParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(SolidityParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(SolidityParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(SolidityParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(SolidityParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(SolidityParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(SolidityParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatchClause(SolidityParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(SolidityParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterWhileStatement(SolidityParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(SolidityParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(SolidityParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(SolidityParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterSimpleStatement(SolidityParser::SimpleStatementContext * /*ctx*/) override { }
  virtual void exitSimpleStatement(SolidityParser::SimpleStatementContext * /*ctx*/) override { }

  virtual void enterInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext * /*ctx*/) override { }
  virtual void exitInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext * /*ctx*/) override { }

  virtual void enterDoWhileStatement(SolidityParser::DoWhileStatementContext * /*ctx*/) override { }
  virtual void exitDoWhileStatement(SolidityParser::DoWhileStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(SolidityParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(SolidityParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(SolidityParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(SolidityParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(SolidityParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(SolidityParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(SolidityParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(SolidityParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterEmitStatement(SolidityParser::EmitStatementContext * /*ctx*/) override { }
  virtual void exitEmitStatement(SolidityParser::EmitStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationList(SolidityParser::VariableDeclarationListContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationList(SolidityParser::VariableDeclarationListContext * /*ctx*/) override { }

  virtual void enterIdentifierList(SolidityParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(SolidityParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterElementaryTypeName(SolidityParser::ElementaryTypeNameContext * /*ctx*/) override { }
  virtual void exitElementaryTypeName(SolidityParser::ElementaryTypeNameContext * /*ctx*/) override { }

  virtual void enterExpression(SolidityParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SolidityParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(SolidityParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(SolidityParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionList(SolidityParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(SolidityParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterNameValueList(SolidityParser::NameValueListContext * /*ctx*/) override { }
  virtual void exitNameValueList(SolidityParser::NameValueListContext * /*ctx*/) override { }

  virtual void enterNameValue(SolidityParser::NameValueContext * /*ctx*/) override { }
  virtual void exitNameValue(SolidityParser::NameValueContext * /*ctx*/) override { }

  virtual void enterFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext * /*ctx*/) override { }
  virtual void exitFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext * /*ctx*/) override { }

  virtual void enterFunctionCall(SolidityParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(SolidityParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterTupleExpression(SolidityParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(SolidityParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterTypeNameExpression(SolidityParser::TypeNameExpressionContext * /*ctx*/) override { }
  virtual void exitTypeNameExpression(SolidityParser::TypeNameExpressionContext * /*ctx*/) override { }

  virtual void enterAssemblyItem(SolidityParser::AssemblyItemContext * /*ctx*/) override { }
  virtual void exitAssemblyItem(SolidityParser::AssemblyItemContext * /*ctx*/) override { }

  virtual void enterAssemblyBlock(SolidityParser::AssemblyBlockContext * /*ctx*/) override { }
  virtual void exitAssemblyBlock(SolidityParser::AssemblyBlockContext * /*ctx*/) override { }

  virtual void enterAssemblyExpression(SolidityParser::AssemblyExpressionContext * /*ctx*/) override { }
  virtual void exitAssemblyExpression(SolidityParser::AssemblyExpressionContext * /*ctx*/) override { }

  virtual void enterAssemblyCall(SolidityParser::AssemblyCallContext * /*ctx*/) override { }
  virtual void exitAssemblyCall(SolidityParser::AssemblyCallContext * /*ctx*/) override { }

  virtual void enterAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext * /*ctx*/) override { }
  virtual void exitAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext * /*ctx*/) override { }

  virtual void enterAssemblyAssignment(SolidityParser::AssemblyAssignmentContext * /*ctx*/) override { }
  virtual void exitAssemblyAssignment(SolidityParser::AssemblyAssignmentContext * /*ctx*/) override { }

  virtual void enterAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext * /*ctx*/) override { }
  virtual void exitAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext * /*ctx*/) override { }

  virtual void enterAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext * /*ctx*/) override { }
  virtual void exitAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext * /*ctx*/) override { }

  virtual void enterLabelDefinition(SolidityParser::LabelDefinitionContext * /*ctx*/) override { }
  virtual void exitLabelDefinition(SolidityParser::LabelDefinitionContext * /*ctx*/) override { }

  virtual void enterAssemblySwitch(SolidityParser::AssemblySwitchContext * /*ctx*/) override { }
  virtual void exitAssemblySwitch(SolidityParser::AssemblySwitchContext * /*ctx*/) override { }

  virtual void enterAssemblyCase(SolidityParser::AssemblyCaseContext * /*ctx*/) override { }
  virtual void exitAssemblyCase(SolidityParser::AssemblyCaseContext * /*ctx*/) override { }

  virtual void enterAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext * /*ctx*/) override { }
  virtual void exitAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext * /*ctx*/) override { }

  virtual void enterAssemblyFor(SolidityParser::AssemblyForContext * /*ctx*/) override { }
  virtual void exitAssemblyFor(SolidityParser::AssemblyForContext * /*ctx*/) override { }

  virtual void enterAssemblyIf(SolidityParser::AssemblyIfContext * /*ctx*/) override { }
  virtual void exitAssemblyIf(SolidityParser::AssemblyIfContext * /*ctx*/) override { }

  virtual void enterAssemblyLiteral(SolidityParser::AssemblyLiteralContext * /*ctx*/) override { }
  virtual void exitAssemblyLiteral(SolidityParser::AssemblyLiteralContext * /*ctx*/) override { }

  virtual void enterAssemblyTypedVariableList(SolidityParser::AssemblyTypedVariableListContext * /*ctx*/) override { }
  virtual void exitAssemblyTypedVariableList(SolidityParser::AssemblyTypedVariableListContext * /*ctx*/) override { }

  virtual void enterAssemblyType(SolidityParser::AssemblyTypeContext * /*ctx*/) override { }
  virtual void exitAssemblyType(SolidityParser::AssemblyTypeContext * /*ctx*/) override { }

  virtual void enterSubAssembly(SolidityParser::SubAssemblyContext * /*ctx*/) override { }
  virtual void exitSubAssembly(SolidityParser::SubAssemblyContext * /*ctx*/) override { }

  virtual void enterNumberLiteral(SolidityParser::NumberLiteralContext * /*ctx*/) override { }
  virtual void exitNumberLiteral(SolidityParser::NumberLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(SolidityParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(SolidityParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterHexLiteral(SolidityParser::HexLiteralContext * /*ctx*/) override { }
  virtual void exitHexLiteral(SolidityParser::HexLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(SolidityParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(SolidityParser::StringLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

