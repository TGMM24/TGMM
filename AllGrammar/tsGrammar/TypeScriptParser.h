
    #include "TypeScriptParserBase.h"


// Generated from TypeScriptParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  TypeScriptParser : public TypeScriptParserBase {
public:
  enum {
    MultiLineComment = 1, SingleLineComment = 2, RegularExpressionLiteral = 3, 
    OpenBracket = 4, CloseBracket = 5, OpenParen = 6, CloseParen = 7, OpenBrace = 8, 
    TemplateCloseBrace = 9, CloseBrace = 10, SemiColon = 11, Comma = 12, 
    Assign = 13, QuestionMark = 14, Colon = 15, Ellipsis = 16, Dot = 17, 
    PlusPlus = 18, MinusMinus = 19, Plus = 20, Minus = 21, BitNot = 22, 
    Not = 23, Multiply = 24, Divide = 25, Modulus = 26, RightShiftArithmetic = 27, 
    LeftShiftArithmetic = 28, RightShiftLogical = 29, LessThan = 30, MoreThan = 31, 
    LessThanEquals = 32, GreaterThanEquals = 33, Equals_ = 34, NotEquals = 35, 
    IdentityEquals = 36, IdentityNotEquals = 37, BitAnd = 38, BitXOr = 39, 
    BitOr = 40, And = 41, Or = 42, MultiplyAssign = 43, DivideAssign = 44, 
    ModulusAssign = 45, PlusAssign = 46, MinusAssign = 47, LeftShiftArithmeticAssign = 48, 
    RightShiftArithmeticAssign = 49, RightShiftLogicalAssign = 50, BitAndAssign = 51, 
    BitXorAssign = 52, BitOrAssign = 53, ARROW = 54, NullLiteral = 55, BooleanLiteral = 56, 
    DecimalLiteral = 57, HexIntegerLiteral = 58, OctalIntegerLiteral = 59, 
    OctalIntegerLiteral2 = 60, BinaryIntegerLiteral = 61, Break = 62, Do = 63, 
    Instanceof = 64, Typeof = 65, Case = 66, Else = 67, New = 68, Var = 69, 
    Catch = 70, Finally = 71, Return = 72, Void = 73, Continue = 74, For = 75, 
    Switch = 76, While = 77, Debugger = 78, Function_ = 79, This = 80, With = 81, 
    Default = 82, If = 83, Throw = 84, Delete = 85, In = 86, Try = 87, As = 88, 
    From = 89, ReadOnly = 90, Async = 91, Class = 92, Enum = 93, Extends = 94, 
    Super = 95, Const = 96, Export = 97, Import = 98, Implements = 99, Let = 100, 
    Private = 101, Public = 102, Interface = 103, Package = 104, Protected = 105, 
    Static = 106, Yield = 107, Any = 108, Number = 109, Boolean = 110, String = 111, 
    Symbol = 112, TypeAlias = 113, Get = 114, Set = 115, Constructor = 116, 
    Namespace = 117, Require = 118, Module = 119, Declare = 120, Abstract = 121, 
    Is = 122, At = 123, Identifier = 124, StringLiteral = 125, BackTick = 126, 
    WhiteSpaces = 127, LineTerminator = 128, HtmlComment = 129, CDataComment = 130, 
    UnexpectedCharacter = 131, TemplateStringEscapeAtom = 132, TemplateStringStartExpression = 133, 
    TemplateStringAtom = 134
  };

  enum {
    RuleInitializer = 0, RuleBindingPattern = 1, RuleTypeParameters = 2, 
    RuleTypeParameterList = 3, RuleTypeParameter = 4, RuleConstraint = 5, 
    RuleTypeArguments = 6, RuleTypeArgumentList = 7, RuleTypeArgument = 8, 
    RuleType_ = 9, RuleUnionOrIntersectionOrPrimaryType = 10, RulePrimaryType = 11, 
    RulePredefinedType = 12, RuleTypeReference = 13, RuleNestedTypeGeneric = 14, 
    RuleTypeGeneric = 15, RuleTypeIncludeGeneric = 16, RuleTypeName = 17, 
    RuleObjectType = 18, RuleTypeBody = 19, RuleTypeMemberList = 20, RuleTypeMember = 21, 
    RuleArrayType = 22, RuleTupleType = 23, RuleTupleElementTypes = 24, 
    RuleFunctionType = 25, RuleConstructorType = 26, RuleTypeQuery = 27, 
    RuleTypeQueryExpression = 28, RulePropertySignatur = 29, RuleTypeAnnotation = 30, 
    RuleCallSignature = 31, RuleParameterList = 32, RuleRequiredParameterList = 33, 
    RuleParameter = 34, RuleOptionalParameter = 35, RuleRestParameter = 36, 
    RuleRequiredParameter = 37, RuleAccessibilityModifier = 38, RuleIdentifierOrPattern = 39, 
    RuleConstructSignature = 40, RuleIndexSignature = 41, RuleMethodSignature = 42, 
    RuleTypeAliasDeclaration = 43, RuleConstructorDeclaration = 44, RuleInterfaceDeclaration = 45, 
    RuleInterfaceExtendsClause = 46, RuleClassOrInterfaceTypeList = 47, 
    RuleEnumDeclaration = 48, RuleEnumBody = 49, RuleEnumMemberList = 50, 
    RuleEnumMember = 51, RuleNamespaceDeclaration = 52, RuleNamespaceName = 53, 
    RuleImportAliasDeclaration = 54, RuleDecoratorList = 55, RuleDecorator = 56, 
    RuleDecoratorMemberExpression = 57, RuleDecoratorCallExpression = 58, 
    RuleProgram = 59, RuleSourceElement = 60, RuleStatement = 61, RuleBlock = 62, 
    RuleStatementList = 63, RuleAbstractDeclaration = 64, RuleImportStatement = 65, 
    RuleFromBlock = 66, RuleMultipleImportStatement = 67, RuleExportStatement = 68, 
    RuleVariableStatement = 69, RuleVariableDeclarationList = 70, RuleVariableDeclaration = 71, 
    RuleEmptyStatement_ = 72, RuleExpressionStatement = 73, RuleIfStatement = 74, 
    RuleIterationStatement = 75, RuleVarModifier = 76, RuleContinueStatement = 77, 
    RuleBreakStatement = 78, RuleReturnStatement = 79, RuleYieldStatement = 80, 
    RuleWithStatement = 81, RuleSwitchStatement = 82, RuleCaseBlock = 83, 
    RuleCaseClauses = 84, RuleCaseClause = 85, RuleDefaultClause = 86, RuleLabelledStatement = 87, 
    RuleThrowStatement = 88, RuleTryStatement = 89, RuleCatchProduction = 90, 
    RuleFinallyProduction = 91, RuleDebuggerStatement = 92, RuleFunctionDeclaration = 93, 
    RuleClassDeclaration = 94, RuleClassHeritage = 95, RuleClassTail = 96, 
    RuleClassExtendsClause = 97, RuleImplementsClause = 98, RuleClassElement = 99, 
    RulePropertyMemberDeclaration = 100, RulePropertyMemberBase = 101, RuleIndexMemberDeclaration = 102, 
    RuleGeneratorMethod = 103, RuleGeneratorFunctionDeclaration = 104, RuleGeneratorBlock = 105, 
    RuleGeneratorDefinition = 106, RuleIteratorBlock = 107, RuleIteratorDefinition = 108, 
    RuleFormalParameterList = 109, RuleFormalParameterArg = 110, RuleLastFormalParameterArg = 111, 
    RuleFunctionBody = 112, RuleSourceElements = 113, RuleArrayLiteral = 114, 
    RuleElementList = 115, RuleArrayElement = 116, RuleObjectLiteral = 117, 
    RulePropertyAssignment = 118, RuleGetAccessor = 119, RuleSetAccessor = 120, 
    RulePropertyName = 121, RuleArguments = 122, RuleArgumentList = 123, 
    RuleArgument = 124, RuleExpressionSequence = 125, RuleFunctionExpressionDeclaration = 126, 
    RuleSingleExpression = 127, RuleAsExpression = 128, RuleArrowFunctionDeclaration = 129, 
    RuleArrowFunctionParameters = 130, RuleArrowFunctionBody = 131, RuleAssignmentOperator = 132, 
    RuleLiteral = 133, RuleTemplateStringLiteral = 134, RuleTemplateStringAtom = 135, 
    RuleNumericLiteral = 136, RuleIdentifierName = 137, RuleIdentifierOrKeyWord = 138, 
    RuleReservedWord = 139, RuleKeyword = 140, RuleGetter = 141, RuleSetter = 142, 
    RuleEos = 143
  };

  explicit TypeScriptParser(antlr4::TokenStream *input);

  TypeScriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TypeScriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class InitializerContext;
  class BindingPatternContext;
  class TypeParametersContext;
  class TypeParameterListContext;
  class TypeParameterContext;
  class ConstraintContext;
  class TypeArgumentsContext;
  class TypeArgumentListContext;
  class TypeArgumentContext;
  class Type_Context;
  class UnionOrIntersectionOrPrimaryTypeContext;
  class PrimaryTypeContext;
  class PredefinedTypeContext;
  class TypeReferenceContext;
  class NestedTypeGenericContext;
  class TypeGenericContext;
  class TypeIncludeGenericContext;
  class TypeNameContext;
  class ObjectTypeContext;
  class TypeBodyContext;
  class TypeMemberListContext;
  class TypeMemberContext;
  class ArrayTypeContext;
  class TupleTypeContext;
  class TupleElementTypesContext;
  class FunctionTypeContext;
  class ConstructorTypeContext;
  class TypeQueryContext;
  class TypeQueryExpressionContext;
  class PropertySignaturContext;
  class TypeAnnotationContext;
  class CallSignatureContext;
  class ParameterListContext;
  class RequiredParameterListContext;
  class ParameterContext;
  class OptionalParameterContext;
  class RestParameterContext;
  class RequiredParameterContext;
  class AccessibilityModifierContext;
  class IdentifierOrPatternContext;
  class ConstructSignatureContext;
  class IndexSignatureContext;
  class MethodSignatureContext;
  class TypeAliasDeclarationContext;
  class ConstructorDeclarationContext;
  class InterfaceDeclarationContext;
  class InterfaceExtendsClauseContext;
  class ClassOrInterfaceTypeListContext;
  class EnumDeclarationContext;
  class EnumBodyContext;
  class EnumMemberListContext;
  class EnumMemberContext;
  class NamespaceDeclarationContext;
  class NamespaceNameContext;
  class ImportAliasDeclarationContext;
  class DecoratorListContext;
  class DecoratorContext;
  class DecoratorMemberExpressionContext;
  class DecoratorCallExpressionContext;
  class ProgramContext;
  class SourceElementContext;
  class StatementContext;
  class BlockContext;
  class StatementListContext;
  class AbstractDeclarationContext;
  class ImportStatementContext;
  class FromBlockContext;
  class MultipleImportStatementContext;
  class ExportStatementContext;
  class VariableStatementContext;
  class VariableDeclarationListContext;
  class VariableDeclarationContext;
  class EmptyStatement_Context;
  class ExpressionStatementContext;
  class IfStatementContext;
  class IterationStatementContext;
  class VarModifierContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class YieldStatementContext;
  class WithStatementContext;
  class SwitchStatementContext;
  class CaseBlockContext;
  class CaseClausesContext;
  class CaseClauseContext;
  class DefaultClauseContext;
  class LabelledStatementContext;
  class ThrowStatementContext;
  class TryStatementContext;
  class CatchProductionContext;
  class FinallyProductionContext;
  class DebuggerStatementContext;
  class FunctionDeclarationContext;
  class ClassDeclarationContext;
  class ClassHeritageContext;
  class ClassTailContext;
  class ClassExtendsClauseContext;
  class ImplementsClauseContext;
  class ClassElementContext;
  class PropertyMemberDeclarationContext;
  class PropertyMemberBaseContext;
  class IndexMemberDeclarationContext;
  class GeneratorMethodContext;
  class GeneratorFunctionDeclarationContext;
  class GeneratorBlockContext;
  class GeneratorDefinitionContext;
  class IteratorBlockContext;
  class IteratorDefinitionContext;
  class FormalParameterListContext;
  class FormalParameterArgContext;
  class LastFormalParameterArgContext;
  class FunctionBodyContext;
  class SourceElementsContext;
  class ArrayLiteralContext;
  class ElementListContext;
  class ArrayElementContext;
  class ObjectLiteralContext;
  class PropertyAssignmentContext;
  class GetAccessorContext;
  class SetAccessorContext;
  class PropertyNameContext;
  class ArgumentsContext;
  class ArgumentListContext;
  class ArgumentContext;
  class ExpressionSequenceContext;
  class FunctionExpressionDeclarationContext;
  class SingleExpressionContext;
  class AsExpressionContext;
  class ArrowFunctionDeclarationContext;
  class ArrowFunctionParametersContext;
  class ArrowFunctionBodyContext;
  class AssignmentOperatorContext;
  class LiteralContext;
  class TemplateStringLiteralContext;
  class TemplateStringAtomContext;
  class NumericLiteralContext;
  class IdentifierNameContext;
  class IdentifierOrKeyWordContext;
  class ReservedWordContext;
  class KeywordContext;
  class GetterContext;
  class SetterContext;
  class EosContext; 

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerContext* initializer();

  class  BindingPatternContext : public antlr4::ParserRuleContext {
  public:
    BindingPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BindingPatternContext* bindingPattern();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    TypeParameterListContext *typeParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterListContext* typeParameterList();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ConstraintContext *constraint();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterContext* typeParameter();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstraintContext* constraint();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    TypeArgumentListContext *typeArgumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  TypeArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentListContext* typeArgumentList();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionOrIntersectionOrPrimaryTypeContext *unionOrIntersectionOrPrimaryType();
    FunctionTypeContext *functionType();
    ConstructorTypeContext *constructorType();
    TypeGenericContext *typeGeneric();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_Context* type_();

  class  UnionOrIntersectionOrPrimaryTypeContext : public antlr4::ParserRuleContext {
  public:
    UnionOrIntersectionOrPrimaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnionOrIntersectionOrPrimaryTypeContext() = default;
    void copyFrom(UnionOrIntersectionOrPrimaryTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntersectionContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    IntersectionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    std::vector<UnionOrIntersectionOrPrimaryTypeContext *> unionOrIntersectionOrPrimaryType();
    UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(size_t i);
    antlr4::tree::TerminalNode *BitAnd();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrimaryContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    PrimaryContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    PrimaryTypeContext *primaryType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnionContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    UnionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    std::vector<UnionOrIntersectionOrPrimaryTypeContext *> unionOrIntersectionOrPrimaryType();
    UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(size_t i);
    antlr4::tree::TerminalNode *BitOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType();
  UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(int precedence);
  class  PrimaryTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryTypeContext() = default;
    void copyFrom(PrimaryTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RedefinitionOfTypeContext : public PrimaryTypeContext {
  public:
    RedefinitionOfTypeContext(PrimaryTypeContext *ctx);

    TypeReferenceContext *typeReference();
    antlr4::tree::TerminalNode *Is();
    PrimaryTypeContext *primaryType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PredefinedPrimTypeContext : public PrimaryTypeContext {
  public:
    PredefinedPrimTypeContext(PrimaryTypeContext *ctx);

    PredefinedTypeContext *predefinedType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayPrimTypeContext : public PrimaryTypeContext {
  public:
    ArrayPrimTypeContext(PrimaryTypeContext *ctx);

    PrimaryTypeContext *primaryType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesizedPrimTypeContext : public PrimaryTypeContext {
  public:
    ParenthesizedPrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *OpenParen();
    Type_Context *type_();
    antlr4::tree::TerminalNode *CloseParen();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThisPrimTypeContext : public PrimaryTypeContext {
  public:
    ThisPrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *This();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TuplePrimTypeContext : public PrimaryTypeContext {
  public:
    TuplePrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *OpenBracket();
    TupleElementTypesContext *tupleElementTypes();
    antlr4::tree::TerminalNode *CloseBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ObjectPrimTypeContext : public PrimaryTypeContext {
  public:
    ObjectPrimTypeContext(PrimaryTypeContext *ctx);

    ObjectTypeContext *objectType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ReferencePrimTypeContext : public PrimaryTypeContext {
  public:
    ReferencePrimTypeContext(PrimaryTypeContext *ctx);

    TypeReferenceContext *typeReference();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  QueryPrimTypeContext : public PrimaryTypeContext {
  public:
    QueryPrimTypeContext(PrimaryTypeContext *ctx);

    TypeQueryContext *typeQuery();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PrimaryTypeContext* primaryType();
  PrimaryTypeContext* primaryType(int precedence);
  class  PredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    PredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Any();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Boolean();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Symbol();
    antlr4::tree::TerminalNode *Void();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredefinedTypeContext* predefinedType();

  class  TypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    TypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    NestedTypeGenericContext *nestedTypeGeneric();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeReferenceContext* typeReference();

  class  NestedTypeGenericContext : public antlr4::ParserRuleContext {
  public:
    NestedTypeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIncludeGenericContext *typeIncludeGeneric();
    TypeGenericContext *typeGeneric();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedTypeGenericContext* nestedTypeGeneric();

  class  TypeGenericContext : public antlr4::ParserRuleContext {
  public:
    TypeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *MoreThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeGenericContext* typeGeneric();

  class  TypeIncludeGenericContext : public antlr4::ParserRuleContext {
  public:
    TypeIncludeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LessThan();
    antlr4::tree::TerminalNode* LessThan(size_t i);
    std::vector<TypeArgumentListContext *> typeArgumentList();
    TypeArgumentListContext* typeArgumentList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MoreThan();
    antlr4::tree::TerminalNode* MoreThan(size_t i);
    BindingPatternContext *bindingPattern();
    antlr4::tree::TerminalNode *RightShiftArithmetic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeIncludeGenericContext* typeIncludeGeneric();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NamespaceNameContext *namespaceName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  ObjectTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    TypeBodyContext *typeBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectTypeContext* objectType();

  class  TypeBodyContext : public antlr4::ParserRuleContext {
  public:
    TypeBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeMemberListContext *typeMemberList();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeBodyContext* typeBody();

  class  TypeMemberListContext : public antlr4::ParserRuleContext {
  public:
    TypeMemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeMemberContext *> typeMember();
    TypeMemberContext* typeMember(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeMemberListContext* typeMemberList();

  class  TypeMemberContext : public antlr4::ParserRuleContext {
  public:
    TypeMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertySignaturContext *propertySignatur();
    CallSignatureContext *callSignature();
    ConstructSignatureContext *constructSignature();
    IndexSignatureContext *indexSignature();
    MethodSignatureContext *methodSignature();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeMemberContext* typeMember();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryTypeContext *primaryType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayTypeContext* arrayType();

  class  TupleTypeContext : public antlr4::ParserRuleContext {
  public:
    TupleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    TupleElementTypesContext *tupleElementTypes();
    antlr4::tree::TerminalNode *CloseBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TupleTypeContext* tupleType();

  class  TupleElementTypesContext : public antlr4::ParserRuleContext {
  public:
    TupleElementTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TupleElementTypesContext* tupleElementTypes();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeContext* functionType();

  class  ConstructorTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstructorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorTypeContext* constructorType();

  class  TypeQueryContext : public antlr4::ParserRuleContext {
  public:
    TypeQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeof();
    TypeQueryExpressionContext *typeQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeQueryContext* typeQuery();

  class  TypeQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<IdentifierNameContext *> identifierName();
    IdentifierNameContext* identifierName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeQueryExpressionContext* typeQueryExpression();

  class  PropertySignaturContext : public antlr4::ParserRuleContext {
  public:
    PropertySignaturContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertySignaturContext* propertySignatur();

  class  TypeAnnotationContext : public antlr4::ParserRuleContext {
  public:
    TypeAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAnnotationContext* typeAnnotation();

  class  CallSignatureContext : public antlr4::ParserRuleContext {
  public:
    CallSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallSignatureContext* callSignature();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RestParameterContext *restParameter();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterListContext* parameterList();

  class  RequiredParameterListContext : public antlr4::ParserRuleContext {
  public:
    RequiredParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequiredParameterContext *> requiredParameter();
    RequiredParameterContext* requiredParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequiredParameterListContext* requiredParameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequiredParameterContext *requiredParameter();
    OptionalParameterContext *optionalParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  OptionalParameterContext : public antlr4::ParserRuleContext {
  public:
    OptionalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrPatternContext *identifierOrPattern();
    DecoratorListContext *decoratorList();
    antlr4::tree::TerminalNode *QuestionMark();
    InitializerContext *initializer();
    AccessibilityModifierContext *accessibilityModifier();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalParameterContext* optionalParameter();

  class  RestParameterContext : public antlr4::ParserRuleContext {
  public:
    RestParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    SingleExpressionContext *singleExpression();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RestParameterContext* restParameter();

  class  RequiredParameterContext : public antlr4::ParserRuleContext {
  public:
    RequiredParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrPatternContext *identifierOrPattern();
    DecoratorListContext *decoratorList();
    AccessibilityModifierContext *accessibilityModifier();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequiredParameterContext* requiredParameter();

  class  AccessibilityModifierContext : public antlr4::ParserRuleContext {
  public:
    AccessibilityModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessibilityModifierContext* accessibilityModifier();

  class  IdentifierOrPatternContext : public antlr4::ParserRuleContext {
  public:
    IdentifierOrPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierNameContext *identifierName();
    BindingPatternContext *bindingPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierOrPatternContext* identifierOrPattern();

  class  ConstructSignatureContext : public antlr4::ParserRuleContext {
  public:
    ConstructSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructSignatureContext* constructSignature();

  class  IndexSignatureContext : public antlr4::ParserRuleContext {
  public:
    IndexSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *CloseBracket();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexSignatureContext* indexSignature();

  class  MethodSignatureContext : public antlr4::ParserRuleContext {
  public:
    MethodSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *QuestionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodSignatureContext* methodSignature();

  class  TypeAliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    Type_Context *type_();
    antlr4::tree::TerminalNode *SemiColon();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAliasDeclarationContext* typeAliasDeclaration();

  class  ConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Constructor();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    AccessibilityModifierContext *accessibilityModifier();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorDeclarationContext* constructorDeclaration();

  class  InterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Identifier();
    ObjectTypeContext *objectType();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Declare();
    TypeParametersContext *typeParameters();
    InterfaceExtendsClauseContext *interfaceExtendsClause();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDeclarationContext* interfaceDeclaration();

  class  InterfaceExtendsClauseContext : public antlr4::ParserRuleContext {
  public:
    InterfaceExtendsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    ClassOrInterfaceTypeListContext *classOrInterfaceTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceExtendsClauseContext* interfaceExtendsClause();

  class  ClassOrInterfaceTypeListContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeReferenceContext *> typeReference();
    TypeReferenceContext* typeReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassOrInterfaceTypeListContext* classOrInterfaceTypeList();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Const();
    EnumBodyContext *enumBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumMemberListContext *enumMemberList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumMemberListContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumMemberContext *> enumMember();
    EnumMemberContext* enumMember(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumMemberListContext* enumMemberList();

  class  EnumMemberContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *Assign();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumMemberContext* enumMember();

  class  NamespaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceDeclarationContext* namespaceDeclaration();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  ImportAliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportAliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportAliasDeclarationContext* importAliasDeclaration();

  class  DecoratorListContext : public antlr4::ParserRuleContext {
  public:
    DecoratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecoratorContext *> decorator();
    DecoratorContext* decorator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecoratorListContext* decoratorList();

  class  DecoratorContext : public antlr4::ParserRuleContext {
  public:
    DecoratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    DecoratorCallExpressionContext *decoratorCallExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecoratorContext* decorator();

  class  DecoratorMemberExpressionContext : public antlr4::ParserRuleContext {
  public:
    DecoratorMemberExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *CloseParen();
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    antlr4::tree::TerminalNode *Dot();
    IdentifierNameContext *identifierName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecoratorMemberExpressionContext* decoratorMemberExpression();
  DecoratorMemberExpressionContext* decoratorMemberExpression(int precedence);
  class  DecoratorCallExpressionContext : public antlr4::ParserRuleContext {
  public:
    DecoratorCallExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecoratorCallExpressionContext* decoratorCallExpression();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  SourceElementContext : public antlr4::ParserRuleContext {
  public:
    SourceElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *Export();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceElementContext* sourceElement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ImportStatementContext *importStatement();
    ExportStatementContext *exportStatement();
    EmptyStatement_Context *emptyStatement_();
    AbstractDeclarationContext *abstractDeclaration();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    NamespaceDeclarationContext *namespaceDeclaration();
    IfStatementContext *ifStatement();
    IterationStatementContext *iterationStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    ReturnStatementContext *returnStatement();
    YieldStatementContext *yieldStatement();
    WithStatementContext *withStatement();
    LabelledStatementContext *labelledStatement();
    SwitchStatementContext *switchStatement();
    ThrowStatementContext *throwStatement();
    TryStatementContext *tryStatement();
    DebuggerStatementContext *debuggerStatement();
    FunctionDeclarationContext *functionDeclaration();
    ArrowFunctionDeclarationContext *arrowFunctionDeclaration();
    GeneratorFunctionDeclarationContext *generatorFunctionDeclaration();
    VariableStatementContext *variableStatement();
    TypeAliasDeclarationContext *typeAliasDeclaration();
    EnumDeclarationContext *enumDeclaration();
    ExpressionStatementContext *expressionStatement();
    antlr4::tree::TerminalNode *Export();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementListContext* statementList();

  class  AbstractDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();
    CallSignatureContext *callSignature();
    VariableStatementContext *variableStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractDeclarationContext* abstractDeclaration();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    FromBlockContext *fromBlock();
    ImportAliasDeclarationContext *importAliasDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStatementContext* importStatement();

  class  FromBlockContext : public antlr4::ParserRuleContext {
  public:
    FromBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *StringLiteral();
    EosContext *eos();
    antlr4::tree::TerminalNode *Multiply();
    MultipleImportStatementContext *multipleImportStatement();
    antlr4::tree::TerminalNode *As();
    IdentifierNameContext *identifierName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FromBlockContext* fromBlock();

  class  MultipleImportStatementContext : public antlr4::ParserRuleContext {
  public:
    MultipleImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<IdentifierNameContext *> identifierName();
    IdentifierNameContext* identifierName(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultipleImportStatementContext* multipleImportStatement();

  class  ExportStatementContext : public antlr4::ParserRuleContext {
  public:
    ExportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Export();
    FromBlockContext *fromBlock();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExportStatementContext* exportStatement();

  class  VariableStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BindingPatternContext *bindingPattern();
    InitializerContext *initializer();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *SemiColon();
    VariableDeclarationListContext *variableDeclarationList();
    AccessibilityModifierContext *accessibilityModifier();
    VarModifierContext *varModifier();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *Declare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableStatementContext* variableStatement();

  class  VariableDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationListContext* variableDeclarationList();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrKeyWordContext *identifierOrKeyWord();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();
    TypeAnnotationContext *typeAnnotation();
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Assign();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  EmptyStatement_Context : public antlr4::ParserRuleContext {
  public:
    EmptyStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatement_Context* emptyStatement_();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IterationStatementContext() = default;
    void copyFrom(IterationStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoStatementContext : public IterationStatementContext {
  public:
    DoStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    EosContext *eos();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForVarStatementContext : public IterationStatementContext {
  public:
    ForVarStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    VarModifierContext *varModifier();
    VariableDeclarationListContext *variableDeclarationList();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForVarInStatementContext : public IterationStatementContext {
  public:
    ForVarInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    VarModifierContext *varModifier();
    VariableDeclarationContext *variableDeclaration();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WhileStatementContext : public IterationStatementContext {
  public:
    WhileStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForStatementContext : public IterationStatementContext {
  public:
    ForStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForInStatementContext : public IterationStatementContext {
  public:
    ForInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    SingleExpressionContext *singleExpression();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  IterationStatementContext* iterationStatement();

  class  VarModifierContext : public antlr4::ParserRuleContext {
  public:
    VarModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarModifierContext* varModifier();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    EosContext *eos();
    ExpressionSequenceContext *expressionSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  YieldStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Yield();
    EosContext *eos();
    ExpressionSequenceContext *expressionSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YieldStatementContext* yieldStatement();

  class  WithStatementContext : public antlr4::ParserRuleContext {
  public:
    WithStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WithStatementContext* withStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    CaseBlockContext *caseBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  CaseBlockContext : public antlr4::ParserRuleContext {
  public:
    CaseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<CaseClausesContext *> caseClauses();
    CaseClausesContext* caseClauses(size_t i);
    DefaultClauseContext *defaultClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseBlockContext* caseBlock();

  class  CaseClausesContext : public antlr4::ParserRuleContext {
  public:
    CaseClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseClauseContext *> caseClause();
    CaseClauseContext* caseClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClausesContext* caseClauses();

  class  CaseClauseContext : public antlr4::ParserRuleContext {
  public:
    CaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *Colon();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClauseContext* caseClause();

  class  DefaultClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Colon();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultClauseContext* defaultClause();

  class  LabelledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelledStatementContext* labelledStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    ExpressionSequenceContext *expressionSequence();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    BlockContext *block();
    CatchProductionContext *catchProduction();
    FinallyProductionContext *finallyProduction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchProductionContext : public antlr4::ParserRuleContext {
  public:
    CatchProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *CloseParen();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchProductionContext* catchProduction();

  class  FinallyProductionContext : public antlr4::ParserRuleContext {
  public:
    FinallyProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Finally();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyProductionContext* finallyProduction();

  class  DebuggerStatementContext : public antlr4::ParserRuleContext {
  public:
    DebuggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Debugger();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DebuggerStatementContext* debuggerStatement();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Identifier();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    ClassHeritageContext *classHeritage();
    ClassTailContext *classTail();
    DecoratorListContext *decoratorList();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Abstract();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassHeritageContext : public antlr4::ParserRuleContext {
  public:
    ClassHeritageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassExtendsClauseContext *classExtendsClause();
    ImplementsClauseContext *implementsClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassHeritageContext* classHeritage();

  class  ClassTailContext : public antlr4::ParserRuleContext {
  public:
    ClassTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<ClassElementContext *> classElement();
    ClassElementContext* classElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassTailContext* classTail();

  class  ClassExtendsClauseContext : public antlr4::ParserRuleContext {
  public:
    ClassExtendsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    TypeReferenceContext *typeReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassExtendsClauseContext* classExtendsClause();

  class  ImplementsClauseContext : public antlr4::ParserRuleContext {
  public:
    ImplementsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Implements();
    ClassOrInterfaceTypeListContext *classOrInterfaceTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplementsClauseContext* implementsClause();

  class  ClassElementContext : public antlr4::ParserRuleContext {
  public:
    ClassElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorDeclarationContext *constructorDeclaration();
    PropertyMemberDeclarationContext *propertyMemberDeclaration();
    DecoratorListContext *decoratorList();
    IndexMemberDeclarationContext *indexMemberDeclaration();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassElementContext* classElement();

  class  PropertyMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PropertyMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyMemberDeclarationContext() = default;
    void copyFrom(PropertyMemberDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropertyDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    PropertyDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    InitializerContext *initializer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MethodDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    MethodDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    PropertyNameContext *propertyName();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GetterSetterDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    GetterSetterDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    GetAccessorContext *getAccessor();
    SetAccessorContext *setAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AbstractMemberDeclarationContext : public PropertyMemberDeclarationContext {
  public:
    AbstractMemberDeclarationContext(PropertyMemberDeclarationContext *ctx);

    AbstractDeclarationContext *abstractDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PropertyMemberDeclarationContext* propertyMemberDeclaration();

  class  PropertyMemberBaseContext : public antlr4::ParserRuleContext {
  public:
    PropertyMemberBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessibilityModifierContext *accessibilityModifier();
    antlr4::tree::TerminalNode *Async();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *ReadOnly();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyMemberBaseContext* propertyMemberBase();

  class  IndexMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    IndexMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexSignatureContext *indexSignature();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexMemberDeclarationContext* indexMemberDeclaration();

  class  GeneratorMethodContext : public antlr4::ParserRuleContext {
  public:
    GeneratorMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Multiply();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorMethodContext* generatorMethod();

  class  GeneratorFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GeneratorFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Identifier();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorFunctionDeclarationContext* generatorFunctionDeclaration();

  class  GeneratorBlockContext : public antlr4::ParserRuleContext {
  public:
    GeneratorBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<GeneratorDefinitionContext *> generatorDefinition();
    GeneratorDefinitionContext* generatorDefinition(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorBlockContext* generatorBlock();

  class  GeneratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    GeneratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Multiply();
    IteratorDefinitionContext *iteratorDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorDefinitionContext* generatorDefinition();

  class  IteratorBlockContext : public antlr4::ParserRuleContext {
  public:
    IteratorBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<IteratorDefinitionContext *> iteratorDefinition();
    IteratorDefinitionContext* iteratorDefinition(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IteratorBlockContext* iteratorBlock();

  class  IteratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IteratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IteratorDefinitionContext* iteratorDefinition();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterArgContext *> formalParameterArg();
    FormalParameterArgContext* formalParameterArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    LastFormalParameterArgContext *lastFormalParameterArg();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();
    antlr4::tree::TerminalNode *Colon();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrKeyWordContext *identifierOrKeyWord();
    DecoratorContext *decorator();
    AccessibilityModifierContext *accessibilityModifier();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *Assign();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterArgContext* formalParameterArg();

  class  LastFormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    LastFormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LastFormalParameterArgContext* lastFormalParameterArg();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  SourceElementsContext : public antlr4::ParserRuleContext {
  public:
    SourceElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceElementContext *> sourceElement();
    SourceElementContext* sourceElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceElementsContext* sourceElements();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ElementListContext *elementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayLiteralContext* arrayLiteral();

  class  ElementListContext : public antlr4::ParserRuleContext {
  public:
    ElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayElementContext *> arrayElement();
    ArrayElementContext* arrayElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementListContext* elementList();

  class  ArrayElementContext : public antlr4::ParserRuleContext {
  public:
    ArrayElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayElementContext* arrayElement();

  class  ObjectLiteralContext : public antlr4::ParserRuleContext {
  public:
    ObjectLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<PropertyAssignmentContext *> propertyAssignment();
    PropertyAssignmentContext* propertyAssignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectLiteralContext* objectLiteral();

  class  PropertyAssignmentContext : public antlr4::ParserRuleContext {
  public:
    PropertyAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyAssignmentContext() = default;
    void copyFrom(PropertyAssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    PropertyNameContext *propertyName();
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ComputedPropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    antlr4::tree::TerminalNode *OpenBracket();
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *Colon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertyShorthandContext : public PropertyAssignmentContext {
  public:
    PropertyShorthandContext(PropertyAssignmentContext *ctx);

    IdentifierOrKeyWordContext *identifierOrKeyWord();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertySetterContext : public PropertyAssignmentContext {
  public:
    PropertySetterContext(PropertyAssignmentContext *ctx);

    SetAccessorContext *setAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertyGetterContext : public PropertyAssignmentContext {
  public:
    PropertyGetterContext(PropertyAssignmentContext *ctx);

    GetAccessorContext *getAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RestParameterInObjectContext : public PropertyAssignmentContext {
  public:
    RestParameterInObjectContext(PropertyAssignmentContext *ctx);

    RestParameterContext *restParameter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MethodPropertyContext : public PropertyAssignmentContext {
  public:
    MethodPropertyContext(PropertyAssignmentContext *ctx);

    GeneratorMethodContext *generatorMethod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PropertyAssignmentContext* propertyAssignment();

  class  GetAccessorContext : public antlr4::ParserRuleContext {
  public:
    GetAccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GetterContext *getter();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetAccessorContext* getAccessor();

  class  SetAccessorContext : public antlr4::ParserRuleContext {
  public:
    SetAccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetterContext *setter();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Identifier();
    BindingPatternContext *bindingPattern();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetAccessorContext* setAccessor();

  class  PropertyNameContext : public antlr4::ParserRuleContext {
  public:
    PropertyNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierNameContext *identifierName();
    antlr4::tree::TerminalNode *StringLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyNameContext* propertyName();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentContext* argument();

  class  ExpressionSequenceContext : public antlr4::ParserRuleContext {
  public:
    ExpressionSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionSequenceContext* expressionSequence();

  class  FunctionExpressionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionExpressionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Identifier();
    FormalParameterListContext *formalParameterList();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionExpressionDeclarationContext* functionExpressionDeclaration();

  class  SingleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SingleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SingleExpressionContext() = default;
    void copyFrom(SingleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TemplateStringExpressionContext : public SingleExpressionContext {
  public:
    TemplateStringExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    TemplateStringLiteralContext *templateStringLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TernaryExpressionContext : public SingleExpressionContext {
  public:
    TernaryExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *QuestionMark();
    antlr4::tree::TerminalNode *Colon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalAndExpressionContext : public SingleExpressionContext {
  public:
    LogicalAndExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *And();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GeneratorsExpressionContext : public SingleExpressionContext {
  public:
    GeneratorsExpressionContext(SingleExpressionContext *ctx);

    GeneratorBlockContext *generatorBlock();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreIncrementExpressionContext : public SingleExpressionContext {
  public:
    PreIncrementExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *PlusPlus();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ObjectLiteralExpressionContext : public SingleExpressionContext {
  public:
    ObjectLiteralExpressionContext(SingleExpressionContext *ctx);

    ObjectLiteralContext *objectLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InExpressionContext : public SingleExpressionContext {
  public:
    InExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *In();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalOrExpressionContext : public SingleExpressionContext {
  public:
    LogicalOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Or();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GenericTypesContext : public SingleExpressionContext {
  public:
    GenericTypesContext(SingleExpressionContext *ctx);

    TypeArgumentsContext *typeArguments();
    ExpressionSequenceContext *expressionSequence();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotExpressionContext : public SingleExpressionContext {
  public:
    NotExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Not();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreDecreaseExpressionContext : public SingleExpressionContext {
  public:
    PreDecreaseExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *MinusMinus();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArgumentsExpressionContext : public SingleExpressionContext {
  public:
    ArgumentsExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    ArgumentsContext *arguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThisExpressionContext : public SingleExpressionContext {
  public:
    ThisExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *This();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionExpressionContext : public SingleExpressionContext {
  public:
    FunctionExpressionContext(SingleExpressionContext *ctx);

    FunctionExpressionDeclarationContext *functionExpressionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryMinusExpressionContext : public SingleExpressionContext {
  public:
    UnaryMinusExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Minus();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentExpressionContext : public SingleExpressionContext {
  public:
    AssignmentExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Assign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostDecreaseExpressionContext : public SingleExpressionContext {
  public:
    PostDecreaseExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *MinusMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TypeofExpressionContext : public SingleExpressionContext {
  public:
    TypeofExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Typeof();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InstanceofExpressionContext : public SingleExpressionContext {
  public:
    InstanceofExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Instanceof();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryPlusExpressionContext : public SingleExpressionContext {
  public:
    UnaryPlusExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Plus();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DeleteExpressionContext : public SingleExpressionContext {
  public:
    DeleteExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Delete();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GeneratorsFunctionExpressionContext : public SingleExpressionContext {
  public:
    GeneratorsFunctionExpressionContext(SingleExpressionContext *ctx);

    GeneratorFunctionDeclarationContext *generatorFunctionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrowFunctionExpressionContext : public SingleExpressionContext {
  public:
    ArrowFunctionExpressionContext(SingleExpressionContext *ctx);

    ArrowFunctionDeclarationContext *arrowFunctionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IteratorsExpressionContext : public SingleExpressionContext {
  public:
    IteratorsExpressionContext(SingleExpressionContext *ctx);

    IteratorBlockContext *iteratorBlock();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  EqualityExpressionContext : public SingleExpressionContext {
  public:
    EqualityExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Equals_();
    antlr4::tree::TerminalNode *NotEquals();
    antlr4::tree::TerminalNode *IdentityEquals();
    antlr4::tree::TerminalNode *IdentityNotEquals();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitXOrExpressionContext : public SingleExpressionContext {
  public:
    BitXOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *BitXOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CastAsExpressionContext : public SingleExpressionContext {
  public:
    CastAsExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *As();
    AsExpressionContext *asExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SuperExpressionContext : public SingleExpressionContext {
  public:
    SuperExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Super();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultiplicativeExpressionContext : public SingleExpressionContext {
  public:
    MultiplicativeExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Modulus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitShiftExpressionContext : public SingleExpressionContext {
  public:
    BitShiftExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *LeftShiftArithmetic();
    antlr4::tree::TerminalNode *RightShiftArithmetic();
    antlr4::tree::TerminalNode *RightShiftLogical();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesizedExpressionContext : public SingleExpressionContext {
  public:
    ParenthesizedExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AdditiveExpressionContext : public SingleExpressionContext {
  public:
    AdditiveExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RelationalExpressionContext : public SingleExpressionContext {
  public:
    RelationalExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    antlr4::tree::TerminalNode *LessThanEquals();
    antlr4::tree::TerminalNode *GreaterThanEquals();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostIncrementExpressionContext : public SingleExpressionContext {
  public:
    PostIncrementExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  YieldExpressionContext : public SingleExpressionContext {
  public:
    YieldExpressionContext(SingleExpressionContext *ctx);

    YieldStatementContext *yieldStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitNotExpressionContext : public SingleExpressionContext {
  public:
    BitNotExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *BitNot();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NewExpressionContext : public SingleExpressionContext {
  public:
    NewExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *New();
    SingleExpressionContext *singleExpression();
    ArgumentsContext *arguments();
    TypeArgumentsContext *typeArguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LiteralExpressionContext : public SingleExpressionContext {
  public:
    LiteralExpressionContext(SingleExpressionContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayLiteralExpressionContext : public SingleExpressionContext {
  public:
    ArrayLiteralExpressionContext(SingleExpressionContext *ctx);

    ArrayLiteralContext *arrayLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberDotExpressionContext : public SingleExpressionContext {
  public:
    MemberDotExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *Dot();
    IdentifierNameContext *identifierName();
    antlr4::tree::TerminalNode *Not();
    NestedTypeGenericContext *nestedTypeGeneric();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberIndexExpressionContext : public SingleExpressionContext {
  public:
    MemberIndexExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *OpenBracket();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IdentifierExpressionContext : public SingleExpressionContext {
  public:
    IdentifierExpressionContext(SingleExpressionContext *ctx);

    IdentifierNameContext *identifierName();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitAndExpressionContext : public SingleExpressionContext {
  public:
    BitAndExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *BitAnd();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitOrExpressionContext : public SingleExpressionContext {
  public:
    BitOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *BitOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentOperatorExpressionContext : public SingleExpressionContext {
  public:
    AssignmentOperatorExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    AssignmentOperatorContext *assignmentOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VoidExpressionContext : public SingleExpressionContext {
  public:
    VoidExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Void();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SingleExpressionContext* singleExpression();
  SingleExpressionContext* singleExpression(int precedence);
  class  AsExpressionContext : public antlr4::ParserRuleContext {
  public:
    AsExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredefinedTypeContext *predefinedType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsExpressionContext* asExpression();

  class  ArrowFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrowFunctionParametersContext *arrowFunctionParameters();
    antlr4::tree::TerminalNode *ARROW();
    ArrowFunctionBodyContext *arrowFunctionBody();
    antlr4::tree::TerminalNode *Async();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrowFunctionDeclarationContext* arrowFunctionDeclaration();

  class  ArrowFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrowFunctionParametersContext* arrowFunctionParameters();

  class  ArrowFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrowFunctionBodyContext* arrowFunctionBody();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiplyAssign();
    antlr4::tree::TerminalNode *DivideAssign();
    antlr4::tree::TerminalNode *ModulusAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *LeftShiftArithmeticAssign();
    antlr4::tree::TerminalNode *RightShiftArithmeticAssign();
    antlr4::tree::TerminalNode *RightShiftLogicalAssign();
    antlr4::tree::TerminalNode *BitAndAssign();
    antlr4::tree::TerminalNode *BitXorAssign();
    antlr4::tree::TerminalNode *BitOrAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    TemplateStringLiteralContext *templateStringLiteral();
    antlr4::tree::TerminalNode *RegularExpressionLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  TemplateStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemplateStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BackTick();
    antlr4::tree::TerminalNode* BackTick(size_t i);
    std::vector<TemplateStringAtomContext *> templateStringAtom();
    TemplateStringAtomContext* templateStringAtom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateStringLiteralContext* templateStringLiteral();

  class  TemplateStringAtomContext : public antlr4::ParserRuleContext {
  public:
    TemplateStringAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TemplateStringAtom();
    antlr4::tree::TerminalNode *TemplateStringStartExpression();
    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *TemplateCloseBrace();
    antlr4::tree::TerminalNode *TemplateStringEscapeAtom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateStringAtomContext* templateStringAtom();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *HexIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral2();
    antlr4::tree::TerminalNode *BinaryIntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  IdentifierNameContext : public antlr4::ParserRuleContext {
  public:
    IdentifierNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ReservedWordContext *reservedWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierNameContext* identifierName();

  class  IdentifierOrKeyWordContext : public antlr4::ParserRuleContext {
  public:
    IdentifierOrKeyWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *Require();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierOrKeyWordContext* identifierOrKeyWord();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedWordContext* reservedWord();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *Instanceof();
    antlr4::tree::TerminalNode *Typeof();
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *Finally();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *Debugger();
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Try();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *Async();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Extends();
    antlr4::tree::TerminalNode *Super();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *Implements();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Package();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Yield();
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Require();
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Boolean();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Module();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  GetterContext : public antlr4::ParserRuleContext {
  public:
    GetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetterContext* getter();

  class  SetterContext : public antlr4::ParserRuleContext {
  public:
    SetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetterContext* setter();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EosContext* eos();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool unionOrIntersectionOrPrimaryTypeSempred(UnionOrIntersectionOrPrimaryTypeContext *_localctx, size_t predicateIndex);
  bool primaryTypeSempred(PrimaryTypeContext *_localctx, size_t predicateIndex);
  bool arrayTypeSempred(ArrayTypeContext *_localctx, size_t predicateIndex);
  bool decoratorMemberExpressionSempred(DecoratorMemberExpressionContext *_localctx, size_t predicateIndex);
  bool expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex);
  bool iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex);
  bool continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex);
  bool breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex);
  bool returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex);
  bool yieldStatementSempred(YieldStatementContext *_localctx, size_t predicateIndex);
  bool throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex);
  bool singleExpressionSempred(SingleExpressionContext *_localctx, size_t predicateIndex);
  bool eosSempred(EosContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

