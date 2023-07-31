
// Generated from Scala.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ScalaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ScalaParser.
 */
class  ScalaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLiteral(ScalaParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(ScalaParser::LiteralContext *ctx) = 0;

  virtual void enterQualId(ScalaParser::QualIdContext *ctx) = 0;
  virtual void exitQualId(ScalaParser::QualIdContext *ctx) = 0;

  virtual void enterIds(ScalaParser::IdsContext *ctx) = 0;
  virtual void exitIds(ScalaParser::IdsContext *ctx) = 0;

  virtual void enterStableId(ScalaParser::StableIdContext *ctx) = 0;
  virtual void exitStableId(ScalaParser::StableIdContext *ctx) = 0;

  virtual void enterClassQualifier(ScalaParser::ClassQualifierContext *ctx) = 0;
  virtual void exitClassQualifier(ScalaParser::ClassQualifierContext *ctx) = 0;

  virtual void enterType_(ScalaParser::Type_Context *ctx) = 0;
  virtual void exitType_(ScalaParser::Type_Context *ctx) = 0;

  virtual void enterFunctionArgTypes(ScalaParser::FunctionArgTypesContext *ctx) = 0;
  virtual void exitFunctionArgTypes(ScalaParser::FunctionArgTypesContext *ctx) = 0;

  virtual void enterExistentialClause(ScalaParser::ExistentialClauseContext *ctx) = 0;
  virtual void exitExistentialClause(ScalaParser::ExistentialClauseContext *ctx) = 0;

  virtual void enterExistentialDcl(ScalaParser::ExistentialDclContext *ctx) = 0;
  virtual void exitExistentialDcl(ScalaParser::ExistentialDclContext *ctx) = 0;

  virtual void enterInfixType(ScalaParser::InfixTypeContext *ctx) = 0;
  virtual void exitInfixType(ScalaParser::InfixTypeContext *ctx) = 0;

  virtual void enterCompoundType(ScalaParser::CompoundTypeContext *ctx) = 0;
  virtual void exitCompoundType(ScalaParser::CompoundTypeContext *ctx) = 0;

  virtual void enterAnnotType(ScalaParser::AnnotTypeContext *ctx) = 0;
  virtual void exitAnnotType(ScalaParser::AnnotTypeContext *ctx) = 0;

  virtual void enterSimpleType(ScalaParser::SimpleTypeContext *ctx) = 0;
  virtual void exitSimpleType(ScalaParser::SimpleTypeContext *ctx) = 0;

  virtual void enterTypeArgs(ScalaParser::TypeArgsContext *ctx) = 0;
  virtual void exitTypeArgs(ScalaParser::TypeArgsContext *ctx) = 0;

  virtual void enterTypes(ScalaParser::TypesContext *ctx) = 0;
  virtual void exitTypes(ScalaParser::TypesContext *ctx) = 0;

  virtual void enterRefinement(ScalaParser::RefinementContext *ctx) = 0;
  virtual void exitRefinement(ScalaParser::RefinementContext *ctx) = 0;

  virtual void enterRefineStat(ScalaParser::RefineStatContext *ctx) = 0;
  virtual void exitRefineStat(ScalaParser::RefineStatContext *ctx) = 0;

  virtual void enterTypePat(ScalaParser::TypePatContext *ctx) = 0;
  virtual void exitTypePat(ScalaParser::TypePatContext *ctx) = 0;

  virtual void enterAscription(ScalaParser::AscriptionContext *ctx) = 0;
  virtual void exitAscription(ScalaParser::AscriptionContext *ctx) = 0;

  virtual void enterExpr(ScalaParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ScalaParser::ExprContext *ctx) = 0;

  virtual void enterExpr1(ScalaParser::Expr1Context *ctx) = 0;
  virtual void exitExpr1(ScalaParser::Expr1Context *ctx) = 0;

  virtual void enterPrefixDef(ScalaParser::PrefixDefContext *ctx) = 0;
  virtual void exitPrefixDef(ScalaParser::PrefixDefContext *ctx) = 0;

  virtual void enterPostfixExpr(ScalaParser::PostfixExprContext *ctx) = 0;
  virtual void exitPostfixExpr(ScalaParser::PostfixExprContext *ctx) = 0;

  virtual void enterInfixExpr(ScalaParser::InfixExprContext *ctx) = 0;
  virtual void exitInfixExpr(ScalaParser::InfixExprContext *ctx) = 0;

  virtual void enterPrefixExpr(ScalaParser::PrefixExprContext *ctx) = 0;
  virtual void exitPrefixExpr(ScalaParser::PrefixExprContext *ctx) = 0;

  virtual void enterSimpleExpr(ScalaParser::SimpleExprContext *ctx) = 0;
  virtual void exitSimpleExpr(ScalaParser::SimpleExprContext *ctx) = 0;

  virtual void enterSimpleExpr1(ScalaParser::SimpleExpr1Context *ctx) = 0;
  virtual void exitSimpleExpr1(ScalaParser::SimpleExpr1Context *ctx) = 0;

  virtual void enterExprs(ScalaParser::ExprsContext *ctx) = 0;
  virtual void exitExprs(ScalaParser::ExprsContext *ctx) = 0;

  virtual void enterArgumentExprs(ScalaParser::ArgumentExprsContext *ctx) = 0;
  virtual void exitArgumentExprs(ScalaParser::ArgumentExprsContext *ctx) = 0;

  virtual void enterArgs(ScalaParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(ScalaParser::ArgsContext *ctx) = 0;

  virtual void enterBlockExpr(ScalaParser::BlockExprContext *ctx) = 0;
  virtual void exitBlockExpr(ScalaParser::BlockExprContext *ctx) = 0;

  virtual void enterBlock(ScalaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ScalaParser::BlockContext *ctx) = 0;

  virtual void enterBlockStat(ScalaParser::BlockStatContext *ctx) = 0;
  virtual void exitBlockStat(ScalaParser::BlockStatContext *ctx) = 0;

  virtual void enterResultExpr(ScalaParser::ResultExprContext *ctx) = 0;
  virtual void exitResultExpr(ScalaParser::ResultExprContext *ctx) = 0;

  virtual void enterEnumerators(ScalaParser::EnumeratorsContext *ctx) = 0;
  virtual void exitEnumerators(ScalaParser::EnumeratorsContext *ctx) = 0;

  virtual void enterGenerator(ScalaParser::GeneratorContext *ctx) = 0;
  virtual void exitGenerator(ScalaParser::GeneratorContext *ctx) = 0;

  virtual void enterCaseClauses(ScalaParser::CaseClausesContext *ctx) = 0;
  virtual void exitCaseClauses(ScalaParser::CaseClausesContext *ctx) = 0;

  virtual void enterCaseClause(ScalaParser::CaseClauseContext *ctx) = 0;
  virtual void exitCaseClause(ScalaParser::CaseClauseContext *ctx) = 0;

  virtual void enterGuard_(ScalaParser::Guard_Context *ctx) = 0;
  virtual void exitGuard_(ScalaParser::Guard_Context *ctx) = 0;

  virtual void enterPattern(ScalaParser::PatternContext *ctx) = 0;
  virtual void exitPattern(ScalaParser::PatternContext *ctx) = 0;

  virtual void enterPattern1(ScalaParser::Pattern1Context *ctx) = 0;
  virtual void exitPattern1(ScalaParser::Pattern1Context *ctx) = 0;

  virtual void enterPattern2(ScalaParser::Pattern2Context *ctx) = 0;
  virtual void exitPattern2(ScalaParser::Pattern2Context *ctx) = 0;

  virtual void enterPattern3(ScalaParser::Pattern3Context *ctx) = 0;
  virtual void exitPattern3(ScalaParser::Pattern3Context *ctx) = 0;

  virtual void enterSimplePattern(ScalaParser::SimplePatternContext *ctx) = 0;
  virtual void exitSimplePattern(ScalaParser::SimplePatternContext *ctx) = 0;

  virtual void enterPatterns(ScalaParser::PatternsContext *ctx) = 0;
  virtual void exitPatterns(ScalaParser::PatternsContext *ctx) = 0;

  virtual void enterTypeParamClause(ScalaParser::TypeParamClauseContext *ctx) = 0;
  virtual void exitTypeParamClause(ScalaParser::TypeParamClauseContext *ctx) = 0;

  virtual void enterFunTypeParamClause(ScalaParser::FunTypeParamClauseContext *ctx) = 0;
  virtual void exitFunTypeParamClause(ScalaParser::FunTypeParamClauseContext *ctx) = 0;

  virtual void enterVariantTypeParam(ScalaParser::VariantTypeParamContext *ctx) = 0;
  virtual void exitVariantTypeParam(ScalaParser::VariantTypeParamContext *ctx) = 0;

  virtual void enterTypeParam(ScalaParser::TypeParamContext *ctx) = 0;
  virtual void exitTypeParam(ScalaParser::TypeParamContext *ctx) = 0;

  virtual void enterParamClauses(ScalaParser::ParamClausesContext *ctx) = 0;
  virtual void exitParamClauses(ScalaParser::ParamClausesContext *ctx) = 0;

  virtual void enterParamClause(ScalaParser::ParamClauseContext *ctx) = 0;
  virtual void exitParamClause(ScalaParser::ParamClauseContext *ctx) = 0;

  virtual void enterParams(ScalaParser::ParamsContext *ctx) = 0;
  virtual void exitParams(ScalaParser::ParamsContext *ctx) = 0;

  virtual void enterParam(ScalaParser::ParamContext *ctx) = 0;
  virtual void exitParam(ScalaParser::ParamContext *ctx) = 0;

  virtual void enterParamType(ScalaParser::ParamTypeContext *ctx) = 0;
  virtual void exitParamType(ScalaParser::ParamTypeContext *ctx) = 0;

  virtual void enterClassParamClauses(ScalaParser::ClassParamClausesContext *ctx) = 0;
  virtual void exitClassParamClauses(ScalaParser::ClassParamClausesContext *ctx) = 0;

  virtual void enterClassParamClause(ScalaParser::ClassParamClauseContext *ctx) = 0;
  virtual void exitClassParamClause(ScalaParser::ClassParamClauseContext *ctx) = 0;

  virtual void enterClassParams(ScalaParser::ClassParamsContext *ctx) = 0;
  virtual void exitClassParams(ScalaParser::ClassParamsContext *ctx) = 0;

  virtual void enterClassParam(ScalaParser::ClassParamContext *ctx) = 0;
  virtual void exitClassParam(ScalaParser::ClassParamContext *ctx) = 0;

  virtual void enterBindings(ScalaParser::BindingsContext *ctx) = 0;
  virtual void exitBindings(ScalaParser::BindingsContext *ctx) = 0;

  virtual void enterBinding(ScalaParser::BindingContext *ctx) = 0;
  virtual void exitBinding(ScalaParser::BindingContext *ctx) = 0;

  virtual void enterModifier(ScalaParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(ScalaParser::ModifierContext *ctx) = 0;

  virtual void enterLocalModifier(ScalaParser::LocalModifierContext *ctx) = 0;
  virtual void exitLocalModifier(ScalaParser::LocalModifierContext *ctx) = 0;

  virtual void enterAccessModifier(ScalaParser::AccessModifierContext *ctx) = 0;
  virtual void exitAccessModifier(ScalaParser::AccessModifierContext *ctx) = 0;

  virtual void enterAccessQualifier(ScalaParser::AccessQualifierContext *ctx) = 0;
  virtual void exitAccessQualifier(ScalaParser::AccessQualifierContext *ctx) = 0;

  virtual void enterAnnotation(ScalaParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(ScalaParser::AnnotationContext *ctx) = 0;

  virtual void enterConstrAnnotation(ScalaParser::ConstrAnnotationContext *ctx) = 0;
  virtual void exitConstrAnnotation(ScalaParser::ConstrAnnotationContext *ctx) = 0;

  virtual void enterTemplateBody(ScalaParser::TemplateBodyContext *ctx) = 0;
  virtual void exitTemplateBody(ScalaParser::TemplateBodyContext *ctx) = 0;

  virtual void enterTemplateStat(ScalaParser::TemplateStatContext *ctx) = 0;
  virtual void exitTemplateStat(ScalaParser::TemplateStatContext *ctx) = 0;

  virtual void enterSelfType(ScalaParser::SelfTypeContext *ctx) = 0;
  virtual void exitSelfType(ScalaParser::SelfTypeContext *ctx) = 0;

  virtual void enterImport_(ScalaParser::Import_Context *ctx) = 0;
  virtual void exitImport_(ScalaParser::Import_Context *ctx) = 0;

  virtual void enterImportExpr(ScalaParser::ImportExprContext *ctx) = 0;
  virtual void exitImportExpr(ScalaParser::ImportExprContext *ctx) = 0;

  virtual void enterImportSelectors(ScalaParser::ImportSelectorsContext *ctx) = 0;
  virtual void exitImportSelectors(ScalaParser::ImportSelectorsContext *ctx) = 0;

  virtual void enterImportSelector(ScalaParser::ImportSelectorContext *ctx) = 0;
  virtual void exitImportSelector(ScalaParser::ImportSelectorContext *ctx) = 0;

  virtual void enterDcl(ScalaParser::DclContext *ctx) = 0;
  virtual void exitDcl(ScalaParser::DclContext *ctx) = 0;

  virtual void enterValDcl(ScalaParser::ValDclContext *ctx) = 0;
  virtual void exitValDcl(ScalaParser::ValDclContext *ctx) = 0;

  virtual void enterVarDcl(ScalaParser::VarDclContext *ctx) = 0;
  virtual void exitVarDcl(ScalaParser::VarDclContext *ctx) = 0;

  virtual void enterFunDcl(ScalaParser::FunDclContext *ctx) = 0;
  virtual void exitFunDcl(ScalaParser::FunDclContext *ctx) = 0;

  virtual void enterFunSig(ScalaParser::FunSigContext *ctx) = 0;
  virtual void exitFunSig(ScalaParser::FunSigContext *ctx) = 0;

  virtual void enterTypeDcl(ScalaParser::TypeDclContext *ctx) = 0;
  virtual void exitTypeDcl(ScalaParser::TypeDclContext *ctx) = 0;

  virtual void enterPatVarDef(ScalaParser::PatVarDefContext *ctx) = 0;
  virtual void exitPatVarDef(ScalaParser::PatVarDefContext *ctx) = 0;

  virtual void enterDef_(ScalaParser::Def_Context *ctx) = 0;
  virtual void exitDef_(ScalaParser::Def_Context *ctx) = 0;

  virtual void enterPatDef(ScalaParser::PatDefContext *ctx) = 0;
  virtual void exitPatDef(ScalaParser::PatDefContext *ctx) = 0;

  virtual void enterVarDef(ScalaParser::VarDefContext *ctx) = 0;
  virtual void exitVarDef(ScalaParser::VarDefContext *ctx) = 0;

  virtual void enterFunDef(ScalaParser::FunDefContext *ctx) = 0;
  virtual void exitFunDef(ScalaParser::FunDefContext *ctx) = 0;

  virtual void enterTypeDef(ScalaParser::TypeDefContext *ctx) = 0;
  virtual void exitTypeDef(ScalaParser::TypeDefContext *ctx) = 0;

  virtual void enterTmplDef(ScalaParser::TmplDefContext *ctx) = 0;
  virtual void exitTmplDef(ScalaParser::TmplDefContext *ctx) = 0;

  virtual void enterClassDef(ScalaParser::ClassDefContext *ctx) = 0;
  virtual void exitClassDef(ScalaParser::ClassDefContext *ctx) = 0;

  virtual void enterTraitDef(ScalaParser::TraitDefContext *ctx) = 0;
  virtual void exitTraitDef(ScalaParser::TraitDefContext *ctx) = 0;

  virtual void enterObjectDef(ScalaParser::ObjectDefContext *ctx) = 0;
  virtual void exitObjectDef(ScalaParser::ObjectDefContext *ctx) = 0;

  virtual void enterClassTemplateOpt(ScalaParser::ClassTemplateOptContext *ctx) = 0;
  virtual void exitClassTemplateOpt(ScalaParser::ClassTemplateOptContext *ctx) = 0;

  virtual void enterTraitTemplateOpt(ScalaParser::TraitTemplateOptContext *ctx) = 0;
  virtual void exitTraitTemplateOpt(ScalaParser::TraitTemplateOptContext *ctx) = 0;

  virtual void enterClassTemplate(ScalaParser::ClassTemplateContext *ctx) = 0;
  virtual void exitClassTemplate(ScalaParser::ClassTemplateContext *ctx) = 0;

  virtual void enterTraitTemplate(ScalaParser::TraitTemplateContext *ctx) = 0;
  virtual void exitTraitTemplate(ScalaParser::TraitTemplateContext *ctx) = 0;

  virtual void enterClassParents(ScalaParser::ClassParentsContext *ctx) = 0;
  virtual void exitClassParents(ScalaParser::ClassParentsContext *ctx) = 0;

  virtual void enterTraitParents(ScalaParser::TraitParentsContext *ctx) = 0;
  virtual void exitTraitParents(ScalaParser::TraitParentsContext *ctx) = 0;

  virtual void enterConstr(ScalaParser::ConstrContext *ctx) = 0;
  virtual void exitConstr(ScalaParser::ConstrContext *ctx) = 0;

  virtual void enterEarlyDefs(ScalaParser::EarlyDefsContext *ctx) = 0;
  virtual void exitEarlyDefs(ScalaParser::EarlyDefsContext *ctx) = 0;

  virtual void enterEarlyDef(ScalaParser::EarlyDefContext *ctx) = 0;
  virtual void exitEarlyDef(ScalaParser::EarlyDefContext *ctx) = 0;

  virtual void enterConstrExpr(ScalaParser::ConstrExprContext *ctx) = 0;
  virtual void exitConstrExpr(ScalaParser::ConstrExprContext *ctx) = 0;

  virtual void enterConstrBlock(ScalaParser::ConstrBlockContext *ctx) = 0;
  virtual void exitConstrBlock(ScalaParser::ConstrBlockContext *ctx) = 0;

  virtual void enterSelfInvocation(ScalaParser::SelfInvocationContext *ctx) = 0;
  virtual void exitSelfInvocation(ScalaParser::SelfInvocationContext *ctx) = 0;

  virtual void enterTopStatSeq(ScalaParser::TopStatSeqContext *ctx) = 0;
  virtual void exitTopStatSeq(ScalaParser::TopStatSeqContext *ctx) = 0;

  virtual void enterTopStat(ScalaParser::TopStatContext *ctx) = 0;
  virtual void exitTopStat(ScalaParser::TopStatContext *ctx) = 0;

  virtual void enterPackaging(ScalaParser::PackagingContext *ctx) = 0;
  virtual void exitPackaging(ScalaParser::PackagingContext *ctx) = 0;

  virtual void enterPackageObject(ScalaParser::PackageObjectContext *ctx) = 0;
  virtual void exitPackageObject(ScalaParser::PackageObjectContext *ctx) = 0;

  virtual void enterCompilationUnit(ScalaParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(ScalaParser::CompilationUnitContext *ctx) = 0;


};

