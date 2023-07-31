
// Generated from Scala.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ScalaListener.h"


/**
 * This class provides an empty implementation of ScalaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ScalaBaseListener : public ScalaListener {
public:

  virtual void enterLiteral(ScalaParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(ScalaParser::LiteralContext * /*ctx*/) override { }

  virtual void enterQualId(ScalaParser::QualIdContext * /*ctx*/) override { }
  virtual void exitQualId(ScalaParser::QualIdContext * /*ctx*/) override { }

  virtual void enterIds(ScalaParser::IdsContext * /*ctx*/) override { }
  virtual void exitIds(ScalaParser::IdsContext * /*ctx*/) override { }

  virtual void enterStableId(ScalaParser::StableIdContext * /*ctx*/) override { }
  virtual void exitStableId(ScalaParser::StableIdContext * /*ctx*/) override { }

  virtual void enterClassQualifier(ScalaParser::ClassQualifierContext * /*ctx*/) override { }
  virtual void exitClassQualifier(ScalaParser::ClassQualifierContext * /*ctx*/) override { }

  virtual void enterType_(ScalaParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(ScalaParser::Type_Context * /*ctx*/) override { }

  virtual void enterFunctionArgTypes(ScalaParser::FunctionArgTypesContext * /*ctx*/) override { }
  virtual void exitFunctionArgTypes(ScalaParser::FunctionArgTypesContext * /*ctx*/) override { }

  virtual void enterExistentialClause(ScalaParser::ExistentialClauseContext * /*ctx*/) override { }
  virtual void exitExistentialClause(ScalaParser::ExistentialClauseContext * /*ctx*/) override { }

  virtual void enterExistentialDcl(ScalaParser::ExistentialDclContext * /*ctx*/) override { }
  virtual void exitExistentialDcl(ScalaParser::ExistentialDclContext * /*ctx*/) override { }

  virtual void enterInfixType(ScalaParser::InfixTypeContext * /*ctx*/) override { }
  virtual void exitInfixType(ScalaParser::InfixTypeContext * /*ctx*/) override { }

  virtual void enterCompoundType(ScalaParser::CompoundTypeContext * /*ctx*/) override { }
  virtual void exitCompoundType(ScalaParser::CompoundTypeContext * /*ctx*/) override { }

  virtual void enterAnnotType(ScalaParser::AnnotTypeContext * /*ctx*/) override { }
  virtual void exitAnnotType(ScalaParser::AnnotTypeContext * /*ctx*/) override { }

  virtual void enterSimpleType(ScalaParser::SimpleTypeContext * /*ctx*/) override { }
  virtual void exitSimpleType(ScalaParser::SimpleTypeContext * /*ctx*/) override { }

  virtual void enterTypeArgs(ScalaParser::TypeArgsContext * /*ctx*/) override { }
  virtual void exitTypeArgs(ScalaParser::TypeArgsContext * /*ctx*/) override { }

  virtual void enterTypes(ScalaParser::TypesContext * /*ctx*/) override { }
  virtual void exitTypes(ScalaParser::TypesContext * /*ctx*/) override { }

  virtual void enterRefinement(ScalaParser::RefinementContext * /*ctx*/) override { }
  virtual void exitRefinement(ScalaParser::RefinementContext * /*ctx*/) override { }

  virtual void enterRefineStat(ScalaParser::RefineStatContext * /*ctx*/) override { }
  virtual void exitRefineStat(ScalaParser::RefineStatContext * /*ctx*/) override { }

  virtual void enterTypePat(ScalaParser::TypePatContext * /*ctx*/) override { }
  virtual void exitTypePat(ScalaParser::TypePatContext * /*ctx*/) override { }

  virtual void enterAscription(ScalaParser::AscriptionContext * /*ctx*/) override { }
  virtual void exitAscription(ScalaParser::AscriptionContext * /*ctx*/) override { }

  virtual void enterExpr(ScalaParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ScalaParser::ExprContext * /*ctx*/) override { }

  virtual void enterExpr1(ScalaParser::Expr1Context * /*ctx*/) override { }
  virtual void exitExpr1(ScalaParser::Expr1Context * /*ctx*/) override { }

  virtual void enterPrefixDef(ScalaParser::PrefixDefContext * /*ctx*/) override { }
  virtual void exitPrefixDef(ScalaParser::PrefixDefContext * /*ctx*/) override { }

  virtual void enterPostfixExpr(ScalaParser::PostfixExprContext * /*ctx*/) override { }
  virtual void exitPostfixExpr(ScalaParser::PostfixExprContext * /*ctx*/) override { }

  virtual void enterInfixExpr(ScalaParser::InfixExprContext * /*ctx*/) override { }
  virtual void exitInfixExpr(ScalaParser::InfixExprContext * /*ctx*/) override { }

  virtual void enterPrefixExpr(ScalaParser::PrefixExprContext * /*ctx*/) override { }
  virtual void exitPrefixExpr(ScalaParser::PrefixExprContext * /*ctx*/) override { }

  virtual void enterSimpleExpr(ScalaParser::SimpleExprContext * /*ctx*/) override { }
  virtual void exitSimpleExpr(ScalaParser::SimpleExprContext * /*ctx*/) override { }

  virtual void enterSimpleExpr1(ScalaParser::SimpleExpr1Context * /*ctx*/) override { }
  virtual void exitSimpleExpr1(ScalaParser::SimpleExpr1Context * /*ctx*/) override { }

  virtual void enterExprs(ScalaParser::ExprsContext * /*ctx*/) override { }
  virtual void exitExprs(ScalaParser::ExprsContext * /*ctx*/) override { }

  virtual void enterArgumentExprs(ScalaParser::ArgumentExprsContext * /*ctx*/) override { }
  virtual void exitArgumentExprs(ScalaParser::ArgumentExprsContext * /*ctx*/) override { }

  virtual void enterArgs(ScalaParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(ScalaParser::ArgsContext * /*ctx*/) override { }

  virtual void enterBlockExpr(ScalaParser::BlockExprContext * /*ctx*/) override { }
  virtual void exitBlockExpr(ScalaParser::BlockExprContext * /*ctx*/) override { }

  virtual void enterBlock(ScalaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ScalaParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStat(ScalaParser::BlockStatContext * /*ctx*/) override { }
  virtual void exitBlockStat(ScalaParser::BlockStatContext * /*ctx*/) override { }

  virtual void enterResultExpr(ScalaParser::ResultExprContext * /*ctx*/) override { }
  virtual void exitResultExpr(ScalaParser::ResultExprContext * /*ctx*/) override { }

  virtual void enterEnumerators(ScalaParser::EnumeratorsContext * /*ctx*/) override { }
  virtual void exitEnumerators(ScalaParser::EnumeratorsContext * /*ctx*/) override { }

  virtual void enterGenerator(ScalaParser::GeneratorContext * /*ctx*/) override { }
  virtual void exitGenerator(ScalaParser::GeneratorContext * /*ctx*/) override { }

  virtual void enterCaseClauses(ScalaParser::CaseClausesContext * /*ctx*/) override { }
  virtual void exitCaseClauses(ScalaParser::CaseClausesContext * /*ctx*/) override { }

  virtual void enterCaseClause(ScalaParser::CaseClauseContext * /*ctx*/) override { }
  virtual void exitCaseClause(ScalaParser::CaseClauseContext * /*ctx*/) override { }

  virtual void enterGuard_(ScalaParser::Guard_Context * /*ctx*/) override { }
  virtual void exitGuard_(ScalaParser::Guard_Context * /*ctx*/) override { }

  virtual void enterPattern(ScalaParser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(ScalaParser::PatternContext * /*ctx*/) override { }

  virtual void enterPattern1(ScalaParser::Pattern1Context * /*ctx*/) override { }
  virtual void exitPattern1(ScalaParser::Pattern1Context * /*ctx*/) override { }

  virtual void enterPattern2(ScalaParser::Pattern2Context * /*ctx*/) override { }
  virtual void exitPattern2(ScalaParser::Pattern2Context * /*ctx*/) override { }

  virtual void enterPattern3(ScalaParser::Pattern3Context * /*ctx*/) override { }
  virtual void exitPattern3(ScalaParser::Pattern3Context * /*ctx*/) override { }

  virtual void enterSimplePattern(ScalaParser::SimplePatternContext * /*ctx*/) override { }
  virtual void exitSimplePattern(ScalaParser::SimplePatternContext * /*ctx*/) override { }

  virtual void enterPatterns(ScalaParser::PatternsContext * /*ctx*/) override { }
  virtual void exitPatterns(ScalaParser::PatternsContext * /*ctx*/) override { }

  virtual void enterTypeParamClause(ScalaParser::TypeParamClauseContext * /*ctx*/) override { }
  virtual void exitTypeParamClause(ScalaParser::TypeParamClauseContext * /*ctx*/) override { }

  virtual void enterFunTypeParamClause(ScalaParser::FunTypeParamClauseContext * /*ctx*/) override { }
  virtual void exitFunTypeParamClause(ScalaParser::FunTypeParamClauseContext * /*ctx*/) override { }

  virtual void enterVariantTypeParam(ScalaParser::VariantTypeParamContext * /*ctx*/) override { }
  virtual void exitVariantTypeParam(ScalaParser::VariantTypeParamContext * /*ctx*/) override { }

  virtual void enterTypeParam(ScalaParser::TypeParamContext * /*ctx*/) override { }
  virtual void exitTypeParam(ScalaParser::TypeParamContext * /*ctx*/) override { }

  virtual void enterParamClauses(ScalaParser::ParamClausesContext * /*ctx*/) override { }
  virtual void exitParamClauses(ScalaParser::ParamClausesContext * /*ctx*/) override { }

  virtual void enterParamClause(ScalaParser::ParamClauseContext * /*ctx*/) override { }
  virtual void exitParamClause(ScalaParser::ParamClauseContext * /*ctx*/) override { }

  virtual void enterParams(ScalaParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(ScalaParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(ScalaParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(ScalaParser::ParamContext * /*ctx*/) override { }

  virtual void enterParamType(ScalaParser::ParamTypeContext * /*ctx*/) override { }
  virtual void exitParamType(ScalaParser::ParamTypeContext * /*ctx*/) override { }

  virtual void enterClassParamClauses(ScalaParser::ClassParamClausesContext * /*ctx*/) override { }
  virtual void exitClassParamClauses(ScalaParser::ClassParamClausesContext * /*ctx*/) override { }

  virtual void enterClassParamClause(ScalaParser::ClassParamClauseContext * /*ctx*/) override { }
  virtual void exitClassParamClause(ScalaParser::ClassParamClauseContext * /*ctx*/) override { }

  virtual void enterClassParams(ScalaParser::ClassParamsContext * /*ctx*/) override { }
  virtual void exitClassParams(ScalaParser::ClassParamsContext * /*ctx*/) override { }

  virtual void enterClassParam(ScalaParser::ClassParamContext * /*ctx*/) override { }
  virtual void exitClassParam(ScalaParser::ClassParamContext * /*ctx*/) override { }

  virtual void enterBindings(ScalaParser::BindingsContext * /*ctx*/) override { }
  virtual void exitBindings(ScalaParser::BindingsContext * /*ctx*/) override { }

  virtual void enterBinding(ScalaParser::BindingContext * /*ctx*/) override { }
  virtual void exitBinding(ScalaParser::BindingContext * /*ctx*/) override { }

  virtual void enterModifier(ScalaParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(ScalaParser::ModifierContext * /*ctx*/) override { }

  virtual void enterLocalModifier(ScalaParser::LocalModifierContext * /*ctx*/) override { }
  virtual void exitLocalModifier(ScalaParser::LocalModifierContext * /*ctx*/) override { }

  virtual void enterAccessModifier(ScalaParser::AccessModifierContext * /*ctx*/) override { }
  virtual void exitAccessModifier(ScalaParser::AccessModifierContext * /*ctx*/) override { }

  virtual void enterAccessQualifier(ScalaParser::AccessQualifierContext * /*ctx*/) override { }
  virtual void exitAccessQualifier(ScalaParser::AccessQualifierContext * /*ctx*/) override { }

  virtual void enterAnnotation(ScalaParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(ScalaParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterConstrAnnotation(ScalaParser::ConstrAnnotationContext * /*ctx*/) override { }
  virtual void exitConstrAnnotation(ScalaParser::ConstrAnnotationContext * /*ctx*/) override { }

  virtual void enterTemplateBody(ScalaParser::TemplateBodyContext * /*ctx*/) override { }
  virtual void exitTemplateBody(ScalaParser::TemplateBodyContext * /*ctx*/) override { }

  virtual void enterTemplateStat(ScalaParser::TemplateStatContext * /*ctx*/) override { }
  virtual void exitTemplateStat(ScalaParser::TemplateStatContext * /*ctx*/) override { }

  virtual void enterSelfType(ScalaParser::SelfTypeContext * /*ctx*/) override { }
  virtual void exitSelfType(ScalaParser::SelfTypeContext * /*ctx*/) override { }

  virtual void enterImport_(ScalaParser::Import_Context * /*ctx*/) override { }
  virtual void exitImport_(ScalaParser::Import_Context * /*ctx*/) override { }

  virtual void enterImportExpr(ScalaParser::ImportExprContext * /*ctx*/) override { }
  virtual void exitImportExpr(ScalaParser::ImportExprContext * /*ctx*/) override { }

  virtual void enterImportSelectors(ScalaParser::ImportSelectorsContext * /*ctx*/) override { }
  virtual void exitImportSelectors(ScalaParser::ImportSelectorsContext * /*ctx*/) override { }

  virtual void enterImportSelector(ScalaParser::ImportSelectorContext * /*ctx*/) override { }
  virtual void exitImportSelector(ScalaParser::ImportSelectorContext * /*ctx*/) override { }

  virtual void enterDcl(ScalaParser::DclContext * /*ctx*/) override { }
  virtual void exitDcl(ScalaParser::DclContext * /*ctx*/) override { }

  virtual void enterValDcl(ScalaParser::ValDclContext * /*ctx*/) override { }
  virtual void exitValDcl(ScalaParser::ValDclContext * /*ctx*/) override { }

  virtual void enterVarDcl(ScalaParser::VarDclContext * /*ctx*/) override { }
  virtual void exitVarDcl(ScalaParser::VarDclContext * /*ctx*/) override { }

  virtual void enterFunDcl(ScalaParser::FunDclContext * /*ctx*/) override { }
  virtual void exitFunDcl(ScalaParser::FunDclContext * /*ctx*/) override { }

  virtual void enterFunSig(ScalaParser::FunSigContext * /*ctx*/) override { }
  virtual void exitFunSig(ScalaParser::FunSigContext * /*ctx*/) override { }

  virtual void enterTypeDcl(ScalaParser::TypeDclContext * /*ctx*/) override { }
  virtual void exitTypeDcl(ScalaParser::TypeDclContext * /*ctx*/) override { }

  virtual void enterPatVarDef(ScalaParser::PatVarDefContext * /*ctx*/) override { }
  virtual void exitPatVarDef(ScalaParser::PatVarDefContext * /*ctx*/) override { }

  virtual void enterDef_(ScalaParser::Def_Context * /*ctx*/) override { }
  virtual void exitDef_(ScalaParser::Def_Context * /*ctx*/) override { }

  virtual void enterPatDef(ScalaParser::PatDefContext * /*ctx*/) override { }
  virtual void exitPatDef(ScalaParser::PatDefContext * /*ctx*/) override { }

  virtual void enterVarDef(ScalaParser::VarDefContext * /*ctx*/) override { }
  virtual void exitVarDef(ScalaParser::VarDefContext * /*ctx*/) override { }

  virtual void enterFunDef(ScalaParser::FunDefContext * /*ctx*/) override { }
  virtual void exitFunDef(ScalaParser::FunDefContext * /*ctx*/) override { }

  virtual void enterTypeDef(ScalaParser::TypeDefContext * /*ctx*/) override { }
  virtual void exitTypeDef(ScalaParser::TypeDefContext * /*ctx*/) override { }

  virtual void enterTmplDef(ScalaParser::TmplDefContext * /*ctx*/) override { }
  virtual void exitTmplDef(ScalaParser::TmplDefContext * /*ctx*/) override { }

  virtual void enterClassDef(ScalaParser::ClassDefContext * /*ctx*/) override { }
  virtual void exitClassDef(ScalaParser::ClassDefContext * /*ctx*/) override { }

  virtual void enterTraitDef(ScalaParser::TraitDefContext * /*ctx*/) override { }
  virtual void exitTraitDef(ScalaParser::TraitDefContext * /*ctx*/) override { }

  virtual void enterObjectDef(ScalaParser::ObjectDefContext * /*ctx*/) override { }
  virtual void exitObjectDef(ScalaParser::ObjectDefContext * /*ctx*/) override { }

  virtual void enterClassTemplateOpt(ScalaParser::ClassTemplateOptContext * /*ctx*/) override { }
  virtual void exitClassTemplateOpt(ScalaParser::ClassTemplateOptContext * /*ctx*/) override { }

  virtual void enterTraitTemplateOpt(ScalaParser::TraitTemplateOptContext * /*ctx*/) override { }
  virtual void exitTraitTemplateOpt(ScalaParser::TraitTemplateOptContext * /*ctx*/) override { }

  virtual void enterClassTemplate(ScalaParser::ClassTemplateContext * /*ctx*/) override { }
  virtual void exitClassTemplate(ScalaParser::ClassTemplateContext * /*ctx*/) override { }

  virtual void enterTraitTemplate(ScalaParser::TraitTemplateContext * /*ctx*/) override { }
  virtual void exitTraitTemplate(ScalaParser::TraitTemplateContext * /*ctx*/) override { }

  virtual void enterClassParents(ScalaParser::ClassParentsContext * /*ctx*/) override { }
  virtual void exitClassParents(ScalaParser::ClassParentsContext * /*ctx*/) override { }

  virtual void enterTraitParents(ScalaParser::TraitParentsContext * /*ctx*/) override { }
  virtual void exitTraitParents(ScalaParser::TraitParentsContext * /*ctx*/) override { }

  virtual void enterConstr(ScalaParser::ConstrContext * /*ctx*/) override { }
  virtual void exitConstr(ScalaParser::ConstrContext * /*ctx*/) override { }

  virtual void enterEarlyDefs(ScalaParser::EarlyDefsContext * /*ctx*/) override { }
  virtual void exitEarlyDefs(ScalaParser::EarlyDefsContext * /*ctx*/) override { }

  virtual void enterEarlyDef(ScalaParser::EarlyDefContext * /*ctx*/) override { }
  virtual void exitEarlyDef(ScalaParser::EarlyDefContext * /*ctx*/) override { }

  virtual void enterConstrExpr(ScalaParser::ConstrExprContext * /*ctx*/) override { }
  virtual void exitConstrExpr(ScalaParser::ConstrExprContext * /*ctx*/) override { }

  virtual void enterConstrBlock(ScalaParser::ConstrBlockContext * /*ctx*/) override { }
  virtual void exitConstrBlock(ScalaParser::ConstrBlockContext * /*ctx*/) override { }

  virtual void enterSelfInvocation(ScalaParser::SelfInvocationContext * /*ctx*/) override { }
  virtual void exitSelfInvocation(ScalaParser::SelfInvocationContext * /*ctx*/) override { }

  virtual void enterTopStatSeq(ScalaParser::TopStatSeqContext * /*ctx*/) override { }
  virtual void exitTopStatSeq(ScalaParser::TopStatSeqContext * /*ctx*/) override { }

  virtual void enterTopStat(ScalaParser::TopStatContext * /*ctx*/) override { }
  virtual void exitTopStat(ScalaParser::TopStatContext * /*ctx*/) override { }

  virtual void enterPackaging(ScalaParser::PackagingContext * /*ctx*/) override { }
  virtual void exitPackaging(ScalaParser::PackagingContext * /*ctx*/) override { }

  virtual void enterPackageObject(ScalaParser::PackageObjectContext * /*ctx*/) override { }
  virtual void exitPackageObject(ScalaParser::PackageObjectContext * /*ctx*/) override { }

  virtual void enterCompilationUnit(ScalaParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(ScalaParser::CompilationUnitContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

