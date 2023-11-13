
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  myParser : public antlr4::Parser {
public:
  enum {
    ABSTRACT = 1, ASSERT = 2, BOOLEAN = 3, BREAK = 4, BYTE = 5, CASE = 6, 
    CATCH = 7, CHAR = 8, CLASS = 9, CONST = 10, CONTINUE = 11, DEFAULT = 12, 
    DO = 13, DOUBLE = 14, ELSE = 15, ENUM = 16, EXTENDS = 17, FINAL = 18, 
    FINALLY = 19, FLOAT = 20, FOR = 21, IF = 22, GOTO = 23, IMPLEMENTS = 24, 
    IMPORT = 25, INSTANCEOF = 26, INT = 27, INTERFACE = 28, LONG = 29, NATIVE = 30, 
    NEW = 31, PACKAGE = 32, PRIVATE = 33, PROTECTED = 34, PUBLIC = 35, RETURN = 36, 
    SHORT = 37, STATIC = 38, STRICTFP = 39, SUPER = 40, SWITCH = 41, SYNCHRONIZED = 42, 
    THIS = 43, THROW = 44, THROWS = 45, TRANSIENT = 46, TRY = 47, VOID = 48, 
    VOLATILE = 49, WHILE = 50, MODULE = 51, OPEN = 52, REQUIRES = 53, EXPORTS = 54, 
    OPENS = 55, TO = 56, USES = 57, PROVIDES = 58, WITH = 59, TRANSITIVE = 60, 
    VAR = 61, YIELD = 62, RECORD = 63, SEALED = 64, PERMITS = 65, NON_SEALED = 66, 
    DECIMAL_LITERAL = 67, HEX_LITERAL = 68, OCT_LITERAL = 69, BINARY_LITERAL = 70, 
    FLOAT_LITERAL = 71, HEX_FLOAT_LITERAL = 72, BOOL_LITERAL = 73, CHAR_LITERAL = 74, 
    STRING_LITERAL = 75, TEXT_BLOCK = 76, NULL_LITERAL = 77, LPAREN = 78, 
    RPAREN = 79, LBRACE = 80, RBRACE = 81, LBRACK = 82, RBRACK = 83, SEMI = 84, 
    COMMA = 85, DOT = 86, ASSIGN = 87, GT = 88, LT = 89, BANG = 90, TILDE = 91, 
    QUESTION = 92, COLON = 93, EQUAL = 94, LE = 95, GE = 96, NOTEQUAL = 97, 
    AND = 98, OR = 99, INC = 100, DEC = 101, ADD = 102, SUB = 103, MUL = 104, 
    DIV = 105, BITAND = 106, BITOR = 107, CARET = 108, MOD = 109, ADD_ASSIGN = 110, 
    SUB_ASSIGN = 111, MUL_ASSIGN = 112, DIV_ASSIGN = 113, AND_ASSIGN = 114, 
    OR_ASSIGN = 115, XOR_ASSIGN = 116, MOD_ASSIGN = 117, LSHIFT_ASSIGN = 118, 
    RSHIFT_ASSIGN = 119, URSHIFT_ASSIGN = 120, ARROW = 121, COLONCOLON = 122, 
    AT = 123, ELLIPSIS = 124, WS = 125, COMMENT = 126, LINE_COMMENT = 127, 
    IDENTIFIER = 128
  };

  enum {
    RuleCompilationUnit = 0, RulePackageDeclaration = 1, RuleImportDeclaration = 2, 
    RuleTypeDeclaration = 3, RuleModifier = 4, RuleClassOrInterfaceModifier = 5, 
    RuleVariableModifier = 6, RuleClassDeclaration = 7, RuleTypeParameters = 8, 
    RuleTypeParameter = 9, RuleTypeBound = 10, RuleEnumDeclaration = 11, 
    RuleEnumConstants = 12, RuleEnumConstant = 13, RuleEnumBodyDeclarations = 14, 
    RuleInterfaceDeclaration = 15, RuleClassBody = 16, RuleInterfaceBody = 17, 
    RuleClassBodyDeclaration = 18, RuleMemberDeclaration = 19, RuleMethodDeclaration = 20, 
    RuleMethodBody = 21, RuleTypeTypeOrVoid = 22, RuleGenericMethodDeclaration = 23, 
    RuleGenericConstructorDeclaration = 24, RuleConstructorDeclaration = 25, 
    RuleFieldDeclaration = 26, RuleInterfaceBodyDeclaration = 27, RuleInterfaceMemberDeclaration = 28, 
    RuleConstDeclaration = 29, RuleConstantDeclarator = 30, RuleInterfaceMethodDeclaration = 31, 
    RuleInterfaceMethodModifier = 32, RuleGenericInterfaceMethodDeclaration = 33, 
    RuleInterfaceCommonBodyDeclaration = 34, RuleVariableDeclarators = 35, 
    RuleVariableDeclarator = 36, RuleVariableDeclaratorId = 37, RuleVariableInitializer = 38, 
    RuleArrayInitializer = 39, RuleClassOrInterfaceType = 40, RuleTypeArgument = 41, 
    RuleQualifiedNameList = 42, RuleFormalParameters = 43, RuleReceiverParameter = 44, 
    RuleFormalParameterList = 45, RuleFormalParameter = 46, RuleLastFormalParameter = 47, 
    RuleLambdaLVTIList = 48, RuleLambdaLVTIParameter = 49, RuleQualifiedName = 50, 
    RuleLiteral = 51, RuleIntegerLiteral = 52, RuleFloatLiteral = 53, RuleAltAnnotationQualifiedName = 54, 
    RuleAnnotation = 55, RuleElementValuePairs = 56, RuleElementValuePair = 57, 
    RuleElementValue = 58, RuleElementValueArrayInitializer = 59, RuleAnnotationTypeDeclaration = 60, 
    RuleAnnotationTypeBody = 61, RuleAnnotationTypeElementDeclaration = 62, 
    RuleAnnotationTypeElementRest = 63, RuleAnnotationMethodOrConstantRest = 64, 
    RuleAnnotationMethodRest = 65, RuleAnnotationConstantRest = 66, RuleDefaultValue = 67, 
    RuleModuleDeclaration = 68, RuleModuleBody = 69, RuleModuleDirective = 70, 
    RuleRequiresModifier = 71, RuleRecordDeclaration = 72, RuleRecordHeader = 73, 
    RuleRecordComponentList = 74, RuleRecordComponent = 75, RuleRecordBody = 76, 
    RuleBlock = 77, RuleBlockStatement = 78, RuleLocalVariableDeclaration = 79, 
    RuleIdentifier = 80, RuleTypeIdentifier = 81, RuleLocalTypeDeclaration = 82, 
    RuleStatement = 83, RuleCatchClause = 84, RuleCatchType = 85, RuleFinallyBlock = 86, 
    RuleResourceSpecification = 87, RuleResources = 88, RuleResource = 89, 
    RuleSwitchBlockStatementGroup = 90, RuleSwitchLabel = 91, RuleForControl = 92, 
    RuleForInit = 93, RuleEnhancedForControl = 94, RuleParExpression = 95, 
    RuleExpressionList = 96, RuleMethodCall = 97, RuleExpression = 98, RulePattern = 99, 
    RuleLambdaExpression = 100, RuleLambdaParameters = 101, RuleLambdaBody = 102, 
    RulePrimary = 103, RuleSwitchExpression = 104, RuleSwitchLabeledRule = 105, 
    RuleGuardedPattern = 106, RuleSwitchRuleOutcome = 107, RuleClassType = 108, 
    RuleCreator = 109, RuleCreatedName = 110, RuleInnerCreator = 111, RuleArrayCreatorRest = 112, 
    RuleClassCreatorRest = 113, RuleExplicitGenericInvocation = 114, RuleTypeArgumentsOrDiamond = 115, 
    RuleNonWildcardTypeArgumentsOrDiamond = 116, RuleNonWildcardTypeArguments = 117, 
    RuleTypeList = 118, RuleTypeType = 119, RulePrimitiveType = 120, RuleTypeArguments = 121, 
    RuleSuperSuffix = 122, RuleExplicitGenericInvocationSuffix = 123, RuleArguments = 124
  };

  explicit myParser(antlr4::TokenStream *input);

  myParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~myParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CompilationUnitContext;
  class PackageDeclarationContext;
  class ImportDeclarationContext;
  class TypeDeclarationContext;
  class ModifierContext;
  class ClassOrInterfaceModifierContext;
  class VariableModifierContext;
  class ClassDeclarationContext;
  class TypeParametersContext;
  class TypeParameterContext;
  class TypeBoundContext;
  class EnumDeclarationContext;
  class EnumConstantsContext;
  class EnumConstantContext;
  class EnumBodyDeclarationsContext;
  class InterfaceDeclarationContext;
  class ClassBodyContext;
  class InterfaceBodyContext;
  class ClassBodyDeclarationContext;
  class MemberDeclarationContext;
  class MethodDeclarationContext;
  class MethodBodyContext;
  class TypeTypeOrVoidContext;
  class GenericMethodDeclarationContext;
  class GenericConstructorDeclarationContext;
  class ConstructorDeclarationContext;
  class FieldDeclarationContext;
  class InterfaceBodyDeclarationContext;
  class InterfaceMemberDeclarationContext;
  class ConstDeclarationContext;
  class ConstantDeclaratorContext;
  class InterfaceMethodDeclarationContext;
  class InterfaceMethodModifierContext;
  class GenericInterfaceMethodDeclarationContext;
  class InterfaceCommonBodyDeclarationContext;
  class VariableDeclaratorsContext;
  class VariableDeclaratorContext;
  class VariableDeclaratorIdContext;
  class VariableInitializerContext;
  class ArrayInitializerContext;
  class ClassOrInterfaceTypeContext;
  class TypeArgumentContext;
  class QualifiedNameListContext;
  class FormalParametersContext;
  class ReceiverParameterContext;
  class FormalParameterListContext;
  class FormalParameterContext;
  class LastFormalParameterContext;
  class LambdaLVTIListContext;
  class LambdaLVTIParameterContext;
  class QualifiedNameContext;
  class LiteralContext;
  class IntegerLiteralContext;
  class FloatLiteralContext;
  class AltAnnotationQualifiedNameContext;
  class AnnotationContext;
  class ElementValuePairsContext;
  class ElementValuePairContext;
  class ElementValueContext;
  class ElementValueArrayInitializerContext;
  class AnnotationTypeDeclarationContext;
  class AnnotationTypeBodyContext;
  class AnnotationTypeElementDeclarationContext;
  class AnnotationTypeElementRestContext;
  class AnnotationMethodOrConstantRestContext;
  class AnnotationMethodRestContext;
  class AnnotationConstantRestContext;
  class DefaultValueContext;
  class ModuleDeclarationContext;
  class ModuleBodyContext;
  class ModuleDirectiveContext;
  class RequiresModifierContext;
  class RecordDeclarationContext;
  class RecordHeaderContext;
  class RecordComponentListContext;
  class RecordComponentContext;
  class RecordBodyContext;
  class BlockContext;
  class BlockStatementContext;
  class LocalVariableDeclarationContext;
  class IdentifierContext;
  class TypeIdentifierContext;
  class LocalTypeDeclarationContext;
  class StatementContext;
  class CatchClauseContext;
  class CatchTypeContext;
  class FinallyBlockContext;
  class ResourceSpecificationContext;
  class ResourcesContext;
  class ResourceContext;
  class SwitchBlockStatementGroupContext;
  class SwitchLabelContext;
  class ForControlContext;
  class ForInitContext;
  class EnhancedForControlContext;
  class ParExpressionContext;
  class ExpressionListContext;
  class MethodCallContext;
  class ExpressionContext;
  class PatternContext;
  class LambdaExpressionContext;
  class LambdaParametersContext;
  class LambdaBodyContext;
  class PrimaryContext;
  class SwitchExpressionContext;
  class SwitchLabeledRuleContext;
  class GuardedPatternContext;
  class SwitchRuleOutcomeContext;
  class ClassTypeContext;
  class CreatorContext;
  class CreatedNameContext;
  class InnerCreatorContext;
  class ArrayCreatorRestContext;
  class ClassCreatorRestContext;
  class ExplicitGenericInvocationContext;
  class TypeArgumentsOrDiamondContext;
  class NonWildcardTypeArgumentsOrDiamondContext;
  class NonWildcardTypeArgumentsContext;
  class TypeListContext;
  class TypeTypeContext;
  class PrimitiveTypeContext;
  class TypeArgumentsContext;
  class SuperSuffixContext;
  class ExplicitGenericInvocationSuffixContext;
  class ArgumentsContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageDeclarationContext *packageDeclaration();
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);
    std::vector<TypeDeclarationContext *> typeDeclaration();
    TypeDeclarationContext* typeDeclaration(size_t i);
    ModuleDeclarationContext *moduleDeclaration();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  PackageDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PackageDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageDeclarationContext* packageDeclaration();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MUL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  TypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    EnumDeclarationContext *enumDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    AnnotationTypeDeclarationContext *annotationTypeDeclaration();
    RecordDeclarationContext *recordDeclaration();
    std::vector<ClassOrInterfaceModifierContext *> classOrInterfaceModifier();
    ClassOrInterfaceModifierContext* classOrInterfaceModifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDeclarationContext* typeDeclaration();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrInterfaceModifierContext *classOrInterfaceModifier();
    antlr4::tree::TerminalNode *NATIVE();
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *TRANSIENT();
    antlr4::tree::TerminalNode *VOLATILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  ClassOrInterfaceModifierContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *STRICTFP();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *NON_SEALED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassOrInterfaceModifierContext* classOrInterfaceModifier();

  class  VariableModifierContext : public antlr4::ParserRuleContext {
  public:
    VariableModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    AnnotationContext *annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableModifierContext* variableModifier();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    IdentifierContext *identifier();
    ClassBodyContext *classBody();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *EXTENDS();
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    std::vector<TypeListContext *> typeList();
    TypeListContext* typeList(size_t i);
    antlr4::tree::TerminalNode *PERMITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    antlr4::tree::TerminalNode *GT();
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
    IdentifierContext *identifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *EXTENDS();
    TypeBoundContext *typeBound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeBoundContext : public antlr4::ParserRuleContext {
  public:
    TypeBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeTypeContext *> typeType();
    TypeTypeContext* typeType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BITAND();
    antlr4::tree::TerminalNode* BITAND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeBoundContext* typeBound();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    TypeListContext *typeList();
    EnumConstantsContext *enumConstants();
    antlr4::tree::TerminalNode *COMMA();
    EnumBodyDeclarationsContext *enumBodyDeclarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  EnumConstantsContext : public antlr4::ParserRuleContext {
  public:
    EnumConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumConstantContext *> enumConstant();
    EnumConstantContext* enumConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumConstantsContext* enumConstants();

  class  EnumConstantContext : public antlr4::ParserRuleContext {
  public:
    EnumConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    ArgumentsContext *arguments();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumConstantContext* enumConstant();

  class  EnumBodyDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    std::vector<ClassBodyDeclarationContext *> classBodyDeclaration();
    ClassBodyDeclarationContext* classBodyDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumBodyDeclarationsContext* enumBodyDeclarations();

  class  InterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    IdentifierContext *identifier();
    InterfaceBodyContext *interfaceBody();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<TypeListContext *> typeList();
    TypeListContext* typeList(size_t i);
    antlr4::tree::TerminalNode *PERMITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDeclarationContext* interfaceDeclaration();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ClassBodyDeclarationContext *> classBodyDeclaration();
    ClassBodyDeclarationContext* classBodyDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyContext* classBody();

  class  InterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<InterfaceBodyDeclarationContext *> interfaceBodyDeclaration();
    InterfaceBodyDeclarationContext* interfaceBodyDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBodyContext* interfaceBody();

  class  ClassBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    BlockContext *block();
    antlr4::tree::TerminalNode *STATIC();
    MemberDeclarationContext *memberDeclaration();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyDeclarationContext* classBodyDeclaration();

  class  MemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RecordDeclarationContext *recordDeclaration();
    MethodDeclarationContext *methodDeclaration();
    GenericMethodDeclarationContext *genericMethodDeclaration();
    FieldDeclarationContext *fieldDeclaration();
    ConstructorDeclarationContext *constructorDeclaration();
    GenericConstructorDeclarationContext *genericConstructorDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    AnnotationTypeDeclarationContext *annotationTypeDeclaration();
    ClassDeclarationContext *classDeclaration();
    EnumDeclarationContext *enumDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberDeclarationContext* memberDeclaration();

  class  MethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeOrVoidContext *typeTypeOrVoid();
    IdentifierContext *identifier();
    FormalParametersContext *formalParameters();
    MethodBodyContext *methodBody();
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    antlr4::tree::TerminalNode *THROWS();
    QualifiedNameListContext *qualifiedNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodDeclarationContext* methodDeclaration();

  class  MethodBodyContext : public antlr4::ParserRuleContext {
  public:
    MethodBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodBodyContext* methodBody();

  class  TypeTypeOrVoidContext : public antlr4::ParserRuleContext {
  public:
    TypeTypeOrVoidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTypeOrVoidContext* typeTypeOrVoid();

  class  GenericMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GenericMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParametersContext *typeParameters();
    MethodDeclarationContext *methodDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericMethodDeclarationContext* genericMethodDeclaration();

  class  GenericConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GenericConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParametersContext *typeParameters();
    ConstructorDeclarationContext *constructorDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericConstructorDeclarationContext* genericConstructorDeclaration();

  class  ConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    myParser::BlockContext *constructorBody = nullptr;
    ConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FormalParametersContext *formalParameters();
    BlockContext *block();
    antlr4::tree::TerminalNode *THROWS();
    QualifiedNameListContext *qualifiedNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorDeclarationContext* constructorDeclaration();

  class  FieldDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    VariableDeclaratorsContext *variableDeclarators();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldDeclarationContext* fieldDeclaration();

  class  InterfaceBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceMemberDeclarationContext *interfaceMemberDeclaration();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBodyDeclarationContext* interfaceBodyDeclaration();

  class  InterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclarationContext *constDeclaration();
    InterfaceMethodDeclarationContext *interfaceMethodDeclaration();
    GenericInterfaceMethodDeclarationContext *genericInterfaceMethodDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    AnnotationTypeDeclarationContext *annotationTypeDeclaration();
    ClassDeclarationContext *classDeclaration();
    EnumDeclarationContext *enumDeclaration();
    RecordDeclarationContext *recordDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMemberDeclarationContext* interfaceMemberDeclaration();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    std::vector<ConstantDeclaratorContext *> constantDeclarator();
    ConstantDeclaratorContext* constantDeclarator(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstDeclarationContext* constDeclaration();

  class  ConstantDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    VariableInitializerContext *variableInitializer();
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantDeclaratorContext* constantDeclarator();

  class  InterfaceMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceCommonBodyDeclarationContext *interfaceCommonBodyDeclaration();
    std::vector<InterfaceMethodModifierContext *> interfaceMethodModifier();
    InterfaceMethodModifierContext* interfaceMethodModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMethodDeclarationContext* interfaceMethodDeclaration();

  class  InterfaceMethodModifierContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMethodModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STRICTFP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMethodModifierContext* interfaceMethodModifier();

  class  GenericInterfaceMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GenericInterfaceMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParametersContext *typeParameters();
    InterfaceCommonBodyDeclarationContext *interfaceCommonBodyDeclaration();
    std::vector<InterfaceMethodModifierContext *> interfaceMethodModifier();
    InterfaceMethodModifierContext* interfaceMethodModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericInterfaceMethodDeclarationContext* genericInterfaceMethodDeclaration();

  class  InterfaceCommonBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceCommonBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeOrVoidContext *typeTypeOrVoid();
    IdentifierContext *identifier();
    FormalParametersContext *formalParameters();
    MethodBodyContext *methodBody();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    antlr4::tree::TerminalNode *THROWS();
    QualifiedNameListContext *qualifiedNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceCommonBodyDeclarationContext* interfaceCommonBodyDeclaration();

  class  VariableDeclaratorsContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclaratorContext *> variableDeclarator();
    VariableDeclaratorContext* variableDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclaratorsContext* variableDeclarators();

  class  VariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclaratorIdContext *variableDeclaratorId();
    antlr4::tree::TerminalNode *ASSIGN();
    VariableInitializerContext *variableInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclaratorContext* variableDeclarator();

  class  VariableDeclaratorIdContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclaratorIdContext* variableDeclaratorId();

  class  VariableInitializerContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayInitializerContext *arrayInitializer();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableInitializerContext* variableInitializer();

  class  ArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<VariableInitializerContext *> variableInitializer();
    VariableInitializerContext* variableInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayInitializerContext* arrayInitializer();

  class  ClassOrInterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<TypeArgumentsContext *> typeArguments();
    TypeArgumentsContext* typeArguments(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassOrInterfaceTypeContext* classOrInterfaceType();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *QUESTION();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *EXTENDS();
    antlr4::tree::TerminalNode *SUPER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  QualifiedNameListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedNameListContext* qualifiedNameList();

  class  FormalParametersContext : public antlr4::ParserRuleContext {
  public:
    FormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ReceiverParameterContext *receiverParameter();
    antlr4::tree::TerminalNode *COMMA();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParametersContext* formalParameters();

  class  ReceiverParameterContext : public antlr4::ParserRuleContext {
  public:
    ReceiverParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *THIS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReceiverParameterContext* receiverParameter();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterContext *> formalParameter();
    FormalParameterContext* formalParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    LastFormalParameterContext *lastFormalParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    VariableDeclaratorIdContext *variableDeclaratorId();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterContext* formalParameter();

  class  LastFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    LastFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *ELLIPSIS();
    VariableDeclaratorIdContext *variableDeclaratorId();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LastFormalParameterContext* lastFormalParameter();

  class  LambdaLVTIListContext : public antlr4::ParserRuleContext {
  public:
    LambdaLVTIListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LambdaLVTIParameterContext *> lambdaLVTIParameter();
    LambdaLVTIParameterContext* lambdaLVTIParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaLVTIListContext* lambdaLVTIList();

  class  LambdaLVTIParameterContext : public antlr4::ParserRuleContext {
  public:
    LambdaLVTIParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    IdentifierContext *identifier();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaLVTIParameterContext* lambdaLVTIParameter();

  class  QualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedNameContext* qualifiedName();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerLiteralContext *integerLiteral();
    FloatLiteralContext *floatLiteral();
    antlr4::tree::TerminalNode *CHAR_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BOOL_LITERAL();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *TEXT_BLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *OCT_LITERAL();
    antlr4::tree::TerminalNode *BINARY_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *HEX_FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  AltAnnotationQualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    AltAnnotationQualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AltAnnotationQualifiedNameContext* altAnnotationQualifiedName();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    QualifiedNameContext *qualifiedName();
    AltAnnotationQualifiedNameContext *altAnnotationQualifiedName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ElementValuePairsContext *elementValuePairs();
    ElementValueContext *elementValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  ElementValuePairsContext : public antlr4::ParserRuleContext {
  public:
    ElementValuePairsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementValuePairContext *> elementValuePair();
    ElementValuePairContext* elementValuePair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementValuePairsContext* elementValuePairs();

  class  ElementValuePairContext : public antlr4::ParserRuleContext {
  public:
    ElementValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    ElementValueContext *elementValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementValuePairContext* elementValuePair();

  class  ElementValueContext : public antlr4::ParserRuleContext {
  public:
    ElementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AnnotationContext *annotation();
    ElementValueArrayInitializerContext *elementValueArrayInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementValueContext* elementValue();

  class  ElementValueArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ElementValueArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ElementValueContext *> elementValue();
    ElementValueContext* elementValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementValueArrayInitializerContext* elementValueArrayInitializer();

  class  AnnotationTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *INTERFACE();
    IdentifierContext *identifier();
    AnnotationTypeBodyContext *annotationTypeBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationTypeDeclarationContext* annotationTypeDeclaration();

  class  AnnotationTypeBodyContext : public antlr4::ParserRuleContext {
  public:
    AnnotationTypeBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<AnnotationTypeElementDeclarationContext *> annotationTypeElementDeclaration();
    AnnotationTypeElementDeclarationContext* annotationTypeElementDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationTypeBodyContext* annotationTypeBody();

  class  AnnotationTypeElementDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationTypeElementDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationTypeElementRestContext *annotationTypeElementRest();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationTypeElementDeclarationContext* annotationTypeElementDeclaration();

  class  AnnotationTypeElementRestContext : public antlr4::ParserRuleContext {
  public:
    AnnotationTypeElementRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    AnnotationMethodOrConstantRestContext *annotationMethodOrConstantRest();
    antlr4::tree::TerminalNode *SEMI();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    EnumDeclarationContext *enumDeclaration();
    AnnotationTypeDeclarationContext *annotationTypeDeclaration();
    RecordDeclarationContext *recordDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationTypeElementRestContext* annotationTypeElementRest();

  class  AnnotationMethodOrConstantRestContext : public antlr4::ParserRuleContext {
  public:
    AnnotationMethodOrConstantRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationMethodRestContext *annotationMethodRest();
    AnnotationConstantRestContext *annotationConstantRest();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationMethodOrConstantRestContext* annotationMethodOrConstantRest();

  class  AnnotationMethodRestContext : public antlr4::ParserRuleContext {
  public:
    AnnotationMethodRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    DefaultValueContext *defaultValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationMethodRestContext* annotationMethodRest();

  class  AnnotationConstantRestContext : public antlr4::ParserRuleContext {
  public:
    AnnotationConstantRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclaratorsContext *variableDeclarators();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationConstantRestContext* annotationConstantRest();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    ElementValueContext *elementValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultValueContext* defaultValue();

  class  ModuleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    QualifiedNameContext *qualifiedName();
    ModuleBodyContext *moduleBody();
    antlr4::tree::TerminalNode *OPEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleDeclarationContext* moduleDeclaration();

  class  ModuleBodyContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ModuleDirectiveContext *> moduleDirective();
    ModuleDirectiveContext* moduleDirective(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleBodyContext* moduleBody();

  class  ModuleDirectiveContext : public antlr4::ParserRuleContext {
  public:
    ModuleDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<RequiresModifierContext *> requiresModifier();
    RequiresModifierContext* requiresModifier(size_t i);
    antlr4::tree::TerminalNode *EXPORTS();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *OPENS();
    antlr4::tree::TerminalNode *USES();
    antlr4::tree::TerminalNode *PROVIDES();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleDirectiveContext* moduleDirective();

  class  RequiresModifierContext : public antlr4::ParserRuleContext {
  public:
    RequiresModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSITIVE();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequiresModifierContext* requiresModifier();

  class  RecordDeclarationContext : public antlr4::ParserRuleContext {
  public:
    RecordDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECORD();
    IdentifierContext *identifier();
    RecordHeaderContext *recordHeader();
    RecordBodyContext *recordBody();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    TypeListContext *typeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecordDeclarationContext* recordDeclaration();

  class  RecordHeaderContext : public antlr4::ParserRuleContext {
  public:
    RecordHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    RecordComponentListContext *recordComponentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecordHeaderContext* recordHeader();

  class  RecordComponentListContext : public antlr4::ParserRuleContext {
  public:
    RecordComponentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RecordComponentContext *> recordComponent();
    RecordComponentContext* recordComponent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecordComponentListContext* recordComponentList();

  class  RecordComponentContext : public antlr4::ParserRuleContext {
  public:
    RecordComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecordComponentContext* recordComponent();

  class  RecordBodyContext : public antlr4::ParserRuleContext {
  public:
    RecordBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ClassBodyDeclarationContext *> classBodyDeclaration();
    ClassBodyDeclarationContext* classBodyDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecordBodyContext* recordBody();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();
    antlr4::tree::TerminalNode *SEMI();
    LocalTypeDeclarationContext *localTypeDeclaration();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockStatementContext* blockStatement();

  class  LocalVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    TypeTypeContext *typeType();
    VariableDeclaratorsContext *variableDeclarators();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalVariableDeclarationContext* localVariableDeclaration();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *REQUIRES();
    antlr4::tree::TerminalNode *EXPORTS();
    antlr4::tree::TerminalNode *OPENS();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *USES();
    antlr4::tree::TerminalNode *PROVIDES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TRANSITIVE();
    antlr4::tree::TerminalNode *YIELD();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *PERMITS();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *REQUIRES();
    antlr4::tree::TerminalNode *EXPORTS();
    antlr4::tree::TerminalNode *OPENS();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *USES();
    antlr4::tree::TerminalNode *PROVIDES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TRANSITIVE();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *PERMITS();
    antlr4::tree::TerminalNode *RECORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  LocalTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    RecordDeclarationContext *recordDeclaration();
    std::vector<ClassOrInterfaceModifierContext *> classOrInterfaceModifier();
    ClassOrInterfaceModifierContext* classOrInterfaceModifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalTypeDeclarationContext* localTypeDeclaration();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    myParser::BlockContext *blockLabel = nullptr;
    myParser::ExpressionContext *statementExpression = nullptr;
    myParser::IdentifierContext *identifierLabel = nullptr;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *ASSERT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *IF();
    ParExpressionContext *parExpression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    ForControlContext *forControl();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *TRY();
    FinallyBlockContext *finallyBlock();
    std::vector<CatchClauseContext *> catchClause();
    CatchClauseContext* catchClause(size_t i);
    ResourceSpecificationContext *resourceSpecification();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<SwitchBlockStatementGroupContext *> switchBlockStatementGroup();
    SwitchBlockStatementGroupContext* switchBlockStatementGroup(size_t i);
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *BREAK();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *YIELD();
    SwitchExpressionContext *switchExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  CatchClauseContext : public antlr4::ParserRuleContext {
  public:
    CatchClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *LPAREN();
    CatchTypeContext *catchType();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchClauseContext* catchClause();

  class  CatchTypeContext : public antlr4::ParserRuleContext {
  public:
    CatchTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BITOR();
    antlr4::tree::TerminalNode* BITOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchTypeContext* catchType();

  class  FinallyBlockContext : public antlr4::ParserRuleContext {
  public:
    FinallyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyBlockContext* finallyBlock();

  class  ResourceSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ResourceSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ResourcesContext *resources();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResourceSpecificationContext* resourceSpecification();

  class  ResourcesContext : public antlr4::ParserRuleContext {
  public:
    ResourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ResourceContext *> resource();
    ResourceContext* resource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResourcesContext* resources();

  class  ResourceContext : public antlr4::ParserRuleContext {
  public:
    ResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    ClassOrInterfaceTypeContext *classOrInterfaceType();
    VariableDeclaratorIdContext *variableDeclaratorId();
    antlr4::tree::TerminalNode *VAR();
    IdentifierContext *identifier();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResourceContext* resource();

  class  SwitchBlockStatementGroupContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockStatementGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchBlockStatementGroupContext* switchBlockStatementGroup();

  class  SwitchLabelContext : public antlr4::ParserRuleContext {
  public:
    myParser::ExpressionContext *constantExpression = nullptr;
    antlr4::Token *enumConstantName = nullptr;
    myParser::IdentifierContext *varName = nullptr;
    SwitchLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *COLON();
    TypeTypeContext *typeType();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IDENTIFIER();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchLabelContext* switchLabel();

  class  ForControlContext : public antlr4::ParserRuleContext {
  public:
    myParser::ExpressionListContext *forUpdate = nullptr;
    ForControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnhancedForControlContext *enhancedForControl();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    ForInitContext *forInit();
    ExpressionContext *expression();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForControlContext* forControl();

  class  ForInitContext : public antlr4::ParserRuleContext {
  public:
    ForInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInitContext* forInit();

  class  EnhancedForControlContext : public antlr4::ParserRuleContext {
  public:
    EnhancedForControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclaratorIdContext *variableDeclaratorId();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();
    TypeTypeContext *typeType();
    antlr4::tree::TerminalNode *VAR();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnhancedForControlContext* enhancedForControl();

  class  ParExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParExpressionContext* parExpression();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListContext* expressionList();

  class  MethodCallContext : public antlr4::ParserRuleContext {
  public:
    MethodCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *SUPER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodCallContext* methodCall();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *prefix = nullptr;
    antlr4::Token *bop = nullptr;
    antlr4::Token *postfix = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    MethodCallContext *methodCall();
    antlr4::tree::TerminalNode *NEW();
    CreatorContext *creator();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<TypeTypeContext *> typeType();
    TypeTypeContext* typeType(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BITAND();
    antlr4::tree::TerminalNode* BITAND(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *BANG();
    LambdaExpressionContext *lambdaExpression();
    SwitchExpressionContext *switchExpression();
    antlr4::tree::TerminalNode *COLONCOLON();
    IdentifierContext *identifier();
    TypeArgumentsContext *typeArguments();
    ClassTypeContext *classType();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *BITOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *RSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *URSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *LSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *THIS();
    InnerCreatorContext *innerCreator();
    antlr4::tree::TerminalNode *SUPER();
    SuperSuffixContext *superSuffix();
    ExplicitGenericInvocationContext *explicitGenericInvocation();
    NonWildcardTypeArgumentsContext *nonWildcardTypeArguments();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *INSTANCEOF();
    PatternContext *pattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeTypeContext *typeType();
    IdentifierContext *identifier();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternContext* pattern();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaParametersContext *lambdaParameters();
    antlr4::tree::TerminalNode *ARROW();
    LambdaBodyContext *lambdaBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FormalParameterListContext *formalParameterList();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    LambdaLVTIListContext *lambdaLVTIList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParametersContext* lambdaParameters();

  class  LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *SUPER();
    LiteralContext *literal();
    IdentifierContext *identifier();
    TypeTypeOrVoidContext *typeTypeOrVoid();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *CLASS();
    NonWildcardTypeArgumentsContext *nonWildcardTypeArguments();
    ExplicitGenericInvocationSuffixContext *explicitGenericInvocationSuffix();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  SwitchExpressionContext : public antlr4::ParserRuleContext {
  public:
    SwitchExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    ParExpressionContext *parExpression();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<SwitchLabeledRuleContext *> switchLabeledRule();
    SwitchLabeledRuleContext* switchLabeledRule(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchExpressionContext* switchExpression();

  class  SwitchLabeledRuleContext : public antlr4::ParserRuleContext {
  public:
    SwitchLabeledRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    SwitchRuleOutcomeContext *switchRuleOutcome();
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *COLON();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    GuardedPatternContext *guardedPattern();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchLabeledRuleContext* switchLabeledRule();

  class  GuardedPatternContext : public antlr4::ParserRuleContext {
  public:
    GuardedPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    GuardedPatternContext *guardedPattern();
    antlr4::tree::TerminalNode *RPAREN();
    TypeTypeContext *typeType();
    IdentifierContext *identifier();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardedPatternContext* guardedPattern();
  GuardedPatternContext* guardedPattern(int precedence);
  class  SwitchRuleOutcomeContext : public antlr4::ParserRuleContext {
  public:
    SwitchRuleOutcomeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchRuleOutcomeContext* switchRuleOutcome();

  class  ClassTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ClassOrInterfaceTypeContext *classOrInterfaceType();
    antlr4::tree::TerminalNode *DOT();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TypeArgumentsContext *typeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassTypeContext* classType();

  class  CreatorContext : public antlr4::ParserRuleContext {
  public:
    CreatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonWildcardTypeArgumentsContext *nonWildcardTypeArguments();
    CreatedNameContext *createdName();
    ClassCreatorRestContext *classCreatorRest();
    ArrayCreatorRestContext *arrayCreatorRest();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreatorContext* creator();

  class  CreatedNameContext : public antlr4::ParserRuleContext {
  public:
    CreatedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<TypeArgumentsOrDiamondContext *> typeArgumentsOrDiamond();
    TypeArgumentsOrDiamondContext* typeArgumentsOrDiamond(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    PrimitiveTypeContext *primitiveType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreatedNameContext* createdName();

  class  InnerCreatorContext : public antlr4::ParserRuleContext {
  public:
    InnerCreatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ClassCreatorRestContext *classCreatorRest();
    NonWildcardTypeArgumentsOrDiamondContext *nonWildcardTypeArgumentsOrDiamond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InnerCreatorContext* innerCreator();

  class  ArrayCreatorRestContext : public antlr4::ParserRuleContext {
  public:
    ArrayCreatorRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    ArrayInitializerContext *arrayInitializer();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayCreatorRestContext* arrayCreatorRest();

  class  ClassCreatorRestContext : public antlr4::ParserRuleContext {
  public:
    ClassCreatorRestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentsContext *arguments();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassCreatorRestContext* classCreatorRest();

  class  ExplicitGenericInvocationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitGenericInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonWildcardTypeArgumentsContext *nonWildcardTypeArguments();
    ExplicitGenericInvocationSuffixContext *explicitGenericInvocationSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitGenericInvocationContext* explicitGenericInvocation();

  class  TypeArgumentsOrDiamondContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsOrDiamondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    TypeArgumentsContext *typeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsOrDiamondContext* typeArgumentsOrDiamond();

  class  NonWildcardTypeArgumentsOrDiamondContext : public antlr4::ParserRuleContext {
  public:
    NonWildcardTypeArgumentsOrDiamondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    NonWildcardTypeArgumentsContext *nonWildcardTypeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NonWildcardTypeArgumentsOrDiamondContext* nonWildcardTypeArgumentsOrDiamond();

  class  NonWildcardTypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    NonWildcardTypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    TypeListContext *typeList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NonWildcardTypeArgumentsContext* nonWildcardTypeArguments();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeTypeContext *> typeType();
    TypeTypeContext* typeType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeListContext* typeList();

  class  TypeTypeContext : public antlr4::ParserRuleContext {
  public:
    TypeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrInterfaceTypeContext *classOrInterfaceType();
    PrimitiveTypeContext *primitiveType();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTypeContext* typeType();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  SuperSuffixContext : public antlr4::ParserRuleContext {
  public:
    SuperSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    TypeArgumentsContext *typeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SuperSuffixContext* superSuffix();

  class  ExplicitGenericInvocationSuffixContext : public antlr4::ParserRuleContext {
  public:
    ExplicitGenericInvocationSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();
    SuperSuffixContext *superSuffix();
    IdentifierContext *identifier();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitGenericInvocationSuffixContext* explicitGenericInvocationSuffix();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool guardedPatternSempred(GuardedPatternContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

