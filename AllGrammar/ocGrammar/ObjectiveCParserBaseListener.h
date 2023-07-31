
// Generated from ObjectiveCParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCParserListener.h"


/**
 * This class provides an empty implementation of ObjectiveCParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ObjectiveCParserBaseListener : public ObjectiveCParserListener {
public:

  virtual void enterTranslationUnit(ObjectiveCParser::TranslationUnitContext * /*ctx*/) override { }
  virtual void exitTranslationUnit(ObjectiveCParser::TranslationUnitContext * /*ctx*/) override { }

  virtual void enterTopLevelDeclaration(ObjectiveCParser::TopLevelDeclarationContext * /*ctx*/) override { }
  virtual void exitTopLevelDeclaration(ObjectiveCParser::TopLevelDeclarationContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(ObjectiveCParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(ObjectiveCParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterClassInterface(ObjectiveCParser::ClassInterfaceContext * /*ctx*/) override { }
  virtual void exitClassInterface(ObjectiveCParser::ClassInterfaceContext * /*ctx*/) override { }

  virtual void enterCategoryInterface(ObjectiveCParser::CategoryInterfaceContext * /*ctx*/) override { }
  virtual void exitCategoryInterface(ObjectiveCParser::CategoryInterfaceContext * /*ctx*/) override { }

  virtual void enterClassImplementation(ObjectiveCParser::ClassImplementationContext * /*ctx*/) override { }
  virtual void exitClassImplementation(ObjectiveCParser::ClassImplementationContext * /*ctx*/) override { }

  virtual void enterCategoryImplementation(ObjectiveCParser::CategoryImplementationContext * /*ctx*/) override { }
  virtual void exitCategoryImplementation(ObjectiveCParser::CategoryImplementationContext * /*ctx*/) override { }

  virtual void enterGenericTypeSpecifier(ObjectiveCParser::GenericTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitGenericTypeSpecifier(ObjectiveCParser::GenericTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterProtocolDeclaration(ObjectiveCParser::ProtocolDeclarationContext * /*ctx*/) override { }
  virtual void exitProtocolDeclaration(ObjectiveCParser::ProtocolDeclarationContext * /*ctx*/) override { }

  virtual void enterProtocolDeclarationSection(ObjectiveCParser::ProtocolDeclarationSectionContext * /*ctx*/) override { }
  virtual void exitProtocolDeclarationSection(ObjectiveCParser::ProtocolDeclarationSectionContext * /*ctx*/) override { }

  virtual void enterProtocolDeclarationList(ObjectiveCParser::ProtocolDeclarationListContext * /*ctx*/) override { }
  virtual void exitProtocolDeclarationList(ObjectiveCParser::ProtocolDeclarationListContext * /*ctx*/) override { }

  virtual void enterClassDeclarationList(ObjectiveCParser::ClassDeclarationListContext * /*ctx*/) override { }
  virtual void exitClassDeclarationList(ObjectiveCParser::ClassDeclarationListContext * /*ctx*/) override { }

  virtual void enterProtocolList(ObjectiveCParser::ProtocolListContext * /*ctx*/) override { }
  virtual void exitProtocolList(ObjectiveCParser::ProtocolListContext * /*ctx*/) override { }

  virtual void enterPropertyDeclaration(ObjectiveCParser::PropertyDeclarationContext * /*ctx*/) override { }
  virtual void exitPropertyDeclaration(ObjectiveCParser::PropertyDeclarationContext * /*ctx*/) override { }

  virtual void enterPropertyAttributesList(ObjectiveCParser::PropertyAttributesListContext * /*ctx*/) override { }
  virtual void exitPropertyAttributesList(ObjectiveCParser::PropertyAttributesListContext * /*ctx*/) override { }

  virtual void enterPropertyAttribute(ObjectiveCParser::PropertyAttributeContext * /*ctx*/) override { }
  virtual void exitPropertyAttribute(ObjectiveCParser::PropertyAttributeContext * /*ctx*/) override { }

  virtual void enterProtocolName(ObjectiveCParser::ProtocolNameContext * /*ctx*/) override { }
  virtual void exitProtocolName(ObjectiveCParser::ProtocolNameContext * /*ctx*/) override { }

  virtual void enterInstanceVariables(ObjectiveCParser::InstanceVariablesContext * /*ctx*/) override { }
  virtual void exitInstanceVariables(ObjectiveCParser::InstanceVariablesContext * /*ctx*/) override { }

  virtual void enterVisibilitySection(ObjectiveCParser::VisibilitySectionContext * /*ctx*/) override { }
  virtual void exitVisibilitySection(ObjectiveCParser::VisibilitySectionContext * /*ctx*/) override { }

  virtual void enterAccessModifier(ObjectiveCParser::AccessModifierContext * /*ctx*/) override { }
  virtual void exitAccessModifier(ObjectiveCParser::AccessModifierContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclarationList(ObjectiveCParser::InterfaceDeclarationListContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclarationList(ObjectiveCParser::InterfaceDeclarationListContext * /*ctx*/) override { }

  virtual void enterClassMethodDeclaration(ObjectiveCParser::ClassMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitClassMethodDeclaration(ObjectiveCParser::ClassMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterInstanceMethodDeclaration(ObjectiveCParser::InstanceMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitInstanceMethodDeclaration(ObjectiveCParser::InstanceMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(ObjectiveCParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(ObjectiveCParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterImplementationDefinitionList(ObjectiveCParser::ImplementationDefinitionListContext * /*ctx*/) override { }
  virtual void exitImplementationDefinitionList(ObjectiveCParser::ImplementationDefinitionListContext * /*ctx*/) override { }

  virtual void enterClassMethodDefinition(ObjectiveCParser::ClassMethodDefinitionContext * /*ctx*/) override { }
  virtual void exitClassMethodDefinition(ObjectiveCParser::ClassMethodDefinitionContext * /*ctx*/) override { }

  virtual void enterInstanceMethodDefinition(ObjectiveCParser::InstanceMethodDefinitionContext * /*ctx*/) override { }
  virtual void exitInstanceMethodDefinition(ObjectiveCParser::InstanceMethodDefinitionContext * /*ctx*/) override { }

  virtual void enterMethodDefinition(ObjectiveCParser::MethodDefinitionContext * /*ctx*/) override { }
  virtual void exitMethodDefinition(ObjectiveCParser::MethodDefinitionContext * /*ctx*/) override { }

  virtual void enterMethodSelector(ObjectiveCParser::MethodSelectorContext * /*ctx*/) override { }
  virtual void exitMethodSelector(ObjectiveCParser::MethodSelectorContext * /*ctx*/) override { }

  virtual void enterKeywordDeclarator(ObjectiveCParser::KeywordDeclaratorContext * /*ctx*/) override { }
  virtual void exitKeywordDeclarator(ObjectiveCParser::KeywordDeclaratorContext * /*ctx*/) override { }

  virtual void enterSelector(ObjectiveCParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(ObjectiveCParser::SelectorContext * /*ctx*/) override { }

  virtual void enterMethodType(ObjectiveCParser::MethodTypeContext * /*ctx*/) override { }
  virtual void exitMethodType(ObjectiveCParser::MethodTypeContext * /*ctx*/) override { }

  virtual void enterPropertyImplementation(ObjectiveCParser::PropertyImplementationContext * /*ctx*/) override { }
  virtual void exitPropertyImplementation(ObjectiveCParser::PropertyImplementationContext * /*ctx*/) override { }

  virtual void enterPropertySynthesizeList(ObjectiveCParser::PropertySynthesizeListContext * /*ctx*/) override { }
  virtual void exitPropertySynthesizeList(ObjectiveCParser::PropertySynthesizeListContext * /*ctx*/) override { }

  virtual void enterPropertySynthesizeItem(ObjectiveCParser::PropertySynthesizeItemContext * /*ctx*/) override { }
  virtual void exitPropertySynthesizeItem(ObjectiveCParser::PropertySynthesizeItemContext * /*ctx*/) override { }

  virtual void enterBlockType(ObjectiveCParser::BlockTypeContext * /*ctx*/) override { }
  virtual void exitBlockType(ObjectiveCParser::BlockTypeContext * /*ctx*/) override { }

  virtual void enterGenericsSpecifier(ObjectiveCParser::GenericsSpecifierContext * /*ctx*/) override { }
  virtual void exitGenericsSpecifier(ObjectiveCParser::GenericsSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierWithPrefixes(ObjectiveCParser::TypeSpecifierWithPrefixesContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierWithPrefixes(ObjectiveCParser::TypeSpecifierWithPrefixesContext * /*ctx*/) override { }

  virtual void enterDictionaryExpression(ObjectiveCParser::DictionaryExpressionContext * /*ctx*/) override { }
  virtual void exitDictionaryExpression(ObjectiveCParser::DictionaryExpressionContext * /*ctx*/) override { }

  virtual void enterDictionaryPair(ObjectiveCParser::DictionaryPairContext * /*ctx*/) override { }
  virtual void exitDictionaryPair(ObjectiveCParser::DictionaryPairContext * /*ctx*/) override { }

  virtual void enterArrayExpression(ObjectiveCParser::ArrayExpressionContext * /*ctx*/) override { }
  virtual void exitArrayExpression(ObjectiveCParser::ArrayExpressionContext * /*ctx*/) override { }

  virtual void enterBoxExpression(ObjectiveCParser::BoxExpressionContext * /*ctx*/) override { }
  virtual void exitBoxExpression(ObjectiveCParser::BoxExpressionContext * /*ctx*/) override { }

  virtual void enterBlockParameters(ObjectiveCParser::BlockParametersContext * /*ctx*/) override { }
  virtual void exitBlockParameters(ObjectiveCParser::BlockParametersContext * /*ctx*/) override { }

  virtual void enterTypeVariableDeclaratorOrName(ObjectiveCParser::TypeVariableDeclaratorOrNameContext * /*ctx*/) override { }
  virtual void exitTypeVariableDeclaratorOrName(ObjectiveCParser::TypeVariableDeclaratorOrNameContext * /*ctx*/) override { }

  virtual void enterBlockExpression(ObjectiveCParser::BlockExpressionContext * /*ctx*/) override { }
  virtual void exitBlockExpression(ObjectiveCParser::BlockExpressionContext * /*ctx*/) override { }

  virtual void enterMessageExpression(ObjectiveCParser::MessageExpressionContext * /*ctx*/) override { }
  virtual void exitMessageExpression(ObjectiveCParser::MessageExpressionContext * /*ctx*/) override { }

  virtual void enterReceiver(ObjectiveCParser::ReceiverContext * /*ctx*/) override { }
  virtual void exitReceiver(ObjectiveCParser::ReceiverContext * /*ctx*/) override { }

  virtual void enterMessageSelector(ObjectiveCParser::MessageSelectorContext * /*ctx*/) override { }
  virtual void exitMessageSelector(ObjectiveCParser::MessageSelectorContext * /*ctx*/) override { }

  virtual void enterKeywordArgument(ObjectiveCParser::KeywordArgumentContext * /*ctx*/) override { }
  virtual void exitKeywordArgument(ObjectiveCParser::KeywordArgumentContext * /*ctx*/) override { }

  virtual void enterKeywordArgumentType(ObjectiveCParser::KeywordArgumentTypeContext * /*ctx*/) override { }
  virtual void exitKeywordArgumentType(ObjectiveCParser::KeywordArgumentTypeContext * /*ctx*/) override { }

  virtual void enterSelectorExpression(ObjectiveCParser::SelectorExpressionContext * /*ctx*/) override { }
  virtual void exitSelectorExpression(ObjectiveCParser::SelectorExpressionContext * /*ctx*/) override { }

  virtual void enterSelectorName(ObjectiveCParser::SelectorNameContext * /*ctx*/) override { }
  virtual void exitSelectorName(ObjectiveCParser::SelectorNameContext * /*ctx*/) override { }

  virtual void enterProtocolExpression(ObjectiveCParser::ProtocolExpressionContext * /*ctx*/) override { }
  virtual void exitProtocolExpression(ObjectiveCParser::ProtocolExpressionContext * /*ctx*/) override { }

  virtual void enterEncodeExpression(ObjectiveCParser::EncodeExpressionContext * /*ctx*/) override { }
  virtual void exitEncodeExpression(ObjectiveCParser::EncodeExpressionContext * /*ctx*/) override { }

  virtual void enterTypeVariableDeclarator(ObjectiveCParser::TypeVariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitTypeVariableDeclarator(ObjectiveCParser::TypeVariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterThrowStatement(ObjectiveCParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(ObjectiveCParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryBlock(ObjectiveCParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(ObjectiveCParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterCatchStatement(ObjectiveCParser::CatchStatementContext * /*ctx*/) override { }
  virtual void exitCatchStatement(ObjectiveCParser::CatchStatementContext * /*ctx*/) override { }

  virtual void enterSynchronizedStatement(ObjectiveCParser::SynchronizedStatementContext * /*ctx*/) override { }
  virtual void exitSynchronizedStatement(ObjectiveCParser::SynchronizedStatementContext * /*ctx*/) override { }

  virtual void enterAutoreleaseStatement(ObjectiveCParser::AutoreleaseStatementContext * /*ctx*/) override { }
  virtual void exitAutoreleaseStatement(ObjectiveCParser::AutoreleaseStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(ObjectiveCParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(ObjectiveCParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(ObjectiveCParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(ObjectiveCParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionSignature(ObjectiveCParser::FunctionSignatureContext * /*ctx*/) override { }
  virtual void exitFunctionSignature(ObjectiveCParser::FunctionSignatureContext * /*ctx*/) override { }

  virtual void enterAttribute(ObjectiveCParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(ObjectiveCParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeName(ObjectiveCParser::AttributeNameContext * /*ctx*/) override { }
  virtual void exitAttributeName(ObjectiveCParser::AttributeNameContext * /*ctx*/) override { }

  virtual void enterAttributeParameters(ObjectiveCParser::AttributeParametersContext * /*ctx*/) override { }
  virtual void exitAttributeParameters(ObjectiveCParser::AttributeParametersContext * /*ctx*/) override { }

  virtual void enterAttributeParameterList(ObjectiveCParser::AttributeParameterListContext * /*ctx*/) override { }
  virtual void exitAttributeParameterList(ObjectiveCParser::AttributeParameterListContext * /*ctx*/) override { }

  virtual void enterAttributeParameter(ObjectiveCParser::AttributeParameterContext * /*ctx*/) override { }
  virtual void exitAttributeParameter(ObjectiveCParser::AttributeParameterContext * /*ctx*/) override { }

  virtual void enterAttributeParameterAssignment(ObjectiveCParser::AttributeParameterAssignmentContext * /*ctx*/) override { }
  virtual void exitAttributeParameterAssignment(ObjectiveCParser::AttributeParameterAssignmentContext * /*ctx*/) override { }

  virtual void enterDeclaration(ObjectiveCParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ObjectiveCParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(ObjectiveCParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(ObjectiveCParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(ObjectiveCParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(ObjectiveCParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(ObjectiveCParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(ObjectiveCParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterTypedefDeclaration(ObjectiveCParser::TypedefDeclarationContext * /*ctx*/) override { }
  virtual void exitTypedefDeclaration(ObjectiveCParser::TypedefDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaratorList(ObjectiveCParser::TypeDeclaratorListContext * /*ctx*/) override { }
  virtual void exitTypeDeclaratorList(ObjectiveCParser::TypeDeclaratorListContext * /*ctx*/) override { }

  virtual void enterTypeDeclarator(ObjectiveCParser::TypeDeclaratorContext * /*ctx*/) override { }
  virtual void exitTypeDeclarator(ObjectiveCParser::TypeDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarationSpecifiers(ObjectiveCParser::DeclarationSpecifiersContext * /*ctx*/) override { }
  virtual void exitDeclarationSpecifiers(ObjectiveCParser::DeclarationSpecifiersContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifier(ObjectiveCParser::AttributeSpecifierContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifier(ObjectiveCParser::AttributeSpecifierContext * /*ctx*/) override { }

  virtual void enterInitDeclaratorList(ObjectiveCParser::InitDeclaratorListContext * /*ctx*/) override { }
  virtual void exitInitDeclaratorList(ObjectiveCParser::InitDeclaratorListContext * /*ctx*/) override { }

  virtual void enterInitDeclarator(ObjectiveCParser::InitDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitDeclarator(ObjectiveCParser::InitDeclaratorContext * /*ctx*/) override { }

  virtual void enterStructOrUnionSpecifier(ObjectiveCParser::StructOrUnionSpecifierContext * /*ctx*/) override { }
  virtual void exitStructOrUnionSpecifier(ObjectiveCParser::StructOrUnionSpecifierContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(ObjectiveCParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(ObjectiveCParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterSpecifierQualifierList(ObjectiveCParser::SpecifierQualifierListContext * /*ctx*/) override { }
  virtual void exitSpecifierQualifierList(ObjectiveCParser::SpecifierQualifierListContext * /*ctx*/) override { }

  virtual void enterIbOutletQualifier(ObjectiveCParser::IbOutletQualifierContext * /*ctx*/) override { }
  virtual void exitIbOutletQualifier(ObjectiveCParser::IbOutletQualifierContext * /*ctx*/) override { }

  virtual void enterArcBehaviourSpecifier(ObjectiveCParser::ArcBehaviourSpecifierContext * /*ctx*/) override { }
  virtual void exitArcBehaviourSpecifier(ObjectiveCParser::ArcBehaviourSpecifierContext * /*ctx*/) override { }

  virtual void enterNullabilitySpecifier(ObjectiveCParser::NullabilitySpecifierContext * /*ctx*/) override { }
  virtual void exitNullabilitySpecifier(ObjectiveCParser::NullabilitySpecifierContext * /*ctx*/) override { }

  virtual void enterStorageClassSpecifier(ObjectiveCParser::StorageClassSpecifierContext * /*ctx*/) override { }
  virtual void exitStorageClassSpecifier(ObjectiveCParser::StorageClassSpecifierContext * /*ctx*/) override { }

  virtual void enterTypePrefix(ObjectiveCParser::TypePrefixContext * /*ctx*/) override { }
  virtual void exitTypePrefix(ObjectiveCParser::TypePrefixContext * /*ctx*/) override { }

  virtual void enterTypeQualifier(ObjectiveCParser::TypeQualifierContext * /*ctx*/) override { }
  virtual void exitTypeQualifier(ObjectiveCParser::TypeQualifierContext * /*ctx*/) override { }

  virtual void enterProtocolQualifier(ObjectiveCParser::ProtocolQualifierContext * /*ctx*/) override { }
  virtual void exitProtocolQualifier(ObjectiveCParser::ProtocolQualifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(ObjectiveCParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(ObjectiveCParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(ObjectiveCParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(ObjectiveCParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterFieldDeclaratorList(ObjectiveCParser::FieldDeclaratorListContext * /*ctx*/) override { }
  virtual void exitFieldDeclaratorList(ObjectiveCParser::FieldDeclaratorListContext * /*ctx*/) override { }

  virtual void enterFieldDeclarator(ObjectiveCParser::FieldDeclaratorContext * /*ctx*/) override { }
  virtual void exitFieldDeclarator(ObjectiveCParser::FieldDeclaratorContext * /*ctx*/) override { }

  virtual void enterEnumSpecifier(ObjectiveCParser::EnumSpecifierContext * /*ctx*/) override { }
  virtual void exitEnumSpecifier(ObjectiveCParser::EnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumeratorList(ObjectiveCParser::EnumeratorListContext * /*ctx*/) override { }
  virtual void exitEnumeratorList(ObjectiveCParser::EnumeratorListContext * /*ctx*/) override { }

  virtual void enterEnumerator(ObjectiveCParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(ObjectiveCParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterEnumeratorIdentifier(ObjectiveCParser::EnumeratorIdentifierContext * /*ctx*/) override { }
  virtual void exitEnumeratorIdentifier(ObjectiveCParser::EnumeratorIdentifierContext * /*ctx*/) override { }

  virtual void enterDirectDeclarator(ObjectiveCParser::DirectDeclaratorContext * /*ctx*/) override { }
  virtual void exitDirectDeclarator(ObjectiveCParser::DirectDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclaratorSuffix(ObjectiveCParser::DeclaratorSuffixContext * /*ctx*/) override { }
  virtual void exitDeclaratorSuffix(ObjectiveCParser::DeclaratorSuffixContext * /*ctx*/) override { }

  virtual void enterParameterList(ObjectiveCParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(ObjectiveCParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterPointer(ObjectiveCParser::PointerContext * /*ctx*/) override { }
  virtual void exitPointer(ObjectiveCParser::PointerContext * /*ctx*/) override { }

  virtual void enterMacro(ObjectiveCParser::MacroContext * /*ctx*/) override { }
  virtual void exitMacro(ObjectiveCParser::MacroContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(ObjectiveCParser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(ObjectiveCParser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterStructInitializer(ObjectiveCParser::StructInitializerContext * /*ctx*/) override { }
  virtual void exitStructInitializer(ObjectiveCParser::StructInitializerContext * /*ctx*/) override { }

  virtual void enterInitializerList(ObjectiveCParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(ObjectiveCParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterTypeName(ObjectiveCParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(ObjectiveCParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterAbstractDeclarator(ObjectiveCParser::AbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractDeclarator(ObjectiveCParser::AbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractDeclaratorSuffix(ObjectiveCParser::AbstractDeclaratorSuffixContext * /*ctx*/) override { }
  virtual void exitAbstractDeclaratorSuffix(ObjectiveCParser::AbstractDeclaratorSuffixContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationList(ObjectiveCParser::ParameterDeclarationListContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationList(ObjectiveCParser::ParameterDeclarationListContext * /*ctx*/) override { }

  virtual void enterParameterDeclaration(ObjectiveCParser::ParameterDeclarationContext * /*ctx*/) override { }
  virtual void exitParameterDeclaration(ObjectiveCParser::ParameterDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarator(ObjectiveCParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(ObjectiveCParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterStatement(ObjectiveCParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ObjectiveCParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(ObjectiveCParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(ObjectiveCParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterRangeExpression(ObjectiveCParser::RangeExpressionContext * /*ctx*/) override { }
  virtual void exitRangeExpression(ObjectiveCParser::RangeExpressionContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(ObjectiveCParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(ObjectiveCParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(ObjectiveCParser::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(ObjectiveCParser::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(ObjectiveCParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(ObjectiveCParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterSwitchBlock(ObjectiveCParser::SwitchBlockContext * /*ctx*/) override { }
  virtual void exitSwitchBlock(ObjectiveCParser::SwitchBlockContext * /*ctx*/) override { }

  virtual void enterSwitchSection(ObjectiveCParser::SwitchSectionContext * /*ctx*/) override { }
  virtual void exitSwitchSection(ObjectiveCParser::SwitchSectionContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(ObjectiveCParser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(ObjectiveCParser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterIterationStatement(ObjectiveCParser::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(ObjectiveCParser::IterationStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(ObjectiveCParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(ObjectiveCParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(ObjectiveCParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(ObjectiveCParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(ObjectiveCParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(ObjectiveCParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForLoopInitializer(ObjectiveCParser::ForLoopInitializerContext * /*ctx*/) override { }
  virtual void exitForLoopInitializer(ObjectiveCParser::ForLoopInitializerContext * /*ctx*/) override { }

  virtual void enterForInStatement(ObjectiveCParser::ForInStatementContext * /*ctx*/) override { }
  virtual void exitForInStatement(ObjectiveCParser::ForInStatementContext * /*ctx*/) override { }

  virtual void enterJumpStatement(ObjectiveCParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(ObjectiveCParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterExpressions(ObjectiveCParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(ObjectiveCParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpression(ObjectiveCParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ObjectiveCParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(ObjectiveCParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(ObjectiveCParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterCastExpression(ObjectiveCParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(ObjectiveCParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterInitializer(ObjectiveCParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(ObjectiveCParser::InitializerContext * /*ctx*/) override { }

  virtual void enterConstantExpression(ObjectiveCParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(ObjectiveCParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(ObjectiveCParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(ObjectiveCParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(ObjectiveCParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(ObjectiveCParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(ObjectiveCParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(ObjectiveCParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPostfix(ObjectiveCParser::PostfixContext * /*ctx*/) override { }
  virtual void exitPostfix(ObjectiveCParser::PostfixContext * /*ctx*/) override { }

  virtual void enterArgumentExpressionList(ObjectiveCParser::ArgumentExpressionListContext * /*ctx*/) override { }
  virtual void exitArgumentExpressionList(ObjectiveCParser::ArgumentExpressionListContext * /*ctx*/) override { }

  virtual void enterArgumentExpression(ObjectiveCParser::ArgumentExpressionContext * /*ctx*/) override { }
  virtual void exitArgumentExpression(ObjectiveCParser::ArgumentExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(ObjectiveCParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(ObjectiveCParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterConstant(ObjectiveCParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(ObjectiveCParser::ConstantContext * /*ctx*/) override { }

  virtual void enterStringLiteral(ObjectiveCParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(ObjectiveCParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(ObjectiveCParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(ObjectiveCParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

