
// Generated from PhpParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  PhpParser : public antlr4::Parser {
public:
  enum {
    SeaWhitespace = 1, HtmlText = 2, XmlStart = 3, PHPStart = 4, HtmlScriptOpen = 5, 
    HtmlStyleOpen = 6, HtmlComment = 7, HtmlDtd = 8, HtmlOpen = 9, Shebang = 10, 
    Error = 11, XmlText = 12, XmlClose = 13, PHPStartInside = 14, HtmlClose = 15, 
    HtmlSlashClose = 16, HtmlSlash = 17, HtmlEquals = 18, HtmlStartQuoteString = 19, 
    HtmlStartDoubleQuoteString = 20, HtmlHex = 21, HtmlDecimal = 22, HtmlSpace = 23, 
    HtmlName = 24, ErrorInside = 25, PHPStartInsideQuoteString = 26, HtmlEndQuoteString = 27, 
    HtmlQuoteString = 28, ErrorHtmlQuote = 29, PHPStartDoubleQuoteString = 30, 
    HtmlEndDoubleQuoteString = 31, HtmlDoubleQuoteString = 32, ErrorHtmlDoubleQuote = 33, 
    ScriptText = 34, HtmlScriptClose = 35, PHPStartInsideScript = 36, StyleBody = 37, 
    PHPEnd = 38, Whitespace = 39, MultiLineComment = 40, SingleLineComment = 41, 
    ShellStyleComment = 42, AttributeStart = 43, Abstract = 44, Array = 45, 
    As = 46, BinaryCast = 47, BoolType = 48, BooleanConstant = 49, Break = 50, 
    Callable = 51, Case = 52, Catch = 53, Class = 54, Clone = 55, Const = 56, 
    Continue = 57, Declare = 58, Default = 59, Do = 60, DoubleCast = 61, 
    DoubleType = 62, Echo = 63, Else = 64, ElseIf = 65, Empty = 66, Enum_ = 67, 
    EndDeclare = 68, EndFor = 69, EndForeach = 70, EndIf = 71, EndSwitch = 72, 
    EndWhile = 73, Eval = 74, Exit = 75, Extends = 76, Final = 77, Finally = 78, 
    FloatCast = 79, For = 80, Foreach = 81, Function_ = 82, Global = 83, 
    Goto = 84, If = 85, Implements = 86, Import = 87, Include = 88, IncludeOnce = 89, 
    InstanceOf = 90, InsteadOf = 91, Int8Cast = 92, Int16Cast = 93, Int64Type = 94, 
    IntType = 95, Interface = 96, IsSet = 97, List = 98, LogicalAnd = 99, 
    LogicalOr = 100, LogicalXor = 101, Match_ = 102, Namespace = 103, New = 104, 
    Null = 105, ObjectType = 106, Parent_ = 107, Partial = 108, Print = 109, 
    Private = 110, Protected = 111, Public = 112, Readonly = 113, Require = 114, 
    RequireOnce = 115, Resource = 116, Return = 117, Static = 118, StringType = 119, 
    Switch = 120, Throw = 121, Trait = 122, Try = 123, Typeof = 124, UintCast = 125, 
    UnicodeCast = 126, Unset = 127, Use = 128, Var = 129, While = 130, Yield = 131, 
    From = 132, LambdaFn = 133, Ticks = 134, Encoding = 135, StrictTypes = 136, 
    Get = 137, Set = 138, Call = 139, CallStatic = 140, Constructor = 141, 
    Destruct = 142, Wakeup = 143, Sleep = 144, Autoload = 145, IsSet__ = 146, 
    Unset__ = 147, ToString__ = 148, Invoke = 149, SetState = 150, Clone__ = 151, 
    DebugInfo = 152, Namespace__ = 153, Class__ = 154, Traic__ = 155, Function__ = 156, 
    Method__ = 157, Line__ = 158, File__ = 159, Dir__ = 160, Spaceship = 161, 
    Lgeneric = 162, Rgeneric = 163, DoubleArrow = 164, Inc = 165, Dec = 166, 
    IsIdentical = 167, IsNoidentical = 168, IsEqual = 169, IsNotEq = 170, 
    IsSmallerOrEqual = 171, IsGreaterOrEqual = 172, PlusEqual = 173, MinusEqual = 174, 
    MulEqual = 175, Pow = 176, PowEqual = 177, DivEqual = 178, Concaequal = 179, 
    ModEqual = 180, ShiftLeftEqual = 181, ShiftRightEqual = 182, AndEqual = 183, 
    OrEqual = 184, XorEqual = 185, BooleanOr = 186, BooleanAnd = 187, NullCoalescing = 188, 
    NullCoalescingEqual = 189, ShiftLeft = 190, ShiftRight = 191, DoubleColon = 192, 
    ObjectOperator = 193, NamespaceSeparator = 194, Ellipsis = 195, Less = 196, 
    Greater = 197, Ampersand = 198, Pipe = 199, Bang = 200, Caret = 201, 
    Plus = 202, Minus = 203, Asterisk = 204, Percent = 205, Divide = 206, 
    Tilde = 207, SuppressWarnings = 208, Dollar = 209, Dot = 210, QuestionMark = 211, 
    OpenRoundBracket = 212, CloseRoundBracket = 213, OpenSquareBracket = 214, 
    CloseSquareBracket = 215, OpenCurlyBracket = 216, CloseCurlyBracket = 217, 
    Comma = 218, Colon = 219, SemiColon = 220, Eq = 221, Quote = 222, BackQuote = 223, 
    VarName = 224, Label = 225, Octal = 226, Decimal = 227, Real = 228, 
    Hex = 229, Binary = 230, BackQuoteString = 231, SingleQuoteString = 232, 
    DoubleQuote = 233, StartNowDoc = 234, StartHereDoc = 235, ErrorPhp = 236, 
    CurlyDollar = 237, UnicodeEscape = 238, StringPart = 239, Comment = 240, 
    PHPEndSingleLineComment = 241, CommentEnd = 242, HereDocText = 243, 
    XmlText2 = 244
  };

  enum {
    RuleHtmlDocument = 0, RuleInlineHtml = 1, RuleHtmlElement = 2, RuleScriptText = 3, 
    RulePhpBlock = 4, RuleImportStatement = 5, RuleTopStatement = 6, RuleUseDeclaration = 7, 
    RuleUseDeclarationContentList = 8, RuleUseDeclarationContent = 9, RuleNamespaceDeclaration = 10, 
    RuleNamespaceStatement = 11, RuleFunctionDeclaration = 12, RuleClassDeclaration = 13, 
    RuleClassEntryType = 14, RuleInterfaceList = 15, RuleTypeParameterListInBrackets = 16, 
    RuleTypeParameterList = 17, RuleTypeParameterWithDefaultsList = 18, 
    RuleTypeParameterDecl = 19, RuleTypeParameterWithDefaultDecl = 20, RuleGenericDynamicArgs = 21, 
    RuleAttributes = 22, RuleAttributeGroup = 23, RuleAttribute = 24, RuleInnerStatementList = 25, 
    RuleInnerStatement = 26, RuleStatement = 27, RuleEmptyStatement_ = 28, 
    RuleBlockStatement = 29, RuleIfStatement = 30, RuleElseIfStatement = 31, 
    RuleElseIfColonStatement = 32, RuleElseStatement = 33, RuleElseColonStatement = 34, 
    RuleWhileStatement = 35, RuleDoWhileStatement = 36, RuleForStatement = 37, 
    RuleForInit = 38, RuleForUpdate = 39, RuleSwitchStatement = 40, RuleSwitchBlock = 41, 
    RuleBreakStatement = 42, RuleContinueStatement = 43, RuleReturnStatement = 44, 
    RuleExpressionStatement = 45, RuleUnsetStatement = 46, RuleForeachStatement = 47, 
    RuleTryCatchFinally = 48, RuleCatchClause = 49, RuleFinallyStatement = 50, 
    RuleThrowStatement = 51, RuleGotoStatement = 52, RuleDeclareStatement = 53, 
    RuleInlineHtmlStatement = 54, RuleDeclareList = 55, RuleDirective = 56, 
    RuleFormalParameterList = 57, RuleFormalParameter = 58, RuleTypeHint = 59, 
    RuleGlobalStatement = 60, RuleGlobalVar = 61, RuleEchoStatement = 62, 
    RuleStaticVariableStatement = 63, RuleClassStatement = 64, RuleTraitAdaptations = 65, 
    RuleTraitAdaptationStatement = 66, RuleTraitPrecedence = 67, RuleTraitAlias = 68, 
    RuleTraitMethodReference = 69, RuleBaseCtorCall = 70, RuleReturnTypeDecl = 71, 
    RuleMethodBody = 72, RulePropertyModifiers = 73, RuleMemberModifiers = 74, 
    RuleVariableInitializer = 75, RuleIdentifierInitializer = 76, RuleGlobalConstantDeclaration = 77, 
    RuleEnumDeclaration = 78, RuleEnumItem = 79, RuleExpressionList = 80, 
    RuleParentheses = 81, RuleExpression = 82, RuleAssignable = 83, RuleArrayCreation = 84, 
    RuleArrayDestructuring = 85, RuleIndexedDestructItem = 86, RuleKeyedDestructItem = 87, 
    RuleLambdaFunctionExpr = 88, RuleMatchExpr = 89, RuleMatchItem = 90, 
    RuleNewExpr = 91, RuleAssignmentOperator = 92, RuleYieldExpression = 93, 
    RuleArrayItemList = 94, RuleArrayItem = 95, RuleLambdaFunctionUseVars = 96, 
    RuleLambdaFunctionUseVar = 97, RuleQualifiedStaticTypeRef = 98, RuleTypeRef = 99, 
    RuleAnonymousClass = 100, RuleIndirectTypeRef = 101, RuleQualifiedNamespaceName = 102, 
    RuleNamespaceNameList = 103, RuleNamespaceNameTail = 104, RuleQualifiedNamespaceNameList = 105, 
    RuleArguments = 106, RuleActualArgument = 107, RuleArgumentName = 108, 
    RuleConstantInitializer = 109, RuleConstant = 110, RuleLiteralConstant = 111, 
    RuleNumericConstant = 112, RuleClassConstant = 113, RuleStringConstant = 114, 
    RuleString = 115, RuleInterpolatedStringPart = 116, RuleChainList = 117, 
    RuleChain = 118, RuleChainOrigin = 119, RuleMemberAccess = 120, RuleFunctionCall = 121, 
    RuleFunctionCallName = 122, RuleActualArguments = 123, RuleChainBase = 124, 
    RuleKeyedFieldName = 125, RuleKeyedSimpleFieldName = 126, RuleKeyedVariable = 127, 
    RuleSquareCurlyExpression = 128, RuleAssignmentList = 129, RuleAssignmentListElement = 130, 
    RuleModifier = 131, RuleIdentifier = 132, RuleMemberModifier = 133, 
    RuleMagicConstant = 134, RuleMagicMethod = 135, RulePrimitiveType = 136, 
    RuleCastOperation = 137
  };

  explicit PhpParser(antlr4::TokenStream *input);

  PhpParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PhpParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class HtmlDocumentContext;
  class InlineHtmlContext;
  class HtmlElementContext;
  class ScriptTextContext;
  class PhpBlockContext;
  class ImportStatementContext;
  class TopStatementContext;
  class UseDeclarationContext;
  class UseDeclarationContentListContext;
  class UseDeclarationContentContext;
  class NamespaceDeclarationContext;
  class NamespaceStatementContext;
  class FunctionDeclarationContext;
  class ClassDeclarationContext;
  class ClassEntryTypeContext;
  class InterfaceListContext;
  class TypeParameterListInBracketsContext;
  class TypeParameterListContext;
  class TypeParameterWithDefaultsListContext;
  class TypeParameterDeclContext;
  class TypeParameterWithDefaultDeclContext;
  class GenericDynamicArgsContext;
  class AttributesContext;
  class AttributeGroupContext;
  class AttributeContext;
  class InnerStatementListContext;
  class InnerStatementContext;
  class StatementContext;
  class EmptyStatement_Context;
  class BlockStatementContext;
  class IfStatementContext;
  class ElseIfStatementContext;
  class ElseIfColonStatementContext;
  class ElseStatementContext;
  class ElseColonStatementContext;
  class WhileStatementContext;
  class DoWhileStatementContext;
  class ForStatementContext;
  class ForInitContext;
  class ForUpdateContext;
  class SwitchStatementContext;
  class SwitchBlockContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class ReturnStatementContext;
  class ExpressionStatementContext;
  class UnsetStatementContext;
  class ForeachStatementContext;
  class TryCatchFinallyContext;
  class CatchClauseContext;
  class FinallyStatementContext;
  class ThrowStatementContext;
  class GotoStatementContext;
  class DeclareStatementContext;
  class InlineHtmlStatementContext;
  class DeclareListContext;
  class DirectiveContext;
  class FormalParameterListContext;
  class FormalParameterContext;
  class TypeHintContext;
  class GlobalStatementContext;
  class GlobalVarContext;
  class EchoStatementContext;
  class StaticVariableStatementContext;
  class ClassStatementContext;
  class TraitAdaptationsContext;
  class TraitAdaptationStatementContext;
  class TraitPrecedenceContext;
  class TraitAliasContext;
  class TraitMethodReferenceContext;
  class BaseCtorCallContext;
  class ReturnTypeDeclContext;
  class MethodBodyContext;
  class PropertyModifiersContext;
  class MemberModifiersContext;
  class VariableInitializerContext;
  class IdentifierInitializerContext;
  class GlobalConstantDeclarationContext;
  class EnumDeclarationContext;
  class EnumItemContext;
  class ExpressionListContext;
  class ParenthesesContext;
  class ExpressionContext;
  class AssignableContext;
  class ArrayCreationContext;
  class ArrayDestructuringContext;
  class IndexedDestructItemContext;
  class KeyedDestructItemContext;
  class LambdaFunctionExprContext;
  class MatchExprContext;
  class MatchItemContext;
  class NewExprContext;
  class AssignmentOperatorContext;
  class YieldExpressionContext;
  class ArrayItemListContext;
  class ArrayItemContext;
  class LambdaFunctionUseVarsContext;
  class LambdaFunctionUseVarContext;
  class QualifiedStaticTypeRefContext;
  class TypeRefContext;
  class AnonymousClassContext;
  class IndirectTypeRefContext;
  class QualifiedNamespaceNameContext;
  class NamespaceNameListContext;
  class NamespaceNameTailContext;
  class QualifiedNamespaceNameListContext;
  class ArgumentsContext;
  class ActualArgumentContext;
  class ArgumentNameContext;
  class ConstantInitializerContext;
  class ConstantContext;
  class LiteralConstantContext;
  class NumericConstantContext;
  class ClassConstantContext;
  class StringConstantContext;
  class StringContext;
  class InterpolatedStringPartContext;
  class ChainListContext;
  class ChainContext;
  class ChainOriginContext;
  class MemberAccessContext;
  class FunctionCallContext;
  class FunctionCallNameContext;
  class ActualArgumentsContext;
  class ChainBaseContext;
  class KeyedFieldNameContext;
  class KeyedSimpleFieldNameContext;
  class KeyedVariableContext;
  class SquareCurlyExpressionContext;
  class AssignmentListContext;
  class AssignmentListElementContext;
  class ModifierContext;
  class IdentifierContext;
  class MemberModifierContext;
  class MagicConstantContext;
  class MagicMethodContext;
  class PrimitiveTypeContext;
  class CastOperationContext; 

  class  HtmlDocumentContext : public antlr4::ParserRuleContext {
  public:
    HtmlDocumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *Shebang();
    std::vector<InlineHtmlContext *> inlineHtml();
    InlineHtmlContext* inlineHtml(size_t i);
    std::vector<PhpBlockContext *> phpBlock();
    PhpBlockContext* phpBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HtmlDocumentContext* htmlDocument();

  class  InlineHtmlContext : public antlr4::ParserRuleContext {
  public:
    InlineHtmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HtmlElementContext *> htmlElement();
    HtmlElementContext* htmlElement(size_t i);
    ScriptTextContext *scriptText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InlineHtmlContext* inlineHtml();

  class  HtmlElementContext : public antlr4::ParserRuleContext {
  public:
    HtmlElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HtmlDtd();
    antlr4::tree::TerminalNode *HtmlClose();
    antlr4::tree::TerminalNode *HtmlStyleOpen();
    antlr4::tree::TerminalNode *HtmlOpen();
    antlr4::tree::TerminalNode *HtmlName();
    antlr4::tree::TerminalNode *HtmlSlashClose();
    antlr4::tree::TerminalNode *HtmlSlash();
    antlr4::tree::TerminalNode *HtmlText();
    antlr4::tree::TerminalNode *HtmlEquals();
    antlr4::tree::TerminalNode *HtmlStartQuoteString();
    antlr4::tree::TerminalNode *HtmlEndQuoteString();
    antlr4::tree::TerminalNode *HtmlStartDoubleQuoteString();
    antlr4::tree::TerminalNode *HtmlEndDoubleQuoteString();
    antlr4::tree::TerminalNode *HtmlHex();
    antlr4::tree::TerminalNode *HtmlDecimal();
    antlr4::tree::TerminalNode *HtmlQuoteString();
    antlr4::tree::TerminalNode *HtmlDoubleQuoteString();
    antlr4::tree::TerminalNode *StyleBody();
    antlr4::tree::TerminalNode *HtmlScriptOpen();
    antlr4::tree::TerminalNode *HtmlScriptClose();
    antlr4::tree::TerminalNode *XmlStart();
    antlr4::tree::TerminalNode *XmlClose();
    std::vector<antlr4::tree::TerminalNode *> XmlText();
    antlr4::tree::TerminalNode* XmlText(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HtmlElementContext* htmlElement();

  class  ScriptTextContext : public antlr4::ParserRuleContext {
  public:
    ScriptTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ScriptText();
    antlr4::tree::TerminalNode* ScriptText(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScriptTextContext* scriptText();

  class  PhpBlockContext : public antlr4::ParserRuleContext {
  public:
    PhpBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportStatementContext *> importStatement();
    ImportStatementContext* importStatement(size_t i);
    std::vector<TopStatementContext *> topStatement();
    TopStatementContext* topStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PhpBlockContext* phpBlock();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *Namespace();
    NamespaceNameListContext *namespaceNameList();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStatementContext* importStatement();

  class  TopStatementContext : public antlr4::ParserRuleContext {
  public:
    TopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    UseDeclarationContext *useDeclaration();
    NamespaceDeclarationContext *namespaceDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    ClassDeclarationContext *classDeclaration();
    GlobalConstantDeclarationContext *globalConstantDeclaration();
    EnumDeclarationContext *enumDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopStatementContext* topStatement();

  class  UseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Use();
    UseDeclarationContentListContext *useDeclarationContentList();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseDeclarationContext* useDeclaration();

  class  UseDeclarationContentListContext : public antlr4::ParserRuleContext {
  public:
    UseDeclarationContentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UseDeclarationContentContext *> useDeclarationContent();
    UseDeclarationContentContext* useDeclarationContent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NamespaceSeparator();
    antlr4::tree::TerminalNode* NamespaceSeparator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseDeclarationContentListContext* useDeclarationContentList();

  class  UseDeclarationContentContext : public antlr4::ParserRuleContext {
  public:
    UseDeclarationContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceNameListContext *namespaceNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseDeclarationContentContext* useDeclarationContent();

  class  NamespaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    NamespaceNameListContext *namespaceNameList();
    antlr4::tree::TerminalNode *SemiColon();
    std::vector<NamespaceStatementContext *> namespaceStatement();
    NamespaceStatementContext* namespaceStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceDeclarationContext* namespaceDeclaration();

  class  NamespaceStatementContext : public antlr4::ParserRuleContext {
  public:
    NamespaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    UseDeclarationContext *useDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    ClassDeclarationContext *classDeclaration();
    GlobalConstantDeclarationContext *globalConstantDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceStatementContext* namespaceStatement();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    BlockStatementContext *blockStatement();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Ampersand();
    TypeParameterListInBracketsContext *typeParameterListInBrackets();
    antlr4::tree::TerminalNode *Colon();
    TypeHintContext *typeHint();
    antlr4::tree::TerminalNode *QuestionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    ClassEntryTypeContext *classEntryType();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Interface();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Private();
    ModifierContext *modifier();
    antlr4::tree::TerminalNode *Partial();
    std::vector<ClassStatementContext *> classStatement();
    ClassStatementContext* classStatement(size_t i);
    TypeParameterListInBracketsContext *typeParameterListInBrackets();
    antlr4::tree::TerminalNode *Extends();
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();
    antlr4::tree::TerminalNode *Implements();
    InterfaceListContext *interfaceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassEntryTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassEntryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Trait();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassEntryTypeContext* classEntryType();

  class  InterfaceListContext : public antlr4::ParserRuleContext {
  public:
    InterfaceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedStaticTypeRefContext *> qualifiedStaticTypeRef();
    QualifiedStaticTypeRefContext* qualifiedStaticTypeRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceListContext* interfaceList();

  class  TypeParameterListInBracketsContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListInBracketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lgeneric();
    TypeParameterListContext *typeParameterList();
    antlr4::tree::TerminalNode *Rgeneric();
    TypeParameterWithDefaultsListContext *typeParameterWithDefaultsList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterListInBracketsContext* typeParameterListInBrackets();

  class  TypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterDeclContext *> typeParameterDecl();
    TypeParameterDeclContext* typeParameterDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterListContext* typeParameterList();

  class  TypeParameterWithDefaultsListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterWithDefaultsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterWithDefaultDeclContext *> typeParameterWithDefaultDecl();
    TypeParameterWithDefaultDeclContext* typeParameterWithDefaultDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterWithDefaultsListContext* typeParameterWithDefaultsList();

  class  TypeParameterDeclContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterDeclContext* typeParameterDecl();

  class  TypeParameterWithDefaultDeclContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterWithDefaultDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Eq();
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();
    PrimitiveTypeContext *primitiveType();
    AttributesContext *attributes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterWithDefaultDeclContext* typeParameterWithDefaultDecl();

  class  GenericDynamicArgsContext : public antlr4::ParserRuleContext {
  public:
    GenericDynamicArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lgeneric();
    std::vector<TypeRefContext *> typeRef();
    TypeRefContext* typeRef(size_t i);
    antlr4::tree::TerminalNode *Rgeneric();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericDynamicArgsContext* genericDynamicArgs();

  class  AttributesContext : public antlr4::ParserRuleContext {
  public:
    AttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeGroupContext *> attributeGroup();
    AttributeGroupContext* attributeGroup(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributesContext* attributes();

  class  AttributeGroupContext : public antlr4::ParserRuleContext {
  public:
    AttributeGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AttributeStart();
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    antlr4::tree::TerminalNode *CloseSquareBracket();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeGroupContext* attributeGroup();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  InnerStatementListContext : public antlr4::ParserRuleContext {
  public:
    InnerStatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InnerStatementContext *> innerStatement();
    InnerStatementContext* innerStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InnerStatementListContext* innerStatementList();

  class  InnerStatementContext : public antlr4::ParserRuleContext {
  public:
    InnerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    FunctionDeclarationContext *functionDeclaration();
    ClassDeclarationContext *classDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InnerStatementContext* innerStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Colon();
    BlockStatementContext *blockStatement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    DoWhileStatementContext *doWhileStatement();
    ForStatementContext *forStatement();
    SwitchStatementContext *switchStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    ReturnStatementContext *returnStatement();
    YieldExpressionContext *yieldExpression();
    antlr4::tree::TerminalNode *SemiColon();
    GlobalStatementContext *globalStatement();
    StaticVariableStatementContext *staticVariableStatement();
    EchoStatementContext *echoStatement();
    ExpressionStatementContext *expressionStatement();
    UnsetStatementContext *unsetStatement();
    ForeachStatementContext *foreachStatement();
    TryCatchFinallyContext *tryCatchFinally();
    ThrowStatementContext *throwStatement();
    GotoStatementContext *gotoStatement();
    DeclareStatementContext *declareStatement();
    EmptyStatement_Context *emptyStatement_();
    InlineHtmlStatementContext *inlineHtmlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  EmptyStatement_Context : public antlr4::ParserRuleContext {
  public:
    EmptyStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatement_Context* emptyStatement_();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *CloseCurlyBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockStatementContext* blockStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ParenthesesContext *parentheses();
    StatementContext *statement();
    std::vector<ElseIfStatementContext *> elseIfStatement();
    ElseIfStatementContext* elseIfStatement(size_t i);
    ElseStatementContext *elseStatement();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *EndIf();
    antlr4::tree::TerminalNode *SemiColon();
    std::vector<ElseIfColonStatementContext *> elseIfColonStatement();
    ElseIfColonStatementContext* elseIfColonStatement(size_t i);
    ElseColonStatementContext *elseColonStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseIfStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseIfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElseIf();
    ParenthesesContext *parentheses();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfStatementContext* elseIfStatement();

  class  ElseIfColonStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseIfColonStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElseIf();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfColonStatementContext* elseIfColonStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseStatementContext* elseStatement();

  class  ElseColonStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseColonStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseColonStatementContext* elseColonStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    ParenthesesContext *parentheses();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *EndWhile();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoWhileStatementContext* doWhileStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    antlr4::tree::TerminalNode *CloseRoundBracket();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *EndFor();
    ForInitContext *forInit();
    ExpressionListContext *expressionList();
    ForUpdateContext *forUpdate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  ForInitContext : public antlr4::ParserRuleContext {
  public:
    ForInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInitContext* forInit();

  class  ForUpdateContext : public antlr4::ParserRuleContext {
  public:
    ForUpdateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForUpdateContext* forUpdate();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *EndSwitch();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    std::vector<SwitchBlockContext *> switchBlock();
    SwitchBlockContext* switchBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InnerStatementListContext *innerStatementList();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Case();
    antlr4::tree::TerminalNode* Case(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Default();
    antlr4::tree::TerminalNode* Default(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchBlockContext* switchBlock();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *SemiColon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *SemiColon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *SemiColon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  UnsetStatementContext : public antlr4::ParserRuleContext {
  public:
    UnsetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Unset();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    ChainListContext *chainList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnsetStatementContext* unsetStatement();

  class  ForeachStatementContext : public antlr4::ParserRuleContext {
  public:
    ForeachStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Foreach();
    std::vector<antlr4::tree::TerminalNode *> OpenRoundBracket();
    antlr4::tree::TerminalNode* OpenRoundBracket(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *As();
    ArrayDestructuringContext *arrayDestructuring();
    std::vector<antlr4::tree::TerminalNode *> CloseRoundBracket();
    antlr4::tree::TerminalNode* CloseRoundBracket(size_t i);
    std::vector<ChainContext *> chain();
    ChainContext* chain(size_t i);
    AssignableContext *assignable();
    antlr4::tree::TerminalNode *List();
    AssignmentListContext *assignmentList();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *EndForeach();
    antlr4::tree::TerminalNode *SemiColon();
    std::vector<antlr4::tree::TerminalNode *> Ampersand();
    antlr4::tree::TerminalNode* Ampersand(size_t i);
    antlr4::tree::TerminalNode *DoubleArrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForeachStatementContext* foreachStatement();

  class  TryCatchFinallyContext : public antlr4::ParserRuleContext {
  public:
    TryCatchFinallyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    BlockStatementContext *blockStatement();
    FinallyStatementContext *finallyStatement();
    std::vector<CatchClauseContext *> catchClause();
    CatchClauseContext* catchClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryCatchFinallyContext* tryCatchFinally();

  class  CatchClauseContext : public antlr4::ParserRuleContext {
  public:
    CatchClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    std::vector<QualifiedStaticTypeRefContext *> qualifiedStaticTypeRef();
    QualifiedStaticTypeRefContext* qualifiedStaticTypeRef(size_t i);
    antlr4::tree::TerminalNode *CloseRoundBracket();
    BlockStatementContext *blockStatement();
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);
    antlr4::tree::TerminalNode *VarName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchClauseContext* catchClause();

  class  FinallyStatementContext : public antlr4::ParserRuleContext {
  public:
    FinallyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Finally();
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyStatementContext* finallyStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Goto();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  DeclareStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declare();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    DeclareListContext *declareList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Colon();
    InnerStatementListContext *innerStatementList();
    antlr4::tree::TerminalNode *EndDeclare();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareStatementContext* declareStatement();

  class  InlineHtmlStatementContext : public antlr4::ParserRuleContext {
  public:
    InlineHtmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InlineHtmlContext *> inlineHtml();
    InlineHtmlContext* inlineHtml(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InlineHtmlStatementContext* inlineHtmlStatement();

  class  DeclareListContext : public antlr4::ParserRuleContext {
  public:
    DeclareListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DirectiveContext *> directive();
    DirectiveContext* directive(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareListContext* declareList();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ticks();
    antlr4::tree::TerminalNode *Eq();
    NumericConstantContext *numericConstant();
    antlr4::tree::TerminalNode *Real();
    antlr4::tree::TerminalNode *Encoding();
    antlr4::tree::TerminalNode *SingleQuoteString();
    antlr4::tree::TerminalNode *StrictTypes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectiveContext* directive();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterContext *> formalParameter();
    FormalParameterContext* formalParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableInitializerContext *variableInitializer();
    AttributesContext *attributes();
    std::vector<MemberModifierContext *> memberModifier();
    MemberModifierContext* memberModifier(size_t i);
    antlr4::tree::TerminalNode *QuestionMark();
    TypeHintContext *typeHint();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterContext* formalParameter();

  class  TypeHintContext : public antlr4::ParserRuleContext {
  public:
    TypeHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();
    antlr4::tree::TerminalNode *Callable();
    PrimitiveTypeContext *primitiveType();
    std::vector<TypeHintContext *> typeHint();
    TypeHintContext* typeHint(size_t i);
    antlr4::tree::TerminalNode *Pipe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeHintContext* typeHint();
  TypeHintContext* typeHint(int precedence);
  class  GlobalStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Global();
    std::vector<GlobalVarContext *> globalVar();
    GlobalVarContext* globalVar(size_t i);
    antlr4::tree::TerminalNode *SemiColon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalStatementContext* globalStatement();

  class  GlobalVarContext : public antlr4::ParserRuleContext {
  public:
    GlobalVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *Dollar();
    ChainContext *chain();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseCurlyBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalVarContext* globalVar();

  class  EchoStatementContext : public antlr4::ParserRuleContext {
  public:
    EchoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Echo();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EchoStatementContext* echoStatement();

  class  StaticVariableStatementContext : public antlr4::ParserRuleContext {
  public:
    StaticVariableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    std::vector<VariableInitializerContext *> variableInitializer();
    VariableInitializerContext* variableInitializer(size_t i);
    antlr4::tree::TerminalNode *SemiColon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StaticVariableStatementContext* staticVariableStatement();

  class  ClassStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyModifiersContext *propertyModifiers();
    std::vector<VariableInitializerContext *> variableInitializer();
    VariableInitializerContext* variableInitializer(size_t i);
    antlr4::tree::TerminalNode *SemiColon();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Const();
    std::vector<IdentifierInitializerContext *> identifierInitializer();
    IdentifierInitializerContext* identifierInitializer(size_t i);
    antlr4::tree::TerminalNode *Function_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    MethodBodyContext *methodBody();
    TypeHintContext *typeHint();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    MemberModifiersContext *memberModifiers();
    antlr4::tree::TerminalNode *Ampersand();
    TypeParameterListInBracketsContext *typeParameterListInBrackets();
    BaseCtorCallContext *baseCtorCall();
    ReturnTypeDeclContext *returnTypeDecl();
    antlr4::tree::TerminalNode *Use();
    QualifiedNamespaceNameListContext *qualifiedNamespaceNameList();
    TraitAdaptationsContext *traitAdaptations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassStatementContext* classStatement();

  class  TraitAdaptationsContext : public antlr4::ParserRuleContext {
  public:
    TraitAdaptationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    std::vector<TraitAdaptationStatementContext *> traitAdaptationStatement();
    TraitAdaptationStatementContext* traitAdaptationStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitAdaptationsContext* traitAdaptations();

  class  TraitAdaptationStatementContext : public antlr4::ParserRuleContext {
  public:
    TraitAdaptationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TraitPrecedenceContext *traitPrecedence();
    TraitAliasContext *traitAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitAdaptationStatementContext* traitAdaptationStatement();

  class  TraitPrecedenceContext : public antlr4::ParserRuleContext {
  public:
    TraitPrecedenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    antlr4::tree::TerminalNode *DoubleColon();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *InsteadOf();
    QualifiedNamespaceNameListContext *qualifiedNamespaceNameList();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitPrecedenceContext* traitPrecedence();

  class  TraitAliasContext : public antlr4::ParserRuleContext {
  public:
    TraitAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TraitMethodReferenceContext *traitMethodReference();
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *SemiColon();
    MemberModifierContext *memberModifier();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitAliasContext* traitAlias();

  class  TraitMethodReferenceContext : public antlr4::ParserRuleContext {
  public:
    TraitMethodReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    antlr4::tree::TerminalNode *DoubleColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitMethodReferenceContext* traitMethodReference();

  class  BaseCtorCallContext : public antlr4::ParserRuleContext {
  public:
    BaseCtorCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    IdentifierContext *identifier();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseCtorCallContext* baseCtorCall();

  class  ReturnTypeDeclContext : public antlr4::ParserRuleContext {
  public:
    ReturnTypeDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeHintContext *typeHint();
    antlr4::tree::TerminalNode *QuestionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnTypeDeclContext* returnTypeDecl();

  class  MethodBodyContext : public antlr4::ParserRuleContext {
  public:
    MethodBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodBodyContext* methodBody();

  class  PropertyModifiersContext : public antlr4::ParserRuleContext {
  public:
    PropertyModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberModifiersContext *memberModifiers();
    antlr4::tree::TerminalNode *Var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyModifiersContext* propertyModifiers();

  class  MemberModifiersContext : public antlr4::ParserRuleContext {
  public:
    MemberModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberModifierContext *> memberModifier();
    MemberModifierContext* memberModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberModifiersContext* memberModifiers();

  class  VariableInitializerContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *Eq();
    ConstantInitializerContext *constantInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableInitializerContext* variableInitializer();

  class  IdentifierInitializerContext : public antlr4::ParserRuleContext {
  public:
    IdentifierInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Eq();
    ConstantInitializerContext *constantInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierInitializerContext* identifierInitializer();

  class  GlobalConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GlobalConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    std::vector<IdentifierInitializerContext *> identifierInitializer();
    IdentifierInitializerContext* identifierInitializer(size_t i);
    antlr4::tree::TerminalNode *SemiColon();
    AttributesContext *attributes();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalConstantDeclarationContext* globalConstantDeclaration();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Implements();
    InterfaceListContext *interfaceList();
    std::vector<EnumItemContext *> enumItem();
    EnumItemContext* enumItem(size_t i);
    antlr4::tree::TerminalNode *IntType();
    antlr4::tree::TerminalNode *StringType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  EnumItemContext : public antlr4::ParserRuleContext {
  public:
    EnumItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Eq();
    ExpressionContext *expression();
    FunctionDeclarationContext *functionDeclaration();
    MemberModifiersContext *memberModifiers();
    antlr4::tree::TerminalNode *Use();
    QualifiedNamespaceNameListContext *qualifiedNamespaceNameList();
    TraitAdaptationsContext *traitAdaptations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumItemContext* enumItem();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListContext* expressionList();

  class  ParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    ExpressionContext *expression();
    YieldExpressionContext *yieldExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesesContext* parentheses();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ChainExpressionContext : public ExpressionContext {
  public:
    ChainExpressionContext(ExpressionContext *ctx);

    ChainContext *chain();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SpecialWordExpressionContext : public ExpressionContext {
  public:
    SpecialWordExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Yield();
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    AssignmentListContext *assignmentList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *Eq();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IsSet();
    ChainListContext *chainList();
    antlr4::tree::TerminalNode *Empty();
    ChainContext *chain();
    antlr4::tree::TerminalNode *Eval();
    antlr4::tree::TerminalNode *Exit();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *Include();
    antlr4::tree::TerminalNode *IncludeOnce();
    antlr4::tree::TerminalNode *Require();
    antlr4::tree::TerminalNode *RequireOnce();
    antlr4::tree::TerminalNode *Throw();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayCreationExpressionContext : public ExpressionContext {
  public:
    ArrayCreationExpressionContext(ExpressionContext *ctx);

    ArrayCreationContext *arrayCreation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BackQuoteStringExpressionContext : public ExpressionContext {
  public:
    BackQuoteStringExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *BackQuoteString();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MatchExpressionContext : public ExpressionContext {
  public:
    MatchExpressionContext(ExpressionContext *ctx);

    MatchExprContext *matchExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LogicalAnd();
    antlr4::tree::TerminalNode *LogicalXor();
    antlr4::tree::TerminalNode *LogicalOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrintExpressionContext : public ExpressionContext {
  public:
    PrintExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Print();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentExpressionContext : public ExpressionContext {
  public:
    AssignmentExpressionContext(ExpressionContext *ctx);

    AssignableContext *assignable();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Eq();
    antlr4::tree::TerminalNode *Ampersand();
    ChainContext *chain();
    NewExprContext *newExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostfixIncDecExpressionContext : public ExpressionContext {
  public:
    PostfixIncDecExpressionContext(ExpressionContext *ctx);

    ChainContext *chain();
    antlr4::tree::TerminalNode *Inc();
    antlr4::tree::TerminalNode *Dec();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CloneExpressionContext : public ExpressionContext {
  public:
    CloneExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Clone();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryOperatorExpressionContext : public ExpressionContext {
  public:
    UnaryOperatorExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *SuppressWarnings();
    antlr4::tree::TerminalNode *Bang();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NewExpressionContext : public ExpressionContext {
  public:
    NewExpressionContext(ExpressionContext *ctx);

    NewExprContext *newExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesisExpressionContext : public ExpressionContext {
  public:
    ParenthesisExpressionContext(ExpressionContext *ctx);

    ParenthesesContext *parentheses();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SpaceshipExpressionContext : public ExpressionContext {
  public:
    SpaceshipExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Spaceship();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ConditionalExpressionContext : public ExpressionContext {
  public:
    ConditionalExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *QuestionMark();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NullCoalescingExpressionContext : public ExpressionContext {
  public:
    NullCoalescingExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NullCoalescing();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArithmeticExpressionContext : public ExpressionContext {
  public:
    ArithmeticExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Pow();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Dot();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IndexerExpressionContext : public ExpressionContext {
  public:
    IndexerExpressionContext(ExpressionContext *ctx);

    StringConstantContext *stringConstant();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ScalarExpressionContext : public ExpressionContext {
  public:
    ScalarExpressionContext(ExpressionContext *ctx);

    ConstantContext *constant();
    StringContext *string();
    antlr4::tree::TerminalNode *Label();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrefixIncDecExpressionContext : public ExpressionContext {
  public:
    PrefixIncDecExpressionContext(ExpressionContext *ctx);

    ChainContext *chain();
    antlr4::tree::TerminalNode *Inc();
    antlr4::tree::TerminalNode *Dec();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ComparisonExpressionContext : public ExpressionContext {
  public:
    ComparisonExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ShiftLeft();
    antlr4::tree::TerminalNode *ShiftRight();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *IsSmallerOrEqual();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *IsGreaterOrEqual();
    antlr4::tree::TerminalNode *IsIdentical();
    antlr4::tree::TerminalNode *IsNoidentical();
    antlr4::tree::TerminalNode *IsEqual();
    antlr4::tree::TerminalNode *IsNotEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CastExpressionContext : public ExpressionContext {
  public:
    CastExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *OpenRoundBracket();
    CastOperationContext *castOperation();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InstanceOfExpressionContext : public ExpressionContext {
  public:
    InstanceOfExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *InstanceOf();
    TypeRefContext *typeRef();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayDestructExpressionContext : public ExpressionContext {
  public:
    ArrayDestructExpressionContext(ExpressionContext *ctx);

    ArrayDestructuringContext *arrayDestructuring();
    antlr4::tree::TerminalNode *Eq();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LambdaFunctionExpressionContext : public ExpressionContext {
  public:
    LambdaFunctionExpressionContext(ExpressionContext *ctx);

    LambdaFunctionExprContext *lambdaFunctionExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitwiseExpressionContext : public ExpressionContext {
  public:
    BitwiseExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Pipe();
    antlr4::tree::TerminalNode *BooleanAnd();
    antlr4::tree::TerminalNode *BooleanOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  AssignableContext : public antlr4::ParserRuleContext {
  public:
    AssignableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainContext *chain();
    ArrayCreationContext *arrayCreation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableContext* assignable();

  class  ArrayCreationContext : public antlr4::ParserRuleContext {
  public:
    ArrayCreationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Array();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<antlr4::tree::TerminalNode *> OpenSquareBracket();
    antlr4::tree::TerminalNode* OpenSquareBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CloseSquareBracket();
    antlr4::tree::TerminalNode* CloseSquareBracket(size_t i);
    ExpressionContext *expression();
    ArrayItemListContext *arrayItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayCreationContext* arrayCreation();

  class  ArrayDestructuringContext : public antlr4::ParserRuleContext {
  public:
    ArrayDestructuringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    std::vector<IndexedDestructItemContext *> indexedDestructItem();
    IndexedDestructItemContext* indexedDestructItem(size_t i);
    antlr4::tree::TerminalNode *CloseSquareBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<KeyedDestructItemContext *> keyedDestructItem();
    KeyedDestructItemContext* keyedDestructItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayDestructuringContext* arrayDestructuring();

  class  IndexedDestructItemContext : public antlr4::ParserRuleContext {
  public:
    IndexedDestructItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainContext *chain();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexedDestructItemContext* indexedDestructItem();

  class  KeyedDestructItemContext : public antlr4::ParserRuleContext {
  public:
    KeyedDestructItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainContext *chain();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DoubleArrow();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyedDestructItemContext* keyedDestructItem();

  class  LambdaFunctionExprContext : public antlr4::ParserRuleContext {
  public:
    LambdaFunctionExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    BlockStatementContext *blockStatement();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Ampersand();
    LambdaFunctionUseVarsContext *lambdaFunctionUseVars();
    antlr4::tree::TerminalNode *Colon();
    TypeHintContext *typeHint();
    antlr4::tree::TerminalNode *LambdaFn();
    antlr4::tree::TerminalNode *DoubleArrow();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaFunctionExprContext* lambdaFunctionExpr();

  class  MatchExprContext : public antlr4::ParserRuleContext {
  public:
    MatchExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Match_();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    std::vector<MatchItemContext *> matchItem();
    MatchItemContext* matchItem(size_t i);
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MatchExprContext* matchExpr();

  class  MatchItemContext : public antlr4::ParserRuleContext {
  public:
    MatchItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DoubleArrow();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MatchItemContext* matchItem();

  class  NewExprContext : public antlr4::ParserRuleContext {
  public:
    NewExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    TypeRefContext *typeRef();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewExprContext* newExpr();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eq();
    antlr4::tree::TerminalNode *PlusEqual();
    antlr4::tree::TerminalNode *MinusEqual();
    antlr4::tree::TerminalNode *MulEqual();
    antlr4::tree::TerminalNode *PowEqual();
    antlr4::tree::TerminalNode *DivEqual();
    antlr4::tree::TerminalNode *Concaequal();
    antlr4::tree::TerminalNode *ModEqual();
    antlr4::tree::TerminalNode *AndEqual();
    antlr4::tree::TerminalNode *OrEqual();
    antlr4::tree::TerminalNode *XorEqual();
    antlr4::tree::TerminalNode *ShiftLeftEqual();
    antlr4::tree::TerminalNode *ShiftRightEqual();
    antlr4::tree::TerminalNode *NullCoalescingEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  YieldExpressionContext : public antlr4::ParserRuleContext {
  public:
    YieldExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Yield();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *DoubleArrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YieldExpressionContext* yieldExpression();

  class  ArrayItemListContext : public antlr4::ParserRuleContext {
  public:
    ArrayItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayItemContext *> arrayItem();
    ArrayItemContext* arrayItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayItemListContext* arrayItemList();

  class  ArrayItemContext : public antlr4::ParserRuleContext {
  public:
    ArrayItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DoubleArrow();
    antlr4::tree::TerminalNode *Ampersand();
    ChainContext *chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayItemContext* arrayItem();

  class  LambdaFunctionUseVarsContext : public antlr4::ParserRuleContext {
  public:
    LambdaFunctionUseVarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Use();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    std::vector<LambdaFunctionUseVarContext *> lambdaFunctionUseVar();
    LambdaFunctionUseVarContext* lambdaFunctionUseVar(size_t i);
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaFunctionUseVarsContext* lambdaFunctionUseVars();

  class  LambdaFunctionUseVarContext : public antlr4::ParserRuleContext {
  public:
    LambdaFunctionUseVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VarName();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaFunctionUseVarContext* lambdaFunctionUseVar();

  class  QualifiedStaticTypeRefContext : public antlr4::ParserRuleContext {
  public:
    QualifiedStaticTypeRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    GenericDynamicArgsContext *genericDynamicArgs();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedStaticTypeRefContext* qualifiedStaticTypeRef();

  class  TypeRefContext : public antlr4::ParserRuleContext {
  public:
    TypeRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    IndirectTypeRefContext *indirectTypeRef();
    GenericDynamicArgsContext *genericDynamicArgs();
    PrimitiveTypeContext *primitiveType();
    antlr4::tree::TerminalNode *Static();
    AnonymousClassContext *anonymousClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeRefContext* typeRef();

  class  AnonymousClassContext : public antlr4::ParserRuleContext {
  public:
    AnonymousClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    ClassEntryTypeContext *classEntryType();
    antlr4::tree::TerminalNode *Interface();
    IdentifierContext *identifier();
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Private();
    ModifierContext *modifier();
    antlr4::tree::TerminalNode *Partial();
    std::vector<ClassStatementContext *> classStatement();
    ClassStatementContext* classStatement(size_t i);
    TypeParameterListInBracketsContext *typeParameterListInBrackets();
    antlr4::tree::TerminalNode *Extends();
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();
    antlr4::tree::TerminalNode *Implements();
    InterfaceListContext *interfaceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnonymousClassContext* anonymousClass();

  class  IndirectTypeRefContext : public antlr4::ParserRuleContext {
  public:
    IndirectTypeRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainBaseContext *chainBase();
    std::vector<antlr4::tree::TerminalNode *> ObjectOperator();
    antlr4::tree::TerminalNode* ObjectOperator(size_t i);
    std::vector<KeyedFieldNameContext *> keyedFieldName();
    KeyedFieldNameContext* keyedFieldName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndirectTypeRefContext* indirectTypeRef();

  class  QualifiedNamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceNameListContext *namespaceNameList();
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *NamespaceSeparator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedNamespaceNameContext* qualifiedNamespaceName();

  class  NamespaceNameListContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NamespaceSeparator();
    antlr4::tree::TerminalNode* NamespaceSeparator(size_t i);
    NamespaceNameTailContext *namespaceNameTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceNameListContext* namespaceNameList();

  class  NamespaceNameTailContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    std::vector<NamespaceNameTailContext *> namespaceNameTail();
    NamespaceNameTailContext* namespaceNameTail(size_t i);
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceNameTailContext* namespaceNameTail();

  class  QualifiedNamespaceNameListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNamespaceNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNamespaceNameContext *> qualifiedNamespaceName();
    QualifiedNamespaceNameContext* qualifiedNamespaceName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedNamespaceNameListContext* qualifiedNamespaceNameList();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<ActualArgumentContext *> actualArgument();
    ActualArgumentContext* actualArgument(size_t i);
    YieldExpressionContext *yieldExpression();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  ActualArgumentContext : public antlr4::ParserRuleContext {
  public:
    ActualArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArgumentNameContext *argumentName();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Ampersand();
    ChainContext *chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ActualArgumentContext* actualArgument();

  class  ArgumentNameContext : public antlr4::ParserRuleContext {
  public:
    ArgumentNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentNameContext* argumentName();

  class  ConstantInitializerContext : public antlr4::ParserRuleContext {
  public:
    ConstantInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *Array();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    ArrayItemListContext *arrayItemList();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    ConstantInitializerContext *constantInitializer();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantInitializerContext* constantInitializer();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Null();
    LiteralConstantContext *literalConstant();
    MagicConstantContext *magicConstant();
    ClassConstantContext *classConstant();
    QualifiedNamespaceNameContext *qualifiedNamespaceName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  LiteralConstantContext : public antlr4::ParserRuleContext {
  public:
    LiteralConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Real();
    antlr4::tree::TerminalNode *BooleanConstant();
    NumericConstantContext *numericConstant();
    StringConstantContext *stringConstant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralConstantContext* literalConstant();

  class  NumericConstantContext : public antlr4::ParserRuleContext {
  public:
    NumericConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Octal();
    antlr4::tree::TerminalNode *Decimal();
    antlr4::tree::TerminalNode *Hex();
    antlr4::tree::TerminalNode *Binary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericConstantContext* numericConstant();

  class  ClassConstantContext : public antlr4::ParserRuleContext {
  public:
    ClassConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Parent_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Constructor();
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Set();
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();
    std::vector<KeyedVariableContext *> keyedVariable();
    KeyedVariableContext* keyedVariable(size_t i);
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassConstantContext* classConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringConstantContext* stringConstant();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StartHereDoc();
    std::vector<antlr4::tree::TerminalNode *> HereDocText();
    antlr4::tree::TerminalNode* HereDocText(size_t i);
    antlr4::tree::TerminalNode *StartNowDoc();
    antlr4::tree::TerminalNode *SingleQuoteString();
    std::vector<antlr4::tree::TerminalNode *> DoubleQuote();
    antlr4::tree::TerminalNode* DoubleQuote(size_t i);
    std::vector<InterpolatedStringPartContext *> interpolatedStringPart();
    InterpolatedStringPartContext* interpolatedStringPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();

  class  InterpolatedStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringPart();
    antlr4::tree::TerminalNode *UnicodeEscape();
    ChainContext *chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedStringPartContext* interpolatedStringPart();

  class  ChainListContext : public antlr4::ParserRuleContext {
  public:
    ChainListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ChainContext *> chain();
    ChainContext* chain(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChainListContext* chainList();

  class  ChainContext : public antlr4::ParserRuleContext {
  public:
    ChainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainOriginContext *chainOrigin();
    std::vector<MemberAccessContext *> memberAccess();
    MemberAccessContext* memberAccess(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChainContext* chain();

  class  ChainOriginContext : public antlr4::ParserRuleContext {
  public:
    ChainOriginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainBaseContext *chainBase();
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    NewExprContext *newExpr();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChainOriginContext* chainOrigin();

  class  MemberAccessContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ObjectOperator();
    KeyedFieldNameContext *keyedFieldName();
    ActualArgumentsContext *actualArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberAccessContext* memberAccess();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallNameContext *functionCallName();
    ActualArgumentsContext *actualArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallContext* functionCall();

  class  FunctionCallNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNamespaceNameContext *qualifiedNamespaceName();
    ClassConstantContext *classConstant();
    ChainBaseContext *chainBase();
    ParenthesesContext *parentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallNameContext* functionCallName();

  class  ActualArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ActualArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericDynamicArgsContext *genericDynamicArgs();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);
    std::vector<SquareCurlyExpressionContext *> squareCurlyExpression();
    SquareCurlyExpressionContext* squareCurlyExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ActualArgumentsContext* actualArguments();

  class  ChainBaseContext : public antlr4::ParserRuleContext {
  public:
    ChainBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyedVariableContext *> keyedVariable();
    KeyedVariableContext* keyedVariable(size_t i);
    antlr4::tree::TerminalNode *DoubleColon();
    QualifiedStaticTypeRefContext *qualifiedStaticTypeRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChainBaseContext* chainBase();

  class  KeyedFieldNameContext : public antlr4::ParserRuleContext {
  public:
    KeyedFieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyedSimpleFieldNameContext *keyedSimpleFieldName();
    KeyedVariableContext *keyedVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyedFieldNameContext* keyedFieldName();

  class  KeyedSimpleFieldNameContext : public antlr4::ParserRuleContext {
  public:
    KeyedSimpleFieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    std::vector<SquareCurlyExpressionContext *> squareCurlyExpression();
    SquareCurlyExpressionContext* squareCurlyExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyedSimpleFieldNameContext* keyedSimpleFieldName();

  class  KeyedVariableContext : public antlr4::ParserRuleContext {
  public:
    KeyedVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VarName();
    std::vector<antlr4::tree::TerminalNode *> Dollar();
    antlr4::tree::TerminalNode* Dollar(size_t i);
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseCurlyBracket();
    std::vector<SquareCurlyExpressionContext *> squareCurlyExpression();
    SquareCurlyExpressionContext* squareCurlyExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyedVariableContext* keyedVariable();

  class  SquareCurlyExpressionContext : public antlr4::ParserRuleContext {
  public:
    SquareCurlyExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OpenCurlyBracket();
    antlr4::tree::TerminalNode *CloseCurlyBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SquareCurlyExpressionContext* squareCurlyExpression();

  class  AssignmentListContext : public antlr4::ParserRuleContext {
  public:
    AssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentListElementContext *> assignmentListElement();
    AssignmentListElementContext* assignmentListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentListContext* assignmentList();

  class  AssignmentListElementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChainContext *chain();
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    AssignmentListContext *assignmentList();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    ArrayItemContext *arrayItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentListElementContext* assignmentListElement();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Label();
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Array();
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *BinaryCast();
    antlr4::tree::TerminalNode *BoolType();
    antlr4::tree::TerminalNode *BooleanConstant();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Callable();
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Clone();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Declare();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *DoubleCast();
    antlr4::tree::TerminalNode *DoubleType();
    antlr4::tree::TerminalNode *Echo();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *ElseIf();
    antlr4::tree::TerminalNode *Empty();
    antlr4::tree::TerminalNode *EndDeclare();
    antlr4::tree::TerminalNode *EndFor();
    antlr4::tree::TerminalNode *EndForeach();
    antlr4::tree::TerminalNode *EndIf();
    antlr4::tree::TerminalNode *EndSwitch();
    antlr4::tree::TerminalNode *EndWhile();
    antlr4::tree::TerminalNode *Eval();
    antlr4::tree::TerminalNode *Exit();
    antlr4::tree::TerminalNode *Extends();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *Finally();
    antlr4::tree::TerminalNode *FloatCast();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Foreach();
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Global();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Implements();
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *Include();
    antlr4::tree::TerminalNode *IncludeOnce();
    antlr4::tree::TerminalNode *InstanceOf();
    antlr4::tree::TerminalNode *InsteadOf();
    antlr4::tree::TerminalNode *Int16Cast();
    antlr4::tree::TerminalNode *Int64Type();
    antlr4::tree::TerminalNode *Int8Cast();
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *IntType();
    antlr4::tree::TerminalNode *IsSet();
    antlr4::tree::TerminalNode *LambdaFn();
    antlr4::tree::TerminalNode *List();
    antlr4::tree::TerminalNode *LogicalAnd();
    antlr4::tree::TerminalNode *LogicalOr();
    antlr4::tree::TerminalNode *LogicalXor();
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Null();
    antlr4::tree::TerminalNode *ObjectType();
    antlr4::tree::TerminalNode *Parent_();
    antlr4::tree::TerminalNode *Partial();
    antlr4::tree::TerminalNode *Print();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Readonly();
    antlr4::tree::TerminalNode *Require();
    antlr4::tree::TerminalNode *RequireOnce();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *StringType();
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *Trait();
    antlr4::tree::TerminalNode *Try();
    antlr4::tree::TerminalNode *Typeof();
    antlr4::tree::TerminalNode *UintCast();
    antlr4::tree::TerminalNode *UnicodeCast();
    antlr4::tree::TerminalNode *Unset();
    antlr4::tree::TerminalNode *Use();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *Yield();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Enum_();
    antlr4::tree::TerminalNode *Match_();
    antlr4::tree::TerminalNode *Ticks();
    antlr4::tree::TerminalNode *Encoding();
    antlr4::tree::TerminalNode *StrictTypes();
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Call();
    antlr4::tree::TerminalNode *CallStatic();
    antlr4::tree::TerminalNode *Constructor();
    antlr4::tree::TerminalNode *Destruct();
    antlr4::tree::TerminalNode *Wakeup();
    antlr4::tree::TerminalNode *Sleep();
    antlr4::tree::TerminalNode *Autoload();
    antlr4::tree::TerminalNode *IsSet__();
    antlr4::tree::TerminalNode *Unset__();
    antlr4::tree::TerminalNode *ToString__();
    antlr4::tree::TerminalNode *Invoke();
    antlr4::tree::TerminalNode *SetState();
    antlr4::tree::TerminalNode *Clone__();
    antlr4::tree::TerminalNode *DebugInfo();
    antlr4::tree::TerminalNode *Namespace__();
    antlr4::tree::TerminalNode *Class__();
    antlr4::tree::TerminalNode *Traic__();
    antlr4::tree::TerminalNode *Function__();
    antlr4::tree::TerminalNode *Method__();
    antlr4::tree::TerminalNode *Line__();
    antlr4::tree::TerminalNode *File__();
    antlr4::tree::TerminalNode *Dir__();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  MemberModifierContext : public antlr4::ParserRuleContext {
  public:
    MemberModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *Readonly();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberModifierContext* memberModifier();

  class  MagicConstantContext : public antlr4::ParserRuleContext {
  public:
    MagicConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace__();
    antlr4::tree::TerminalNode *Class__();
    antlr4::tree::TerminalNode *Traic__();
    antlr4::tree::TerminalNode *Function__();
    antlr4::tree::TerminalNode *Method__();
    antlr4::tree::TerminalNode *Line__();
    antlr4::tree::TerminalNode *File__();
    antlr4::tree::TerminalNode *Dir__();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MagicConstantContext* magicConstant();

  class  MagicMethodContext : public antlr4::ParserRuleContext {
  public:
    MagicMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Call();
    antlr4::tree::TerminalNode *CallStatic();
    antlr4::tree::TerminalNode *Constructor();
    antlr4::tree::TerminalNode *Destruct();
    antlr4::tree::TerminalNode *Wakeup();
    antlr4::tree::TerminalNode *Sleep();
    antlr4::tree::TerminalNode *Autoload();
    antlr4::tree::TerminalNode *IsSet__();
    antlr4::tree::TerminalNode *Unset__();
    antlr4::tree::TerminalNode *ToString__();
    antlr4::tree::TerminalNode *Invoke();
    antlr4::tree::TerminalNode *SetState();
    antlr4::tree::TerminalNode *Clone__();
    antlr4::tree::TerminalNode *DebugInfo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MagicMethodContext* magicMethod();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BoolType();
    antlr4::tree::TerminalNode *IntType();
    antlr4::tree::TerminalNode *Int64Type();
    antlr4::tree::TerminalNode *DoubleType();
    antlr4::tree::TerminalNode *StringType();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *ObjectType();
    antlr4::tree::TerminalNode *Array();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  CastOperationContext : public antlr4::ParserRuleContext {
  public:
    CastOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BoolType();
    antlr4::tree::TerminalNode *Int8Cast();
    antlr4::tree::TerminalNode *Int16Cast();
    antlr4::tree::TerminalNode *IntType();
    antlr4::tree::TerminalNode *Int64Type();
    antlr4::tree::TerminalNode *UintCast();
    antlr4::tree::TerminalNode *DoubleCast();
    antlr4::tree::TerminalNode *DoubleType();
    antlr4::tree::TerminalNode *FloatCast();
    antlr4::tree::TerminalNode *StringType();
    antlr4::tree::TerminalNode *BinaryCast();
    antlr4::tree::TerminalNode *UnicodeCast();
    antlr4::tree::TerminalNode *Array();
    antlr4::tree::TerminalNode *ObjectType();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Unset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CastOperationContext* castOperation();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool typeHintSempred(TypeHintContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

