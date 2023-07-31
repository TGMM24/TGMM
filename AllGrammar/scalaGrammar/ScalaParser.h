
// Generated from Scala.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  ScalaParser : public antlr4::Parser {
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
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, Id = 62, 
    BooleanLiteral = 63, CharacterLiteral = 64, SymbolLiteral = 65, IntegerLiteral = 66, 
    StringLiteral = 67, FloatingPointLiteral = 68, Varid = 69, BoundVarid = 70, 
    Paren = 71, Delim = 72, Semi = 73, NL = 74, NEWLINE = 75, WS = 76, COMMENT = 77, 
    LINE_COMMENT = 78
  };

  enum {
    RuleLiteral = 0, RuleQualId = 1, RuleIds = 2, RuleStableId = 3, RuleClassQualifier = 4, 
    RuleType_ = 5, RuleFunctionArgTypes = 6, RuleExistentialClause = 7, 
    RuleExistentialDcl = 8, RuleInfixType = 9, RuleCompoundType = 10, RuleAnnotType = 11, 
    RuleSimpleType = 12, RuleTypeArgs = 13, RuleTypes = 14, RuleRefinement = 15, 
    RuleRefineStat = 16, RuleTypePat = 17, RuleAscription = 18, RuleExpr = 19, 
    RuleExpr1 = 20, RulePrefixDef = 21, RulePostfixExpr = 22, RuleInfixExpr = 23, 
    RulePrefixExpr = 24, RuleSimpleExpr = 25, RuleSimpleExpr1 = 26, RuleExprs = 27, 
    RuleArgumentExprs = 28, RuleArgs = 29, RuleBlockExpr = 30, RuleBlock = 31, 
    RuleBlockStat = 32, RuleResultExpr = 33, RuleEnumerators = 34, RuleGenerator = 35, 
    RuleCaseClauses = 36, RuleCaseClause = 37, RuleGuard_ = 38, RulePattern = 39, 
    RulePattern1 = 40, RulePattern2 = 41, RulePattern3 = 42, RuleSimplePattern = 43, 
    RulePatterns = 44, RuleTypeParamClause = 45, RuleFunTypeParamClause = 46, 
    RuleVariantTypeParam = 47, RuleTypeParam = 48, RuleParamClauses = 49, 
    RuleParamClause = 50, RuleParams = 51, RuleParam = 52, RuleParamType = 53, 
    RuleClassParamClauses = 54, RuleClassParamClause = 55, RuleClassParams = 56, 
    RuleClassParam = 57, RuleBindings = 58, RuleBinding = 59, RuleModifier = 60, 
    RuleLocalModifier = 61, RuleAccessModifier = 62, RuleAccessQualifier = 63, 
    RuleAnnotation = 64, RuleConstrAnnotation = 65, RuleTemplateBody = 66, 
    RuleTemplateStat = 67, RuleSelfType = 68, RuleImport_ = 69, RuleImportExpr = 70, 
    RuleImportSelectors = 71, RuleImportSelector = 72, RuleDcl = 73, RuleValDcl = 74, 
    RuleVarDcl = 75, RuleFunDcl = 76, RuleFunSig = 77, RuleTypeDcl = 78, 
    RulePatVarDef = 79, RuleDef_ = 80, RulePatDef = 81, RuleVarDef = 82, 
    RuleFunDef = 83, RuleTypeDef = 84, RuleTmplDef = 85, RuleClassDef = 86, 
    RuleTraitDef = 87, RuleObjectDef = 88, RuleClassTemplateOpt = 89, RuleTraitTemplateOpt = 90, 
    RuleClassTemplate = 91, RuleTraitTemplate = 92, RuleClassParents = 93, 
    RuleTraitParents = 94, RuleConstr = 95, RuleEarlyDefs = 96, RuleEarlyDef = 97, 
    RuleConstrExpr = 98, RuleConstrBlock = 99, RuleSelfInvocation = 100, 
    RuleTopStatSeq = 101, RuleTopStat = 102, RulePackaging = 103, RulePackageObject = 104, 
    RuleCompilationUnit = 105
  };

  explicit ScalaParser(antlr4::TokenStream *input);

  ScalaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ScalaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class LiteralContext;
  class QualIdContext;
  class IdsContext;
  class StableIdContext;
  class ClassQualifierContext;
  class Type_Context;
  class FunctionArgTypesContext;
  class ExistentialClauseContext;
  class ExistentialDclContext;
  class InfixTypeContext;
  class CompoundTypeContext;
  class AnnotTypeContext;
  class SimpleTypeContext;
  class TypeArgsContext;
  class TypesContext;
  class RefinementContext;
  class RefineStatContext;
  class TypePatContext;
  class AscriptionContext;
  class ExprContext;
  class Expr1Context;
  class PrefixDefContext;
  class PostfixExprContext;
  class InfixExprContext;
  class PrefixExprContext;
  class SimpleExprContext;
  class SimpleExpr1Context;
  class ExprsContext;
  class ArgumentExprsContext;
  class ArgsContext;
  class BlockExprContext;
  class BlockContext;
  class BlockStatContext;
  class ResultExprContext;
  class EnumeratorsContext;
  class GeneratorContext;
  class CaseClausesContext;
  class CaseClauseContext;
  class Guard_Context;
  class PatternContext;
  class Pattern1Context;
  class Pattern2Context;
  class Pattern3Context;
  class SimplePatternContext;
  class PatternsContext;
  class TypeParamClauseContext;
  class FunTypeParamClauseContext;
  class VariantTypeParamContext;
  class TypeParamContext;
  class ParamClausesContext;
  class ParamClauseContext;
  class ParamsContext;
  class ParamContext;
  class ParamTypeContext;
  class ClassParamClausesContext;
  class ClassParamClauseContext;
  class ClassParamsContext;
  class ClassParamContext;
  class BindingsContext;
  class BindingContext;
  class ModifierContext;
  class LocalModifierContext;
  class AccessModifierContext;
  class AccessQualifierContext;
  class AnnotationContext;
  class ConstrAnnotationContext;
  class TemplateBodyContext;
  class TemplateStatContext;
  class SelfTypeContext;
  class Import_Context;
  class ImportExprContext;
  class ImportSelectorsContext;
  class ImportSelectorContext;
  class DclContext;
  class ValDclContext;
  class VarDclContext;
  class FunDclContext;
  class FunSigContext;
  class TypeDclContext;
  class PatVarDefContext;
  class Def_Context;
  class PatDefContext;
  class VarDefContext;
  class FunDefContext;
  class TypeDefContext;
  class TmplDefContext;
  class ClassDefContext;
  class TraitDefContext;
  class ObjectDefContext;
  class ClassTemplateOptContext;
  class TraitTemplateOptContext;
  class ClassTemplateContext;
  class TraitTemplateContext;
  class ClassParentsContext;
  class TraitParentsContext;
  class ConstrContext;
  class EarlyDefsContext;
  class EarlyDefContext;
  class ConstrExprContext;
  class ConstrBlockContext;
  class SelfInvocationContext;
  class TopStatSeqContext;
  class TopStatContext;
  class PackagingContext;
  class PackageObjectContext;
  class CompilationUnitContext; 

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *FloatingPointLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *SymbolLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  QualIdContext : public antlr4::ParserRuleContext {
  public:
    QualIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualIdContext* qualId();

  class  IdsContext : public antlr4::ParserRuleContext {
  public:
    IdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdsContext* ids();

  class  StableIdContext : public antlr4::ParserRuleContext {
  public:
    StableIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    ClassQualifierContext *classQualifier();
    StableIdContext *stableId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StableIdContext* stableId();
  StableIdContext* stableId(int precedence);
  class  ClassQualifierContext : public antlr4::ParserRuleContext {
  public:
    ClassQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassQualifierContext* classQualifier();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionArgTypesContext *functionArgTypes();
    Type_Context *type_();
    InfixTypeContext *infixType();
    ExistentialClauseContext *existentialClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_Context* type_();

  class  FunctionArgTypesContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixTypeContext *infixType();
    std::vector<ParamTypeContext *> paramType();
    ParamTypeContext* paramType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgTypesContext* functionArgTypes();

  class  ExistentialClauseContext : public antlr4::ParserRuleContext {
  public:
    ExistentialClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExistentialDclContext *> existentialDcl();
    ExistentialDclContext* existentialDcl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExistentialClauseContext* existentialClause();

  class  ExistentialDclContext : public antlr4::ParserRuleContext {
  public:
    ExistentialDclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeDclContext *typeDcl();
    ValDclContext *valDcl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExistentialDclContext* existentialDcl();

  class  InfixTypeContext : public antlr4::ParserRuleContext {
  public:
    InfixTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompoundTypeContext *> compoundType();
    CompoundTypeContext* compoundType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixTypeContext* infixType();

  class  CompoundTypeContext : public antlr4::ParserRuleContext {
  public:
    CompoundTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotTypeContext *> annotType();
    AnnotTypeContext* annotType(size_t i);
    RefinementContext *refinement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundTypeContext* compoundType();

  class  AnnotTypeContext : public antlr4::ParserRuleContext {
  public:
    AnnotTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeContext *simpleType();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotTypeContext* annotType();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StableIdContext *stableId();
    TypesContext *types();
    SimpleTypeContext *simpleType();
    TypeArgsContext *typeArgs();
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleTypeContext* simpleType();
  SimpleTypeContext* simpleType(int precedence);
  class  TypeArgsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypesContext *types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgsContext* typeArgs();

  class  TypesContext : public antlr4::ParserRuleContext {
  public:
    TypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypesContext* types();

  class  RefinementContext : public antlr4::ParserRuleContext {
  public:
    RefinementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();
    std::vector<RefineStatContext *> refineStat();
    RefineStatContext* refineStat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RefinementContext* refinement();

  class  RefineStatContext : public antlr4::ParserRuleContext {
  public:
    RefineStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DclContext *dcl();
    TypeDefContext *typeDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RefineStatContext* refineStat();

  class  TypePatContext : public antlr4::ParserRuleContext {
  public:
    TypePatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypePatContext* typePat();

  class  AscriptionContext : public antlr4::ParserRuleContext {
  public:
    AscriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixTypeContext *infixType();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AscriptionContext* ascription();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BindingsContext *bindings();
    antlr4::tree::TerminalNode *Id();
    Expr1Context *expr1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  Expr1Context : public antlr4::ParserRuleContext {
  public:
    Expr1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    EnumeratorsContext *enumerators();
    antlr4::tree::TerminalNode *Id();
    SimpleExprContext *simpleExpr();
    SimpleExpr1Context *simpleExpr1();
    ArgumentExprsContext *argumentExprs();
    PostfixExprContext *postfixExpr();
    AscriptionContext *ascription();
    CaseClausesContext *caseClauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr1Context* expr1();

  class  PrefixDefContext : public antlr4::ParserRuleContext {
  public:
    PrefixDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixDefContext* prefixDef();

  class  PostfixExprContext : public antlr4::ParserRuleContext {
  public:
    PostfixExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixExprContext *infixExpr();
    antlr4::tree::TerminalNode *Id();
    std::vector<PrefixDefContext *> prefixDef();
    PrefixDefContext* prefixDef(size_t i);
    std::vector<SimpleExpr1Context *> simpleExpr1();
    SimpleExpr1Context* simpleExpr1(size_t i);
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixExprContext* postfixExpr();

  class  InfixExprContext : public antlr4::ParserRuleContext {
  public:
    InfixExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixExprContext *prefixExpr();
    std::vector<InfixExprContext *> infixExpr();
    InfixExprContext* infixExpr(size_t i);
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixExprContext* infixExpr();
  InfixExprContext* infixExpr(int precedence);
  class  PrefixExprContext : public antlr4::ParserRuleContext {
  public:
    PrefixExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExprContext *simpleExpr();
    SimpleExpr1Context *simpleExpr1();
    PrefixDefContext *prefixDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixExprContext* prefixExpr();

  class  SimpleExprContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassTemplateContext *classTemplate();
    TemplateBodyContext *templateBody();
    BlockExprContext *blockExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleExprContext* simpleExpr();

  class  SimpleExpr1Context : public antlr4::ParserRuleContext {
  public:
    SimpleExpr1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    StableIdContext *stableId();
    ExprsContext *exprs();
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *Id();
    TypeArgsContext *typeArgs();
    SimpleExpr1Context *simpleExpr1();
    ArgumentExprsContext *argumentExprs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleExpr1Context* simpleExpr1();
  SimpleExpr1Context* simpleExpr1(int precedence);
  class  ExprsContext : public antlr4::ParserRuleContext {
  public:
    ExprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprsContext* exprs();

  class  ArgumentExprsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentExprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgsContext *args();
    BlockExprContext *blockExpr();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentExprsContext* argumentExprs();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprsContext *exprs();
    PostfixExprContext *postfixExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  BlockExprContext : public antlr4::ParserRuleContext {
  public:
    BlockExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaseClausesContext *caseClauses();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockExprContext* blockExpr();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockStatContext *> blockStat();
    BlockStatContext* blockStat(size_t i);
    ResultExprContext *resultExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  BlockStatContext : public antlr4::ParserRuleContext {
  public:
    BlockStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_Context *import_();
    Def_Context *def_();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TmplDefContext *tmplDef();
    std::vector<LocalModifierContext *> localModifier();
    LocalModifierContext* localModifier(size_t i);
    Expr1Context *expr1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockStatContext* blockStat();

  class  ResultExprContext : public antlr4::ParserRuleContext {
  public:
    ResultExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr1Context *expr1();
    BlockContext *block();
    BindingsContext *bindings();
    CompoundTypeContext *compoundType();
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResultExprContext* resultExpr();

  class  EnumeratorsContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GeneratorContext *> generator();
    GeneratorContext* generator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorsContext* enumerators();

  class  GeneratorContext : public antlr4::ParserRuleContext {
  public:
    GeneratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pattern1Context *> pattern1();
    Pattern1Context* pattern1(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Guard_Context *> guard_();
    Guard_Context* guard_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorContext* generator();

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
    PatternContext *pattern();
    BlockContext *block();
    Guard_Context *guard_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClauseContext* caseClause();

  class  Guard_Context : public antlr4::ParserRuleContext {
  public:
    Guard_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExprContext *postfixExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guard_Context* guard_();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pattern1Context *> pattern1();
    Pattern1Context* pattern1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternContext* pattern();

  class  Pattern1Context : public antlr4::ParserRuleContext {
  public:
    Pattern1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypePatContext *typePat();
    antlr4::tree::TerminalNode *BoundVarid();
    antlr4::tree::TerminalNode *Id();
    Pattern2Context *pattern2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern1Context* pattern1();

  class  Pattern2Context : public antlr4::ParserRuleContext {
  public:
    Pattern2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    Pattern3Context *pattern3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern2Context* pattern2();

  class  Pattern3Context : public antlr4::ParserRuleContext {
  public:
    Pattern3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimplePatternContext *> simplePattern();
    SimplePatternContext* simplePattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern3Context* pattern3();

  class  SimplePatternContext : public antlr4::ParserRuleContext {
  public:
    SimplePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Varid();
    LiteralContext *literal();
    StableIdContext *stableId();
    PatternsContext *patterns();
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimplePatternContext* simplePattern();

  class  PatternsContext : public antlr4::ParserRuleContext {
  public:
    PatternsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    PatternsContext *patterns();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternsContext* patterns();

  class  TypeParamClauseContext : public antlr4::ParserRuleContext {
  public:
    TypeParamClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariantTypeParamContext *> variantTypeParam();
    VariantTypeParamContext* variantTypeParam(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParamClauseContext* typeParamClause();

  class  FunTypeParamClauseContext : public antlr4::ParserRuleContext {
  public:
    FunTypeParamClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParamContext *> typeParam();
    TypeParamContext* typeParam(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunTypeParamClauseContext* funTypeParamClause();

  class  VariantTypeParamContext : public antlr4::ParserRuleContext {
  public:
    VariantTypeParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParamContext *typeParam();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariantTypeParamContext* variantTypeParam();

  class  TypeParamContext : public antlr4::ParserRuleContext {
  public:
    TypeParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    TypeParamClauseContext *typeParamClause();
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParamContext* typeParam();

  class  ParamClausesContext : public antlr4::ParserRuleContext {
  public:
    ParamClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamClauseContext *> paramClause();
    ParamClauseContext* paramClause(size_t i);
    ParamsContext *params();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamClausesContext* paramClauses();

  class  ParamClauseContext : public antlr4::ParserRuleContext {
  public:
    ParamClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();
    ParamsContext *params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamClauseContext* paramClause();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamsContext* params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    ParamTypeContext *paramType();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  ParamTypeContext : public antlr4::ParserRuleContext {
  public:
    ParamTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamTypeContext* paramType();

  class  ClassParamClausesContext : public antlr4::ParserRuleContext {
  public:
    ClassParamClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassParamClauseContext *> classParamClause();
    ClassParamClauseContext* classParamClause(size_t i);
    ClassParamsContext *classParams();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParamClausesContext* classParamClauses();

  class  ClassParamClauseContext : public antlr4::ParserRuleContext {
  public:
    ClassParamClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();
    ClassParamsContext *classParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParamClauseContext* classParamClause();

  class  ClassParamsContext : public antlr4::ParserRuleContext {
  public:
    ClassParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassParamContext *> classParam();
    ClassParamContext* classParam(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParamsContext* classParams();

  class  ClassParamContext : public antlr4::ParserRuleContext {
  public:
    ClassParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ParamTypeContext *paramType();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParamContext* classParam();

  class  BindingsContext : public antlr4::ParserRuleContext {
  public:
    BindingsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BindingContext *> binding();
    BindingContext* binding(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BindingsContext* bindings();

  class  BindingContext : public antlr4::ParserRuleContext {
  public:
    BindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BindingContext* binding();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalModifierContext *localModifier();
    AccessModifierContext *accessModifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  LocalModifierContext : public antlr4::ParserRuleContext {
  public:
    LocalModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalModifierContext* localModifier();

  class  AccessModifierContext : public antlr4::ParserRuleContext {
  public:
    AccessModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessQualifierContext *accessQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessModifierContext* accessModifier();

  class  AccessQualifierContext : public antlr4::ParserRuleContext {
  public:
    AccessQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessQualifierContext* accessQualifier();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeContext *simpleType();
    std::vector<ArgumentExprsContext *> argumentExprs();
    ArgumentExprsContext* argumentExprs(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  ConstrAnnotationContext : public antlr4::ParserRuleContext {
  public:
    ConstrAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeContext *simpleType();
    ArgumentExprsContext *argumentExprs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrAnnotationContext* constrAnnotation();

  class  TemplateBodyContext : public antlr4::ParserRuleContext {
  public:
    TemplateBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();
    SelfTypeContext *selfType();
    std::vector<TemplateStatContext *> templateStat();
    TemplateStatContext* templateStat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateBodyContext* templateBody();

  class  TemplateStatContext : public antlr4::ParserRuleContext {
  public:
    TemplateStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_Context *import_();
    Def_Context *def_();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    DclContext *dcl();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateStatContext* templateStat();

  class  SelfTypeContext : public antlr4::ParserRuleContext {
  public:
    SelfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelfTypeContext* selfType();

  class  Import_Context : public antlr4::ParserRuleContext {
  public:
    Import_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportExprContext *> importExpr();
    ImportExprContext* importExpr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_Context* import_();

  class  ImportExprContext : public antlr4::ParserRuleContext {
  public:
    ImportExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StableIdContext *stableId();
    antlr4::tree::TerminalNode *Id();
    ImportSelectorsContext *importSelectors();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportExprContext* importExpr();

  class  ImportSelectorsContext : public antlr4::ParserRuleContext {
  public:
    ImportSelectorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportSelectorContext *> importSelector();
    ImportSelectorContext* importSelector(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportSelectorsContext* importSelectors();

  class  ImportSelectorContext : public antlr4::ParserRuleContext {
  public:
    ImportSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportSelectorContext* importSelector();

  class  DclContext : public antlr4::ParserRuleContext {
  public:
    DclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValDclContext *valDcl();
    VarDclContext *varDcl();
    FunDclContext *funDcl();
    TypeDclContext *typeDcl();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DclContext* dcl();

  class  ValDclContext : public antlr4::ParserRuleContext {
  public:
    ValDclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdsContext *ids();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValDclContext* valDcl();

  class  VarDclContext : public antlr4::ParserRuleContext {
  public:
    VarDclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdsContext *ids();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDclContext* varDcl();

  class  FunDclContext : public antlr4::ParserRuleContext {
  public:
    FunDclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunSigContext *funSig();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunDclContext* funDcl();

  class  FunSigContext : public antlr4::ParserRuleContext {
  public:
    FunSigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ParamClausesContext *paramClauses();
    FunTypeParamClauseContext *funTypeParamClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunSigContext* funSig();

  class  TypeDclContext : public antlr4::ParserRuleContext {
  public:
    TypeDclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    TypeParamClauseContext *typeParamClause();
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDclContext* typeDcl();

  class  PatVarDefContext : public antlr4::ParserRuleContext {
  public:
    PatVarDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatDefContext *patDef();
    VarDefContext *varDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatVarDefContext* patVarDef();

  class  Def_Context : public antlr4::ParserRuleContext {
  public:
    Def_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatVarDefContext *patVarDef();
    FunDefContext *funDef();
    TypeDefContext *typeDef();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    TmplDefContext *tmplDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Def_Context* def_();

  class  PatDefContext : public antlr4::ParserRuleContext {
  public:
    PatDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pattern2Context *> pattern2();
    Pattern2Context* pattern2(size_t i);
    ExprContext *expr();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatDefContext* patDef();

  class  VarDefContext : public antlr4::ParserRuleContext {
  public:
    VarDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatDefContext *patDef();
    IdsContext *ids();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDefContext* varDef();

  class  FunDefContext : public antlr4::ParserRuleContext {
  public:
    FunDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunSigContext *funSig();
    ExprContext *expr();
    Type_Context *type_();
    BlockContext *block();
    antlr4::tree::TerminalNode *NL();
    ParamClauseContext *paramClause();
    ParamClausesContext *paramClauses();
    ConstrExprContext *constrExpr();
    ConstrBlockContext *constrBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunDefContext* funDef();

  class  TypeDefContext : public antlr4::ParserRuleContext {
  public:
    TypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    Type_Context *type_();
    TypeParamClauseContext *typeParamClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDefContext* typeDef();

  class  TmplDefContext : public antlr4::ParserRuleContext {
  public:
    TmplDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDefContext *classDef();
    ObjectDefContext *objectDef();
    TraitDefContext *traitDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TmplDefContext* tmplDef();

  class  ClassDefContext : public antlr4::ParserRuleContext {
  public:
    ClassDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ClassParamClausesContext *classParamClauses();
    ClassTemplateOptContext *classTemplateOpt();
    TypeParamClauseContext *typeParamClause();
    std::vector<ConstrAnnotationContext *> constrAnnotation();
    ConstrAnnotationContext* constrAnnotation(size_t i);
    AccessModifierContext *accessModifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDefContext* classDef();

  class  TraitDefContext : public antlr4::ParserRuleContext {
  public:
    TraitDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    TraitTemplateOptContext *traitTemplateOpt();
    TypeParamClauseContext *typeParamClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitDefContext* traitDef();

  class  ObjectDefContext : public antlr4::ParserRuleContext {
  public:
    ObjectDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ClassTemplateOptContext *classTemplateOpt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectDefContext* objectDef();

  class  ClassTemplateOptContext : public antlr4::ParserRuleContext {
  public:
    ClassTemplateOptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassTemplateContext *classTemplate();
    TemplateBodyContext *templateBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassTemplateOptContext* classTemplateOpt();

  class  TraitTemplateOptContext : public antlr4::ParserRuleContext {
  public:
    TraitTemplateOptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TraitTemplateContext *traitTemplate();
    TemplateBodyContext *templateBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitTemplateOptContext* traitTemplateOpt();

  class  ClassTemplateContext : public antlr4::ParserRuleContext {
  public:
    ClassTemplateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassParentsContext *classParents();
    EarlyDefsContext *earlyDefs();
    TemplateBodyContext *templateBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassTemplateContext* classTemplate();

  class  TraitTemplateContext : public antlr4::ParserRuleContext {
  public:
    TraitTemplateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TraitParentsContext *traitParents();
    EarlyDefsContext *earlyDefs();
    TemplateBodyContext *templateBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitTemplateContext* traitTemplate();

  class  ClassParentsContext : public antlr4::ParserRuleContext {
  public:
    ClassParentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstrContext *constr();
    std::vector<AnnotTypeContext *> annotType();
    AnnotTypeContext* annotType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParentsContext* classParents();

  class  TraitParentsContext : public antlr4::ParserRuleContext {
  public:
    TraitParentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotTypeContext *> annotType();
    AnnotTypeContext* annotType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TraitParentsContext* traitParents();

  class  ConstrContext : public antlr4::ParserRuleContext {
  public:
    ConstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotTypeContext *annotType();
    std::vector<ArgumentExprsContext *> argumentExprs();
    ArgumentExprsContext* argumentExprs(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrContext* constr();

  class  EarlyDefsContext : public antlr4::ParserRuleContext {
  public:
    EarlyDefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EarlyDefContext *> earlyDef();
    EarlyDefContext* earlyDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EarlyDefsContext* earlyDefs();

  class  EarlyDefContext : public antlr4::ParserRuleContext {
  public:
    EarlyDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatVarDefContext *patVarDef();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EarlyDefContext* earlyDef();

  class  ConstrExprContext : public antlr4::ParserRuleContext {
  public:
    ConstrExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelfInvocationContext *selfInvocation();
    ConstrBlockContext *constrBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrExprContext* constrExpr();

  class  ConstrBlockContext : public antlr4::ParserRuleContext {
  public:
    ConstrBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelfInvocationContext *selfInvocation();
    std::vector<BlockStatContext *> blockStat();
    BlockStatContext* blockStat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrBlockContext* constrBlock();

  class  SelfInvocationContext : public antlr4::ParserRuleContext {
  public:
    SelfInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentExprsContext *> argumentExprs();
    ArgumentExprsContext* argumentExprs(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelfInvocationContext* selfInvocation();

  class  TopStatSeqContext : public antlr4::ParserRuleContext {
  public:
    TopStatSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TopStatContext *> topStat();
    TopStatContext* topStat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopStatSeqContext* topStatSeq();

  class  TopStatContext : public antlr4::ParserRuleContext {
  public:
    TopStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplDefContext *tmplDef();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    Import_Context *import_();
    PackagingContext *packaging();
    PackageObjectContext *packageObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopStatContext* topStat();

  class  PackagingContext : public antlr4::ParserRuleContext {
  public:
    PackagingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualIdContext *qualId();
    TopStatSeqContext *topStatSeq();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackagingContext* packaging();

  class  PackageObjectContext : public antlr4::ParserRuleContext {
  public:
    PackageObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectDefContext *objectDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageObjectContext* packageObject();

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TopStatSeqContext *topStatSeq();
    std::vector<QualIdContext *> qualId();
    QualIdContext* qualId(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationUnitContext* compilationUnit();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool stableIdSempred(StableIdContext *_localctx, size_t predicateIndex);
  bool simpleTypeSempred(SimpleTypeContext *_localctx, size_t predicateIndex);
  bool infixExprSempred(InfixExprContext *_localctx, size_t predicateIndex);
  bool simpleExpr1Sempred(SimpleExpr1Context *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

