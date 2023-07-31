
// Generated from myParser.g4 by ANTLR 4.11.1

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

  virtual void enterKotlinFile(myParser::KotlinFileContext * /*ctx*/) override { }
  virtual void exitKotlinFile(myParser::KotlinFileContext * /*ctx*/) override { }

  virtual void enterScript(myParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(myParser::ScriptContext * /*ctx*/) override { }

  virtual void enterPreamble(myParser::PreambleContext * /*ctx*/) override { }
  virtual void exitPreamble(myParser::PreambleContext * /*ctx*/) override { }

  virtual void enterFileAnnotations(myParser::FileAnnotationsContext * /*ctx*/) override { }
  virtual void exitFileAnnotations(myParser::FileAnnotationsContext * /*ctx*/) override { }

  virtual void enterFileAnnotation(myParser::FileAnnotationContext * /*ctx*/) override { }
  virtual void exitFileAnnotation(myParser::FileAnnotationContext * /*ctx*/) override { }

  virtual void enterPackageHeader(myParser::PackageHeaderContext * /*ctx*/) override { }
  virtual void exitPackageHeader(myParser::PackageHeaderContext * /*ctx*/) override { }

  virtual void enterImportList(myParser::ImportListContext * /*ctx*/) override { }
  virtual void exitImportList(myParser::ImportListContext * /*ctx*/) override { }

  virtual void enterImportHeader(myParser::ImportHeaderContext * /*ctx*/) override { }
  virtual void exitImportHeader(myParser::ImportHeaderContext * /*ctx*/) override { }

  virtual void enterImportAlias(myParser::ImportAliasContext * /*ctx*/) override { }
  virtual void exitImportAlias(myParser::ImportAliasContext * /*ctx*/) override { }

  virtual void enterTopLevelObject(myParser::TopLevelObjectContext * /*ctx*/) override { }
  virtual void exitTopLevelObject(myParser::TopLevelObjectContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterPrimaryConstructor(myParser::PrimaryConstructorContext * /*ctx*/) override { }
  virtual void exitPrimaryConstructor(myParser::PrimaryConstructorContext * /*ctx*/) override { }

  virtual void enterClassParameters(myParser::ClassParametersContext * /*ctx*/) override { }
  virtual void exitClassParameters(myParser::ClassParametersContext * /*ctx*/) override { }

  virtual void enterClassParameter(myParser::ClassParameterContext * /*ctx*/) override { }
  virtual void exitClassParameter(myParser::ClassParameterContext * /*ctx*/) override { }

  virtual void enterDelegationSpecifiers(myParser::DelegationSpecifiersContext * /*ctx*/) override { }
  virtual void exitDelegationSpecifiers(myParser::DelegationSpecifiersContext * /*ctx*/) override { }

  virtual void enterDelegationSpecifier(myParser::DelegationSpecifierContext * /*ctx*/) override { }
  virtual void exitDelegationSpecifier(myParser::DelegationSpecifierContext * /*ctx*/) override { }

  virtual void enterConstructorInvocation(myParser::ConstructorInvocationContext * /*ctx*/) override { }
  virtual void exitConstructorInvocation(myParser::ConstructorInvocationContext * /*ctx*/) override { }

  virtual void enterExplicitDelegation(myParser::ExplicitDelegationContext * /*ctx*/) override { }
  virtual void exitExplicitDelegation(myParser::ExplicitDelegationContext * /*ctx*/) override { }

  virtual void enterClassBody(myParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(myParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterClassMemberDeclaration(myParser::ClassMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitClassMemberDeclaration(myParser::ClassMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterAnonymousInitializer(myParser::AnonymousInitializerContext * /*ctx*/) override { }
  virtual void exitAnonymousInitializer(myParser::AnonymousInitializerContext * /*ctx*/) override { }

  virtual void enterSecondaryConstructor(myParser::SecondaryConstructorContext * /*ctx*/) override { }
  virtual void exitSecondaryConstructor(myParser::SecondaryConstructorContext * /*ctx*/) override { }

  virtual void enterConstructorDelegationCall(myParser::ConstructorDelegationCallContext * /*ctx*/) override { }
  virtual void exitConstructorDelegationCall(myParser::ConstructorDelegationCallContext * /*ctx*/) override { }

  virtual void enterEnumClassBody(myParser::EnumClassBodyContext * /*ctx*/) override { }
  virtual void exitEnumClassBody(myParser::EnumClassBodyContext * /*ctx*/) override { }

  virtual void enterEnumEntries(myParser::EnumEntriesContext * /*ctx*/) override { }
  virtual void exitEnumEntries(myParser::EnumEntriesContext * /*ctx*/) override { }

  virtual void enterEnumEntry(myParser::EnumEntryContext * /*ctx*/) override { }
  virtual void exitEnumEntry(myParser::EnumEntryContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionValueParameters(myParser::FunctionValueParametersContext * /*ctx*/) override { }
  virtual void exitFunctionValueParameters(myParser::FunctionValueParametersContext * /*ctx*/) override { }

  virtual void enterFunctionValueParameter(myParser::FunctionValueParameterContext * /*ctx*/) override { }
  virtual void exitFunctionValueParameter(myParser::FunctionValueParameterContext * /*ctx*/) override { }

  virtual void enterParameter(myParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(myParser::ParameterContext * /*ctx*/) override { }

  virtual void enterFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterObjectDeclaration(myParser::ObjectDeclarationContext * /*ctx*/) override { }
  virtual void exitObjectDeclaration(myParser::ObjectDeclarationContext * /*ctx*/) override { }

  virtual void enterCompanionObject(myParser::CompanionObjectContext * /*ctx*/) override { }
  virtual void exitCompanionObject(myParser::CompanionObjectContext * /*ctx*/) override { }

  virtual void enterPropertyDeclaration(myParser::PropertyDeclarationContext * /*ctx*/) override { }
  virtual void exitPropertyDeclaration(myParser::PropertyDeclarationContext * /*ctx*/) override { }

  virtual void enterMultiVariableDeclaration(myParser::MultiVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitMultiVariableDeclaration(myParser::MultiVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterGetter(myParser::GetterContext * /*ctx*/) override { }
  virtual void exitGetter(myParser::GetterContext * /*ctx*/) override { }

  virtual void enterSetter(myParser::SetterContext * /*ctx*/) override { }
  virtual void exitSetter(myParser::SetterContext * /*ctx*/) override { }

  virtual void enterTypeAlias(myParser::TypeAliasContext * /*ctx*/) override { }
  virtual void exitTypeAlias(myParser::TypeAliasContext * /*ctx*/) override { }

  virtual void enterTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterType(myParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(myParser::TypeContext * /*ctx*/) override { }

  virtual void enterTypeModifierList(myParser::TypeModifierListContext * /*ctx*/) override { }
  virtual void exitTypeModifierList(myParser::TypeModifierListContext * /*ctx*/) override { }

  virtual void enterParenthesizedType(myParser::ParenthesizedTypeContext * /*ctx*/) override { }
  virtual void exitParenthesizedType(myParser::ParenthesizedTypeContext * /*ctx*/) override { }

  virtual void enterNullableType(myParser::NullableTypeContext * /*ctx*/) override { }
  virtual void exitNullableType(myParser::NullableTypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(myParser::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(myParser::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterFunctionTypeReceiver(myParser::FunctionTypeReceiverContext * /*ctx*/) override { }
  virtual void exitFunctionTypeReceiver(myParser::FunctionTypeReceiverContext * /*ctx*/) override { }

  virtual void enterUserType(myParser::UserTypeContext * /*ctx*/) override { }
  virtual void exitUserType(myParser::UserTypeContext * /*ctx*/) override { }

  virtual void enterSimpleUserType(myParser::SimpleUserTypeContext * /*ctx*/) override { }
  virtual void exitSimpleUserType(myParser::SimpleUserTypeContext * /*ctx*/) override { }

  virtual void enterFunctionTypeParameters(myParser::FunctionTypeParametersContext * /*ctx*/) override { }
  virtual void exitFunctionTypeParameters(myParser::FunctionTypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeConstraints(myParser::TypeConstraintsContext * /*ctx*/) override { }
  virtual void exitTypeConstraints(myParser::TypeConstraintsContext * /*ctx*/) override { }

  virtual void enterTypeConstraint(myParser::TypeConstraintContext * /*ctx*/) override { }
  virtual void exitTypeConstraint(myParser::TypeConstraintContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatements(myParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(myParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlockLevelExpression(myParser::BlockLevelExpressionContext * /*ctx*/) override { }
  virtual void exitBlockLevelExpression(myParser::BlockLevelExpressionContext * /*ctx*/) override { }

  virtual void enterDeclaration(myParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(myParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterDisjunction(myParser::DisjunctionContext * /*ctx*/) override { }
  virtual void exitDisjunction(myParser::DisjunctionContext * /*ctx*/) override { }

  virtual void enterConjunction(myParser::ConjunctionContext * /*ctx*/) override { }
  virtual void exitConjunction(myParser::ConjunctionContext * /*ctx*/) override { }

  virtual void enterEqualityComparison(myParser::EqualityComparisonContext * /*ctx*/) override { }
  virtual void exitEqualityComparison(myParser::EqualityComparisonContext * /*ctx*/) override { }

  virtual void enterComparison(myParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(myParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterNamedInfix(myParser::NamedInfixContext * /*ctx*/) override { }
  virtual void exitNamedInfix(myParser::NamedInfixContext * /*ctx*/) override { }

  virtual void enterElvisExpression(myParser::ElvisExpressionContext * /*ctx*/) override { }
  virtual void exitElvisExpression(myParser::ElvisExpressionContext * /*ctx*/) override { }

  virtual void enterInfixFunctionCall(myParser::InfixFunctionCallContext * /*ctx*/) override { }
  virtual void exitInfixFunctionCall(myParser::InfixFunctionCallContext * /*ctx*/) override { }

  virtual void enterRangeExpression(myParser::RangeExpressionContext * /*ctx*/) override { }
  virtual void exitRangeExpression(myParser::RangeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterTypeRHS(myParser::TypeRHSContext * /*ctx*/) override { }
  virtual void exitTypeRHS(myParser::TypeRHSContext * /*ctx*/) override { }

  virtual void enterPrefixUnaryExpression(myParser::PrefixUnaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrefixUnaryExpression(myParser::PrefixUnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixUnaryExpression(myParser::PostfixUnaryExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixUnaryExpression(myParser::PostfixUnaryExpressionContext * /*ctx*/) override { }

  virtual void enterAtomicExpression(myParser::AtomicExpressionContext * /*ctx*/) override { }
  virtual void exitAtomicExpression(myParser::AtomicExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterCallSuffix(myParser::CallSuffixContext * /*ctx*/) override { }
  virtual void exitCallSuffix(myParser::CallSuffixContext * /*ctx*/) override { }

  virtual void enterAnnotatedLambda(myParser::AnnotatedLambdaContext * /*ctx*/) override { }
  virtual void exitAnnotatedLambda(myParser::AnnotatedLambdaContext * /*ctx*/) override { }

  virtual void enterArrayAccess(myParser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(myParser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterValueArguments(myParser::ValueArgumentsContext * /*ctx*/) override { }
  virtual void exitValueArguments(myParser::ValueArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeProjection(myParser::TypeProjectionContext * /*ctx*/) override { }
  virtual void exitTypeProjection(myParser::TypeProjectionContext * /*ctx*/) override { }

  virtual void enterTypeProjectionModifierList(myParser::TypeProjectionModifierListContext * /*ctx*/) override { }
  virtual void exitTypeProjectionModifierList(myParser::TypeProjectionModifierListContext * /*ctx*/) override { }

  virtual void enterValueArgument(myParser::ValueArgumentContext * /*ctx*/) override { }
  virtual void exitValueArgument(myParser::ValueArgumentContext * /*ctx*/) override { }

  virtual void enterLiteralConstant(myParser::LiteralConstantContext * /*ctx*/) override { }
  virtual void exitLiteralConstant(myParser::LiteralConstantContext * /*ctx*/) override { }

  virtual void enterStringLiteral(myParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(myParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterLineStringLiteral(myParser::LineStringLiteralContext * /*ctx*/) override { }
  virtual void exitLineStringLiteral(myParser::LineStringLiteralContext * /*ctx*/) override { }

  virtual void enterMultiLineStringLiteral(myParser::MultiLineStringLiteralContext * /*ctx*/) override { }
  virtual void exitMultiLineStringLiteral(myParser::MultiLineStringLiteralContext * /*ctx*/) override { }

  virtual void enterLineStringContent(myParser::LineStringContentContext * /*ctx*/) override { }
  virtual void exitLineStringContent(myParser::LineStringContentContext * /*ctx*/) override { }

  virtual void enterLineStringExpression(myParser::LineStringExpressionContext * /*ctx*/) override { }
  virtual void exitLineStringExpression(myParser::LineStringExpressionContext * /*ctx*/) override { }

  virtual void enterMultiLineStringContent(myParser::MultiLineStringContentContext * /*ctx*/) override { }
  virtual void exitMultiLineStringContent(myParser::MultiLineStringContentContext * /*ctx*/) override { }

  virtual void enterMultiLineStringExpression(myParser::MultiLineStringExpressionContext * /*ctx*/) override { }
  virtual void exitMultiLineStringExpression(myParser::MultiLineStringExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionLiteral(myParser::FunctionLiteralContext * /*ctx*/) override { }
  virtual void exitFunctionLiteral(myParser::FunctionLiteralContext * /*ctx*/) override { }

  virtual void enterLambdaParameters(myParser::LambdaParametersContext * /*ctx*/) override { }
  virtual void exitLambdaParameters(myParser::LambdaParametersContext * /*ctx*/) override { }

  virtual void enterLambdaParameter(myParser::LambdaParameterContext * /*ctx*/) override { }
  virtual void exitLambdaParameter(myParser::LambdaParameterContext * /*ctx*/) override { }

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }

  virtual void enterCollectionLiteral(myParser::CollectionLiteralContext * /*ctx*/) override { }
  virtual void exitCollectionLiteral(myParser::CollectionLiteralContext * /*ctx*/) override { }

  virtual void enterThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }
  virtual void exitThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }

  virtual void enterSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }
  virtual void exitSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(myParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(myParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterIfExpression(myParser::IfExpressionContext * /*ctx*/) override { }
  virtual void exitIfExpression(myParser::IfExpressionContext * /*ctx*/) override { }

  virtual void enterControlStructureBody(myParser::ControlStructureBodyContext * /*ctx*/) override { }
  virtual void exitControlStructureBody(myParser::ControlStructureBodyContext * /*ctx*/) override { }

  virtual void enterWhenExpression(myParser::WhenExpressionContext * /*ctx*/) override { }
  virtual void exitWhenExpression(myParser::WhenExpressionContext * /*ctx*/) override { }

  virtual void enterWhenEntry(myParser::WhenEntryContext * /*ctx*/) override { }
  virtual void exitWhenEntry(myParser::WhenEntryContext * /*ctx*/) override { }

  virtual void enterWhenCondition(myParser::WhenConditionContext * /*ctx*/) override { }
  virtual void exitWhenCondition(myParser::WhenConditionContext * /*ctx*/) override { }

  virtual void enterRangeTest(myParser::RangeTestContext * /*ctx*/) override { }
  virtual void exitRangeTest(myParser::RangeTestContext * /*ctx*/) override { }

  virtual void enterTypeTest(myParser::TypeTestContext * /*ctx*/) override { }
  virtual void exitTypeTest(myParser::TypeTestContext * /*ctx*/) override { }

  virtual void enterTryExpression(myParser::TryExpressionContext * /*ctx*/) override { }
  virtual void exitTryExpression(myParser::TryExpressionContext * /*ctx*/) override { }

  virtual void enterCatchBlock(myParser::CatchBlockContext * /*ctx*/) override { }
  virtual void exitCatchBlock(myParser::CatchBlockContext * /*ctx*/) override { }

  virtual void enterFinallyBlock(myParser::FinallyBlockContext * /*ctx*/) override { }
  virtual void exitFinallyBlock(myParser::FinallyBlockContext * /*ctx*/) override { }

  virtual void enterLoopExpression(myParser::LoopExpressionContext * /*ctx*/) override { }
  virtual void exitLoopExpression(myParser::LoopExpressionContext * /*ctx*/) override { }

  virtual void enterForExpression(myParser::ForExpressionContext * /*ctx*/) override { }
  virtual void exitForExpression(myParser::ForExpressionContext * /*ctx*/) override { }

  virtual void enterWhileExpression(myParser::WhileExpressionContext * /*ctx*/) override { }
  virtual void exitWhileExpression(myParser::WhileExpressionContext * /*ctx*/) override { }

  virtual void enterDoWhileExpression(myParser::DoWhileExpressionContext * /*ctx*/) override { }
  virtual void exitDoWhileExpression(myParser::DoWhileExpressionContext * /*ctx*/) override { }

  virtual void enterJumpExpression(myParser::JumpExpressionContext * /*ctx*/) override { }
  virtual void exitJumpExpression(myParser::JumpExpressionContext * /*ctx*/) override { }

  virtual void enterCallableReference(myParser::CallableReferenceContext * /*ctx*/) override { }
  virtual void exitCallableReference(myParser::CallableReferenceContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterEqualityOperation(myParser::EqualityOperationContext * /*ctx*/) override { }
  virtual void exitEqualityOperation(myParser::EqualityOperationContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(myParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(myParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterInOperator(myParser::InOperatorContext * /*ctx*/) override { }
  virtual void exitInOperator(myParser::InOperatorContext * /*ctx*/) override { }

  virtual void enterIsOperator(myParser::IsOperatorContext * /*ctx*/) override { }
  virtual void exitIsOperator(myParser::IsOperatorContext * /*ctx*/) override { }

  virtual void enterAdditiveOperator(myParser::AdditiveOperatorContext * /*ctx*/) override { }
  virtual void exitAdditiveOperator(myParser::AdditiveOperatorContext * /*ctx*/) override { }

  virtual void enterMultiplicativeOperation(myParser::MultiplicativeOperationContext * /*ctx*/) override { }
  virtual void exitMultiplicativeOperation(myParser::MultiplicativeOperationContext * /*ctx*/) override { }

  virtual void enterTypeOperation(myParser::TypeOperationContext * /*ctx*/) override { }
  virtual void exitTypeOperation(myParser::TypeOperationContext * /*ctx*/) override { }

  virtual void enterPrefixUnaryOperation(myParser::PrefixUnaryOperationContext * /*ctx*/) override { }
  virtual void exitPrefixUnaryOperation(myParser::PrefixUnaryOperationContext * /*ctx*/) override { }

  virtual void enterPostfixUnaryOperation(myParser::PostfixUnaryOperationContext * /*ctx*/) override { }
  virtual void exitPostfixUnaryOperation(myParser::PostfixUnaryOperationContext * /*ctx*/) override { }

  virtual void enterMemberAccessOperator(myParser::MemberAccessOperatorContext * /*ctx*/) override { }
  virtual void exitMemberAccessOperator(myParser::MemberAccessOperatorContext * /*ctx*/) override { }

  virtual void enterModifierList(myParser::ModifierListContext * /*ctx*/) override { }
  virtual void exitModifierList(myParser::ModifierListContext * /*ctx*/) override { }

  virtual void enterModifier(myParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(myParser::ModifierContext * /*ctx*/) override { }

  virtual void enterClassModifier(myParser::ClassModifierContext * /*ctx*/) override { }
  virtual void exitClassModifier(myParser::ClassModifierContext * /*ctx*/) override { }

  virtual void enterMemberModifier(myParser::MemberModifierContext * /*ctx*/) override { }
  virtual void exitMemberModifier(myParser::MemberModifierContext * /*ctx*/) override { }

  virtual void enterVisibilityModifier(myParser::VisibilityModifierContext * /*ctx*/) override { }
  virtual void exitVisibilityModifier(myParser::VisibilityModifierContext * /*ctx*/) override { }

  virtual void enterVarianceAnnotation(myParser::VarianceAnnotationContext * /*ctx*/) override { }
  virtual void exitVarianceAnnotation(myParser::VarianceAnnotationContext * /*ctx*/) override { }

  virtual void enterFunctionModifier(myParser::FunctionModifierContext * /*ctx*/) override { }
  virtual void exitFunctionModifier(myParser::FunctionModifierContext * /*ctx*/) override { }

  virtual void enterPropertyModifier(myParser::PropertyModifierContext * /*ctx*/) override { }
  virtual void exitPropertyModifier(myParser::PropertyModifierContext * /*ctx*/) override { }

  virtual void enterInheritanceModifier(myParser::InheritanceModifierContext * /*ctx*/) override { }
  virtual void exitInheritanceModifier(myParser::InheritanceModifierContext * /*ctx*/) override { }

  virtual void enterParameterModifier(myParser::ParameterModifierContext * /*ctx*/) override { }
  virtual void exitParameterModifier(myParser::ParameterModifierContext * /*ctx*/) override { }

  virtual void enterTypeParameterModifier(myParser::TypeParameterModifierContext * /*ctx*/) override { }
  virtual void exitTypeParameterModifier(myParser::TypeParameterModifierContext * /*ctx*/) override { }

  virtual void enterLabelDefinition(myParser::LabelDefinitionContext * /*ctx*/) override { }
  virtual void exitLabelDefinition(myParser::LabelDefinitionContext * /*ctx*/) override { }

  virtual void enterAnnotations(myParser::AnnotationsContext * /*ctx*/) override { }
  virtual void exitAnnotations(myParser::AnnotationsContext * /*ctx*/) override { }

  virtual void enterAnnotation(myParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(myParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterAnnotationList(myParser::AnnotationListContext * /*ctx*/) override { }
  virtual void exitAnnotationList(myParser::AnnotationListContext * /*ctx*/) override { }

  virtual void enterAnnotationUseSiteTarget(myParser::AnnotationUseSiteTargetContext * /*ctx*/) override { }
  virtual void exitAnnotationUseSiteTarget(myParser::AnnotationUseSiteTargetContext * /*ctx*/) override { }

  virtual void enterUnescapedAnnotation(myParser::UnescapedAnnotationContext * /*ctx*/) override { }
  virtual void exitUnescapedAnnotation(myParser::UnescapedAnnotationContext * /*ctx*/) override { }

  virtual void enterIdentifier(myParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(myParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterSimpleIdentifier(myParser::SimpleIdentifierContext * /*ctx*/) override { }
  virtual void exitSimpleIdentifier(myParser::SimpleIdentifierContext * /*ctx*/) override { }

  virtual void enterSemi(myParser::SemiContext * /*ctx*/) override { }
  virtual void exitSemi(myParser::SemiContext * /*ctx*/) override { }

  virtual void enterAnysemi(myParser::AnysemiContext * /*ctx*/) override { }
  virtual void exitAnysemi(myParser::AnysemiContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

