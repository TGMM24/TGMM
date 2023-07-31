
// Generated from myParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKotlinFile(myParser::KotlinFileContext *ctx) = 0;
  virtual void exitKotlinFile(myParser::KotlinFileContext *ctx) = 0;

  virtual void enterScript(myParser::ScriptContext *ctx) = 0;
  virtual void exitScript(myParser::ScriptContext *ctx) = 0;

  virtual void enterPreamble(myParser::PreambleContext *ctx) = 0;
  virtual void exitPreamble(myParser::PreambleContext *ctx) = 0;

  virtual void enterFileAnnotations(myParser::FileAnnotationsContext *ctx) = 0;
  virtual void exitFileAnnotations(myParser::FileAnnotationsContext *ctx) = 0;

  virtual void enterFileAnnotation(myParser::FileAnnotationContext *ctx) = 0;
  virtual void exitFileAnnotation(myParser::FileAnnotationContext *ctx) = 0;

  virtual void enterPackageHeader(myParser::PackageHeaderContext *ctx) = 0;
  virtual void exitPackageHeader(myParser::PackageHeaderContext *ctx) = 0;

  virtual void enterImportList(myParser::ImportListContext *ctx) = 0;
  virtual void exitImportList(myParser::ImportListContext *ctx) = 0;

  virtual void enterImportHeader(myParser::ImportHeaderContext *ctx) = 0;
  virtual void exitImportHeader(myParser::ImportHeaderContext *ctx) = 0;

  virtual void enterImportAlias(myParser::ImportAliasContext *ctx) = 0;
  virtual void exitImportAlias(myParser::ImportAliasContext *ctx) = 0;

  virtual void enterTopLevelObject(myParser::TopLevelObjectContext *ctx) = 0;
  virtual void exitTopLevelObject(myParser::TopLevelObjectContext *ctx) = 0;

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterPrimaryConstructor(myParser::PrimaryConstructorContext *ctx) = 0;
  virtual void exitPrimaryConstructor(myParser::PrimaryConstructorContext *ctx) = 0;

  virtual void enterClassParameters(myParser::ClassParametersContext *ctx) = 0;
  virtual void exitClassParameters(myParser::ClassParametersContext *ctx) = 0;

  virtual void enterClassParameter(myParser::ClassParameterContext *ctx) = 0;
  virtual void exitClassParameter(myParser::ClassParameterContext *ctx) = 0;

  virtual void enterDelegationSpecifiers(myParser::DelegationSpecifiersContext *ctx) = 0;
  virtual void exitDelegationSpecifiers(myParser::DelegationSpecifiersContext *ctx) = 0;

  virtual void enterDelegationSpecifier(myParser::DelegationSpecifierContext *ctx) = 0;
  virtual void exitDelegationSpecifier(myParser::DelegationSpecifierContext *ctx) = 0;

  virtual void enterConstructorInvocation(myParser::ConstructorInvocationContext *ctx) = 0;
  virtual void exitConstructorInvocation(myParser::ConstructorInvocationContext *ctx) = 0;

  virtual void enterExplicitDelegation(myParser::ExplicitDelegationContext *ctx) = 0;
  virtual void exitExplicitDelegation(myParser::ExplicitDelegationContext *ctx) = 0;

  virtual void enterClassBody(myParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(myParser::ClassBodyContext *ctx) = 0;

  virtual void enterClassMemberDeclaration(myParser::ClassMemberDeclarationContext *ctx) = 0;
  virtual void exitClassMemberDeclaration(myParser::ClassMemberDeclarationContext *ctx) = 0;

  virtual void enterAnonymousInitializer(myParser::AnonymousInitializerContext *ctx) = 0;
  virtual void exitAnonymousInitializer(myParser::AnonymousInitializerContext *ctx) = 0;

  virtual void enterSecondaryConstructor(myParser::SecondaryConstructorContext *ctx) = 0;
  virtual void exitSecondaryConstructor(myParser::SecondaryConstructorContext *ctx) = 0;

  virtual void enterConstructorDelegationCall(myParser::ConstructorDelegationCallContext *ctx) = 0;
  virtual void exitConstructorDelegationCall(myParser::ConstructorDelegationCallContext *ctx) = 0;

  virtual void enterEnumClassBody(myParser::EnumClassBodyContext *ctx) = 0;
  virtual void exitEnumClassBody(myParser::EnumClassBodyContext *ctx) = 0;

  virtual void enterEnumEntries(myParser::EnumEntriesContext *ctx) = 0;
  virtual void exitEnumEntries(myParser::EnumEntriesContext *ctx) = 0;

  virtual void enterEnumEntry(myParser::EnumEntryContext *ctx) = 0;
  virtual void exitEnumEntry(myParser::EnumEntryContext *ctx) = 0;

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionValueParameters(myParser::FunctionValueParametersContext *ctx) = 0;
  virtual void exitFunctionValueParameters(myParser::FunctionValueParametersContext *ctx) = 0;

  virtual void enterFunctionValueParameter(myParser::FunctionValueParameterContext *ctx) = 0;
  virtual void exitFunctionValueParameter(myParser::FunctionValueParameterContext *ctx) = 0;

  virtual void enterParameter(myParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(myParser::ParameterContext *ctx) = 0;

  virtual void enterFunctionBody(myParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(myParser::FunctionBodyContext *ctx) = 0;

  virtual void enterObjectDeclaration(myParser::ObjectDeclarationContext *ctx) = 0;
  virtual void exitObjectDeclaration(myParser::ObjectDeclarationContext *ctx) = 0;

  virtual void enterCompanionObject(myParser::CompanionObjectContext *ctx) = 0;
  virtual void exitCompanionObject(myParser::CompanionObjectContext *ctx) = 0;

  virtual void enterPropertyDeclaration(myParser::PropertyDeclarationContext *ctx) = 0;
  virtual void exitPropertyDeclaration(myParser::PropertyDeclarationContext *ctx) = 0;

  virtual void enterMultiVariableDeclaration(myParser::MultiVariableDeclarationContext *ctx) = 0;
  virtual void exitMultiVariableDeclaration(myParser::MultiVariableDeclarationContext *ctx) = 0;

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterGetter(myParser::GetterContext *ctx) = 0;
  virtual void exitGetter(myParser::GetterContext *ctx) = 0;

  virtual void enterSetter(myParser::SetterContext *ctx) = 0;
  virtual void exitSetter(myParser::SetterContext *ctx) = 0;

  virtual void enterTypeAlias(myParser::TypeAliasContext *ctx) = 0;
  virtual void exitTypeAlias(myParser::TypeAliasContext *ctx) = 0;

  virtual void enterTypeParameters(myParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(myParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameter(myParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(myParser::TypeParameterContext *ctx) = 0;

  virtual void enterType(myParser::TypeContext *ctx) = 0;
  virtual void exitType(myParser::TypeContext *ctx) = 0;

  virtual void enterTypeModifierList(myParser::TypeModifierListContext *ctx) = 0;
  virtual void exitTypeModifierList(myParser::TypeModifierListContext *ctx) = 0;

  virtual void enterParenthesizedType(myParser::ParenthesizedTypeContext *ctx) = 0;
  virtual void exitParenthesizedType(myParser::ParenthesizedTypeContext *ctx) = 0;

  virtual void enterNullableType(myParser::NullableTypeContext *ctx) = 0;
  virtual void exitNullableType(myParser::NullableTypeContext *ctx) = 0;

  virtual void enterTypeReference(myParser::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(myParser::TypeReferenceContext *ctx) = 0;

  virtual void enterFunctionType(myParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(myParser::FunctionTypeContext *ctx) = 0;

  virtual void enterFunctionTypeReceiver(myParser::FunctionTypeReceiverContext *ctx) = 0;
  virtual void exitFunctionTypeReceiver(myParser::FunctionTypeReceiverContext *ctx) = 0;

  virtual void enterUserType(myParser::UserTypeContext *ctx) = 0;
  virtual void exitUserType(myParser::UserTypeContext *ctx) = 0;

  virtual void enterSimpleUserType(myParser::SimpleUserTypeContext *ctx) = 0;
  virtual void exitSimpleUserType(myParser::SimpleUserTypeContext *ctx) = 0;

  virtual void enterFunctionTypeParameters(myParser::FunctionTypeParametersContext *ctx) = 0;
  virtual void exitFunctionTypeParameters(myParser::FunctionTypeParametersContext *ctx) = 0;

  virtual void enterTypeConstraints(myParser::TypeConstraintsContext *ctx) = 0;
  virtual void exitTypeConstraints(myParser::TypeConstraintsContext *ctx) = 0;

  virtual void enterTypeConstraint(myParser::TypeConstraintContext *ctx) = 0;
  virtual void exitTypeConstraint(myParser::TypeConstraintContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterStatements(myParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(myParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterBlockLevelExpression(myParser::BlockLevelExpressionContext *ctx) = 0;
  virtual void exitBlockLevelExpression(myParser::BlockLevelExpressionContext *ctx) = 0;

  virtual void enterDeclaration(myParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(myParser::DeclarationContext *ctx) = 0;

  virtual void enterExpression(myParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(myParser::ExpressionContext *ctx) = 0;

  virtual void enterDisjunction(myParser::DisjunctionContext *ctx) = 0;
  virtual void exitDisjunction(myParser::DisjunctionContext *ctx) = 0;

  virtual void enterConjunction(myParser::ConjunctionContext *ctx) = 0;
  virtual void exitConjunction(myParser::ConjunctionContext *ctx) = 0;

  virtual void enterEqualityComparison(myParser::EqualityComparisonContext *ctx) = 0;
  virtual void exitEqualityComparison(myParser::EqualityComparisonContext *ctx) = 0;

  virtual void enterComparison(myParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(myParser::ComparisonContext *ctx) = 0;

  virtual void enterNamedInfix(myParser::NamedInfixContext *ctx) = 0;
  virtual void exitNamedInfix(myParser::NamedInfixContext *ctx) = 0;

  virtual void enterElvisExpression(myParser::ElvisExpressionContext *ctx) = 0;
  virtual void exitElvisExpression(myParser::ElvisExpressionContext *ctx) = 0;

  virtual void enterInfixFunctionCall(myParser::InfixFunctionCallContext *ctx) = 0;
  virtual void exitInfixFunctionCall(myParser::InfixFunctionCallContext *ctx) = 0;

  virtual void enterRangeExpression(myParser::RangeExpressionContext *ctx) = 0;
  virtual void exitRangeExpression(myParser::RangeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterTypeRHS(myParser::TypeRHSContext *ctx) = 0;
  virtual void exitTypeRHS(myParser::TypeRHSContext *ctx) = 0;

  virtual void enterPrefixUnaryExpression(myParser::PrefixUnaryExpressionContext *ctx) = 0;
  virtual void exitPrefixUnaryExpression(myParser::PrefixUnaryExpressionContext *ctx) = 0;

  virtual void enterPostfixUnaryExpression(myParser::PostfixUnaryExpressionContext *ctx) = 0;
  virtual void exitPostfixUnaryExpression(myParser::PostfixUnaryExpressionContext *ctx) = 0;

  virtual void enterAtomicExpression(myParser::AtomicExpressionContext *ctx) = 0;
  virtual void exitAtomicExpression(myParser::AtomicExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterCallSuffix(myParser::CallSuffixContext *ctx) = 0;
  virtual void exitCallSuffix(myParser::CallSuffixContext *ctx) = 0;

  virtual void enterAnnotatedLambda(myParser::AnnotatedLambdaContext *ctx) = 0;
  virtual void exitAnnotatedLambda(myParser::AnnotatedLambdaContext *ctx) = 0;

  virtual void enterArrayAccess(myParser::ArrayAccessContext *ctx) = 0;
  virtual void exitArrayAccess(myParser::ArrayAccessContext *ctx) = 0;

  virtual void enterValueArguments(myParser::ValueArgumentsContext *ctx) = 0;
  virtual void exitValueArguments(myParser::ValueArgumentsContext *ctx) = 0;

  virtual void enterTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeProjection(myParser::TypeProjectionContext *ctx) = 0;
  virtual void exitTypeProjection(myParser::TypeProjectionContext *ctx) = 0;

  virtual void enterTypeProjectionModifierList(myParser::TypeProjectionModifierListContext *ctx) = 0;
  virtual void exitTypeProjectionModifierList(myParser::TypeProjectionModifierListContext *ctx) = 0;

  virtual void enterValueArgument(myParser::ValueArgumentContext *ctx) = 0;
  virtual void exitValueArgument(myParser::ValueArgumentContext *ctx) = 0;

  virtual void enterLiteralConstant(myParser::LiteralConstantContext *ctx) = 0;
  virtual void exitLiteralConstant(myParser::LiteralConstantContext *ctx) = 0;

  virtual void enterStringLiteral(myParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(myParser::StringLiteralContext *ctx) = 0;

  virtual void enterLineStringLiteral(myParser::LineStringLiteralContext *ctx) = 0;
  virtual void exitLineStringLiteral(myParser::LineStringLiteralContext *ctx) = 0;

  virtual void enterMultiLineStringLiteral(myParser::MultiLineStringLiteralContext *ctx) = 0;
  virtual void exitMultiLineStringLiteral(myParser::MultiLineStringLiteralContext *ctx) = 0;

  virtual void enterLineStringContent(myParser::LineStringContentContext *ctx) = 0;
  virtual void exitLineStringContent(myParser::LineStringContentContext *ctx) = 0;

  virtual void enterLineStringExpression(myParser::LineStringExpressionContext *ctx) = 0;
  virtual void exitLineStringExpression(myParser::LineStringExpressionContext *ctx) = 0;

  virtual void enterMultiLineStringContent(myParser::MultiLineStringContentContext *ctx) = 0;
  virtual void exitMultiLineStringContent(myParser::MultiLineStringContentContext *ctx) = 0;

  virtual void enterMultiLineStringExpression(myParser::MultiLineStringExpressionContext *ctx) = 0;
  virtual void exitMultiLineStringExpression(myParser::MultiLineStringExpressionContext *ctx) = 0;

  virtual void enterFunctionLiteral(myParser::FunctionLiteralContext *ctx) = 0;
  virtual void exitFunctionLiteral(myParser::FunctionLiteralContext *ctx) = 0;

  virtual void enterLambdaParameters(myParser::LambdaParametersContext *ctx) = 0;
  virtual void exitLambdaParameters(myParser::LambdaParametersContext *ctx) = 0;

  virtual void enterLambdaParameter(myParser::LambdaParameterContext *ctx) = 0;
  virtual void exitLambdaParameter(myParser::LambdaParameterContext *ctx) = 0;

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;

  virtual void enterCollectionLiteral(myParser::CollectionLiteralContext *ctx) = 0;
  virtual void exitCollectionLiteral(myParser::CollectionLiteralContext *ctx) = 0;

  virtual void enterThisExpression(myParser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(myParser::ThisExpressionContext *ctx) = 0;

  virtual void enterSuperExpression(myParser::SuperExpressionContext *ctx) = 0;
  virtual void exitSuperExpression(myParser::SuperExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(myParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(myParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterIfExpression(myParser::IfExpressionContext *ctx) = 0;
  virtual void exitIfExpression(myParser::IfExpressionContext *ctx) = 0;

  virtual void enterControlStructureBody(myParser::ControlStructureBodyContext *ctx) = 0;
  virtual void exitControlStructureBody(myParser::ControlStructureBodyContext *ctx) = 0;

  virtual void enterWhenExpression(myParser::WhenExpressionContext *ctx) = 0;
  virtual void exitWhenExpression(myParser::WhenExpressionContext *ctx) = 0;

  virtual void enterWhenEntry(myParser::WhenEntryContext *ctx) = 0;
  virtual void exitWhenEntry(myParser::WhenEntryContext *ctx) = 0;

  virtual void enterWhenCondition(myParser::WhenConditionContext *ctx) = 0;
  virtual void exitWhenCondition(myParser::WhenConditionContext *ctx) = 0;

  virtual void enterRangeTest(myParser::RangeTestContext *ctx) = 0;
  virtual void exitRangeTest(myParser::RangeTestContext *ctx) = 0;

  virtual void enterTypeTest(myParser::TypeTestContext *ctx) = 0;
  virtual void exitTypeTest(myParser::TypeTestContext *ctx) = 0;

  virtual void enterTryExpression(myParser::TryExpressionContext *ctx) = 0;
  virtual void exitTryExpression(myParser::TryExpressionContext *ctx) = 0;

  virtual void enterCatchBlock(myParser::CatchBlockContext *ctx) = 0;
  virtual void exitCatchBlock(myParser::CatchBlockContext *ctx) = 0;

  virtual void enterFinallyBlock(myParser::FinallyBlockContext *ctx) = 0;
  virtual void exitFinallyBlock(myParser::FinallyBlockContext *ctx) = 0;

  virtual void enterLoopExpression(myParser::LoopExpressionContext *ctx) = 0;
  virtual void exitLoopExpression(myParser::LoopExpressionContext *ctx) = 0;

  virtual void enterForExpression(myParser::ForExpressionContext *ctx) = 0;
  virtual void exitForExpression(myParser::ForExpressionContext *ctx) = 0;

  virtual void enterWhileExpression(myParser::WhileExpressionContext *ctx) = 0;
  virtual void exitWhileExpression(myParser::WhileExpressionContext *ctx) = 0;

  virtual void enterDoWhileExpression(myParser::DoWhileExpressionContext *ctx) = 0;
  virtual void exitDoWhileExpression(myParser::DoWhileExpressionContext *ctx) = 0;

  virtual void enterJumpExpression(myParser::JumpExpressionContext *ctx) = 0;
  virtual void exitJumpExpression(myParser::JumpExpressionContext *ctx) = 0;

  virtual void enterCallableReference(myParser::CallableReferenceContext *ctx) = 0;
  virtual void exitCallableReference(myParser::CallableReferenceContext *ctx) = 0;

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterEqualityOperation(myParser::EqualityOperationContext *ctx) = 0;
  virtual void exitEqualityOperation(myParser::EqualityOperationContext *ctx) = 0;

  virtual void enterComparisonOperator(myParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(myParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterInOperator(myParser::InOperatorContext *ctx) = 0;
  virtual void exitInOperator(myParser::InOperatorContext *ctx) = 0;

  virtual void enterIsOperator(myParser::IsOperatorContext *ctx) = 0;
  virtual void exitIsOperator(myParser::IsOperatorContext *ctx) = 0;

  virtual void enterAdditiveOperator(myParser::AdditiveOperatorContext *ctx) = 0;
  virtual void exitAdditiveOperator(myParser::AdditiveOperatorContext *ctx) = 0;

  virtual void enterMultiplicativeOperation(myParser::MultiplicativeOperationContext *ctx) = 0;
  virtual void exitMultiplicativeOperation(myParser::MultiplicativeOperationContext *ctx) = 0;

  virtual void enterTypeOperation(myParser::TypeOperationContext *ctx) = 0;
  virtual void exitTypeOperation(myParser::TypeOperationContext *ctx) = 0;

  virtual void enterPrefixUnaryOperation(myParser::PrefixUnaryOperationContext *ctx) = 0;
  virtual void exitPrefixUnaryOperation(myParser::PrefixUnaryOperationContext *ctx) = 0;

  virtual void enterPostfixUnaryOperation(myParser::PostfixUnaryOperationContext *ctx) = 0;
  virtual void exitPostfixUnaryOperation(myParser::PostfixUnaryOperationContext *ctx) = 0;

  virtual void enterMemberAccessOperator(myParser::MemberAccessOperatorContext *ctx) = 0;
  virtual void exitMemberAccessOperator(myParser::MemberAccessOperatorContext *ctx) = 0;

  virtual void enterModifierList(myParser::ModifierListContext *ctx) = 0;
  virtual void exitModifierList(myParser::ModifierListContext *ctx) = 0;

  virtual void enterModifier(myParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(myParser::ModifierContext *ctx) = 0;

  virtual void enterClassModifier(myParser::ClassModifierContext *ctx) = 0;
  virtual void exitClassModifier(myParser::ClassModifierContext *ctx) = 0;

  virtual void enterMemberModifier(myParser::MemberModifierContext *ctx) = 0;
  virtual void exitMemberModifier(myParser::MemberModifierContext *ctx) = 0;

  virtual void enterVisibilityModifier(myParser::VisibilityModifierContext *ctx) = 0;
  virtual void exitVisibilityModifier(myParser::VisibilityModifierContext *ctx) = 0;

  virtual void enterVarianceAnnotation(myParser::VarianceAnnotationContext *ctx) = 0;
  virtual void exitVarianceAnnotation(myParser::VarianceAnnotationContext *ctx) = 0;

  virtual void enterFunctionModifier(myParser::FunctionModifierContext *ctx) = 0;
  virtual void exitFunctionModifier(myParser::FunctionModifierContext *ctx) = 0;

  virtual void enterPropertyModifier(myParser::PropertyModifierContext *ctx) = 0;
  virtual void exitPropertyModifier(myParser::PropertyModifierContext *ctx) = 0;

  virtual void enterInheritanceModifier(myParser::InheritanceModifierContext *ctx) = 0;
  virtual void exitInheritanceModifier(myParser::InheritanceModifierContext *ctx) = 0;

  virtual void enterParameterModifier(myParser::ParameterModifierContext *ctx) = 0;
  virtual void exitParameterModifier(myParser::ParameterModifierContext *ctx) = 0;

  virtual void enterTypeParameterModifier(myParser::TypeParameterModifierContext *ctx) = 0;
  virtual void exitTypeParameterModifier(myParser::TypeParameterModifierContext *ctx) = 0;

  virtual void enterLabelDefinition(myParser::LabelDefinitionContext *ctx) = 0;
  virtual void exitLabelDefinition(myParser::LabelDefinitionContext *ctx) = 0;

  virtual void enterAnnotations(myParser::AnnotationsContext *ctx) = 0;
  virtual void exitAnnotations(myParser::AnnotationsContext *ctx) = 0;

  virtual void enterAnnotation(myParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(myParser::AnnotationContext *ctx) = 0;

  virtual void enterAnnotationList(myParser::AnnotationListContext *ctx) = 0;
  virtual void exitAnnotationList(myParser::AnnotationListContext *ctx) = 0;

  virtual void enterAnnotationUseSiteTarget(myParser::AnnotationUseSiteTargetContext *ctx) = 0;
  virtual void exitAnnotationUseSiteTarget(myParser::AnnotationUseSiteTargetContext *ctx) = 0;

  virtual void enterUnescapedAnnotation(myParser::UnescapedAnnotationContext *ctx) = 0;
  virtual void exitUnescapedAnnotation(myParser::UnescapedAnnotationContext *ctx) = 0;

  virtual void enterIdentifier(myParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(myParser::IdentifierContext *ctx) = 0;

  virtual void enterSimpleIdentifier(myParser::SimpleIdentifierContext *ctx) = 0;
  virtual void exitSimpleIdentifier(myParser::SimpleIdentifierContext *ctx) = 0;

  virtual void enterSemi(myParser::SemiContext *ctx) = 0;
  virtual void exitSemi(myParser::SemiContext *ctx) = 0;

  virtual void enterAnysemi(myParser::AnysemiContext *ctx) = 0;
  virtual void exitAnysemi(myParser::AnysemiContext *ctx) = 0;


};

