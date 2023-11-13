
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myParser.
 */
class  myParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInitializer(myParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(myParser::InitializerContext *ctx) = 0;

  virtual void enterBindingPattern(myParser::BindingPatternContext *ctx) = 0;
  virtual void exitBindingPattern(myParser::BindingPatternContext *ctx) = 0;

  virtual void enterTypeParameters(myParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(myParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameterList(myParser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(myParser::TypeParameterListContext *ctx) = 0;

  virtual void enterTypeParameter(myParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(myParser::TypeParameterContext *ctx) = 0;

  virtual void enterConstraint(myParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(myParser::ConstraintContext *ctx) = 0;

  virtual void enterTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(myParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeArgumentList(myParser::TypeArgumentListContext *ctx) = 0;
  virtual void exitTypeArgumentList(myParser::TypeArgumentListContext *ctx) = 0;

  virtual void enterTypeArgument(myParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(myParser::TypeArgumentContext *ctx) = 0;

  virtual void enterType_(myParser::Type_Context *ctx) = 0;
  virtual void exitType_(myParser::Type_Context *ctx) = 0;

  virtual void enterIntersection(myParser::IntersectionContext *ctx) = 0;
  virtual void exitIntersection(myParser::IntersectionContext *ctx) = 0;

  virtual void enterPrimary(myParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(myParser::PrimaryContext *ctx) = 0;

  virtual void enterUnion(myParser::UnionContext *ctx) = 0;
  virtual void exitUnion(myParser::UnionContext *ctx) = 0;

  virtual void enterRedefinitionOfType(myParser::RedefinitionOfTypeContext *ctx) = 0;
  virtual void exitRedefinitionOfType(myParser::RedefinitionOfTypeContext *ctx) = 0;

  virtual void enterPredefinedPrimType(myParser::PredefinedPrimTypeContext *ctx) = 0;
  virtual void exitPredefinedPrimType(myParser::PredefinedPrimTypeContext *ctx) = 0;

  virtual void enterArrayPrimType(myParser::ArrayPrimTypeContext *ctx) = 0;
  virtual void exitArrayPrimType(myParser::ArrayPrimTypeContext *ctx) = 0;

  virtual void enterParenthesizedPrimType(myParser::ParenthesizedPrimTypeContext *ctx) = 0;
  virtual void exitParenthesizedPrimType(myParser::ParenthesizedPrimTypeContext *ctx) = 0;

  virtual void enterThisPrimType(myParser::ThisPrimTypeContext *ctx) = 0;
  virtual void exitThisPrimType(myParser::ThisPrimTypeContext *ctx) = 0;

  virtual void enterTuplePrimType(myParser::TuplePrimTypeContext *ctx) = 0;
  virtual void exitTuplePrimType(myParser::TuplePrimTypeContext *ctx) = 0;

  virtual void enterObjectPrimType(myParser::ObjectPrimTypeContext *ctx) = 0;
  virtual void exitObjectPrimType(myParser::ObjectPrimTypeContext *ctx) = 0;

  virtual void enterReferencePrimType(myParser::ReferencePrimTypeContext *ctx) = 0;
  virtual void exitReferencePrimType(myParser::ReferencePrimTypeContext *ctx) = 0;

  virtual void enterQueryPrimType(myParser::QueryPrimTypeContext *ctx) = 0;
  virtual void exitQueryPrimType(myParser::QueryPrimTypeContext *ctx) = 0;

  virtual void enterPredefinedType(myParser::PredefinedTypeContext *ctx) = 0;
  virtual void exitPredefinedType(myParser::PredefinedTypeContext *ctx) = 0;

  virtual void enterTypeReference(myParser::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(myParser::TypeReferenceContext *ctx) = 0;

  virtual void enterNestedTypeGeneric(myParser::NestedTypeGenericContext *ctx) = 0;
  virtual void exitNestedTypeGeneric(myParser::NestedTypeGenericContext *ctx) = 0;

  virtual void enterTypeGeneric(myParser::TypeGenericContext *ctx) = 0;
  virtual void exitTypeGeneric(myParser::TypeGenericContext *ctx) = 0;

  virtual void enterTypeIncludeGeneric(myParser::TypeIncludeGenericContext *ctx) = 0;
  virtual void exitTypeIncludeGeneric(myParser::TypeIncludeGenericContext *ctx) = 0;

  virtual void enterTypeName(myParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(myParser::TypeNameContext *ctx) = 0;

  virtual void enterObjectType(myParser::ObjectTypeContext *ctx) = 0;
  virtual void exitObjectType(myParser::ObjectTypeContext *ctx) = 0;

  virtual void enterTypeBody(myParser::TypeBodyContext *ctx) = 0;
  virtual void exitTypeBody(myParser::TypeBodyContext *ctx) = 0;

  virtual void enterTypeMemberList(myParser::TypeMemberListContext *ctx) = 0;
  virtual void exitTypeMemberList(myParser::TypeMemberListContext *ctx) = 0;

  virtual void enterTypeMember(myParser::TypeMemberContext *ctx) = 0;
  virtual void exitTypeMember(myParser::TypeMemberContext *ctx) = 0;

  virtual void enterArrayType(myParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(myParser::ArrayTypeContext *ctx) = 0;

  virtual void enterTupleType(myParser::TupleTypeContext *ctx) = 0;
  virtual void exitTupleType(myParser::TupleTypeContext *ctx) = 0;

  virtual void enterTupleElementTypes(myParser::TupleElementTypesContext *ctx) = 0;
  virtual void exitTupleElementTypes(myParser::TupleElementTypesContext *ctx) = 0;

  virtual void enterFunctionType(myParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(myParser::FunctionTypeContext *ctx) = 0;

  virtual void enterConstructorType(myParser::ConstructorTypeContext *ctx) = 0;
  virtual void exitConstructorType(myParser::ConstructorTypeContext *ctx) = 0;

  virtual void enterTypeQuery(myParser::TypeQueryContext *ctx) = 0;
  virtual void exitTypeQuery(myParser::TypeQueryContext *ctx) = 0;

  virtual void enterTypeQueryExpression(myParser::TypeQueryExpressionContext *ctx) = 0;
  virtual void exitTypeQueryExpression(myParser::TypeQueryExpressionContext *ctx) = 0;

  virtual void enterPropertySignatur(myParser::PropertySignaturContext *ctx) = 0;
  virtual void exitPropertySignatur(myParser::PropertySignaturContext *ctx) = 0;

  virtual void enterTypeAnnotation(myParser::TypeAnnotationContext *ctx) = 0;
  virtual void exitTypeAnnotation(myParser::TypeAnnotationContext *ctx) = 0;

  virtual void enterCallSignature(myParser::CallSignatureContext *ctx) = 0;
  virtual void exitCallSignature(myParser::CallSignatureContext *ctx) = 0;

  virtual void enterParameterList(myParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(myParser::ParameterListContext *ctx) = 0;

  virtual void enterRequiredParameterList(myParser::RequiredParameterListContext *ctx) = 0;
  virtual void exitRequiredParameterList(myParser::RequiredParameterListContext *ctx) = 0;

  virtual void enterParameter(myParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(myParser::ParameterContext *ctx) = 0;

  virtual void enterOptionalParameter(myParser::OptionalParameterContext *ctx) = 0;
  virtual void exitOptionalParameter(myParser::OptionalParameterContext *ctx) = 0;

  virtual void enterRestParameter(myParser::RestParameterContext *ctx) = 0;
  virtual void exitRestParameter(myParser::RestParameterContext *ctx) = 0;

  virtual void enterRequiredParameter(myParser::RequiredParameterContext *ctx) = 0;
  virtual void exitRequiredParameter(myParser::RequiredParameterContext *ctx) = 0;

  virtual void enterAccessibilityModifier(myParser::AccessibilityModifierContext *ctx) = 0;
  virtual void exitAccessibilityModifier(myParser::AccessibilityModifierContext *ctx) = 0;

  virtual void enterIdentifierOrPattern(myParser::IdentifierOrPatternContext *ctx) = 0;
  virtual void exitIdentifierOrPattern(myParser::IdentifierOrPatternContext *ctx) = 0;

  virtual void enterConstructSignature(myParser::ConstructSignatureContext *ctx) = 0;
  virtual void exitConstructSignature(myParser::ConstructSignatureContext *ctx) = 0;

  virtual void enterIndexSignature(myParser::IndexSignatureContext *ctx) = 0;
  virtual void exitIndexSignature(myParser::IndexSignatureContext *ctx) = 0;

  virtual void enterMethodSignature(myParser::MethodSignatureContext *ctx) = 0;
  virtual void exitMethodSignature(myParser::MethodSignatureContext *ctx) = 0;

  virtual void enterTypeAliasDeclaration(myParser::TypeAliasDeclarationContext *ctx) = 0;
  virtual void exitTypeAliasDeclaration(myParser::TypeAliasDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclaration(myParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(myParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(myParser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(myParser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterInterfaceExtendsClause(myParser::InterfaceExtendsClauseContext *ctx) = 0;
  virtual void exitInterfaceExtendsClause(myParser::InterfaceExtendsClauseContext *ctx) = 0;

  virtual void enterClassOrInterfaceTypeList(myParser::ClassOrInterfaceTypeListContext *ctx) = 0;
  virtual void exitClassOrInterfaceTypeList(myParser::ClassOrInterfaceTypeListContext *ctx) = 0;

  virtual void enterEnumDeclaration(myParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(myParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumBody(myParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(myParser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumMemberList(myParser::EnumMemberListContext *ctx) = 0;
  virtual void exitEnumMemberList(myParser::EnumMemberListContext *ctx) = 0;

  virtual void enterEnumMember(myParser::EnumMemberContext *ctx) = 0;
  virtual void exitEnumMember(myParser::EnumMemberContext *ctx) = 0;

  virtual void enterNamespaceDeclaration(myParser::NamespaceDeclarationContext *ctx) = 0;
  virtual void exitNamespaceDeclaration(myParser::NamespaceDeclarationContext *ctx) = 0;

  virtual void enterNamespaceName(myParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(myParser::NamespaceNameContext *ctx) = 0;

  virtual void enterImportAliasDeclaration(myParser::ImportAliasDeclarationContext *ctx) = 0;
  virtual void exitImportAliasDeclaration(myParser::ImportAliasDeclarationContext *ctx) = 0;

  virtual void enterDecoratorList(myParser::DecoratorListContext *ctx) = 0;
  virtual void exitDecoratorList(myParser::DecoratorListContext *ctx) = 0;

  virtual void enterDecorator(myParser::DecoratorContext *ctx) = 0;
  virtual void exitDecorator(myParser::DecoratorContext *ctx) = 0;

  virtual void enterDecoratorMemberExpression(myParser::DecoratorMemberExpressionContext *ctx) = 0;
  virtual void exitDecoratorMemberExpression(myParser::DecoratorMemberExpressionContext *ctx) = 0;

  virtual void enterDecoratorCallExpression(myParser::DecoratorCallExpressionContext *ctx) = 0;
  virtual void exitDecoratorCallExpression(myParser::DecoratorCallExpressionContext *ctx) = 0;

  virtual void enterProgram(myParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(myParser::ProgramContext *ctx) = 0;

  virtual void enterSourceElement(myParser::SourceElementContext *ctx) = 0;
  virtual void exitSourceElement(myParser::SourceElementContext *ctx) = 0;

  virtual void enterStatement(myParser::StatementContext *ctx) = 0;
  virtual void exitStatement(myParser::StatementContext *ctx) = 0;

  virtual void enterBlock(myParser::BlockContext *ctx) = 0;
  virtual void exitBlock(myParser::BlockContext *ctx) = 0;

  virtual void enterStatementList(myParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(myParser::StatementListContext *ctx) = 0;

  virtual void enterAbstractDeclaration(myParser::AbstractDeclarationContext *ctx) = 0;
  virtual void exitAbstractDeclaration(myParser::AbstractDeclarationContext *ctx) = 0;

  virtual void enterImportStatement(myParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(myParser::ImportStatementContext *ctx) = 0;

  virtual void enterFromBlock(myParser::FromBlockContext *ctx) = 0;
  virtual void exitFromBlock(myParser::FromBlockContext *ctx) = 0;

  virtual void enterMultipleImportStatement(myParser::MultipleImportStatementContext *ctx) = 0;
  virtual void exitMultipleImportStatement(myParser::MultipleImportStatementContext *ctx) = 0;

  virtual void enterExportStatement(myParser::ExportStatementContext *ctx) = 0;
  virtual void exitExportStatement(myParser::ExportStatementContext *ctx) = 0;

  virtual void enterVariableStatement(myParser::VariableStatementContext *ctx) = 0;
  virtual void exitVariableStatement(myParser::VariableStatementContext *ctx) = 0;

  virtual void enterVariableDeclarationList(myParser::VariableDeclarationListContext *ctx) = 0;
  virtual void exitVariableDeclarationList(myParser::VariableDeclarationListContext *ctx) = 0;

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterEmptyStatement_(myParser::EmptyStatement_Context *ctx) = 0;
  virtual void exitEmptyStatement_(myParser::EmptyStatement_Context *ctx) = 0;

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(myParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(myParser::IfStatementContext *ctx) = 0;

  virtual void enterDoStatement(myParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(myParser::DoStatementContext *ctx) = 0;

  virtual void enterWhileStatement(myParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(myParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(myParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(myParser::ForStatementContext *ctx) = 0;

  virtual void enterForVarStatement(myParser::ForVarStatementContext *ctx) = 0;
  virtual void exitForVarStatement(myParser::ForVarStatementContext *ctx) = 0;

  virtual void enterForInStatement(myParser::ForInStatementContext *ctx) = 0;
  virtual void exitForInStatement(myParser::ForInStatementContext *ctx) = 0;

  virtual void enterForVarInStatement(myParser::ForVarInStatementContext *ctx) = 0;
  virtual void exitForVarInStatement(myParser::ForVarInStatementContext *ctx) = 0;

  virtual void enterVarModifier(myParser::VarModifierContext *ctx) = 0;
  virtual void exitVarModifier(myParser::VarModifierContext *ctx) = 0;

  virtual void enterContinueStatement(myParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(myParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBreakStatement(myParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(myParser::BreakStatementContext *ctx) = 0;

  virtual void enterReturnStatement(myParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(myParser::ReturnStatementContext *ctx) = 0;

  virtual void enterYieldStatement(myParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(myParser::YieldStatementContext *ctx) = 0;

  virtual void enterWithStatement(myParser::WithStatementContext *ctx) = 0;
  virtual void exitWithStatement(myParser::WithStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(myParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseBlock(myParser::CaseBlockContext *ctx) = 0;
  virtual void exitCaseBlock(myParser::CaseBlockContext *ctx) = 0;

  virtual void enterCaseClauses(myParser::CaseClausesContext *ctx) = 0;
  virtual void exitCaseClauses(myParser::CaseClausesContext *ctx) = 0;

  virtual void enterCaseClause(myParser::CaseClauseContext *ctx) = 0;
  virtual void exitCaseClause(myParser::CaseClauseContext *ctx) = 0;

  virtual void enterDefaultClause(myParser::DefaultClauseContext *ctx) = 0;
  virtual void exitDefaultClause(myParser::DefaultClauseContext *ctx) = 0;

  virtual void enterLabelledStatement(myParser::LabelledStatementContext *ctx) = 0;
  virtual void exitLabelledStatement(myParser::LabelledStatementContext *ctx) = 0;

  virtual void enterThrowStatement(myParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(myParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(myParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(myParser::TryStatementContext *ctx) = 0;

  virtual void enterCatchProduction(myParser::CatchProductionContext *ctx) = 0;
  virtual void exitCatchProduction(myParser::CatchProductionContext *ctx) = 0;

  virtual void enterFinallyProduction(myParser::FinallyProductionContext *ctx) = 0;
  virtual void exitFinallyProduction(myParser::FinallyProductionContext *ctx) = 0;

  virtual void enterDebuggerStatement(myParser::DebuggerStatementContext *ctx) = 0;
  virtual void exitDebuggerStatement(myParser::DebuggerStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassHeritage(myParser::ClassHeritageContext *ctx) = 0;
  virtual void exitClassHeritage(myParser::ClassHeritageContext *ctx) = 0;

  virtual void enterClassTail(myParser::ClassTailContext *ctx) = 0;
  virtual void exitClassTail(myParser::ClassTailContext *ctx) = 0;

  virtual void enterClassExtendsClause(myParser::ClassExtendsClauseContext *ctx) = 0;
  virtual void exitClassExtendsClause(myParser::ClassExtendsClauseContext *ctx) = 0;

  virtual void enterImplementsClause(myParser::ImplementsClauseContext *ctx) = 0;
  virtual void exitImplementsClause(myParser::ImplementsClauseContext *ctx) = 0;

  virtual void enterClassElement(myParser::ClassElementContext *ctx) = 0;
  virtual void exitClassElement(myParser::ClassElementContext *ctx) = 0;

  virtual void enterPropertyDeclarationExpression(myParser::PropertyDeclarationExpressionContext *ctx) = 0;
  virtual void exitPropertyDeclarationExpression(myParser::PropertyDeclarationExpressionContext *ctx) = 0;

  virtual void enterMethodDeclarationExpression(myParser::MethodDeclarationExpressionContext *ctx) = 0;
  virtual void exitMethodDeclarationExpression(myParser::MethodDeclarationExpressionContext *ctx) = 0;

  virtual void enterGetterSetterDeclarationExpression(myParser::GetterSetterDeclarationExpressionContext *ctx) = 0;
  virtual void exitGetterSetterDeclarationExpression(myParser::GetterSetterDeclarationExpressionContext *ctx) = 0;

  virtual void enterAbstractMemberDeclaration(myParser::AbstractMemberDeclarationContext *ctx) = 0;
  virtual void exitAbstractMemberDeclaration(myParser::AbstractMemberDeclarationContext *ctx) = 0;

  virtual void enterPropertyMemberBase(myParser::PropertyMemberBaseContext *ctx) = 0;
  virtual void exitPropertyMemberBase(myParser::PropertyMemberBaseContext *ctx) = 0;

  virtual void enterIndexMemberDeclaration(myParser::IndexMemberDeclarationContext *ctx) = 0;
  virtual void exitIndexMemberDeclaration(myParser::IndexMemberDeclarationContext *ctx) = 0;

  virtual void enterGeneratorMethod(myParser::GeneratorMethodContext *ctx) = 0;
  virtual void exitGeneratorMethod(myParser::GeneratorMethodContext *ctx) = 0;

  virtual void enterGeneratorFunctionDeclaration(myParser::GeneratorFunctionDeclarationContext *ctx) = 0;
  virtual void exitGeneratorFunctionDeclaration(myParser::GeneratorFunctionDeclarationContext *ctx) = 0;

  virtual void enterGeneratorBlock(myParser::GeneratorBlockContext *ctx) = 0;
  virtual void exitGeneratorBlock(myParser::GeneratorBlockContext *ctx) = 0;

  virtual void enterGeneratorDefinition(myParser::GeneratorDefinitionContext *ctx) = 0;
  virtual void exitGeneratorDefinition(myParser::GeneratorDefinitionContext *ctx) = 0;

  virtual void enterIteratorBlock(myParser::IteratorBlockContext *ctx) = 0;
  virtual void exitIteratorBlock(myParser::IteratorBlockContext *ctx) = 0;

  virtual void enterIteratorDefinition(myParser::IteratorDefinitionContext *ctx) = 0;
  virtual void exitIteratorDefinition(myParser::IteratorDefinitionContext *ctx) = 0;

  virtual void enterFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(myParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameterArg(myParser::FormalParameterArgContext *ctx) = 0;
  virtual void exitFormalParameterArg(myParser::FormalParameterArgContext *ctx) = 0;

  virtual void enterLastFormalParameterArg(myParser::LastFormalParameterArgContext *ctx) = 0;
  virtual void exitLastFormalParameterArg(myParser::LastFormalParameterArgContext *ctx) = 0;

  virtual void enterFunctionBody(myParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(myParser::FunctionBodyContext *ctx) = 0;

  virtual void enterSourceElements(myParser::SourceElementsContext *ctx) = 0;
  virtual void exitSourceElements(myParser::SourceElementsContext *ctx) = 0;

  virtual void enterArrayLiteral(myParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(myParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterElementList(myParser::ElementListContext *ctx) = 0;
  virtual void exitElementList(myParser::ElementListContext *ctx) = 0;

  virtual void enterArrayElement(myParser::ArrayElementContext *ctx) = 0;
  virtual void exitArrayElement(myParser::ArrayElementContext *ctx) = 0;

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext *ctx) = 0;

  virtual void enterPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterPropertyGetter(myParser::PropertyGetterContext *ctx) = 0;
  virtual void exitPropertyGetter(myParser::PropertyGetterContext *ctx) = 0;

  virtual void enterPropertySetter(myParser::PropertySetterContext *ctx) = 0;
  virtual void exitPropertySetter(myParser::PropertySetterContext *ctx) = 0;

  virtual void enterMethodProperty(myParser::MethodPropertyContext *ctx) = 0;
  virtual void exitMethodProperty(myParser::MethodPropertyContext *ctx) = 0;

  virtual void enterPropertyShorthand(myParser::PropertyShorthandContext *ctx) = 0;
  virtual void exitPropertyShorthand(myParser::PropertyShorthandContext *ctx) = 0;

  virtual void enterRestParameterInObject(myParser::RestParameterInObjectContext *ctx) = 0;
  virtual void exitRestParameterInObject(myParser::RestParameterInObjectContext *ctx) = 0;

  virtual void enterGetAccessor(myParser::GetAccessorContext *ctx) = 0;
  virtual void exitGetAccessor(myParser::GetAccessorContext *ctx) = 0;

  virtual void enterSetAccessor(myParser::SetAccessorContext *ctx) = 0;
  virtual void exitSetAccessor(myParser::SetAccessorContext *ctx) = 0;

  virtual void enterPropertyName(myParser::PropertyNameContext *ctx) = 0;
  virtual void exitPropertyName(myParser::PropertyNameContext *ctx) = 0;

  virtual void enterArguments(myParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(myParser::ArgumentsContext *ctx) = 0;

  virtual void enterArgumentList(myParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(myParser::ArgumentListContext *ctx) = 0;

  virtual void enterArgument(myParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(myParser::ArgumentContext *ctx) = 0;

  virtual void enterExpressionSequence(myParser::ExpressionSequenceContext *ctx) = 0;
  virtual void exitExpressionSequence(myParser::ExpressionSequenceContext *ctx) = 0;

  virtual void enterFunctionExpressionDeclaration(myParser::FunctionExpressionDeclarationContext *ctx) = 0;
  virtual void exitFunctionExpressionDeclaration(myParser::FunctionExpressionDeclarationContext *ctx) = 0;

  virtual void enterTemplateStringExpression(myParser::TemplateStringExpressionContext *ctx) = 0;
  virtual void exitTemplateStringExpression(myParser::TemplateStringExpressionContext *ctx) = 0;

  virtual void enterTernaryExpression(myParser::TernaryExpressionContext *ctx) = 0;
  virtual void exitTernaryExpression(myParser::TernaryExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterGeneratorsExpression(myParser::GeneratorsExpressionContext *ctx) = 0;
  virtual void exitGeneratorsExpression(myParser::GeneratorsExpressionContext *ctx) = 0;

  virtual void enterPreIncrementExpression(myParser::PreIncrementExpressionContext *ctx) = 0;
  virtual void exitPreIncrementExpression(myParser::PreIncrementExpressionContext *ctx) = 0;

  virtual void enterObjectLiteralExpression(myParser::ObjectLiteralExpressionContext *ctx) = 0;
  virtual void exitObjectLiteralExpression(myParser::ObjectLiteralExpressionContext *ctx) = 0;

  virtual void enterInExpression(myParser::InExpressionContext *ctx) = 0;
  virtual void exitInExpression(myParser::InExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterGenericTypes(myParser::GenericTypesContext *ctx) = 0;
  virtual void exitGenericTypes(myParser::GenericTypesContext *ctx) = 0;

  virtual void enterNotExpression(myParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(myParser::NotExpressionContext *ctx) = 0;

  virtual void enterPreDecreaseExpression(myParser::PreDecreaseExpressionContext *ctx) = 0;
  virtual void exitPreDecreaseExpression(myParser::PreDecreaseExpressionContext *ctx) = 0;

  virtual void enterArgumentsExpression(myParser::ArgumentsExpressionContext *ctx) = 0;
  virtual void exitArgumentsExpression(myParser::ArgumentsExpressionContext *ctx) = 0;

  virtual void enterThisExpression(myParser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(myParser::ThisExpressionContext *ctx) = 0;

  virtual void enterFunctionExpression(myParser::FunctionExpressionContext *ctx) = 0;
  virtual void exitFunctionExpression(myParser::FunctionExpressionContext *ctx) = 0;

  virtual void enterUnaryMinusExpression(myParser::UnaryMinusExpressionContext *ctx) = 0;
  virtual void exitUnaryMinusExpression(myParser::UnaryMinusExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterPostDecreaseExpression(myParser::PostDecreaseExpressionContext *ctx) = 0;
  virtual void exitPostDecreaseExpression(myParser::PostDecreaseExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterInstanceofExpression(myParser::InstanceofExpressionContext *ctx) = 0;
  virtual void exitInstanceofExpression(myParser::InstanceofExpressionContext *ctx) = 0;

  virtual void enterUnaryPlusExpression(myParser::UnaryPlusExpressionContext *ctx) = 0;
  virtual void exitUnaryPlusExpression(myParser::UnaryPlusExpressionContext *ctx) = 0;

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterGeneratorsFunctionExpression(myParser::GeneratorsFunctionExpressionContext *ctx) = 0;
  virtual void exitGeneratorsFunctionExpression(myParser::GeneratorsFunctionExpressionContext *ctx) = 0;

  virtual void enterArrowFunctionExpression(myParser::ArrowFunctionExpressionContext *ctx) = 0;
  virtual void exitArrowFunctionExpression(myParser::ArrowFunctionExpressionContext *ctx) = 0;

  virtual void enterIteratorsExpression(myParser::IteratorsExpressionContext *ctx) = 0;
  virtual void exitIteratorsExpression(myParser::IteratorsExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterBitXOrExpression(myParser::BitXOrExpressionContext *ctx) = 0;
  virtual void exitBitXOrExpression(myParser::BitXOrExpressionContext *ctx) = 0;

  virtual void enterCastAsExpression(myParser::CastAsExpressionContext *ctx) = 0;
  virtual void exitCastAsExpression(myParser::CastAsExpressionContext *ctx) = 0;

  virtual void enterSuperExpression(myParser::SuperExpressionContext *ctx) = 0;
  virtual void exitSuperExpression(myParser::SuperExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterBitShiftExpression(myParser::BitShiftExpressionContext *ctx) = 0;
  virtual void exitBitShiftExpression(myParser::BitShiftExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterPostIncrementExpression(myParser::PostIncrementExpressionContext *ctx) = 0;
  virtual void exitPostIncrementExpression(myParser::PostIncrementExpressionContext *ctx) = 0;

  virtual void enterYieldExpression(myParser::YieldExpressionContext *ctx) = 0;
  virtual void exitYieldExpression(myParser::YieldExpressionContext *ctx) = 0;

  virtual void enterBitNotExpression(myParser::BitNotExpressionContext *ctx) = 0;
  virtual void exitBitNotExpression(myParser::BitNotExpressionContext *ctx) = 0;

  virtual void enterNewExpression(myParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(myParser::NewExpressionContext *ctx) = 0;

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterArrayLiteralExpression(myParser::ArrayLiteralExpressionContext *ctx) = 0;
  virtual void exitArrayLiteralExpression(myParser::ArrayLiteralExpressionContext *ctx) = 0;

  virtual void enterMemberDotExpression(myParser::MemberDotExpressionContext *ctx) = 0;
  virtual void exitMemberDotExpression(myParser::MemberDotExpressionContext *ctx) = 0;

  virtual void enterClassExpression(myParser::ClassExpressionContext *ctx) = 0;
  virtual void exitClassExpression(myParser::ClassExpressionContext *ctx) = 0;

  virtual void enterMemberIndexExpression(myParser::MemberIndexExpressionContext *ctx) = 0;
  virtual void exitMemberIndexExpression(myParser::MemberIndexExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(myParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(myParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBitAndExpression(myParser::BitAndExpressionContext *ctx) = 0;
  virtual void exitBitAndExpression(myParser::BitAndExpressionContext *ctx) = 0;

  virtual void enterBitOrExpression(myParser::BitOrExpressionContext *ctx) = 0;
  virtual void exitBitOrExpression(myParser::BitOrExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext *ctx) = 0;
  virtual void exitAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext *ctx) = 0;

  virtual void enterVoidExpression(myParser::VoidExpressionContext *ctx) = 0;
  virtual void exitVoidExpression(myParser::VoidExpressionContext *ctx) = 0;

  virtual void enterAsExpression(myParser::AsExpressionContext *ctx) = 0;
  virtual void exitAsExpression(myParser::AsExpressionContext *ctx) = 0;

  virtual void enterArrowFunctionDeclaration(myParser::ArrowFunctionDeclarationContext *ctx) = 0;
  virtual void exitArrowFunctionDeclaration(myParser::ArrowFunctionDeclarationContext *ctx) = 0;

  virtual void enterArrowFunctionParameters(myParser::ArrowFunctionParametersContext *ctx) = 0;
  virtual void exitArrowFunctionParameters(myParser::ArrowFunctionParametersContext *ctx) = 0;

  virtual void enterArrowFunctionBody(myParser::ArrowFunctionBodyContext *ctx) = 0;
  virtual void exitArrowFunctionBody(myParser::ArrowFunctionBodyContext *ctx) = 0;

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterLiteral(myParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(myParser::LiteralContext *ctx) = 0;

  virtual void enterTemplateStringLiteral(myParser::TemplateStringLiteralContext *ctx) = 0;
  virtual void exitTemplateStringLiteral(myParser::TemplateStringLiteralContext *ctx) = 0;

  virtual void enterTemplateStringAtom(myParser::TemplateStringAtomContext *ctx) = 0;
  virtual void exitTemplateStringAtom(myParser::TemplateStringAtomContext *ctx) = 0;

  virtual void enterNumericLiteral(myParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(myParser::NumericLiteralContext *ctx) = 0;

  virtual void enterIdentifierName(myParser::IdentifierNameContext *ctx) = 0;
  virtual void exitIdentifierName(myParser::IdentifierNameContext *ctx) = 0;

  virtual void enterIdentifierOrKeyWord(myParser::IdentifierOrKeyWordContext *ctx) = 0;
  virtual void exitIdentifierOrKeyWord(myParser::IdentifierOrKeyWordContext *ctx) = 0;

  virtual void enterReservedWord(myParser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(myParser::ReservedWordContext *ctx) = 0;

  virtual void enterKeyword(myParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(myParser::KeywordContext *ctx) = 0;

  virtual void enterGetter(myParser::GetterContext *ctx) = 0;
  virtual void exitGetter(myParser::GetterContext *ctx) = 0;

  virtual void enterSetter(myParser::SetterContext *ctx) = 0;
  virtual void exitSetter(myParser::SetterContext *ctx) = 0;

  virtual void enterEos(myParser::EosContext *ctx) = 0;
  virtual void exitEos(myParser::EosContext *ctx) = 0;


};

