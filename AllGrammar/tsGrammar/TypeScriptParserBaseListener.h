
    #include "TypeScriptParserBase.h"


// Generated from TypeScriptParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TypeScriptParserListener.h"


/**
 * This class provides an empty implementation of TypeScriptParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TypeScriptParserBaseListener : public TypeScriptParserListener {
public:

  virtual void enterInitializer(TypeScriptParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(TypeScriptParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBindingPattern(TypeScriptParser::BindingPatternContext * /*ctx*/) override { }
  virtual void exitBindingPattern(TypeScriptParser::BindingPatternContext * /*ctx*/) override { }

  virtual void enterTypeParameters(TypeScriptParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(TypeScriptParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(TypeScriptParser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(TypeScriptParser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterTypeParameter(TypeScriptParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(TypeScriptParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterConstraint(TypeScriptParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(TypeScriptParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterTypeArguments(TypeScriptParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(TypeScriptParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeArgumentList(TypeScriptParser::TypeArgumentListContext * /*ctx*/) override { }
  virtual void exitTypeArgumentList(TypeScriptParser::TypeArgumentListContext * /*ctx*/) override { }

  virtual void enterTypeArgument(TypeScriptParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(TypeScriptParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterType_(TypeScriptParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(TypeScriptParser::Type_Context * /*ctx*/) override { }

  virtual void enterIntersection(TypeScriptParser::IntersectionContext * /*ctx*/) override { }
  virtual void exitIntersection(TypeScriptParser::IntersectionContext * /*ctx*/) override { }

  virtual void enterPrimary(TypeScriptParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(TypeScriptParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterUnion(TypeScriptParser::UnionContext * /*ctx*/) override { }
  virtual void exitUnion(TypeScriptParser::UnionContext * /*ctx*/) override { }

  virtual void enterRedefinitionOfType(TypeScriptParser::RedefinitionOfTypeContext * /*ctx*/) override { }
  virtual void exitRedefinitionOfType(TypeScriptParser::RedefinitionOfTypeContext * /*ctx*/) override { }

  virtual void enterPredefinedPrimType(TypeScriptParser::PredefinedPrimTypeContext * /*ctx*/) override { }
  virtual void exitPredefinedPrimType(TypeScriptParser::PredefinedPrimTypeContext * /*ctx*/) override { }

  virtual void enterArrayPrimType(TypeScriptParser::ArrayPrimTypeContext * /*ctx*/) override { }
  virtual void exitArrayPrimType(TypeScriptParser::ArrayPrimTypeContext * /*ctx*/) override { }

  virtual void enterParenthesizedPrimType(TypeScriptParser::ParenthesizedPrimTypeContext * /*ctx*/) override { }
  virtual void exitParenthesizedPrimType(TypeScriptParser::ParenthesizedPrimTypeContext * /*ctx*/) override { }

  virtual void enterThisPrimType(TypeScriptParser::ThisPrimTypeContext * /*ctx*/) override { }
  virtual void exitThisPrimType(TypeScriptParser::ThisPrimTypeContext * /*ctx*/) override { }

  virtual void enterTuplePrimType(TypeScriptParser::TuplePrimTypeContext * /*ctx*/) override { }
  virtual void exitTuplePrimType(TypeScriptParser::TuplePrimTypeContext * /*ctx*/) override { }

  virtual void enterObjectPrimType(TypeScriptParser::ObjectPrimTypeContext * /*ctx*/) override { }
  virtual void exitObjectPrimType(TypeScriptParser::ObjectPrimTypeContext * /*ctx*/) override { }

  virtual void enterReferencePrimType(TypeScriptParser::ReferencePrimTypeContext * /*ctx*/) override { }
  virtual void exitReferencePrimType(TypeScriptParser::ReferencePrimTypeContext * /*ctx*/) override { }

  virtual void enterQueryPrimType(TypeScriptParser::QueryPrimTypeContext * /*ctx*/) override { }
  virtual void exitQueryPrimType(TypeScriptParser::QueryPrimTypeContext * /*ctx*/) override { }

  virtual void enterPredefinedType(TypeScriptParser::PredefinedTypeContext * /*ctx*/) override { }
  virtual void exitPredefinedType(TypeScriptParser::PredefinedTypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(TypeScriptParser::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(TypeScriptParser::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterNestedTypeGeneric(TypeScriptParser::NestedTypeGenericContext * /*ctx*/) override { }
  virtual void exitNestedTypeGeneric(TypeScriptParser::NestedTypeGenericContext * /*ctx*/) override { }

  virtual void enterTypeGeneric(TypeScriptParser::TypeGenericContext * /*ctx*/) override { }
  virtual void exitTypeGeneric(TypeScriptParser::TypeGenericContext * /*ctx*/) override { }

  virtual void enterTypeIncludeGeneric(TypeScriptParser::TypeIncludeGenericContext * /*ctx*/) override { }
  virtual void exitTypeIncludeGeneric(TypeScriptParser::TypeIncludeGenericContext * /*ctx*/) override { }

  virtual void enterTypeName(TypeScriptParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(TypeScriptParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterObjectType(TypeScriptParser::ObjectTypeContext * /*ctx*/) override { }
  virtual void exitObjectType(TypeScriptParser::ObjectTypeContext * /*ctx*/) override { }

  virtual void enterTypeBody(TypeScriptParser::TypeBodyContext * /*ctx*/) override { }
  virtual void exitTypeBody(TypeScriptParser::TypeBodyContext * /*ctx*/) override { }

  virtual void enterTypeMemberList(TypeScriptParser::TypeMemberListContext * /*ctx*/) override { }
  virtual void exitTypeMemberList(TypeScriptParser::TypeMemberListContext * /*ctx*/) override { }

  virtual void enterTypeMember(TypeScriptParser::TypeMemberContext * /*ctx*/) override { }
  virtual void exitTypeMember(TypeScriptParser::TypeMemberContext * /*ctx*/) override { }

  virtual void enterArrayType(TypeScriptParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(TypeScriptParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterTupleType(TypeScriptParser::TupleTypeContext * /*ctx*/) override { }
  virtual void exitTupleType(TypeScriptParser::TupleTypeContext * /*ctx*/) override { }

  virtual void enterTupleElementTypes(TypeScriptParser::TupleElementTypesContext * /*ctx*/) override { }
  virtual void exitTupleElementTypes(TypeScriptParser::TupleElementTypesContext * /*ctx*/) override { }

  virtual void enterFunctionType(TypeScriptParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(TypeScriptParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterConstructorType(TypeScriptParser::ConstructorTypeContext * /*ctx*/) override { }
  virtual void exitConstructorType(TypeScriptParser::ConstructorTypeContext * /*ctx*/) override { }

  virtual void enterTypeQuery(TypeScriptParser::TypeQueryContext * /*ctx*/) override { }
  virtual void exitTypeQuery(TypeScriptParser::TypeQueryContext * /*ctx*/) override { }

  virtual void enterTypeQueryExpression(TypeScriptParser::TypeQueryExpressionContext * /*ctx*/) override { }
  virtual void exitTypeQueryExpression(TypeScriptParser::TypeQueryExpressionContext * /*ctx*/) override { }

  virtual void enterPropertySignatur(TypeScriptParser::PropertySignaturContext * /*ctx*/) override { }
  virtual void exitPropertySignatur(TypeScriptParser::PropertySignaturContext * /*ctx*/) override { }

  virtual void enterTypeAnnotation(TypeScriptParser::TypeAnnotationContext * /*ctx*/) override { }
  virtual void exitTypeAnnotation(TypeScriptParser::TypeAnnotationContext * /*ctx*/) override { }

  virtual void enterCallSignature(TypeScriptParser::CallSignatureContext * /*ctx*/) override { }
  virtual void exitCallSignature(TypeScriptParser::CallSignatureContext * /*ctx*/) override { }

  virtual void enterParameterList(TypeScriptParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(TypeScriptParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterRequiredParameterList(TypeScriptParser::RequiredParameterListContext * /*ctx*/) override { }
  virtual void exitRequiredParameterList(TypeScriptParser::RequiredParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(TypeScriptParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(TypeScriptParser::ParameterContext * /*ctx*/) override { }

  virtual void enterOptionalParameter(TypeScriptParser::OptionalParameterContext * /*ctx*/) override { }
  virtual void exitOptionalParameter(TypeScriptParser::OptionalParameterContext * /*ctx*/) override { }

  virtual void enterRestParameter(TypeScriptParser::RestParameterContext * /*ctx*/) override { }
  virtual void exitRestParameter(TypeScriptParser::RestParameterContext * /*ctx*/) override { }

  virtual void enterRequiredParameter(TypeScriptParser::RequiredParameterContext * /*ctx*/) override { }
  virtual void exitRequiredParameter(TypeScriptParser::RequiredParameterContext * /*ctx*/) override { }

  virtual void enterAccessibilityModifier(TypeScriptParser::AccessibilityModifierContext * /*ctx*/) override { }
  virtual void exitAccessibilityModifier(TypeScriptParser::AccessibilityModifierContext * /*ctx*/) override { }

  virtual void enterIdentifierOrPattern(TypeScriptParser::IdentifierOrPatternContext * /*ctx*/) override { }
  virtual void exitIdentifierOrPattern(TypeScriptParser::IdentifierOrPatternContext * /*ctx*/) override { }

  virtual void enterConstructSignature(TypeScriptParser::ConstructSignatureContext * /*ctx*/) override { }
  virtual void exitConstructSignature(TypeScriptParser::ConstructSignatureContext * /*ctx*/) override { }

  virtual void enterIndexSignature(TypeScriptParser::IndexSignatureContext * /*ctx*/) override { }
  virtual void exitIndexSignature(TypeScriptParser::IndexSignatureContext * /*ctx*/) override { }

  virtual void enterMethodSignature(TypeScriptParser::MethodSignatureContext * /*ctx*/) override { }
  virtual void exitMethodSignature(TypeScriptParser::MethodSignatureContext * /*ctx*/) override { }

  virtual void enterTypeAliasDeclaration(TypeScriptParser::TypeAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeAliasDeclaration(TypeScriptParser::TypeAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(TypeScriptParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(TypeScriptParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(TypeScriptParser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(TypeScriptParser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceExtendsClause(TypeScriptParser::InterfaceExtendsClauseContext * /*ctx*/) override { }
  virtual void exitInterfaceExtendsClause(TypeScriptParser::InterfaceExtendsClauseContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceTypeList(TypeScriptParser::ClassOrInterfaceTypeListContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceTypeList(TypeScriptParser::ClassOrInterfaceTypeListContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(TypeScriptParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(TypeScriptParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumBody(TypeScriptParser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(TypeScriptParser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumMemberList(TypeScriptParser::EnumMemberListContext * /*ctx*/) override { }
  virtual void exitEnumMemberList(TypeScriptParser::EnumMemberListContext * /*ctx*/) override { }

  virtual void enterEnumMember(TypeScriptParser::EnumMemberContext * /*ctx*/) override { }
  virtual void exitEnumMember(TypeScriptParser::EnumMemberContext * /*ctx*/) override { }

  virtual void enterNamespaceDeclaration(TypeScriptParser::NamespaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNamespaceDeclaration(TypeScriptParser::NamespaceDeclarationContext * /*ctx*/) override { }

  virtual void enterNamespaceName(TypeScriptParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(TypeScriptParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterImportAliasDeclaration(TypeScriptParser::ImportAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitImportAliasDeclaration(TypeScriptParser::ImportAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterDecoratorList(TypeScriptParser::DecoratorListContext * /*ctx*/) override { }
  virtual void exitDecoratorList(TypeScriptParser::DecoratorListContext * /*ctx*/) override { }

  virtual void enterDecorator(TypeScriptParser::DecoratorContext * /*ctx*/) override { }
  virtual void exitDecorator(TypeScriptParser::DecoratorContext * /*ctx*/) override { }

  virtual void enterDecoratorMemberExpression(TypeScriptParser::DecoratorMemberExpressionContext * /*ctx*/) override { }
  virtual void exitDecoratorMemberExpression(TypeScriptParser::DecoratorMemberExpressionContext * /*ctx*/) override { }

  virtual void enterDecoratorCallExpression(TypeScriptParser::DecoratorCallExpressionContext * /*ctx*/) override { }
  virtual void exitDecoratorCallExpression(TypeScriptParser::DecoratorCallExpressionContext * /*ctx*/) override { }

  virtual void enterProgram(TypeScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(TypeScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterSourceElement(TypeScriptParser::SourceElementContext * /*ctx*/) override { }
  virtual void exitSourceElement(TypeScriptParser::SourceElementContext * /*ctx*/) override { }

  virtual void enterStatement(TypeScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TypeScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(TypeScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(TypeScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatementList(TypeScriptParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(TypeScriptParser::StatementListContext * /*ctx*/) override { }

  virtual void enterAbstractDeclaration(TypeScriptParser::AbstractDeclarationContext * /*ctx*/) override { }
  virtual void exitAbstractDeclaration(TypeScriptParser::AbstractDeclarationContext * /*ctx*/) override { }

  virtual void enterImportStatement(TypeScriptParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(TypeScriptParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterFromBlock(TypeScriptParser::FromBlockContext * /*ctx*/) override { }
  virtual void exitFromBlock(TypeScriptParser::FromBlockContext * /*ctx*/) override { }

  virtual void enterMultipleImportStatement(TypeScriptParser::MultipleImportStatementContext * /*ctx*/) override { }
  virtual void exitMultipleImportStatement(TypeScriptParser::MultipleImportStatementContext * /*ctx*/) override { }

  virtual void enterExportStatement(TypeScriptParser::ExportStatementContext * /*ctx*/) override { }
  virtual void exitExportStatement(TypeScriptParser::ExportStatementContext * /*ctx*/) override { }

  virtual void enterVariableStatement(TypeScriptParser::VariableStatementContext * /*ctx*/) override { }
  virtual void exitVariableStatement(TypeScriptParser::VariableStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationList(TypeScriptParser::VariableDeclarationListContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationList(TypeScriptParser::VariableDeclarationListContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(TypeScriptParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(TypeScriptParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyStatement_(TypeScriptParser::EmptyStatement_Context * /*ctx*/) override { }
  virtual void exitEmptyStatement_(TypeScriptParser::EmptyStatement_Context * /*ctx*/) override { }

  virtual void enterExpressionStatement(TypeScriptParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(TypeScriptParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(TypeScriptParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(TypeScriptParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(TypeScriptParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(TypeScriptParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(TypeScriptParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(TypeScriptParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(TypeScriptParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(TypeScriptParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForVarStatement(TypeScriptParser::ForVarStatementContext * /*ctx*/) override { }
  virtual void exitForVarStatement(TypeScriptParser::ForVarStatementContext * /*ctx*/) override { }

  virtual void enterForInStatement(TypeScriptParser::ForInStatementContext * /*ctx*/) override { }
  virtual void exitForInStatement(TypeScriptParser::ForInStatementContext * /*ctx*/) override { }

  virtual void enterForVarInStatement(TypeScriptParser::ForVarInStatementContext * /*ctx*/) override { }
  virtual void exitForVarInStatement(TypeScriptParser::ForVarInStatementContext * /*ctx*/) override { }

  virtual void enterVarModifier(TypeScriptParser::VarModifierContext * /*ctx*/) override { }
  virtual void exitVarModifier(TypeScriptParser::VarModifierContext * /*ctx*/) override { }

  virtual void enterContinueStatement(TypeScriptParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(TypeScriptParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(TypeScriptParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(TypeScriptParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(TypeScriptParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(TypeScriptParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterYieldStatement(TypeScriptParser::YieldStatementContext * /*ctx*/) override { }
  virtual void exitYieldStatement(TypeScriptParser::YieldStatementContext * /*ctx*/) override { }

  virtual void enterWithStatement(TypeScriptParser::WithStatementContext * /*ctx*/) override { }
  virtual void exitWithStatement(TypeScriptParser::WithStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(TypeScriptParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(TypeScriptParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseBlock(TypeScriptParser::CaseBlockContext * /*ctx*/) override { }
  virtual void exitCaseBlock(TypeScriptParser::CaseBlockContext * /*ctx*/) override { }

  virtual void enterCaseClauses(TypeScriptParser::CaseClausesContext * /*ctx*/) override { }
  virtual void exitCaseClauses(TypeScriptParser::CaseClausesContext * /*ctx*/) override { }

  virtual void enterCaseClause(TypeScriptParser::CaseClauseContext * /*ctx*/) override { }
  virtual void exitCaseClause(TypeScriptParser::CaseClauseContext * /*ctx*/) override { }

  virtual void enterDefaultClause(TypeScriptParser::DefaultClauseContext * /*ctx*/) override { }
  virtual void exitDefaultClause(TypeScriptParser::DefaultClauseContext * /*ctx*/) override { }

  virtual void enterLabelledStatement(TypeScriptParser::LabelledStatementContext * /*ctx*/) override { }
  virtual void exitLabelledStatement(TypeScriptParser::LabelledStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(TypeScriptParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(TypeScriptParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(TypeScriptParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(TypeScriptParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatchProduction(TypeScriptParser::CatchProductionContext * /*ctx*/) override { }
  virtual void exitCatchProduction(TypeScriptParser::CatchProductionContext * /*ctx*/) override { }

  virtual void enterFinallyProduction(TypeScriptParser::FinallyProductionContext * /*ctx*/) override { }
  virtual void exitFinallyProduction(TypeScriptParser::FinallyProductionContext * /*ctx*/) override { }

  virtual void enterDebuggerStatement(TypeScriptParser::DebuggerStatementContext * /*ctx*/) override { }
  virtual void exitDebuggerStatement(TypeScriptParser::DebuggerStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(TypeScriptParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(TypeScriptParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(TypeScriptParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(TypeScriptParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassHeritage(TypeScriptParser::ClassHeritageContext * /*ctx*/) override { }
  virtual void exitClassHeritage(TypeScriptParser::ClassHeritageContext * /*ctx*/) override { }

  virtual void enterClassTail(TypeScriptParser::ClassTailContext * /*ctx*/) override { }
  virtual void exitClassTail(TypeScriptParser::ClassTailContext * /*ctx*/) override { }

  virtual void enterClassExtendsClause(TypeScriptParser::ClassExtendsClauseContext * /*ctx*/) override { }
  virtual void exitClassExtendsClause(TypeScriptParser::ClassExtendsClauseContext * /*ctx*/) override { }

  virtual void enterImplementsClause(TypeScriptParser::ImplementsClauseContext * /*ctx*/) override { }
  virtual void exitImplementsClause(TypeScriptParser::ImplementsClauseContext * /*ctx*/) override { }

  virtual void enterClassElement(TypeScriptParser::ClassElementContext * /*ctx*/) override { }
  virtual void exitClassElement(TypeScriptParser::ClassElementContext * /*ctx*/) override { }

  virtual void enterPropertyDeclarationExpression(TypeScriptParser::PropertyDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitPropertyDeclarationExpression(TypeScriptParser::PropertyDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterMethodDeclarationExpression(TypeScriptParser::MethodDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitMethodDeclarationExpression(TypeScriptParser::MethodDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterGetterSetterDeclarationExpression(TypeScriptParser::GetterSetterDeclarationExpressionContext * /*ctx*/) override { }
  virtual void exitGetterSetterDeclarationExpression(TypeScriptParser::GetterSetterDeclarationExpressionContext * /*ctx*/) override { }

  virtual void enterAbstractMemberDeclaration(TypeScriptParser::AbstractMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitAbstractMemberDeclaration(TypeScriptParser::AbstractMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterPropertyMemberBase(TypeScriptParser::PropertyMemberBaseContext * /*ctx*/) override { }
  virtual void exitPropertyMemberBase(TypeScriptParser::PropertyMemberBaseContext * /*ctx*/) override { }

  virtual void enterIndexMemberDeclaration(TypeScriptParser::IndexMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitIndexMemberDeclaration(TypeScriptParser::IndexMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterGeneratorMethod(TypeScriptParser::GeneratorMethodContext * /*ctx*/) override { }
  virtual void exitGeneratorMethod(TypeScriptParser::GeneratorMethodContext * /*ctx*/) override { }

  virtual void enterGeneratorFunctionDeclaration(TypeScriptParser::GeneratorFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitGeneratorFunctionDeclaration(TypeScriptParser::GeneratorFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterGeneratorBlock(TypeScriptParser::GeneratorBlockContext * /*ctx*/) override { }
  virtual void exitGeneratorBlock(TypeScriptParser::GeneratorBlockContext * /*ctx*/) override { }

  virtual void enterGeneratorDefinition(TypeScriptParser::GeneratorDefinitionContext * /*ctx*/) override { }
  virtual void exitGeneratorDefinition(TypeScriptParser::GeneratorDefinitionContext * /*ctx*/) override { }

  virtual void enterIteratorBlock(TypeScriptParser::IteratorBlockContext * /*ctx*/) override { }
  virtual void exitIteratorBlock(TypeScriptParser::IteratorBlockContext * /*ctx*/) override { }

  virtual void enterIteratorDefinition(TypeScriptParser::IteratorDefinitionContext * /*ctx*/) override { }
  virtual void exitIteratorDefinition(TypeScriptParser::IteratorDefinitionContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(TypeScriptParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(TypeScriptParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameterArg(TypeScriptParser::FormalParameterArgContext * /*ctx*/) override { }
  virtual void exitFormalParameterArg(TypeScriptParser::FormalParameterArgContext * /*ctx*/) override { }

  virtual void enterLastFormalParameterArg(TypeScriptParser::LastFormalParameterArgContext * /*ctx*/) override { }
  virtual void exitLastFormalParameterArg(TypeScriptParser::LastFormalParameterArgContext * /*ctx*/) override { }

  virtual void enterFunctionBody(TypeScriptParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(TypeScriptParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterSourceElements(TypeScriptParser::SourceElementsContext * /*ctx*/) override { }
  virtual void exitSourceElements(TypeScriptParser::SourceElementsContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(TypeScriptParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(TypeScriptParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterElementList(TypeScriptParser::ElementListContext * /*ctx*/) override { }
  virtual void exitElementList(TypeScriptParser::ElementListContext * /*ctx*/) override { }

  virtual void enterArrayElement(TypeScriptParser::ArrayElementContext * /*ctx*/) override { }
  virtual void exitArrayElement(TypeScriptParser::ArrayElementContext * /*ctx*/) override { }

  virtual void enterObjectLiteral(TypeScriptParser::ObjectLiteralContext * /*ctx*/) override { }
  virtual void exitObjectLiteral(TypeScriptParser::ObjectLiteralContext * /*ctx*/) override { }

  virtual void enterPropertyExpressionAssignment(TypeScriptParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitPropertyExpressionAssignment(TypeScriptParser::PropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterComputedPropertyExpressionAssignment(TypeScriptParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }
  virtual void exitComputedPropertyExpressionAssignment(TypeScriptParser::ComputedPropertyExpressionAssignmentContext * /*ctx*/) override { }

  virtual void enterPropertyGetter(TypeScriptParser::PropertyGetterContext * /*ctx*/) override { }
  virtual void exitPropertyGetter(TypeScriptParser::PropertyGetterContext * /*ctx*/) override { }

  virtual void enterPropertySetter(TypeScriptParser::PropertySetterContext * /*ctx*/) override { }
  virtual void exitPropertySetter(TypeScriptParser::PropertySetterContext * /*ctx*/) override { }

  virtual void enterMethodProperty(TypeScriptParser::MethodPropertyContext * /*ctx*/) override { }
  virtual void exitMethodProperty(TypeScriptParser::MethodPropertyContext * /*ctx*/) override { }

  virtual void enterPropertyShorthand(TypeScriptParser::PropertyShorthandContext * /*ctx*/) override { }
  virtual void exitPropertyShorthand(TypeScriptParser::PropertyShorthandContext * /*ctx*/) override { }

  virtual void enterRestParameterInObject(TypeScriptParser::RestParameterInObjectContext * /*ctx*/) override { }
  virtual void exitRestParameterInObject(TypeScriptParser::RestParameterInObjectContext * /*ctx*/) override { }

  virtual void enterGetAccessor(TypeScriptParser::GetAccessorContext * /*ctx*/) override { }
  virtual void exitGetAccessor(TypeScriptParser::GetAccessorContext * /*ctx*/) override { }

  virtual void enterSetAccessor(TypeScriptParser::SetAccessorContext * /*ctx*/) override { }
  virtual void exitSetAccessor(TypeScriptParser::SetAccessorContext * /*ctx*/) override { }

  virtual void enterPropertyName(TypeScriptParser::PropertyNameContext * /*ctx*/) override { }
  virtual void exitPropertyName(TypeScriptParser::PropertyNameContext * /*ctx*/) override { }

  virtual void enterArguments(TypeScriptParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(TypeScriptParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterArgumentList(TypeScriptParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(TypeScriptParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterArgument(TypeScriptParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(TypeScriptParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterExpressionSequence(TypeScriptParser::ExpressionSequenceContext * /*ctx*/) override { }
  virtual void exitExpressionSequence(TypeScriptParser::ExpressionSequenceContext * /*ctx*/) override { }

  virtual void enterFunctionExpressionDeclaration(TypeScriptParser::FunctionExpressionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionExpressionDeclaration(TypeScriptParser::FunctionExpressionDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateStringExpression(TypeScriptParser::TemplateStringExpressionContext * /*ctx*/) override { }
  virtual void exitTemplateStringExpression(TypeScriptParser::TemplateStringExpressionContext * /*ctx*/) override { }

  virtual void enterTernaryExpression(TypeScriptParser::TernaryExpressionContext * /*ctx*/) override { }
  virtual void exitTernaryExpression(TypeScriptParser::TernaryExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(TypeScriptParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(TypeScriptParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterGeneratorsExpression(TypeScriptParser::GeneratorsExpressionContext * /*ctx*/) override { }
  virtual void exitGeneratorsExpression(TypeScriptParser::GeneratorsExpressionContext * /*ctx*/) override { }

  virtual void enterPreIncrementExpression(TypeScriptParser::PreIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreIncrementExpression(TypeScriptParser::PreIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterObjectLiteralExpression(TypeScriptParser::ObjectLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitObjectLiteralExpression(TypeScriptParser::ObjectLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterInExpression(TypeScriptParser::InExpressionContext * /*ctx*/) override { }
  virtual void exitInExpression(TypeScriptParser::InExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(TypeScriptParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(TypeScriptParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterGenericTypes(TypeScriptParser::GenericTypesContext * /*ctx*/) override { }
  virtual void exitGenericTypes(TypeScriptParser::GenericTypesContext * /*ctx*/) override { }

  virtual void enterNotExpression(TypeScriptParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(TypeScriptParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterPreDecreaseExpression(TypeScriptParser::PreDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPreDecreaseExpression(TypeScriptParser::PreDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterArgumentsExpression(TypeScriptParser::ArgumentsExpressionContext * /*ctx*/) override { }
  virtual void exitArgumentsExpression(TypeScriptParser::ArgumentsExpressionContext * /*ctx*/) override { }

  virtual void enterThisExpression(TypeScriptParser::ThisExpressionContext * /*ctx*/) override { }
  virtual void exitThisExpression(TypeScriptParser::ThisExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionExpression(TypeScriptParser::FunctionExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionExpression(TypeScriptParser::FunctionExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(TypeScriptParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(TypeScriptParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(TypeScriptParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(TypeScriptParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterPostDecreaseExpression(TypeScriptParser::PostDecreaseExpressionContext * /*ctx*/) override { }
  virtual void exitPostDecreaseExpression(TypeScriptParser::PostDecreaseExpressionContext * /*ctx*/) override { }

  virtual void enterTypeofExpression(TypeScriptParser::TypeofExpressionContext * /*ctx*/) override { }
  virtual void exitTypeofExpression(TypeScriptParser::TypeofExpressionContext * /*ctx*/) override { }

  virtual void enterInstanceofExpression(TypeScriptParser::InstanceofExpressionContext * /*ctx*/) override { }
  virtual void exitInstanceofExpression(TypeScriptParser::InstanceofExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryPlusExpression(TypeScriptParser::UnaryPlusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryPlusExpression(TypeScriptParser::UnaryPlusExpressionContext * /*ctx*/) override { }

  virtual void enterDeleteExpression(TypeScriptParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(TypeScriptParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterGeneratorsFunctionExpression(TypeScriptParser::GeneratorsFunctionExpressionContext * /*ctx*/) override { }
  virtual void exitGeneratorsFunctionExpression(TypeScriptParser::GeneratorsFunctionExpressionContext * /*ctx*/) override { }

  virtual void enterArrowFunctionExpression(TypeScriptParser::ArrowFunctionExpressionContext * /*ctx*/) override { }
  virtual void exitArrowFunctionExpression(TypeScriptParser::ArrowFunctionExpressionContext * /*ctx*/) override { }

  virtual void enterIteratorsExpression(TypeScriptParser::IteratorsExpressionContext * /*ctx*/) override { }
  virtual void exitIteratorsExpression(TypeScriptParser::IteratorsExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(TypeScriptParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(TypeScriptParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterBitXOrExpression(TypeScriptParser::BitXOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitXOrExpression(TypeScriptParser::BitXOrExpressionContext * /*ctx*/) override { }

  virtual void enterCastAsExpression(TypeScriptParser::CastAsExpressionContext * /*ctx*/) override { }
  virtual void exitCastAsExpression(TypeScriptParser::CastAsExpressionContext * /*ctx*/) override { }

  virtual void enterSuperExpression(TypeScriptParser::SuperExpressionContext * /*ctx*/) override { }
  virtual void exitSuperExpression(TypeScriptParser::SuperExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(TypeScriptParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(TypeScriptParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterBitShiftExpression(TypeScriptParser::BitShiftExpressionContext * /*ctx*/) override { }
  virtual void exitBitShiftExpression(TypeScriptParser::BitShiftExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(TypeScriptParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(TypeScriptParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(TypeScriptParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(TypeScriptParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(TypeScriptParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(TypeScriptParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterPostIncrementExpression(TypeScriptParser::PostIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementExpression(TypeScriptParser::PostIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterYieldExpression(TypeScriptParser::YieldExpressionContext * /*ctx*/) override { }
  virtual void exitYieldExpression(TypeScriptParser::YieldExpressionContext * /*ctx*/) override { }

  virtual void enterBitNotExpression(TypeScriptParser::BitNotExpressionContext * /*ctx*/) override { }
  virtual void exitBitNotExpression(TypeScriptParser::BitNotExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(TypeScriptParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(TypeScriptParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(TypeScriptParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(TypeScriptParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterArrayLiteralExpression(TypeScriptParser::ArrayLiteralExpressionContext * /*ctx*/) override { }
  virtual void exitArrayLiteralExpression(TypeScriptParser::ArrayLiteralExpressionContext * /*ctx*/) override { }

  virtual void enterMemberDotExpression(TypeScriptParser::MemberDotExpressionContext * /*ctx*/) override { }
  virtual void exitMemberDotExpression(TypeScriptParser::MemberDotExpressionContext * /*ctx*/) override { }

  virtual void enterMemberIndexExpression(TypeScriptParser::MemberIndexExpressionContext * /*ctx*/) override { }
  virtual void exitMemberIndexExpression(TypeScriptParser::MemberIndexExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(TypeScriptParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(TypeScriptParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterBitAndExpression(TypeScriptParser::BitAndExpressionContext * /*ctx*/) override { }
  virtual void exitBitAndExpression(TypeScriptParser::BitAndExpressionContext * /*ctx*/) override { }

  virtual void enterBitOrExpression(TypeScriptParser::BitOrExpressionContext * /*ctx*/) override { }
  virtual void exitBitOrExpression(TypeScriptParser::BitOrExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperatorExpression(TypeScriptParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentOperatorExpression(TypeScriptParser::AssignmentOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterVoidExpression(TypeScriptParser::VoidExpressionContext * /*ctx*/) override { }
  virtual void exitVoidExpression(TypeScriptParser::VoidExpressionContext * /*ctx*/) override { }

  virtual void enterAsExpression(TypeScriptParser::AsExpressionContext * /*ctx*/) override { }
  virtual void exitAsExpression(TypeScriptParser::AsExpressionContext * /*ctx*/) override { }

  virtual void enterArrowFunctionDeclaration(TypeScriptParser::ArrowFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitArrowFunctionDeclaration(TypeScriptParser::ArrowFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterArrowFunctionParameters(TypeScriptParser::ArrowFunctionParametersContext * /*ctx*/) override { }
  virtual void exitArrowFunctionParameters(TypeScriptParser::ArrowFunctionParametersContext * /*ctx*/) override { }

  virtual void enterArrowFunctionBody(TypeScriptParser::ArrowFunctionBodyContext * /*ctx*/) override { }
  virtual void exitArrowFunctionBody(TypeScriptParser::ArrowFunctionBodyContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(TypeScriptParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(TypeScriptParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(TypeScriptParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(TypeScriptParser::LiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringLiteral(TypeScriptParser::TemplateStringLiteralContext * /*ctx*/) override { }
  virtual void exitTemplateStringLiteral(TypeScriptParser::TemplateStringLiteralContext * /*ctx*/) override { }

  virtual void enterTemplateStringAtom(TypeScriptParser::TemplateStringAtomContext * /*ctx*/) override { }
  virtual void exitTemplateStringAtom(TypeScriptParser::TemplateStringAtomContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(TypeScriptParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(TypeScriptParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifierName(TypeScriptParser::IdentifierNameContext * /*ctx*/) override { }
  virtual void exitIdentifierName(TypeScriptParser::IdentifierNameContext * /*ctx*/) override { }

  virtual void enterIdentifierOrKeyWord(TypeScriptParser::IdentifierOrKeyWordContext * /*ctx*/) override { }
  virtual void exitIdentifierOrKeyWord(TypeScriptParser::IdentifierOrKeyWordContext * /*ctx*/) override { }

  virtual void enterReservedWord(TypeScriptParser::ReservedWordContext * /*ctx*/) override { }
  virtual void exitReservedWord(TypeScriptParser::ReservedWordContext * /*ctx*/) override { }

  virtual void enterKeyword(TypeScriptParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TypeScriptParser::KeywordContext * /*ctx*/) override { }

  virtual void enterGetter(TypeScriptParser::GetterContext * /*ctx*/) override { }
  virtual void exitGetter(TypeScriptParser::GetterContext * /*ctx*/) override { }

  virtual void enterSetter(TypeScriptParser::SetterContext * /*ctx*/) override { }
  virtual void exitSetter(TypeScriptParser::SetterContext * /*ctx*/) override { }

  virtual void enterEos(TypeScriptParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(TypeScriptParser::EosContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

