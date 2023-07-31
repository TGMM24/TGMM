
// Generated from Dart2Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Dart2Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Dart2Parser.
 */
class  Dart2ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAdditiveExpression(Dart2Parser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(Dart2Parser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterAdditiveOperator(Dart2Parser::AdditiveOperatorContext *ctx) = 0;
  virtual void exitAdditiveOperator(Dart2Parser::AdditiveOperatorContext *ctx) = 0;

  virtual void enterArgumentList(Dart2Parser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(Dart2Parser::ArgumentListContext *ctx) = 0;

  virtual void enterArgumentPart(Dart2Parser::ArgumentPartContext *ctx) = 0;
  virtual void exitArgumentPart(Dart2Parser::ArgumentPartContext *ctx) = 0;

  virtual void enterArguments(Dart2Parser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(Dart2Parser::ArgumentsContext *ctx) = 0;

  virtual void enterAsOperator(Dart2Parser::AsOperatorContext *ctx) = 0;
  virtual void exitAsOperator(Dart2Parser::AsOperatorContext *ctx) = 0;

  virtual void enterAssertion(Dart2Parser::AssertionContext *ctx) = 0;
  virtual void exitAssertion(Dart2Parser::AssertionContext *ctx) = 0;

  virtual void enterAssertStatement(Dart2Parser::AssertStatementContext *ctx) = 0;
  virtual void exitAssertStatement(Dart2Parser::AssertStatementContext *ctx) = 0;

  virtual void enterAssignableExpression(Dart2Parser::AssignableExpressionContext *ctx) = 0;
  virtual void exitAssignableExpression(Dart2Parser::AssignableExpressionContext *ctx) = 0;

  virtual void enterAssignableSelector(Dart2Parser::AssignableSelectorContext *ctx) = 0;
  virtual void exitAssignableSelector(Dart2Parser::AssignableSelectorContext *ctx) = 0;

  virtual void enterAssignableSelectorPart(Dart2Parser::AssignableSelectorPartContext *ctx) = 0;
  virtual void exitAssignableSelectorPart(Dart2Parser::AssignableSelectorPartContext *ctx) = 0;

  virtual void enterAssignmentOperator(Dart2Parser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(Dart2Parser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterAwaitExpression(Dart2Parser::AwaitExpressionContext *ctx) = 0;
  virtual void exitAwaitExpression(Dart2Parser::AwaitExpressionContext *ctx) = 0;

  virtual void enterBinaryOperator(Dart2Parser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(Dart2Parser::BinaryOperatorContext *ctx) = 0;

  virtual void enterBitwiseAndExpression(Dart2Parser::BitwiseAndExpressionContext *ctx) = 0;
  virtual void exitBitwiseAndExpression(Dart2Parser::BitwiseAndExpressionContext *ctx) = 0;

  virtual void enterBitwiseOperator(Dart2Parser::BitwiseOperatorContext *ctx) = 0;
  virtual void exitBitwiseOperator(Dart2Parser::BitwiseOperatorContext *ctx) = 0;

  virtual void enterBitwiseOrExpression(Dart2Parser::BitwiseOrExpressionContext *ctx) = 0;
  virtual void exitBitwiseOrExpression(Dart2Parser::BitwiseOrExpressionContext *ctx) = 0;

  virtual void enterBitwiseXorExpression(Dart2Parser::BitwiseXorExpressionContext *ctx) = 0;
  virtual void exitBitwiseXorExpression(Dart2Parser::BitwiseXorExpressionContext *ctx) = 0;

  virtual void enterBlock(Dart2Parser::BlockContext *ctx) = 0;
  virtual void exitBlock(Dart2Parser::BlockContext *ctx) = 0;

  virtual void enterBooleanLiteral(Dart2Parser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(Dart2Parser::BooleanLiteralContext *ctx) = 0;

  virtual void enterBreakStatement(Dart2Parser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(Dart2Parser::BreakStatementContext *ctx) = 0;

  virtual void enterCascade(Dart2Parser::CascadeContext *ctx) = 0;
  virtual void exitCascade(Dart2Parser::CascadeContext *ctx) = 0;

  virtual void enterCascadeAssignment(Dart2Parser::CascadeAssignmentContext *ctx) = 0;
  virtual void exitCascadeAssignment(Dart2Parser::CascadeAssignmentContext *ctx) = 0;

  virtual void enterCascadeSection(Dart2Parser::CascadeSectionContext *ctx) = 0;
  virtual void exitCascadeSection(Dart2Parser::CascadeSectionContext *ctx) = 0;

  virtual void enterCascadeSectionTail(Dart2Parser::CascadeSectionTailContext *ctx) = 0;
  virtual void exitCascadeSectionTail(Dart2Parser::CascadeSectionTailContext *ctx) = 0;

  virtual void enterCascadeSelector(Dart2Parser::CascadeSelectorContext *ctx) = 0;
  virtual void exitCascadeSelector(Dart2Parser::CascadeSelectorContext *ctx) = 0;

  virtual void enterCatchPart(Dart2Parser::CatchPartContext *ctx) = 0;
  virtual void exitCatchPart(Dart2Parser::CatchPartContext *ctx) = 0;

  virtual void enterClassDeclaration(Dart2Parser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(Dart2Parser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassMemberDeclaration(Dart2Parser::ClassMemberDeclarationContext *ctx) = 0;
  virtual void exitClassMemberDeclaration(Dart2Parser::ClassMemberDeclarationContext *ctx) = 0;

  virtual void enterCombinator(Dart2Parser::CombinatorContext *ctx) = 0;
  virtual void exitCombinator(Dart2Parser::CombinatorContext *ctx) = 0;

  virtual void enterCompilationUnit(Dart2Parser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(Dart2Parser::CompilationUnitContext *ctx) = 0;

  virtual void enterCompoundAssignmentOperator(Dart2Parser::CompoundAssignmentOperatorContext *ctx) = 0;
  virtual void exitCompoundAssignmentOperator(Dart2Parser::CompoundAssignmentOperatorContext *ctx) = 0;

  virtual void enterConditionalExpression(Dart2Parser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(Dart2Parser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterConfigurableUri(Dart2Parser::ConfigurableUriContext *ctx) = 0;
  virtual void exitConfigurableUri(Dart2Parser::ConfigurableUriContext *ctx) = 0;

  virtual void enterConfigurationUri(Dart2Parser::ConfigurationUriContext *ctx) = 0;
  virtual void exitConfigurationUri(Dart2Parser::ConfigurationUriContext *ctx) = 0;

  virtual void enterConstantConstructorSignature(Dart2Parser::ConstantConstructorSignatureContext *ctx) = 0;
  virtual void exitConstantConstructorSignature(Dart2Parser::ConstantConstructorSignatureContext *ctx) = 0;

  virtual void enterConstObjectExpression(Dart2Parser::ConstObjectExpressionContext *ctx) = 0;
  virtual void exitConstObjectExpression(Dart2Parser::ConstObjectExpressionContext *ctx) = 0;

  virtual void enterConstructorDesignation(Dart2Parser::ConstructorDesignationContext *ctx) = 0;
  virtual void exitConstructorDesignation(Dart2Parser::ConstructorDesignationContext *ctx) = 0;

  virtual void enterConstructorInvocation(Dart2Parser::ConstructorInvocationContext *ctx) = 0;
  virtual void exitConstructorInvocation(Dart2Parser::ConstructorInvocationContext *ctx) = 0;

  virtual void enterConstructorName(Dart2Parser::ConstructorNameContext *ctx) = 0;
  virtual void exitConstructorName(Dart2Parser::ConstructorNameContext *ctx) = 0;

  virtual void enterConstructorSignature(Dart2Parser::ConstructorSignatureContext *ctx) = 0;
  virtual void exitConstructorSignature(Dart2Parser::ConstructorSignatureContext *ctx) = 0;

  virtual void enterContinueStatement(Dart2Parser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(Dart2Parser::ContinueStatementContext *ctx) = 0;

  virtual void enterDeclaration(Dart2Parser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(Dart2Parser::DeclarationContext *ctx) = 0;

  virtual void enterDeclaredIdentifier(Dart2Parser::DeclaredIdentifierContext *ctx) = 0;
  virtual void exitDeclaredIdentifier(Dart2Parser::DeclaredIdentifierContext *ctx) = 0;

  virtual void enterDefaultCase(Dart2Parser::DefaultCaseContext *ctx) = 0;
  virtual void exitDefaultCase(Dart2Parser::DefaultCaseContext *ctx) = 0;

  virtual void enterDefaultFormalParameter(Dart2Parser::DefaultFormalParameterContext *ctx) = 0;
  virtual void exitDefaultFormalParameter(Dart2Parser::DefaultFormalParameterContext *ctx) = 0;

  virtual void enterDefaultNamedParameter(Dart2Parser::DefaultNamedParameterContext *ctx) = 0;
  virtual void exitDefaultNamedParameter(Dart2Parser::DefaultNamedParameterContext *ctx) = 0;

  virtual void enterDoStatement(Dart2Parser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(Dart2Parser::DoStatementContext *ctx) = 0;

  virtual void enterDottedIdentifierList(Dart2Parser::DottedIdentifierListContext *ctx) = 0;
  virtual void exitDottedIdentifierList(Dart2Parser::DottedIdentifierListContext *ctx) = 0;

  virtual void enterElement(Dart2Parser::ElementContext *ctx) = 0;
  virtual void exitElement(Dart2Parser::ElementContext *ctx) = 0;

  virtual void enterElements(Dart2Parser::ElementsContext *ctx) = 0;
  virtual void exitElements(Dart2Parser::ElementsContext *ctx) = 0;

  virtual void enterEnumEntry(Dart2Parser::EnumEntryContext *ctx) = 0;
  virtual void exitEnumEntry(Dart2Parser::EnumEntryContext *ctx) = 0;

  virtual void enterEnumType(Dart2Parser::EnumTypeContext *ctx) = 0;
  virtual void exitEnumType(Dart2Parser::EnumTypeContext *ctx) = 0;

  virtual void enterEqualityExpression(Dart2Parser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(Dart2Parser::EqualityExpressionContext *ctx) = 0;

  virtual void enterEqualityOperator(Dart2Parser::EqualityOperatorContext *ctx) = 0;
  virtual void exitEqualityOperator(Dart2Parser::EqualityOperatorContext *ctx) = 0;

  virtual void enterExpression(Dart2Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(Dart2Parser::ExpressionContext *ctx) = 0;

  virtual void enterExpressionElement(Dart2Parser::ExpressionElementContext *ctx) = 0;
  virtual void exitExpressionElement(Dart2Parser::ExpressionElementContext *ctx) = 0;

  virtual void enterExpressionList(Dart2Parser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(Dart2Parser::ExpressionListContext *ctx) = 0;

  virtual void enterExpressionStatement(Dart2Parser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(Dart2Parser::ExpressionStatementContext *ctx) = 0;

  virtual void enterExpressionWithoutCascade(Dart2Parser::ExpressionWithoutCascadeContext *ctx) = 0;
  virtual void exitExpressionWithoutCascade(Dart2Parser::ExpressionWithoutCascadeContext *ctx) = 0;

  virtual void enterExtensionDeclaration(Dart2Parser::ExtensionDeclarationContext *ctx) = 0;
  virtual void exitExtensionDeclaration(Dart2Parser::ExtensionDeclarationContext *ctx) = 0;

  virtual void enterFactoryConstructorSignature(Dart2Parser::FactoryConstructorSignatureContext *ctx) = 0;
  virtual void exitFactoryConstructorSignature(Dart2Parser::FactoryConstructorSignatureContext *ctx) = 0;

  virtual void enterFieldFormalParameter(Dart2Parser::FieldFormalParameterContext *ctx) = 0;
  virtual void exitFieldFormalParameter(Dart2Parser::FieldFormalParameterContext *ctx) = 0;

  virtual void enterFieldInitializer(Dart2Parser::FieldInitializerContext *ctx) = 0;
  virtual void exitFieldInitializer(Dart2Parser::FieldInitializerContext *ctx) = 0;

  virtual void enterFinalConstVarOrType(Dart2Parser::FinalConstVarOrTypeContext *ctx) = 0;
  virtual void exitFinalConstVarOrType(Dart2Parser::FinalConstVarOrTypeContext *ctx) = 0;

  virtual void enterFinallyPart(Dart2Parser::FinallyPartContext *ctx) = 0;
  virtual void exitFinallyPart(Dart2Parser::FinallyPartContext *ctx) = 0;

  virtual void enterForElement(Dart2Parser::ForElementContext *ctx) = 0;
  virtual void exitForElement(Dart2Parser::ForElementContext *ctx) = 0;

  virtual void enterForInitializerStatement(Dart2Parser::ForInitializerStatementContext *ctx) = 0;
  virtual void exitForInitializerStatement(Dart2Parser::ForInitializerStatementContext *ctx) = 0;

  virtual void enterForLoopParts(Dart2Parser::ForLoopPartsContext *ctx) = 0;
  virtual void exitForLoopParts(Dart2Parser::ForLoopPartsContext *ctx) = 0;

  virtual void enterFormalParameterList(Dart2Parser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(Dart2Parser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameterPart(Dart2Parser::FormalParameterPartContext *ctx) = 0;
  virtual void exitFormalParameterPart(Dart2Parser::FormalParameterPartContext *ctx) = 0;

  virtual void enterForStatement(Dart2Parser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(Dart2Parser::ForStatementContext *ctx) = 0;

  virtual void enterFunctionBody(Dart2Parser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(Dart2Parser::FunctionBodyContext *ctx) = 0;

  virtual void enterFunctionExpression(Dart2Parser::FunctionExpressionContext *ctx) = 0;
  virtual void exitFunctionExpression(Dart2Parser::FunctionExpressionContext *ctx) = 0;

  virtual void enterFunctionExpressionBody(Dart2Parser::FunctionExpressionBodyContext *ctx) = 0;
  virtual void exitFunctionExpressionBody(Dart2Parser::FunctionExpressionBodyContext *ctx) = 0;

  virtual void enterFunctionFormalParameter(Dart2Parser::FunctionFormalParameterContext *ctx) = 0;
  virtual void exitFunctionFormalParameter(Dart2Parser::FunctionFormalParameterContext *ctx) = 0;

  virtual void enterFunctionPrefix(Dart2Parser::FunctionPrefixContext *ctx) = 0;
  virtual void exitFunctionPrefix(Dart2Parser::FunctionPrefixContext *ctx) = 0;

  virtual void enterFunctionSignature(Dart2Parser::FunctionSignatureContext *ctx) = 0;
  virtual void exitFunctionSignature(Dart2Parser::FunctionSignatureContext *ctx) = 0;

  virtual void enterFunctionType(Dart2Parser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(Dart2Parser::FunctionTypeContext *ctx) = 0;

  virtual void enterFunctionTypeAlias(Dart2Parser::FunctionTypeAliasContext *ctx) = 0;
  virtual void exitFunctionTypeAlias(Dart2Parser::FunctionTypeAliasContext *ctx) = 0;

  virtual void enterFunctionTypeTail(Dart2Parser::FunctionTypeTailContext *ctx) = 0;
  virtual void exitFunctionTypeTail(Dart2Parser::FunctionTypeTailContext *ctx) = 0;

  virtual void enterFunctionTypeTails(Dart2Parser::FunctionTypeTailsContext *ctx) = 0;
  virtual void exitFunctionTypeTails(Dart2Parser::FunctionTypeTailsContext *ctx) = 0;

  virtual void enterGetterSignature(Dart2Parser::GetterSignatureContext *ctx) = 0;
  virtual void exitGetterSignature(Dart2Parser::GetterSignatureContext *ctx) = 0;

  virtual void enterIdentifier(Dart2Parser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(Dart2Parser::IdentifierContext *ctx) = 0;

  virtual void enterIdentifierList(Dart2Parser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(Dart2Parser::IdentifierListContext *ctx) = 0;

  virtual void enterIfElement(Dart2Parser::IfElementContext *ctx) = 0;
  virtual void exitIfElement(Dart2Parser::IfElementContext *ctx) = 0;

  virtual void enterIfNullExpression(Dart2Parser::IfNullExpressionContext *ctx) = 0;
  virtual void exitIfNullExpression(Dart2Parser::IfNullExpressionContext *ctx) = 0;

  virtual void enterIfStatement(Dart2Parser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(Dart2Parser::IfStatementContext *ctx) = 0;

  virtual void enterImportOrExport(Dart2Parser::ImportOrExportContext *ctx) = 0;
  virtual void exitImportOrExport(Dart2Parser::ImportOrExportContext *ctx) = 0;

  virtual void enterImportSpecification(Dart2Parser::ImportSpecificationContext *ctx) = 0;
  virtual void exitImportSpecification(Dart2Parser::ImportSpecificationContext *ctx) = 0;

  virtual void enterIncrementOperator(Dart2Parser::IncrementOperatorContext *ctx) = 0;
  virtual void exitIncrementOperator(Dart2Parser::IncrementOperatorContext *ctx) = 0;

  virtual void enterInitializedIdentifier(Dart2Parser::InitializedIdentifierContext *ctx) = 0;
  virtual void exitInitializedIdentifier(Dart2Parser::InitializedIdentifierContext *ctx) = 0;

  virtual void enterInitializedIdentifierList(Dart2Parser::InitializedIdentifierListContext *ctx) = 0;
  virtual void exitInitializedIdentifierList(Dart2Parser::InitializedIdentifierListContext *ctx) = 0;

  virtual void enterInitializedVariableDeclaration(Dart2Parser::InitializedVariableDeclarationContext *ctx) = 0;
  virtual void exitInitializedVariableDeclaration(Dart2Parser::InitializedVariableDeclarationContext *ctx) = 0;

  virtual void enterInitializerExpression(Dart2Parser::InitializerExpressionContext *ctx) = 0;
  virtual void exitInitializerExpression(Dart2Parser::InitializerExpressionContext *ctx) = 0;

  virtual void enterInitializerListEntry(Dart2Parser::InitializerListEntryContext *ctx) = 0;
  virtual void exitInitializerListEntry(Dart2Parser::InitializerListEntryContext *ctx) = 0;

  virtual void enterInitializers(Dart2Parser::InitializersContext *ctx) = 0;
  virtual void exitInitializers(Dart2Parser::InitializersContext *ctx) = 0;

  virtual void enterInterfaces(Dart2Parser::InterfacesContext *ctx) = 0;
  virtual void exitInterfaces(Dart2Parser::InterfacesContext *ctx) = 0;

  virtual void enterIsOperator(Dart2Parser::IsOperatorContext *ctx) = 0;
  virtual void exitIsOperator(Dart2Parser::IsOperatorContext *ctx) = 0;

  virtual void enterLabel(Dart2Parser::LabelContext *ctx) = 0;
  virtual void exitLabel(Dart2Parser::LabelContext *ctx) = 0;

  virtual void enterLetExpression(Dart2Parser::LetExpressionContext *ctx) = 0;
  virtual void exitLetExpression(Dart2Parser::LetExpressionContext *ctx) = 0;

  virtual void enterLibraryDeclaration(Dart2Parser::LibraryDeclarationContext *ctx) = 0;
  virtual void exitLibraryDeclaration(Dart2Parser::LibraryDeclarationContext *ctx) = 0;

  virtual void enterLibraryExport(Dart2Parser::LibraryExportContext *ctx) = 0;
  virtual void exitLibraryExport(Dart2Parser::LibraryExportContext *ctx) = 0;

  virtual void enterLibraryImport(Dart2Parser::LibraryImportContext *ctx) = 0;
  virtual void exitLibraryImport(Dart2Parser::LibraryImportContext *ctx) = 0;

  virtual void enterLibraryName(Dart2Parser::LibraryNameContext *ctx) = 0;
  virtual void exitLibraryName(Dart2Parser::LibraryNameContext *ctx) = 0;

  virtual void enterListLiteral(Dart2Parser::ListLiteralContext *ctx) = 0;
  virtual void exitListLiteral(Dart2Parser::ListLiteralContext *ctx) = 0;

  virtual void enterLiteral(Dart2Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(Dart2Parser::LiteralContext *ctx) = 0;

  virtual void enterLocalFunctionDeclaration(Dart2Parser::LocalFunctionDeclarationContext *ctx) = 0;
  virtual void exitLocalFunctionDeclaration(Dart2Parser::LocalFunctionDeclarationContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(Dart2Parser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(Dart2Parser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterLogicalAndExpression(Dart2Parser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(Dart2Parser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(Dart2Parser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(Dart2Parser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterMapElement(Dart2Parser::MapElementContext *ctx) = 0;
  virtual void exitMapElement(Dart2Parser::MapElementContext *ctx) = 0;

  virtual void enterMetadata(Dart2Parser::MetadataContext *ctx) = 0;
  virtual void exitMetadata(Dart2Parser::MetadataContext *ctx) = 0;

  virtual void enterMetadatum(Dart2Parser::MetadatumContext *ctx) = 0;
  virtual void exitMetadatum(Dart2Parser::MetadatumContext *ctx) = 0;

  virtual void enterMethodSignature(Dart2Parser::MethodSignatureContext *ctx) = 0;
  virtual void exitMethodSignature(Dart2Parser::MethodSignatureContext *ctx) = 0;

  virtual void enterMinusOperator(Dart2Parser::MinusOperatorContext *ctx) = 0;
  virtual void exitMinusOperator(Dart2Parser::MinusOperatorContext *ctx) = 0;

  virtual void enterMixinApplication(Dart2Parser::MixinApplicationContext *ctx) = 0;
  virtual void exitMixinApplication(Dart2Parser::MixinApplicationContext *ctx) = 0;

  virtual void enterMixinApplicationClass(Dart2Parser::MixinApplicationClassContext *ctx) = 0;
  virtual void exitMixinApplicationClass(Dart2Parser::MixinApplicationClassContext *ctx) = 0;

  virtual void enterMixinDeclaration(Dart2Parser::MixinDeclarationContext *ctx) = 0;
  virtual void exitMixinDeclaration(Dart2Parser::MixinDeclarationContext *ctx) = 0;

  virtual void enterMixins(Dart2Parser::MixinsContext *ctx) = 0;
  virtual void exitMixins(Dart2Parser::MixinsContext *ctx) = 0;

  virtual void enterMultilineString(Dart2Parser::MultilineStringContext *ctx) = 0;
  virtual void exitMultilineString(Dart2Parser::MultilineStringContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(Dart2Parser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(Dart2Parser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeOperator(Dart2Parser::MultiplicativeOperatorContext *ctx) = 0;
  virtual void exitMultiplicativeOperator(Dart2Parser::MultiplicativeOperatorContext *ctx) = 0;

  virtual void enterNamedArgument(Dart2Parser::NamedArgumentContext *ctx) = 0;
  virtual void exitNamedArgument(Dart2Parser::NamedArgumentContext *ctx) = 0;

  virtual void enterNamedFormalParameters(Dart2Parser::NamedFormalParametersContext *ctx) = 0;
  virtual void exitNamedFormalParameters(Dart2Parser::NamedFormalParametersContext *ctx) = 0;

  virtual void enterNamedParameterType(Dart2Parser::NamedParameterTypeContext *ctx) = 0;
  virtual void exitNamedParameterType(Dart2Parser::NamedParameterTypeContext *ctx) = 0;

  virtual void enterNamedParameterTypes(Dart2Parser::NamedParameterTypesContext *ctx) = 0;
  virtual void exitNamedParameterTypes(Dart2Parser::NamedParameterTypesContext *ctx) = 0;

  virtual void enterNegationOperator(Dart2Parser::NegationOperatorContext *ctx) = 0;
  virtual void exitNegationOperator(Dart2Parser::NegationOperatorContext *ctx) = 0;

  virtual void enterNewExpression(Dart2Parser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(Dart2Parser::NewExpressionContext *ctx) = 0;

  virtual void enterNonLabelledStatement(Dart2Parser::NonLabelledStatementContext *ctx) = 0;
  virtual void exitNonLabelledStatement(Dart2Parser::NonLabelledStatementContext *ctx) = 0;

  virtual void enterNormalFormalParameter(Dart2Parser::NormalFormalParameterContext *ctx) = 0;
  virtual void exitNormalFormalParameter(Dart2Parser::NormalFormalParameterContext *ctx) = 0;

  virtual void enterNormalFormalParameterNoMetadata(Dart2Parser::NormalFormalParameterNoMetadataContext *ctx) = 0;
  virtual void exitNormalFormalParameterNoMetadata(Dart2Parser::NormalFormalParameterNoMetadataContext *ctx) = 0;

  virtual void enterNormalFormalParameters(Dart2Parser::NormalFormalParametersContext *ctx) = 0;
  virtual void exitNormalFormalParameters(Dart2Parser::NormalFormalParametersContext *ctx) = 0;

  virtual void enterNormalParameterType(Dart2Parser::NormalParameterTypeContext *ctx) = 0;
  virtual void exitNormalParameterType(Dart2Parser::NormalParameterTypeContext *ctx) = 0;

  virtual void enterNormalParameterTypes(Dart2Parser::NormalParameterTypesContext *ctx) = 0;
  virtual void exitNormalParameterTypes(Dart2Parser::NormalParameterTypesContext *ctx) = 0;

  virtual void enterNullLiteral(Dart2Parser::NullLiteralContext *ctx) = 0;
  virtual void exitNullLiteral(Dart2Parser::NullLiteralContext *ctx) = 0;

  virtual void enterNumericLiteral(Dart2Parser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(Dart2Parser::NumericLiteralContext *ctx) = 0;

  virtual void enterOnPart(Dart2Parser::OnPartContext *ctx) = 0;
  virtual void exitOnPart(Dart2Parser::OnPartContext *ctx) = 0;

  virtual void enterOperator(Dart2Parser::OperatorContext *ctx) = 0;
  virtual void exitOperator(Dart2Parser::OperatorContext *ctx) = 0;

  virtual void enterOperatorSignature(Dart2Parser::OperatorSignatureContext *ctx) = 0;
  virtual void exitOperatorSignature(Dart2Parser::OperatorSignatureContext *ctx) = 0;

  virtual void enterOptionalOrNamedFormalParameters(Dart2Parser::OptionalOrNamedFormalParametersContext *ctx) = 0;
  virtual void exitOptionalOrNamedFormalParameters(Dart2Parser::OptionalOrNamedFormalParametersContext *ctx) = 0;

  virtual void enterOptionalParameterTypes(Dart2Parser::OptionalParameterTypesContext *ctx) = 0;
  virtual void exitOptionalParameterTypes(Dart2Parser::OptionalParameterTypesContext *ctx) = 0;

  virtual void enterOptionalPositionalFormalParameters(Dart2Parser::OptionalPositionalFormalParametersContext *ctx) = 0;
  virtual void exitOptionalPositionalFormalParameters(Dart2Parser::OptionalPositionalFormalParametersContext *ctx) = 0;

  virtual void enterOptionalPositionalParameterTypes(Dart2Parser::OptionalPositionalParameterTypesContext *ctx) = 0;
  virtual void exitOptionalPositionalParameterTypes(Dart2Parser::OptionalPositionalParameterTypesContext *ctx) = 0;

  virtual void enterParameterTypeList(Dart2Parser::ParameterTypeListContext *ctx) = 0;
  virtual void exitParameterTypeList(Dart2Parser::ParameterTypeListContext *ctx) = 0;

  virtual void enterPartDeclaration(Dart2Parser::PartDeclarationContext *ctx) = 0;
  virtual void exitPartDeclaration(Dart2Parser::PartDeclarationContext *ctx) = 0;

  virtual void enterPartDirective(Dart2Parser::PartDirectiveContext *ctx) = 0;
  virtual void exitPartDirective(Dart2Parser::PartDirectiveContext *ctx) = 0;

  virtual void enterPartHeader(Dart2Parser::PartHeaderContext *ctx) = 0;
  virtual void exitPartHeader(Dart2Parser::PartHeaderContext *ctx) = 0;

  virtual void enterPostfixExpression(Dart2Parser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(Dart2Parser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPostfixOperator(Dart2Parser::PostfixOperatorContext *ctx) = 0;
  virtual void exitPostfixOperator(Dart2Parser::PostfixOperatorContext *ctx) = 0;

  virtual void enterPrefixOperator(Dart2Parser::PrefixOperatorContext *ctx) = 0;
  virtual void exitPrefixOperator(Dart2Parser::PrefixOperatorContext *ctx) = 0;

  virtual void enterPrimary(Dart2Parser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(Dart2Parser::PrimaryContext *ctx) = 0;

  virtual void enterQualifiedName(Dart2Parser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(Dart2Parser::QualifiedNameContext *ctx) = 0;

  virtual void enterRedirectingFactoryConstructorSignature(Dart2Parser::RedirectingFactoryConstructorSignatureContext *ctx) = 0;
  virtual void exitRedirectingFactoryConstructorSignature(Dart2Parser::RedirectingFactoryConstructorSignatureContext *ctx) = 0;

  virtual void enterRedirection(Dart2Parser::RedirectionContext *ctx) = 0;
  virtual void exitRedirection(Dart2Parser::RedirectionContext *ctx) = 0;

  virtual void enterRelationalExpression(Dart2Parser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(Dart2Parser::RelationalExpressionContext *ctx) = 0;

  virtual void enterRelationalOperator(Dart2Parser::RelationalOperatorContext *ctx) = 0;
  virtual void exitRelationalOperator(Dart2Parser::RelationalOperatorContext *ctx) = 0;

  virtual void enterReserved_word(Dart2Parser::Reserved_wordContext *ctx) = 0;
  virtual void exitReserved_word(Dart2Parser::Reserved_wordContext *ctx) = 0;

  virtual void enterRethrowStatement(Dart2Parser::RethrowStatementContext *ctx) = 0;
  virtual void exitRethrowStatement(Dart2Parser::RethrowStatementContext *ctx) = 0;

  virtual void enterReturnStatement(Dart2Parser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(Dart2Parser::ReturnStatementContext *ctx) = 0;

  virtual void enterSelector(Dart2Parser::SelectorContext *ctx) = 0;
  virtual void exitSelector(Dart2Parser::SelectorContext *ctx) = 0;

  virtual void enterSetOrMapLiteral(Dart2Parser::SetOrMapLiteralContext *ctx) = 0;
  virtual void exitSetOrMapLiteral(Dart2Parser::SetOrMapLiteralContext *ctx) = 0;

  virtual void enterSetterSignature(Dart2Parser::SetterSignatureContext *ctx) = 0;
  virtual void exitSetterSignature(Dart2Parser::SetterSignatureContext *ctx) = 0;

  virtual void enterShiftExpression(Dart2Parser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(Dart2Parser::ShiftExpressionContext *ctx) = 0;

  virtual void enterShiftOperator(Dart2Parser::ShiftOperatorContext *ctx) = 0;
  virtual void exitShiftOperator(Dart2Parser::ShiftOperatorContext *ctx) = 0;

  virtual void enterSimpleFormalParameter(Dart2Parser::SimpleFormalParameterContext *ctx) = 0;
  virtual void exitSimpleFormalParameter(Dart2Parser::SimpleFormalParameterContext *ctx) = 0;

  virtual void enterSingleLineString(Dart2Parser::SingleLineStringContext *ctx) = 0;
  virtual void exitSingleLineString(Dart2Parser::SingleLineStringContext *ctx) = 0;

  virtual void enterSpreadElement(Dart2Parser::SpreadElementContext *ctx) = 0;
  virtual void exitSpreadElement(Dart2Parser::SpreadElementContext *ctx) = 0;

  virtual void enterStatement(Dart2Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(Dart2Parser::StatementContext *ctx) = 0;

  virtual void enterStatements(Dart2Parser::StatementsContext *ctx) = 0;
  virtual void exitStatements(Dart2Parser::StatementsContext *ctx) = 0;

  virtual void enterStaticFinalDeclaration(Dart2Parser::StaticFinalDeclarationContext *ctx) = 0;
  virtual void exitStaticFinalDeclaration(Dart2Parser::StaticFinalDeclarationContext *ctx) = 0;

  virtual void enterStaticFinalDeclarationList(Dart2Parser::StaticFinalDeclarationListContext *ctx) = 0;
  virtual void exitStaticFinalDeclarationList(Dart2Parser::StaticFinalDeclarationListContext *ctx) = 0;

  virtual void enterStringLiteral(Dart2Parser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(Dart2Parser::StringLiteralContext *ctx) = 0;

  virtual void enterSuperclass(Dart2Parser::SuperclassContext *ctx) = 0;
  virtual void exitSuperclass(Dart2Parser::SuperclassContext *ctx) = 0;

  virtual void enterSwitchCase(Dart2Parser::SwitchCaseContext *ctx) = 0;
  virtual void exitSwitchCase(Dart2Parser::SwitchCaseContext *ctx) = 0;

  virtual void enterSwitchStatement(Dart2Parser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(Dart2Parser::SwitchStatementContext *ctx) = 0;

  virtual void enterSymbolLiteral(Dart2Parser::SymbolLiteralContext *ctx) = 0;
  virtual void exitSymbolLiteral(Dart2Parser::SymbolLiteralContext *ctx) = 0;

  virtual void enterThisExpression(Dart2Parser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(Dart2Parser::ThisExpressionContext *ctx) = 0;

  virtual void enterThrowExpression(Dart2Parser::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(Dart2Parser::ThrowExpressionContext *ctx) = 0;

  virtual void enterThrowExpressionWithoutCascade(Dart2Parser::ThrowExpressionWithoutCascadeContext *ctx) = 0;
  virtual void exitThrowExpressionWithoutCascade(Dart2Parser::ThrowExpressionWithoutCascadeContext *ctx) = 0;

  virtual void enterTildeOperator(Dart2Parser::TildeOperatorContext *ctx) = 0;
  virtual void exitTildeOperator(Dart2Parser::TildeOperatorContext *ctx) = 0;

  virtual void enterTopLevelDeclaration(Dart2Parser::TopLevelDeclarationContext *ctx) = 0;
  virtual void exitTopLevelDeclaration(Dart2Parser::TopLevelDeclarationContext *ctx) = 0;

  virtual void enterTryStatement(Dart2Parser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(Dart2Parser::TryStatementContext *ctx) = 0;

  virtual void enterType(Dart2Parser::TypeContext *ctx) = 0;
  virtual void exitType(Dart2Parser::TypeContext *ctx) = 0;

  virtual void enterTypeAlias(Dart2Parser::TypeAliasContext *ctx) = 0;
  virtual void exitTypeAlias(Dart2Parser::TypeAliasContext *ctx) = 0;

  virtual void enterTypeArguments(Dart2Parser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(Dart2Parser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeCast(Dart2Parser::TypeCastContext *ctx) = 0;
  virtual void exitTypeCast(Dart2Parser::TypeCastContext *ctx) = 0;

  virtual void enterTypedIdentifier(Dart2Parser::TypedIdentifierContext *ctx) = 0;
  virtual void exitTypedIdentifier(Dart2Parser::TypedIdentifierContext *ctx) = 0;

  virtual void enterTypeIdentifier(Dart2Parser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(Dart2Parser::TypeIdentifierContext *ctx) = 0;

  virtual void enterTypeList(Dart2Parser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(Dart2Parser::TypeListContext *ctx) = 0;

  virtual void enterTypeName(Dart2Parser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(Dart2Parser::TypeNameContext *ctx) = 0;

  virtual void enterTypeNotFunction(Dart2Parser::TypeNotFunctionContext *ctx) = 0;
  virtual void exitTypeNotFunction(Dart2Parser::TypeNotFunctionContext *ctx) = 0;

  virtual void enterTypeNotVoid(Dart2Parser::TypeNotVoidContext *ctx) = 0;
  virtual void exitTypeNotVoid(Dart2Parser::TypeNotVoidContext *ctx) = 0;

  virtual void enterTypeNotVoidList(Dart2Parser::TypeNotVoidListContext *ctx) = 0;
  virtual void exitTypeNotVoidList(Dart2Parser::TypeNotVoidListContext *ctx) = 0;

  virtual void enterTypeNotVoidNotFunction(Dart2Parser::TypeNotVoidNotFunctionContext *ctx) = 0;
  virtual void exitTypeNotVoidNotFunction(Dart2Parser::TypeNotVoidNotFunctionContext *ctx) = 0;

  virtual void enterTypeNotVoidNotFunctionList(Dart2Parser::TypeNotVoidNotFunctionListContext *ctx) = 0;
  virtual void exitTypeNotVoidNotFunctionList(Dart2Parser::TypeNotVoidNotFunctionListContext *ctx) = 0;

  virtual void enterTypeParameter(Dart2Parser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(Dart2Parser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeParameters(Dart2Parser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(Dart2Parser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeTest(Dart2Parser::TypeTestContext *ctx) = 0;
  virtual void exitTypeTest(Dart2Parser::TypeTestContext *ctx) = 0;

  virtual void enterUnaryExpression(Dart2Parser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(Dart2Parser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnconditionalAssignableSelector(Dart2Parser::UnconditionalAssignableSelectorContext *ctx) = 0;
  virtual void exitUnconditionalAssignableSelector(Dart2Parser::UnconditionalAssignableSelectorContext *ctx) = 0;

  virtual void enterUri(Dart2Parser::UriContext *ctx) = 0;
  virtual void exitUri(Dart2Parser::UriContext *ctx) = 0;

  virtual void enterUriTest(Dart2Parser::UriTestContext *ctx) = 0;
  virtual void exitUriTest(Dart2Parser::UriTestContext *ctx) = 0;

  virtual void enterVarOrType(Dart2Parser::VarOrTypeContext *ctx) = 0;
  virtual void exitVarOrType(Dart2Parser::VarOrTypeContext *ctx) = 0;

  virtual void enterWhileStatement(Dart2Parser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(Dart2Parser::WhileStatementContext *ctx) = 0;

  virtual void enterYieldEachStatement(Dart2Parser::YieldEachStatementContext *ctx) = 0;
  virtual void exitYieldEachStatement(Dart2Parser::YieldEachStatementContext *ctx) = 0;

  virtual void enterYieldStatement(Dart2Parser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(Dart2Parser::YieldStatementContext *ctx) = 0;


};

