
// Generated from my.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrimaryExpression(myParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(myParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterGenericSelection(myParser::GenericSelectionContext *ctx) = 0;
  virtual void exitGenericSelection(myParser::GenericSelectionContext *ctx) = 0;

  virtual void enterGenericAssocList(myParser::GenericAssocListContext *ctx) = 0;
  virtual void exitGenericAssocList(myParser::GenericAssocListContext *ctx) = 0;

  virtual void enterGenericAssociation(myParser::GenericAssociationContext *ctx) = 0;
  virtual void exitGenericAssociation(myParser::GenericAssociationContext *ctx) = 0;

  virtual void enterPostfixExpression(myParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(myParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterArgumentExpressionList(myParser::ArgumentExpressionListContext *ctx) = 0;
  virtual void exitArgumentExpressionList(myParser::ArgumentExpressionListContext *ctx) = 0;

  virtual void enterUnaryExpression(myParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(myParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(myParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(myParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterCastExpression(myParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(myParser::CastExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(myParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(myParser::ShiftExpressionContext *ctx) = 0;

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

  virtual void enterDeclaration(myParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(myParser::DeclarationContext *ctx) = 0;

  virtual void enterDeclarationSpecifiers(myParser::DeclarationSpecifiersContext *ctx) = 0;
  virtual void exitDeclarationSpecifiers(myParser::DeclarationSpecifiersContext *ctx) = 0;

  virtual void enterDeclarationSpecifiers2(myParser::DeclarationSpecifiers2Context *ctx) = 0;
  virtual void exitDeclarationSpecifiers2(myParser::DeclarationSpecifiers2Context *ctx) = 0;

  virtual void enterDeclarationSpecifier(myParser::DeclarationSpecifierContext *ctx) = 0;
  virtual void exitDeclarationSpecifier(myParser::DeclarationSpecifierContext *ctx) = 0;

  virtual void enterInitDeclaratorList(myParser::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(myParser::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(myParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(myParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(myParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(myParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifier(myParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(myParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterStructOrUnionSpecifier(myParser::StructOrUnionSpecifierContext *ctx) = 0;
  virtual void exitStructOrUnionSpecifier(myParser::StructOrUnionSpecifierContext *ctx) = 0;

  virtual void enterStructOrUnion(myParser::StructOrUnionContext *ctx) = 0;
  virtual void exitStructOrUnion(myParser::StructOrUnionContext *ctx) = 0;

  virtual void enterStructDeclarationList(myParser::StructDeclarationListContext *ctx) = 0;
  virtual void exitStructDeclarationList(myParser::StructDeclarationListContext *ctx) = 0;

  virtual void enterStructDeclaration(myParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(myParser::StructDeclarationContext *ctx) = 0;

  virtual void enterSpecifierQualifierList(myParser::SpecifierQualifierListContext *ctx) = 0;
  virtual void exitSpecifierQualifierList(myParser::SpecifierQualifierListContext *ctx) = 0;

  virtual void enterStructDeclaratorList(myParser::StructDeclaratorListContext *ctx) = 0;
  virtual void exitStructDeclaratorList(myParser::StructDeclaratorListContext *ctx) = 0;

  virtual void enterStructDeclarator(myParser::StructDeclaratorContext *ctx) = 0;
  virtual void exitStructDeclarator(myParser::StructDeclaratorContext *ctx) = 0;

  virtual void enterEnumSpecifier(myParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(myParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumeratorList(myParser::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(myParser::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumerator(myParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(myParser::EnumeratorContext *ctx) = 0;

  virtual void enterEnumerationConstant(myParser::EnumerationConstantContext *ctx) = 0;
  virtual void exitEnumerationConstant(myParser::EnumerationConstantContext *ctx) = 0;

  virtual void enterAtomicTypeSpecifier(myParser::AtomicTypeSpecifierContext *ctx) = 0;
  virtual void exitAtomicTypeSpecifier(myParser::AtomicTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeQualifier(myParser::TypeQualifierContext *ctx) = 0;
  virtual void exitTypeQualifier(myParser::TypeQualifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier(myParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(myParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterAlignmentSpecifier(myParser::AlignmentSpecifierContext *ctx) = 0;
  virtual void exitAlignmentSpecifier(myParser::AlignmentSpecifierContext *ctx) = 0;

  virtual void enterDeclarator(myParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(myParser::DeclaratorContext *ctx) = 0;

  virtual void enterDirectDeclarator(myParser::DirectDeclaratorContext *ctx) = 0;
  virtual void exitDirectDeclarator(myParser::DirectDeclaratorContext *ctx) = 0;

  virtual void enterVcSpecificModifer(myParser::VcSpecificModiferContext *ctx) = 0;
  virtual void exitVcSpecificModifer(myParser::VcSpecificModiferContext *ctx) = 0;

  virtual void enterGccDeclaratorExtension(myParser::GccDeclaratorExtensionContext *ctx) = 0;
  virtual void exitGccDeclaratorExtension(myParser::GccDeclaratorExtensionContext *ctx) = 0;

  virtual void enterGccAttributeSpecifier(myParser::GccAttributeSpecifierContext *ctx) = 0;
  virtual void exitGccAttributeSpecifier(myParser::GccAttributeSpecifierContext *ctx) = 0;

  virtual void enterGccAttributeList(myParser::GccAttributeListContext *ctx) = 0;
  virtual void exitGccAttributeList(myParser::GccAttributeListContext *ctx) = 0;

  virtual void enterGccAttribute(myParser::GccAttributeContext *ctx) = 0;
  virtual void exitGccAttribute(myParser::GccAttributeContext *ctx) = 0;

  virtual void enterNestedParenthesesBlock(myParser::NestedParenthesesBlockContext *ctx) = 0;
  virtual void exitNestedParenthesesBlock(myParser::NestedParenthesesBlockContext *ctx) = 0;

  virtual void enterPointer(myParser::PointerContext *ctx) = 0;
  virtual void exitPointer(myParser::PointerContext *ctx) = 0;

  virtual void enterTypeQualifierList(myParser::TypeQualifierListContext *ctx) = 0;
  virtual void exitTypeQualifierList(myParser::TypeQualifierListContext *ctx) = 0;

  virtual void enterParameterTypeList(myParser::ParameterTypeListContext *ctx) = 0;
  virtual void exitParameterTypeList(myParser::ParameterTypeListContext *ctx) = 0;

  virtual void enterParameterList(myParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(myParser::ParameterListContext *ctx) = 0;

  virtual void enterParameterDeclaration(myParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(myParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterIdentifierList(myParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(myParser::IdentifierListContext *ctx) = 0;

  virtual void enterTypeName(myParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(myParser::TypeNameContext *ctx) = 0;

  virtual void enterAbstractDeclarator(myParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(myParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterDirectAbstractDeclarator(myParser::DirectAbstractDeclaratorContext *ctx) = 0;
  virtual void exitDirectAbstractDeclarator(myParser::DirectAbstractDeclaratorContext *ctx) = 0;

  virtual void enterTypedefName(myParser::TypedefNameContext *ctx) = 0;
  virtual void exitTypedefName(myParser::TypedefNameContext *ctx) = 0;

  virtual void enterInitializer(myParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(myParser::InitializerContext *ctx) = 0;

  virtual void enterInitializerList(myParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(myParser::InitializerListContext *ctx) = 0;

  virtual void enterDesignation(myParser::DesignationContext *ctx) = 0;
  virtual void exitDesignation(myParser::DesignationContext *ctx) = 0;

  virtual void enterDesignatorList(myParser::DesignatorListContext *ctx) = 0;
  virtual void exitDesignatorList(myParser::DesignatorListContext *ctx) = 0;

  virtual void enterDesignator(myParser::DesignatorContext *ctx) = 0;
  virtual void exitDesignator(myParser::DesignatorContext *ctx) = 0;

  virtual void enterStaticAssertDeclaration(myParser::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(myParser::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(myParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(myParser::LabeledStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(myParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(myParser::CompoundStatementContext *ctx) = 0;

  virtual void enterBlockItemList(myParser::BlockItemListContext *ctx) = 0;
  virtual void exitBlockItemList(myParser::BlockItemListContext *ctx) = 0;

  virtual void enterBlockItem(myParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(myParser::BlockItemContext *ctx) = 0;

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterSelectionStatement(myParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(myParser::SelectionStatementContext *ctx) = 0;

  virtual void enterIterationStatement(myParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(myParser::IterationStatementContext *ctx) = 0;

  virtual void enterForCondition(myParser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(myParser::ForConditionContext *ctx) = 0;

  virtual void enterForDeclaration(myParser::ForDeclarationContext *ctx) = 0;
  virtual void exitForDeclaration(myParser::ForDeclarationContext *ctx) = 0;

  virtual void enterForExpression(myParser::ForExpressionContext *ctx) = 0;
  virtual void exitForExpression(myParser::ForExpressionContext *ctx) = 0;

  virtual void enterJumpStatement(myParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(myParser::JumpStatementContext *ctx) = 0;

  virtual void enterCompilationUnit(myParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(myParser::CompilationUnitContext *ctx) = 0;

  virtual void enterTranslationUnit(myParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(myParser::TranslationUnitContext *ctx) = 0;

  virtual void enterExternalDeclaration(myParser::ExternalDeclarationContext *ctx) = 0;
  virtual void exitExternalDeclaration(myParser::ExternalDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(myParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(myParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterDeclarationList(myParser::DeclarationListContext *ctx) = 0;
  virtual void exitDeclarationList(myParser::DeclarationListContext *ctx) = 0;


};

