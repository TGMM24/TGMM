
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(myParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(myParser::CompilationUnitContext *ctx) = 0;

  virtual void enterPackageDeclaration(myParser::PackageDeclarationContext *ctx) = 0;
  virtual void exitPackageDeclaration(myParser::PackageDeclarationContext *ctx) = 0;

  virtual void enterImportDeclaration(myParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(myParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaration(myParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(myParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterModifier(myParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(myParser::ModifierContext *ctx) = 0;

  virtual void enterClassOrInterfaceModifier(myParser::ClassOrInterfaceModifierContext *ctx) = 0;
  virtual void exitClassOrInterfaceModifier(myParser::ClassOrInterfaceModifierContext *ctx) = 0;

  virtual void enterVariableModifier(myParser::VariableModifierContext *ctx) = 0;
  virtual void exitVariableModifier(myParser::VariableModifierContext *ctx) = 0;

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterTypeParameters(myParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(myParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameter(myParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(myParser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeBound(myParser::TypeBoundContext *ctx) = 0;
  virtual void exitTypeBound(myParser::TypeBoundContext *ctx) = 0;

  virtual void enterEnumDeclaration(myParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(myParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumConstants(myParser::EnumConstantsContext *ctx) = 0;
  virtual void exitEnumConstants(myParser::EnumConstantsContext *ctx) = 0;

  virtual void enterEnumConstant(myParser::EnumConstantContext *ctx) = 0;
  virtual void exitEnumConstant(myParser::EnumConstantContext *ctx) = 0;

  virtual void enterEnumBodyDeclarations(myParser::EnumBodyDeclarationsContext *ctx) = 0;
  virtual void exitEnumBodyDeclarations(myParser::EnumBodyDeclarationsContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(myParser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(myParser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterClassBody(myParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(myParser::ClassBodyContext *ctx) = 0;

  virtual void enterInterfaceBody(myParser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(myParser::InterfaceBodyContext *ctx) = 0;

  virtual void enterClassBodyDeclaration(myParser::ClassBodyDeclarationContext *ctx) = 0;
  virtual void exitClassBodyDeclaration(myParser::ClassBodyDeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaration(myParser::MemberDeclarationContext *ctx) = 0;
  virtual void exitMemberDeclaration(myParser::MemberDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclaration(myParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(myParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodBody(myParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(myParser::MethodBodyContext *ctx) = 0;

  virtual void enterTypeTypeOrVoid(myParser::TypeTypeOrVoidContext *ctx) = 0;
  virtual void exitTypeTypeOrVoid(myParser::TypeTypeOrVoidContext *ctx) = 0;

  virtual void enterGenericMethodDeclaration(myParser::GenericMethodDeclarationContext *ctx) = 0;
  virtual void exitGenericMethodDeclaration(myParser::GenericMethodDeclarationContext *ctx) = 0;

  virtual void enterGenericConstructorDeclaration(myParser::GenericConstructorDeclarationContext *ctx) = 0;
  virtual void exitGenericConstructorDeclaration(myParser::GenericConstructorDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclaration(myParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(myParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(myParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(myParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterInterfaceBodyDeclaration(myParser::InterfaceBodyDeclarationContext *ctx) = 0;
  virtual void exitInterfaceBodyDeclaration(myParser::InterfaceBodyDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMemberDeclaration(myParser::InterfaceMemberDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMemberDeclaration(myParser::InterfaceMemberDeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(myParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(myParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclarator(myParser::ConstantDeclaratorContext *ctx) = 0;
  virtual void exitConstantDeclarator(myParser::ConstantDeclaratorContext *ctx) = 0;

  virtual void enterInterfaceMethodDeclaration(myParser::InterfaceMethodDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMethodDeclaration(myParser::InterfaceMethodDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMethodModifier(myParser::InterfaceMethodModifierContext *ctx) = 0;
  virtual void exitInterfaceMethodModifier(myParser::InterfaceMethodModifierContext *ctx) = 0;

  virtual void enterGenericInterfaceMethodDeclaration(myParser::GenericInterfaceMethodDeclarationContext *ctx) = 0;
  virtual void exitGenericInterfaceMethodDeclaration(myParser::GenericInterfaceMethodDeclarationContext *ctx) = 0;

  virtual void enterInterfaceCommonBodyDeclaration(myParser::InterfaceCommonBodyDeclarationContext *ctx) = 0;
  virtual void exitInterfaceCommonBodyDeclaration(myParser::InterfaceCommonBodyDeclarationContext *ctx) = 0;

  virtual void enterVariableDeclarators(myParser::VariableDeclaratorsContext *ctx) = 0;
  virtual void exitVariableDeclarators(myParser::VariableDeclaratorsContext *ctx) = 0;

  virtual void enterVariableDeclarator(myParser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(myParser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterVariableDeclaratorId(myParser::VariableDeclaratorIdContext *ctx) = 0;
  virtual void exitVariableDeclaratorId(myParser::VariableDeclaratorIdContext *ctx) = 0;

  virtual void enterVariableInitializer(myParser::VariableInitializerContext *ctx) = 0;
  virtual void exitVariableInitializer(myParser::VariableInitializerContext *ctx) = 0;

  virtual void enterArrayInitializer(myParser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(myParser::ArrayInitializerContext *ctx) = 0;

  virtual void enterClassOrInterfaceType(myParser::ClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassOrInterfaceType(myParser::ClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterTypeArgument(myParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(myParser::TypeArgumentContext *ctx) = 0;

  virtual void enterQualifiedNameList(myParser::QualifiedNameListContext *ctx) = 0;
  virtual void exitQualifiedNameList(myParser::QualifiedNameListContext *ctx) = 0;

  virtual void enterFormalParameters(myParser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(myParser::FormalParametersContext *ctx) = 0;

  virtual void enterReceiverParameter(myParser::ReceiverParameterContext *ctx) = 0;
  virtual void exitReceiverParameter(myParser::ReceiverParameterContext *ctx) = 0;

  virtual void enterFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameter(myParser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(myParser::FormalParameterContext *ctx) = 0;

  virtual void enterLastFormalParameter(myParser::LastFormalParameterContext *ctx) = 0;
  virtual void exitLastFormalParameter(myParser::LastFormalParameterContext *ctx) = 0;

  virtual void enterLambdaLVTIList(myParser::LambdaLVTIListContext *ctx) = 0;
  virtual void exitLambdaLVTIList(myParser::LambdaLVTIListContext *ctx) = 0;

  virtual void enterLambdaLVTIParameter(myParser::LambdaLVTIParameterContext *ctx) = 0;
  virtual void exitLambdaLVTIParameter(myParser::LambdaLVTIParameterContext *ctx) = 0;

  virtual void enterQualifiedName(myParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(myParser::QualifiedNameContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(myParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(myParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(myParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(myParser::FloatLiteralContext *ctx) = 0;

  virtual void enterAltAnnotationQualifiedName(myParser::AltAnnotationQualifiedNameContext *ctx) = 0;
  virtual void exitAltAnnotationQualifiedName(myParser::AltAnnotationQualifiedNameContext *ctx) = 0;

  virtual void enterAnnotation(myParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(myParser::AnnotationContext *ctx) = 0;

  virtual void enterElementValuePairs(myParser::ElementValuePairsContext *ctx) = 0;
  virtual void exitElementValuePairs(myParser::ElementValuePairsContext *ctx) = 0;

  virtual void enterElementValuePair(myParser::ElementValuePairContext *ctx) = 0;
  virtual void exitElementValuePair(myParser::ElementValuePairContext *ctx) = 0;

  virtual void enterElementValue(myParser::ElementValueContext *ctx) = 0;
  virtual void exitElementValue(myParser::ElementValueContext *ctx) = 0;

  virtual void enterElementValueArrayInitializer(myParser::ElementValueArrayInitializerContext *ctx) = 0;
  virtual void exitElementValueArrayInitializer(myParser::ElementValueArrayInitializerContext *ctx) = 0;

  virtual void enterAnnotationTypeDeclaration(myParser::AnnotationTypeDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeDeclaration(myParser::AnnotationTypeDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeBody(myParser::AnnotationTypeBodyContext *ctx) = 0;
  virtual void exitAnnotationTypeBody(myParser::AnnotationTypeBodyContext *ctx) = 0;

  virtual void enterAnnotationTypeElementDeclaration(myParser::AnnotationTypeElementDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeElementDeclaration(myParser::AnnotationTypeElementDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeElementRest(myParser::AnnotationTypeElementRestContext *ctx) = 0;
  virtual void exitAnnotationTypeElementRest(myParser::AnnotationTypeElementRestContext *ctx) = 0;

  virtual void enterAnnotationMethodOrConstantRest(myParser::AnnotationMethodOrConstantRestContext *ctx) = 0;
  virtual void exitAnnotationMethodOrConstantRest(myParser::AnnotationMethodOrConstantRestContext *ctx) = 0;

  virtual void enterAnnotationMethodRest(myParser::AnnotationMethodRestContext *ctx) = 0;
  virtual void exitAnnotationMethodRest(myParser::AnnotationMethodRestContext *ctx) = 0;

  virtual void enterAnnotationConstantRest(myParser::AnnotationConstantRestContext *ctx) = 0;
  virtual void exitAnnotationConstantRest(myParser::AnnotationConstantRestContext *ctx) = 0;

  virtual void enterDefaultValue(myParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(myParser::DefaultValueContext *ctx) = 0;

  virtual void enterModuleDeclaration(myParser::ModuleDeclarationContext *ctx) = 0;
  virtual void exitModuleDeclaration(myParser::ModuleDeclarationContext *ctx) = 0;

  virtual void enterModuleBody(myParser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(myParser::ModuleBodyContext *ctx) = 0;

  virtual void enterModuleDirective(myParser::ModuleDirectiveContext *ctx) = 0;
  virtual void exitModuleDirective(myParser::ModuleDirectiveContext *ctx) = 0;

  virtual void enterRequiresModifier(myParser::RequiresModifierContext *ctx) = 0;
  virtual void exitRequiresModifier(myParser::RequiresModifierContext *ctx) = 0;

  virtual void enterRecordDeclaration(myParser::RecordDeclarationContext *ctx) = 0;
  virtual void exitRecordDeclaration(myParser::RecordDeclarationContext *ctx) = 0;

  virtual void enterRecordHeader(myParser::RecordHeaderContext *ctx) = 0;
  virtual void exitRecordHeader(myParser::RecordHeaderContext *ctx) = 0;

  virtual void enterRecordComponentList(myParser::RecordComponentListContext *ctx) = 0;
  virtual void exitRecordComponentList(myParser::RecordComponentListContext *ctx) = 0;

  virtual void enterRecordComponent(myParser::RecordComponentContext *ctx) = 0;
  virtual void exitRecordComponent(myParser::RecordComponentContext *ctx) = 0;

  virtual void enterRecordBody(myParser::RecordBodyContext *ctx) = 0;
  virtual void exitRecordBody(myParser::RecordBodyContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterBlockStatement(myParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(myParser::BlockStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(myParser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(myParser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterIdentifier(myParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(myParser::IdentifierContext *ctx) = 0;

  virtual void enterTypeIdentifier(myParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(myParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterLocalTypeDeclaration(myParser::LocalTypeDeclarationContext *ctx) = 0;
  virtual void exitLocalTypeDeclaration(myParser::LocalTypeDeclarationContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterCatchClause(myParser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(myParser::CatchClauseContext *ctx) = 0;

  virtual void enterCatchType(myParser::CatchTypeContext *ctx) = 0;
  virtual void exitCatchType(myParser::CatchTypeContext *ctx) = 0;

  virtual void enterFinallyBlock(myParser::FinallyBlockContext *ctx) = 0;
  virtual void exitFinallyBlock(myParser::FinallyBlockContext *ctx) = 0;

  virtual void enterResourceSpecification(myParser::ResourceSpecificationContext *ctx) = 0;
  virtual void exitResourceSpecification(myParser::ResourceSpecificationContext *ctx) = 0;

  virtual void enterResources(myParser::ResourcesContext *ctx) = 0;
  virtual void exitResources(myParser::ResourcesContext *ctx) = 0;

  virtual void enterResource(myParser::ResourceContext *ctx) = 0;
  virtual void exitResource(myParser::ResourceContext *ctx) = 0;

  virtual void enterSwitchBlockStatementGroup(myParser::SwitchBlockStatementGroupContext *ctx) = 0;
  virtual void exitSwitchBlockStatementGroup(myParser::SwitchBlockStatementGroupContext *ctx) = 0;

  virtual void enterSwitchLabel(myParser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(myParser::SwitchLabelContext *ctx) = 0;

  virtual void enterForControl(myParser::ForControlContext *ctx) = 0;
  virtual void exitForControl(myParser::ForControlContext *ctx) = 0;

  virtual void enterForInit(myParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(myParser::ForInitContext *ctx) = 0;

  virtual void enterEnhancedForControl(myParser::EnhancedForControlContext *ctx) = 0;
  virtual void exitEnhancedForControl(myParser::EnhancedForControlContext *ctx) = 0;

  virtual void enterParExpression(myParser::ParExpressionContext *ctx) = 0;
  virtual void exitParExpression(myParser::ParExpressionContext *ctx) = 0;

  virtual void enterExpressionList(myParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(myParser::ExpressionListContext *ctx) = 0;

  virtual void enterMethodCall(myParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(myParser::MethodCallContext *ctx) = 0;

  virtual void enterExpression(myParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(myParser::ExpressionContext *ctx) = 0;

  virtual void enterPattern(myParser::PatternContext *ctx) = 0;
  virtual void exitPattern(myParser::PatternContext *ctx) = 0;

  virtual void enterLambdaExpression(myParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(myParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaParameters(myParser::LambdaParametersContext *ctx) = 0;
  virtual void exitLambdaParameters(myParser::LambdaParametersContext *ctx) = 0;

  virtual void enterLambdaBody(myParser::LambdaBodyContext *ctx) = 0;
  virtual void exitLambdaBody(myParser::LambdaBodyContext *ctx) = 0;

  virtual void enterPrimary(myParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(myParser::PrimaryContext *ctx) = 0;

  virtual void enterSwitchExpression(myParser::SwitchExpressionContext *ctx) = 0;
  virtual void exitSwitchExpression(myParser::SwitchExpressionContext *ctx) = 0;

  virtual void enterSwitchLabeledRule(myParser::SwitchLabeledRuleContext *ctx) = 0;
  virtual void exitSwitchLabeledRule(myParser::SwitchLabeledRuleContext *ctx) = 0;

  virtual void enterGuardedPattern(myParser::GuardedPatternContext *ctx) = 0;
  virtual void exitGuardedPattern(myParser::GuardedPatternContext *ctx) = 0;

  virtual void enterSwitchRuleOutcome(myParser::SwitchRuleOutcomeContext *ctx) = 0;
  virtual void exitSwitchRuleOutcome(myParser::SwitchRuleOutcomeContext *ctx) = 0;

  virtual void enterClassType(myParser::ClassTypeContext *ctx) = 0;
  virtual void exitClassType(myParser::ClassTypeContext *ctx) = 0;

  virtual void enterCreator(myParser::CreatorContext *ctx) = 0;
  virtual void exitCreator(myParser::CreatorContext *ctx) = 0;

  virtual void enterCreatedName(myParser::CreatedNameContext *ctx) = 0;
  virtual void exitCreatedName(myParser::CreatedNameContext *ctx) = 0;

  virtual void enterInnerCreator(myParser::InnerCreatorContext *ctx) = 0;
  virtual void exitInnerCreator(myParser::InnerCreatorContext *ctx) = 0;

  virtual void enterArrayCreatorRest(myParser::ArrayCreatorRestContext *ctx) = 0;
  virtual void exitArrayCreatorRest(myParser::ArrayCreatorRestContext *ctx) = 0;

  virtual void enterClassCreatorRest(myParser::ClassCreatorRestContext *ctx) = 0;
  virtual void exitClassCreatorRest(myParser::ClassCreatorRestContext *ctx) = 0;

  virtual void enterExplicitGenericInvocation(myParser::ExplicitGenericInvocationContext *ctx) = 0;
  virtual void exitExplicitGenericInvocation(myParser::ExplicitGenericInvocationContext *ctx) = 0;

  virtual void enterTypeArgumentsOrDiamond(myParser::TypeArgumentsOrDiamondContext *ctx) = 0;
  virtual void exitTypeArgumentsOrDiamond(myParser::TypeArgumentsOrDiamondContext *ctx) = 0;

  virtual void enterNonWildcardTypeArgumentsOrDiamond(myParser::NonWildcardTypeArgumentsOrDiamondContext *ctx) = 0;
  virtual void exitNonWildcardTypeArgumentsOrDiamond(myParser::NonWildcardTypeArgumentsOrDiamondContext *ctx) = 0;

  virtual void enterNonWildcardTypeArguments(myParser::NonWildcardTypeArgumentsContext *ctx) = 0;
  virtual void exitNonWildcardTypeArguments(myParser::NonWildcardTypeArgumentsContext *ctx) = 0;

  virtual void enterTypeList(myParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(myParser::TypeListContext *ctx) = 0;

  virtual void enterTypeType(myParser::TypeTypeContext *ctx) = 0;
  virtual void exitTypeType(myParser::TypeTypeContext *ctx) = 0;

  virtual void enterPrimitiveType(myParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(myParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterSuperSuffix(myParser::SuperSuffixContext *ctx) = 0;
  virtual void exitSuperSuffix(myParser::SuperSuffixContext *ctx) = 0;

  virtual void enterExplicitGenericInvocationSuffix(myParser::ExplicitGenericInvocationSuffixContext *ctx) = 0;
  virtual void exitExplicitGenericInvocationSuffix(myParser::ExplicitGenericInvocationSuffixContext *ctx) = 0;

  virtual void enterArguments(myParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(myParser::ArgumentsContext *ctx) = 0;


};

