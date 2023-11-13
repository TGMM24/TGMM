
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationUnit(myParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(myParser::TranslationUnitContext *ctx) = 0;

  virtual void enterPrimaryExpression(myParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(myParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdExpression(myParser::IdExpressionContext *ctx) = 0;
  virtual void exitIdExpression(myParser::IdExpressionContext *ctx) = 0;

  virtual void enterUnqualifiedId(myParser::UnqualifiedIdContext *ctx) = 0;
  virtual void exitUnqualifiedId(myParser::UnqualifiedIdContext *ctx) = 0;

  virtual void enterQualifiedId(myParser::QualifiedIdContext *ctx) = 0;
  virtual void exitQualifiedId(myParser::QualifiedIdContext *ctx) = 0;

  virtual void enterNestedNameSpecifier(myParser::NestedNameSpecifierContext *ctx) = 0;
  virtual void exitNestedNameSpecifier(myParser::NestedNameSpecifierContext *ctx) = 0;

  virtual void enterLambdaExpression(myParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(myParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaIntroducer(myParser::LambdaIntroducerContext *ctx) = 0;
  virtual void exitLambdaIntroducer(myParser::LambdaIntroducerContext *ctx) = 0;

  virtual void enterLambdaCapture(myParser::LambdaCaptureContext *ctx) = 0;
  virtual void exitLambdaCapture(myParser::LambdaCaptureContext *ctx) = 0;

  virtual void enterCaptureDefault(myParser::CaptureDefaultContext *ctx) = 0;
  virtual void exitCaptureDefault(myParser::CaptureDefaultContext *ctx) = 0;

  virtual void enterCaptureList(myParser::CaptureListContext *ctx) = 0;
  virtual void exitCaptureList(myParser::CaptureListContext *ctx) = 0;

  virtual void enterCapture(myParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(myParser::CaptureContext *ctx) = 0;

  virtual void enterSimpleCapture(myParser::SimpleCaptureContext *ctx) = 0;
  virtual void exitSimpleCapture(myParser::SimpleCaptureContext *ctx) = 0;

  virtual void enterInitcapture(myParser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(myParser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdaDeclarator(myParser::LambdaDeclaratorContext *ctx) = 0;
  virtual void exitLambdaDeclarator(myParser::LambdaDeclaratorContext *ctx) = 0;

  virtual void enterPostfixExpression(myParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(myParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterTypeIdOfTheTypeId(myParser::TypeIdOfTheTypeIdContext *ctx) = 0;
  virtual void exitTypeIdOfTheTypeId(myParser::TypeIdOfTheTypeIdContext *ctx) = 0;

  virtual void enterExpressionList(myParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(myParser::ExpressionListContext *ctx) = 0;

  virtual void enterPseudoDestructorName(myParser::PseudoDestructorNameContext *ctx) = 0;
  virtual void exitPseudoDestructorName(myParser::PseudoDestructorNameContext *ctx) = 0;

  virtual void enterUnaryExpression(myParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(myParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(myParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(myParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterNewExpression(myParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(myParser::NewExpressionContext *ctx) = 0;

  virtual void enterNewPlacement(myParser::NewPlacementContext *ctx) = 0;
  virtual void exitNewPlacement(myParser::NewPlacementContext *ctx) = 0;

  virtual void enterNewTypeId(myParser::NewTypeIdContext *ctx) = 0;
  virtual void exitNewTypeId(myParser::NewTypeIdContext *ctx) = 0;

  virtual void enterNewDeclarator(myParser::NewDeclaratorContext *ctx) = 0;
  virtual void exitNewDeclarator(myParser::NewDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerNewDeclarator(myParser::NoPointerNewDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerNewDeclarator(myParser::NoPointerNewDeclaratorContext *ctx) = 0;

  virtual void enterNewInitializer(myParser::NewInitializerContext *ctx) = 0;
  virtual void exitNewInitializer(myParser::NewInitializerContext *ctx) = 0;

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterNoExceptExpression(myParser::NoExceptExpressionContext *ctx) = 0;
  virtual void exitNoExceptExpression(myParser::NoExceptExpressionContext *ctx) = 0;

  virtual void enterCastExpression(myParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(myParser::CastExpressionContext *ctx) = 0;

  virtual void enterPointerMemberExpression(myParser::PointerMemberExpressionContext *ctx) = 0;
  virtual void exitPointerMemberExpression(myParser::PointerMemberExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(myParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(myParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterShiftOperator(myParser::ShiftOperatorContext *ctx) = 0;
  virtual void exitShiftOperator(myParser::ShiftOperatorContext *ctx) = 0;

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterAndExpression(myParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(myParser::AndExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(myParser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(myParser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(myParser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(myParser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(myParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(myParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterExpression(myParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(myParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(myParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(myParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(myParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(myParser::LabeledStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(myParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(myParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStatementSeq(myParser::StatementSeqContext *ctx) = 0;
  virtual void exitStatementSeq(myParser::StatementSeqContext *ctx) = 0;

  virtual void enterSelectionStatement(myParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(myParser::SelectionStatementContext *ctx) = 0;

  virtual void enterCondition(myParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(myParser::ConditionContext *ctx) = 0;

  virtual void enterIterationStatement(myParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(myParser::IterationStatementContext *ctx) = 0;

  virtual void enterForInitStatement(myParser::ForInitStatementContext *ctx) = 0;
  virtual void exitForInitStatement(myParser::ForInitStatementContext *ctx) = 0;

  virtual void enterForRangeDeclaration(myParser::ForRangeDeclarationContext *ctx) = 0;
  virtual void exitForRangeDeclaration(myParser::ForRangeDeclarationContext *ctx) = 0;

  virtual void enterForRangeInitializer(myParser::ForRangeInitializerContext *ctx) = 0;
  virtual void exitForRangeInitializer(myParser::ForRangeInitializerContext *ctx) = 0;

  virtual void enterJumpStatement(myParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(myParser::JumpStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(myParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(myParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterDeclarationseq(myParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(myParser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(myParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(myParser::DeclarationContext *ctx) = 0;

  virtual void enterBlockDeclaration(myParser::BlockDeclarationContext *ctx) = 0;
  virtual void exitBlockDeclaration(myParser::BlockDeclarationContext *ctx) = 0;

  virtual void enterAliasDeclaration(myParser::AliasDeclarationContext *ctx) = 0;
  virtual void exitAliasDeclaration(myParser::AliasDeclarationContext *ctx) = 0;

  virtual void enterSimpleDeclaration(myParser::SimpleDeclarationContext *ctx) = 0;
  virtual void exitSimpleDeclaration(myParser::SimpleDeclarationContext *ctx) = 0;

  virtual void enterStaticAssertDeclaration(myParser::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(myParser::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterEmptyDeclaration(myParser::EmptyDeclarationContext *ctx) = 0;
  virtual void exitEmptyDeclaration(myParser::EmptyDeclarationContext *ctx) = 0;

  virtual void enterAttributeDeclaration(myParser::AttributeDeclarationContext *ctx) = 0;
  virtual void exitAttributeDeclaration(myParser::AttributeDeclarationContext *ctx) = 0;

  virtual void enterDeclSpecifier(myParser::DeclSpecifierContext *ctx) = 0;
  virtual void exitDeclSpecifier(myParser::DeclSpecifierContext *ctx) = 0;

  virtual void enterDeclSpecifierSeq(myParser::DeclSpecifierSeqContext *ctx) = 0;
  virtual void exitDeclSpecifierSeq(myParser::DeclSpecifierSeqContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(myParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(myParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier(myParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(myParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterTypedefName(myParser::TypedefNameContext *ctx) = 0;
  virtual void exitTypedefName(myParser::TypedefNameContext *ctx) = 0;

  virtual void enterTypeSpecifier(myParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(myParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifier(myParser::TrailingTypeSpecifierContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifier(myParser::TrailingTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifierSeq(myParser::TypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTypeSpecifierSeq(myParser::TypeSpecifierSeqContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifierSeq(myParser::TrailingTypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifierSeq(myParser::TrailingTypeSpecifierSeqContext *ctx) = 0;

  virtual void enterSimpleTypeLengthModifier(myParser::SimpleTypeLengthModifierContext *ctx) = 0;
  virtual void exitSimpleTypeLengthModifier(myParser::SimpleTypeLengthModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSignednessModifier(myParser::SimpleTypeSignednessModifierContext *ctx) = 0;
  virtual void exitSimpleTypeSignednessModifier(myParser::SimpleTypeSignednessModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSpecifier(myParser::SimpleTypeSpecifierContext *ctx) = 0;
  virtual void exitSimpleTypeSpecifier(myParser::SimpleTypeSpecifierContext *ctx) = 0;

  virtual void enterTheTypeName(myParser::TheTypeNameContext *ctx) = 0;
  virtual void exitTheTypeName(myParser::TheTypeNameContext *ctx) = 0;

  virtual void enterDecltypeSpecifier(myParser::DecltypeSpecifierContext *ctx) = 0;
  virtual void exitDecltypeSpecifier(myParser::DecltypeSpecifierContext *ctx) = 0;

  virtual void enterElaboratedTypeSpecifier(myParser::ElaboratedTypeSpecifierContext *ctx) = 0;
  virtual void exitElaboratedTypeSpecifier(myParser::ElaboratedTypeSpecifierContext *ctx) = 0;

  virtual void enterEnumName(myParser::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(myParser::EnumNameContext *ctx) = 0;

  virtual void enterEnumSpecifier(myParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(myParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumHead(myParser::EnumHeadContext *ctx) = 0;
  virtual void exitEnumHead(myParser::EnumHeadContext *ctx) = 0;

  virtual void enterOpaqueEnumDeclaration(myParser::OpaqueEnumDeclarationContext *ctx) = 0;
  virtual void exitOpaqueEnumDeclaration(myParser::OpaqueEnumDeclarationContext *ctx) = 0;

  virtual void enterEnumkey(myParser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(myParser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(myParser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(myParser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorList(myParser::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(myParser::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumeratorDefinition(myParser::EnumeratorDefinitionContext *ctx) = 0;
  virtual void exitEnumeratorDefinition(myParser::EnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumerator(myParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(myParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespaceName(myParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(myParser::NamespaceNameContext *ctx) = 0;

  virtual void enterOriginalNamespaceName(myParser::OriginalNamespaceNameContext *ctx) = 0;
  virtual void exitOriginalNamespaceName(myParser::OriginalNamespaceNameContext *ctx) = 0;

  virtual void enterNamespaceDefinition(myParser::NamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamespaceDefinition(myParser::NamespaceDefinitionContext *ctx) = 0;

  virtual void enterNamespaceAlias(myParser::NamespaceAliasContext *ctx) = 0;
  virtual void exitNamespaceAlias(myParser::NamespaceAliasContext *ctx) = 0;

  virtual void enterNamespaceAliasDefinition(myParser::NamespaceAliasDefinitionContext *ctx) = 0;
  virtual void exitNamespaceAliasDefinition(myParser::NamespaceAliasDefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(myParser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(myParser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingDeclaration(myParser::UsingDeclarationContext *ctx) = 0;
  virtual void exitUsingDeclaration(myParser::UsingDeclarationContext *ctx) = 0;

  virtual void enterUsingDirective(myParser::UsingDirectiveContext *ctx) = 0;
  virtual void exitUsingDirective(myParser::UsingDirectiveContext *ctx) = 0;

  virtual void enterAsmDefinition(myParser::AsmDefinitionContext *ctx) = 0;
  virtual void exitAsmDefinition(myParser::AsmDefinitionContext *ctx) = 0;

  virtual void enterLinkageSpecification(myParser::LinkageSpecificationContext *ctx) = 0;
  virtual void exitLinkageSpecification(myParser::LinkageSpecificationContext *ctx) = 0;

  virtual void enterAttributeSpecifierSeq(myParser::AttributeSpecifierSeqContext *ctx) = 0;
  virtual void exitAttributeSpecifierSeq(myParser::AttributeSpecifierSeqContext *ctx) = 0;

  virtual void enterAttributeSpecifier(myParser::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(myParser::AttributeSpecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(myParser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(myParser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributeList(myParser::AttributeListContext *ctx) = 0;
  virtual void exitAttributeList(myParser::AttributeListContext *ctx) = 0;

  virtual void enterAttribute(myParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(myParser::AttributeContext *ctx) = 0;

  virtual void enterAttributeNamespace(myParser::AttributeNamespaceContext *ctx) = 0;
  virtual void exitAttributeNamespace(myParser::AttributeNamespaceContext *ctx) = 0;

  virtual void enterAttributeArgumentClause(myParser::AttributeArgumentClauseContext *ctx) = 0;
  virtual void exitAttributeArgumentClause(myParser::AttributeArgumentClauseContext *ctx) = 0;

  virtual void enterBalancedTokenSeq(myParser::BalancedTokenSeqContext *ctx) = 0;
  virtual void exitBalancedTokenSeq(myParser::BalancedTokenSeqContext *ctx) = 0;

  virtual void enterBalancedtoken(myParser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(myParser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitDeclaratorList(myParser::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(myParser::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(myParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(myParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(myParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(myParser::DeclaratorContext *ctx) = 0;

  virtual void enterPointerDeclarator(myParser::PointerDeclaratorContext *ctx) = 0;
  virtual void exitPointerDeclarator(myParser::PointerDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerDeclarator(myParser::NoPointerDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerDeclarator(myParser::NoPointerDeclaratorContext *ctx) = 0;

  virtual void enterParametersAndQualifiers(myParser::ParametersAndQualifiersContext *ctx) = 0;
  virtual void exitParametersAndQualifiers(myParser::ParametersAndQualifiersContext *ctx) = 0;

  virtual void enterTrailingReturnType(myParser::TrailingReturnTypeContext *ctx) = 0;
  virtual void exitTrailingReturnType(myParser::TrailingReturnTypeContext *ctx) = 0;

  virtual void enterPointerOperator(myParser::PointerOperatorContext *ctx) = 0;
  virtual void exitPointerOperator(myParser::PointerOperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(myParser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(myParser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvQualifier(myParser::CvQualifierContext *ctx) = 0;
  virtual void exitCvQualifier(myParser::CvQualifierContext *ctx) = 0;

  virtual void enterRefqualifier(myParser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(myParser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(myParser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(myParser::DeclaratoridContext *ctx) = 0;

  virtual void enterTheTypeId(myParser::TheTypeIdContext *ctx) = 0;
  virtual void exitTheTypeId(myParser::TheTypeIdContext *ctx) = 0;

  virtual void enterAbstractDeclarator(myParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(myParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterPointerAbstractDeclarator(myParser::PointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitPointerAbstractDeclarator(myParser::PointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractDeclarator(myParser::NoPointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractDeclarator(myParser::NoPointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterAbstractPackDeclarator(myParser::AbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitAbstractPackDeclarator(myParser::AbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractPackDeclarator(myParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractPackDeclarator(myParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterParameterDeclarationClause(myParser::ParameterDeclarationClauseContext *ctx) = 0;
  virtual void exitParameterDeclarationClause(myParser::ParameterDeclarationClauseContext *ctx) = 0;

  virtual void enterParameterDeclarationList(myParser::ParameterDeclarationListContext *ctx) = 0;
  virtual void exitParameterDeclarationList(myParser::ParameterDeclarationListContext *ctx) = 0;

  virtual void enterParameterDeclaration(myParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(myParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(myParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(myParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionBody(myParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(myParser::FunctionBodyContext *ctx) = 0;

  virtual void enterInitializer(myParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(myParser::InitializerContext *ctx) = 0;

  virtual void enterBraceOrEqualInitializer(myParser::BraceOrEqualInitializerContext *ctx) = 0;
  virtual void exitBraceOrEqualInitializer(myParser::BraceOrEqualInitializerContext *ctx) = 0;

  virtual void enterInitializerClause(myParser::InitializerClauseContext *ctx) = 0;
  virtual void exitInitializerClause(myParser::InitializerClauseContext *ctx) = 0;

  virtual void enterInitializerList(myParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(myParser::InitializerListContext *ctx) = 0;

  virtual void enterBracedInitList(myParser::BracedInitListContext *ctx) = 0;
  virtual void exitBracedInitList(myParser::BracedInitListContext *ctx) = 0;

  virtual void enterClassName(myParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(myParser::ClassNameContext *ctx) = 0;

  virtual void enterClassSpecifier(myParser::ClassSpecifierContext *ctx) = 0;
  virtual void exitClassSpecifier(myParser::ClassSpecifierContext *ctx) = 0;

  virtual void enterClassHead(myParser::ClassHeadContext *ctx) = 0;
  virtual void exitClassHead(myParser::ClassHeadContext *ctx) = 0;

  virtual void enterClassHeadName(myParser::ClassHeadNameContext *ctx) = 0;
  virtual void exitClassHeadName(myParser::ClassHeadNameContext *ctx) = 0;

  virtual void enterClassVirtSpecifier(myParser::ClassVirtSpecifierContext *ctx) = 0;
  virtual void exitClassVirtSpecifier(myParser::ClassVirtSpecifierContext *ctx) = 0;

  virtual void enterClassKey(myParser::ClassKeyContext *ctx) = 0;
  virtual void exitClassKey(myParser::ClassKeyContext *ctx) = 0;

  virtual void enterMemberSpecification(myParser::MemberSpecificationContext *ctx) = 0;
  virtual void exitMemberSpecification(myParser::MemberSpecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(myParser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(myParser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaratorList(myParser::MemberDeclaratorListContext *ctx) = 0;
  virtual void exitMemberDeclaratorList(myParser::MemberDeclaratorListContext *ctx) = 0;

  virtual void enterMemberDeclarator(myParser::MemberDeclaratorContext *ctx) = 0;
  virtual void exitMemberDeclarator(myParser::MemberDeclaratorContext *ctx) = 0;

  virtual void enterVirtualSpecifierSeq(myParser::VirtualSpecifierSeqContext *ctx) = 0;
  virtual void exitVirtualSpecifierSeq(myParser::VirtualSpecifierSeqContext *ctx) = 0;

  virtual void enterVirtualSpecifier(myParser::VirtualSpecifierContext *ctx) = 0;
  virtual void exitVirtualSpecifier(myParser::VirtualSpecifierContext *ctx) = 0;

  virtual void enterPureSpecifier(myParser::PureSpecifierContext *ctx) = 0;
  virtual void exitPureSpecifier(myParser::PureSpecifierContext *ctx) = 0;

  virtual void enterBaseClause(myParser::BaseClauseContext *ctx) = 0;
  virtual void exitBaseClause(myParser::BaseClauseContext *ctx) = 0;

  virtual void enterBaseSpecifierList(myParser::BaseSpecifierListContext *ctx) = 0;
  virtual void exitBaseSpecifierList(myParser::BaseSpecifierListContext *ctx) = 0;

  virtual void enterBaseSpecifier(myParser::BaseSpecifierContext *ctx) = 0;
  virtual void exitBaseSpecifier(myParser::BaseSpecifierContext *ctx) = 0;

  virtual void enterClassOrDeclType(myParser::ClassOrDeclTypeContext *ctx) = 0;
  virtual void exitClassOrDeclType(myParser::ClassOrDeclTypeContext *ctx) = 0;

  virtual void enterBaseTypeSpecifier(myParser::BaseTypeSpecifierContext *ctx) = 0;
  virtual void exitBaseTypeSpecifier(myParser::BaseTypeSpecifierContext *ctx) = 0;

  virtual void enterAccessSpecifier(myParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(myParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterConversionFunctionId(myParser::ConversionFunctionIdContext *ctx) = 0;
  virtual void exitConversionFunctionId(myParser::ConversionFunctionIdContext *ctx) = 0;

  virtual void enterConversionTypeId(myParser::ConversionTypeIdContext *ctx) = 0;
  virtual void exitConversionTypeId(myParser::ConversionTypeIdContext *ctx) = 0;

  virtual void enterConversionDeclarator(myParser::ConversionDeclaratorContext *ctx) = 0;
  virtual void exitConversionDeclarator(myParser::ConversionDeclaratorContext *ctx) = 0;

  virtual void enterConstructorInitializer(myParser::ConstructorInitializerContext *ctx) = 0;
  virtual void exitConstructorInitializer(myParser::ConstructorInitializerContext *ctx) = 0;

  virtual void enterMemInitializerList(myParser::MemInitializerListContext *ctx) = 0;
  virtual void exitMemInitializerList(myParser::MemInitializerListContext *ctx) = 0;

  virtual void enterMemInitializer(myParser::MemInitializerContext *ctx) = 0;
  virtual void exitMemInitializer(myParser::MemInitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(myParser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(myParser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorFunctionId(myParser::OperatorFunctionIdContext *ctx) = 0;
  virtual void exitOperatorFunctionId(myParser::OperatorFunctionIdContext *ctx) = 0;

  virtual void enterLiteralOperatorId(myParser::LiteralOperatorIdContext *ctx) = 0;
  virtual void exitLiteralOperatorId(myParser::LiteralOperatorIdContext *ctx) = 0;

  virtual void enterTemplateDeclaration(myParser::TemplateDeclarationContext *ctx) = 0;
  virtual void exitTemplateDeclaration(myParser::TemplateDeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterList(myParser::TemplateparameterListContext *ctx) = 0;
  virtual void exitTemplateparameterList(myParser::TemplateparameterListContext *ctx) = 0;

  virtual void enterTemplateParameter(myParser::TemplateParameterContext *ctx) = 0;
  virtual void exitTemplateParameter(myParser::TemplateParameterContext *ctx) = 0;

  virtual void enterTypeParameter(myParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(myParser::TypeParameterContext *ctx) = 0;

  virtual void enterSimpleTemplateId(myParser::SimpleTemplateIdContext *ctx) = 0;
  virtual void exitSimpleTemplateId(myParser::SimpleTemplateIdContext *ctx) = 0;

  virtual void enterTemplateId(myParser::TemplateIdContext *ctx) = 0;
  virtual void exitTemplateId(myParser::TemplateIdContext *ctx) = 0;

  virtual void enterTemplateName(myParser::TemplateNameContext *ctx) = 0;
  virtual void exitTemplateName(myParser::TemplateNameContext *ctx) = 0;

  virtual void enterTemplateArgumentList(myParser::TemplateArgumentListContext *ctx) = 0;
  virtual void exitTemplateArgumentList(myParser::TemplateArgumentListContext *ctx) = 0;

  virtual void enterTemplateArgument(myParser::TemplateArgumentContext *ctx) = 0;
  virtual void exitTemplateArgument(myParser::TemplateArgumentContext *ctx) = 0;

  virtual void enterTypeNameSpecifier(myParser::TypeNameSpecifierContext *ctx) = 0;
  virtual void exitTypeNameSpecifier(myParser::TypeNameSpecifierContext *ctx) = 0;

  virtual void enterExplicitInstantiation(myParser::ExplicitInstantiationContext *ctx) = 0;
  virtual void exitExplicitInstantiation(myParser::ExplicitInstantiationContext *ctx) = 0;

  virtual void enterExplicitSpecialization(myParser::ExplicitSpecializationContext *ctx) = 0;
  virtual void exitExplicitSpecialization(myParser::ExplicitSpecializationContext *ctx) = 0;

  virtual void enterTryBlock(myParser::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(myParser::TryBlockContext *ctx) = 0;

  virtual void enterFunctionTryBlock(myParser::FunctionTryBlockContext *ctx) = 0;
  virtual void exitFunctionTryBlock(myParser::FunctionTryBlockContext *ctx) = 0;

  virtual void enterHandlerSeq(myParser::HandlerSeqContext *ctx) = 0;
  virtual void exitHandlerSeq(myParser::HandlerSeqContext *ctx) = 0;

  virtual void enterHandler(myParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(myParser::HandlerContext *ctx) = 0;

  virtual void enterExceptionDeclaration(myParser::ExceptionDeclarationContext *ctx) = 0;
  virtual void exitExceptionDeclaration(myParser::ExceptionDeclarationContext *ctx) = 0;

  virtual void enterThrowExpression(myParser::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(myParser::ThrowExpressionContext *ctx) = 0;

  virtual void enterExceptionSpecification(myParser::ExceptionSpecificationContext *ctx) = 0;
  virtual void exitExceptionSpecification(myParser::ExceptionSpecificationContext *ctx) = 0;

  virtual void enterDynamicExceptionSpecification(myParser::DynamicExceptionSpecificationContext *ctx) = 0;
  virtual void exitDynamicExceptionSpecification(myParser::DynamicExceptionSpecificationContext *ctx) = 0;

  virtual void enterTypeIdList(myParser::TypeIdListContext *ctx) = 0;
  virtual void exitTypeIdList(myParser::TypeIdListContext *ctx) = 0;

  virtual void enterNoeExceptSpecification(myParser::NoeExceptSpecificationContext *ctx) = 0;
  virtual void exitNoeExceptSpecification(myParser::NoeExceptSpecificationContext *ctx) = 0;

  virtual void enterTheOperator(myParser::TheOperatorContext *ctx) = 0;
  virtual void exitTheOperator(myParser::TheOperatorContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;


};

