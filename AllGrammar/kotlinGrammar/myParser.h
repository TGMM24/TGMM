
// Generated from myParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  myParser : public antlr4::Parser {
public:
  enum {
    ShebangLine = 1, DelimitedComment = 2, LineComment = 3, WS = 4, NL = 5, 
    RESERVED = 6, DOT = 7, COMMA = 8, LPAREN = 9, RPAREN = 10, LSQUARE = 11, 
    RSQUARE = 12, LCURL = 13, RCURL = 14, MULT = 15, MOD = 16, DIV = 17, 
    ADD = 18, SUB = 19, INCR = 20, DECR = 21, CONJ = 22, DISJ = 23, EXCL = 24, 
    COLON = 25, SEMICOLON = 26, ASSIGNMENT = 27, ADD_ASSIGNMENT = 28, SUB_ASSIGNMENT = 29, 
    MULT_ASSIGNMENT = 30, DIV_ASSIGNMENT = 31, MOD_ASSIGNMENT = 32, ARROW = 33, 
    DOUBLE_ARROW = 34, RANGE = 35, COLONCOLON = 36, Q_COLONCOLON = 37, DOUBLE_SEMICOLON = 38, 
    HASH = 39, AT = 40, QUEST = 41, ELVIS = 42, LANGLE = 43, RANGLE = 44, 
    LE = 45, GE = 46, EXCL_EQ = 47, EXCL_EQEQ = 48, AS_SAFE = 49, EQEQ = 50, 
    EQEQEQ = 51, SINGLE_QUOTE = 52, RETURN_AT = 53, CONTINUE_AT = 54, BREAK_AT = 55, 
    FILE = 56, PACKAGE = 57, IMPORT = 58, CLASS = 59, INTERFACE = 60, FUN = 61, 
    OBJECT = 62, VAL = 63, VAR = 64, TYPE_ALIAS = 65, CONSTRUCTOR = 66, 
    BY = 67, COMPANION = 68, INIT = 69, THIS = 70, SUPER = 71, TYPEOF = 72, 
    WHERE = 73, IF = 74, ELSE = 75, WHEN = 76, TRY = 77, CATCH = 78, FINALLY = 79, 
    FOR = 80, DO = 81, WHILE = 82, THROW = 83, RETURN = 84, CONTINUE = 85, 
    BREAK = 86, AS = 87, IS = 88, IN = 89, NOT_IS = 90, NOT_IN = 91, OUT = 92, 
    FIELD = 93, PROPERTY = 94, GET = 95, SET = 96, GETTER = 97, SETTER = 98, 
    RECEIVER = 99, PARAM = 100, SETPARAM = 101, DELEGATE = 102, DYNAMIC = 103, 
    PUBLIC = 104, PRIVATE = 105, PROTECTED = 106, INTERNAL = 107, ENUM = 108, 
    SEALED = 109, ANNOTATION = 110, DATA = 111, INNER = 112, TAILREC = 113, 
    OPERATOR = 114, INLINE = 115, INFIX = 116, EXTERNAL = 117, SUSPEND = 118, 
    OVERRIDE = 119, ABSTRACT = 120, FINAL = 121, OPEN = 122, CONST = 123, 
    LATEINIT = 124, VARARG = 125, NOINLINE = 126, CROSSINLINE = 127, REIFIED = 128, 
    QUOTE_OPEN = 129, TRIPLE_QUOTE_OPEN = 130, RealLiteral = 131, FloatLiteral = 132, 
    DoubleLiteral = 133, LongLiteral = 134, IntegerLiteral = 135, HexLiteral = 136, 
    BinLiteral = 137, BooleanLiteral = 138, NullLiteral = 139, Identifier = 140, 
    LabelReference = 141, LabelDefinition = 142, FieldIdentifier = 143, 
    CharacterLiteral = 144, UNICODE_CLASS_LL = 145, UNICODE_CLASS_LM = 146, 
    UNICODE_CLASS_LO = 147, UNICODE_CLASS_LT = 148, UNICODE_CLASS_LU = 149, 
    UNICODE_CLASS_ND = 150, UNICODE_CLASS_NL = 151, Inside_Comment = 152, 
    Inside_WS = 153, Inside_NL = 154, QUOTE_CLOSE = 155, LineStrRef = 156, 
    LineStrText = 157, LineStrEscapedChar = 158, LineStrExprStart = 159, 
    TRIPLE_QUOTE_CLOSE = 160, MultiLineStringQuote = 161, MultiLineStrRef = 162, 
    MultiLineStrText = 163, MultiLineStrEscapedChar = 164, MultiLineStrExprStart = 165, 
    MultiLineNL = 166, StrExpr_IN = 167, StrExpr_Comment = 168, StrExpr_WS = 169, 
    StrExpr_NL = 170
  };

  enum {
    RuleKotlinFile = 0, RuleScript = 1, RulePreamble = 2, RuleFileAnnotations = 3, 
    RuleFileAnnotation = 4, RulePackageHeader = 5, RuleImportList = 6, RuleImportHeader = 7, 
    RuleImportAlias = 8, RuleTopLevelObject = 9, RuleClassDeclaration = 10, 
    RulePrimaryConstructor = 11, RuleClassParameters = 12, RuleClassParameter = 13, 
    RuleDelegationSpecifiers = 14, RuleDelegationSpecifier = 15, RuleConstructorInvocation = 16, 
    RuleExplicitDelegation = 17, RuleClassBody = 18, RuleClassMemberDeclaration = 19, 
    RuleAnonymousInitializer = 20, RuleSecondaryConstructor = 21, RuleConstructorDelegationCall = 22, 
    RuleEnumClassBody = 23, RuleEnumEntries = 24, RuleEnumEntry = 25, RuleFunctionDeclaration = 26, 
    RuleFunctionValueParameters = 27, RuleFunctionValueParameter = 28, RuleParameter = 29, 
    RuleFunctionBody = 30, RuleObjectDeclaration = 31, RuleCompanionObject = 32, 
    RulePropertyDeclaration = 33, RuleMultiVariableDeclaration = 34, RuleVariableDeclaration = 35, 
    RuleGetter = 36, RuleSetter = 37, RuleTypeAlias = 38, RuleTypeParameters = 39, 
    RuleTypeParameter = 40, RuleType = 41, RuleTypeModifierList = 42, RuleParenthesizedType = 43, 
    RuleNullableType = 44, RuleTypeReference = 45, RuleFunctionType = 46, 
    RuleFunctionTypeReceiver = 47, RuleUserType = 48, RuleSimpleUserType = 49, 
    RuleFunctionTypeParameters = 50, RuleTypeConstraints = 51, RuleTypeConstraint = 52, 
    RuleBlock = 53, RuleStatements = 54, RuleStatement = 55, RuleBlockLevelExpression = 56, 
    RuleDeclaration = 57, RuleExpression = 58, RuleDisjunction = 59, RuleConjunction = 60, 
    RuleEqualityComparison = 61, RuleComparison = 62, RuleNamedInfix = 63, 
    RuleElvisExpression = 64, RuleInfixFunctionCall = 65, RuleRangeExpression = 66, 
    RuleAdditiveExpression = 67, RuleMultiplicativeExpression = 68, RuleTypeRHS = 69, 
    RulePrefixUnaryExpression = 70, RulePostfixUnaryExpression = 71, RuleAtomicExpression = 72, 
    RuleParenthesizedExpression = 73, RuleCallSuffix = 74, RuleAnnotatedLambda = 75, 
    RuleArrayAccess = 76, RuleValueArguments = 77, RuleTypeArguments = 78, 
    RuleTypeProjection = 79, RuleTypeProjectionModifierList = 80, RuleValueArgument = 81, 
    RuleLiteralConstant = 82, RuleStringLiteral = 83, RuleLineStringLiteral = 84, 
    RuleMultiLineStringLiteral = 85, RuleLineStringContent = 86, RuleLineStringExpression = 87, 
    RuleMultiLineStringContent = 88, RuleMultiLineStringExpression = 89, 
    RuleFunctionLiteral = 90, RuleLambdaParameters = 91, RuleLambdaParameter = 92, 
    RuleObjectLiteral = 93, RuleCollectionLiteral = 94, RuleThisExpression = 95, 
    RuleSuperExpression = 96, RuleConditionalExpression = 97, RuleIfExpression = 98, 
    RuleControlStructureBody = 99, RuleWhenExpression = 100, RuleWhenEntry = 101, 
    RuleWhenCondition = 102, RuleRangeTest = 103, RuleTypeTest = 104, RuleTryExpression = 105, 
    RuleCatchBlock = 106, RuleFinallyBlock = 107, RuleLoopExpression = 108, 
    RuleForExpression = 109, RuleWhileExpression = 110, RuleDoWhileExpression = 111, 
    RuleJumpExpression = 112, RuleCallableReference = 113, RuleAssignmentOperator = 114, 
    RuleEqualityOperation = 115, RuleComparisonOperator = 116, RuleInOperator = 117, 
    RuleIsOperator = 118, RuleAdditiveOperator = 119, RuleMultiplicativeOperation = 120, 
    RuleTypeOperation = 121, RulePrefixUnaryOperation = 122, RulePostfixUnaryOperation = 123, 
    RuleMemberAccessOperator = 124, RuleModifierList = 125, RuleModifier = 126, 
    RuleClassModifier = 127, RuleMemberModifier = 128, RuleVisibilityModifier = 129, 
    RuleVarianceAnnotation = 130, RuleFunctionModifier = 131, RulePropertyModifier = 132, 
    RuleInheritanceModifier = 133, RuleParameterModifier = 134, RuleTypeParameterModifier = 135, 
    RuleLabelDefinition = 136, RuleAnnotations = 137, RuleAnnotation = 138, 
    RuleAnnotationList = 139, RuleAnnotationUseSiteTarget = 140, RuleUnescapedAnnotation = 141, 
    RuleIdentifier = 142, RuleSimpleIdentifier = 143, RuleSemi = 144, RuleAnysemi = 145
  };

  explicit myParser(antlr4::TokenStream *input);

  myParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~myParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class KotlinFileContext;
  class ScriptContext;
  class PreambleContext;
  class FileAnnotationsContext;
  class FileAnnotationContext;
  class PackageHeaderContext;
  class ImportListContext;
  class ImportHeaderContext;
  class ImportAliasContext;
  class TopLevelObjectContext;
  class ClassDeclarationContext;
  class PrimaryConstructorContext;
  class ClassParametersContext;
  class ClassParameterContext;
  class DelegationSpecifiersContext;
  class DelegationSpecifierContext;
  class ConstructorInvocationContext;
  class ExplicitDelegationContext;
  class ClassBodyContext;
  class ClassMemberDeclarationContext;
  class AnonymousInitializerContext;
  class SecondaryConstructorContext;
  class ConstructorDelegationCallContext;
  class EnumClassBodyContext;
  class EnumEntriesContext;
  class EnumEntryContext;
  class FunctionDeclarationContext;
  class FunctionValueParametersContext;
  class FunctionValueParameterContext;
  class ParameterContext;
  class FunctionBodyContext;
  class ObjectDeclarationContext;
  class CompanionObjectContext;
  class PropertyDeclarationContext;
  class MultiVariableDeclarationContext;
  class VariableDeclarationContext;
  class GetterContext;
  class SetterContext;
  class TypeAliasContext;
  class TypeParametersContext;
  class TypeParameterContext;
  class TypeContext;
  class TypeModifierListContext;
  class ParenthesizedTypeContext;
  class NullableTypeContext;
  class TypeReferenceContext;
  class FunctionTypeContext;
  class FunctionTypeReceiverContext;
  class UserTypeContext;
  class SimpleUserTypeContext;
  class FunctionTypeParametersContext;
  class TypeConstraintsContext;
  class TypeConstraintContext;
  class BlockContext;
  class StatementsContext;
  class StatementContext;
  class BlockLevelExpressionContext;
  class DeclarationContext;
  class ExpressionContext;
  class DisjunctionContext;
  class ConjunctionContext;
  class EqualityComparisonContext;
  class ComparisonContext;
  class NamedInfixContext;
  class ElvisExpressionContext;
  class InfixFunctionCallContext;
  class RangeExpressionContext;
  class AdditiveExpressionContext;
  class MultiplicativeExpressionContext;
  class TypeRHSContext;
  class PrefixUnaryExpressionContext;
  class PostfixUnaryExpressionContext;
  class AtomicExpressionContext;
  class ParenthesizedExpressionContext;
  class CallSuffixContext;
  class AnnotatedLambdaContext;
  class ArrayAccessContext;
  class ValueArgumentsContext;
  class TypeArgumentsContext;
  class TypeProjectionContext;
  class TypeProjectionModifierListContext;
  class ValueArgumentContext;
  class LiteralConstantContext;
  class StringLiteralContext;
  class LineStringLiteralContext;
  class MultiLineStringLiteralContext;
  class LineStringContentContext;
  class LineStringExpressionContext;
  class MultiLineStringContentContext;
  class MultiLineStringExpressionContext;
  class FunctionLiteralContext;
  class LambdaParametersContext;
  class LambdaParameterContext;
  class ObjectLiteralContext;
  class CollectionLiteralContext;
  class ThisExpressionContext;
  class SuperExpressionContext;
  class ConditionalExpressionContext;
  class IfExpressionContext;
  class ControlStructureBodyContext;
  class WhenExpressionContext;
  class WhenEntryContext;
  class WhenConditionContext;
  class RangeTestContext;
  class TypeTestContext;
  class TryExpressionContext;
  class CatchBlockContext;
  class FinallyBlockContext;
  class LoopExpressionContext;
  class ForExpressionContext;
  class WhileExpressionContext;
  class DoWhileExpressionContext;
  class JumpExpressionContext;
  class CallableReferenceContext;
  class AssignmentOperatorContext;
  class EqualityOperationContext;
  class ComparisonOperatorContext;
  class InOperatorContext;
  class IsOperatorContext;
  class AdditiveOperatorContext;
  class MultiplicativeOperationContext;
  class TypeOperationContext;
  class PrefixUnaryOperationContext;
  class PostfixUnaryOperationContext;
  class MemberAccessOperatorContext;
  class ModifierListContext;
  class ModifierContext;
  class ClassModifierContext;
  class MemberModifierContext;
  class VisibilityModifierContext;
  class VarianceAnnotationContext;
  class FunctionModifierContext;
  class PropertyModifierContext;
  class InheritanceModifierContext;
  class ParameterModifierContext;
  class TypeParameterModifierContext;
  class LabelDefinitionContext;
  class AnnotationsContext;
  class AnnotationContext;
  class AnnotationListContext;
  class AnnotationUseSiteTargetContext;
  class UnescapedAnnotationContext;
  class IdentifierContext;
  class SimpleIdentifierContext;
  class SemiContext;
  class AnysemiContext; 

  class  KotlinFileContext : public antlr4::ParserRuleContext {
  public:
    KotlinFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreambleContext *preamble();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnysemiContext *> anysemi();
    AnysemiContext* anysemi(size_t i);
    std::vector<TopLevelObjectContext *> topLevelObject();
    TopLevelObjectContext* topLevelObject(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KotlinFileContext* kotlinFile();

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreambleContext *preamble();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnysemiContext *> anysemi();
    AnysemiContext* anysemi(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScriptContext* script();

  class  PreambleContext : public antlr4::ParserRuleContext {
  public:
    PreambleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageHeaderContext *packageHeader();
    ImportListContext *importList();
    FileAnnotationsContext *fileAnnotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PreambleContext* preamble();

  class  FileAnnotationsContext : public antlr4::ParserRuleContext {
  public:
    FileAnnotationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FileAnnotationContext *> fileAnnotation();
    FileAnnotationContext* fileAnnotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileAnnotationsContext* fileAnnotations();

  class  FileAnnotationContext : public antlr4::ParserRuleContext {
  public:
    FileAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LSQUARE();
    antlr4::tree::TerminalNode* LSQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RSQUARE();
    antlr4::tree::TerminalNode* RSQUARE(size_t i);
    std::vector<UnescapedAnnotationContext *> unescapedAnnotation();
    UnescapedAnnotationContext* unescapedAnnotation(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileAnnotationContext* fileAnnotation();

  class  PackageHeaderContext : public antlr4::ParserRuleContext {
  public:
    PackageHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    IdentifierContext *identifier();
    ModifierListContext *modifierList();
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageHeaderContext* packageHeader();

  class  ImportListContext : public antlr4::ParserRuleContext {
  public:
    ImportListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportHeaderContext *> importHeader();
    ImportHeaderContext* importHeader(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportListContext* importList();

  class  ImportHeaderContext : public antlr4::ParserRuleContext {
  public:
    ImportHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MULT();
    ImportAliasContext *importAlias();
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportHeaderContext* importHeader();

  class  ImportAliasContext : public antlr4::ParserRuleContext {
  public:
    ImportAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    SimpleIdentifierContext *simpleIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportAliasContext* importAlias();

  class  TopLevelObjectContext : public antlr4::ParserRuleContext {
  public:
    TopLevelObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    ObjectDeclarationContext *objectDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    PropertyDeclarationContext *propertyDeclaration();
    TypeAliasContext *typeAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelObjectContext* topLevelObject();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *INTERFACE();
    ModifierListContext *modifierList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    TypeParametersContext *typeParameters();
    PrimaryConstructorContext *primaryConstructor();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    TypeConstraintsContext *typeConstraints();
    ClassBodyContext *classBody();
    EnumClassBodyContext *enumClassBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  PrimaryConstructorContext : public antlr4::ParserRuleContext {
  public:
    PrimaryConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassParametersContext *classParameters();
    ModifierListContext *modifierList();
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryConstructorContext* primaryConstructor();

  class  ClassParametersContext : public antlr4::ParserRuleContext {
  public:
    ClassParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ClassParameterContext *> classParameter();
    ClassParameterContext* classParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParametersContext* classParameters();

  class  ClassParameterContext : public antlr4::ParserRuleContext {
  public:
    ClassParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    ModifierListContext *modifierList();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParameterContext* classParameter();

  class  DelegationSpecifiersContext : public antlr4::ParserRuleContext {
  public:
    DelegationSpecifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DelegationSpecifierContext *> delegationSpecifier();
    DelegationSpecifierContext* delegationSpecifier(size_t i);
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegationSpecifiersContext* delegationSpecifiers();

  class  DelegationSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DelegationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorInvocationContext *constructorInvocation();
    UserTypeContext *userType();
    ExplicitDelegationContext *explicitDelegation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegationSpecifierContext* delegationSpecifier();

  class  ConstructorInvocationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserTypeContext *userType();
    CallSuffixContext *callSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorInvocationContext* constructorInvocation();

  class  ExplicitDelegationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitDelegationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserTypeContext *userType();
    antlr4::tree::TerminalNode *BY();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitDelegationContext* explicitDelegation();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    ObjectDeclarationContext *objectDeclaration();
    CompanionObjectContext *companionObject();
    PropertyDeclarationContext *propertyDeclaration();
    AnonymousInitializerContext *anonymousInitializer();
    SecondaryConstructorContext *secondaryConstructor();
    TypeAliasContext *typeAlias();
    std::vector<AnysemiContext *> anysemi();
    AnysemiContext* anysemi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberDeclarationContext* classMemberDeclaration();

  class  AnonymousInitializerContext : public antlr4::ParserRuleContext {
  public:
    AnonymousInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INIT();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnonymousInitializerContext* anonymousInitializer();

  class  SecondaryConstructorContext : public antlr4::ParserRuleContext {
  public:
    SecondaryConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    FunctionValueParametersContext *functionValueParameters();
    ModifierListContext *modifierList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    ConstructorDelegationCallContext *constructorDelegationCall();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SecondaryConstructorContext* secondaryConstructor();

  class  ConstructorDelegationCallContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDelegationCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    ValueArgumentsContext *valueArguments();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *SUPER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorDelegationCallContext* constructorDelegationCall();

  class  EnumClassBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    EnumEntriesContext *enumEntries();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassBodyContext* enumClassBody();

  class  EnumEntriesContext : public antlr4::ParserRuleContext {
  public:
    EnumEntriesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumEntryContext *> enumEntry();
    EnumEntryContext* enumEntry(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumEntriesContext* enumEntries();

  class  EnumEntryContext : public antlr4::ParserRuleContext {
  public:
    EnumEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    ValueArgumentsContext *valueArguments();
    ClassBodyContext *classBody();
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumEntryContext* enumEntry();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUN();
    FunctionValueParametersContext *functionValueParameters();
    ModifierListContext *modifierList();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *DOT();
    TypeParametersContext *typeParameters();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeConstraintsContext *typeConstraints();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionValueParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionValueParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<FunctionValueParameterContext *> functionValueParameter();
    FunctionValueParameterContext* functionValueParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionValueParametersContext* functionValueParameters();

  class  FunctionValueParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionValueParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    ModifierListContext *modifierList();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionValueParameterContext* functionValueParameter();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  ObjectDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ObjectDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    SimpleIdentifierContext *simpleIdentifier();
    ModifierListContext *modifierList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    PrimaryConstructorContext *primaryConstructor();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectDeclarationContext* objectDeclaration();

  class  CompanionObjectContext : public antlr4::ParserRuleContext {
  public:
    CompanionObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPANION();
    antlr4::tree::TerminalNode *OBJECT();
    std::vector<ModifierListContext *> modifierList();
    ModifierListContext* modifierList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompanionObjectContext* companionObject();

  class  PropertyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PropertyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *VAR();
    ModifierListContext *modifierList();
    TypeParametersContext *typeParameters();
    TypeContext *type();
    antlr4::tree::TerminalNode *DOT();
    TypeConstraintsContext *typeConstraints();
    ExpressionContext *expression();
    GetterContext *getter();
    SetterContext *setter();
    MultiVariableDeclarationContext *multiVariableDeclaration();
    VariableDeclarationContext *variableDeclaration();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyDeclarationContext* propertyDeclaration();

  class  MultiVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MultiVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiVariableDeclarationContext* multiVariableDeclaration();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  GetterContext : public antlr4::ParserRuleContext {
  public:
    GetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GETTER();
    ModifierListContext *modifierList();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetterContext* getter();

  class  SetterContext : public antlr4::ParserRuleContext {
  public:
    SetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETTER();
    ModifierListContext *modifierList();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionBodyContext *functionBody();
    SimpleIdentifierContext *simpleIdentifier();
    ParameterContext *parameter();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<ParameterModifierContext *> parameterModifier();
    ParameterModifierContext* parameterModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetterContext* setter();

  class  TypeAliasContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_ALIAS();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    TypeContext *type();
    ModifierListContext *modifierList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAliasContext* typeAlias();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    antlr4::tree::TerminalNode *RANGLE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    ModifierListContext *modifierList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeContext *functionType();
    ParenthesizedTypeContext *parenthesizedType();
    NullableTypeContext *nullableType();
    TypeReferenceContext *typeReference();
    TypeModifierListContext *typeModifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  TypeModifierListContext : public antlr4::ParserRuleContext {
  public:
    TypeModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUSPEND();
    antlr4::tree::TerminalNode* SUSPEND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeModifierListContext* typeModifierList();

  class  ParenthesizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedTypeContext* parenthesizedType();

  class  NullableTypeContext : public antlr4::ParserRuleContext {
  public:
    NullableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeReferenceContext *typeReference();
    ParenthesizedTypeContext *parenthesizedType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUEST();
    antlr4::tree::TerminalNode* QUEST(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullableTypeContext* nullableType();

  class  TypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    TypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    TypeReferenceContext *typeReference();
    antlr4::tree::TerminalNode *RPAREN();
    UserTypeContext *userType();
    antlr4::tree::TerminalNode *DYNAMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeReferenceContext* typeReference();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeParametersContext *functionTypeParameters();
    antlr4::tree::TerminalNode *ARROW();
    TypeContext *type();
    FunctionTypeReceiverContext *functionTypeReceiver();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeContext* functionType();

  class  FunctionTypeReceiverContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeReceiverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesizedTypeContext *parenthesizedType();
    NullableTypeContext *nullableType();
    TypeReferenceContext *typeReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeReceiverContext* functionTypeReceiver();

  class  UserTypeContext : public antlr4::ParserRuleContext {
  public:
    UserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleUserTypeContext *> simpleUserType();
    SimpleUserTypeContext* simpleUserType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserTypeContext* userType();

  class  SimpleUserTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleUserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    TypeArgumentsContext *typeArguments();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleUserTypeContext* simpleUserType();

  class  FunctionTypeParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeParametersContext* functionTypeParameters();

  class  TypeConstraintsContext : public antlr4::ParserRuleContext {
  public:
    TypeConstraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    std::vector<TypeConstraintContext *> typeConstraint();
    TypeConstraintContext* typeConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeConstraintsContext* typeConstraints();

  class  TypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    TypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeConstraintContext* typeConstraint();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnysemiContext *> anysemi();
    AnysemiContext* anysemi(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    BlockLevelExpressionContext *blockLevelExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  BlockLevelExpressionContext : public antlr4::ParserRuleContext {
  public:
    BlockLevelExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockLevelExpressionContext* blockLevelExpression();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    PropertyDeclarationContext *propertyDeclaration();
    TypeAliasContext *typeAlias();
    std::vector<LabelDefinitionContext *> labelDefinition();
    LabelDefinitionContext* labelDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DisjunctionContext *> disjunction();
    DisjunctionContext* disjunction(size_t i);
    std::vector<AssignmentOperatorContext *> assignmentOperator();
    AssignmentOperatorContext* assignmentOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  DisjunctionContext : public antlr4::ParserRuleContext {
  public:
    DisjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConjunctionContext *> conjunction();
    ConjunctionContext* conjunction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISJ();
    antlr4::tree::TerminalNode* DISJ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DisjunctionContext* disjunction();

  class  ConjunctionContext : public antlr4::ParserRuleContext {
  public:
    ConjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityComparisonContext *> equalityComparison();
    EqualityComparisonContext* equalityComparison(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONJ();
    antlr4::tree::TerminalNode* CONJ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConjunctionContext* conjunction();

  class  EqualityComparisonContext : public antlr4::ParserRuleContext {
  public:
    EqualityComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);
    std::vector<EqualityOperationContext *> equalityOperation();
    EqualityOperationContext* equalityOperation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityComparisonContext* equalityComparison();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedInfixContext *> namedInfix();
    NamedInfixContext* namedInfix(size_t i);
    ComparisonOperatorContext *comparisonOperator();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonContext* comparison();

  class  NamedInfixContext : public antlr4::ParserRuleContext {
  public:
    NamedInfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElvisExpressionContext *> elvisExpression();
    ElvisExpressionContext* elvisExpression(size_t i);
    IsOperatorContext *isOperator();
    TypeContext *type();
    std::vector<InOperatorContext *> inOperator();
    InOperatorContext* inOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedInfixContext* namedInfix();

  class  ElvisExpressionContext : public antlr4::ParserRuleContext {
  public:
    ElvisExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InfixFunctionCallContext *> infixFunctionCall();
    InfixFunctionCallContext* infixFunctionCall(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELVIS();
    antlr4::tree::TerminalNode* ELVIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElvisExpressionContext* elvisExpression();

  class  InfixFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    InfixFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RangeExpressionContext *> rangeExpression();
    RangeExpressionContext* rangeExpression(size_t i);
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixFunctionCallContext* infixFunctionCall();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RANGE();
    antlr4::tree::TerminalNode* RANGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    std::vector<AdditiveOperatorContext *> additiveOperator();
    AdditiveOperatorContext* additiveOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeRHSContext *> typeRHS();
    TypeRHSContext* typeRHS(size_t i);
    std::vector<MultiplicativeOperationContext *> multiplicativeOperation();
    MultiplicativeOperationContext* multiplicativeOperation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  TypeRHSContext : public antlr4::ParserRuleContext {
  public:
    TypeRHSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrefixUnaryExpressionContext *> prefixUnaryExpression();
    PrefixUnaryExpressionContext* prefixUnaryExpression(size_t i);
    std::vector<TypeOperationContext *> typeOperation();
    TypeOperationContext* typeOperation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeRHSContext* typeRHS();

  class  PrefixUnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixUnaryExpressionContext *postfixUnaryExpression();
    std::vector<PrefixUnaryOperationContext *> prefixUnaryOperation();
    PrefixUnaryOperationContext* prefixUnaryOperation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryExpressionContext* prefixUnaryExpression();

  class  PostfixUnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomicExpressionContext *atomicExpression();
    CallableReferenceContext *callableReference();
    std::vector<PostfixUnaryOperationContext *> postfixUnaryOperation();
    PostfixUnaryOperationContext* postfixUnaryOperation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnaryExpressionContext* postfixUnaryExpression();

  class  AtomicExpressionContext : public antlr4::ParserRuleContext {
  public:
    AtomicExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesizedExpressionContext *parenthesizedExpression();
    LiteralConstantContext *literalConstant();
    FunctionLiteralContext *functionLiteral();
    ThisExpressionContext *thisExpression();
    SuperExpressionContext *superExpression();
    ConditionalExpressionContext *conditionalExpression();
    TryExpressionContext *tryExpression();
    ObjectLiteralContext *objectLiteral();
    JumpExpressionContext *jumpExpression();
    LoopExpressionContext *loopExpression();
    CollectionLiteralContext *collectionLiteral();
    SimpleIdentifierContext *simpleIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomicExpressionContext* atomicExpression();

  class  ParenthesizedExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedExpressionContext* parenthesizedExpression();

  class  CallSuffixContext : public antlr4::ParserRuleContext {
  public:
    CallSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeArgumentsContext *typeArguments();
    ValueArgumentsContext *valueArguments();
    std::vector<AnnotatedLambdaContext *> annotatedLambda();
    AnnotatedLambdaContext* annotatedLambda(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallSuffixContext* callSuffix();

  class  AnnotatedLambdaContext : public antlr4::ParserRuleContext {
  public:
    AnnotatedLambdaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionLiteralContext *functionLiteral();
    std::vector<UnescapedAnnotationContext *> unescapedAnnotation();
    UnescapedAnnotationContext* unescapedAnnotation(size_t i);
    antlr4::tree::TerminalNode *LabelDefinition();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotatedLambdaContext* annotatedLambda();

  class  ArrayAccessContext : public antlr4::ParserRuleContext {
  public:
    ArrayAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayAccessContext* arrayAccess();

  class  ValueArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ValueArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ValueArgumentContext *> valueArgument();
    ValueArgumentContext* valueArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueArgumentsContext* valueArguments();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    std::vector<TypeProjectionContext *> typeProjection();
    TypeProjectionContext* typeProjection(size_t i);
    antlr4::tree::TerminalNode *RANGLE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  TypeProjectionContext : public antlr4::ParserRuleContext {
  public:
    TypeProjectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    TypeProjectionModifierListContext *typeProjectionModifierList();
    antlr4::tree::TerminalNode *MULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeProjectionContext* typeProjection();

  class  TypeProjectionModifierListContext : public antlr4::ParserRuleContext {
  public:
    TypeProjectionModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarianceAnnotationContext *> varianceAnnotation();
    VarianceAnnotationContext* varianceAnnotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeProjectionModifierListContext* typeProjectionModifierList();

  class  ValueArgumentContext : public antlr4::ParserRuleContext {
  public:
    ValueArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *MULT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueArgumentContext* valueArgument();

  class  LiteralConstantContext : public antlr4::ParserRuleContext {
  public:
    LiteralConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *IntegerLiteral();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *HexLiteral();
    antlr4::tree::TerminalNode *BinLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *RealLiteral();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *LongLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralConstantContext* literalConstant();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LineStringLiteralContext *lineStringLiteral();
    MultiLineStringLiteralContext *multiLineStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  LineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    LineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE_OPEN();
    antlr4::tree::TerminalNode *QUOTE_CLOSE();
    std::vector<LineStringContentContext *> lineStringContent();
    LineStringContentContext* lineStringContent(size_t i);
    std::vector<LineStringExpressionContext *> lineStringExpression();
    LineStringExpressionContext* lineStringExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringLiteralContext* lineStringLiteral();

  class  MultiLineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_OPEN();
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_CLOSE();
    std::vector<MultiLineStringContentContext *> multiLineStringContent();
    MultiLineStringContentContext* multiLineStringContent(size_t i);
    std::vector<MultiLineStringExpressionContext *> multiLineStringExpression();
    MultiLineStringExpressionContext* multiLineStringExpression(size_t i);
    std::vector<LineStringLiteralContext *> lineStringLiteral();
    LineStringLiteralContext* lineStringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MultiLineStringQuote();
    antlr4::tree::TerminalNode* MultiLineStringQuote(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringLiteralContext* multiLineStringLiteral();

  class  LineStringContentContext : public antlr4::ParserRuleContext {
  public:
    LineStringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LineStrText();
    antlr4::tree::TerminalNode *LineStrEscapedChar();
    antlr4::tree::TerminalNode *LineStrRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringContentContext* lineStringContent();

  class  LineStringExpressionContext : public antlr4::ParserRuleContext {
  public:
    LineStringExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LineStrExprStart();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringExpressionContext* lineStringExpression();

  class  MultiLineStringContentContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiLineStrText();
    antlr4::tree::TerminalNode *MultiLineStrEscapedChar();
    antlr4::tree::TerminalNode *MultiLineStrRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringContentContext* multiLineStringContent();

  class  MultiLineStringExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiLineStrExprStart();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringExpressionContext* multiLineStringExpression();

  class  FunctionLiteralContext : public antlr4::ParserRuleContext {
  public:
    FunctionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *RCURL();
    LambdaParametersContext *lambdaParameters();
    antlr4::tree::TerminalNode *ARROW();
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionLiteralContext* functionLiteral();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LambdaParameterContext *> lambdaParameter();
    LambdaParameterContext* lambdaParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParametersContext* lambdaParameters();

  class  LambdaParameterContext : public antlr4::ParserRuleContext {
  public:
    LambdaParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    MultiVariableDeclarationContext *multiVariableDeclaration();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParameterContext* lambdaParameter();

  class  ObjectLiteralContext : public antlr4::ParserRuleContext {
  public:
    ObjectLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    ClassBodyContext *classBody();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectLiteralContext* objectLiteral();

  class  CollectionLiteralContext : public antlr4::ParserRuleContext {
  public:
    CollectionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollectionLiteralContext* collectionLiteral();

  class  ThisExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThisExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *LabelReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThisExpressionContext* thisExpression();

  class  SuperExpressionContext : public antlr4::ParserRuleContext {
  public:
    SuperExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *LANGLE();
    TypeContext *type();
    antlr4::tree::TerminalNode *RANGLE();
    antlr4::tree::TerminalNode *LabelReference();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SuperExpressionContext* superExpression();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfExpressionContext *ifExpression();
    WhenExpressionContext *whenExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  IfExpressionContext : public antlr4::ParserRuleContext {
  public:
    IfExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ControlStructureBodyContext *> controlStructureBody();
    ControlStructureBodyContext* controlStructureBody(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfExpressionContext* ifExpression();

  class  ControlStructureBodyContext : public antlr4::ParserRuleContext {
  public:
    ControlStructureBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ControlStructureBodyContext* controlStructureBody();

  class  WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<WhenEntryContext *> whenEntry();
    WhenEntryContext* whenEntry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenExpressionContext* whenExpression();

  class  WhenEntryContext : public antlr4::ParserRuleContext {
  public:
    WhenEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhenConditionContext *> whenCondition();
    WhenConditionContext* whenCondition(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    ControlStructureBodyContext *controlStructureBody();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SemiContext *semi();
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenEntryContext* whenEntry();

  class  WhenConditionContext : public antlr4::ParserRuleContext {
  public:
    WhenConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    RangeTestContext *rangeTest();
    TypeTestContext *typeTest();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenConditionContext* whenCondition();

  class  RangeTestContext : public antlr4::ParserRuleContext {
  public:
    RangeTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InOperatorContext *inOperator();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeTestContext* rangeTest();

  class  TypeTestContext : public antlr4::ParserRuleContext {
  public:
    TypeTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IsOperatorContext *isOperator();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTestContext* typeTest();

  class  TryExpressionContext : public antlr4::ParserRuleContext {
  public:
    TryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<CatchBlockContext *> catchBlock();
    CatchBlockContext* catchBlock(size_t i);
    FinallyBlockContext *finallyBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryExpressionContext* tryExpression();

  class  CatchBlockContext : public antlr4::ParserRuleContext {
  public:
    CatchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *LPAREN();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    UserTypeContext *userType();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchBlockContext* catchBlock();

  class  FinallyBlockContext : public antlr4::ParserRuleContext {
  public:
    FinallyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyBlockContext* finallyBlock();

  class  LoopExpressionContext : public antlr4::ParserRuleContext {
  public:
    LoopExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForExpressionContext *forExpression();
    WhileExpressionContext *whileExpression();
    DoWhileExpressionContext *doWhileExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopExpressionContext* loopExpression();

  class  ForExpressionContext : public antlr4::ParserRuleContext {
  public:
    ForExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    VariableDeclarationContext *variableDeclaration();
    MultiVariableDeclarationContext *multiVariableDeclaration();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    ControlStructureBodyContext *controlStructureBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForExpressionContext* forExpression();

  class  WhileExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhileExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    ControlStructureBodyContext *controlStructureBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileExpressionContext* whileExpression();

  class  DoWhileExpressionContext : public antlr4::ParserRuleContext {
  public:
    DoWhileExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    ControlStructureBodyContext *controlStructureBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoWhileExpressionContext* doWhileExpression();

  class  JumpExpressionContext : public antlr4::ParserRuleContext {
  public:
    JumpExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *RETURN_AT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTINUE_AT();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *BREAK_AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpExpressionContext* jumpExpression();

  class  CallableReferenceContext : public antlr4::ParserRuleContext {
  public:
    CallableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLONCOLON();
    antlr4::tree::TerminalNode *Q_COLONCOLON();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLASS();
    UserTypeContext *userType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUEST();
    antlr4::tree::TerminalNode* QUEST(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallableReferenceContext* callableReference();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *ADD_ASSIGNMENT();
    antlr4::tree::TerminalNode *SUB_ASSIGNMENT();
    antlr4::tree::TerminalNode *MULT_ASSIGNMENT();
    antlr4::tree::TerminalNode *DIV_ASSIGNMENT();
    antlr4::tree::TerminalNode *MOD_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  EqualityOperationContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCL_EQ();
    antlr4::tree::TerminalNode *EXCL_EQEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EQEQEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityOperationContext* equalityOperation();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    antlr4::tree::TerminalNode *RANGLE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  InOperatorContext : public antlr4::ParserRuleContext {
  public:
    InOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT_IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InOperatorContext* inOperator();

  class  IsOperatorContext : public antlr4::ParserRuleContext {
  public:
    IsOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT_IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsOperatorContext* isOperator();

  class  AdditiveOperatorContext : public antlr4::ParserRuleContext {
  public:
    AdditiveOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveOperatorContext* additiveOperator();

  class  MultiplicativeOperationContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeOperationContext* multiplicativeOperation();

  class  TypeOperationContext : public antlr4::ParserRuleContext {
  public:
    TypeOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *AS_SAFE();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeOperationContext* typeOperation();

  class  PrefixUnaryOperationContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCR();
    antlr4::tree::TerminalNode *DECR();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *EXCL();
    AnnotationsContext *annotations();
    LabelDefinitionContext *labelDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryOperationContext* prefixUnaryOperation();

  class  PostfixUnaryOperationContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnaryOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCR();
    antlr4::tree::TerminalNode *DECR();
    std::vector<antlr4::tree::TerminalNode *> EXCL();
    antlr4::tree::TerminalNode* EXCL(size_t i);
    CallSuffixContext *callSuffix();
    ArrayAccessContext *arrayAccess();
    MemberAccessOperatorContext *memberAccessOperator();
    PostfixUnaryExpressionContext *postfixUnaryExpression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnaryOperationContext* postfixUnaryOperation();

  class  MemberAccessOperatorContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *QUEST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberAccessOperatorContext* memberAccessOperator();

  class  ModifierListContext : public antlr4::ParserRuleContext {
  public:
    ModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationsContext *> annotations();
    AnnotationsContext* annotations(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierListContext* modifierList();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassModifierContext *classModifier();
    MemberModifierContext *memberModifier();
    VisibilityModifierContext *visibilityModifier();
    VarianceAnnotationContext *varianceAnnotation();
    FunctionModifierContext *functionModifier();
    PropertyModifierContext *propertyModifier();
    InheritanceModifierContext *inheritanceModifier();
    ParameterModifierContext *parameterModifier();
    TypeParameterModifierContext *typeParameterModifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  ClassModifierContext : public antlr4::ParserRuleContext {
  public:
    ClassModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *ANNOTATION();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INNER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassModifierContext* classModifier();

  class  MemberModifierContext : public antlr4::ParserRuleContext {
  public:
    MemberModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *LATEINIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberModifierContext* memberModifier();

  class  VisibilityModifierContext : public antlr4::ParserRuleContext {
  public:
    VisibilityModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PROTECTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VisibilityModifierContext* visibilityModifier();

  class  VarianceAnnotationContext : public antlr4::ParserRuleContext {
  public:
    VarianceAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarianceAnnotationContext* varianceAnnotation();

  class  FunctionModifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAILREC();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *SUSPEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionModifierContext* functionModifier();

  class  PropertyModifierContext : public antlr4::ParserRuleContext {
  public:
    PropertyModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyModifierContext* propertyModifier();

  class  InheritanceModifierContext : public antlr4::ParserRuleContext {
  public:
    InheritanceModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *OPEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InheritanceModifierContext* inheritanceModifier();

  class  ParameterModifierContext : public antlr4::ParserRuleContext {
  public:
    ParameterModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARARG();
    antlr4::tree::TerminalNode *NOINLINE();
    antlr4::tree::TerminalNode *CROSSINLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterModifierContext* parameterModifier();

  class  TypeParameterModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REIFIED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterModifierContext* typeParameterModifier();

  class  LabelDefinitionContext : public antlr4::ParserRuleContext {
  public:
    LabelDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LabelDefinition();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelDefinitionContext* labelDefinition();

  class  AnnotationsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    AnnotationListContext *annotationList();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationsContext* annotations();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationUseSiteTargetContext *annotationUseSiteTarget();
    antlr4::tree::TerminalNode *COLON();
    UnescapedAnnotationContext *unescapedAnnotation();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *LabelReference();
    TypeArgumentsContext *typeArguments();
    ValueArgumentsContext *valueArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  AnnotationListContext : public antlr4::ParserRuleContext {
  public:
    AnnotationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationUseSiteTargetContext *annotationUseSiteTarget();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<UnescapedAnnotationContext *> unescapedAnnotation();
    UnescapedAnnotationContext* unescapedAnnotation(size_t i);
    antlr4::tree::TerminalNode *AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationListContext* annotationList();

  class  AnnotationUseSiteTargetContext : public antlr4::ParserRuleContext {
  public:
    AnnotationUseSiteTargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *RECEIVER();
    antlr4::tree::TerminalNode *PARAM();
    antlr4::tree::TerminalNode *SETPARAM();
    antlr4::tree::TerminalNode *DELEGATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationUseSiteTargetContext* annotationUseSiteTarget();

  class  UnescapedAnnotationContext : public antlr4::ParserRuleContext {
  public:
    UnescapedAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeArgumentsContext *typeArguments();
    ValueArgumentsContext *valueArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnescapedAnnotationContext* unescapedAnnotation();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  SimpleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *ANNOTATION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *COMPANION();
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    antlr4::tree::TerminalNode *CROSSINLINE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALLY();
    antlr4::tree::TerminalNode *GETTER();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INIT();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *LATEINIT();
    antlr4::tree::TerminalNode *NOINLINE();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *REIFIED();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *TAILREC();
    antlr4::tree::TerminalNode *SETTER();
    antlr4::tree::TerminalNode *VARARG();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *SUSPEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleIdentifierContext* simpleIdentifier();

  class  SemiContext : public antlr4::ParserRuleContext {
  public:
    SemiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemiContext* semi();

  class  AnysemiContext : public antlr4::ParserRuleContext {
  public:
    AnysemiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnysemiContext* anysemi();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

