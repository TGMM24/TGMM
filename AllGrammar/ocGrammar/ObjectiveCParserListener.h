
// Generated from ObjectiveCParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ObjectiveCParser.
 */
class  ObjectiveCParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationUnit(ObjectiveCParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(ObjectiveCParser::TranslationUnitContext *ctx) = 0;

  virtual void enterTopLevelDeclaration(ObjectiveCParser::TopLevelDeclarationContext *ctx) = 0;
  virtual void exitTopLevelDeclaration(ObjectiveCParser::TopLevelDeclarationContext *ctx) = 0;

  virtual void enterImportDeclaration(ObjectiveCParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(ObjectiveCParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterClassInterface(ObjectiveCParser::ClassInterfaceContext *ctx) = 0;
  virtual void exitClassInterface(ObjectiveCParser::ClassInterfaceContext *ctx) = 0;

  virtual void enterCategoryInterface(ObjectiveCParser::CategoryInterfaceContext *ctx) = 0;
  virtual void exitCategoryInterface(ObjectiveCParser::CategoryInterfaceContext *ctx) = 0;

  virtual void enterClassImplementation(ObjectiveCParser::ClassImplementationContext *ctx) = 0;
  virtual void exitClassImplementation(ObjectiveCParser::ClassImplementationContext *ctx) = 0;

  virtual void enterCategoryImplementation(ObjectiveCParser::CategoryImplementationContext *ctx) = 0;
  virtual void exitCategoryImplementation(ObjectiveCParser::CategoryImplementationContext *ctx) = 0;

  virtual void enterGenericTypeSpecifier(ObjectiveCParser::GenericTypeSpecifierContext *ctx) = 0;
  virtual void exitGenericTypeSpecifier(ObjectiveCParser::GenericTypeSpecifierContext *ctx) = 0;

  virtual void enterProtocolDeclaration(ObjectiveCParser::ProtocolDeclarationContext *ctx) = 0;
  virtual void exitProtocolDeclaration(ObjectiveCParser::ProtocolDeclarationContext *ctx) = 0;

  virtual void enterProtocolDeclarationSection(ObjectiveCParser::ProtocolDeclarationSectionContext *ctx) = 0;
  virtual void exitProtocolDeclarationSection(ObjectiveCParser::ProtocolDeclarationSectionContext *ctx) = 0;

  virtual void enterProtocolDeclarationList(ObjectiveCParser::ProtocolDeclarationListContext *ctx) = 0;
  virtual void exitProtocolDeclarationList(ObjectiveCParser::ProtocolDeclarationListContext *ctx) = 0;

  virtual void enterClassDeclarationList(ObjectiveCParser::ClassDeclarationListContext *ctx) = 0;
  virtual void exitClassDeclarationList(ObjectiveCParser::ClassDeclarationListContext *ctx) = 0;

  virtual void enterProtocolList(ObjectiveCParser::ProtocolListContext *ctx) = 0;
  virtual void exitProtocolList(ObjectiveCParser::ProtocolListContext *ctx) = 0;

  virtual void enterPropertyDeclaration(ObjectiveCParser::PropertyDeclarationContext *ctx) = 0;
  virtual void exitPropertyDeclaration(ObjectiveCParser::PropertyDeclarationContext *ctx) = 0;

  virtual void enterPropertyAttributesList(ObjectiveCParser::PropertyAttributesListContext *ctx) = 0;
  virtual void exitPropertyAttributesList(ObjectiveCParser::PropertyAttributesListContext *ctx) = 0;

  virtual void enterPropertyAttribute(ObjectiveCParser::PropertyAttributeContext *ctx) = 0;
  virtual void exitPropertyAttribute(ObjectiveCParser::PropertyAttributeContext *ctx) = 0;

  virtual void enterProtocolName(ObjectiveCParser::ProtocolNameContext *ctx) = 0;
  virtual void exitProtocolName(ObjectiveCParser::ProtocolNameContext *ctx) = 0;

  virtual void enterInstanceVariables(ObjectiveCParser::InstanceVariablesContext *ctx) = 0;
  virtual void exitInstanceVariables(ObjectiveCParser::InstanceVariablesContext *ctx) = 0;

  virtual void enterVisibilitySection(ObjectiveCParser::VisibilitySectionContext *ctx) = 0;
  virtual void exitVisibilitySection(ObjectiveCParser::VisibilitySectionContext *ctx) = 0;

  virtual void enterAccessModifier(ObjectiveCParser::AccessModifierContext *ctx) = 0;
  virtual void exitAccessModifier(ObjectiveCParser::AccessModifierContext *ctx) = 0;

  virtual void enterInterfaceDeclarationList(ObjectiveCParser::InterfaceDeclarationListContext *ctx) = 0;
  virtual void exitInterfaceDeclarationList(ObjectiveCParser::InterfaceDeclarationListContext *ctx) = 0;

  virtual void enterClassMethodDeclaration(ObjectiveCParser::ClassMethodDeclarationContext *ctx) = 0;
  virtual void exitClassMethodDeclaration(ObjectiveCParser::ClassMethodDeclarationContext *ctx) = 0;

  virtual void enterInstanceMethodDeclaration(ObjectiveCParser::InstanceMethodDeclarationContext *ctx) = 0;
  virtual void exitInstanceMethodDeclaration(ObjectiveCParser::InstanceMethodDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(ObjectiveCParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(ObjectiveCParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterImplementationDefinitionList(ObjectiveCParser::ImplementationDefinitionListContext *ctx) = 0;
  virtual void exitImplementationDefinitionList(ObjectiveCParser::ImplementationDefinitionListContext *ctx) = 0;

  virtual void enterClassMethodDefinition(ObjectiveCParser::ClassMethodDefinitionContext *ctx) = 0;
  virtual void exitClassMethodDefinition(ObjectiveCParser::ClassMethodDefinitionContext *ctx) = 0;

  virtual void enterInstanceMethodDefinition(ObjectiveCParser::InstanceMethodDefinitionContext *ctx) = 0;
  virtual void exitInstanceMethodDefinition(ObjectiveCParser::InstanceMethodDefinitionContext *ctx) = 0;

  virtual void enterMethodDefinition(ObjectiveCParser::MethodDefinitionContext *ctx) = 0;
  virtual void exitMethodDefinition(ObjectiveCParser::MethodDefinitionContext *ctx) = 0;

  virtual void enterMethodSelector(ObjectiveCParser::MethodSelectorContext *ctx) = 0;
  virtual void exitMethodSelector(ObjectiveCParser::MethodSelectorContext *ctx) = 0;

  virtual void enterKeywordDeclarator(ObjectiveCParser::KeywordDeclaratorContext *ctx) = 0;
  virtual void exitKeywordDeclarator(ObjectiveCParser::KeywordDeclaratorContext *ctx) = 0;

  virtual void enterSelector(ObjectiveCParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(ObjectiveCParser::SelectorContext *ctx) = 0;

  virtual void enterMethodType(ObjectiveCParser::MethodTypeContext *ctx) = 0;
  virtual void exitMethodType(ObjectiveCParser::MethodTypeContext *ctx) = 0;

  virtual void enterPropertyImplementation(ObjectiveCParser::PropertyImplementationContext *ctx) = 0;
  virtual void exitPropertyImplementation(ObjectiveCParser::PropertyImplementationContext *ctx) = 0;

  virtual void enterPropertySynthesizeList(ObjectiveCParser::PropertySynthesizeListContext *ctx) = 0;
  virtual void exitPropertySynthesizeList(ObjectiveCParser::PropertySynthesizeListContext *ctx) = 0;

  virtual void enterPropertySynthesizeItem(ObjectiveCParser::PropertySynthesizeItemContext *ctx) = 0;
  virtual void exitPropertySynthesizeItem(ObjectiveCParser::PropertySynthesizeItemContext *ctx) = 0;

  virtual void enterBlockType(ObjectiveCParser::BlockTypeContext *ctx) = 0;
  virtual void exitBlockType(ObjectiveCParser::BlockTypeContext *ctx) = 0;

  virtual void enterGenericsSpecifier(ObjectiveCParser::GenericsSpecifierContext *ctx) = 0;
  virtual void exitGenericsSpecifier(ObjectiveCParser::GenericsSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifierWithPrefixes(ObjectiveCParser::TypeSpecifierWithPrefixesContext *ctx) = 0;
  virtual void exitTypeSpecifierWithPrefixes(ObjectiveCParser::TypeSpecifierWithPrefixesContext *ctx) = 0;

  virtual void enterDictionaryExpression(ObjectiveCParser::DictionaryExpressionContext *ctx) = 0;
  virtual void exitDictionaryExpression(ObjectiveCParser::DictionaryExpressionContext *ctx) = 0;

  virtual void enterDictionaryPair(ObjectiveCParser::DictionaryPairContext *ctx) = 0;
  virtual void exitDictionaryPair(ObjectiveCParser::DictionaryPairContext *ctx) = 0;

  virtual void enterArrayExpression(ObjectiveCParser::ArrayExpressionContext *ctx) = 0;
  virtual void exitArrayExpression(ObjectiveCParser::ArrayExpressionContext *ctx) = 0;

  virtual void enterBoxExpression(ObjectiveCParser::BoxExpressionContext *ctx) = 0;
  virtual void exitBoxExpression(ObjectiveCParser::BoxExpressionContext *ctx) = 0;

  virtual void enterBlockParameters(ObjectiveCParser::BlockParametersContext *ctx) = 0;
  virtual void exitBlockParameters(ObjectiveCParser::BlockParametersContext *ctx) = 0;

  virtual void enterTypeVariableDeclaratorOrName(ObjectiveCParser::TypeVariableDeclaratorOrNameContext *ctx) = 0;
  virtual void exitTypeVariableDeclaratorOrName(ObjectiveCParser::TypeVariableDeclaratorOrNameContext *ctx) = 0;

  virtual void enterBlockExpression(ObjectiveCParser::BlockExpressionContext *ctx) = 0;
  virtual void exitBlockExpression(ObjectiveCParser::BlockExpressionContext *ctx) = 0;

  virtual void enterMessageExpression(ObjectiveCParser::MessageExpressionContext *ctx) = 0;
  virtual void exitMessageExpression(ObjectiveCParser::MessageExpressionContext *ctx) = 0;

  virtual void enterReceiver(ObjectiveCParser::ReceiverContext *ctx) = 0;
  virtual void exitReceiver(ObjectiveCParser::ReceiverContext *ctx) = 0;

  virtual void enterMessageSelector(ObjectiveCParser::MessageSelectorContext *ctx) = 0;
  virtual void exitMessageSelector(ObjectiveCParser::MessageSelectorContext *ctx) = 0;

  virtual void enterKeywordArgument(ObjectiveCParser::KeywordArgumentContext *ctx) = 0;
  virtual void exitKeywordArgument(ObjectiveCParser::KeywordArgumentContext *ctx) = 0;

  virtual void enterKeywordArgumentType(ObjectiveCParser::KeywordArgumentTypeContext *ctx) = 0;
  virtual void exitKeywordArgumentType(ObjectiveCParser::KeywordArgumentTypeContext *ctx) = 0;

  virtual void enterSelectorExpression(ObjectiveCParser::SelectorExpressionContext *ctx) = 0;
  virtual void exitSelectorExpression(ObjectiveCParser::SelectorExpressionContext *ctx) = 0;

  virtual void enterSelectorName(ObjectiveCParser::SelectorNameContext *ctx) = 0;
  virtual void exitSelectorName(ObjectiveCParser::SelectorNameContext *ctx) = 0;

  virtual void enterProtocolExpression(ObjectiveCParser::ProtocolExpressionContext *ctx) = 0;
  virtual void exitProtocolExpression(ObjectiveCParser::ProtocolExpressionContext *ctx) = 0;

  virtual void enterEncodeExpression(ObjectiveCParser::EncodeExpressionContext *ctx) = 0;
  virtual void exitEncodeExpression(ObjectiveCParser::EncodeExpressionContext *ctx) = 0;

  virtual void enterTypeVariableDeclarator(ObjectiveCParser::TypeVariableDeclaratorContext *ctx) = 0;
  virtual void exitTypeVariableDeclarator(ObjectiveCParser::TypeVariableDeclaratorContext *ctx) = 0;

  virtual void enterThrowStatement(ObjectiveCParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(ObjectiveCParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryBlock(ObjectiveCParser::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(ObjectiveCParser::TryBlockContext *ctx) = 0;

  virtual void enterCatchStatement(ObjectiveCParser::CatchStatementContext *ctx) = 0;
  virtual void exitCatchStatement(ObjectiveCParser::CatchStatementContext *ctx) = 0;

  virtual void enterSynchronizedStatement(ObjectiveCParser::SynchronizedStatementContext *ctx) = 0;
  virtual void exitSynchronizedStatement(ObjectiveCParser::SynchronizedStatementContext *ctx) = 0;

  virtual void enterAutoreleaseStatement(ObjectiveCParser::AutoreleaseStatementContext *ctx) = 0;
  virtual void exitAutoreleaseStatement(ObjectiveCParser::AutoreleaseStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(ObjectiveCParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(ObjectiveCParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(ObjectiveCParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(ObjectiveCParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionSignature(ObjectiveCParser::FunctionSignatureContext *ctx) = 0;
  virtual void exitFunctionSignature(ObjectiveCParser::FunctionSignatureContext *ctx) = 0;

  virtual void enterAttribute(ObjectiveCParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(ObjectiveCParser::AttributeContext *ctx) = 0;

  virtual void enterAttributeName(ObjectiveCParser::AttributeNameContext *ctx) = 0;
  virtual void exitAttributeName(ObjectiveCParser::AttributeNameContext *ctx) = 0;

  virtual void enterAttributeParameters(ObjectiveCParser::AttributeParametersContext *ctx) = 0;
  virtual void exitAttributeParameters(ObjectiveCParser::AttributeParametersContext *ctx) = 0;

  virtual void enterAttributeParameterList(ObjectiveCParser::AttributeParameterListContext *ctx) = 0;
  virtual void exitAttributeParameterList(ObjectiveCParser::AttributeParameterListContext *ctx) = 0;

  virtual void enterAttributeParameter(ObjectiveCParser::AttributeParameterContext *ctx) = 0;
  virtual void exitAttributeParameter(ObjectiveCParser::AttributeParameterContext *ctx) = 0;

  virtual void enterAttributeParameterAssignment(ObjectiveCParser::AttributeParameterAssignmentContext *ctx) = 0;
  virtual void exitAttributeParameterAssignment(ObjectiveCParser::AttributeParameterAssignmentContext *ctx) = 0;

  virtual void enterDeclaration(ObjectiveCParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ObjectiveCParser::DeclarationContext *ctx) = 0;

  virtual void enterFunctionCallExpression(ObjectiveCParser::FunctionCallExpressionContext *ctx) = 0;
  virtual void exitFunctionCallExpression(ObjectiveCParser::FunctionCallExpressionContext *ctx) = 0;

  virtual void enterEnumDeclaration(ObjectiveCParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(ObjectiveCParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterVarDeclaration(ObjectiveCParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(ObjectiveCParser::VarDeclarationContext *ctx) = 0;

  virtual void enterTypedefDeclaration(ObjectiveCParser::TypedefDeclarationContext *ctx) = 0;
  virtual void exitTypedefDeclaration(ObjectiveCParser::TypedefDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaratorList(ObjectiveCParser::TypeDeclaratorListContext *ctx) = 0;
  virtual void exitTypeDeclaratorList(ObjectiveCParser::TypeDeclaratorListContext *ctx) = 0;

  virtual void enterTypeDeclarator(ObjectiveCParser::TypeDeclaratorContext *ctx) = 0;
  virtual void exitTypeDeclarator(ObjectiveCParser::TypeDeclaratorContext *ctx) = 0;

  virtual void enterDeclarationSpecifiers(ObjectiveCParser::DeclarationSpecifiersContext *ctx) = 0;
  virtual void exitDeclarationSpecifiers(ObjectiveCParser::DeclarationSpecifiersContext *ctx) = 0;

  virtual void enterAttributeSpecifier(ObjectiveCParser::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(ObjectiveCParser::AttributeSpecifierContext *ctx) = 0;

  virtual void enterInitDeclaratorList(ObjectiveCParser::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(ObjectiveCParser::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(ObjectiveCParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(ObjectiveCParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterStructOrUnionSpecifier(ObjectiveCParser::StructOrUnionSpecifierContext *ctx) = 0;
  virtual void exitStructOrUnionSpecifier(ObjectiveCParser::StructOrUnionSpecifierContext *ctx) = 0;

  virtual void enterFieldDeclaration(ObjectiveCParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(ObjectiveCParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterSpecifierQualifierList(ObjectiveCParser::SpecifierQualifierListContext *ctx) = 0;
  virtual void exitSpecifierQualifierList(ObjectiveCParser::SpecifierQualifierListContext *ctx) = 0;

  virtual void enterIbOutletQualifier(ObjectiveCParser::IbOutletQualifierContext *ctx) = 0;
  virtual void exitIbOutletQualifier(ObjectiveCParser::IbOutletQualifierContext *ctx) = 0;

  virtual void enterArcBehaviourSpecifier(ObjectiveCParser::ArcBehaviourSpecifierContext *ctx) = 0;
  virtual void exitArcBehaviourSpecifier(ObjectiveCParser::ArcBehaviourSpecifierContext *ctx) = 0;

  virtual void enterNullabilitySpecifier(ObjectiveCParser::NullabilitySpecifierContext *ctx) = 0;
  virtual void exitNullabilitySpecifier(ObjectiveCParser::NullabilitySpecifierContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(ObjectiveCParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(ObjectiveCParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterTypePrefix(ObjectiveCParser::TypePrefixContext *ctx) = 0;
  virtual void exitTypePrefix(ObjectiveCParser::TypePrefixContext *ctx) = 0;

  virtual void enterTypeQualifier(ObjectiveCParser::TypeQualifierContext *ctx) = 0;
  virtual void exitTypeQualifier(ObjectiveCParser::TypeQualifierContext *ctx) = 0;

  virtual void enterProtocolQualifier(ObjectiveCParser::ProtocolQualifierContext *ctx) = 0;
  virtual void exitProtocolQualifier(ObjectiveCParser::ProtocolQualifierContext *ctx) = 0;

  virtual void enterTypeSpecifier(ObjectiveCParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(ObjectiveCParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTypeofExpression(ObjectiveCParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(ObjectiveCParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterFieldDeclaratorList(ObjectiveCParser::FieldDeclaratorListContext *ctx) = 0;
  virtual void exitFieldDeclaratorList(ObjectiveCParser::FieldDeclaratorListContext *ctx) = 0;

  virtual void enterFieldDeclarator(ObjectiveCParser::FieldDeclaratorContext *ctx) = 0;
  virtual void exitFieldDeclarator(ObjectiveCParser::FieldDeclaratorContext *ctx) = 0;

  virtual void enterEnumSpecifier(ObjectiveCParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(ObjectiveCParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumeratorList(ObjectiveCParser::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(ObjectiveCParser::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumerator(ObjectiveCParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(ObjectiveCParser::EnumeratorContext *ctx) = 0;

  virtual void enterEnumeratorIdentifier(ObjectiveCParser::EnumeratorIdentifierContext *ctx) = 0;
  virtual void exitEnumeratorIdentifier(ObjectiveCParser::EnumeratorIdentifierContext *ctx) = 0;

  virtual void enterDirectDeclarator(ObjectiveCParser::DirectDeclaratorContext *ctx) = 0;
  virtual void exitDirectDeclarator(ObjectiveCParser::DirectDeclaratorContext *ctx) = 0;

  virtual void enterDeclaratorSuffix(ObjectiveCParser::DeclaratorSuffixContext *ctx) = 0;
  virtual void exitDeclaratorSuffix(ObjectiveCParser::DeclaratorSuffixContext *ctx) = 0;

  virtual void enterParameterList(ObjectiveCParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(ObjectiveCParser::ParameterListContext *ctx) = 0;

  virtual void enterPointer(ObjectiveCParser::PointerContext *ctx) = 0;
  virtual void exitPointer(ObjectiveCParser::PointerContext *ctx) = 0;

  virtual void enterMacro(ObjectiveCParser::MacroContext *ctx) = 0;
  virtual void exitMacro(ObjectiveCParser::MacroContext *ctx) = 0;

  virtual void enterArrayInitializer(ObjectiveCParser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(ObjectiveCParser::ArrayInitializerContext *ctx) = 0;

  virtual void enterStructInitializer(ObjectiveCParser::StructInitializerContext *ctx) = 0;
  virtual void exitStructInitializer(ObjectiveCParser::StructInitializerContext *ctx) = 0;

  virtual void enterInitializerList(ObjectiveCParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(ObjectiveCParser::InitializerListContext *ctx) = 0;

  virtual void enterTypeName(ObjectiveCParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(ObjectiveCParser::TypeNameContext *ctx) = 0;

  virtual void enterAbstractDeclarator(ObjectiveCParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(ObjectiveCParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterAbstractDeclaratorSuffix(ObjectiveCParser::AbstractDeclaratorSuffixContext *ctx) = 0;
  virtual void exitAbstractDeclaratorSuffix(ObjectiveCParser::AbstractDeclaratorSuffixContext *ctx) = 0;

  virtual void enterParameterDeclarationList(ObjectiveCParser::ParameterDeclarationListContext *ctx) = 0;
  virtual void exitParameterDeclarationList(ObjectiveCParser::ParameterDeclarationListContext *ctx) = 0;

  virtual void enterParameterDeclaration(ObjectiveCParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(ObjectiveCParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterDeclarator(ObjectiveCParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(ObjectiveCParser::DeclaratorContext *ctx) = 0;

  virtual void enterStatement(ObjectiveCParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ObjectiveCParser::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(ObjectiveCParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(ObjectiveCParser::LabeledStatementContext *ctx) = 0;

  virtual void enterRangeExpression(ObjectiveCParser::RangeExpressionContext *ctx) = 0;
  virtual void exitRangeExpression(ObjectiveCParser::RangeExpressionContext *ctx) = 0;

  virtual void enterCompoundStatement(ObjectiveCParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(ObjectiveCParser::CompoundStatementContext *ctx) = 0;

  virtual void enterSelectionStatement(ObjectiveCParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(ObjectiveCParser::SelectionStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(ObjectiveCParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(ObjectiveCParser::SwitchStatementContext *ctx) = 0;

  virtual void enterSwitchBlock(ObjectiveCParser::SwitchBlockContext *ctx) = 0;
  virtual void exitSwitchBlock(ObjectiveCParser::SwitchBlockContext *ctx) = 0;

  virtual void enterSwitchSection(ObjectiveCParser::SwitchSectionContext *ctx) = 0;
  virtual void exitSwitchSection(ObjectiveCParser::SwitchSectionContext *ctx) = 0;

  virtual void enterSwitchLabel(ObjectiveCParser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(ObjectiveCParser::SwitchLabelContext *ctx) = 0;

  virtual void enterIterationStatement(ObjectiveCParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(ObjectiveCParser::IterationStatementContext *ctx) = 0;

  virtual void enterWhileStatement(ObjectiveCParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(ObjectiveCParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoStatement(ObjectiveCParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(ObjectiveCParser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(ObjectiveCParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(ObjectiveCParser::ForStatementContext *ctx) = 0;

  virtual void enterForLoopInitializer(ObjectiveCParser::ForLoopInitializerContext *ctx) = 0;
  virtual void exitForLoopInitializer(ObjectiveCParser::ForLoopInitializerContext *ctx) = 0;

  virtual void enterForInStatement(ObjectiveCParser::ForInStatementContext *ctx) = 0;
  virtual void exitForInStatement(ObjectiveCParser::ForInStatementContext *ctx) = 0;

  virtual void enterJumpStatement(ObjectiveCParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(ObjectiveCParser::JumpStatementContext *ctx) = 0;

  virtual void enterExpressions(ObjectiveCParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(ObjectiveCParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpression(ObjectiveCParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ObjectiveCParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(ObjectiveCParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(ObjectiveCParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterCastExpression(ObjectiveCParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(ObjectiveCParser::CastExpressionContext *ctx) = 0;

  virtual void enterInitializer(ObjectiveCParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(ObjectiveCParser::InitializerContext *ctx) = 0;

  virtual void enterConstantExpression(ObjectiveCParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(ObjectiveCParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(ObjectiveCParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(ObjectiveCParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(ObjectiveCParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(ObjectiveCParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterPostfixExpression(ObjectiveCParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(ObjectiveCParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPostfix(ObjectiveCParser::PostfixContext *ctx) = 0;
  virtual void exitPostfix(ObjectiveCParser::PostfixContext *ctx) = 0;

  virtual void enterArgumentExpressionList(ObjectiveCParser::ArgumentExpressionListContext *ctx) = 0;
  virtual void exitArgumentExpressionList(ObjectiveCParser::ArgumentExpressionListContext *ctx) = 0;

  virtual void enterArgumentExpression(ObjectiveCParser::ArgumentExpressionContext *ctx) = 0;
  virtual void exitArgumentExpression(ObjectiveCParser::ArgumentExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(ObjectiveCParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(ObjectiveCParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterConstant(ObjectiveCParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(ObjectiveCParser::ConstantContext *ctx) = 0;

  virtual void enterStringLiteral(ObjectiveCParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(ObjectiveCParser::StringLiteralContext *ctx) = 0;

  virtual void enterIdentifier(ObjectiveCParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(ObjectiveCParser::IdentifierContext *ctx) = 0;


};

