
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParserListener.h"


/**
 * This class provides an empty implementation of myParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myParserBaseListener : public myParserListener {
public:

  virtual void enterTranslationUnit(myParser::TranslationUnitContext * /*ctx*/) override { }
  virtual void exitTranslationUnit(myParser::TranslationUnitContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(myParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(myParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterIdExpression(myParser::IdExpressionContext * /*ctx*/) override { }
  virtual void exitIdExpression(myParser::IdExpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedId(myParser::UnqualifiedIdContext * /*ctx*/) override { }
  virtual void exitUnqualifiedId(myParser::UnqualifiedIdContext * /*ctx*/) override { }

  virtual void enterQualifiedId(myParser::QualifiedIdContext * /*ctx*/) override { }
  virtual void exitQualifiedId(myParser::QualifiedIdContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifier(myParser::NestedNameSpecifierContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifier(myParser::NestedNameSpecifierContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(myParser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(myParser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaIntroducer(myParser::LambdaIntroducerContext * /*ctx*/) override { }
  virtual void exitLambdaIntroducer(myParser::LambdaIntroducerContext * /*ctx*/) override { }

  virtual void enterLambdaCapture(myParser::LambdaCaptureContext * /*ctx*/) override { }
  virtual void exitLambdaCapture(myParser::LambdaCaptureContext * /*ctx*/) override { }

  virtual void enterCaptureDefault(myParser::CaptureDefaultContext * /*ctx*/) override { }
  virtual void exitCaptureDefault(myParser::CaptureDefaultContext * /*ctx*/) override { }

  virtual void enterCaptureList(myParser::CaptureListContext * /*ctx*/) override { }
  virtual void exitCaptureList(myParser::CaptureListContext * /*ctx*/) override { }

  virtual void enterCapture(myParser::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(myParser::CaptureContext * /*ctx*/) override { }

  virtual void enterSimpleCapture(myParser::SimpleCaptureContext * /*ctx*/) override { }
  virtual void exitSimpleCapture(myParser::SimpleCaptureContext * /*ctx*/) override { }

  virtual void enterInitcapture(myParser::InitcaptureContext * /*ctx*/) override { }
  virtual void exitInitcapture(myParser::InitcaptureContext * /*ctx*/) override { }

  virtual void enterLambdaDeclarator(myParser::LambdaDeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdaDeclarator(myParser::LambdaDeclaratorContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(myParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(myParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterTypeIdOfTheTypeId(myParser::TypeIdOfTheTypeIdContext * /*ctx*/) override { }
  virtual void exitTypeIdOfTheTypeId(myParser::TypeIdOfTheTypeIdContext * /*ctx*/) override { }

  virtual void enterExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterPseudoDestructorName(myParser::PseudoDestructorNameContext * /*ctx*/) override { }
  virtual void exitPseudoDestructorName(myParser::PseudoDestructorNameContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(myParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(myParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(myParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(myParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterNewPlacement(myParser::NewPlacementContext * /*ctx*/) override { }
  virtual void exitNewPlacement(myParser::NewPlacementContext * /*ctx*/) override { }

  virtual void enterNewTypeId(myParser::NewTypeIdContext * /*ctx*/) override { }
  virtual void exitNewTypeId(myParser::NewTypeIdContext * /*ctx*/) override { }

  virtual void enterNewDeclarator(myParser::NewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNewDeclarator(myParser::NewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerNewDeclarator(myParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerNewDeclarator(myParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNewInitializer(myParser::NewInitializerContext * /*ctx*/) override { }
  virtual void exitNewInitializer(myParser::NewInitializerContext * /*ctx*/) override { }

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterNoExceptExpression(myParser::NoExceptExpressionContext * /*ctx*/) override { }
  virtual void exitNoExceptExpression(myParser::NoExceptExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(myParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(myParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterPointerMemberExpression(myParser::PointerMemberExpressionContext * /*ctx*/) override { }
  virtual void exitPointerMemberExpression(myParser::PointerMemberExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterShiftExpression(myParser::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(myParser::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterShiftOperator(myParser::ShiftOperatorContext * /*ctx*/) override { }
  virtual void exitShiftOperator(myParser::ShiftOperatorContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(myParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(myParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(myParser::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(myParser::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(myParser::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(myParser::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(myParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(myParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(myParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(myParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(myParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(myParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(myParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(myParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementSeq(myParser::StatementSeqContext * /*ctx*/) override { }
  virtual void exitStatementSeq(myParser::StatementSeqContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(myParser::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(myParser::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterCondition(myParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(myParser::ConditionContext * /*ctx*/) override { }

  virtual void enterIterationStatement(myParser::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(myParser::IterationStatementContext * /*ctx*/) override { }

  virtual void enterForInitStatement(myParser::ForInitStatementContext * /*ctx*/) override { }
  virtual void exitForInitStatement(myParser::ForInitStatementContext * /*ctx*/) override { }

  virtual void enterForRangeDeclaration(myParser::ForRangeDeclarationContext * /*ctx*/) override { }
  virtual void exitForRangeDeclaration(myParser::ForRangeDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeInitializer(myParser::ForRangeInitializerContext * /*ctx*/) override { }
  virtual void exitForRangeInitializer(myParser::ForRangeInitializerContext * /*ctx*/) override { }

  virtual void enterJumpStatement(myParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(myParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(myParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(myParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(myParser::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(myParser::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterDeclaration(myParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(myParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterBlockDeclaration(myParser::BlockDeclarationContext * /*ctx*/) override { }
  virtual void exitBlockDeclaration(myParser::BlockDeclarationContext * /*ctx*/) override { }

  virtual void enterAliasDeclaration(myParser::AliasDeclarationContext * /*ctx*/) override { }
  virtual void exitAliasDeclaration(myParser::AliasDeclarationContext * /*ctx*/) override { }

  virtual void enterSimpleDeclaration(myParser::SimpleDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleDeclaration(myParser::SimpleDeclarationContext * /*ctx*/) override { }

  virtual void enterStaticAssertDeclaration(myParser::StaticAssertDeclarationContext * /*ctx*/) override { }
  virtual void exitStaticAssertDeclaration(myParser::StaticAssertDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyDeclaration(myParser::EmptyDeclarationContext * /*ctx*/) override { }
  virtual void exitEmptyDeclaration(myParser::EmptyDeclarationContext * /*ctx*/) override { }

  virtual void enterAttributeDeclaration(myParser::AttributeDeclarationContext * /*ctx*/) override { }
  virtual void exitAttributeDeclaration(myParser::AttributeDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclSpecifier(myParser::DeclSpecifierContext * /*ctx*/) override { }
  virtual void exitDeclSpecifier(myParser::DeclSpecifierContext * /*ctx*/) override { }

  virtual void enterDeclSpecifierSeq(myParser::DeclSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitDeclSpecifierSeq(myParser::DeclSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterStorageClassSpecifier(myParser::StorageClassSpecifierContext * /*ctx*/) override { }
  virtual void exitStorageClassSpecifier(myParser::StorageClassSpecifierContext * /*ctx*/) override { }

  virtual void enterFunctionSpecifier(myParser::FunctionSpecifierContext * /*ctx*/) override { }
  virtual void exitFunctionSpecifier(myParser::FunctionSpecifierContext * /*ctx*/) override { }

  virtual void enterTypedefName(myParser::TypedefNameContext * /*ctx*/) override { }
  virtual void exitTypedefName(myParser::TypedefNameContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(myParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(myParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifier(myParser::TrailingTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifier(myParser::TrailingTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierSeq(myParser::TypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierSeq(myParser::TypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifierSeq(myParser::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifierSeq(myParser::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterSimpleTypeLengthModifier(myParser::SimpleTypeLengthModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeLengthModifier(myParser::SimpleTypeLengthModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSignednessModifier(myParser::SimpleTypeSignednessModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSignednessModifier(myParser::SimpleTypeSignednessModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSpecifier(myParser::SimpleTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSpecifier(myParser::SimpleTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTheTypeName(myParser::TheTypeNameContext * /*ctx*/) override { }
  virtual void exitTheTypeName(myParser::TheTypeNameContext * /*ctx*/) override { }

  virtual void enterDecltypeSpecifier(myParser::DecltypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDecltypeSpecifier(myParser::DecltypeSpecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedTypeSpecifier(myParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedTypeSpecifier(myParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumName(myParser::EnumNameContext * /*ctx*/) override { }
  virtual void exitEnumName(myParser::EnumNameContext * /*ctx*/) override { }

  virtual void enterEnumSpecifier(myParser::EnumSpecifierContext * /*ctx*/) override { }
  virtual void exitEnumSpecifier(myParser::EnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumHead(myParser::EnumHeadContext * /*ctx*/) override { }
  virtual void exitEnumHead(myParser::EnumHeadContext * /*ctx*/) override { }

  virtual void enterOpaqueEnumDeclaration(myParser::OpaqueEnumDeclarationContext * /*ctx*/) override { }
  virtual void exitOpaqueEnumDeclaration(myParser::OpaqueEnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumkey(myParser::EnumkeyContext * /*ctx*/) override { }
  virtual void exitEnumkey(myParser::EnumkeyContext * /*ctx*/) override { }

  virtual void enterEnumbase(myParser::EnumbaseContext * /*ctx*/) override { }
  virtual void exitEnumbase(myParser::EnumbaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorList(myParser::EnumeratorListContext * /*ctx*/) override { }
  virtual void exitEnumeratorList(myParser::EnumeratorListContext * /*ctx*/) override { }

  virtual void enterEnumeratorDefinition(myParser::EnumeratorDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratorDefinition(myParser::EnumeratorDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(myParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(myParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespaceName(myParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(myParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterOriginalNamespaceName(myParser::OriginalNamespaceNameContext * /*ctx*/) override { }
  virtual void exitOriginalNamespaceName(myParser::OriginalNamespaceNameContext * /*ctx*/) override { }

  virtual void enterNamespaceDefinition(myParser::NamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceDefinition(myParser::NamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterNamespaceAlias(myParser::NamespaceAliasContext * /*ctx*/) override { }
  virtual void exitNamespaceAlias(myParser::NamespaceAliasContext * /*ctx*/) override { }

  virtual void enterNamespaceAliasDefinition(myParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceAliasDefinition(myParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }

  virtual void enterQualifiednamespacespecifier(myParser::QualifiednamespacespecifierContext * /*ctx*/) override { }
  virtual void exitQualifiednamespacespecifier(myParser::QualifiednamespacespecifierContext * /*ctx*/) override { }

  virtual void enterUsingDeclaration(myParser::UsingDeclarationContext * /*ctx*/) override { }
  virtual void exitUsingDeclaration(myParser::UsingDeclarationContext * /*ctx*/) override { }

  virtual void enterUsingDirective(myParser::UsingDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingDirective(myParser::UsingDirectiveContext * /*ctx*/) override { }

  virtual void enterAsmDefinition(myParser::AsmDefinitionContext * /*ctx*/) override { }
  virtual void exitAsmDefinition(myParser::AsmDefinitionContext * /*ctx*/) override { }

  virtual void enterLinkageSpecification(myParser::LinkageSpecificationContext * /*ctx*/) override { }
  virtual void exitLinkageSpecification(myParser::LinkageSpecificationContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifierSeq(myParser::AttributeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifierSeq(myParser::AttributeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifier(myParser::AttributeSpecifierContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifier(myParser::AttributeSpecifierContext * /*ctx*/) override { }

  virtual void enterAlignmentspecifier(myParser::AlignmentspecifierContext * /*ctx*/) override { }
  virtual void exitAlignmentspecifier(myParser::AlignmentspecifierContext * /*ctx*/) override { }

  virtual void enterAttributeList(myParser::AttributeListContext * /*ctx*/) override { }
  virtual void exitAttributeList(myParser::AttributeListContext * /*ctx*/) override { }

  virtual void enterAttribute(myParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(myParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeNamespace(myParser::AttributeNamespaceContext * /*ctx*/) override { }
  virtual void exitAttributeNamespace(myParser::AttributeNamespaceContext * /*ctx*/) override { }

  virtual void enterAttributeArgumentClause(myParser::AttributeArgumentClauseContext * /*ctx*/) override { }
  virtual void exitAttributeArgumentClause(myParser::AttributeArgumentClauseContext * /*ctx*/) override { }

  virtual void enterBalancedTokenSeq(myParser::BalancedTokenSeqContext * /*ctx*/) override { }
  virtual void exitBalancedTokenSeq(myParser::BalancedTokenSeqContext * /*ctx*/) override { }

  virtual void enterBalancedtoken(myParser::BalancedtokenContext * /*ctx*/) override { }
  virtual void exitBalancedtoken(myParser::BalancedtokenContext * /*ctx*/) override { }

  virtual void enterInitDeclaratorList(myParser::InitDeclaratorListContext * /*ctx*/) override { }
  virtual void exitInitDeclaratorList(myParser::InitDeclaratorListContext * /*ctx*/) override { }

  virtual void enterInitDeclarator(myParser::InitDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitDeclarator(myParser::InitDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(myParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(myParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerDeclarator(myParser::PointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerDeclarator(myParser::PointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerDeclarator(myParser::NoPointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerDeclarator(myParser::NoPointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersAndQualifiers(myParser::ParametersAndQualifiersContext * /*ctx*/) override { }
  virtual void exitParametersAndQualifiers(myParser::ParametersAndQualifiersContext * /*ctx*/) override { }

  virtual void enterTrailingReturnType(myParser::TrailingReturnTypeContext * /*ctx*/) override { }
  virtual void exitTrailingReturnType(myParser::TrailingReturnTypeContext * /*ctx*/) override { }

  virtual void enterPointerOperator(myParser::PointerOperatorContext * /*ctx*/) override { }
  virtual void exitPointerOperator(myParser::PointerOperatorContext * /*ctx*/) override { }

  virtual void enterCvqualifierseq(myParser::CvqualifierseqContext * /*ctx*/) override { }
  virtual void exitCvqualifierseq(myParser::CvqualifierseqContext * /*ctx*/) override { }

  virtual void enterCvQualifier(myParser::CvQualifierContext * /*ctx*/) override { }
  virtual void exitCvQualifier(myParser::CvQualifierContext * /*ctx*/) override { }

  virtual void enterRefqualifier(myParser::RefqualifierContext * /*ctx*/) override { }
  virtual void exitRefqualifier(myParser::RefqualifierContext * /*ctx*/) override { }

  virtual void enterDeclaratorid(myParser::DeclaratoridContext * /*ctx*/) override { }
  virtual void exitDeclaratorid(myParser::DeclaratoridContext * /*ctx*/) override { }

  virtual void enterTheTypeId(myParser::TheTypeIdContext * /*ctx*/) override { }
  virtual void exitTheTypeId(myParser::TheTypeIdContext * /*ctx*/) override { }

  virtual void enterAbstractDeclarator(myParser::AbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractDeclarator(myParser::AbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerAbstractDeclarator(myParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerAbstractDeclarator(myParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractDeclarator(myParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractDeclarator(myParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractPackDeclarator(myParser::AbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractPackDeclarator(myParser::AbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractPackDeclarator(myParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractPackDeclarator(myParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationClause(myParser::ParameterDeclarationClauseContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationClause(myParser::ParameterDeclarationClauseContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationList(myParser::ParameterDeclarationListContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationList(myParser::ParameterDeclarationListContext * /*ctx*/) override { }

  virtual void enterParameterDeclaration(myParser::ParameterDeclarationContext * /*ctx*/) override { }
  virtual void exitParameterDeclaration(myParser::ParameterDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(myParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(myParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterInitializer(myParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(myParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceOrEqualInitializer(myParser::BraceOrEqualInitializerContext * /*ctx*/) override { }
  virtual void exitBraceOrEqualInitializer(myParser::BraceOrEqualInitializerContext * /*ctx*/) override { }

  virtual void enterInitializerClause(myParser::InitializerClauseContext * /*ctx*/) override { }
  virtual void exitInitializerClause(myParser::InitializerClauseContext * /*ctx*/) override { }

  virtual void enterInitializerList(myParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(myParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterBracedInitList(myParser::BracedInitListContext * /*ctx*/) override { }
  virtual void exitBracedInitList(myParser::BracedInitListContext * /*ctx*/) override { }

  virtual void enterClassName(myParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(myParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterClassSpecifier(myParser::ClassSpecifierContext * /*ctx*/) override { }
  virtual void exitClassSpecifier(myParser::ClassSpecifierContext * /*ctx*/) override { }

  virtual void enterClassHead(myParser::ClassHeadContext * /*ctx*/) override { }
  virtual void exitClassHead(myParser::ClassHeadContext * /*ctx*/) override { }

  virtual void enterClassHeadName(myParser::ClassHeadNameContext * /*ctx*/) override { }
  virtual void exitClassHeadName(myParser::ClassHeadNameContext * /*ctx*/) override { }

  virtual void enterClassVirtSpecifier(myParser::ClassVirtSpecifierContext * /*ctx*/) override { }
  virtual void exitClassVirtSpecifier(myParser::ClassVirtSpecifierContext * /*ctx*/) override { }

  virtual void enterClassKey(myParser::ClassKeyContext * /*ctx*/) override { }
  virtual void exitClassKey(myParser::ClassKeyContext * /*ctx*/) override { }

  virtual void enterMemberSpecification(myParser::MemberSpecificationContext * /*ctx*/) override { }
  virtual void exitMemberSpecification(myParser::MemberSpecificationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaration(myParser::MemberdeclarationContext * /*ctx*/) override { }
  virtual void exitMemberdeclaration(myParser::MemberdeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaratorList(myParser::MemberDeclaratorListContext * /*ctx*/) override { }
  virtual void exitMemberDeclaratorList(myParser::MemberDeclaratorListContext * /*ctx*/) override { }

  virtual void enterMemberDeclarator(myParser::MemberDeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberDeclarator(myParser::MemberDeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifierSeq(myParser::VirtualSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifierSeq(myParser::VirtualSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifier(myParser::VirtualSpecifierContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifier(myParser::VirtualSpecifierContext * /*ctx*/) override { }

  virtual void enterPureSpecifier(myParser::PureSpecifierContext * /*ctx*/) override { }
  virtual void exitPureSpecifier(myParser::PureSpecifierContext * /*ctx*/) override { }

  virtual void enterBaseClause(myParser::BaseClauseContext * /*ctx*/) override { }
  virtual void exitBaseClause(myParser::BaseClauseContext * /*ctx*/) override { }

  virtual void enterBaseSpecifierList(myParser::BaseSpecifierListContext * /*ctx*/) override { }
  virtual void exitBaseSpecifierList(myParser::BaseSpecifierListContext * /*ctx*/) override { }

  virtual void enterBaseSpecifier(myParser::BaseSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseSpecifier(myParser::BaseSpecifierContext * /*ctx*/) override { }

  virtual void enterClassOrDeclType(myParser::ClassOrDeclTypeContext * /*ctx*/) override { }
  virtual void exitClassOrDeclType(myParser::ClassOrDeclTypeContext * /*ctx*/) override { }

  virtual void enterBaseTypeSpecifier(myParser::BaseTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseTypeSpecifier(myParser::BaseTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(myParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(myParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterConversionFunctionId(myParser::ConversionFunctionIdContext * /*ctx*/) override { }
  virtual void exitConversionFunctionId(myParser::ConversionFunctionIdContext * /*ctx*/) override { }

  virtual void enterConversionTypeId(myParser::ConversionTypeIdContext * /*ctx*/) override { }
  virtual void exitConversionTypeId(myParser::ConversionTypeIdContext * /*ctx*/) override { }

  virtual void enterConversionDeclarator(myParser::ConversionDeclaratorContext * /*ctx*/) override { }
  virtual void exitConversionDeclarator(myParser::ConversionDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstructorInitializer(myParser::ConstructorInitializerContext * /*ctx*/) override { }
  virtual void exitConstructorInitializer(myParser::ConstructorInitializerContext * /*ctx*/) override { }

  virtual void enterMemInitializerList(myParser::MemInitializerListContext * /*ctx*/) override { }
  virtual void exitMemInitializerList(myParser::MemInitializerListContext * /*ctx*/) override { }

  virtual void enterMemInitializer(myParser::MemInitializerContext * /*ctx*/) override { }
  virtual void exitMemInitializer(myParser::MemInitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerid(myParser::MeminitializeridContext * /*ctx*/) override { }
  virtual void exitMeminitializerid(myParser::MeminitializeridContext * /*ctx*/) override { }

  virtual void enterOperatorFunctionId(myParser::OperatorFunctionIdContext * /*ctx*/) override { }
  virtual void exitOperatorFunctionId(myParser::OperatorFunctionIdContext * /*ctx*/) override { }

  virtual void enterLiteralOperatorId(myParser::LiteralOperatorIdContext * /*ctx*/) override { }
  virtual void exitLiteralOperatorId(myParser::LiteralOperatorIdContext * /*ctx*/) override { }

  virtual void enterTemplateDeclaration(myParser::TemplateDeclarationContext * /*ctx*/) override { }
  virtual void exitTemplateDeclaration(myParser::TemplateDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateparameterList(myParser::TemplateparameterListContext * /*ctx*/) override { }
  virtual void exitTemplateparameterList(myParser::TemplateparameterListContext * /*ctx*/) override { }

  virtual void enterTemplateParameter(myParser::TemplateParameterContext * /*ctx*/) override { }
  virtual void exitTemplateParameter(myParser::TemplateParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateId(myParser::SimpleTemplateIdContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateId(myParser::SimpleTemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateId(myParser::TemplateIdContext * /*ctx*/) override { }
  virtual void exitTemplateId(myParser::TemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateName(myParser::TemplateNameContext * /*ctx*/) override { }
  virtual void exitTemplateName(myParser::TemplateNameContext * /*ctx*/) override { }

  virtual void enterTemplateArgumentList(myParser::TemplateArgumentListContext * /*ctx*/) override { }
  virtual void exitTemplateArgumentList(myParser::TemplateArgumentListContext * /*ctx*/) override { }

  virtual void enterTemplateArgument(myParser::TemplateArgumentContext * /*ctx*/) override { }
  virtual void exitTemplateArgument(myParser::TemplateArgumentContext * /*ctx*/) override { }

  virtual void enterTypeNameSpecifier(myParser::TypeNameSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeNameSpecifier(myParser::TypeNameSpecifierContext * /*ctx*/) override { }

  virtual void enterExplicitInstantiation(myParser::ExplicitInstantiationContext * /*ctx*/) override { }
  virtual void exitExplicitInstantiation(myParser::ExplicitInstantiationContext * /*ctx*/) override { }

  virtual void enterExplicitSpecialization(myParser::ExplicitSpecializationContext * /*ctx*/) override { }
  virtual void exitExplicitSpecialization(myParser::ExplicitSpecializationContext * /*ctx*/) override { }

  virtual void enterTryBlock(myParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(myParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterFunctionTryBlock(myParser::FunctionTryBlockContext * /*ctx*/) override { }
  virtual void exitFunctionTryBlock(myParser::FunctionTryBlockContext * /*ctx*/) override { }

  virtual void enterHandlerSeq(myParser::HandlerSeqContext * /*ctx*/) override { }
  virtual void exitHandlerSeq(myParser::HandlerSeqContext * /*ctx*/) override { }

  virtual void enterHandler(myParser::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(myParser::HandlerContext * /*ctx*/) override { }

  virtual void enterExceptionDeclaration(myParser::ExceptionDeclarationContext * /*ctx*/) override { }
  virtual void exitExceptionDeclaration(myParser::ExceptionDeclarationContext * /*ctx*/) override { }

  virtual void enterThrowExpression(myParser::ThrowExpressionContext * /*ctx*/) override { }
  virtual void exitThrowExpression(myParser::ThrowExpressionContext * /*ctx*/) override { }

  virtual void enterExceptionSpecification(myParser::ExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitExceptionSpecification(myParser::ExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterDynamicExceptionSpecification(myParser::DynamicExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitDynamicExceptionSpecification(myParser::DynamicExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterTypeIdList(myParser::TypeIdListContext * /*ctx*/) override { }
  virtual void exitTypeIdList(myParser::TypeIdListContext * /*ctx*/) override { }

  virtual void enterNoeExceptSpecification(myParser::NoeExceptSpecificationContext * /*ctx*/) override { }
  virtual void exitNoeExceptSpecification(myParser::NoeExceptSpecificationContext * /*ctx*/) override { }

  virtual void enterTheOperator(myParser::TheOperatorContext * /*ctx*/) override { }
  virtual void exitTheOperator(myParser::TheOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

