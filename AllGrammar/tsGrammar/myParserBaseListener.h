
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

  virtual void enterInitializer(myParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(myParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBindingPattern(myParser::BindingPatternContext * /*ctx*/) override { }
  virtual void exitBindingPattern(myParser::BindingPatternContext * /*ctx*/) override { }

  virtual void enterTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(myParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(myParser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(myParser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(myParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterConstraint(myParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(myParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(myParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeArgumentList(myParser::TypeArgumentListContext * /*ctx*/) override { }
  virtual void exitTypeArgumentList(myParser::TypeArgumentListContext * /*ctx*/) override { }

  virtual void enterTypeArgument(myParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(myParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterType_(myParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(myParser::Type_Context * /*ctx*/) override { }

  virtual void enterIntersection(myParser::IntersectionContext * /*ctx*/) override { }
  virtual void exitIntersection(myParser::IntersectionContext * /*ctx*/) override { }

  virtual void enterPrimary(myParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(myParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterUnion(myParser::UnionContext * /*ctx*/) override { }
  virtual void exitUnion(myParser::UnionContext * /*ctx*/) override { }

  virtual void enterRedefinitionOfType(myParser::RedefinitionOfTypeContext * /*ctx*/) override { }
  virtual void exitRedefinitionOfType(myParser::RedefinitionOfTypeContext * /*ctx*/) override { }

  virtual void enterPredefinedPrimType(myParser::PredefinedPrimTypeContext * /*ctx*/) override { }
  virtual void exitPredefinedPrimType(myParser::PredefinedPrimTypeContext * /*ctx*/) override { }

  virtual void enterArrayPrimType(myParser::ArrayPrimTypeContext * /*ctx*/) override { }
  virtual void exitArrayPrimType(myParser::ArrayPrimTypeContext * /*ctx*/) override { }

  virtual void enterParenthesizedPrimType(myParser::ParenthesizedPrimTypeContext * /*ctx*/) override { }
  virtual void exitParenthesizedPrimType(myParser::ParenthesizedPrimTypeContext * /*ctx*/) override { }

  virtual void enterThisPrimType(myParser::ThisPrimTypeContext * /*ctx*/) override { }
  virtual void exitThisPrimType(myParser::ThisPrimTypeContext * /*ctx*/) override { }

  virtual void enterTuplePrimType(myParser::TuplePrimTypeContext * /*ctx*/) override { }
  virtual void exitTuplePrimType(myParser::TuplePrimTypeContext * /*ctx*/) override { }

  virtual void enterObjectPrimType(myParser::ObjectPrimTypeContext * /*ctx*/) override { }
  virtual void exitObjectPrimType(myParser::ObjectPrimTypeContext * /*ctx*/) override { }

  virtual void enterReferencePrimType(myParser::ReferencePrimTypeContext * /*ctx*/) override { }
  virtual void exitReferencePrimType(myParser::ReferencePrimTypeContext * /*ctx*/) override { }

  virtual void enterQueryPrimType(myParser::QueryPrimTypeContext * /*ctx*/) override { }
  virtual void exitQueryPrimType(myParser::QueryPrimTypeContext * /*ctx*/) override { }

  virtual void enterPredefinedType(myParser::PredefinedTypeContext * /*ctx*/) override { }
  virtual void exitPredefinedType(myParser::PredefinedTypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(myParser::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(myParser::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterNestedTypeGeneric(myParser::NestedTypeGenericContext * /*ctx*/) override { }
  virtual void exitNestedTypeGeneric(myParser::NestedTypeGenericContext * /*ctx*/) override { }

  virtual void enterTypeGeneric(myParser::TypeGenericContext * /*ctx*/) override { }
  virtual void exitTypeGeneric(myParser::TypeGenericContext * /*ctx*/) override { }

  virtual void enterTypeIncludeGeneric(myParser::TypeIncludeGenericContext * /*ctx*/) override { }
  virtual void exitTypeIncludeGeneric(myParser::TypeIncludeGenericContext * /*ctx*/) override { }

  virtual void enterTypeName(myParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(myParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterObjectType(myParser::ObjectTypeContext * /*ctx*/) override { }
  virtual void exitObjectType(myParser::ObjectTypeContext * /*ctx*/) override { }

  virtual void enterTypeBody(myParser::TypeBodyContext * /*ctx*/) override { }
  virtual void exitTypeBody(myParser::TypeBodyContext * /*ctx*/) override { }

  virtual void enterTypeMemberList(myParser::TypeMemberListContext * /*ctx*/) override { }
  virtual void exitTypeMemberList(myParser::TypeMemberListContext * /*ctx*/) override { }

  virtual void enterTypeMember(myParser::TypeMemberContext * /*ctx*/) override { }
  virtual void exitTypeMember(myParser::TypeMemberContext * /*ctx*/) override { }

  virtual void enterArrayType(myParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(myParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterTupleType(myParser::TupleTypeContext * /*ctx*/) override { }
  virtual void exitTupleType(myParser::TupleTypeContext * /*ctx*/) override { }

  virtual void enterTupleElementTypes(myParser::TupleElementTypesContext * /*ctx*/) override { }
  virtual void exitTupleElementTypes(myParser::TupleElementTypesContext * /*ctx*/) override { }

  virtual void enterFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(myParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterConstructorType(myParser::ConstructorTypeContext * /*ctx*/) override { }
  virtual void exitConstructorType(myParser::ConstructorTypeContext * /*ctx*/) override { }

  virtual void enterTypeQuery(myParser::TypeQueryContext * /*ctx*/) override { }
  virtual void exitTypeQuery(myParser::TypeQueryContext * /*ctx*/) override { }

  virtual void enterTypeQueryExpression(myParser::TypeQueryExpressionContext * /*ctx*/) override { }
  virtual void exitTypeQueryExpression(myParser::TypeQueryExpressionContext * /*ctx*/) override { }

  virtual void enterPropertySignatur(myParser::PropertySignaturContext * /*ctx*/) override { }
  virtual void exitPropertySignatur(myParser::PropertySignaturContext * /*ctx*/) override { }

  virtual void enterTypeAnnotation(myParser::TypeAnnotationContext * /*ctx*/) override { }
  virtual void exitTypeAnnotation(myParser::TypeAnnotationContext * /*ctx*/) override { }

  virtual void enterCallSignature(myParser::CallSignatureContext * /*ctx*/) override { }
  virtual void exitCallSignature(myParser::CallSignatureContext * /*ctx*/) override { }

  virtual void enterParameterList(myParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(myParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterRequiredParameterList(myParser::RequiredParameterListContext * /*ctx*/) override { }
  virtual void exitRequiredParameterList(myParser::RequiredParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(myParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(myParser::ParameterContext * /*ctx*/) override { }

  virtual void enterOptionalParameter(myParser::OptionalParameterContext * /*ctx*/) override { }
  virtual void exitOptionalParameter(myParser::OptionalParameterContext * /*ctx*/) override { }

  virtual void enterRestParameter(myParser::RestParameterContext * /*ctx*/) override { }
  virtual void exitRestParameter(myParser::RestParameterContext * /*ctx*/) override { }

  virtual void enterRequiredParameter(myParser::RequiredParameterContext * /*ctx*/) override { }
  virtual void exitRequiredParameter(myParser::RequiredParameterContext * /*ctx*/) override { }

  virtual void enterAccessibilityModifier(myParser::AccessibilityModifierContext * /*ctx*/) override { }
  virtual void exitAccessibilityModifier(myParser::AccessibilityModifierContext * /*ctx*/) override { }

  virtual void enterIdentifierOrPattern(myParser::IdentifierOrPatternContext * /*ctx*/) override { }
  virtual void exitIdentifierOrPattern(myParser::IdentifierOrPatternContext * /*ctx*/) override { }

  virtual void enterConstructSignature(myParser::ConstructSignatureContext * /*ctx*/) override { }
  virtual void exitConstructSignature(myParser::ConstructSignatureContext * /*ctx*/) override { }

  virtual void enterIndexSignature(myParser::IndexSignatureContext * /*ctx*/) override { }
  virtual void exitIndexSignature(myParser::IndexSignatureContext * /*ctx*/) override { }

  virtual void enterMethodSignature(myParser::MethodSignatureContext * /*ctx*/) override { }
  virtual void exitMethodSignature(myParser::MethodSignatureContext * /*ctx*/) override { }

  virtual void enterTypeAliasDeclaration(myParser::TypeAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeAliasDeclaration(myParser::TypeAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(myParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(myParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(myParser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(myParser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceExtendsClause(myParser::InterfaceExtendsClauseContext * /*ctx*/) override { }
  virtual void exitInterfaceExtendsClause(myParser::InterfaceExtendsClauseContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceTypeList(myParser::ClassOrInterfaceTypeListContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceTypeList(myParser::ClassOrInterfaceTypeListContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(myParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(myParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumBody(myParser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(myParser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumMemberList(myParser::EnumMemberListContext * /*ctx*/) override { }
  virtual void exitEnumMemberList(myParser::EnumMemberListContext * /*ctx*/) override { }

  virtual void enterEnumMember(myParser::EnumMemberContext * /*ctx*/) override { }
  virtual void exitEnumMember(myParser::EnumMemberContext * /*ctx*/) override { }

  virtual void enterNamespaceDeclaration(myParser::NamespaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNamespaceDeclaration(myParser::NamespaceDeclarationContext * /*ctx*/) override { }

  virtual void enterNamespaceName(myParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(myParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterImportAliasDeclaration(myParser::ImportAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitImportAliasDeclaration(myParser::ImportAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterDecoratorList(myParser::DecoratorListContext * /*ctx*/) override { }
  virtual void exitDecoratorList(myParser::DecoratorListContext * /*ctx*/) override { }

  virtual void enterDecorator(myParser::DecoratorContext * /*ctx*/) override { }
  virtual void exitDecorator(myParser::DecoratorContext * /*ctx*/) override { }

  virtual void enterDecoratorMemberExpression(myParser::DecoratorMemberExpressionContext * /*ctx*/) override { }
  virtual void exitDecoratorMemberExpression(myParser::DecoratorMemberExpressionContext * /*ctx*/) override { }

  virtual void enterDecoratorCallExpression(myParser::DecoratorCallExpressionContext * /*ctx*/) override { }
  virtual void exitDecoratorCallExpression(myParser::DecoratorCallExpressionContext * /*ctx*/) override { }

  virtual void enterProgram(myParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(myParser::ProgramContext * /*ctx*/) override { }

  virtual void enterSourceElement(myParser::SourceElementContext * /*ctx*/) override { }
  virtual void exitSourceElement(myParser::SourceElementContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(myParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(myParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatementList(myParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(myParser::StatementListContext * /*ctx*/) override { }

  virtual void enterAbstractDeclaration(myParser::AbstractDeclarationContext * /*ctx*/) override { }
  virtual void exitAbstractDeclaration(myParser::AbstractDeclarationContext * /*ctx*/) override { }

  virtual void enterImportStatement(myParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(myParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterFromBlock(myParser::FromBlockContext * /*ctx*/) override { }
  virtual void exitFromBlock(myParser::FromBlockContext * /*ctx*/) override { }

  virtual void enterMultipleImportStatement(myParser::MultipleImportStatementContext * /*ctx*/) override { }
  virtual void exitMultipleImportStatement(myParser::MultipleImportStatementContext * /*ctx*/) override { }

  virtual void enterExportStatement(myParser::ExportStatementContext * /*ctx*/) override { }
  virtual void exitExportStatement(myParser::ExportStatementContext * /*ctx*/) override { }

  virtual void enterVariableStatement(myParser::VariableStatementContext * /*ctx*/) override { }
  virtual void exitVariableStatement(myParser::VariableStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationList(myParser::VariableDeclarationListContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationList(myParser::VariableDeclarationListContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(myParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyStatement_(myParser::EmptyStatement_Context * /*ctx*/) override { }
  virtual void exitEmptyStatement_(myParser::EmptyStatement_Context * /*ctx*/) override { }

  virtual void enterExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(myParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(myParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(myParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(myParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(myParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(myParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(myParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(myParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForVarStatement(myParser::ForVarStatementContext * /*ctx*/) override { }
  virtual void exitForVarStatement(myParser::ForVarStatementContext * /*ctx*/) override { }

  virtual void enterForInStatement(myParser::ForInStatementContext * /*ctx*/) override { }
  virtual void exitForInStatement(myParser::ForInStatementContext * /*ctx*/) override { }

  virtual void enterForVarInStatement(myParser::ForVarInStatementContext * /*ctx*/) override { }
  virtual void exitForVarInStatement(myParser::ForVarInStatementContext * /*ctx*/) override { }

  virtual void enterVarModifier(myParser::VarModifierContext * /*ctx*/) override { }
  virtual void exitVarModifier(myParser::VarModifierContext * /*ctx*/) override { }

  virtual void enterContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(myParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(myParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(myParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(myParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterWithStatement(myParser::WithStatementContext * /*ctx*/) override { }
  virtual void exitWithStatement(myParser::WithStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(myParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseBlock(myParser::CaseBlockContext * /*ctx*/) override { }
  virtual void exitCaseBlock(myParser::CaseBlockContext * /*ctx*/) override { }

  virtual void enterCaseClauses(myParser::CaseClausesContext * /*ctx*/) override { }
  virtual void exitCaseClauses(myParser::CaseClausesContext * /*ctx*/) override { }

  virtual void enterCaseClause(myParser::CaseClauseContext * /*ctx*/) override { }
  virtual void exitCaseClause(myParser::CaseClauseContext * /*ctx*/) override { }

  virtual void enterDefaultClause(myParser::DefaultClauseContext * /*ctx*/) override { }
  virtual void exitDefaultClause(myParser::DefaultClauseContext * /*ctx*/) override { }

  virtual void enterLabelledStatement(myParser::LabelledStatementContext * /*ctx*/) override { }
  virtual void exitLabelledStatement(myParser::LabelledStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(myParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(myParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(myParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatchProduction(myParser::CatchProductionContext * /*ctx*/) override { }
  virtual void exitCatchProduction(myParser::CatchProductionContext * /*ctx*/) override { }

  virtual void enterFinallyProduction(myParser::FinallyProductionContext * /*ctx*/) override { }
  virtual void exitFinallyProduction(myParser::FinallyProductionContext * /*ctx*/) override { }

  virtual void enterDebuggerStatement(myParser::DebuggerStatementContext * /*ctx*/) override { }
  virtual void exitDebuggerStatement(myParser::DebuggerStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(myParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(myParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassHeritage(myParser::ClassHeritageContext * /*ctx*/) override { }
  virtual void exitClassHeritage(myParser::ClassHeritageContext * /*ctx*/) override { }

  virtual void enterClassTail(myParser::ClassTailContext * /*ctx*/) override { }
  virtual void exitClassTail(myParser::ClassTailContext * /*ctx*/) override { }

  virtual void enterClassExtendsClause(myParser::ClassExtendsClauseContext * /*ctx*/) override { }
  virtual void exitClassExtendsClause(myParser::ClassExtendsClauseContext * /*ctx*/) override { }

  virtual void enterImplementsClause(myParser::ImplementsClauseContext * /*ctx*/) override { }
  virtual void exitImplementsClause(myParser::ImplementsClauseContext * /*ctx*/) override { }

  virtual void enterClassElement(myParser::ClassElementContext * /*ctx*/) override { }
  virtual void exitClassElement(myParser::ClassElementContext * /*ctx*/) override { }

  virtual void enterPropertyDeclarationExpression(myParser::PropertyDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitPropertyDeclarationExpression(myParser::PropertyDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterMethodDeclarationExpression(myParser::MethodDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitMethodDeclarationExpression(myParser::MethodDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterGetterSetterDeclarationExpression(myParser::GetterSetterDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitGetterSetterDeclarationExpression(myParser::GetterSetterDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterAbstractMemberDeclaration(myParser::AbstractMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitAbstractMemberDeclaration(myParser::AbstractMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterPropertyMemberBase(myParser::PropertyMemberBaseContext * /*ctx*/) override { }
  virtual void exitPropertyMemberBase(myParser::PropertyMemberBaseContext * /*ctx*/) override { }

  virtual void enterIndexMemberDeclaration(myParser::IndexMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitIndexMemberDeclaration(myParser::IndexMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterGeneratorMethod(myParser::GeneratorMethodContext * /*ctx*/) override { }
  virtual void exitGeneratorMethod(myParser::GeneratorMethodContext * /*ctx*/) override { }

  virtual void enterGeneratorFunctionDeclaration(myParser::GeneratorFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitGeneratorFunctionDeclaration(myParser::GeneratorFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterGeneratorBlock(myParser::GeneratorBlockContext * /*ctx*/) override { }
  virtual void exitGeneratorBlock(myParser::GeneratorBlockContext * /*ctx*/) override { }

  virtual void enterGeneratorDefinition(myParser::GeneratorDefinitionContext * /*ctx*/) override { }
  virtual void exitGeneratorDefinition(myParser::GeneratorDefinitionContext * /*ctx*/) override { }

  virtual void enterIteratorBlock(myParser::IteratorBlockContext * /*ctx*/) override { }
  virtual void exitIteratorBlock(myParser::IteratorBlockContext * /*ctx*/) override { }

  virtual void enterIteratorDefinition(myParser::IteratorDefinitionContext * /*ctx*/) override { }
  virtual void exitIteratorDefinition(myParser::IteratorDefinitionContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(myParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameterArg(myParser::FormalParameterArgContext * /*ctx*/) override { }
  virtual void exitFormalParameterArg(myParser::FormalParameterArgContext * /*ctx*/) override { }

  virtual void enterLastFormalParameterArg(myParser::LastFormalParameterArgContext * /*ctx*/) override { }
  virtual void exitLastFormalParameterArg(myParser::LastFormalParameterArgContext * /*ctx*/) override { }

  virtual void enterFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(myParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterSourceElements(myParser::SourceElementsContext * /*ctx*/) override { }
  virtual void exitSourceElements(myParser::SourceElementsContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(myParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(myParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterElementList(myParser::ElementListContext * /*ctx*/) override { }
  virtual void exitElementList(myParser::ElementListContext * /*ctx*/) override { }

  virtual void enterArrayElement(myParser::ArrayElementContext * /*ctx*/) override { }
  virtual void exitArrayElement(myParser::ArrayElementContext * /*ctx*/) override { }

  virtual void enterObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }
  virtual void exitObjectLiteral(myParser::ObjectLiteralContext * /*ctx*/) override { }

  virtual void enterPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitPropertyExpressionAssignment(myParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitComputedPropertyExpressionAssignment(myParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterPropertyGetter(myParser::PropertyGetterContext * /*ctx*/) override { }
  virtual void exitPropertyGetter(myParser::PropertyGetterContext * /*ctx*/) override { }

  virtual void enterPropertySetter(myParser::PropertySetterContext * /*ctx*/) override { }
  virtual void exitPropertySetter(myParser::PropertySetterContext * /*ctx*/) override { }

  virtual void enterMethodProperty(myParser::MethodPropertyContext * /*ctx*/) override { }
  virtual void exitMethodProperty(myParser::MethodPropertyContext * /*ctx*/) override { }

  virtual void enterPropertyShorthand(myParser::PropertyShorthandContext * /*ctx*/) override { }
  virtual void exitPropertyShorthand(myParser::PropertyShorthandContext * /*ctx*/) override { }

  virtual void enterRestParameterInObject(myParser::RestParameterInObjectContext * /*ctx*/) override { }
  virtual void exitRestParameterInObject(myParser::RestParameterInObjectContext * /*ctx*/) override { }

  virtual void enterGetAccessor(myParser::GetAccessorContext * /*ctx*/) override { }
  virtual void exitGetAccessor(myParser::GetAccessorContext * /*ctx*/) override { }

  virtual void enterSetAccessor(myParser::SetAccessorContext * /*ctx*/) override { }
  virtual void exitSetAccessor(myParser::SetAccessorContext * /*ctx*/) override { }

  virtual void enterPropertyName(myParser::PropertyNameContext * /*ctx*/) override { }
  virtual void exitPropertyName(myParser::PropertyNameContext * /*ctx*/) override { }

  virtual void enterArguments(myParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(myParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterArgumentList(myParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(myParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterArgument(myParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(myParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpressionSequence(myParser::ExpressionSequenceContext * /*ctx*/) override { }
  virtual void exitExpressionSequence(myParser::ExpressionSequenceContext * /*ctx*/) override { }

  virtual void enterFunctionExpressionDeclaration(myParser::FunctionExpressionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionExpressionDeclaration(myParser::FunctionExpressionDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateStringExpression(myParser::TemplateStringExpressionContext * /*ctx*/) override { }
  virtual void exitTemplateStringExpression(myParser::TemplateStringExpressionContext * /*ctx*/) override { }

  virtual void enterTernaryExpression(myParser::TernaryExpressionContext * /*ctx*/) override { }
  virtual void exitTernaryExpression(myParser::TernaryExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(myParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterGeneratorsExpression(myParser::GeneratorsExpressionContext * /*ctx*/) override { }
  virtual void exitGeneratorsExpression(myParser::GeneratorsExpressionContext * /*ctx*/) override { }

  virtual void enterPreIncrementExpression(myParser::PreIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreIncrementExpression(myParser::PreIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterObjectLiteralExpression(myParser::ObjectLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitObjectLiteralExpression(myParser::ObjectLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterInExpression(myParser::InExpressionContext * /*ctx*/) override { }
  virtual void exitInExpression(myParser::InExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(myParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterGenericTypes(myParser::GenericTypesContext * /*ctx*/) override { }
  virtual void exitGenericTypes(myParser::GenericTypesContext * /*ctx*/) override { }

  virtual void enterNotExpression(myParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(myParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterPreDecreaseExpression(myParser::PreDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPreDecreaseExpression(myParser::PreDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterArgumentsExpression(myParser::ArgumentsExpressionContext * /*ctx*/) override { }
  virtual void exitArgumentsExpression(myParser::ArgumentsExpressionContext * /*ctx*/) override { }

  virtual void enterThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }
  virtual void exitThisExpression(myParser::ThisExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionExpression(myParser::FunctionExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionExpression(myParser::FunctionExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(myParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(myParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(myParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterPostDecreaseExpression(myParser::PostDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPostDecreaseExpression(myParser::PostDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(myParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterInstanceofExpression(myParser::InstanceofExpressionContext * /*ctx*/) override { }
  virtual void exitInstanceofExpression(myParser::InstanceofExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryPlusExpression(myParser::UnaryPlusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryPlusExpression(myParser::UnaryPlusExpressionContext * /*ctx*/) override { }

  virtual void enterDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(myParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterGeneratorsFunctionExpression(myParser::GeneratorsFunctionExpressionContext * /*ctx*/) override { }
  virtual void exitGeneratorsFunctionExpression(myParser::GeneratorsFunctionExpressionContext * /*ctx*/) override { }

  virtual void enterArrowFunctionExpression(myParser::ArrowFunctionExpressionContext * /*ctx*/) override { }
  virtual void exitArrowFunctionExpression(myParser::ArrowFunctionExpressionContext * /*ctx*/) override { }

  virtual void enterIteratorsExpression(myParser::IteratorsExpressionContext * /*ctx*/) override { }
  virtual void exitIteratorsExpression(myParser::IteratorsExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(myParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterBitXOrExpression(myParser::BitXOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitXOrExpression(myParser::BitXOrExpressionContext * /*ctx*/) override { }

  virtual void enterCastAsExpression(myParser::CastAsExpressionContext * /*ctx*/) override { }
  virtual void exitCastAsExpression(myParser::CastAsExpressionContext * /*ctx*/) override { }

  virtual void enterSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }
  virtual void exitSuperExpression(myParser::SuperExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(myParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterBitShiftExpression(myParser::BitShiftExpressionContext * /*ctx*/) override { }
  virtual void exitBitShiftExpression(myParser::BitShiftExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(myParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(myParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(myParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterPostIncrementExpression(myParser::PostIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementExpression(myParser::PostIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterYieldExpression(myParser::YieldExpressionContext * /*ctx*/) override { }
  virtual void exitYieldExpression(myParser::YieldExpressionContext * /*ctx*/) override { }

  virtual void enterBitNotExpression(myParser::BitNotExpressionContext * /*ctx*/) override { }
  virtual void exitBitNotExpression(myParser::BitNotExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(myParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(myParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterArrayLiteralExpression(myParser::ArrayLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitArrayLiteralExpression(myParser::ArrayLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterMemberDotExpression(myParser::MemberDotExpressionContext * /*ctx*/) override { }
  virtual void exitMemberDotExpression(myParser::MemberDotExpressionContext * /*ctx*/) override { }

  virtual void enterClassExpression(myParser::ClassExpressionContext * /*ctx*/) override { }
  virtual void exitClassExpression(myParser::ClassExpressionContext * /*ctx*/) override { }

  virtual void enterMemberIndexExpression(myParser::MemberIndexExpressionContext * /*ctx*/) override { }
  virtual void exitMemberIndexExpression(myParser::MemberIndexExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(myParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(myParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterBitAndExpression(myParser::BitAndExpressionContext * /*ctx*/) override { }
  virtual void exitBitAndExpression(myParser::BitAndExpressionContext * /*ctx*/) override { }

  virtual void enterBitOrExpression(myParser::BitOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitOrExpression(myParser::BitOrExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentOperatorExpression(myParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterVoidExpression(myParser::VoidExpressionContext * /*ctx*/) override { }
  virtual void exitVoidExpression(myParser::VoidExpressionContext * /*ctx*/) override { }

  virtual void enterAsExpression(myParser::AsExpressionContext * /*ctx*/) override { }
  virtual void exitAsExpression(myParser::AsExpressionContext * /*ctx*/) override { }

  virtual void enterArrowFunctionDeclaration(myParser::ArrowFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitArrowFunctionDeclaration(myParser::ArrowFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterArrowFunctionParameters(myParser::ArrowFunctionParametersContext * /*ctx*/) override { }
  virtual void exitArrowFunctionParameters(myParser::ArrowFunctionParametersContext * /*ctx*/) override { }

  virtual void enterArrowFunctionBody(myParser::ArrowFunctionBodyContext * /*ctx*/) override { }
  virtual void exitArrowFunctionBody(myParser::ArrowFunctionBodyContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(myParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringLiteral(myParser::TemplateStringLiteralContext * /*ctx*/) override { }
  virtual void exitTemplateStringLiteral(myParser::TemplateStringLiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringAtom(myParser::TemplateStringAtomContext * /*ctx*/) override { }
  virtual void exitTemplateStringAtom(myParser::TemplateStringAtomContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(myParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(myParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifierName(myParser::IdentifierNameContext * /*ctx*/) override { }
  virtual void exitIdentifierName(myParser::IdentifierNameContext * /*ctx*/) override { }

  virtual void enterIdentifierOrKeyWord(myParser::IdentifierOrKeyWordContext * /*ctx*/) override { }
  virtual void exitIdentifierOrKeyWord(myParser::IdentifierOrKeyWordContext * /*ctx*/) override { }

  virtual void enterReservedWord(myParser::ReservedWordContext * /*ctx*/) override { }
  virtual void exitReservedWord(myParser::ReservedWordContext * /*ctx*/) override { }

  virtual void enterKeyword(myParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(myParser::KeywordContext * /*ctx*/) override { }

  virtual void enterGetter(myParser::GetterContext * /*ctx*/) override { }
  virtual void exitGetter(myParser::GetterContext * /*ctx*/) override { }

  virtual void enterSetter(myParser::SetterContext * /*ctx*/) override { }
  virtual void exitSetter(myParser::SetterContext * /*ctx*/) override { }

  virtual void enterEos(myParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(myParser::EosContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

