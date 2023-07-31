
    #include "TypeScriptParserBase.h"


// Generated from TypeScriptParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TypeScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TypeScriptParser.
 */
class  TypeScriptParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInitializer(TypeScriptParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(TypeScriptParser::InitializerContext *ctx) = 0;

  virtual void enterBindingPattern(TypeScriptParser::BindingPatternContext *ctx) = 0;
  virtual void exitBindingPattern(TypeScriptParser::BindingPatternContext *ctx) = 0;

  virtual void enterTypeParameters(TypeScriptParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(TypeScriptParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameterList(TypeScriptParser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(TypeScriptParser::TypeParameterListContext *ctx) = 0;

  virtual void enterTypeParameter(TypeScriptParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(TypeScriptParser::TypeParameterContext *ctx) = 0;

  virtual void enterConstraint(TypeScriptParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(TypeScriptParser::ConstraintContext *ctx) = 0;

  virtual void enterTypeArguments(TypeScriptParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(TypeScriptParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeArgumentList(TypeScriptParser::TypeArgumentListContext *ctx) = 0;
  virtual void exitTypeArgumentList(TypeScriptParser::TypeArgumentListContext *ctx) = 0;

  virtual void enterTypeArgument(TypeScriptParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(TypeScriptParser::TypeArgumentContext *ctx) = 0;

  virtual void enterType_(TypeScriptParser::Type_Context *ctx) = 0;
  virtual void exitType_(TypeScriptParser::Type_Context *ctx) = 0;

  virtual void enterIntersection(TypeScriptParser::IntersectionContext *ctx) = 0;
  virtual void exitIntersection(TypeScriptParser::IntersectionContext *ctx) = 0;

  virtual void enterPrimary(TypeScriptParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(TypeScriptParser::PrimaryContext *ctx) = 0;

  virtual void enterUnion(TypeScriptParser::UnionContext *ctx) = 0;
  virtual void exitUnion(TypeScriptParser::UnionContext *ctx) = 0;

  virtual void enterRedefinitionOfType(TypeScriptParser::RedefinitionOfTypeContext *ctx) = 0;
  virtual void exitRedefinitionOfType(TypeScriptParser::RedefinitionOfTypeContext *ctx) = 0;

  virtual void enterPredefinedPrimType(TypeScriptParser::PredefinedPrimTypeContext *ctx) = 0;
  virtual void exitPredefinedPrimType(TypeScriptParser::PredefinedPrimTypeContext *ctx) = 0;

  virtual void enterArrayPrimType(TypeScriptParser::ArrayPrimTypeContext *ctx) = 0;
  virtual void exitArrayPrimType(TypeScriptParser::ArrayPrimTypeContext *ctx) = 0;

  virtual void enterParenthesizedPrimType(TypeScriptParser::ParenthesizedPrimTypeContext *ctx) = 0;
  virtual void exitParenthesizedPrimType(TypeScriptParser::ParenthesizedPrimTypeContext *ctx) = 0;

  virtual void enterThisPrimType(TypeScriptParser::ThisPrimTypeContext *ctx) = 0;
  virtual void exitThisPrimType(TypeScriptParser::ThisPrimTypeContext *ctx) = 0;

  virtual void enterTuplePrimType(TypeScriptParser::TuplePrimTypeContext *ctx) = 0;
  virtual void exitTuplePrimType(TypeScriptParser::TuplePrimTypeContext *ctx) = 0;

  virtual void enterObjectPrimType(TypeScriptParser::ObjectPrimTypeContext *ctx) = 0;
  virtual void exitObjectPrimType(TypeScriptParser::ObjectPrimTypeContext *ctx) = 0;

  virtual void enterReferencePrimType(TypeScriptParser::ReferencePrimTypeContext *ctx) = 0;
  virtual void exitReferencePrimType(TypeScriptParser::ReferencePrimTypeContext *ctx) = 0;

  virtual void enterQueryPrimType(TypeScriptParser::QueryPrimTypeContext *ctx) = 0;
  virtual void exitQueryPrimType(TypeScriptParser::QueryPrimTypeContext *ctx) = 0;

  virtual void enterPredefinedType(TypeScriptParser::PredefinedTypeContext *ctx) = 0;
  virtual void exitPredefinedType(TypeScriptParser::PredefinedTypeContext *ctx) = 0;

  virtual void enterTypeReference(TypeScriptParser::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(TypeScriptParser::TypeReferenceContext *ctx) = 0;

  virtual void enterNestedTypeGeneric(TypeScriptParser::NestedTypeGenericContext *ctx) = 0;
  virtual void exitNestedTypeGeneric(TypeScriptParser::NestedTypeGenericContext *ctx) = 0;

  virtual void enterTypeGeneric(TypeScriptParser::TypeGenericContext *ctx) = 0;
  virtual void exitTypeGeneric(TypeScriptParser::TypeGenericContext *ctx) = 0;

  virtual void enterTypeIncludeGeneric(TypeScriptParser::TypeIncludeGenericContext *ctx) = 0;
  virtual void exitTypeIncludeGeneric(TypeScriptParser::TypeIncludeGenericContext *ctx) = 0;

  virtual void enterTypeName(TypeScriptParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(TypeScriptParser::TypeNameContext *ctx) = 0;

  virtual void enterObjectType(TypeScriptParser::ObjectTypeContext *ctx) = 0;
  virtual void exitObjectType(TypeScriptParser::ObjectTypeContext *ctx) = 0;

  virtual void enterTypeBody(TypeScriptParser::TypeBodyContext *ctx) = 0;
  virtual void exitTypeBody(TypeScriptParser::TypeBodyContext *ctx) = 0;

  virtual void enterTypeMemberList(TypeScriptParser::TypeMemberListContext *ctx) = 0;
  virtual void exitTypeMemberList(TypeScriptParser::TypeMemberListContext *ctx) = 0;

  virtual void enterTypeMember(TypeScriptParser::TypeMemberContext *ctx) = 0;
  virtual void exitTypeMember(TypeScriptParser::TypeMemberContext *ctx) = 0;

  virtual void enterArrayType(TypeScriptParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(TypeScriptParser::ArrayTypeContext *ctx) = 0;

  virtual void enterTupleType(TypeScriptParser::TupleTypeContext *ctx) = 0;
  virtual void exitTupleType(TypeScriptParser::TupleTypeContext *ctx) = 0;

  virtual void enterTupleElementTypes(TypeScriptParser::TupleElementTypesContext *ctx) = 0;
  virtual void exitTupleElementTypes(TypeScriptParser::TupleElementTypesContext *ctx) = 0;

  virtual void enterFunctionType(TypeScriptParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(TypeScriptParser::FunctionTypeContext *ctx) = 0;

  virtual void enterConstructorType(TypeScriptParser::ConstructorTypeContext *ctx) = 0;
  virtual void exitConstructorType(TypeScriptParser::ConstructorTypeContext *ctx) = 0;

  virtual void enterTypeQuery(TypeScriptParser::TypeQueryContext *ctx) = 0;
  virtual void exitTypeQuery(TypeScriptParser::TypeQueryContext *ctx) = 0;

  virtual void enterTypeQueryExpression(TypeScriptParser::TypeQueryExpressionContext *ctx) = 0;
  virtual void exitTypeQueryExpression(TypeScriptParser::TypeQueryExpressionContext *ctx) = 0;

  virtual void enterPropertySignatur(TypeScriptParser::PropertySignaturContext *ctx) = 0;
  virtual void exitPropertySignatur(TypeScriptParser::PropertySignaturContext *ctx) = 0;

  virtual void enterTypeAnnotation(TypeScriptParser::TypeAnnotationContext *ctx) = 0;
  virtual void exitTypeAnnotation(TypeScriptParser::TypeAnnotationContext *ctx) = 0;

  virtual void enterCallSignature(TypeScriptParser::CallSignatureContext *ctx) = 0;
  virtual void exitCallSignature(TypeScriptParser::CallSignatureContext *ctx) = 0;

  virtual void enterParameterList(TypeScriptParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(TypeScriptParser::ParameterListContext *ctx) = 0;

  virtual void enterRequiredParameterList(TypeScriptParser::RequiredParameterListContext *ctx) = 0;
  virtual void exitRequiredParameterList(TypeScriptParser::RequiredParameterListContext *ctx) = 0;

  virtual void enterParameter(TypeScriptParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(TypeScriptParser::ParameterContext *ctx) = 0;

  virtual void enterOptionalParameter(TypeScriptParser::OptionalParameterContext *ctx) = 0;
  virtual void exitOptionalParameter(TypeScriptParser::OptionalParameterContext *ctx) = 0;

  virtual void enterRestParameter(TypeScriptParser::RestParameterContext *ctx) = 0;
  virtual void exitRestParameter(TypeScriptParser::RestParameterContext *ctx) = 0;

  virtual void enterRequiredParameter(TypeScriptParser::RequiredParameterContext *ctx) = 0;
  virtual void exitRequiredParameter(TypeScriptParser::RequiredParameterContext *ctx) = 0;

  virtual void enterAccessibilityModifier(TypeScriptParser::AccessibilityModifierContext *ctx) = 0;
  virtual void exitAccessibilityModifier(TypeScriptParser::AccessibilityModifierContext *ctx) = 0;

  virtual void enterIdentifierOrPattern(TypeScriptParser::IdentifierOrPatternContext *ctx) = 0;
  virtual void exitIdentifierOrPattern(TypeScriptParser::IdentifierOrPatternContext *ctx) = 0;

  virtual void enterConstructSignature(TypeScriptParser::ConstructSignatureContext *ctx) = 0;
  virtual void exitConstructSignature(TypeScriptParser::ConstructSignatureContext *ctx) = 0;

  virtual void enterIndexSignature(TypeScriptParser::IndexSignatureContext *ctx) = 0;
  virtual void exitIndexSignature(TypeScriptParser::IndexSignatureContext *ctx) = 0;

  virtual void enterMethodSignature(TypeScriptParser::MethodSignatureContext *ctx) = 0;
  virtual void exitMethodSignature(TypeScriptParser::MethodSignatureContext *ctx) = 0;

  virtual void enterTypeAliasDeclaration(TypeScriptParser::TypeAliasDeclarationContext *ctx) = 0;
  virtual void exitTypeAliasDeclaration(TypeScriptParser::TypeAliasDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclaration(TypeScriptParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(TypeScriptParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(TypeScriptParser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(TypeScriptParser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterInterfaceExtendsClause(TypeScriptParser::InterfaceExtendsClauseContext *ctx) = 0;
  virtual void exitInterfaceExtendsClause(TypeScriptParser::InterfaceExtendsClauseContext *ctx) = 0;

  virtual void enterClassOrInterfaceTypeList(TypeScriptParser::ClassOrInterfaceTypeListContext *ctx) = 0;
  virtual void exitClassOrInterfaceTypeList(TypeScriptParser::ClassOrInterfaceTypeListContext *ctx) = 0;

  virtual void enterEnumDeclaration(TypeScriptParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(TypeScriptParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumBody(TypeScriptParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(TypeScriptParser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumMemberList(TypeScriptParser::EnumMemberListContext *ctx) = 0;
  virtual void exitEnumMemberList(TypeScriptParser::EnumMemberListContext *ctx) = 0;

  virtual void enterEnumMember(TypeScriptParser::EnumMemberContext *ctx) = 0;
  virtual void exitEnumMember(TypeScriptParser::EnumMemberContext *ctx) = 0;

  virtual void enterNamespaceDeclaration(TypeScriptParser::NamespaceDeclarationContext *ctx) = 0;
  virtual void exitNamespaceDeclaration(TypeScriptParser::NamespaceDeclarationContext *ctx) = 0;

  virtual void enterNamespaceName(TypeScriptParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(TypeScriptParser::NamespaceNameContext *ctx) = 0;

  virtual void enterImportAliasDeclaration(TypeScriptParser::ImportAliasDeclarationContext *ctx) = 0;
  virtual void exitImportAliasDeclaration(TypeScriptParser::ImportAliasDeclarationContext *ctx) = 0;

  virtual void enterDecoratorList(TypeScriptParser::DecoratorListContext *ctx) = 0;
  virtual void exitDecoratorList(TypeScriptParser::DecoratorListContext *ctx) = 0;

  virtual void enterDecorator(TypeScriptParser::DecoratorContext *ctx) = 0;
  virtual void exitDecorator(TypeScriptParser::DecoratorContext *ctx) = 0;

  virtual void enterDecoratorMemberExpression(TypeScriptParser::DecoratorMemberExpressionContext *ctx) = 0;
  virtual void exitDecoratorMemberExpression(TypeScriptParser::DecoratorMemberExpressionContext *ctx) = 0;

  virtual void enterDecoratorCallExpression(TypeScriptParser::DecoratorCallExpressionContext *ctx) = 0;
  virtual void exitDecoratorCallExpression(TypeScriptParser::DecoratorCallExpressionContext *ctx) = 0;

  virtual void enterProgram(TypeScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(TypeScriptParser::ProgramContext *ctx) = 0;

  virtual void enterSourceElement(TypeScriptParser::SourceElementContext *ctx) = 0;
  virtual void exitSourceElement(TypeScriptParser::SourceElementContext *ctx) = 0;

  virtual void enterStatement(TypeScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TypeScriptParser::StatementContext *ctx) = 0;

  virtual void enterBlock(TypeScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(TypeScriptParser::BlockContext *ctx) = 0;

  virtual void enterStatementList(TypeScriptParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(TypeScriptParser::StatementListContext *ctx) = 0;

  virtual void enterAbstractDeclaration(TypeScriptParser::AbstractDeclarationContext *ctx) = 0;
  virtual void exitAbstractDeclaration(TypeScriptParser::AbstractDeclarationContext *ctx) = 0;

  virtual void enterImportStatement(TypeScriptParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(TypeScriptParser::ImportStatementContext *ctx) = 0;

  virtual void enterFromBlock(TypeScriptParser::FromBlockContext *ctx) = 0;
  virtual void exitFromBlock(TypeScriptParser::FromBlockContext *ctx) = 0;

  virtual void enterMultipleImportStatement(TypeScriptParser::MultipleImportStatementContext *ctx) = 0;
  virtual void exitMultipleImportStatement(TypeScriptParser::MultipleImportStatementContext *ctx) = 0;

  virtual void enterExportStatement(TypeScriptParser::ExportStatementContext *ctx) = 0;
  virtual void exitExportStatement(TypeScriptParser::ExportStatementContext *ctx) = 0;

  virtual void enterVariableStatement(TypeScriptParser::VariableStatementContext *ctx) = 0;
  virtual void exitVariableStatement(TypeScriptParser::VariableStatementContext *ctx) = 0;

  virtual void enterVariableDeclarationList(TypeScriptParser::VariableDeclarationListContext *ctx) = 0;
  virtual void exitVariableDeclarationList(TypeScriptParser::VariableDeclarationListContext *ctx) = 0;

  virtual void enterVariableDeclaration(TypeScriptParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(TypeScriptParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterEmptyStatement_(TypeScriptParser::EmptyStatement_Context *ctx) = 0;
  virtual void exitEmptyStatement_(TypeScriptParser::EmptyStatement_Context *ctx) = 0;

  virtual void enterExpressionStatement(TypeScriptParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(TypeScriptParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(TypeScriptParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(TypeScriptParser::IfStatementContext *ctx) = 0;

  virtual void enterDoStatement(TypeScriptParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(TypeScriptParser::DoStatementContext *ctx) = 0;

  virtual void enterWhileStatement(TypeScriptParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(TypeScriptParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(TypeScriptParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(TypeScriptParser::ForStatementContext *ctx) = 0;

  virtual void enterForVarStatement(TypeScriptParser::ForVarStatementContext *ctx) = 0;
  virtual void exitForVarStatement(TypeScriptParser::ForVarStatementContext *ctx) = 0;

  virtual void enterForInStatement(TypeScriptParser::ForInStatementContext *ctx) = 0;
  virtual void exitForInStatement(TypeScriptParser::ForInStatementContext *ctx) = 0;

  virtual void enterForVarInStatement(TypeScriptParser::ForVarInStatementContext *ctx) = 0;
  virtual void exitForVarInStatement(TypeScriptParser::ForVarInStatementContext *ctx) = 0;

  virtual void enterVarModifier(TypeScriptParser::VarModifierContext *ctx) = 0;
  virtual void exitVarModifier(TypeScriptParser::VarModifierContext *ctx) = 0;

  virtual void enterContinueStatement(TypeScriptParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(TypeScriptParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBreakStatement(TypeScriptParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(TypeScriptParser::BreakStatementContext *ctx) = 0;

  virtual void enterReturnStatement(TypeScriptParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(TypeScriptParser::ReturnStatementContext *ctx) = 0;

  virtual void enterYieldStatement(TypeScriptParser::YieldStatementContext *ctx) = 0;
  virtual void exitYieldStatement(TypeScriptParser::YieldStatementContext *ctx) = 0;

  virtual void enterWithStatement(TypeScriptParser::WithStatementContext *ctx) = 0;
  virtual void exitWithStatement(TypeScriptParser::WithStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(TypeScriptParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(TypeScriptParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseBlock(TypeScriptParser::CaseBlockContext *ctx) = 0;
  virtual void exitCaseBlock(TypeScriptParser::CaseBlockContext *ctx) = 0;

  virtual void enterCaseClauses(TypeScriptParser::CaseClausesContext *ctx) = 0;
  virtual void exitCaseClauses(TypeScriptParser::CaseClausesContext *ctx) = 0;

  virtual void enterCaseClause(TypeScriptParser::CaseClauseContext *ctx) = 0;
  virtual void exitCaseClause(TypeScriptParser::CaseClauseContext *ctx) = 0;

  virtual void enterDefaultClause(TypeScriptParser::DefaultClauseContext *ctx) = 0;
  virtual void exitDefaultClause(TypeScriptParser::DefaultClauseContext *ctx) = 0;

  virtual void enterLabelledStatement(TypeScriptParser::LabelledStatementContext *ctx) = 0;
  virtual void exitLabelledStatement(TypeScriptParser::LabelledStatementContext *ctx) = 0;

  virtual void enterThrowStatement(TypeScriptParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(TypeScriptParser::ThrowStatementContext *ctx) = 0;

  virtual void enterTryStatement(TypeScriptParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(TypeScriptParser::TryStatementContext *ctx) = 0;

  virtual void enterCatchProduction(TypeScriptParser::CatchProductionContext *ctx) = 0;
  virtual void exitCatchProduction(TypeScriptParser::CatchProductionContext *ctx) = 0;

  virtual void enterFinallyProduction(TypeScriptParser::FinallyProductionContext *ctx) = 0;
  virtual void exitFinallyProduction(TypeScriptParser::FinallyProductionContext *ctx) = 0;

  virtual void enterDebuggerStatement(TypeScriptParser::DebuggerStatementContext *ctx) = 0;
  virtual void exitDebuggerStatement(TypeScriptParser::DebuggerStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(TypeScriptParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(TypeScriptParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(TypeScriptParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(TypeScriptParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassHeritage(TypeScriptParser::ClassHeritageContext *ctx) = 0;
  virtual void exitClassHeritage(TypeScriptParser::ClassHeritageContext *ctx) = 0;

  virtual void enterClassTail(TypeScriptParser::ClassTailContext *ctx) = 0;
  virtual void exitClassTail(TypeScriptParser::ClassTailContext *ctx) = 0;

  virtual void enterClassExtendsClause(TypeScriptParser::ClassExtendsClauseContext *ctx) = 0;
  virtual void exitClassExtendsClause(TypeScriptParser::ClassExtendsClauseContext *ctx) = 0;

  virtual void enterImplementsClause(TypeScriptParser::ImplementsClauseContext *ctx) = 0;
  virtual void exitImplementsClause(TypeScriptParser::ImplementsClauseContext *ctx) = 0;

  virtual void enterClassElement(TypeScriptParser::ClassElementContext *ctx) = 0;
  virtual void exitClassElement(TypeScriptParser::ClassElementContext *ctx) = 0;

  virtual void enterPropertyDeclarationExpression(TypeScriptParser::PropertyDeclarationExpressionContext *ctx) = 0;
  virtual void exitPropertyDeclarationExpression(TypeScriptParser::PropertyDeclarationExpressionContext *ctx) = 0;

  virtual void enterMethodDeclarationExpression(TypeScriptParser::MethodDeclarationExpressionContext *ctx) = 0;
  virtual void exitMethodDeclarationExpression(TypeScriptParser::MethodDeclarationExpressionContext *ctx) = 0;

  virtual void enterGetterSetterDeclarationExpression(TypeScriptParser::GetterSetterDeclarationExpressionContext *ctx) = 0;
  virtual void exitGetterSetterDeclarationExpression(TypeScriptParser::GetterSetterDeclarationExpressionContext *ctx) = 0;

  virtual void enterAbstractMemberDeclaration(TypeScriptParser::AbstractMemberDeclarationContext *ctx) = 0;
  virtual void exitAbstractMemberDeclaration(TypeScriptParser::AbstractMemberDeclarationContext *ctx) = 0;

  virtual void enterPropertyMemberBase(TypeScriptParser::PropertyMemberBaseContext *ctx) = 0;
  virtual void exitPropertyMemberBase(TypeScriptParser::PropertyMemberBaseContext *ctx) = 0;

  virtual void enterIndexMemberDeclaration(TypeScriptParser::IndexMemberDeclarationContext *ctx) = 0;
  virtual void exitIndexMemberDeclaration(TypeScriptParser::IndexMemberDeclarationContext *ctx) = 0;

  virtual void enterGeneratorMethod(TypeScriptParser::GeneratorMethodContext *ctx) = 0;
  virtual void exitGeneratorMethod(TypeScriptParser::GeneratorMethodContext *ctx) = 0;

  virtual void enterGeneratorFunctionDeclaration(TypeScriptParser::GeneratorFunctionDeclarationContext *ctx) = 0;
  virtual void exitGeneratorFunctionDeclaration(TypeScriptParser::GeneratorFunctionDeclarationContext *ctx) = 0;

  virtual void enterGeneratorBlock(TypeScriptParser::GeneratorBlockContext *ctx) = 0;
  virtual void exitGeneratorBlock(TypeScriptParser::GeneratorBlockContext *ctx) = 0;

  virtual void enterGeneratorDefinition(TypeScriptParser::GeneratorDefinitionContext *ctx) = 0;
  virtual void exitGeneratorDefinition(TypeScriptParser::GeneratorDefinitionContext *ctx) = 0;

  virtual void enterIteratorBlock(TypeScriptParser::IteratorBlockContext *ctx) = 0;
  virtual void exitIteratorBlock(TypeScriptParser::IteratorBlockContext *ctx) = 0;

  virtual void enterIteratorDefinition(TypeScriptParser::IteratorDefinitionContext *ctx) = 0;
  virtual void exitIteratorDefinition(TypeScriptParser::IteratorDefinitionContext *ctx) = 0;

  virtual void enterFormalParameterList(TypeScriptParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(TypeScriptParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameterArg(TypeScriptParser::FormalParameterArgContext *ctx) = 0;
  virtual void exitFormalParameterArg(TypeScriptParser::FormalParameterArgContext *ctx) = 0;

  virtual void enterLastFormalParameterArg(TypeScriptParser::LastFormalParameterArgContext *ctx) = 0;
  virtual void exitLastFormalParameterArg(TypeScriptParser::LastFormalParameterArgContext *ctx) = 0;

  virtual void enterFunctionBody(TypeScriptParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(TypeScriptParser::FunctionBodyContext *ctx) = 0;

  virtual void enterSourceElements(TypeScriptParser::SourceElementsContext *ctx) = 0;
  virtual void exitSourceElements(TypeScriptParser::SourceElementsContext *ctx) = 0;

  virtual void enterArrayLiteral(TypeScriptParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(TypeScriptParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterElementList(TypeScriptParser::ElementListContext *ctx) = 0;
  virtual void exitElementList(TypeScriptParser::ElementListContext *ctx) = 0;

  virtual void enterArrayElement(TypeScriptParser::ArrayElementContext *ctx) = 0;
  virtual void exitArrayElement(TypeScriptParser::ArrayElementContext *ctx) = 0;

  virtual void enterObjectLiteral(TypeScriptParser::ObjectLiteralContext *ctx) = 0;
  virtual void exitObjectLiteral(TypeScriptParser::ObjectLiteralContext *ctx) = 0;

  virtual void enterPropertyExpressionAssignment(TypeScriptParser::PropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitPropertyExpressionAssignment(TypeScriptParser::PropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterComputedPropertyExpressionAssignment(TypeScriptParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;
  virtual void exitComputedPropertyExpressionAssignment(TypeScriptParser::ComputedPropertyExpressionAssignmentContext *ctx) = 0;

  virtual void enterPropertyGetter(TypeScriptParser::PropertyGetterContext *ctx) = 0;
  virtual void exitPropertyGetter(TypeScriptParser::PropertyGetterContext *ctx) = 0;

  virtual void enterPropertySetter(TypeScriptParser::PropertySetterContext *ctx) = 0;
  virtual void exitPropertySetter(TypeScriptParser::PropertySetterContext *ctx) = 0;

  virtual void enterMethodProperty(TypeScriptParser::MethodPropertyContext *ctx) = 0;
  virtual void exitMethodProperty(TypeScriptParser::MethodPropertyContext *ctx) = 0;

  virtual void enterPropertyShorthand(TypeScriptParser::PropertyShorthandContext *ctx) = 0;
  virtual void exitPropertyShorthand(TypeScriptParser::PropertyShorthandContext *ctx) = 0;

  virtual void enterRestParameterInObject(TypeScriptParser::RestParameterInObjectContext *ctx) = 0;
  virtual void exitRestParameterInObject(TypeScriptParser::RestParameterInObjectContext *ctx) = 0;

  virtual void enterGetAccessor(TypeScriptParser::GetAccessorContext *ctx) = 0;
  virtual void exitGetAccessor(TypeScriptParser::GetAccessorContext *ctx) = 0;

  virtual void enterSetAccessor(TypeScriptParser::SetAccessorContext *ctx) = 0;
  virtual void exitSetAccessor(TypeScriptParser::SetAccessorContext *ctx) = 0;

  virtual void enterPropertyName(TypeScriptParser::PropertyNameContext *ctx) = 0;
  virtual void exitPropertyName(TypeScriptParser::PropertyNameContext *ctx) = 0;

  virtual void enterArguments(TypeScriptParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(TypeScriptParser::ArgumentsContext *ctx) = 0;

  virtual void enterArgumentList(TypeScriptParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(TypeScriptParser::ArgumentListContext *ctx) = 0;

  virtual void enterArgument(TypeScriptParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(TypeScriptParser::ArgumentContext *ctx) = 0;

  virtual void enterExpressionSequence(TypeScriptParser::ExpressionSequenceContext *ctx) = 0;
  virtual void exitExpressionSequence(TypeScriptParser::ExpressionSequenceContext *ctx) = 0;

  virtual void enterFunctionExpressionDeclaration(TypeScriptParser::FunctionExpressionDeclarationContext *ctx) = 0;
  virtual void exitFunctionExpressionDeclaration(TypeScriptParser::FunctionExpressionDeclarationContext *ctx) = 0;

  virtual void enterTemplateStringExpression(TypeScriptParser::TemplateStringExpressionContext *ctx) = 0;
  virtual void exitTemplateStringExpression(TypeScriptParser::TemplateStringExpressionContext *ctx) = 0;

  virtual void enterTernaryExpression(TypeScriptParser::TernaryExpressionContext *ctx) = 0;
  virtual void exitTernaryExpression(TypeScriptParser::TernaryExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(TypeScriptParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(TypeScriptParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterGeneratorsExpression(TypeScriptParser::GeneratorsExpressionContext *ctx) = 0;
  virtual void exitGeneratorsExpression(TypeScriptParser::GeneratorsExpressionContext *ctx) = 0;

  virtual void enterPreIncrementExpression(TypeScriptParser::PreIncrementExpressionContext *ctx) = 0;
  virtual void exitPreIncrementExpression(TypeScriptParser::PreIncrementExpressionContext *ctx) = 0;

  virtual void enterObjectLiteralExpression(TypeScriptParser::ObjectLiteralExpressionContext *ctx) = 0;
  virtual void exitObjectLiteralExpression(TypeScriptParser::ObjectLiteralExpressionContext *ctx) = 0;

  virtual void enterInExpression(TypeScriptParser::InExpressionContext *ctx) = 0;
  virtual void exitInExpression(TypeScriptParser::InExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(TypeScriptParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(TypeScriptParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterGenericTypes(TypeScriptParser::GenericTypesContext *ctx) = 0;
  virtual void exitGenericTypes(TypeScriptParser::GenericTypesContext *ctx) = 0;

  virtual void enterNotExpression(TypeScriptParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(TypeScriptParser::NotExpressionContext *ctx) = 0;

  virtual void enterPreDecreaseExpression(TypeScriptParser::PreDecreaseExpressionContext *ctx) = 0;
  virtual void exitPreDecreaseExpression(TypeScriptParser::PreDecreaseExpressionContext *ctx) = 0;

  virtual void enterArgumentsExpression(TypeScriptParser::ArgumentsExpressionContext *ctx) = 0;
  virtual void exitArgumentsExpression(TypeScriptParser::ArgumentsExpressionContext *ctx) = 0;

  virtual void enterThisExpression(TypeScriptParser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(TypeScriptParser::ThisExpressionContext *ctx) = 0;

  virtual void enterFunctionExpression(TypeScriptParser::FunctionExpressionContext *ctx) = 0;
  virtual void exitFunctionExpression(TypeScriptParser::FunctionExpressionContext *ctx) = 0;

  virtual void enterUnaryMinusExpression(TypeScriptParser::UnaryMinusExpressionContext *ctx) = 0;
  virtual void exitUnaryMinusExpression(TypeScriptParser::UnaryMinusExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(TypeScriptParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(TypeScriptParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterPostDecreaseExpression(TypeScriptParser::PostDecreaseExpressionContext *ctx) = 0;
  virtual void exitPostDecreaseExpression(TypeScriptParser::PostDecreaseExpressionContext *ctx) = 0;

  virtual void enterTypeofExpression(TypeScriptParser::TypeofExpressionContext *ctx) = 0;
  virtual void exitTypeofExpression(TypeScriptParser::TypeofExpressionContext *ctx) = 0;

  virtual void enterInstanceofExpression(TypeScriptParser::InstanceofExpressionContext *ctx) = 0;
  virtual void exitInstanceofExpression(TypeScriptParser::InstanceofExpressionContext *ctx) = 0;

  virtual void enterUnaryPlusExpression(TypeScriptParser::UnaryPlusExpressionContext *ctx) = 0;
  virtual void exitUnaryPlusExpression(TypeScriptParser::UnaryPlusExpressionContext *ctx) = 0;

  virtual void enterDeleteExpression(TypeScriptParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(TypeScriptParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterGeneratorsFunctionExpression(TypeScriptParser::GeneratorsFunctionExpressionContext *ctx) = 0;
  virtual void exitGeneratorsFunctionExpression(TypeScriptParser::GeneratorsFunctionExpressionContext *ctx) = 0;

  virtual void enterArrowFunctionExpression(TypeScriptParser::ArrowFunctionExpressionContext *ctx) = 0;
  virtual void exitArrowFunctionExpression(TypeScriptParser::ArrowFunctionExpressionContext *ctx) = 0;

  virtual void enterIteratorsExpression(TypeScriptParser::IteratorsExpressionContext *ctx) = 0;
  virtual void exitIteratorsExpression(TypeScriptParser::IteratorsExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(TypeScriptParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(TypeScriptParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterBitXOrExpression(TypeScriptParser::BitXOrExpressionContext *ctx) = 0;
  virtual void exitBitXOrExpression(TypeScriptParser::BitXOrExpressionContext *ctx) = 0;

  virtual void enterCastAsExpression(TypeScriptParser::CastAsExpressionContext *ctx) = 0;
  virtual void exitCastAsExpression(TypeScriptParser::CastAsExpressionContext *ctx) = 0;

  virtual void enterSuperExpression(TypeScriptParser::SuperExpressionContext *ctx) = 0;
  virtual void exitSuperExpression(TypeScriptParser::SuperExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(TypeScriptParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(TypeScriptParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterBitShiftExpression(TypeScriptParser::BitShiftExpressionContext *ctx) = 0;
  virtual void exitBitShiftExpression(TypeScriptParser::BitShiftExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(TypeScriptParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(TypeScriptParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(TypeScriptParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(TypeScriptParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(TypeScriptParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(TypeScriptParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterPostIncrementExpression(TypeScriptParser::PostIncrementExpressionContext *ctx) = 0;
  virtual void exitPostIncrementExpression(TypeScriptParser::PostIncrementExpressionContext *ctx) = 0;

  virtual void enterYieldExpression(TypeScriptParser::YieldExpressionContext *ctx) = 0;
  virtual void exitYieldExpression(TypeScriptParser::YieldExpressionContext *ctx) = 0;

  virtual void enterBitNotExpression(TypeScriptParser::BitNotExpressionContext *ctx) = 0;
  virtual void exitBitNotExpression(TypeScriptParser::BitNotExpressionContext *ctx) = 0;

  virtual void enterNewExpression(TypeScriptParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(TypeScriptParser::NewExpressionContext *ctx) = 0;

  virtual void enterLiteralExpression(TypeScriptParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(TypeScriptParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterArrayLiteralExpression(TypeScriptParser::ArrayLiteralExpressionContext *ctx) = 0;
  virtual void exitArrayLiteralExpression(TypeScriptParser::ArrayLiteralExpressionContext *ctx) = 0;

  virtual void enterMemberDotExpression(TypeScriptParser::MemberDotExpressionContext *ctx) = 0;
  virtual void exitMemberDotExpression(TypeScriptParser::MemberDotExpressionContext *ctx) = 0;

  virtual void enterMemberIndexExpression(TypeScriptParser::MemberIndexExpressionContext *ctx) = 0;
  virtual void exitMemberIndexExpression(TypeScriptParser::MemberIndexExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(TypeScriptParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(TypeScriptParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBitAndExpression(TypeScriptParser::BitAndExpressionContext *ctx) = 0;
  virtual void exitBitAndExpression(TypeScriptParser::BitAndExpressionContext *ctx) = 0;

  virtual void enterBitOrExpression(TypeScriptParser::BitOrExpressionContext *ctx) = 0;
  virtual void exitBitOrExpression(TypeScriptParser::BitOrExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperatorExpression(TypeScriptParser::AssignmentOperatorExpressionContext *ctx) = 0;
  virtual void exitAssignmentOperatorExpression(TypeScriptParser::AssignmentOperatorExpressionContext *ctx) = 0;

  virtual void enterVoidExpression(TypeScriptParser::VoidExpressionContext *ctx) = 0;
  virtual void exitVoidExpression(TypeScriptParser::VoidExpressionContext *ctx) = 0;

  virtual void enterAsExpression(TypeScriptParser::AsExpressionContext *ctx) = 0;
  virtual void exitAsExpression(TypeScriptParser::AsExpressionContext *ctx) = 0;

  virtual void enterArrowFunctionDeclaration(TypeScriptParser::ArrowFunctionDeclarationContext *ctx) = 0;
  virtual void exitArrowFunctionDeclaration(TypeScriptParser::ArrowFunctionDeclarationContext *ctx) = 0;

  virtual void enterArrowFunctionParameters(TypeScriptParser::ArrowFunctionParametersContext *ctx) = 0;
  virtual void exitArrowFunctionParameters(TypeScriptParser::ArrowFunctionParametersContext *ctx) = 0;

  virtual void enterArrowFunctionBody(TypeScriptParser::ArrowFunctionBodyContext *ctx) = 0;
  virtual void exitArrowFunctionBody(TypeScriptParser::ArrowFunctionBodyContext *ctx) = 0;

  virtual void enterAssignmentOperator(TypeScriptParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(TypeScriptParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterLiteral(TypeScriptParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(TypeScriptParser::LiteralContext *ctx) = 0;

  virtual void enterTemplateStringLiteral(TypeScriptParser::TemplateStringLiteralContext *ctx) = 0;
  virtual void exitTemplateStringLiteral(TypeScriptParser::TemplateStringLiteralContext *ctx) = 0;

  virtual void enterTemplateStringAtom(TypeScriptParser::TemplateStringAtomContext *ctx) = 0;
  virtual void exitTemplateStringAtom(TypeScriptParser::TemplateStringAtomContext *ctx) = 0;

  virtual void enterNumericLiteral(TypeScriptParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(TypeScriptParser::NumericLiteralContext *ctx) = 0;

  virtual void enterIdentifierName(TypeScriptParser::IdentifierNameContext *ctx) = 0;
  virtual void exitIdentifierName(TypeScriptParser::IdentifierNameContext *ctx) = 0;

  virtual void enterIdentifierOrKeyWord(TypeScriptParser::IdentifierOrKeyWordContext *ctx) = 0;
  virtual void exitIdentifierOrKeyWord(TypeScriptParser::IdentifierOrKeyWordContext *ctx) = 0;

  virtual void enterReservedWord(TypeScriptParser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(TypeScriptParser::ReservedWordContext *ctx) = 0;

  virtual void enterKeyword(TypeScriptParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TypeScriptParser::KeywordContext *ctx) = 0;

  virtual void enterGetter(TypeScriptParser::GetterContext *ctx) = 0;
  virtual void exitGetter(TypeScriptParser::GetterContext *ctx) = 0;

  virtual void enterSetter(TypeScriptParser::SetterContext *ctx) = 0;
  virtual void exitSetter(TypeScriptParser::SetterContext *ctx) = 0;

  virtual void enterEos(TypeScriptParser::EosContext *ctx) = 0;
  virtual void exitEos(TypeScriptParser::EosContext *ctx) = 0;


};

