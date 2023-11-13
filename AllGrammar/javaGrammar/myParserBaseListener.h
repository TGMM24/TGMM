
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

  virtual void enterCompilationUnit(myParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(myParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterPackageDeclaration(myParser::PackageDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageDeclaration(myParser::PackageDeclarationContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(myParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(myParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(myParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(myParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterModifier(myParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(myParser::ModifierContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceModifier(myParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceModifier(myParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }

  virtual void enterVariableModifier(myParser::VariableModifierContext * /*ctx*/) override { }
  virtual void exitVariableModifier(myParser::VariableModifierContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterTypeBound(myParser::TypeBoundContext * /*ctx*/) override { }
  virtual void exitTypeBound(myParser::TypeBoundContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(myParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(myParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumConstants(myParser::EnumConstantsContext * /*ctx*/) override { }
  virtual void exitEnumConstants(myParser::EnumConstantsContext * /*ctx*/) override { }

  virtual void enterEnumConstant(myParser::EnumConstantContext * /*ctx*/) override { }
  virtual void exitEnumConstant(myParser::EnumConstantContext * /*ctx*/) override { }

  virtual void enterEnumBodyDeclarations(myParser::EnumBodyDeclarationsContext * /*ctx*/) override { }
  virtual void exitEnumBodyDeclarations(myParser::EnumBodyDeclarationsContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(myParser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(myParser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterClassBody(myParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(myParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(myParser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(myParser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyDeclaration(myParser::ClassBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitClassBodyDeclaration(myParser::ClassBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaration(myParser::MemberDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberDeclaration(myParser::MemberDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(myParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(myParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodBody(myParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(myParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterTypeTypeOrVoid(myParser::TypeTypeOrVoidContext * /*ctx*/) override { }
  virtual void exitTypeTypeOrVoid(myParser::TypeTypeOrVoidContext * /*ctx*/) override { }

  virtual void enterGenericMethodDeclaration(myParser::GenericMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitGenericMethodDeclaration(myParser::GenericMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterGenericConstructorDeclaration(myParser::GenericConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitGenericConstructorDeclaration(myParser::GenericConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(myParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(myParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(myParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(myParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceBodyDeclaration(myParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceBodyDeclaration(myParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMemberDeclaration(myParser::InterfaceMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMemberDeclaration(myParser::InterfaceMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(myParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(myParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclarator(myParser::ConstantDeclaratorContext * /*ctx*/) override { }
  virtual void exitConstantDeclarator(myParser::ConstantDeclaratorContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodDeclaration(myParser::InterfaceMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodDeclaration(myParser::InterfaceMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodModifier(myParser::InterfaceMethodModifierContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodModifier(myParser::InterfaceMethodModifierContext * /*ctx*/) override { }

  virtual void enterGenericInterfaceMethodDeclaration(myParser::GenericInterfaceMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitGenericInterfaceMethodDeclaration(myParser::GenericInterfaceMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceCommonBodyDeclaration(myParser::InterfaceCommonBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceCommonBodyDeclaration(myParser::InterfaceCommonBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclarators(myParser::VariableDeclaratorsContext * /*ctx*/) override { }
  virtual void exitVariableDeclarators(myParser::VariableDeclaratorsContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(myParser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(myParser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorId(myParser::VariableDeclaratorIdContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorId(myParser::VariableDeclaratorIdContext * /*ctx*/) override { }

  virtual void enterVariableInitializer(myParser::VariableInitializerContext * /*ctx*/) override { }
  virtual void exitVariableInitializer(myParser::VariableInitializerContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(myParser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(myParser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceType(myParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceType(myParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterTypeArgument(myParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(myParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterQualifiedNameList(myParser::QualifiedNameListContext * /*ctx*/) override { }
  virtual void exitQualifiedNameList(myParser::QualifiedNameListContext * /*ctx*/) override { }

  virtual void enterFormalParameters(myParser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(myParser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterReceiverParameter(myParser::ReceiverParameterContext * /*ctx*/) override { }
  virtual void exitReceiverParameter(myParser::ReceiverParameterContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameter(myParser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(myParser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterLastFormalParameter(myParser::LastFormalParameterContext * /*ctx*/) override { }
  virtual void exitLastFormalParameter(myParser::LastFormalParameterContext * /*ctx*/) override { }

  virtual void enterLambdaLVTIList(myParser::LambdaLVTIListContext * /*ctx*/) override { }
  virtual void exitLambdaLVTIList(myParser::LambdaLVTIListContext * /*ctx*/) override { }

  virtual void enterLambdaLVTIParameter(myParser::LambdaLVTIParameterContext * /*ctx*/) override { }
  virtual void exitLambdaLVTIParameter(myParser::LambdaLVTIParameterContext * /*ctx*/) override { }

  virtual void enterQualifiedName(myParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(myParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(myParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(myParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(myParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(myParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterAltAnnotationQualifiedName(myParser::AltAnnotationQualifiedNameContext * /*ctx*/) override { }
  virtual void exitAltAnnotationQualifiedName(myParser::AltAnnotationQualifiedNameContext * /*ctx*/) override { }

  virtual void enterAnnotation(myParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(myParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterElementValuePairs(myParser::ElementValuePairsContext * /*ctx*/) override { }
  virtual void exitElementValuePairs(myParser::ElementValuePairsContext * /*ctx*/) override { }

  virtual void enterElementValuePair(myParser::ElementValuePairContext * /*ctx*/) override { }
  virtual void exitElementValuePair(myParser::ElementValuePairContext * /*ctx*/) override { }

  virtual void enterElementValue(myParser::ElementValueContext * /*ctx*/) override { }
  virtual void exitElementValue(myParser::ElementValueContext * /*ctx*/) override { }

  virtual void enterElementValueArrayInitializer(myParser::ElementValueArrayInitializerContext * /*ctx*/) override { }
  virtual void exitElementValueArrayInitializer(myParser::ElementValueArrayInitializerContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeDeclaration(myParser::AnnotationTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeDeclaration(myParser::AnnotationTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeBody(myParser::AnnotationTypeBodyContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeBody(myParser::AnnotationTypeBodyContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementDeclaration(myParser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementDeclaration(myParser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementRest(myParser::AnnotationTypeElementRestContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementRest(myParser::AnnotationTypeElementRestContext * /*ctx*/) override { }

  virtual void enterAnnotationMethodOrConstantRest(myParser::AnnotationMethodOrConstantRestContext * /*ctx*/) override { }
  virtual void exitAnnotationMethodOrConstantRest(myParser::AnnotationMethodOrConstantRestContext * /*ctx*/) override { }

  virtual void enterAnnotationMethodRest(myParser::AnnotationMethodRestContext * /*ctx*/) override { }
  virtual void exitAnnotationMethodRest(myParser::AnnotationMethodRestContext * /*ctx*/) override { }

  virtual void enterAnnotationConstantRest(myParser::AnnotationConstantRestContext * /*ctx*/) override { }
  virtual void exitAnnotationConstantRest(myParser::AnnotationConstantRestContext * /*ctx*/) override { }

  virtual void enterDefaultValue(myParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(myParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(myParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(myParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleBody(myParser::ModuleBodyContext * /*ctx*/) override { }
  virtual void exitModuleBody(myParser::ModuleBodyContext * /*ctx*/) override { }

  virtual void enterModuleDirective(myParser::ModuleDirectiveContext * /*ctx*/) override { }
  virtual void exitModuleDirective(myParser::ModuleDirectiveContext * /*ctx*/) override { }

  virtual void enterRequiresModifier(myParser::RequiresModifierContext * /*ctx*/) override { }
  virtual void exitRequiresModifier(myParser::RequiresModifierContext * /*ctx*/) override { }

  virtual void enterRecordDeclaration(myParser::RecordDeclarationContext * /*ctx*/) override { }
  virtual void exitRecordDeclaration(myParser::RecordDeclarationContext * /*ctx*/) override { }

  virtual void enterRecordHeader(myParser::RecordHeaderContext * /*ctx*/) override { }
  virtual void exitRecordHeader(myParser::RecordHeaderContext * /*ctx*/) override { }

  virtual void enterRecordComponentList(myParser::RecordComponentListContext * /*ctx*/) override { }
  virtual void exitRecordComponentList(myParser::RecordComponentListContext * /*ctx*/) override { }

  virtual void enterRecordComponent(myParser::RecordComponentContext * /*ctx*/) override { }
  virtual void exitRecordComponent(myParser::RecordComponentContext * /*ctx*/) override { }

  virtual void enterRecordBody(myParser::RecordBodyContext * /*ctx*/) override { }
  virtual void exitRecordBody(myParser::RecordBodyContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatement(myParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(myParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclaration(myParser::LocalVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclaration(myParser::LocalVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterIdentifier(myParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(myParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(myParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(myParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterLocalTypeDeclaration(myParser::LocalTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalTypeDeclaration(myParser::LocalTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterCatchClause(myParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(myParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterCatchType(myParser::CatchTypeContext * /*ctx*/) override { }
  virtual void exitCatchType(myParser::CatchTypeContext * /*ctx*/) override { }

  virtual void enterFinallyBlock(myParser::FinallyBlockContext * /*ctx*/) override { }
  virtual void exitFinallyBlock(myParser::FinallyBlockContext * /*ctx*/) override { }

  virtual void enterResourceSpecification(myParser::ResourceSpecificationContext * /*ctx*/) override { }
  virtual void exitResourceSpecification(myParser::ResourceSpecificationContext * /*ctx*/) override { }

  virtual void enterResources(myParser::ResourcesContext * /*ctx*/) override { }
  virtual void exitResources(myParser::ResourcesContext * /*ctx*/) override { }

  virtual void enterResource(myParser::ResourceContext * /*ctx*/) override { }
  virtual void exitResource(myParser::ResourceContext * /*ctx*/) override { }

  virtual void enterSwitchBlockStatementGroup(myParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }
  virtual void exitSwitchBlockStatementGroup(myParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(myParser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(myParser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterForControl(myParser::ForControlContext * /*ctx*/) override { }
  virtual void exitForControl(myParser::ForControlContext * /*ctx*/) override { }

  virtual void enterForInit(myParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(myParser::ForInitContext * /*ctx*/) override { }

  virtual void enterEnhancedForControl(myParser::EnhancedForControlContext * /*ctx*/) override { }
  virtual void exitEnhancedForControl(myParser::EnhancedForControlContext * /*ctx*/) override { }

  virtual void enterParExpression(myParser::ParExpressionContext * /*ctx*/) override { }
  virtual void exitParExpression(myParser::ParExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(myParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMethodCall(myParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(myParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPattern(myParser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(myParser::PatternContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(myParser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(myParser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaParameters(myParser::LambdaParametersContext * /*ctx*/) override { }
  virtual void exitLambdaParameters(myParser::LambdaParametersContext * /*ctx*/) override { }

  virtual void enterLambdaBody(myParser::LambdaBodyContext * /*ctx*/) override { }
  virtual void exitLambdaBody(myParser::LambdaBodyContext * /*ctx*/) override { }

  virtual void enterPrimary(myParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(myParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterSwitchExpression(myParser::SwitchExpressionContext * /*ctx*/) override { }
  virtual void exitSwitchExpression(myParser::SwitchExpressionContext * /*ctx*/) override { }

  virtual void enterSwitchLabeledRule(myParser::SwitchLabeledRuleContext * /*ctx*/) override { }
  virtual void exitSwitchLabeledRule(myParser::SwitchLabeledRuleContext * /*ctx*/) override { }

  virtual void enterGuardedPattern(myParser::GuardedPatternContext * /*ctx*/) override { }
  virtual void exitGuardedPattern(myParser::GuardedPatternContext * /*ctx*/) override { }

  virtual void enterSwitchRuleOutcome(myParser::SwitchRuleOutcomeContext * /*ctx*/) override { }
  virtual void exitSwitchRuleOutcome(myParser::SwitchRuleOutcomeContext * /*ctx*/) override { }

  virtual void enterClassType(myParser::ClassTypeContext * /*ctx*/) override { }
  virtual void exitClassType(myParser::ClassTypeContext * /*ctx*/) override { }

  virtual void enterCreator(myParser::CreatorContext * /*ctx*/) override { }
  virtual void exitCreator(myParser::CreatorContext * /*ctx*/) override { }

  virtual void enterCreatedName(myParser::CreatedNameContext * /*ctx*/) override { }
  virtual void exitCreatedName(myParser::CreatedNameContext * /*ctx*/) override { }

  virtual void enterInnerCreator(myParser::InnerCreatorContext * /*ctx*/) override { }
  virtual void exitInnerCreator(myParser::InnerCreatorContext * /*ctx*/) override { }

  virtual void enterArrayCreatorRest(myParser::ArrayCreatorRestContext * /*ctx*/) override { }
  virtual void exitArrayCreatorRest(myParser::ArrayCreatorRestContext * /*ctx*/) override { }

  virtual void enterClassCreatorRest(myParser::ClassCreatorRestContext * /*ctx*/) override { }
  virtual void exitClassCreatorRest(myParser::ClassCreatorRestContext * /*ctx*/) override { }

  virtual void enterExplicitGenericInvocation(myParser::ExplicitGenericInvocationContext * /*ctx*/) override { }
  virtual void exitExplicitGenericInvocation(myParser::ExplicitGenericInvocationContext * /*ctx*/) override { }

  virtual void enterTypeArgumentsOrDiamond(myParser::TypeArgumentsOrDiamondContext * /*ctx*/) override { }
  virtual void exitTypeArgumentsOrDiamond(myParser::TypeArgumentsOrDiamondContext * /*ctx*/) override { }

  virtual void enterNonWildcardTypeArgumentsOrDiamond(myParser::NonWildcardTypeArgumentsOrDiamondContext * /*ctx*/) override { }
  virtual void exitNonWildcardTypeArgumentsOrDiamond(myParser::NonWildcardTypeArgumentsOrDiamondContext * /*ctx*/) override { }

  virtual void enterNonWildcardTypeArguments(myParser::NonWildcardTypeArgumentsContext * /*ctx*/) override { }
  virtual void exitNonWildcardTypeArguments(myParser::NonWildcardTypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeList(myParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(myParser::TypeListContext * /*ctx*/) override { }

  virtual void enterTypeType(myParser::TypeTypeContext * /*ctx*/) override { }
  virtual void exitTypeType(myParser::TypeTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(myParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(myParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterSuperSuffix(myParser::SuperSuffixContext * /*ctx*/) override { }
  virtual void exitSuperSuffix(myParser::SuperSuffixContext * /*ctx*/) override { }

  virtual void enterExplicitGenericInvocationSuffix(myParser::ExplicitGenericInvocationSuffixContext * /*ctx*/) override { }
  virtual void exitExplicitGenericInvocationSuffix(myParser::ExplicitGenericInvocationSuffixContext * /*ctx*/) override { }

  virtual void enterArguments(myParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(myParser::ArgumentsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

