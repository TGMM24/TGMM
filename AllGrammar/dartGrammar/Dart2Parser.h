
// Generated from Dart2Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Dart2Parser : public antlr4::Parser {
public:
  enum {
    A = 1, AA = 2, AE = 3, AT = 4, C = 5, CB = 6, CBC = 7, CIR = 8, CIRE = 9, 
    CO = 10, CP = 11, D = 12, DD = 13, DDD = 14, DDDQ = 15, EE = 16, EG = 17, 
    EQ = 18, GT = 19, LT = 20, LTE = 21, LTLT = 22, LTLTE = 23, ME = 24, 
    MINUS = 25, MM = 26, NE = 27, NOT = 28, OB = 29, OBC = 30, OP = 31, 
    P = 32, PC = 33, PE = 34, PL = 35, PLE = 36, PLPL = 37, PO = 38, POE = 39, 
    PP = 40, QU = 41, QUD = 42, QUDD = 43, QUQU = 44, QUQUEQ = 45, SC = 46, 
    SE = 47, SL = 48, SQS = 49, SQSE = 50, SQUIG = 51, ST = 52, STE = 53, 
    ABSTRACT_ = 54, AS_ = 55, ASSERT_ = 56, ASYNC_ = 57, AWAIT_ = 58, BREAK_ = 59, 
    CASE_ = 60, CATCH_ = 61, CLASS_ = 62, CONST_ = 63, CONTINUE_ = 64, COVARIANT_ = 65, 
    DEFAULT_ = 66, DEFERRED_ = 67, DO_ = 68, DYNAMIC_ = 69, ELSE_ = 70, 
    ENUM_ = 71, EXPORT_ = 72, EXTENDS_ = 73, EXTENSION_ = 74, EXTERNAL_ = 75, 
    FACTORY_ = 76, FALSE_ = 77, FINAL_ = 78, FINALLY_ = 79, FOR_ = 80, FUNCTION_ = 81, 
    GET_ = 82, GTILDE_ = 83, HIDE_ = 84, IF_ = 85, IMPLEMENTS_ = 86, IMPORT_ = 87, 
    IN_ = 88, INTERFACE_ = 89, IS_ = 90, LATE_ = 91, LET_ = 92, LIBRARY_ = 93, 
    MIXIN_ = 94, NATIVE_ = 95, NEW_ = 96, NULL_ = 97, OF_ = 98, ON_ = 99, 
    OPERATOR_ = 100, PART_ = 101, REQUIRED_ = 102, RETHROW_ = 103, RETURN_ = 104, 
    SET_ = 105, SHOW_ = 106, STATIC_ = 107, SUPER_ = 108, SWITCH_ = 109, 
    SYNC_ = 110, THIS_ = 111, THROW_ = 112, TRUE_ = 113, TRY_ = 114, TYPEDEF_ = 115, 
    VAR_ = 116, VOID_ = 117, WHILE_ = 118, WITH_ = 119, YIELD_ = 120, NUMBER = 121, 
    HEX_NUMBER = 122, SingleLineString = 123, MultiLineString = 124, IDENTIFIER = 125, 
    WHITESPACE = 126, SINGLE_LINE_COMMENT = 127, MULTI_LINE_COMMENT = 128
  };

  enum {
    RuleAdditiveExpression = 0, RuleAdditiveOperator = 1, RuleArgumentList = 2, 
    RuleArgumentPart = 3, RuleArguments = 4, RuleAsOperator = 5, RuleAssertion = 6, 
    RuleAssertStatement = 7, RuleAssignableExpression = 8, RuleAssignableSelector = 9, 
    RuleAssignableSelectorPart = 10, RuleAssignmentOperator = 11, RuleAwaitExpression = 12, 
    RuleBinaryOperator = 13, RuleBitwiseAndExpression = 14, RuleBitwiseOperator = 15, 
    RuleBitwiseOrExpression = 16, RuleBitwiseXorExpression = 17, RuleBlock = 18, 
    RuleBooleanLiteral = 19, RuleBreakStatement = 20, RuleCascade = 21, 
    RuleCascadeAssignment = 22, RuleCascadeSection = 23, RuleCascadeSectionTail = 24, 
    RuleCascadeSelector = 25, RuleCatchPart = 26, RuleClassDeclaration = 27, 
    RuleClassMemberDeclaration = 28, RuleCombinator = 29, RuleCompilationUnit = 30, 
    RuleCompoundAssignmentOperator = 31, RuleConditionalExpression = 32, 
    RuleConfigurableUri = 33, RuleConfigurationUri = 34, RuleConstantConstructorSignature = 35, 
    RuleConstObjectExpression = 36, RuleConstructorDesignation = 37, RuleConstructorInvocation = 38, 
    RuleConstructorName = 39, RuleConstructorSignature = 40, RuleContinueStatement = 41, 
    RuleDeclaration = 42, RuleDeclaredIdentifier = 43, RuleDefaultCase = 44, 
    RuleDefaultFormalParameter = 45, RuleDefaultNamedParameter = 46, RuleDoStatement = 47, 
    RuleDottedIdentifierList = 48, RuleElement = 49, RuleElements = 50, 
    RuleEnumEntry = 51, RuleEnumType = 52, RuleEqualityExpression = 53, 
    RuleEqualityOperator = 54, RuleExpression = 55, RuleExpressionElement = 56, 
    RuleExpressionList = 57, RuleExpressionStatement = 58, RuleExpressionWithoutCascade = 59, 
    RuleExtensionDeclaration = 60, RuleFactoryConstructorSignature = 61, 
    RuleFieldFormalParameter = 62, RuleFieldInitializer = 63, RuleFinalConstVarOrType = 64, 
    RuleFinallyPart = 65, RuleForElement = 66, RuleForInitializerStatement = 67, 
    RuleForLoopParts = 68, RuleFormalParameterList = 69, RuleFormalParameterPart = 70, 
    RuleForStatement = 71, RuleFunctionBody = 72, RuleFunctionExpression = 73, 
    RuleFunctionExpressionBody = 74, RuleFunctionFormalParameter = 75, RuleFunctionPrefix = 76, 
    RuleFunctionSignature = 77, RuleFunctionType = 78, RuleFunctionTypeAlias = 79, 
    RuleFunctionTypeTail = 80, RuleFunctionTypeTails = 81, RuleGetterSignature = 82, 
    RuleIdentifier = 83, RuleIdentifierList = 84, RuleIfElement = 85, RuleIfNullExpression = 86, 
    RuleIfStatement = 87, RuleImportOrExport = 88, RuleImportSpecification = 89, 
    RuleIncrementOperator = 90, RuleInitializedIdentifier = 91, RuleInitializedIdentifierList = 92, 
    RuleInitializedVariableDeclaration = 93, RuleInitializerExpression = 94, 
    RuleInitializerListEntry = 95, RuleInitializers = 96, RuleInterfaces = 97, 
    RuleIsOperator = 98, RuleLabel = 99, RuleLetExpression = 100, RuleLibraryDeclaration = 101, 
    RuleLibraryExport = 102, RuleLibraryImport = 103, RuleLibraryName = 104, 
    RuleListLiteral = 105, RuleLiteral = 106, RuleLocalFunctionDeclaration = 107, 
    RuleLocalVariableDeclaration = 108, RuleLogicalAndExpression = 109, 
    RuleLogicalOrExpression = 110, RuleMapElement = 111, RuleMetadata = 112, 
    RuleMetadatum = 113, RuleMethodSignature = 114, RuleMinusOperator = 115, 
    RuleMixinApplication = 116, RuleMixinApplicationClass = 117, RuleMixinDeclaration = 118, 
    RuleMixins = 119, RuleMultilineString = 120, RuleMultiplicativeExpression = 121, 
    RuleMultiplicativeOperator = 122, RuleNamedArgument = 123, RuleNamedFormalParameters = 124, 
    RuleNamedParameterType = 125, RuleNamedParameterTypes = 126, RuleNegationOperator = 127, 
    RuleNewExpression = 128, RuleNonLabelledStatement = 129, RuleNormalFormalParameter = 130, 
    RuleNormalFormalParameterNoMetadata = 131, RuleNormalFormalParameters = 132, 
    RuleNormalParameterType = 133, RuleNormalParameterTypes = 134, RuleNullLiteral = 135, 
    RuleNumericLiteral = 136, RuleOnPart = 137, RuleOperator = 138, RuleOperatorSignature = 139, 
    RuleOptionalOrNamedFormalParameters = 140, RuleOptionalParameterTypes = 141, 
    RuleOptionalPositionalFormalParameters = 142, RuleOptionalPositionalParameterTypes = 143, 
    RuleParameterTypeList = 144, RulePartDeclaration = 145, RulePartDirective = 146, 
    RulePartHeader = 147, RulePostfixExpression = 148, RulePostfixOperator = 149, 
    RulePrefixOperator = 150, RulePrimary = 151, RuleQualifiedName = 152, 
    RuleRedirectingFactoryConstructorSignature = 153, RuleRedirection = 154, 
    RuleRelationalExpression = 155, RuleRelationalOperator = 156, RuleReserved_word = 157, 
    RuleRethrowStatement = 158, RuleReturnStatement = 159, RuleSelector = 160, 
    RuleSetOrMapLiteral = 161, RuleSetterSignature = 162, RuleShiftExpression = 163, 
    RuleShiftOperator = 164, RuleSimpleFormalParameter = 165, RuleSingleLineString = 166, 
    RuleSpreadElement = 167, RuleStatement = 168, RuleStatements = 169, 
    RuleStaticFinalDeclaration = 170, RuleStaticFinalDeclarationList = 171, 
    RuleStringLiteral = 172, RuleSuperclass = 173, RuleSwitchCase = 174, 
    RuleSwitchStatement = 175, RuleSymbolLiteral = 176, RuleThisExpression = 177, 
    RuleThrowExpression = 178, RuleThrowExpressionWithoutCascade = 179, 
    RuleTildeOperator = 180, RuleTopLevelDeclaration = 181, RuleTryStatement = 182, 
    RuleType = 183, RuleTypeAlias = 184, RuleTypeArguments = 185, RuleTypeCast = 186, 
    RuleTypedIdentifier = 187, RuleTypeIdentifier = 188, RuleTypeList = 189, 
    RuleTypeName = 190, RuleTypeNotFunction = 191, RuleTypeNotVoid = 192, 
    RuleTypeNotVoidList = 193, RuleTypeNotVoidNotFunction = 194, RuleTypeNotVoidNotFunctionList = 195, 
    RuleTypeParameter = 196, RuleTypeParameters = 197, RuleTypeTest = 198, 
    RuleUnaryExpression = 199, RuleUnconditionalAssignableSelector = 200, 
    RuleUri = 201, RuleUriTest = 202, RuleVarOrType = 203, RuleWhileStatement = 204, 
    RuleYieldEachStatement = 205, RuleYieldStatement = 206
  };

  explicit Dart2Parser(antlr4::TokenStream *input);

  Dart2Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Dart2Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AdditiveExpressionContext;
  class AdditiveOperatorContext;
  class ArgumentListContext;
  class ArgumentPartContext;
  class ArgumentsContext;
  class AsOperatorContext;
  class AssertionContext;
  class AssertStatementContext;
  class AssignableExpressionContext;
  class AssignableSelectorContext;
  class AssignableSelectorPartContext;
  class AssignmentOperatorContext;
  class AwaitExpressionContext;
  class BinaryOperatorContext;
  class BitwiseAndExpressionContext;
  class BitwiseOperatorContext;
  class BitwiseOrExpressionContext;
  class BitwiseXorExpressionContext;
  class BlockContext;
  class BooleanLiteralContext;
  class BreakStatementContext;
  class CascadeContext;
  class CascadeAssignmentContext;
  class CascadeSectionContext;
  class CascadeSectionTailContext;
  class CascadeSelectorContext;
  class CatchPartContext;
  class ClassDeclarationContext;
  class ClassMemberDeclarationContext;
  class CombinatorContext;
  class CompilationUnitContext;
  class CompoundAssignmentOperatorContext;
  class ConditionalExpressionContext;
  class ConfigurableUriContext;
  class ConfigurationUriContext;
  class ConstantConstructorSignatureContext;
  class ConstObjectExpressionContext;
  class ConstructorDesignationContext;
  class ConstructorInvocationContext;
  class ConstructorNameContext;
  class ConstructorSignatureContext;
  class ContinueStatementContext;
  class DeclarationContext;
  class DeclaredIdentifierContext;
  class DefaultCaseContext;
  class DefaultFormalParameterContext;
  class DefaultNamedParameterContext;
  class DoStatementContext;
  class DottedIdentifierListContext;
  class ElementContext;
  class ElementsContext;
  class EnumEntryContext;
  class EnumTypeContext;
  class EqualityExpressionContext;
  class EqualityOperatorContext;
  class ExpressionContext;
  class ExpressionElementContext;
  class ExpressionListContext;
  class ExpressionStatementContext;
  class ExpressionWithoutCascadeContext;
  class ExtensionDeclarationContext;
  class FactoryConstructorSignatureContext;
  class FieldFormalParameterContext;
  class FieldInitializerContext;
  class FinalConstVarOrTypeContext;
  class FinallyPartContext;
  class ForElementContext;
  class ForInitializerStatementContext;
  class ForLoopPartsContext;
  class FormalParameterListContext;
  class FormalParameterPartContext;
  class ForStatementContext;
  class FunctionBodyContext;
  class FunctionExpressionContext;
  class FunctionExpressionBodyContext;
  class FunctionFormalParameterContext;
  class FunctionPrefixContext;
  class FunctionSignatureContext;
  class FunctionTypeContext;
  class FunctionTypeAliasContext;
  class FunctionTypeTailContext;
  class FunctionTypeTailsContext;
  class GetterSignatureContext;
  class IdentifierContext;
  class IdentifierListContext;
  class IfElementContext;
  class IfNullExpressionContext;
  class IfStatementContext;
  class ImportOrExportContext;
  class ImportSpecificationContext;
  class IncrementOperatorContext;
  class InitializedIdentifierContext;
  class InitializedIdentifierListContext;
  class InitializedVariableDeclarationContext;
  class InitializerExpressionContext;
  class InitializerListEntryContext;
  class InitializersContext;
  class InterfacesContext;
  class IsOperatorContext;
  class LabelContext;
  class LetExpressionContext;
  class LibraryDeclarationContext;
  class LibraryExportContext;
  class LibraryImportContext;
  class LibraryNameContext;
  class ListLiteralContext;
  class LiteralContext;
  class LocalFunctionDeclarationContext;
  class LocalVariableDeclarationContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class MapElementContext;
  class MetadataContext;
  class MetadatumContext;
  class MethodSignatureContext;
  class MinusOperatorContext;
  class MixinApplicationContext;
  class MixinApplicationClassContext;
  class MixinDeclarationContext;
  class MixinsContext;
  class MultilineStringContext;
  class MultiplicativeExpressionContext;
  class MultiplicativeOperatorContext;
  class NamedArgumentContext;
  class NamedFormalParametersContext;
  class NamedParameterTypeContext;
  class NamedParameterTypesContext;
  class NegationOperatorContext;
  class NewExpressionContext;
  class NonLabelledStatementContext;
  class NormalFormalParameterContext;
  class NormalFormalParameterNoMetadataContext;
  class NormalFormalParametersContext;
  class NormalParameterTypeContext;
  class NormalParameterTypesContext;
  class NullLiteralContext;
  class NumericLiteralContext;
  class OnPartContext;
  class OperatorContext;
  class OperatorSignatureContext;
  class OptionalOrNamedFormalParametersContext;
  class OptionalParameterTypesContext;
  class OptionalPositionalFormalParametersContext;
  class OptionalPositionalParameterTypesContext;
  class ParameterTypeListContext;
  class PartDeclarationContext;
  class PartDirectiveContext;
  class PartHeaderContext;
  class PostfixExpressionContext;
  class PostfixOperatorContext;
  class PrefixOperatorContext;
  class PrimaryContext;
  class QualifiedNameContext;
  class RedirectingFactoryConstructorSignatureContext;
  class RedirectionContext;
  class RelationalExpressionContext;
  class RelationalOperatorContext;
  class Reserved_wordContext;
  class RethrowStatementContext;
  class ReturnStatementContext;
  class SelectorContext;
  class SetOrMapLiteralContext;
  class SetterSignatureContext;
  class ShiftExpressionContext;
  class ShiftOperatorContext;
  class SimpleFormalParameterContext;
  class SingleLineStringContext;
  class SpreadElementContext;
  class StatementContext;
  class StatementsContext;
  class StaticFinalDeclarationContext;
  class StaticFinalDeclarationListContext;
  class StringLiteralContext;
  class SuperclassContext;
  class SwitchCaseContext;
  class SwitchStatementContext;
  class SymbolLiteralContext;
  class ThisExpressionContext;
  class ThrowExpressionContext;
  class ThrowExpressionWithoutCascadeContext;
  class TildeOperatorContext;
  class TopLevelDeclarationContext;
  class TryStatementContext;
  class TypeContext;
  class TypeAliasContext;
  class TypeArgumentsContext;
  class TypeCastContext;
  class TypedIdentifierContext;
  class TypeIdentifierContext;
  class TypeListContext;
  class TypeNameContext;
  class TypeNotFunctionContext;
  class TypeNotVoidContext;
  class TypeNotVoidListContext;
  class TypeNotVoidNotFunctionContext;
  class TypeNotVoidNotFunctionListContext;
  class TypeParameterContext;
  class TypeParametersContext;
  class TypeTestContext;
  class UnaryExpressionContext;
  class UnconditionalAssignableSelectorContext;
  class UriContext;
  class UriTestContext;
  class VarOrTypeContext;
  class WhileStatementContext;
  class YieldEachStatementContext;
  class YieldStatementContext; 

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    std::vector<AdditiveOperatorContext *> additiveOperator();
    AdditiveOperatorContext* additiveOperator(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  AdditiveOperatorContext : public antlr4::ParserRuleContext {
  public:
    AdditiveOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PL();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveOperatorContext* additiveOperator();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedArgumentContext *> namedArgument();
    NamedArgumentContext* namedArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentPartContext : public antlr4::ParserRuleContext {
  public:
    ArgumentPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentsContext *arguments();
    TypeArgumentsContext *typeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentPartContext* argumentPart();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  AsOperatorContext : public antlr4::ParserRuleContext {
  public:
    AsOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsOperatorContext* asOperator();

  class  AssertionContext : public antlr4::ParserRuleContext {
  public:
    AssertionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT_();
    antlr4::tree::TerminalNode *OP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CP();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssertionContext* assertion();

  class  AssertStatementContext : public antlr4::ParserRuleContext {
  public:
    AssertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssertionContext *assertion();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssertStatementContext* assertStatement();

  class  AssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    AssignableSelectorPartContext *assignableSelectorPart();
    antlr4::tree::TerminalNode *SUPER_();
    UnconditionalAssignableSelectorContext *unconditionalAssignableSelector();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableExpressionContext* assignableExpression();

  class  AssignableSelectorContext : public antlr4::ParserRuleContext {
  public:
    AssignableSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnconditionalAssignableSelectorContext *unconditionalAssignableSelector();
    antlr4::tree::TerminalNode *QUD();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *QU();
    antlr4::tree::TerminalNode *OB();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableSelectorContext* assignableSelector();

  class  AssignableSelectorPartContext : public antlr4::ParserRuleContext {
  public:
    AssignableSelectorPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignableSelectorContext *assignableSelector();
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableSelectorPartContext* assignableSelectorPart();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    CompoundAssignmentOperatorContext *compoundAssignmentOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  AwaitExpressionContext : public antlr4::ParserRuleContext {
  public:
    AwaitExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AWAIT_();
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AwaitExpressionContext* awaitExpression();

  class  BinaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeOperatorContext *multiplicativeOperator();
    AdditiveOperatorContext *additiveOperator();
    ShiftOperatorContext *shiftOperator();
    RelationalOperatorContext *relationalOperator();
    antlr4::tree::TerminalNode *EE();
    BitwiseOperatorContext *bitwiseOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryOperatorContext* binaryOperator();

  class  BitwiseAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    BitwiseAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> A();
    antlr4::tree::TerminalNode* A(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitwiseAndExpressionContext* bitwiseAndExpression();

  class  BitwiseOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitwiseOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *CIR();
    antlr4::tree::TerminalNode *P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitwiseOperatorContext* bitwiseOperator();

  class  BitwiseOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    BitwiseOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitwiseXorExpressionContext *> bitwiseXorExpression();
    BitwiseXorExpressionContext* bitwiseXorExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> P();
    antlr4::tree::TerminalNode* P(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitwiseOrExpressionContext* bitwiseOrExpression();

  class  BitwiseXorExpressionContext : public antlr4::ParserRuleContext {
  public:
    BitwiseXorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitwiseAndExpressionContext *> bitwiseAndExpression();
    BitwiseAndExpressionContext* bitwiseAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CIR();
    antlr4::tree::TerminalNode* CIR(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitwiseXorExpressionContext* bitwiseXorExpression();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBC();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *CBC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_();
    antlr4::tree::TerminalNode *FALSE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK_();
    antlr4::tree::TerminalNode *SC();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  CascadeContext : public antlr4::ParserRuleContext {
  public:
    CascadeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    CascadeSectionContext *cascadeSection();
    antlr4::tree::TerminalNode *QUDD();
    antlr4::tree::TerminalNode *DD();
    CascadeContext *cascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CascadeContext* cascade();
  CascadeContext* cascade(int precedence);
  class  CascadeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    CascadeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentOperatorContext *assignmentOperator();
    ExpressionWithoutCascadeContext *expressionWithoutCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CascadeAssignmentContext* cascadeAssignment();

  class  CascadeSectionContext : public antlr4::ParserRuleContext {
  public:
    CascadeSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CascadeSelectorContext *cascadeSelector();
    CascadeSectionTailContext *cascadeSectionTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CascadeSectionContext* cascadeSection();

  class  CascadeSectionTailContext : public antlr4::ParserRuleContext {
  public:
    CascadeSectionTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CascadeAssignmentContext *cascadeAssignment();
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);
    AssignableSelectorContext *assignableSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CascadeSectionTailContext* cascadeSectionTail();

  class  CascadeSelectorContext : public antlr4::ParserRuleContext {
  public:
    CascadeSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CB();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CascadeSelectorContext* cascadeSelector();

  class  CatchPartContext : public antlr4::ParserRuleContext {
  public:
    CatchPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH_();
    antlr4::tree::TerminalNode *OP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchPartContext* catchPart();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *OBC();
    antlr4::tree::TerminalNode *CBC();
    antlr4::tree::TerminalNode *ABSTRACT_();
    TypeParametersContext *typeParameters();
    SuperclassContext *superclass();
    InterfacesContext *interfaces();
    std::vector<MetadataContext *> metadata();
    MetadataContext* metadata(size_t i);
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);
    MixinApplicationClassContext *mixinApplicationClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *SC();
    MethodSignatureContext *methodSignature();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberDeclarationContext* classMemberDeclaration();

  class  CombinatorContext : public antlr4::ParserRuleContext {
  public:
    CombinatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *HIDE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CombinatorContext* combinator();

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    LibraryDeclarationContext *libraryDeclaration();
    PartDeclarationContext *partDeclaration();
    ExpressionContext *expression();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  CompoundAssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    CompoundAssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STE();
    antlr4::tree::TerminalNode *SE();
    antlr4::tree::TerminalNode *SQSE();
    antlr4::tree::TerminalNode *PE();
    antlr4::tree::TerminalNode *PLE();
    antlr4::tree::TerminalNode *ME();
    antlr4::tree::TerminalNode *LTLTE();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *AE();
    antlr4::tree::TerminalNode *CIRE();
    antlr4::tree::TerminalNode *POE();
    antlr4::tree::TerminalNode *QUQUEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundAssignmentOperatorContext* compoundAssignmentOperator();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfNullExpressionContext *ifNullExpression();
    antlr4::tree::TerminalNode *QU();
    std::vector<ExpressionWithoutCascadeContext *> expressionWithoutCascade();
    ExpressionWithoutCascadeContext* expressionWithoutCascade(size_t i);
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  ConfigurableUriContext : public antlr4::ParserRuleContext {
  public:
    ConfigurableUriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UriContext *uri();
    std::vector<ConfigurationUriContext *> configurationUri();
    ConfigurationUriContext* configurationUri(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConfigurableUriContext* configurableUri();

  class  ConfigurationUriContext : public antlr4::ParserRuleContext {
  public:
    ConfigurationUriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_();
    antlr4::tree::TerminalNode *OP();
    UriTestContext *uriTest();
    antlr4::tree::TerminalNode *CP();
    UriContext *uri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConfigurationUriContext* configurationUri();

  class  ConstantConstructorSignatureContext : public antlr4::ParserRuleContext {
  public:
    ConstantConstructorSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST_();
    ConstructorNameContext *constructorName();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantConstructorSignatureContext* constantConstructorSignature();

  class  ConstObjectExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstObjectExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST_();
    ConstructorDesignationContext *constructorDesignation();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstObjectExpressionContext* constObjectExpression();

  class  ConstructorDesignationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDesignationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    QualifiedNameContext *qualifiedName();
    TypeNameContext *typeName();
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorDesignationContext* constructorDesignation();

  class  ConstructorInvocationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorInvocationContext* constructorInvocation();

  class  ConstructorNameContext : public antlr4::ParserRuleContext {
  public:
    ConstructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorNameContext* constructorName();

  class  ConstructorSignatureContext : public antlr4::ParserRuleContext {
  public:
    ConstructorSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorNameContext *constructorName();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorSignatureContext* constructorSignature();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE_();
    antlr4::tree::TerminalNode *SC();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL_();
    FactoryConstructorSignatureContext *factoryConstructorSignature();
    ConstantConstructorSignatureContext *constantConstructorSignature();
    ConstructorSignatureContext *constructorSignature();
    GetterSignatureContext *getterSignature();
    SetterSignatureContext *setterSignature();
    FunctionSignatureContext *functionSignature();
    OperatorSignatureContext *operatorSignature();
    antlr4::tree::TerminalNode *STATIC_();
    antlr4::tree::TerminalNode *CONST_();
    StaticFinalDeclarationListContext *staticFinalDeclarationList();
    antlr4::tree::TerminalNode *FINAL_();
    antlr4::tree::TerminalNode *LATE_();
    InitializedIdentifierListContext *initializedIdentifierList();
    VarOrTypeContext *varOrType();
    antlr4::tree::TerminalNode *COVARIANT_();
    IdentifierListContext *identifierList();
    RedirectingFactoryConstructorSignatureContext *redirectingFactoryConstructorSignature();
    antlr4::tree::TerminalNode *ABSTRACT_();
    TypeContext *type();
    RedirectionContext *redirection();
    InitializersContext *initializers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  DeclaredIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DeclaredIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FinalConstVarOrTypeContext *finalConstVarOrType();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COVARIANT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaredIdentifierContext* declaredIdentifier();

  class  DefaultCaseContext : public antlr4::ParserRuleContext {
  public:
    DefaultCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_();
    antlr4::tree::TerminalNode *CO();
    StatementsContext *statements();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultCaseContext* defaultCase();

  class  DefaultFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    DefaultFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NormalFormalParameterContext *normalFormalParameter();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultFormalParameterContext* defaultFormalParameter();

  class  DefaultNamedParameterContext : public antlr4::ParserRuleContext {
  public:
    DefaultNamedParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    NormalFormalParameterNoMetadataContext *normalFormalParameterNoMetadata();
    antlr4::tree::TerminalNode *REQUIRED_();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultNamedParameterContext* defaultNamedParameter();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO_();
    StatementContext *statement();
    antlr4::tree::TerminalNode *WHILE_();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoStatementContext* doStatement();

  class  DottedIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    DottedIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> D();
    antlr4::tree::TerminalNode* D(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DottedIdentifierListContext* dottedIdentifierList();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionElementContext *expressionElement();
    MapElementContext *mapElement();
    SpreadElementContext *spreadElement();
    IfElementContext *ifElement();
    ForElementContext *forElement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementContext* element();

  class  ElementsContext : public antlr4::ParserRuleContext {
  public:
    ElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementsContext* elements();

  class  EnumEntryContext : public antlr4::ParserRuleContext {
  public:
    EnumEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumEntryContext* enumEntry();

  class  EnumTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OBC();
    std::vector<EnumEntryContext *> enumEntry();
    EnumEntryContext* enumEntry(size_t i);
    antlr4::tree::TerminalNode *CBC();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumTypeContext* enumType();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    EqualityOperatorContext *equalityOperator();
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  EqualityOperatorContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EE();
    antlr4::tree::TerminalNode *NE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityOperatorContext* equalityOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignableExpressionContext *assignableExpression();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();
    ConditionalExpressionContext *conditionalExpression();
    CascadeContext *cascade();
    ThrowExpressionContext *throwExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  ExpressionElementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionElementContext* expressionElement();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListContext* expressionList();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SC();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  ExpressionWithoutCascadeContext : public antlr4::ParserRuleContext {
  public:
    ExpressionWithoutCascadeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignableExpressionContext *assignableExpression();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionWithoutCascadeContext *expressionWithoutCascade();
    ConditionalExpressionContext *conditionalExpression();
    ThrowExpressionWithoutCascadeContext *throwExpressionWithoutCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionWithoutCascadeContext* expressionWithoutCascade();

  class  ExtensionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExtensionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENSION_();
    antlr4::tree::TerminalNode *ON_();
    TypeContext *type();
    antlr4::tree::TerminalNode *OBC();
    antlr4::tree::TerminalNode *CBC();
    IdentifierContext *identifier();
    TypeParametersContext *typeParameters();
    std::vector<MetadataContext *> metadata();
    MetadataContext* metadata(size_t i);
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExtensionDeclarationContext* extensionDeclaration();

  class  FactoryConstructorSignatureContext : public antlr4::ParserRuleContext {
  public:
    FactoryConstructorSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FACTORY_();
    ConstructorNameContext *constructorName();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *CONST_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactoryConstructorSignatureContext* factoryConstructorSignature();

  class  FieldFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FieldFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS_();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();
    FinalConstVarOrTypeContext *finalConstVarOrType();
    FormalParameterPartContext *formalParameterPart();
    antlr4::tree::TerminalNode *QU();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldFormalParameterContext* fieldFormalParameter();

  class  FieldInitializerContext : public antlr4::ParserRuleContext {
  public:
    FieldInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    InitializerExpressionContext *initializerExpression();
    antlr4::tree::TerminalNode *THIS_();
    antlr4::tree::TerminalNode *D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldInitializerContext* fieldInitializer();

  class  FinalConstVarOrTypeContext : public antlr4::ParserRuleContext {
  public:
    FinalConstVarOrTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL_();
    antlr4::tree::TerminalNode *LATE_();
    TypeContext *type();
    antlr4::tree::TerminalNode *CONST_();
    VarOrTypeContext *varOrType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinalConstVarOrTypeContext* finalConstVarOrType();

  class  FinallyPartContext : public antlr4::ParserRuleContext {
  public:
    FinallyPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY_();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyPartContext* finallyPart();

  class  ForElementContext : public antlr4::ParserRuleContext {
  public:
    ForElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_();
    antlr4::tree::TerminalNode *OP();
    ForLoopPartsContext *forLoopParts();
    antlr4::tree::TerminalNode *CP();
    ElementContext *element();
    antlr4::tree::TerminalNode *AWAIT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForElementContext* forElement();

  class  ForInitializerStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitializerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();
    antlr4::tree::TerminalNode *SC();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInitializerStatementContext* forInitializerStatement();

  class  ForLoopPartsContext : public antlr4::ParserRuleContext {
  public:
    ForLoopPartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForInitializerStatementContext *forInitializerStatement();
    antlr4::tree::TerminalNode *SC();
    ExpressionContext *expression();
    ExpressionListContext *expressionList();
    MetadataContext *metadata();
    DeclaredIdentifierContext *declaredIdentifier();
    antlr4::tree::TerminalNode *IN_();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForLoopPartsContext* forLoopParts();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();
    NormalFormalParametersContext *normalFormalParameters();
    antlr4::tree::TerminalNode *C();
    OptionalOrNamedFormalParametersContext *optionalOrNamedFormalParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterPartContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormalParameterListContext *formalParameterList();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterPartContext* formalParameterPart();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_();
    antlr4::tree::TerminalNode *OP();
    ForLoopPartsContext *forLoopParts();
    antlr4::tree::TerminalNode *CP();
    StatementContext *statement();
    antlr4::tree::TerminalNode *AWAIT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATIVE_();
    antlr4::tree::TerminalNode *SC();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *EG();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASYNC_();
    BlockContext *block();
    antlr4::tree::TerminalNode *SYNC_();
    antlr4::tree::TerminalNode *ST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  FunctionExpressionContext : public antlr4::ParserRuleContext {
  public:
    FunctionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormalParameterPartContext *formalParameterPart();
    FunctionExpressionBodyContext *functionExpressionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionExpressionContext* functionExpression();

  class  FunctionExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EG();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASYNC_();
    BlockContext *block();
    antlr4::tree::TerminalNode *SYNC_();
    antlr4::tree::TerminalNode *ST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionExpressionBodyContext* functionExpressionBody();

  class  FunctionFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FormalParameterPartContext *formalParameterPart();
    antlr4::tree::TerminalNode *COVARIANT_();
    TypeContext *type();
    antlr4::tree::TerminalNode *QU();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionFormalParameterContext* functionFormalParameter();

  class  FunctionPrefixContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionPrefixContext* functionPrefix();

  class  FunctionSignatureContext : public antlr4::ParserRuleContext {
  public:
    FunctionSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FormalParameterPartContext *formalParameterPart();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionSignatureContext* functionSignature();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeTailsContext *functionTypeTails();
    TypeNotFunctionContext *typeNotFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeContext* functionType();

  class  FunctionTypeAliasContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrefixContext *functionPrefix();
    FormalParameterPartContext *formalParameterPart();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeAliasContext* functionTypeAlias();

  class  FunctionTypeTailContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_();
    ParameterTypeListContext *parameterTypeList();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeTailContext* functionTypeTail();

  class  FunctionTypeTailsContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeTailsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeTailContext *functionTypeTail();
    FunctionTypeTailsContext *functionTypeTails();
    antlr4::tree::TerminalNode *QU();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeTailsContext* functionTypeTails();

  class  GetterSignatureContext : public antlr4::ParserRuleContext {
  public:
    GetterSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_();
    IdentifierContext *identifier();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetterSignatureContext* getterSignature();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ABSTRACT_();
    antlr4::tree::TerminalNode *AS_();
    antlr4::tree::TerminalNode *COVARIANT_();
    antlr4::tree::TerminalNode *DEFERRED_();
    antlr4::tree::TerminalNode *DYNAMIC_();
    antlr4::tree::TerminalNode *EXPORT_();
    antlr4::tree::TerminalNode *EXTERNAL_();
    antlr4::tree::TerminalNode *EXTENSION_();
    antlr4::tree::TerminalNode *FACTORY_();
    antlr4::tree::TerminalNode *FUNCTION_();
    antlr4::tree::TerminalNode *GET_();
    antlr4::tree::TerminalNode *IMPLEMENTS_();
    antlr4::tree::TerminalNode *IMPORT_();
    antlr4::tree::TerminalNode *INTERFACE_();
    antlr4::tree::TerminalNode *LATE_();
    antlr4::tree::TerminalNode *LIBRARY_();
    antlr4::tree::TerminalNode *MIXIN_();
    antlr4::tree::TerminalNode *OPERATOR_();
    antlr4::tree::TerminalNode *PART_();
    antlr4::tree::TerminalNode *REQUIRED_();
    antlr4::tree::TerminalNode *SET_();
    antlr4::tree::TerminalNode *STATIC_();
    antlr4::tree::TerminalNode *TYPEDEF_();
    antlr4::tree::TerminalNode *ASYNC_();
    antlr4::tree::TerminalNode *HIDE_();
    antlr4::tree::TerminalNode *OF_();
    antlr4::tree::TerminalNode *ON_();
    antlr4::tree::TerminalNode *SHOW_();
    antlr4::tree::TerminalNode *SYNC_();
    antlr4::tree::TerminalNode *AWAIT_();
    antlr4::tree::TerminalNode *YIELD_();
    antlr4::tree::TerminalNode *NATIVE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierListContext* identifierList();

  class  IfElementContext : public antlr4::ParserRuleContext {
  public:
    IfElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    antlr4::tree::TerminalNode *ELSE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfElementContext* ifElement();

  class  IfNullExpressionContext : public antlr4::ParserRuleContext {
  public:
    IfNullExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalOrExpressionContext *> logicalOrExpression();
    LogicalOrExpressionContext* logicalOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUQU();
    antlr4::tree::TerminalNode* QUQU(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfNullExpressionContext* ifNullExpression();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  ImportOrExportContext : public antlr4::ParserRuleContext {
  public:
    ImportOrExportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibraryImportContext *libraryImport();
    LibraryExportContext *libraryExport();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportOrExportContext* importOrExport();

  class  ImportSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ImportSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT_();
    ConfigurableUriContext *configurableUri();
    antlr4::tree::TerminalNode *SC();
    antlr4::tree::TerminalNode *AS_();
    IdentifierContext *identifier();
    std::vector<CombinatorContext *> combinator();
    CombinatorContext* combinator(size_t i);
    antlr4::tree::TerminalNode *DEFERRED_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportSpecificationContext* importSpecification();

  class  IncrementOperatorContext : public antlr4::ParserRuleContext {
  public:
    IncrementOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLPL();
    antlr4::tree::TerminalNode *MM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementOperatorContext* incrementOperator();

  class  InitializedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    InitializedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializedIdentifierContext* initializedIdentifier();

  class  InitializedIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    InitializedIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializedIdentifierContext *> initializedIdentifier();
    InitializedIdentifierContext* initializedIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializedIdentifierListContext* initializedIdentifierList();

  class  InitializedVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InitializedVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaredIdentifierContext *declaredIdentifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);
    std::vector<InitializedIdentifierContext *> initializedIdentifier();
    InitializedIdentifierContext* initializedIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializedVariableDeclarationContext* initializedVariableDeclaration();

  class  InitializerExpressionContext : public antlr4::ParserRuleContext {
  public:
    InitializerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    CascadeContext *cascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerExpressionContext* initializerExpression();

  class  InitializerListEntryContext : public antlr4::ParserRuleContext {
  public:
    InitializerListEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER_();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();
    FieldInitializerContext *fieldInitializer();
    AssertionContext *assertion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerListEntryContext* initializerListEntry();

  class  InitializersContext : public antlr4::ParserRuleContext {
  public:
    InitializersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    std::vector<InitializerListEntryContext *> initializerListEntry();
    InitializerListEntryContext* initializerListEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializersContext* initializers();

  class  InterfacesContext : public antlr4::ParserRuleContext {
  public:
    InterfacesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTS_();
    TypeNotVoidListContext *typeNotVoidList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfacesContext* interfaces();

  class  IsOperatorContext : public antlr4::ParserRuleContext {
  public:
    IsOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS_();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsOperatorContext* isOperator();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  LetExpressionContext : public antlr4::ParserRuleContext {
  public:
    LetExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET_();
    StaticFinalDeclarationListContext *staticFinalDeclarationList();
    antlr4::tree::TerminalNode *IN_();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LetExpressionContext* letExpression();

  class  LibraryDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LibraryDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibraryNameContext *libraryName();
    std::vector<ImportOrExportContext *> importOrExport();
    ImportOrExportContext* importOrExport(size_t i);
    std::vector<PartDirectiveContext *> partDirective();
    PartDirectiveContext* partDirective(size_t i);
    std::vector<MetadataContext *> metadata();
    MetadataContext* metadata(size_t i);
    std::vector<TopLevelDeclarationContext *> topLevelDeclaration();
    TopLevelDeclarationContext* topLevelDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryDeclarationContext* libraryDeclaration();

  class  LibraryExportContext : public antlr4::ParserRuleContext {
  public:
    LibraryExportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    antlr4::tree::TerminalNode *EXPORT_();
    ConfigurableUriContext *configurableUri();
    antlr4::tree::TerminalNode *SC();
    std::vector<CombinatorContext *> combinator();
    CombinatorContext* combinator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryExportContext* libraryExport();

  class  LibraryImportContext : public antlr4::ParserRuleContext {
  public:
    LibraryImportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    ImportSpecificationContext *importSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryImportContext* libraryImport();

  class  LibraryNameContext : public antlr4::ParserRuleContext {
  public:
    LibraryNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    antlr4::tree::TerminalNode *LIBRARY_();
    DottedIdentifierListContext *dottedIdentifierList();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryNameContext* libraryName();

  class  ListLiteralContext : public antlr4::ParserRuleContext {
  public:
    ListLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *CONST_();
    TypeArgumentsContext *typeArguments();
    ElementsContext *elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListLiteralContext* listLiteral();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullLiteralContext *nullLiteral();
    BooleanLiteralContext *booleanLiteral();
    NumericLiteralContext *numericLiteral();
    StringLiteralContext *stringLiteral();
    SymbolLiteralContext *symbolLiteral();
    ListLiteralContext *listLiteral();
    SetOrMapLiteralContext *setOrMapLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  LocalFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    FunctionSignatureContext *functionSignature();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalFunctionDeclarationContext* localFunctionDeclaration();

  class  LocalVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    InitializedVariableDeclarationContext *initializedVariableDeclaration();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalVariableDeclarationContext* localVariableDeclaration();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AA();
    antlr4::tree::TerminalNode* AA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PP();
    antlr4::tree::TerminalNode* PP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  MapElementContext : public antlr4::ParserRuleContext {
  public:
    MapElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapElementContext* mapElement();

  class  MetadataContext : public antlr4::ParserRuleContext {
  public:
    MetadataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<MetadatumContext *> metadatum();
    MetadatumContext* metadatum(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MetadataContext* metadata();

  class  MetadatumContext : public antlr4::ParserRuleContext {
  public:
    MetadatumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    QualifiedNameContext *qualifiedName();
    ConstructorDesignationContext *constructorDesignation();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MetadatumContext* metadatum();

  class  MethodSignatureContext : public antlr4::ParserRuleContext {
  public:
    MethodSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorSignatureContext *constructorSignature();
    InitializersContext *initializers();
    FactoryConstructorSignatureContext *factoryConstructorSignature();
    FunctionSignatureContext *functionSignature();
    antlr4::tree::TerminalNode *STATIC_();
    GetterSignatureContext *getterSignature();
    SetterSignatureContext *setterSignature();
    OperatorSignatureContext *operatorSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodSignatureContext* methodSignature();

  class  MinusOperatorContext : public antlr4::ParserRuleContext {
  public:
    MinusOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MinusOperatorContext* minusOperator();

  class  MixinApplicationContext : public antlr4::ParserRuleContext {
  public:
    MixinApplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNotVoidContext *typeNotVoid();
    MixinsContext *mixins();
    InterfacesContext *interfaces();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MixinApplicationContext* mixinApplication();

  class  MixinApplicationClassContext : public antlr4::ParserRuleContext {
  public:
    MixinApplicationClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    MixinApplicationContext *mixinApplication();
    antlr4::tree::TerminalNode *SC();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MixinApplicationClassContext* mixinApplicationClass();

  class  MixinDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MixinDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIXIN_();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *OBC();
    antlr4::tree::TerminalNode *CBC();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *ON_();
    TypeNotVoidListContext *typeNotVoidList();
    InterfacesContext *interfaces();
    std::vector<MetadataContext *> metadata();
    MetadataContext* metadata(size_t i);
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MixinDeclarationContext* mixinDeclaration();

  class  MixinsContext : public antlr4::ParserRuleContext {
  public:
    MixinsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_();
    TypeNotVoidListContext *typeNotVoidList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MixinsContext* mixins();

  class  MultilineStringContext : public antlr4::ParserRuleContext {
  public:
    MultilineStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiLineString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultilineStringContext* multilineString();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryExpressionContext *> unaryExpression();
    UnaryExpressionContext* unaryExpression(size_t i);
    std::vector<MultiplicativeOperatorContext *> multiplicativeOperator();
    MultiplicativeOperatorContext* multiplicativeOperator(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  MultiplicativeOperatorContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ST();
    antlr4::tree::TerminalNode *SL();
    antlr4::tree::TerminalNode *PC();
    antlr4::tree::TerminalNode *SQS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeOperatorContext* multiplicativeOperator();

  class  NamedArgumentContext : public antlr4::ParserRuleContext {
  public:
    NamedArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedArgumentContext* namedArgument();

  class  NamedFormalParametersContext : public antlr4::ParserRuleContext {
  public:
    NamedFormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBC();
    std::vector<DefaultNamedParameterContext *> defaultNamedParameter();
    DefaultNamedParameterContext* defaultNamedParameter(size_t i);
    antlr4::tree::TerminalNode *CBC();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedFormalParametersContext* namedFormalParameters();

  class  NamedParameterTypeContext : public antlr4::ParserRuleContext {
  public:
    NamedParameterTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    TypedIdentifierContext *typedIdentifier();
    antlr4::tree::TerminalNode *REQUIRED_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedParameterTypeContext* namedParameterType();

  class  NamedParameterTypesContext : public antlr4::ParserRuleContext {
  public:
    NamedParameterTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBC();
    std::vector<NamedParameterTypeContext *> namedParameterType();
    NamedParameterTypeContext* namedParameterType(size_t i);
    antlr4::tree::TerminalNode *CBC();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedParameterTypesContext* namedParameterTypes();

  class  NegationOperatorContext : public antlr4::ParserRuleContext {
  public:
    NegationOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NegationOperatorContext* negationOperator();

  class  NewExpressionContext : public antlr4::ParserRuleContext {
  public:
    NewExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW_();
    ConstructorDesignationContext *constructorDesignation();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewExpressionContext* newExpression();

  class  NonLabelledStatementContext : public antlr4::ParserRuleContext {
  public:
    NonLabelledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    LocalVariableDeclarationContext *localVariableDeclaration();
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    DoStatementContext *doStatement();
    SwitchStatementContext *switchStatement();
    IfStatementContext *ifStatement();
    RethrowStatementContext *rethrowStatement();
    TryStatementContext *tryStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    ReturnStatementContext *returnStatement();
    YieldStatementContext *yieldStatement();
    YieldEachStatementContext *yieldEachStatement();
    ExpressionStatementContext *expressionStatement();
    AssertStatementContext *assertStatement();
    LocalFunctionDeclarationContext *localFunctionDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NonLabelledStatementContext* nonLabelledStatement();

  class  NormalFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    NormalFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    NormalFormalParameterNoMetadataContext *normalFormalParameterNoMetadata();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NormalFormalParameterContext* normalFormalParameter();

  class  NormalFormalParameterNoMetadataContext : public antlr4::ParserRuleContext {
  public:
    NormalFormalParameterNoMetadataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionFormalParameterContext *functionFormalParameter();
    FieldFormalParameterContext *fieldFormalParameter();
    SimpleFormalParameterContext *simpleFormalParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NormalFormalParameterNoMetadataContext* normalFormalParameterNoMetadata();

  class  NormalFormalParametersContext : public antlr4::ParserRuleContext {
  public:
    NormalFormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NormalFormalParameterContext *> normalFormalParameter();
    NormalFormalParameterContext* normalFormalParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NormalFormalParametersContext* normalFormalParameters();

  class  NormalParameterTypeContext : public antlr4::ParserRuleContext {
  public:
    NormalParameterTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    TypedIdentifierContext *typedIdentifier();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NormalParameterTypeContext* normalParameterType();

  class  NormalParameterTypesContext : public antlr4::ParserRuleContext {
  public:
    NormalParameterTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NormalParameterTypeContext *> normalParameterType();
    NormalParameterTypeContext* normalParameterType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NormalParameterTypesContext* normalParameterTypes();

  class  NullLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullLiteralContext* nullLiteral();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  OnPartContext : public antlr4::ParserRuleContext {
  public:
    OnPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CatchPartContext *catchPart();
    BlockContext *block();
    antlr4::tree::TerminalNode *ON_();
    TypeNotVoidContext *typeNotVoid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnPartContext* onPart();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUIG();
    BinaryOperatorContext *binaryOperator();
    antlr4::tree::TerminalNode *OB();
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorContext* operator_();

  class  OperatorSignatureContext : public antlr4::ParserRuleContext {
  public:
    OperatorSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR_();
    OperatorContext *operator_();
    FormalParameterListContext *formalParameterList();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorSignatureContext* operatorSignature();

  class  OptionalOrNamedFormalParametersContext : public antlr4::ParserRuleContext {
  public:
    OptionalOrNamedFormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionalPositionalFormalParametersContext *optionalPositionalFormalParameters();
    NamedFormalParametersContext *namedFormalParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalOrNamedFormalParametersContext* optionalOrNamedFormalParameters();

  class  OptionalParameterTypesContext : public antlr4::ParserRuleContext {
  public:
    OptionalParameterTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionalPositionalParameterTypesContext *optionalPositionalParameterTypes();
    NamedParameterTypesContext *namedParameterTypes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalParameterTypesContext* optionalParameterTypes();

  class  OptionalPositionalFormalParametersContext : public antlr4::ParserRuleContext {
  public:
    OptionalPositionalFormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    std::vector<DefaultFormalParameterContext *> defaultFormalParameter();
    DefaultFormalParameterContext* defaultFormalParameter(size_t i);
    antlr4::tree::TerminalNode *CB();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalPositionalFormalParametersContext* optionalPositionalFormalParameters();

  class  OptionalPositionalParameterTypesContext : public antlr4::ParserRuleContext {
  public:
    OptionalPositionalParameterTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    NormalParameterTypesContext *normalParameterTypes();
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalPositionalParameterTypesContext* optionalPositionalParameterTypes();

  class  ParameterTypeListContext : public antlr4::ParserRuleContext {
  public:
    ParameterTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();
    NormalParameterTypesContext *normalParameterTypes();
    antlr4::tree::TerminalNode *C();
    OptionalParameterTypesContext *optionalParameterTypes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterTypeListContext* parameterTypeList();

  class  PartDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PartDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartHeaderContext *partHeader();
    std::vector<MetadataContext *> metadata();
    MetadataContext* metadata(size_t i);
    std::vector<TopLevelDeclarationContext *> topLevelDeclaration();
    TopLevelDeclarationContext* topLevelDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartDeclarationContext* partDeclaration();

  class  PartDirectiveContext : public antlr4::ParserRuleContext {
  public:
    PartDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    antlr4::tree::TerminalNode *PART_();
    UriContext *uri();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartDirectiveContext* partDirective();

  class  PartHeaderContext : public antlr4::ParserRuleContext {
  public:
    PartHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    antlr4::tree::TerminalNode *PART_();
    antlr4::tree::TerminalNode *OF_();
    antlr4::tree::TerminalNode *SC();
    DottedIdentifierListContext *dottedIdentifierList();
    UriContext *uri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartHeaderContext* partHeader();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignableExpressionContext *assignableExpression();
    PostfixOperatorContext *postfixOperator();
    PrimaryContext *primary();
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixExpressionContext* postfixExpression();

  class  PostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementOperatorContext *incrementOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixOperatorContext* postfixOperator();

  class  PrefixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MinusOperatorContext *minusOperator();
    NegationOperatorContext *negationOperator();
    TildeOperatorContext *tildeOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixOperatorContext* prefixOperator();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThisExpressionContext *thisExpression();
    antlr4::tree::TerminalNode *SUPER_();
    UnconditionalAssignableSelectorContext *unconditionalAssignableSelector();
    ArgumentPartContext *argumentPart();
    FunctionExpressionContext *functionExpression();
    LiteralContext *literal();
    IdentifierContext *identifier();
    NewExpressionContext *newExpression();
    ConstObjectExpressionContext *constObjectExpression();
    ConstructorInvocationContext *constructorInvocation();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  QualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> D();
    antlr4::tree::TerminalNode* D(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedNameContext* qualifiedName();

  class  RedirectingFactoryConstructorSignatureContext : public antlr4::ParserRuleContext {
  public:
    RedirectingFactoryConstructorSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FACTORY_();
    ConstructorNameContext *constructorName();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *EQ();
    ConstructorDesignationContext *constructorDesignation();
    antlr4::tree::TerminalNode *CONST_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RedirectingFactoryConstructorSignatureContext* redirectingFactoryConstructorSignature();

  class  RedirectionContext : public antlr4::ParserRuleContext {
  public:
    RedirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CO();
    antlr4::tree::TerminalNode *THIS_();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RedirectionContext* redirection();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitwiseOrExpressionContext *> bitwiseOrExpression();
    BitwiseOrExpressionContext* bitwiseOrExpression(size_t i);
    TypeTestContext *typeTest();
    TypeCastContext *typeCast();
    RelationalOperatorContext *relationalOperator();
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  RelationalOperatorContext : public antlr4::ParserRuleContext {
  public:
    RelationalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationalOperatorContext* relationalOperator();

  class  Reserved_wordContext : public antlr4::ParserRuleContext {
  public:
    Reserved_wordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT_();
    antlr4::tree::TerminalNode *BREAK_();
    antlr4::tree::TerminalNode *CASE_();
    antlr4::tree::TerminalNode *CATCH_();
    antlr4::tree::TerminalNode *CLASS_();
    antlr4::tree::TerminalNode *CONST_();
    antlr4::tree::TerminalNode *CONTINUE_();
    antlr4::tree::TerminalNode *DEFAULT_();
    antlr4::tree::TerminalNode *DO_();
    antlr4::tree::TerminalNode *ELSE_();
    antlr4::tree::TerminalNode *ENUM_();
    antlr4::tree::TerminalNode *EXTENDS_();
    antlr4::tree::TerminalNode *FALSE_();
    antlr4::tree::TerminalNode *FINAL_();
    antlr4::tree::TerminalNode *FINALLY_();
    antlr4::tree::TerminalNode *FOR_();
    antlr4::tree::TerminalNode *IF_();
    antlr4::tree::TerminalNode *IN_();
    antlr4::tree::TerminalNode *IS_();
    antlr4::tree::TerminalNode *NEW_();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *RETHROW_();
    antlr4::tree::TerminalNode *RETURN_();
    antlr4::tree::TerminalNode *SUPER_();
    antlr4::tree::TerminalNode *SWITCH_();
    antlr4::tree::TerminalNode *THIS_();
    antlr4::tree::TerminalNode *THROW_();
    antlr4::tree::TerminalNode *TRUE_();
    antlr4::tree::TerminalNode *TRY_();
    antlr4::tree::TerminalNode *VAR_();
    antlr4::tree::TerminalNode *VOID_();
    antlr4::tree::TerminalNode *WHILE_();
    antlr4::tree::TerminalNode *WITH_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reserved_wordContext* reserved_word();

  class  RethrowStatementContext : public antlr4::ParserRuleContext {
  public:
    RethrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETHROW_();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RethrowStatementContext* rethrowStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_();
    antlr4::tree::TerminalNode *SC();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    AssignableSelectorContext *assignableSelector();
    ArgumentPartContext *argumentPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorContext* selector();

  class  SetOrMapLiteralContext : public antlr4::ParserRuleContext {
  public:
    SetOrMapLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBC();
    antlr4::tree::TerminalNode *CBC();
    antlr4::tree::TerminalNode *CONST_();
    TypeArgumentsContext *typeArguments();
    ElementsContext *elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetOrMapLiteralContext* setOrMapLiteral();

  class  SetterSignatureContext : public antlr4::ParserRuleContext {
  public:
    SetterSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_();
    IdentifierContext *identifier();
    FormalParameterListContext *formalParameterList();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetterSignatureContext* setterSignature();

  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    std::vector<ShiftOperatorContext *> shiftOperator();
    ShiftOperatorContext* shiftOperator(size_t i);
    antlr4::tree::TerminalNode *SUPER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTLT();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class  SimpleFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    SimpleFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaredIdentifierContext *declaredIdentifier();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COVARIANT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleFormalParameterContext* simpleFormalParameter();

  class  SingleLineStringContext : public antlr4::ParserRuleContext {
  public:
    SingleLineStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SingleLineString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleLineStringContext* singleLineString();

  class  SpreadElementContext : public antlr4::ParserRuleContext {
  public:
    SpreadElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DDD();
    antlr4::tree::TerminalNode *DDDQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpreadElementContext* spreadElement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonLabelledStatementContext *nonLabelledStatement();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementsContext* statements();

  class  StaticFinalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticFinalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StaticFinalDeclarationContext* staticFinalDeclaration();

  class  StaticFinalDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    StaticFinalDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StaticFinalDeclarationContext *> staticFinalDeclaration();
    StaticFinalDeclarationContext* staticFinalDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StaticFinalDeclarationListContext* staticFinalDeclarationList();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultilineStringContext *> multilineString();
    MultilineStringContext* multilineString(size_t i);
    std::vector<SingleLineStringContext *> singleLineString();
    SingleLineStringContext* singleLineString(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  SuperclassContext : public antlr4::ParserRuleContext {
  public:
    SuperclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS_();
    TypeNotVoidContext *typeNotVoid();
    MixinsContext *mixins();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SuperclassContext* superclass();

  class  SwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    SwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE_();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CO();
    StatementsContext *statements();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchCaseContext* switchCase();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH_();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *OBC();
    antlr4::tree::TerminalNode *CBC();
    std::vector<SwitchCaseContext *> switchCase();
    SwitchCaseContext* switchCase(size_t i);
    DefaultCaseContext *defaultCase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SymbolLiteralContext : public antlr4::ParserRuleContext {
  public:
    SymbolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PO();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    OperatorContext *operator_();
    antlr4::tree::TerminalNode *VOID_();
    std::vector<antlr4::tree::TerminalNode *> D();
    antlr4::tree::TerminalNode* D(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolLiteralContext* symbolLiteral();

  class  ThisExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThisExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThisExpressionContext* thisExpression();

  class  ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW_();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowExpressionContext* throwExpression();

  class  ThrowExpressionWithoutCascadeContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionWithoutCascadeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW_();
    ExpressionWithoutCascadeContext *expressionWithoutCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowExpressionWithoutCascadeContext* throwExpressionWithoutCascade();

  class  TildeOperatorContext : public antlr4::ParserRuleContext {
  public:
    TildeOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUIG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TildeOperatorContext* tildeOperator();

  class  TopLevelDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    MixinDeclarationContext *mixinDeclaration();
    ExtensionDeclarationContext *extensionDeclaration();
    EnumTypeContext *enumType();
    TypeAliasContext *typeAlias();
    antlr4::tree::TerminalNode *EXTERNAL_();
    FunctionSignatureContext *functionSignature();
    antlr4::tree::TerminalNode *SC();
    GetterSignatureContext *getterSignature();
    SetterSignatureContext *setterSignature();
    FunctionBodyContext *functionBody();
    StaticFinalDeclarationListContext *staticFinalDeclarationList();
    antlr4::tree::TerminalNode *FINAL_();
    antlr4::tree::TerminalNode *CONST_();
    TypeContext *type();
    antlr4::tree::TerminalNode *LATE_();
    InitializedIdentifierListContext *initializedIdentifierList();
    VarOrTypeContext *varOrType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelDeclarationContext* topLevelDeclaration();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY_();
    BlockContext *block();
    FinallyPartContext *finallyPart();
    std::vector<OnPartContext *> onPart();
    OnPartContext* onPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryStatementContext* tryStatement();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeContext *functionType();
    antlr4::tree::TerminalNode *QU();
    TypeNotFunctionContext *typeNotFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  TypeAliasContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF_();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *EQ();
    TypeContext *type();
    antlr4::tree::TerminalNode *SC();
    TypeParametersContext *typeParameters();
    FunctionTypeAliasContext *functionTypeAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAliasContext* typeAlias();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    TypeListContext *typeList();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  TypeCastContext : public antlr4::ParserRuleContext {
  public:
    TypeCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsOperatorContext *asOperator();
    TypeNotVoidContext *typeNotVoid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeCastContext* typeCast();

  class  TypedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypedIdentifierContext* typedIdentifier();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASYNC_();
    antlr4::tree::TerminalNode *HIDE_();
    antlr4::tree::TerminalNode *OF_();
    antlr4::tree::TerminalNode *ON_();
    antlr4::tree::TerminalNode *SHOW_();
    antlr4::tree::TerminalNode *SYNC_();
    antlr4::tree::TerminalNode *AWAIT_();
    antlr4::tree::TerminalNode *YIELD_();
    antlr4::tree::TerminalNode *DYNAMIC_();
    antlr4::tree::TerminalNode *NATIVE_();
    antlr4::tree::TerminalNode *FUNCTION_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeListContext* typeList();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    antlr4::tree::TerminalNode *D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  TypeNotFunctionContext : public antlr4::ParserRuleContext {
  public:
    TypeNotFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID_();
    TypeNotVoidNotFunctionContext *typeNotVoidNotFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNotFunctionContext* typeNotFunction();

  class  TypeNotVoidContext : public antlr4::ParserRuleContext {
  public:
    TypeNotVoidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeContext *functionType();
    antlr4::tree::TerminalNode *QU();
    TypeNotVoidNotFunctionContext *typeNotVoidNotFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNotVoidContext* typeNotVoid();

  class  TypeNotVoidListContext : public antlr4::ParserRuleContext {
  public:
    TypeNotVoidListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeNotVoidContext *> typeNotVoid();
    TypeNotVoidContext* typeNotVoid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNotVoidListContext* typeNotVoidList();

  class  TypeNotVoidNotFunctionContext : public antlr4::ParserRuleContext {
  public:
    TypeNotVoidNotFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *QU();
    antlr4::tree::TerminalNode *FUNCTION_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNotVoidNotFunctionContext* typeNotVoidNotFunction();

  class  TypeNotVoidNotFunctionListContext : public antlr4::ParserRuleContext {
  public:
    TypeNotVoidNotFunctionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeNotVoidNotFunctionContext *> typeNotVoidNotFunction();
    TypeNotVoidNotFunctionContext* typeNotVoidNotFunction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNotVoidNotFunctionListContext* typeNotVoidNotFunctionList();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EXTENDS_();
    TypeNotVoidContext *typeNotVoid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeTestContext : public antlr4::ParserRuleContext {
  public:
    TypeTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IsOperatorContext *isOperator();
    TypeNotVoidContext *typeNotVoid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTestContext* typeTest();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixOperatorContext *prefixOperator();
    UnaryExpressionContext *unaryExpression();
    AwaitExpressionContext *awaitExpression();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *SUPER_();
    MinusOperatorContext *minusOperator();
    TildeOperatorContext *tildeOperator();
    IncrementOperatorContext *incrementOperator();
    AssignableExpressionContext *assignableExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnconditionalAssignableSelectorContext : public antlr4::ParserRuleContext {
  public:
    UnconditionalAssignableSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *D();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnconditionalAssignableSelectorContext* unconditionalAssignableSelector();

  class  UriContext : public antlr4::ParserRuleContext {
  public:
    UriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UriContext* uri();

  class  UriTestContext : public antlr4::ParserRuleContext {
  public:
    UriTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DottedIdentifierListContext *dottedIdentifierList();
    antlr4::tree::TerminalNode *EE();
    StringLiteralContext *stringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UriTestContext* uriTest();

  class  VarOrTypeContext : public antlr4::ParserRuleContext {
  public:
    VarOrTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarOrTypeContext* varOrType();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE_();
    antlr4::tree::TerminalNode *OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CP();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  YieldEachStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldEachStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YIELD_();
    antlr4::tree::TerminalNode *ST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YieldEachStatementContext* yieldEachStatement();

  class  YieldStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YIELD_();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YieldStatementContext* yieldStatement();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool cascadeSempred(CascadeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

