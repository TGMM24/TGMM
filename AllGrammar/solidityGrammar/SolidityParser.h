
// Generated from Solidity.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SolidityParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    Int = 93, Uint = 94, Byte = 95, Fixed = 96, Ufixed = 97, BooleanLiteral = 98, 
    DecimalNumber = 99, HexNumber = 100, NumberUnit = 101, HexLiteralFragment = 102, 
    ReservedKeyword = 103, AnonymousKeyword = 104, BreakKeyword = 105, ConstantKeyword = 106, 
    ImmutableKeyword = 107, ContinueKeyword = 108, LeaveKeyword = 109, ExternalKeyword = 110, 
    IndexedKeyword = 111, InternalKeyword = 112, PayableKeyword = 113, PrivateKeyword = 114, 
    PublicKeyword = 115, VirtualKeyword = 116, PureKeyword = 117, TypeKeyword = 118, 
    ViewKeyword = 119, ConstructorKeyword = 120, FallbackKeyword = 121, 
    ReceiveKeyword = 122, Identifier = 123, StringLiteralFragment = 124, 
    VersionLiteral = 125, WS = 126, COMMENT = 127, LINE_COMMENT = 128
  };

  enum {
    RuleSourceUnit = 0, RulePragmaDirective = 1, RulePragmaName = 2, RulePragmaValue = 3, 
    RuleVersion = 4, RuleVersionConstraint = 5, RuleVersionOperator = 6, 
    RuleImportDirective = 7, RuleImportDeclaration = 8, RuleContractDefinition = 9, 
    RuleInheritanceSpecifier = 10, RuleContractPart = 11, RuleStateVariableDeclaration = 12, 
    RuleOverrideSpecifier = 13, RuleUsingForDeclaration = 14, RuleStructDefinition = 15, 
    RuleModifierDefinition = 16, RuleFunctionDefinition = 17, RuleFunctionDescriptor = 18, 
    RuleReturnParameters = 19, RuleModifierList = 20, RuleModifierInvocation = 21, 
    RuleEventDefinition = 22, RuleEnumDefinition = 23, RuleEnumValue = 24, 
    RuleParameterList = 25, RuleParameter = 26, RuleEventParameterList = 27, 
    RuleEventParameter = 28, RuleVariableDeclaration = 29, RuleTypeName = 30, 
    RuleUserDefinedTypeName = 31, RuleMapping = 32, RuleFunctionTypeName = 33, 
    RuleStorageLocation = 34, RuleStateMutability = 35, RuleBlock = 36, 
    RuleStatement = 37, RuleExpressionStatement = 38, RuleIfStatement = 39, 
    RuleTryStatement = 40, RuleCatchClause = 41, RuleWhileStatement = 42, 
    RuleForStatement = 43, RuleSimpleStatement = 44, RuleInlineAssemblyStatement = 45, 
    RuleDoWhileStatement = 46, RuleContinueStatement = 47, RuleBreakStatement = 48, 
    RuleReturnStatement = 49, RuleThrowStatement = 50, RuleEmitStatement = 51, 
    RuleVariableDeclarationStatement = 52, RuleVariableDeclarationList = 53, 
    RuleIdentifierList = 54, RuleElementaryTypeName = 55, RuleExpression = 56, 
    RulePrimaryExpression = 57, RuleExpressionList = 58, RuleNameValueList = 59, 
    RuleNameValue = 60, RuleFunctionCallArguments = 61, RuleFunctionCall = 62, 
    RuleTupleExpression = 63, RuleTypeNameExpression = 64, RuleAssemblyItem = 65, 
    RuleAssemblyBlock = 66, RuleAssemblyExpression = 67, RuleAssemblyCall = 68, 
    RuleAssemblyLocalDefinition = 69, RuleAssemblyAssignment = 70, RuleAssemblyIdentifierList = 71, 
    RuleAssemblyStackAssignment = 72, RuleLabelDefinition = 73, RuleAssemblySwitch = 74, 
    RuleAssemblyCase = 75, RuleAssemblyFunctionDefinition = 76, RuleAssemblyFunctionReturns = 77, 
    RuleAssemblyFor = 78, RuleAssemblyIf = 79, RuleAssemblyLiteral = 80, 
    RuleAssemblyTypedVariableList = 81, RuleAssemblyType = 82, RuleSubAssembly = 83, 
    RuleNumberLiteral = 84, RuleIdentifier = 85, RuleHexLiteral = 86, RuleStringLiteral = 87
  };

  explicit SolidityParser(antlr4::TokenStream *input);

  SolidityParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SolidityParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SourceUnitContext;
  class PragmaDirectiveContext;
  class PragmaNameContext;
  class PragmaValueContext;
  class VersionContext;
  class VersionConstraintContext;
  class VersionOperatorContext;
  class ImportDirectiveContext;
  class ImportDeclarationContext;
  class ContractDefinitionContext;
  class InheritanceSpecifierContext;
  class ContractPartContext;
  class StateVariableDeclarationContext;
  class OverrideSpecifierContext;
  class UsingForDeclarationContext;
  class StructDefinitionContext;
  class ModifierDefinitionContext;
  class FunctionDefinitionContext;
  class FunctionDescriptorContext;
  class ReturnParametersContext;
  class ModifierListContext;
  class ModifierInvocationContext;
  class EventDefinitionContext;
  class EnumDefinitionContext;
  class EnumValueContext;
  class ParameterListContext;
  class ParameterContext;
  class EventParameterListContext;
  class EventParameterContext;
  class VariableDeclarationContext;
  class TypeNameContext;
  class UserDefinedTypeNameContext;
  class MappingContext;
  class FunctionTypeNameContext;
  class StorageLocationContext;
  class StateMutabilityContext;
  class BlockContext;
  class StatementContext;
  class ExpressionStatementContext;
  class IfStatementContext;
  class TryStatementContext;
  class CatchClauseContext;
  class WhileStatementContext;
  class ForStatementContext;
  class SimpleStatementContext;
  class InlineAssemblyStatementContext;
  class DoWhileStatementContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class ThrowStatementContext;
  class EmitStatementContext;
  class VariableDeclarationStatementContext;
  class VariableDeclarationListContext;
  class IdentifierListContext;
  class ElementaryTypeNameContext;
  class ExpressionContext;
  class PrimaryExpressionContext;
  class ExpressionListContext;
  class NameValueListContext;
  class NameValueContext;
  class FunctionCallArgumentsContext;
  class FunctionCallContext;
  class TupleExpressionContext;
  class TypeNameExpressionContext;
  class AssemblyItemContext;
  class AssemblyBlockContext;
  class AssemblyExpressionContext;
  class AssemblyCallContext;
  class AssemblyLocalDefinitionContext;
  class AssemblyAssignmentContext;
  class AssemblyIdentifierListContext;
  class AssemblyStackAssignmentContext;
  class LabelDefinitionContext;
  class AssemblySwitchContext;
  class AssemblyCaseContext;
  class AssemblyFunctionDefinitionContext;
  class AssemblyFunctionReturnsContext;
  class AssemblyForContext;
  class AssemblyIfContext;
  class AssemblyLiteralContext;
  class AssemblyTypedVariableListContext;
  class AssemblyTypeContext;
  class SubAssemblyContext;
  class NumberLiteralContext;
  class IdentifierContext;
  class HexLiteralContext;
  class StringLiteralContext; 

  class  SourceUnitContext : public antlr4::ParserRuleContext {
  public:
    SourceUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<PragmaDirectiveContext *> pragmaDirective();
    PragmaDirectiveContext* pragmaDirective(size_t i);
    std::vector<ImportDirectiveContext *> importDirective();
    ImportDirectiveContext* importDirective(size_t i);
    std::vector<StructDefinitionContext *> structDefinition();
    StructDefinitionContext* structDefinition(size_t i);
    std::vector<EnumDefinitionContext *> enumDefinition();
    EnumDefinitionContext* enumDefinition(size_t i);
    std::vector<ContractDefinitionContext *> contractDefinition();
    ContractDefinitionContext* contractDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceUnitContext* sourceUnit();

  class  PragmaDirectiveContext : public antlr4::ParserRuleContext {
  public:
    PragmaDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PragmaNameContext *pragmaName();
    PragmaValueContext *pragmaValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaDirectiveContext* pragmaDirective();

  class  PragmaNameContext : public antlr4::ParserRuleContext {
  public:
    PragmaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaNameContext* pragmaName();

  class  PragmaValueContext : public antlr4::ParserRuleContext {
  public:
    PragmaValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VersionContext *version();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaValueContext* pragmaValue();

  class  VersionContext : public antlr4::ParserRuleContext {
  public:
    VersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VersionConstraintContext *> versionConstraint();
    VersionConstraintContext* versionConstraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionContext* version();

  class  VersionConstraintContext : public antlr4::ParserRuleContext {
  public:
    VersionConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VersionLiteral();
    VersionOperatorContext *versionOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionConstraintContext* versionConstraint();

  class  VersionOperatorContext : public antlr4::ParserRuleContext {
  public:
    VersionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionOperatorContext* versionOperator();

  class  ImportDirectiveContext : public antlr4::ParserRuleContext {
  public:
    ImportDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteralFragment();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportDirectiveContext* importDirective();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  ContractDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ContractDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<InheritanceSpecifierContext *> inheritanceSpecifier();
    InheritanceSpecifierContext* inheritanceSpecifier(size_t i);
    std::vector<ContractPartContext *> contractPart();
    ContractPartContext* contractPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContractDefinitionContext* contractDefinition();

  class  InheritanceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    InheritanceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserDefinedTypeNameContext *userDefinedTypeName();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InheritanceSpecifierContext* inheritanceSpecifier();

  class  ContractPartContext : public antlr4::ParserRuleContext {
  public:
    ContractPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StateVariableDeclarationContext *stateVariableDeclaration();
    UsingForDeclarationContext *usingForDeclaration();
    StructDefinitionContext *structDefinition();
    ModifierDefinitionContext *modifierDefinition();
    FunctionDefinitionContext *functionDefinition();
    EventDefinitionContext *eventDefinition();
    EnumDefinitionContext *enumDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContractPartContext* contractPart();

  class  StateVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StateVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> PublicKeyword();
    antlr4::tree::TerminalNode* PublicKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> InternalKeyword();
    antlr4::tree::TerminalNode* InternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PrivateKeyword();
    antlr4::tree::TerminalNode* PrivateKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ConstantKeyword();
    antlr4::tree::TerminalNode* ConstantKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ImmutableKeyword();
    antlr4::tree::TerminalNode* ImmutableKeyword(size_t i);
    std::vector<OverrideSpecifierContext *> overrideSpecifier();
    OverrideSpecifierContext* overrideSpecifier(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StateVariableDeclarationContext* stateVariableDeclaration();

  class  OverrideSpecifierContext : public antlr4::ParserRuleContext {
  public:
    OverrideSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserDefinedTypeNameContext *> userDefinedTypeName();
    UserDefinedTypeNameContext* userDefinedTypeName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OverrideSpecifierContext* overrideSpecifier();

  class  UsingForDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingForDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UsingForDeclarationContext* usingForDeclaration();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  ModifierDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModifierDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    BlockContext *block();
    ParameterListContext *parameterList();
    std::vector<antlr4::tree::TerminalNode *> VirtualKeyword();
    antlr4::tree::TerminalNode* VirtualKeyword(size_t i);
    std::vector<OverrideSpecifierContext *> overrideSpecifier();
    OverrideSpecifierContext* overrideSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierDefinitionContext* modifierDefinition();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDescriptorContext *functionDescriptor();
    ParameterListContext *parameterList();
    ModifierListContext *modifierList();
    BlockContext *block();
    ReturnParametersContext *returnParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionDescriptorContext : public antlr4::ParserRuleContext {
  public:
    FunctionDescriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ReceiveKeyword();
    antlr4::tree::TerminalNode *FallbackKeyword();
    antlr4::tree::TerminalNode *ConstructorKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDescriptorContext* functionDescriptor();

  class  ReturnParametersContext : public antlr4::ParserRuleContext {
  public:
    ReturnParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnParametersContext* returnParameters();

  class  ModifierListContext : public antlr4::ParserRuleContext {
  public:
    ModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModifierInvocationContext *> modifierInvocation();
    ModifierInvocationContext* modifierInvocation(size_t i);
    std::vector<StateMutabilityContext *> stateMutability();
    StateMutabilityContext* stateMutability(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ExternalKeyword();
    antlr4::tree::TerminalNode* ExternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PublicKeyword();
    antlr4::tree::TerminalNode* PublicKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> InternalKeyword();
    antlr4::tree::TerminalNode* InternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PrivateKeyword();
    antlr4::tree::TerminalNode* PrivateKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VirtualKeyword();
    antlr4::tree::TerminalNode* VirtualKeyword(size_t i);
    std::vector<OverrideSpecifierContext *> overrideSpecifier();
    OverrideSpecifierContext* overrideSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierListContext* modifierList();

  class  ModifierInvocationContext : public antlr4::ParserRuleContext {
  public:
    ModifierInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierInvocationContext* modifierInvocation();

  class  EventDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EventDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    EventParameterListContext *eventParameterList();
    antlr4::tree::TerminalNode *AnonymousKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EventDefinitionContext* eventDefinition();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<EnumValueContext *> enumValue();
    EnumValueContext* enumValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  EnumValueContext : public antlr4::ParserRuleContext {
  public:
    EnumValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumValueContext* enumValue();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    StorageLocationContext *storageLocation();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  EventParameterListContext : public antlr4::ParserRuleContext {
  public:
    EventParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EventParameterContext *> eventParameter();
    EventParameterContext* eventParameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EventParameterListContext* eventParameterList();

  class  EventParameterContext : public antlr4::ParserRuleContext {
  public:
    EventParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *IndexedKeyword();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EventParameterContext* eventParameter();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    IdentifierContext *identifier();
    StorageLocationContext *storageLocation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementaryTypeNameContext *elementaryTypeName();
    UserDefinedTypeNameContext *userDefinedTypeName();
    MappingContext *mapping();
    FunctionTypeNameContext *functionTypeName();
    TypeNameContext *typeName();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();
  TypeNameContext* typeName(int precedence);
  class  UserDefinedTypeNameContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserDefinedTypeNameContext* userDefinedTypeName();

  class  MappingContext : public antlr4::ParserRuleContext {
  public:
    MappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    ElementaryTypeNameContext *elementaryTypeName();
    UserDefinedTypeNameContext *userDefinedTypeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MappingContext* mapping();

  class  FunctionTypeNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();
    ModifierListContext *modifierList();
    ReturnParametersContext *returnParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeNameContext* functionTypeName();

  class  StorageLocationContext : public antlr4::ParserRuleContext {
  public:
    StorageLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StorageLocationContext* storageLocation();

  class  StateMutabilityContext : public antlr4::ParserRuleContext {
  public:
    StateMutabilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PureKeyword();
    antlr4::tree::TerminalNode *ConstantKeyword();
    antlr4::tree::TerminalNode *ViewKeyword();
    antlr4::tree::TerminalNode *PayableKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StateMutabilityContext* stateMutability();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatementContext *ifStatement();
    TryStatementContext *tryStatement();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();
    BlockContext *block();
    InlineAssemblyStatementContext *inlineAssemblyStatement();
    DoWhileStatementContext *doWhileStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    ReturnStatementContext *returnStatement();
    ThrowStatementContext *throwStatement();
    EmitStatementContext *emitStatement();
    SimpleStatementContext *simpleStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockContext *block();
    ReturnParametersContext *returnParameters();
    std::vector<CatchClauseContext *> catchClause();
    CatchClauseContext* catchClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchClauseContext : public antlr4::ParserRuleContext {
  public:
    CatchClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ParameterListContext *parameterList();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchClauseContext* catchClause();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    SimpleStatementContext *simpleStatement();
    ExpressionStatementContext *expressionStatement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationStatementContext *variableDeclarationStatement();
    ExpressionStatementContext *expressionStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  InlineAssemblyStatementContext : public antlr4::ParserRuleContext {
  public:
    InlineAssemblyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyBlockContext *assemblyBlock();
    antlr4::tree::TerminalNode *StringLiteralFragment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InlineAssemblyStatementContext* inlineAssemblyStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoWhileStatementContext* doWhileStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ContinueKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BreakKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  EmitStatementContext : public antlr4::ParserRuleContext {
  public:
    EmitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallContext *functionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmitStatementContext* emitStatement();

  class  VariableDeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    VariableDeclarationContext *variableDeclaration();
    VariableDeclarationListContext *variableDeclarationList();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationStatementContext* variableDeclarationStatement();

  class  VariableDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationListContext* variableDeclarationList();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierListContext* identifierList();

  class  ElementaryTypeNameContext : public antlr4::ParserRuleContext {
  public:
    ElementaryTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PayableKeyword();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Uint();
    antlr4::tree::TerminalNode *Byte();
    antlr4::tree::TerminalNode *Fixed();
    antlr4::tree::TerminalNode *Ufixed();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementaryTypeNameContext* elementaryTypeName();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *PayableKeyword();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    PrimaryExpressionContext *primaryExpression();
    IdentifierContext *identifier();
    NameValueListContext *nameValueList();
    FunctionCallArgumentsContext *functionCallArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanLiteral();
    NumberLiteralContext *numberLiteral();
    HexLiteralContext *hexLiteral();
    StringLiteralContext *stringLiteral();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TypeKeyword();
    TupleExpressionContext *tupleExpression();
    TypeNameExpressionContext *typeNameExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListContext* expressionList();

  class  NameValueListContext : public antlr4::ParserRuleContext {
  public:
    NameValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameValueContext *> nameValue();
    NameValueContext* nameValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameValueListContext* nameValueList();

  class  NameValueContext : public antlr4::ParserRuleContext {
  public:
    NameValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameValueContext* nameValue();

  class  FunctionCallArgumentsContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameValueListContext *nameValueList();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallArgumentsContext* functionCallArguments();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    FunctionCallArgumentsContext *functionCallArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallContext* functionCall();

  class  TupleExpressionContext : public antlr4::ParserRuleContext {
  public:
    TupleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TupleExpressionContext* tupleExpression();

  class  TypeNameExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeNameExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementaryTypeNameContext *elementaryTypeName();
    UserDefinedTypeNameContext *userDefinedTypeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameExpressionContext* typeNameExpression();

  class  AssemblyItemContext : public antlr4::ParserRuleContext {
  public:
    AssemblyItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();
    AssemblyExpressionContext *assemblyExpression();
    AssemblyLocalDefinitionContext *assemblyLocalDefinition();
    AssemblyAssignmentContext *assemblyAssignment();
    AssemblyStackAssignmentContext *assemblyStackAssignment();
    LabelDefinitionContext *labelDefinition();
    AssemblySwitchContext *assemblySwitch();
    AssemblyFunctionDefinitionContext *assemblyFunctionDefinition();
    AssemblyForContext *assemblyFor();
    AssemblyIfContext *assemblyIf();
    antlr4::tree::TerminalNode *BreakKeyword();
    antlr4::tree::TerminalNode *ContinueKeyword();
    antlr4::tree::TerminalNode *LeaveKeyword();
    SubAssemblyContext *subAssembly();
    NumberLiteralContext *numberLiteral();
    StringLiteralContext *stringLiteral();
    HexLiteralContext *hexLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyItemContext* assemblyItem();

  class  AssemblyBlockContext : public antlr4::ParserRuleContext {
  public:
    AssemblyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssemblyItemContext *> assemblyItem();
    AssemblyItemContext* assemblyItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyBlockContext* assemblyBlock();

  class  AssemblyExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyCallContext *assemblyCall();
    AssemblyLiteralContext *assemblyLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyExpressionContext* assemblyExpression();

  class  AssemblyCallContext : public antlr4::ParserRuleContext {
  public:
    AssemblyCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AssemblyExpressionContext *> assemblyExpression();
    AssemblyExpressionContext* assemblyExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyCallContext* assemblyCall();

  class  AssemblyLocalDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyLocalDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyIdentifierListContext *assemblyIdentifierList();
    AssemblyExpressionContext *assemblyExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyLocalDefinitionContext* assemblyLocalDefinition();

  class  AssemblyAssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssemblyAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyIdentifierListContext *assemblyIdentifierList();
    AssemblyExpressionContext *assemblyExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyAssignmentContext* assemblyAssignment();

  class  AssemblyIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    AssemblyIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyIdentifierListContext* assemblyIdentifierList();

  class  AssemblyStackAssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssemblyStackAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyStackAssignmentContext* assemblyStackAssignment();

  class  LabelDefinitionContext : public antlr4::ParserRuleContext {
  public:
    LabelDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelDefinitionContext* labelDefinition();

  class  AssemblySwitchContext : public antlr4::ParserRuleContext {
  public:
    AssemblySwitchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyExpressionContext *assemblyExpression();
    std::vector<AssemblyCaseContext *> assemblyCase();
    AssemblyCaseContext* assemblyCase(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblySwitchContext* assemblySwitch();

  class  AssemblyCaseContext : public antlr4::ParserRuleContext {
  public:
    AssemblyCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyLiteralContext *assemblyLiteral();
    AssemblyBlockContext *assemblyBlock();
    AssemblyTypeContext *assemblyType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyCaseContext* assemblyCase();

  class  AssemblyFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();
    AssemblyTypedVariableListContext *assemblyTypedVariableList();
    AssemblyFunctionReturnsContext *assemblyFunctionReturns();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyFunctionDefinitionContext* assemblyFunctionDefinition();

  class  AssemblyFunctionReturnsContext : public antlr4::ParserRuleContext {
  public:
    AssemblyFunctionReturnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyTypedVariableListContext *assemblyTypedVariableList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyFunctionReturnsContext* assemblyFunctionReturns();

  class  AssemblyForContext : public antlr4::ParserRuleContext {
  public:
    AssemblyForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssemblyBlockContext *> assemblyBlock();
    AssemblyBlockContext* assemblyBlock(size_t i);
    AssemblyExpressionContext *assemblyExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyForContext* assemblyFor();

  class  AssemblyIfContext : public antlr4::ParserRuleContext {
  public:
    AssemblyIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyExpressionContext *assemblyExpression();
    AssemblyBlockContext *assemblyBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyIfContext* assemblyIf();

  class  AssemblyLiteralContext : public antlr4::ParserRuleContext {
  public:
    AssemblyLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *DecimalNumber();
    antlr4::tree::TerminalNode *HexNumber();
    HexLiteralContext *hexLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    AssemblyTypeContext *assemblyType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyLiteralContext* assemblyLiteral();

  class  AssemblyTypedVariableListContext : public antlr4::ParserRuleContext {
  public:
    AssemblyTypedVariableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyTypeContext *assemblyType();
    AssemblyTypedVariableListContext *assemblyTypedVariableList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyTypedVariableListContext* assemblyTypedVariableList();

  class  AssemblyTypeContext : public antlr4::ParserRuleContext {
  public:
    AssemblyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyTypeContext* assemblyType();

  class  SubAssemblyContext : public antlr4::ParserRuleContext {
  public:
    SubAssemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubAssemblyContext* subAssembly();

  class  NumberLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumberLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalNumber();
    antlr4::tree::TerminalNode *HexNumber();
    antlr4::tree::TerminalNode *NumberUnit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberLiteralContext* numberLiteral();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  HexLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> HexLiteralFragment();
    antlr4::tree::TerminalNode* HexLiteralFragment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HexLiteralContext* hexLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StringLiteralFragment();
    antlr4::tree::TerminalNode* StringLiteralFragment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool typeNameSempred(TypeNameContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

