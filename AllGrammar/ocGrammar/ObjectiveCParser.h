
// Generated from ObjectiveCParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  ObjectiveCParser : public antlr4::Parser {
public:
  enum {
    AUTO = 1, BREAK = 2, CASE = 3, CHAR = 4, CONST = 5, CONTINUE = 6, DEFAULT = 7, 
    DO = 8, DOUBLE = 9, ELSE = 10, ENUM = 11, EXTERN = 12, FLOAT = 13, FOR = 14, 
    GOTO = 15, IF = 16, INLINE = 17, INT = 18, LONG = 19, REGISTER = 20, 
    RESTRICT = 21, RETURN = 22, SHORT = 23, SIGNED = 24, SIZEOF = 25, STATIC = 26, 
    STRUCT = 27, SWITCH = 28, TYPEDEF = 29, UNION = 30, UNSIGNED = 31, VOID = 32, 
    VOLATILE = 33, WHILE = 34, BOOL_ = 35, COMPLEX = 36, IMAGINERY = 37, 
    TRUE = 38, FALSE = 39, BOOL = 40, Class = 41, BYCOPY = 42, BYREF = 43, 
    ID = 44, IMP = 45, IN = 46, INOUT = 47, NIL = 48, NO = 49, NULL_ = 50, 
    ONEWAY = 51, OUT = 52, PROTOCOL_ = 53, SEL = 54, SELF = 55, SUPER = 56, 
    YES = 57, AUTORELEASEPOOL = 58, CATCH = 59, CLASS = 60, DYNAMIC = 61, 
    ENCODE = 62, END = 63, FINALLY = 64, IMPLEMENTATION = 65, INTERFACE = 66, 
    IMPORT = 67, PACKAGE = 68, PROTOCOL = 69, OPTIONAL = 70, PRIVATE = 71, 
    PROPERTY = 72, PROTECTED = 73, PUBLIC = 74, REQUIRED = 75, SELECTOR = 76, 
    SYNCHRONIZED = 77, SYNTHESIZE = 78, THROW = 79, TRY = 80, ATOMIC = 81, 
    NONATOMIC = 82, RETAIN = 83, ATTRIBUTE = 84, AUTORELEASING_QUALIFIER = 85, 
    BLOCK = 86, BRIDGE = 87, BRIDGE_RETAINED = 88, BRIDGE_TRANSFER = 89, 
    COVARIANT = 90, CONTRAVARIANT = 91, DEPRECATED = 92, KINDOF = 93, STRONG_QUALIFIER = 94, 
    TYPEOF = 95, UNSAFE_UNRETAINED_QUALIFIER = 96, UNUSED = 97, WEAK_QUALIFIER = 98, 
    NULL_UNSPECIFIED = 99, NULLABLE = 100, NONNULL = 101, NULL_RESETTABLE = 102, 
    NS_INLINE = 103, NS_ENUM = 104, NS_OPTIONS = 105, ASSIGN = 106, COPY = 107, 
    GETTER = 108, SETTER = 109, STRONG = 110, READONLY = 111, READWRITE = 112, 
    WEAK = 113, UNSAFE_UNRETAINED = 114, IB_OUTLET = 115, IB_OUTLET_COLLECTION = 116, 
    IB_INSPECTABLE = 117, IB_DESIGNABLE = 118, NS_ASSUME_NONNULL_BEGIN = 119, 
    NS_ASSUME_NONNULL_END = 120, EXTERN_SUFFIX = 121, IOS_SUFFIX = 122, 
    MAC_SUFFIX = 123, TVOS_PROHIBITED = 124, IDENTIFIER = 125, LP = 126, 
    RP = 127, LBRACE = 128, RBRACE = 129, LBRACK = 130, RBRACK = 131, SEMI = 132, 
    COMMA = 133, DOT = 134, STRUCTACCESS = 135, AT = 136, ASSIGNMENT = 137, 
    GT = 138, LT = 139, BANG = 140, TILDE = 141, QUESTION = 142, COLON = 143, 
    EQUAL = 144, LE = 145, GE = 146, NOTEQUAL = 147, AND = 148, OR = 149, 
    INC = 150, DEC = 151, ADD = 152, SUB = 153, MUL = 154, DIV = 155, BITAND = 156, 
    BITOR = 157, BITXOR = 158, MOD = 159, ADD_ASSIGN = 160, SUB_ASSIGN = 161, 
    MUL_ASSIGN = 162, DIV_ASSIGN = 163, AND_ASSIGN = 164, OR_ASSIGN = 165, 
    XOR_ASSIGN = 166, MOD_ASSIGN = 167, LSHIFT_ASSIGN = 168, RSHIFT_ASSIGN = 169, 
    ELIPSIS = 170, CHARACTER_LITERAL = 171, STRING_START = 172, HEX_LITERAL = 173, 
    OCTAL_LITERAL = 174, BINARY_LITERAL = 175, DECIMAL_LITERAL = 176, FLOATING_POINT_LITERAL = 177, 
    WS = 178, MULTI_COMMENT = 179, SINGLE_COMMENT = 180, BACKSLASH = 181, 
    SHARP = 182, STRING_NEWLINE = 183, STRING_END = 184, STRING_VALUE = 185, 
    DIRECTIVE_IMPORT = 186, DIRECTIVE_INCLUDE = 187, DIRECTIVE_PRAGMA = 188, 
    DIRECTIVE_DEFINE = 189, DIRECTIVE_DEFINED = 190, DIRECTIVE_IF = 191, 
    DIRECTIVE_ELIF = 192, DIRECTIVE_ELSE = 193, DIRECTIVE_UNDEF = 194, DIRECTIVE_IFDEF = 195, 
    DIRECTIVE_IFNDEF = 196, DIRECTIVE_ENDIF = 197, DIRECTIVE_TRUE = 198, 
    DIRECTIVE_FALSE = 199, DIRECTIVE_ERROR = 200, DIRECTIVE_WARNING = 201, 
    DIRECTIVE_BANG = 202, DIRECTIVE_LP = 203, DIRECTIVE_RP = 204, DIRECTIVE_EQUAL = 205, 
    DIRECTIVE_NOTEQUAL = 206, DIRECTIVE_AND = 207, DIRECTIVE_OR = 208, DIRECTIVE_LT = 209, 
    DIRECTIVE_GT = 210, DIRECTIVE_LE = 211, DIRECTIVE_GE = 212, DIRECTIVE_STRING = 213, 
    DIRECTIVE_ID = 214, DIRECTIVE_DECIMAL_LITERAL = 215, DIRECTIVE_FLOAT = 216, 
    DIRECTIVE_NEWLINE = 217, DIRECTIVE_MULTI_COMMENT = 218, DIRECTIVE_SINGLE_COMMENT = 219, 
    DIRECTIVE_BACKSLASH_NEWLINE = 220, DIRECTIVE_TEXT_NEWLINE = 221, DIRECTIVE_TEXT = 222
  };

  enum {
    RuleTranslationUnit = 0, RuleTopLevelDeclaration = 1, RuleImportDeclaration = 2, 
    RuleClassInterface = 3, RuleCategoryInterface = 4, RuleClassImplementation = 5, 
    RuleCategoryImplementation = 6, RuleGenericTypeSpecifier = 7, RuleProtocolDeclaration = 8, 
    RuleProtocolDeclarationSection = 9, RuleProtocolDeclarationList = 10, 
    RuleClassDeclarationList = 11, RuleProtocolList = 12, RulePropertyDeclaration = 13, 
    RulePropertyAttributesList = 14, RulePropertyAttribute = 15, RuleProtocolName = 16, 
    RuleInstanceVariables = 17, RuleVisibilitySection = 18, RuleAccessModifier = 19, 
    RuleInterfaceDeclarationList = 20, RuleClassMethodDeclaration = 21, 
    RuleInstanceMethodDeclaration = 22, RuleMethodDeclaration = 23, RuleImplementationDefinitionList = 24, 
    RuleClassMethodDefinition = 25, RuleInstanceMethodDefinition = 26, RuleMethodDefinition = 27, 
    RuleMethodSelector = 28, RuleKeywordDeclarator = 29, RuleSelector = 30, 
    RuleMethodType = 31, RulePropertyImplementation = 32, RulePropertySynthesizeList = 33, 
    RulePropertySynthesizeItem = 34, RuleBlockType = 35, RuleGenericsSpecifier = 36, 
    RuleTypeSpecifierWithPrefixes = 37, RuleDictionaryExpression = 38, RuleDictionaryPair = 39, 
    RuleArrayExpression = 40, RuleBoxExpression = 41, RuleBlockParameters = 42, 
    RuleTypeVariableDeclaratorOrName = 43, RuleBlockExpression = 44, RuleMessageExpression = 45, 
    RuleReceiver = 46, RuleMessageSelector = 47, RuleKeywordArgument = 48, 
    RuleKeywordArgumentType = 49, RuleSelectorExpression = 50, RuleSelectorName = 51, 
    RuleProtocolExpression = 52, RuleEncodeExpression = 53, RuleTypeVariableDeclarator = 54, 
    RuleThrowStatement = 55, RuleTryBlock = 56, RuleCatchStatement = 57, 
    RuleSynchronizedStatement = 58, RuleAutoreleaseStatement = 59, RuleFunctionDeclaration = 60, 
    RuleFunctionDefinition = 61, RuleFunctionSignature = 62, RuleAttribute = 63, 
    RuleAttributeName = 64, RuleAttributeParameters = 65, RuleAttributeParameterList = 66, 
    RuleAttributeParameter = 67, RuleAttributeParameterAssignment = 68, 
    RuleDeclaration = 69, RuleFunctionCallExpression = 70, RuleEnumDeclaration = 71, 
    RuleVarDeclaration = 72, RuleTypedefDeclaration = 73, RuleTypeDeclaratorList = 74, 
    RuleTypeDeclarator = 75, RuleDeclarationSpecifiers = 76, RuleAttributeSpecifier = 77, 
    RuleInitDeclaratorList = 78, RuleInitDeclarator = 79, RuleStructOrUnionSpecifier = 80, 
    RuleFieldDeclaration = 81, RuleSpecifierQualifierList = 82, RuleIbOutletQualifier = 83, 
    RuleArcBehaviourSpecifier = 84, RuleNullabilitySpecifier = 85, RuleStorageClassSpecifier = 86, 
    RuleTypePrefix = 87, RuleTypeQualifier = 88, RuleProtocolQualifier = 89, 
    RuleTypeSpecifier = 90, RuleTypeofExpression = 91, RuleFieldDeclaratorList = 92, 
    RuleFieldDeclarator = 93, RuleEnumSpecifier = 94, RuleEnumeratorList = 95, 
    RuleEnumerator = 96, RuleEnumeratorIdentifier = 97, RuleDirectDeclarator = 98, 
    RuleDeclaratorSuffix = 99, RuleParameterList = 100, RulePointer = 101, 
    RuleMacro = 102, RuleArrayInitializer = 103, RuleStructInitializer = 104, 
    RuleInitializerList = 105, RuleTypeName = 106, RuleAbstractDeclarator = 107, 
    RuleAbstractDeclaratorSuffix = 108, RuleParameterDeclarationList = 109, 
    RuleParameterDeclaration = 110, RuleDeclarator = 111, RuleStatement = 112, 
    RuleLabeledStatement = 113, RuleRangeExpression = 114, RuleCompoundStatement = 115, 
    RuleSelectionStatement = 116, RuleSwitchStatement = 117, RuleSwitchBlock = 118, 
    RuleSwitchSection = 119, RuleSwitchLabel = 120, RuleIterationStatement = 121, 
    RuleWhileStatement = 122, RuleDoStatement = 123, RuleForStatement = 124, 
    RuleForLoopInitializer = 125, RuleForInStatement = 126, RuleJumpStatement = 127, 
    RuleExpressions = 128, RuleExpression = 129, RuleAssignmentOperator = 130, 
    RuleCastExpression = 131, RuleInitializer = 132, RuleConstantExpression = 133, 
    RuleUnaryExpression = 134, RuleUnaryOperator = 135, RulePostfixExpression = 136, 
    RulePostfix = 137, RuleArgumentExpressionList = 138, RuleArgumentExpression = 139, 
    RulePrimaryExpression = 140, RuleConstant = 141, RuleStringLiteral = 142, 
    RuleIdentifier = 143
  };

  explicit ObjectiveCParser(antlr4::TokenStream *input);

  ObjectiveCParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ObjectiveCParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class TranslationUnitContext;
  class TopLevelDeclarationContext;
  class ImportDeclarationContext;
  class ClassInterfaceContext;
  class CategoryInterfaceContext;
  class ClassImplementationContext;
  class CategoryImplementationContext;
  class GenericTypeSpecifierContext;
  class ProtocolDeclarationContext;
  class ProtocolDeclarationSectionContext;
  class ProtocolDeclarationListContext;
  class ClassDeclarationListContext;
  class ProtocolListContext;
  class PropertyDeclarationContext;
  class PropertyAttributesListContext;
  class PropertyAttributeContext;
  class ProtocolNameContext;
  class InstanceVariablesContext;
  class VisibilitySectionContext;
  class AccessModifierContext;
  class InterfaceDeclarationListContext;
  class ClassMethodDeclarationContext;
  class InstanceMethodDeclarationContext;
  class MethodDeclarationContext;
  class ImplementationDefinitionListContext;
  class ClassMethodDefinitionContext;
  class InstanceMethodDefinitionContext;
  class MethodDefinitionContext;
  class MethodSelectorContext;
  class KeywordDeclaratorContext;
  class SelectorContext;
  class MethodTypeContext;
  class PropertyImplementationContext;
  class PropertySynthesizeListContext;
  class PropertySynthesizeItemContext;
  class BlockTypeContext;
  class GenericsSpecifierContext;
  class TypeSpecifierWithPrefixesContext;
  class DictionaryExpressionContext;
  class DictionaryPairContext;
  class ArrayExpressionContext;
  class BoxExpressionContext;
  class BlockParametersContext;
  class TypeVariableDeclaratorOrNameContext;
  class BlockExpressionContext;
  class MessageExpressionContext;
  class ReceiverContext;
  class MessageSelectorContext;
  class KeywordArgumentContext;
  class KeywordArgumentTypeContext;
  class SelectorExpressionContext;
  class SelectorNameContext;
  class ProtocolExpressionContext;
  class EncodeExpressionContext;
  class TypeVariableDeclaratorContext;
  class ThrowStatementContext;
  class TryBlockContext;
  class CatchStatementContext;
  class SynchronizedStatementContext;
  class AutoreleaseStatementContext;
  class FunctionDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionSignatureContext;
  class AttributeContext;
  class AttributeNameContext;
  class AttributeParametersContext;
  class AttributeParameterListContext;
  class AttributeParameterContext;
  class AttributeParameterAssignmentContext;
  class DeclarationContext;
  class FunctionCallExpressionContext;
  class EnumDeclarationContext;
  class VarDeclarationContext;
  class TypedefDeclarationContext;
  class TypeDeclaratorListContext;
  class TypeDeclaratorContext;
  class DeclarationSpecifiersContext;
  class AttributeSpecifierContext;
  class InitDeclaratorListContext;
  class InitDeclaratorContext;
  class StructOrUnionSpecifierContext;
  class FieldDeclarationContext;
  class SpecifierQualifierListContext;
  class IbOutletQualifierContext;
  class ArcBehaviourSpecifierContext;
  class NullabilitySpecifierContext;
  class StorageClassSpecifierContext;
  class TypePrefixContext;
  class TypeQualifierContext;
  class ProtocolQualifierContext;
  class TypeSpecifierContext;
  class TypeofExpressionContext;
  class FieldDeclaratorListContext;
  class FieldDeclaratorContext;
  class EnumSpecifierContext;
  class EnumeratorListContext;
  class EnumeratorContext;
  class EnumeratorIdentifierContext;
  class DirectDeclaratorContext;
  class DeclaratorSuffixContext;
  class ParameterListContext;
  class PointerContext;
  class MacroContext;
  class ArrayInitializerContext;
  class StructInitializerContext;
  class InitializerListContext;
  class TypeNameContext;
  class AbstractDeclaratorContext;
  class AbstractDeclaratorSuffixContext;
  class ParameterDeclarationListContext;
  class ParameterDeclarationContext;
  class DeclaratorContext;
  class StatementContext;
  class LabeledStatementContext;
  class RangeExpressionContext;
  class CompoundStatementContext;
  class SelectionStatementContext;
  class SwitchStatementContext;
  class SwitchBlockContext;
  class SwitchSectionContext;
  class SwitchLabelContext;
  class IterationStatementContext;
  class WhileStatementContext;
  class DoStatementContext;
  class ForStatementContext;
  class ForLoopInitializerContext;
  class ForInStatementContext;
  class JumpStatementContext;
  class ExpressionsContext;
  class ExpressionContext;
  class AssignmentOperatorContext;
  class CastExpressionContext;
  class InitializerContext;
  class ConstantExpressionContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class PostfixExpressionContext;
  class PostfixContext;
  class ArgumentExpressionListContext;
  class ArgumentExpressionContext;
  class PrimaryExpressionContext;
  class ConstantContext;
  class StringLiteralContext;
  class IdentifierContext; 

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<TopLevelDeclarationContext *> topLevelDeclaration();
    TopLevelDeclarationContext* topLevelDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TranslationUnitContext* translationUnit();

  class  TopLevelDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportDeclarationContext *importDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    DeclarationContext *declaration();
    ClassInterfaceContext *classInterface();
    ClassImplementationContext *classImplementation();
    CategoryInterfaceContext *categoryInterface();
    CategoryImplementationContext *categoryImplementation();
    ProtocolDeclarationContext *protocolDeclaration();
    ProtocolDeclarationListContext *protocolDeclarationList();
    ClassDeclarationListContext *classDeclarationList();
    FunctionDefinitionContext *functionDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelDeclarationContext* topLevelDeclaration();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  ClassInterfaceContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::GenericTypeSpecifierContext *className = nullptr;
    ObjectiveCParser::IdentifierContext *superclassName = nullptr;
    ClassInterfaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *END();
    GenericTypeSpecifierContext *genericTypeSpecifier();
    antlr4::tree::TerminalNode *IB_DESIGNABLE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LT();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *GT();
    InstanceVariablesContext *instanceVariables();
    InterfaceDeclarationListContext *interfaceDeclarationList();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassInterfaceContext* classInterface();

  class  CategoryInterfaceContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::GenericTypeSpecifierContext *categoryName = nullptr;
    ObjectiveCParser::IdentifierContext *className = nullptr;
    CategoryInterfaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *END();
    GenericTypeSpecifierContext *genericTypeSpecifier();
    antlr4::tree::TerminalNode *LT();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *GT();
    InstanceVariablesContext *instanceVariables();
    InterfaceDeclarationListContext *interfaceDeclarationList();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CategoryInterfaceContext* categoryInterface();

  class  ClassImplementationContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::GenericTypeSpecifierContext *className = nullptr;
    ObjectiveCParser::IdentifierContext *superclassName = nullptr;
    ClassImplementationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *END();
    GenericTypeSpecifierContext *genericTypeSpecifier();
    antlr4::tree::TerminalNode *COLON();
    InstanceVariablesContext *instanceVariables();
    ImplementationDefinitionListContext *implementationDefinitionList();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassImplementationContext* classImplementation();

  class  CategoryImplementationContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::GenericTypeSpecifierContext *className = nullptr;
    ObjectiveCParser::IdentifierContext *categoryName = nullptr;
    CategoryImplementationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *END();
    GenericTypeSpecifierContext *genericTypeSpecifier();
    IdentifierContext *identifier();
    ImplementationDefinitionListContext *implementationDefinitionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CategoryImplementationContext* categoryImplementation();

  class  GenericTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    GenericTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    GenericsSpecifierContext *genericsSpecifier();
    antlr4::tree::TerminalNode *LT();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericTypeSpecifierContext* genericTypeSpecifier();

  class  ProtocolDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProtocolDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTOCOL();
    ProtocolNameContext *protocolName();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *LT();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *GT();
    std::vector<ProtocolDeclarationSectionContext *> protocolDeclarationSection();
    ProtocolDeclarationSectionContext* protocolDeclarationSection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolDeclarationContext* protocolDeclaration();

  class  ProtocolDeclarationSectionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *modifier = nullptr;
    ProtocolDeclarationSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRED();
    antlr4::tree::TerminalNode *OPTIONAL();
    std::vector<InterfaceDeclarationListContext *> interfaceDeclarationList();
    InterfaceDeclarationListContext* interfaceDeclarationList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolDeclarationSectionContext* protocolDeclarationSection();

  class  ProtocolDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ProtocolDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTOCOL();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolDeclarationListContext* protocolDeclarationList();

  class  ClassDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationListContext* classDeclarationList();

  class  ProtocolListContext : public antlr4::ParserRuleContext {
  public:
    ProtocolListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProtocolNameContext *> protocolName();
    ProtocolNameContext* protocolName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolListContext* protocolList();

  class  PropertyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PropertyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY();
    FieldDeclarationContext *fieldDeclaration();
    antlr4::tree::TerminalNode *LP();
    PropertyAttributesListContext *propertyAttributesList();
    antlr4::tree::TerminalNode *RP();
    IbOutletQualifierContext *ibOutletQualifier();
    antlr4::tree::TerminalNode *IB_INSPECTABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyDeclarationContext* propertyDeclaration();

  class  PropertyAttributesListContext : public antlr4::ParserRuleContext {
  public:
    PropertyAttributesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropertyAttributeContext *> propertyAttribute();
    PropertyAttributeContext* propertyAttribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyAttributesListContext* propertyAttributesList();

  class  PropertyAttributeContext : public antlr4::ParserRuleContext {
  public:
    PropertyAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *NONATOMIC();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *UNSAFE_UNRETAINED();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *GETTER();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SETTER();
    antlr4::tree::TerminalNode *COLON();
    NullabilitySpecifierContext *nullabilitySpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyAttributeContext* propertyAttribute();

  class  ProtocolNameContext : public antlr4::ParserRuleContext {
  public:
    ProtocolNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    ProtocolListContext *protocolList();
    antlr4::tree::TerminalNode *GT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COVARIANT();
    antlr4::tree::TerminalNode *CONTRAVARIANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolNameContext* protocolName();

  class  InstanceVariablesContext : public antlr4::ParserRuleContext {
  public:
    InstanceVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<VisibilitySectionContext *> visibilitySection();
    VisibilitySectionContext* visibilitySection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstanceVariablesContext* instanceVariables();

  class  VisibilitySectionContext : public antlr4::ParserRuleContext {
  public:
    VisibilitySectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessModifierContext *accessModifier();
    std::vector<FieldDeclarationContext *> fieldDeclaration();
    FieldDeclarationContext* fieldDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VisibilitySectionContext* visibilitySection();

  class  AccessModifierContext : public antlr4::ParserRuleContext {
  public:
    AccessModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PUBLIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessModifierContext* accessModifier();

  class  InterfaceDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<ClassMethodDeclarationContext *> classMethodDeclaration();
    ClassMethodDeclarationContext* classMethodDeclaration(size_t i);
    std::vector<InstanceMethodDeclarationContext *> instanceMethodDeclaration();
    InstanceMethodDeclarationContext* instanceMethodDeclaration(size_t i);
    std::vector<PropertyDeclarationContext *> propertyDeclaration();
    PropertyDeclarationContext* propertyDeclaration(size_t i);
    std::vector<FunctionDeclarationContext *> functionDeclaration();
    FunctionDeclarationContext* functionDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDeclarationListContext* interfaceDeclarationList();

  class  ClassMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    MethodDeclarationContext *methodDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMethodDeclarationContext* classMethodDeclaration();

  class  InstanceMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InstanceMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    MethodDeclarationContext *methodDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstanceMethodDeclarationContext* instanceMethodDeclaration();

  class  MethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodSelectorContext *methodSelector();
    antlr4::tree::TerminalNode *SEMI();
    MethodTypeContext *methodType();
    MacroContext *macro();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodDeclarationContext* methodDeclaration();

  class  ImplementationDefinitionListContext : public antlr4::ParserRuleContext {
  public:
    ImplementationDefinitionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionDefinitionContext *> functionDefinition();
    FunctionDefinitionContext* functionDefinition(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<ClassMethodDefinitionContext *> classMethodDefinition();
    ClassMethodDefinitionContext* classMethodDefinition(size_t i);
    std::vector<InstanceMethodDefinitionContext *> instanceMethodDefinition();
    InstanceMethodDefinitionContext* instanceMethodDefinition(size_t i);
    std::vector<PropertyImplementationContext *> propertyImplementation();
    PropertyImplementationContext* propertyImplementation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplementationDefinitionListContext* implementationDefinitionList();

  class  ClassMethodDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassMethodDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    MethodDefinitionContext *methodDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMethodDefinitionContext* classMethodDefinition();

  class  InstanceMethodDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InstanceMethodDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    MethodDefinitionContext *methodDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstanceMethodDefinitionContext* instanceMethodDefinition();

  class  MethodDefinitionContext : public antlr4::ParserRuleContext {
  public:
    MethodDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodSelectorContext *methodSelector();
    CompoundStatementContext *compoundStatement();
    MethodTypeContext *methodType();
    InitDeclaratorListContext *initDeclaratorList();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodDefinitionContext* methodDefinition();

  class  MethodSelectorContext : public antlr4::ParserRuleContext {
  public:
    MethodSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectorContext *selector();
    std::vector<KeywordDeclaratorContext *> keywordDeclarator();
    KeywordDeclaratorContext* keywordDeclarator(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ELIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodSelectorContext* methodSelector();

  class  KeywordDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    KeywordDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    IdentifierContext *identifier();
    SelectorContext *selector();
    std::vector<MethodTypeContext *> methodType();
    MethodTypeContext* methodType(size_t i);
    ArcBehaviourSpecifierContext *arcBehaviourSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordDeclaratorContext* keywordDeclarator();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorContext* selector();

  class  MethodTypeContext : public antlr4::ParserRuleContext {
  public:
    MethodTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodTypeContext* methodType();

  class  PropertyImplementationContext : public antlr4::ParserRuleContext {
  public:
    PropertyImplementationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNTHESIZE();
    PropertySynthesizeListContext *propertySynthesizeList();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DYNAMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyImplementationContext* propertyImplementation();

  class  PropertySynthesizeListContext : public antlr4::ParserRuleContext {
  public:
    PropertySynthesizeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropertySynthesizeItemContext *> propertySynthesizeItem();
    PropertySynthesizeItemContext* propertySynthesizeItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertySynthesizeListContext* propertySynthesizeList();

  class  PropertySynthesizeItemContext : public antlr4::ParserRuleContext {
  public:
    PropertySynthesizeItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertySynthesizeItemContext* propertySynthesizeItem();

  class  BlockTypeContext : public antlr4::ParserRuleContext {
  public:
    BlockTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *BITXOR();
    antlr4::tree::TerminalNode *RP();
    std::vector<NullabilitySpecifierContext *> nullabilitySpecifier();
    NullabilitySpecifierContext* nullabilitySpecifier(size_t i);
    BlockParametersContext *blockParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockTypeContext* blockType();

  class  GenericsSpecifierContext : public antlr4::ParserRuleContext {
  public:
    GenericsSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<TypeSpecifierWithPrefixesContext *> typeSpecifierWithPrefixes();
    TypeSpecifierWithPrefixesContext* typeSpecifierWithPrefixes(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericsSpecifierContext* genericsSpecifier();

  class  TypeSpecifierWithPrefixesContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierWithPrefixesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    std::vector<TypePrefixContext *> typePrefix();
    TypePrefixContext* typePrefix(size_t i);
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierWithPrefixesContext* typeSpecifierWithPrefixes();

  class  DictionaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    DictionaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<DictionaryPairContext *> dictionaryPair();
    DictionaryPairContext* dictionaryPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DictionaryExpressionContext* dictionaryExpression();

  class  DictionaryPairContext : public antlr4::ParserRuleContext {
  public:
    DictionaryPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DictionaryPairContext* dictionaryPair();

  class  ArrayExpressionContext : public antlr4::ParserRuleContext {
  public:
    ArrayExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayExpressionContext* arrayExpression();

  class  BoxExpressionContext : public antlr4::ParserRuleContext {
  public:
    BoxExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    ConstantContext *constant();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoxExpressionContext* boxExpression();

  class  BlockParametersContext : public antlr4::ParserRuleContext {
  public:
    BlockParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    std::vector<TypeVariableDeclaratorOrNameContext *> typeVariableDeclaratorOrName();
    TypeVariableDeclaratorOrNameContext* typeVariableDeclaratorOrName(size_t i);
    antlr4::tree::TerminalNode *VOID();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockParametersContext* blockParameters();

  class  TypeVariableDeclaratorOrNameContext : public antlr4::ParserRuleContext {
  public:
    TypeVariableDeclaratorOrNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeVariableDeclaratorContext *typeVariableDeclarator();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeVariableDeclaratorOrNameContext* typeVariableDeclaratorOrName();

  class  BlockExpressionContext : public antlr4::ParserRuleContext {
  public:
    BlockExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITXOR();
    CompoundStatementContext *compoundStatement();
    TypeSpecifierContext *typeSpecifier();
    NullabilitySpecifierContext *nullabilitySpecifier();
    BlockParametersContext *blockParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockExpressionContext* blockExpression();

  class  MessageExpressionContext : public antlr4::ParserRuleContext {
  public:
    MessageExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    ReceiverContext *receiver();
    MessageSelectorContext *messageSelector();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageExpressionContext* messageExpression();

  class  ReceiverContext : public antlr4::ParserRuleContext {
  public:
    ReceiverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    TypeSpecifierContext *typeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReceiverContext* receiver();

  class  MessageSelectorContext : public antlr4::ParserRuleContext {
  public:
    MessageSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectorContext *selector();
    std::vector<KeywordArgumentContext *> keywordArgument();
    KeywordArgumentContext* keywordArgument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageSelectorContext* messageSelector();

  class  KeywordArgumentContext : public antlr4::ParserRuleContext {
  public:
    KeywordArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<KeywordArgumentTypeContext *> keywordArgumentType();
    KeywordArgumentTypeContext* keywordArgumentType(size_t i);
    SelectorContext *selector();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordArgumentContext* keywordArgument();

  class  KeywordArgumentTypeContext : public antlr4::ParserRuleContext {
  public:
    KeywordArgumentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsContext *expressions();
    NullabilitySpecifierContext *nullabilitySpecifier();
    antlr4::tree::TerminalNode *LBRACE();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordArgumentTypeContext* keywordArgumentType();

  class  SelectorExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECTOR();
    antlr4::tree::TerminalNode *LP();
    SelectorNameContext *selectorName();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorExpressionContext* selectorExpression();

  class  SelectorNameContext : public antlr4::ParserRuleContext {
  public:
    SelectorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorNameContext* selectorName();

  class  ProtocolExpressionContext : public antlr4::ParserRuleContext {
  public:
    ProtocolExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *LP();
    ProtocolNameContext *protocolName();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolExpressionContext* protocolExpression();

  class  EncodeExpressionContext : public antlr4::ParserRuleContext {
  public:
    EncodeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCODE();
    antlr4::tree::TerminalNode *LP();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EncodeExpressionContext* encodeExpression();

  class  TypeVariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    TypeVariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeVariableDeclaratorContext* typeVariableDeclarator();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    antlr4::tree::TerminalNode *LP();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  TryBlockContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::CompoundStatementContext *tryStatement = nullptr;
    ObjectiveCParser::CompoundStatementContext *finallyStatement = nullptr;
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    std::vector<CompoundStatementContext *> compoundStatement();
    CompoundStatementContext* compoundStatement(size_t i);
    std::vector<CatchStatementContext *> catchStatement();
    CatchStatementContext* catchStatement(size_t i);
    antlr4::tree::TerminalNode *FINALLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryBlockContext* tryBlock();

  class  CatchStatementContext : public antlr4::ParserRuleContext {
  public:
    CatchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *LP();
    TypeVariableDeclaratorContext *typeVariableDeclarator();
    antlr4::tree::TerminalNode *RP();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchStatementContext* catchStatement();

  class  SynchronizedStatementContext : public antlr4::ParserRuleContext {
  public:
    SynchronizedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SynchronizedStatementContext* synchronizedStatement();

  class  AutoreleaseStatementContext : public antlr4::ParserRuleContext {
  public:
    AutoreleaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTORELEASEPOOL();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AutoreleaseStatementContext* autoreleaseStatement();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionSignatureContext *functionSignature();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionSignatureContext *functionSignature();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionSignatureContext : public antlr4::ParserRuleContext {
  public:
    FunctionSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    DeclarationSpecifiersContext *declarationSpecifiers();
    AttributeSpecifierContext *attributeSpecifier();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionSignatureContext* functionSignature();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeNameContext *attributeName();
    AttributeParametersContext *attributeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  AttributeNameContext : public antlr4::ParserRuleContext {
  public:
    AttributeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeNameContext* attributeName();

  class  AttributeParametersContext : public antlr4::ParserRuleContext {
  public:
    AttributeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    AttributeParameterListContext *attributeParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParametersContext* attributeParameters();

  class  AttributeParameterListContext : public antlr4::ParserRuleContext {
  public:
    AttributeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeParameterContext *> attributeParameter();
    AttributeParameterContext* attributeParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParameterListContext* attributeParameterList();

  class  AttributeParameterContext : public antlr4::ParserRuleContext {
  public:
    AttributeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    ConstantContext *constant();
    StringLiteralContext *stringLiteral();
    AttributeParameterAssignmentContext *attributeParameterAssignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParameterContext* attributeParameter();

  class  AttributeParameterAssignmentContext : public antlr4::ParserRuleContext {
  public:
    AttributeParameterAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeNameContext *> attributeName();
    AttributeNameContext* attributeName(size_t i);
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ConstantContext *constant();
    StringLiteralContext *stringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParameterAssignmentContext* attributeParameterAssignment();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallExpressionContext *functionCallExpression();
    EnumDeclarationContext *enumDeclaration();
    VarDeclarationContext *varDeclaration();
    TypedefDeclarationContext *typedefDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  FunctionCallExpressionContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    DirectDeclaratorContext *directDeclarator();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallExpressionContext* functionCallExpression();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumSpecifierContext *enumSpecifier();
    antlr4::tree::TerminalNode *SEMI();
    AttributeSpecifierContext *attributeSpecifier();
    antlr4::tree::TerminalNode *TYPEDEF();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    DeclarationSpecifiersContext *declarationSpecifiers();
    InitDeclaratorListContext *initDeclaratorList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  TypedefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypedefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    antlr4::tree::TerminalNode *SEMI();
    DeclarationSpecifiersContext *declarationSpecifiers();
    TypeDeclaratorListContext *typeDeclaratorList();
    AttributeSpecifierContext *attributeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypedefDeclarationContext* typedefDeclaration();

  class  TypeDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDeclaratorContext *> typeDeclarator();
    TypeDeclaratorContext* typeDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDeclaratorListContext* typeDeclaratorList();

  class  TypeDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectDeclaratorContext *directDeclarator();
    PointerContext *pointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDeclaratorContext* typeDeclarator();

  class  DeclarationSpecifiersContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StorageClassSpecifierContext *> storageClassSpecifier();
    StorageClassSpecifierContext* storageClassSpecifier(size_t i);
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    std::vector<ArcBehaviourSpecifierContext *> arcBehaviourSpecifier();
    ArcBehaviourSpecifierContext* arcBehaviourSpecifier(size_t i);
    std::vector<NullabilitySpecifierContext *> nullabilitySpecifier();
    NullabilitySpecifierContext* nullabilitySpecifier(size_t i);
    std::vector<IbOutletQualifierContext *> ibOutletQualifier();
    IbOutletQualifierContext* ibOutletQualifier(size_t i);
    std::vector<TypePrefixContext *> typePrefix();
    TypePrefixContext* typePrefix(size_t i);
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationSpecifiersContext* declarationSpecifiers();

  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorContext *> initDeclarator();
    InitDeclaratorContext* initDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitDeclaratorListContext* initDeclaratorList();

  class  InitDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitDeclaratorContext* initDeclarator();

  class  StructOrUnionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StructOrUnionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<FieldDeclarationContext *> fieldDeclaration();
    FieldDeclarationContext* fieldDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructOrUnionSpecifierContext* structOrUnionSpecifier();

  class  FieldDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecifierQualifierListContext *specifierQualifierList();
    FieldDeclaratorListContext *fieldDeclaratorList();
    antlr4::tree::TerminalNode *SEMI();
    MacroContext *macro();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldDeclarationContext* fieldDeclaration();

  class  SpecifierQualifierListContext : public antlr4::ParserRuleContext {
  public:
    SpecifierQualifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArcBehaviourSpecifierContext *> arcBehaviourSpecifier();
    ArcBehaviourSpecifierContext* arcBehaviourSpecifier(size_t i);
    std::vector<NullabilitySpecifierContext *> nullabilitySpecifier();
    NullabilitySpecifierContext* nullabilitySpecifier(size_t i);
    std::vector<IbOutletQualifierContext *> ibOutletQualifier();
    IbOutletQualifierContext* ibOutletQualifier(size_t i);
    std::vector<TypePrefixContext *> typePrefix();
    TypePrefixContext* typePrefix(size_t i);
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecifierQualifierListContext* specifierQualifierList();

  class  IbOutletQualifierContext : public antlr4::ParserRuleContext {
  public:
    IbOutletQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IB_OUTLET_COLLECTION();
    antlr4::tree::TerminalNode *LP();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *IB_OUTLET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IbOutletQualifierContext* ibOutletQualifier();

  class  ArcBehaviourSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ArcBehaviourSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WEAK_QUALIFIER();
    antlr4::tree::TerminalNode *STRONG_QUALIFIER();
    antlr4::tree::TerminalNode *AUTORELEASING_QUALIFIER();
    antlr4::tree::TerminalNode *UNSAFE_UNRETAINED_QUALIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArcBehaviourSpecifierContext* arcBehaviourSpecifier();

  class  NullabilitySpecifierContext : public antlr4::ParserRuleContext {
  public:
    NullabilitySpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_UNSPECIFIED();
    antlr4::tree::TerminalNode *NULLABLE();
    antlr4::tree::TerminalNode *NONNULL();
    antlr4::tree::TerminalNode *NULL_RESETTABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullabilitySpecifierContext* nullabilitySpecifier();

  class  StorageClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *REGISTER();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StorageClassSpecifierContext* storageClassSpecifier();

  class  TypePrefixContext : public antlr4::ParserRuleContext {
  public:
    TypePrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BRIDGE();
    antlr4::tree::TerminalNode *BRIDGE_TRANSFER();
    antlr4::tree::TerminalNode *BRIDGE_RETAINED();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *NS_INLINE();
    antlr4::tree::TerminalNode *KINDOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypePrefixContext* typePrefix();

  class  TypeQualifierContext : public antlr4::ParserRuleContext {
  public:
    TypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *RESTRICT();
    ProtocolQualifierContext *protocolQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeQualifierContext* typeQualifier();

  class  ProtocolQualifierContext : public antlr4::ParserRuleContext {
  public:
    ProtocolQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *BYCOPY();
    antlr4::tree::TerminalNode *BYREF();
    antlr4::tree::TerminalNode *ONEWAY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtocolQualifierContext* protocolQualifier();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    TypeofExpressionContext *typeofExpression();
    GenericTypeSpecifierContext *genericTypeSpecifier();
    StructOrUnionSpecifierContext *structOrUnionSpecifier();
    EnumSpecifierContext *enumSpecifier();
    IdentifierContext *identifier();
    PointerContext *pointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TypeofExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeofExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEOF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeofExpressionContext* typeofExpression();

  class  FieldDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldDeclaratorContext *> fieldDeclarator();
    FieldDeclaratorContext* fieldDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldDeclaratorListContext* fieldDeclaratorList();

  class  FieldDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *COLON();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldDeclaratorContext* fieldDeclarator();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *COLON();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *NS_OPTIONS();
    antlr4::tree::TerminalNode *NS_ENUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumeratorListContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorContext *> enumerator();
    EnumeratorContext* enumerator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorListContext* enumeratorList();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorIdentifierContext *enumeratorIdentifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorContext* enumerator();

  class  EnumeratorIdentifierContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorIdentifierContext* enumeratorIdentifier();

  class  DirectDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DirectDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *RP();
    std::vector<DeclaratorSuffixContext *> declaratorSuffix();
    DeclaratorSuffixContext* declaratorSuffix(size_t i);
    antlr4::tree::TerminalNode *BITXOR();
    BlockParametersContext *blockParameters();
    NullabilitySpecifierContext *nullabilitySpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectDeclaratorContext* directDeclarator();

  class  DeclaratorSuffixContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaratorSuffixContext* declaratorSuffix();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationListContext *parameterDeclarationList();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ELIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterListContext* parameterList();

  class  PointerContext : public antlr4::ParserRuleContext {
  public:
    PointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    DeclarationSpecifiersContext *declarationSpecifiers();
    PointerContext *pointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerContext* pointer();

  class  MacroContext : public antlr4::ParserRuleContext {
  public:
    MacroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP();
    std::vector<PrimaryExpressionContext *> primaryExpression();
    PrimaryExpressionContext* primaryExpression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroContext* macro();

  class  ArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayInitializerContext* arrayInitializer();

  class  StructInitializerContext : public antlr4::ParserRuleContext {
  public:
    StructInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructInitializerContext* structInitializer();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerContext *> initializer();
    InitializerContext* initializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerListContext* initializerList();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecifierQualifierListContext *specifierQualifierList();
    AbstractDeclaratorContext *abstractDeclarator();
    BlockTypeContext *blockType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  AbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerContext *pointer();
    AbstractDeclaratorContext *abstractDeclarator();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    std::vector<AbstractDeclaratorSuffixContext *> abstractDeclaratorSuffix();
    AbstractDeclaratorSuffixContext* abstractDeclaratorSuffix(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    std::vector<ConstantExpressionContext *> constantExpression();
    ConstantExpressionContext* constantExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  AbstractDeclaratorSuffixContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ParameterDeclarationListContext *parameterDeclarationList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractDeclaratorSuffixContext* abstractDeclaratorSuffix();

  class  ParameterDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationContext *> parameterDeclaration();
    ParameterDeclarationContext* parameterDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterDeclarationListContext* parameterDeclarationList();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectDeclaratorContext *directDeclarator();
    PointerContext *pointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaratorContext* declarator();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    antlr4::tree::TerminalNode *SEMI();
    CompoundStatementContext *compoundStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    SynchronizedStatementContext *synchronizedStatement();
    AutoreleaseStatementContext *autoreleaseStatement();
    ThrowStatementContext *throwStatement();
    TryBlockContext *tryBlock();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantExpressionContext *> constantExpression();
    ConstantExpressionContext* constantExpression(size_t i);
    antlr4::tree::TerminalNode *ELIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::StatementContext *ifBody = nullptr;
    ObjectiveCParser::StatementContext *elseBody = nullptr;
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    SwitchStatementContext *switchStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    SwitchBlockContext *switchBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<SwitchSectionContext *> switchSection();
    SwitchSectionContext* switchSection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchBlockContext* switchBlock();

  class  SwitchSectionContext : public antlr4::ParserRuleContext {
  public:
    SwitchSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchSectionContext* switchSection();

  class  SwitchLabelContext : public antlr4::ParserRuleContext {
  public:
    SwitchLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *COLON();
    RangeExpressionContext *rangeExpression();
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchLabelContext* switchLabel();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhileStatementContext *whileStatement();
    DoStatementContext *doStatement();
    ForStatementContext *forStatement();
    ForInStatementContext *forInStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoStatementContext* doStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LP();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *RP();
    StatementContext *statement();
    ForLoopInitializerContext *forLoopInitializer();
    ExpressionContext *expression();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  ForLoopInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForLoopInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    InitDeclaratorListContext *initDeclaratorList();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForLoopInitializerContext* forLoopInitializer();

  class  ForInStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LP();
    TypeVariableDeclaratorContext *typeVariableDeclarator();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *RP();
    StatementContext *statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInStatementContext* forInStatement();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ObjectiveCParser::ExpressionContext *assignmentExpression = nullptr;
    antlr4::Token *op = nullptr;
    ObjectiveCParser::ExpressionContext *trueExpression = nullptr;
    ObjectiveCParser::ExpressionContext *falseExpression = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *LP();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *RP();
    UnaryExpressionContext *unaryExpression();
    AssignmentOperatorContext *assignmentOperator();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *BITXOR();
    antlr4::tree::TerminalNode *BITOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *LSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *RSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *LP();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *RP();
    CastExpressionContext *castExpression();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CastExpressionContext* castExpression();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArrayInitializerContext *arrayInitializer();
    StructInitializerContext *structInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerContext* initializer();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *SIZEOF();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *LP();
    TypeSpecifierContext *typeSpecifier();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();
    UnaryOperatorContext *unaryOperator();
    CastExpressionContext *castExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    std::vector<PostfixContext *> postfix();
    PostfixContext* postfix(size_t i);
    PostfixExpressionContext *postfixExpression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STRUCTACCESS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  PostfixContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *rpToken = nullptr;
    std::vector<antlr4::Token *> macroArguments;
    antlr4::Token *_tset3110 = nullptr;
    antlr4::Token *op = nullptr;
    PostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LP();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    ArgumentExpressionListContext *argumentExpressionList();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixContext* postfix();

  class  ArgumentExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentExpressionContext *> argumentExpression();
    ArgumentExpressionContext* argumentExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentExpressionListContext* argumentExpressionList();

  class  ArgumentExpressionContext : public antlr4::ParserRuleContext {
  public:
    ArgumentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    TypeSpecifierContext *typeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentExpressionContext* argumentExpression();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ConstantContext *constant();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *LP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RP();
    MessageExpressionContext *messageExpression();
    SelectorExpressionContext *selectorExpression();
    ProtocolExpressionContext *protocolExpression();
    EncodeExpressionContext *encodeExpression();
    DictionaryExpressionContext *dictionaryExpression();
    ArrayExpressionContext *arrayExpression();
    BoxExpressionContext *boxExpression();
    BlockExpressionContext *blockExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *OCTAL_LITERAL();
    antlr4::tree::TerminalNode *BINARY_LITERAL();
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *FLOATING_POINT_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER_LITERAL();
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_START();
    antlr4::tree::TerminalNode* STRING_START(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING_END();
    antlr4::tree::TerminalNode* STRING_END(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING_VALUE();
    antlr4::tree::TerminalNode* STRING_VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING_NEWLINE();
    antlr4::tree::TerminalNode* STRING_NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *BYCOPY();
    antlr4::tree::TerminalNode *BYREF();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *IMP();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *ONEWAY();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *PROTOCOL_();
    antlr4::tree::TerminalNode *SEL();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *NONATOMIC();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *AUTORELEASING_QUALIFIER();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BRIDGE_RETAINED();
    antlr4::tree::TerminalNode *BRIDGE_TRANSFER();
    antlr4::tree::TerminalNode *COVARIANT();
    antlr4::tree::TerminalNode *CONTRAVARIANT();
    antlr4::tree::TerminalNode *DEPRECATED();
    antlr4::tree::TerminalNode *KINDOF();
    antlr4::tree::TerminalNode *UNUSED();
    antlr4::tree::TerminalNode *NS_INLINE();
    antlr4::tree::TerminalNode *NS_ENUM();
    antlr4::tree::TerminalNode *NS_OPTIONS();
    antlr4::tree::TerminalNode *NULL_UNSPECIFIED();
    antlr4::tree::TerminalNode *NULLABLE();
    antlr4::tree::TerminalNode *NONNULL();
    antlr4::tree::TerminalNode *NULL_RESETTABLE();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *GETTER();
    antlr4::tree::TerminalNode *SETTER();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *UNSAFE_UNRETAINED();
    antlr4::tree::TerminalNode *IB_OUTLET();
    antlr4::tree::TerminalNode *IB_OUTLET_COLLECTION();
    antlr4::tree::TerminalNode *IB_INSPECTABLE();
    antlr4::tree::TerminalNode *IB_DESIGNABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

