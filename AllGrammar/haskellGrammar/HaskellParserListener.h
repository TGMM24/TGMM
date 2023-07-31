
// Generated from HaskellParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "HaskellParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HaskellParser.
 */
class  HaskellParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModule(HaskellParser::ModuleContext *ctx) = 0;
  virtual void exitModule(HaskellParser::ModuleContext *ctx) = 0;

  virtual void enterModule_content(HaskellParser::Module_contentContext *ctx) = 0;
  virtual void exitModule_content(HaskellParser::Module_contentContext *ctx) = 0;

  virtual void enterWhere_module(HaskellParser::Where_moduleContext *ctx) = 0;
  virtual void exitWhere_module(HaskellParser::Where_moduleContext *ctx) = 0;

  virtual void enterModule_body(HaskellParser::Module_bodyContext *ctx) = 0;
  virtual void exitModule_body(HaskellParser::Module_bodyContext *ctx) = 0;

  virtual void enterPragmas(HaskellParser::PragmasContext *ctx) = 0;
  virtual void exitPragmas(HaskellParser::PragmasContext *ctx) = 0;

  virtual void enterPragma(HaskellParser::PragmaContext *ctx) = 0;
  virtual void exitPragma(HaskellParser::PragmaContext *ctx) = 0;

  virtual void enterLanguage_pragma(HaskellParser::Language_pragmaContext *ctx) = 0;
  virtual void exitLanguage_pragma(HaskellParser::Language_pragmaContext *ctx) = 0;

  virtual void enterOptions_ghc(HaskellParser::Options_ghcContext *ctx) = 0;
  virtual void exitOptions_ghc(HaskellParser::Options_ghcContext *ctx) = 0;

  virtual void enterSimple_options(HaskellParser::Simple_optionsContext *ctx) = 0;
  virtual void exitSimple_options(HaskellParser::Simple_optionsContext *ctx) = 0;

  virtual void enterExtension_(HaskellParser::Extension_Context *ctx) = 0;
  virtual void exitExtension_(HaskellParser::Extension_Context *ctx) = 0;

  virtual void enterBody(HaskellParser::BodyContext *ctx) = 0;
  virtual void exitBody(HaskellParser::BodyContext *ctx) = 0;

  virtual void enterImpdecls(HaskellParser::ImpdeclsContext *ctx) = 0;
  virtual void exitImpdecls(HaskellParser::ImpdeclsContext *ctx) = 0;

  virtual void enterExports(HaskellParser::ExportsContext *ctx) = 0;
  virtual void exitExports(HaskellParser::ExportsContext *ctx) = 0;

  virtual void enterExprt(HaskellParser::ExprtContext *ctx) = 0;
  virtual void exitExprt(HaskellParser::ExprtContext *ctx) = 0;

  virtual void enterImpdecl(HaskellParser::ImpdeclContext *ctx) = 0;
  virtual void exitImpdecl(HaskellParser::ImpdeclContext *ctx) = 0;

  virtual void enterImpspec(HaskellParser::ImpspecContext *ctx) = 0;
  virtual void exitImpspec(HaskellParser::ImpspecContext *ctx) = 0;

  virtual void enterHimport(HaskellParser::HimportContext *ctx) = 0;
  virtual void exitHimport(HaskellParser::HimportContext *ctx) = 0;

  virtual void enterCname(HaskellParser::CnameContext *ctx) = 0;
  virtual void exitCname(HaskellParser::CnameContext *ctx) = 0;

  virtual void enterFixity(HaskellParser::FixityContext *ctx) = 0;
  virtual void exitFixity(HaskellParser::FixityContext *ctx) = 0;

  virtual void enterOps(HaskellParser::OpsContext *ctx) = 0;
  virtual void exitOps(HaskellParser::OpsContext *ctx) = 0;

  virtual void enterTopdecls(HaskellParser::TopdeclsContext *ctx) = 0;
  virtual void exitTopdecls(HaskellParser::TopdeclsContext *ctx) = 0;

  virtual void enterTopdecl(HaskellParser::TopdeclContext *ctx) = 0;
  virtual void exitTopdecl(HaskellParser::TopdeclContext *ctx) = 0;

  virtual void enterCl_decl(HaskellParser::Cl_declContext *ctx) = 0;
  virtual void exitCl_decl(HaskellParser::Cl_declContext *ctx) = 0;

  virtual void enterTy_decl(HaskellParser::Ty_declContext *ctx) = 0;
  virtual void exitTy_decl(HaskellParser::Ty_declContext *ctx) = 0;

  virtual void enterStandalone_kind_sig(HaskellParser::Standalone_kind_sigContext *ctx) = 0;
  virtual void exitStandalone_kind_sig(HaskellParser::Standalone_kind_sigContext *ctx) = 0;

  virtual void enterSks_vars(HaskellParser::Sks_varsContext *ctx) = 0;
  virtual void exitSks_vars(HaskellParser::Sks_varsContext *ctx) = 0;

  virtual void enterInst_decl(HaskellParser::Inst_declContext *ctx) = 0;
  virtual void exitInst_decl(HaskellParser::Inst_declContext *ctx) = 0;

  virtual void enterOverlap_pragma(HaskellParser::Overlap_pragmaContext *ctx) = 0;
  virtual void exitOverlap_pragma(HaskellParser::Overlap_pragmaContext *ctx) = 0;

  virtual void enterDeriv_strategy_no_via(HaskellParser::Deriv_strategy_no_viaContext *ctx) = 0;
  virtual void exitDeriv_strategy_no_via(HaskellParser::Deriv_strategy_no_viaContext *ctx) = 0;

  virtual void enterDeriv_strategy_via(HaskellParser::Deriv_strategy_viaContext *ctx) = 0;
  virtual void exitDeriv_strategy_via(HaskellParser::Deriv_strategy_viaContext *ctx) = 0;

  virtual void enterDeriv_standalone_strategy(HaskellParser::Deriv_standalone_strategyContext *ctx) = 0;
  virtual void exitDeriv_standalone_strategy(HaskellParser::Deriv_standalone_strategyContext *ctx) = 0;

  virtual void enterOpt_injective_info(HaskellParser::Opt_injective_infoContext *ctx) = 0;
  virtual void exitOpt_injective_info(HaskellParser::Opt_injective_infoContext *ctx) = 0;

  virtual void enterInjectivity_cond(HaskellParser::Injectivity_condContext *ctx) = 0;
  virtual void exitInjectivity_cond(HaskellParser::Injectivity_condContext *ctx) = 0;

  virtual void enterInj_varids(HaskellParser::Inj_varidsContext *ctx) = 0;
  virtual void exitInj_varids(HaskellParser::Inj_varidsContext *ctx) = 0;

  virtual void enterWhere_type_family(HaskellParser::Where_type_familyContext *ctx) = 0;
  virtual void exitWhere_type_family(HaskellParser::Where_type_familyContext *ctx) = 0;

  virtual void enterTy_fam_inst_eqn_list(HaskellParser::Ty_fam_inst_eqn_listContext *ctx) = 0;
  virtual void exitTy_fam_inst_eqn_list(HaskellParser::Ty_fam_inst_eqn_listContext *ctx) = 0;

  virtual void enterTy_fam_inst_eqns(HaskellParser::Ty_fam_inst_eqnsContext *ctx) = 0;
  virtual void exitTy_fam_inst_eqns(HaskellParser::Ty_fam_inst_eqnsContext *ctx) = 0;

  virtual void enterTy_fam_inst_eqn(HaskellParser::Ty_fam_inst_eqnContext *ctx) = 0;
  virtual void exitTy_fam_inst_eqn(HaskellParser::Ty_fam_inst_eqnContext *ctx) = 0;

  virtual void enterAt_decl_cls(HaskellParser::At_decl_clsContext *ctx) = 0;
  virtual void exitAt_decl_cls(HaskellParser::At_decl_clsContext *ctx) = 0;

  virtual void enterAt_decl_inst(HaskellParser::At_decl_instContext *ctx) = 0;
  virtual void exitAt_decl_inst(HaskellParser::At_decl_instContext *ctx) = 0;

  virtual void enterOpt_kind_sig(HaskellParser::Opt_kind_sigContext *ctx) = 0;
  virtual void exitOpt_kind_sig(HaskellParser::Opt_kind_sigContext *ctx) = 0;

  virtual void enterOpt_datafam_kind_sig(HaskellParser::Opt_datafam_kind_sigContext *ctx) = 0;
  virtual void exitOpt_datafam_kind_sig(HaskellParser::Opt_datafam_kind_sigContext *ctx) = 0;

  virtual void enterOpt_tyfam_kind_sig(HaskellParser::Opt_tyfam_kind_sigContext *ctx) = 0;
  virtual void exitOpt_tyfam_kind_sig(HaskellParser::Opt_tyfam_kind_sigContext *ctx) = 0;

  virtual void enterOpt_at_kind_inj_sig(HaskellParser::Opt_at_kind_inj_sigContext *ctx) = 0;
  virtual void exitOpt_at_kind_inj_sig(HaskellParser::Opt_at_kind_inj_sigContext *ctx) = 0;

  virtual void enterTycl_hdr(HaskellParser::Tycl_hdrContext *ctx) = 0;
  virtual void exitTycl_hdr(HaskellParser::Tycl_hdrContext *ctx) = 0;

  virtual void enterTycl_hdr_inst(HaskellParser::Tycl_hdr_instContext *ctx) = 0;
  virtual void exitTycl_hdr_inst(HaskellParser::Tycl_hdr_instContext *ctx) = 0;

  virtual void enterCapi_ctype(HaskellParser::Capi_ctypeContext *ctx) = 0;
  virtual void exitCapi_ctype(HaskellParser::Capi_ctypeContext *ctx) = 0;

  virtual void enterStandalone_deriving(HaskellParser::Standalone_derivingContext *ctx) = 0;
  virtual void exitStandalone_deriving(HaskellParser::Standalone_derivingContext *ctx) = 0;

  virtual void enterRole_annot(HaskellParser::Role_annotContext *ctx) = 0;
  virtual void exitRole_annot(HaskellParser::Role_annotContext *ctx) = 0;

  virtual void enterRoles(HaskellParser::RolesContext *ctx) = 0;
  virtual void exitRoles(HaskellParser::RolesContext *ctx) = 0;

  virtual void enterRole(HaskellParser::RoleContext *ctx) = 0;
  virtual void exitRole(HaskellParser::RoleContext *ctx) = 0;

  virtual void enterPattern_synonym_decl(HaskellParser::Pattern_synonym_declContext *ctx) = 0;
  virtual void exitPattern_synonym_decl(HaskellParser::Pattern_synonym_declContext *ctx) = 0;

  virtual void enterPattern_synonym_lhs(HaskellParser::Pattern_synonym_lhsContext *ctx) = 0;
  virtual void exitPattern_synonym_lhs(HaskellParser::Pattern_synonym_lhsContext *ctx) = 0;

  virtual void enterVars_(HaskellParser::Vars_Context *ctx) = 0;
  virtual void exitVars_(HaskellParser::Vars_Context *ctx) = 0;

  virtual void enterCvars(HaskellParser::CvarsContext *ctx) = 0;
  virtual void exitCvars(HaskellParser::CvarsContext *ctx) = 0;

  virtual void enterWhere_decls(HaskellParser::Where_declsContext *ctx) = 0;
  virtual void exitWhere_decls(HaskellParser::Where_declsContext *ctx) = 0;

  virtual void enterPattern_synonym_sig(HaskellParser::Pattern_synonym_sigContext *ctx) = 0;
  virtual void exitPattern_synonym_sig(HaskellParser::Pattern_synonym_sigContext *ctx) = 0;

  virtual void enterDecl_cls(HaskellParser::Decl_clsContext *ctx) = 0;
  virtual void exitDecl_cls(HaskellParser::Decl_clsContext *ctx) = 0;

  virtual void enterDecls_cls(HaskellParser::Decls_clsContext *ctx) = 0;
  virtual void exitDecls_cls(HaskellParser::Decls_clsContext *ctx) = 0;

  virtual void enterDecllist_cls(HaskellParser::Decllist_clsContext *ctx) = 0;
  virtual void exitDecllist_cls(HaskellParser::Decllist_clsContext *ctx) = 0;

  virtual void enterWhere_cls(HaskellParser::Where_clsContext *ctx) = 0;
  virtual void exitWhere_cls(HaskellParser::Where_clsContext *ctx) = 0;

  virtual void enterDecl_inst(HaskellParser::Decl_instContext *ctx) = 0;
  virtual void exitDecl_inst(HaskellParser::Decl_instContext *ctx) = 0;

  virtual void enterDecls_inst(HaskellParser::Decls_instContext *ctx) = 0;
  virtual void exitDecls_inst(HaskellParser::Decls_instContext *ctx) = 0;

  virtual void enterDecllist_inst(HaskellParser::Decllist_instContext *ctx) = 0;
  virtual void exitDecllist_inst(HaskellParser::Decllist_instContext *ctx) = 0;

  virtual void enterWhere_inst(HaskellParser::Where_instContext *ctx) = 0;
  virtual void exitWhere_inst(HaskellParser::Where_instContext *ctx) = 0;

  virtual void enterDecls(HaskellParser::DeclsContext *ctx) = 0;
  virtual void exitDecls(HaskellParser::DeclsContext *ctx) = 0;

  virtual void enterDecllist(HaskellParser::DecllistContext *ctx) = 0;
  virtual void exitDecllist(HaskellParser::DecllistContext *ctx) = 0;

  virtual void enterBinds(HaskellParser::BindsContext *ctx) = 0;
  virtual void exitBinds(HaskellParser::BindsContext *ctx) = 0;

  virtual void enterWherebinds(HaskellParser::WherebindsContext *ctx) = 0;
  virtual void exitWherebinds(HaskellParser::WherebindsContext *ctx) = 0;

  virtual void enterRules(HaskellParser::RulesContext *ctx) = 0;
  virtual void exitRules(HaskellParser::RulesContext *ctx) = 0;

  virtual void enterPragma_rule(HaskellParser::Pragma_ruleContext *ctx) = 0;
  virtual void exitPragma_rule(HaskellParser::Pragma_ruleContext *ctx) = 0;

  virtual void enterRule_activation_marker(HaskellParser::Rule_activation_markerContext *ctx) = 0;
  virtual void exitRule_activation_marker(HaskellParser::Rule_activation_markerContext *ctx) = 0;

  virtual void enterRule_activation(HaskellParser::Rule_activationContext *ctx) = 0;
  virtual void exitRule_activation(HaskellParser::Rule_activationContext *ctx) = 0;

  virtual void enterRule_foralls(HaskellParser::Rule_forallsContext *ctx) = 0;
  virtual void exitRule_foralls(HaskellParser::Rule_forallsContext *ctx) = 0;

  virtual void enterRule_vars(HaskellParser::Rule_varsContext *ctx) = 0;
  virtual void exitRule_vars(HaskellParser::Rule_varsContext *ctx) = 0;

  virtual void enterRule_var(HaskellParser::Rule_varContext *ctx) = 0;
  virtual void exitRule_var(HaskellParser::Rule_varContext *ctx) = 0;

  virtual void enterWarnings(HaskellParser::WarningsContext *ctx) = 0;
  virtual void exitWarnings(HaskellParser::WarningsContext *ctx) = 0;

  virtual void enterPragma_warning(HaskellParser::Pragma_warningContext *ctx) = 0;
  virtual void exitPragma_warning(HaskellParser::Pragma_warningContext *ctx) = 0;

  virtual void enterDeprecations(HaskellParser::DeprecationsContext *ctx) = 0;
  virtual void exitDeprecations(HaskellParser::DeprecationsContext *ctx) = 0;

  virtual void enterPragma_deprecation(HaskellParser::Pragma_deprecationContext *ctx) = 0;
  virtual void exitPragma_deprecation(HaskellParser::Pragma_deprecationContext *ctx) = 0;

  virtual void enterStrings(HaskellParser::StringsContext *ctx) = 0;
  virtual void exitStrings(HaskellParser::StringsContext *ctx) = 0;

  virtual void enterStringlist(HaskellParser::StringlistContext *ctx) = 0;
  virtual void exitStringlist(HaskellParser::StringlistContext *ctx) = 0;

  virtual void enterAnnotation(HaskellParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(HaskellParser::AnnotationContext *ctx) = 0;

  virtual void enterFdecl(HaskellParser::FdeclContext *ctx) = 0;
  virtual void exitFdecl(HaskellParser::FdeclContext *ctx) = 0;

  virtual void enterCallconv(HaskellParser::CallconvContext *ctx) = 0;
  virtual void exitCallconv(HaskellParser::CallconvContext *ctx) = 0;

  virtual void enterSafety(HaskellParser::SafetyContext *ctx) = 0;
  virtual void exitSafety(HaskellParser::SafetyContext *ctx) = 0;

  virtual void enterFspec(HaskellParser::FspecContext *ctx) = 0;
  virtual void exitFspec(HaskellParser::FspecContext *ctx) = 0;

  virtual void enterOpt_sig(HaskellParser::Opt_sigContext *ctx) = 0;
  virtual void exitOpt_sig(HaskellParser::Opt_sigContext *ctx) = 0;

  virtual void enterOpt_tyconsig(HaskellParser::Opt_tyconsigContext *ctx) = 0;
  virtual void exitOpt_tyconsig(HaskellParser::Opt_tyconsigContext *ctx) = 0;

  virtual void enterSigtype(HaskellParser::SigtypeContext *ctx) = 0;
  virtual void exitSigtype(HaskellParser::SigtypeContext *ctx) = 0;

  virtual void enterSigtypedoc(HaskellParser::SigtypedocContext *ctx) = 0;
  virtual void exitSigtypedoc(HaskellParser::SigtypedocContext *ctx) = 0;

  virtual void enterSig_vars(HaskellParser::Sig_varsContext *ctx) = 0;
  virtual void exitSig_vars(HaskellParser::Sig_varsContext *ctx) = 0;

  virtual void enterSigtypes1(HaskellParser::Sigtypes1Context *ctx) = 0;
  virtual void exitSigtypes1(HaskellParser::Sigtypes1Context *ctx) = 0;

  virtual void enterUnpackedness(HaskellParser::UnpackednessContext *ctx) = 0;
  virtual void exitUnpackedness(HaskellParser::UnpackednessContext *ctx) = 0;

  virtual void enterForall_vis_flag(HaskellParser::Forall_vis_flagContext *ctx) = 0;
  virtual void exitForall_vis_flag(HaskellParser::Forall_vis_flagContext *ctx) = 0;

  virtual void enterKtype(HaskellParser::KtypeContext *ctx) = 0;
  virtual void exitKtype(HaskellParser::KtypeContext *ctx) = 0;

  virtual void enterKtypedoc(HaskellParser::KtypedocContext *ctx) = 0;
  virtual void exitKtypedoc(HaskellParser::KtypedocContext *ctx) = 0;

  virtual void enterCtype(HaskellParser::CtypeContext *ctx) = 0;
  virtual void exitCtype(HaskellParser::CtypeContext *ctx) = 0;

  virtual void enterCtypedoc(HaskellParser::CtypedocContext *ctx) = 0;
  virtual void exitCtypedoc(HaskellParser::CtypedocContext *ctx) = 0;

  virtual void enterTycl_context(HaskellParser::Tycl_contextContext *ctx) = 0;
  virtual void exitTycl_context(HaskellParser::Tycl_contextContext *ctx) = 0;

  virtual void enterConstr_context(HaskellParser::Constr_contextContext *ctx) = 0;
  virtual void exitConstr_context(HaskellParser::Constr_contextContext *ctx) = 0;

  virtual void enterType_(HaskellParser::Type_Context *ctx) = 0;
  virtual void exitType_(HaskellParser::Type_Context *ctx) = 0;

  virtual void enterTypedoc(HaskellParser::TypedocContext *ctx) = 0;
  virtual void exitTypedoc(HaskellParser::TypedocContext *ctx) = 0;

  virtual void enterConstr_btype(HaskellParser::Constr_btypeContext *ctx) = 0;
  virtual void exitConstr_btype(HaskellParser::Constr_btypeContext *ctx) = 0;

  virtual void enterConstr_tyapps(HaskellParser::Constr_tyappsContext *ctx) = 0;
  virtual void exitConstr_tyapps(HaskellParser::Constr_tyappsContext *ctx) = 0;

  virtual void enterConstr_tyapp(HaskellParser::Constr_tyappContext *ctx) = 0;
  virtual void exitConstr_tyapp(HaskellParser::Constr_tyappContext *ctx) = 0;

  virtual void enterBtype(HaskellParser::BtypeContext *ctx) = 0;
  virtual void exitBtype(HaskellParser::BtypeContext *ctx) = 0;

  virtual void enterTyapps(HaskellParser::TyappsContext *ctx) = 0;
  virtual void exitTyapps(HaskellParser::TyappsContext *ctx) = 0;

  virtual void enterTyapp(HaskellParser::TyappContext *ctx) = 0;
  virtual void exitTyapp(HaskellParser::TyappContext *ctx) = 0;

  virtual void enterAtype(HaskellParser::AtypeContext *ctx) = 0;
  virtual void exitAtype(HaskellParser::AtypeContext *ctx) = 0;

  virtual void enterInst_type(HaskellParser::Inst_typeContext *ctx) = 0;
  virtual void exitInst_type(HaskellParser::Inst_typeContext *ctx) = 0;

  virtual void enterDeriv_types(HaskellParser::Deriv_typesContext *ctx) = 0;
  virtual void exitDeriv_types(HaskellParser::Deriv_typesContext *ctx) = 0;

  virtual void enterComma_types(HaskellParser::Comma_typesContext *ctx) = 0;
  virtual void exitComma_types(HaskellParser::Comma_typesContext *ctx) = 0;

  virtual void enterBar_types2(HaskellParser::Bar_types2Context *ctx) = 0;
  virtual void exitBar_types2(HaskellParser::Bar_types2Context *ctx) = 0;

  virtual void enterTv_bndrs(HaskellParser::Tv_bndrsContext *ctx) = 0;
  virtual void exitTv_bndrs(HaskellParser::Tv_bndrsContext *ctx) = 0;

  virtual void enterTv_bndr(HaskellParser::Tv_bndrContext *ctx) = 0;
  virtual void exitTv_bndr(HaskellParser::Tv_bndrContext *ctx) = 0;

  virtual void enterTv_bndr_no_braces(HaskellParser::Tv_bndr_no_bracesContext *ctx) = 0;
  virtual void exitTv_bndr_no_braces(HaskellParser::Tv_bndr_no_bracesContext *ctx) = 0;

  virtual void enterFds(HaskellParser::FdsContext *ctx) = 0;
  virtual void exitFds(HaskellParser::FdsContext *ctx) = 0;

  virtual void enterFds1(HaskellParser::Fds1Context *ctx) = 0;
  virtual void exitFds1(HaskellParser::Fds1Context *ctx) = 0;

  virtual void enterFd(HaskellParser::FdContext *ctx) = 0;
  virtual void exitFd(HaskellParser::FdContext *ctx) = 0;

  virtual void enterVarids0(HaskellParser::Varids0Context *ctx) = 0;
  virtual void exitVarids0(HaskellParser::Varids0Context *ctx) = 0;

  virtual void enterKind(HaskellParser::KindContext *ctx) = 0;
  virtual void exitKind(HaskellParser::KindContext *ctx) = 0;

  virtual void enterGadt_constrlist(HaskellParser::Gadt_constrlistContext *ctx) = 0;
  virtual void exitGadt_constrlist(HaskellParser::Gadt_constrlistContext *ctx) = 0;

  virtual void enterGadt_constrs(HaskellParser::Gadt_constrsContext *ctx) = 0;
  virtual void exitGadt_constrs(HaskellParser::Gadt_constrsContext *ctx) = 0;

  virtual void enterGadt_constr_with_doc(HaskellParser::Gadt_constr_with_docContext *ctx) = 0;
  virtual void exitGadt_constr_with_doc(HaskellParser::Gadt_constr_with_docContext *ctx) = 0;

  virtual void enterGadt_constr(HaskellParser::Gadt_constrContext *ctx) = 0;
  virtual void exitGadt_constr(HaskellParser::Gadt_constrContext *ctx) = 0;

  virtual void enterConstrs(HaskellParser::ConstrsContext *ctx) = 0;
  virtual void exitConstrs(HaskellParser::ConstrsContext *ctx) = 0;

  virtual void enterConstrs1(HaskellParser::Constrs1Context *ctx) = 0;
  virtual void exitConstrs1(HaskellParser::Constrs1Context *ctx) = 0;

  virtual void enterConstr(HaskellParser::ConstrContext *ctx) = 0;
  virtual void exitConstr(HaskellParser::ConstrContext *ctx) = 0;

  virtual void enterForall(HaskellParser::ForallContext *ctx) = 0;
  virtual void exitForall(HaskellParser::ForallContext *ctx) = 0;

  virtual void enterConstr_stuff(HaskellParser::Constr_stuffContext *ctx) = 0;
  virtual void exitConstr_stuff(HaskellParser::Constr_stuffContext *ctx) = 0;

  virtual void enterFielddecls(HaskellParser::FielddeclsContext *ctx) = 0;
  virtual void exitFielddecls(HaskellParser::FielddeclsContext *ctx) = 0;

  virtual void enterFielddecl(HaskellParser::FielddeclContext *ctx) = 0;
  virtual void exitFielddecl(HaskellParser::FielddeclContext *ctx) = 0;

  virtual void enterDerivings(HaskellParser::DerivingsContext *ctx) = 0;
  virtual void exitDerivings(HaskellParser::DerivingsContext *ctx) = 0;

  virtual void enterDeriving(HaskellParser::DerivingContext *ctx) = 0;
  virtual void exitDeriving(HaskellParser::DerivingContext *ctx) = 0;

  virtual void enterDeriv_clause_types(HaskellParser::Deriv_clause_typesContext *ctx) = 0;
  virtual void exitDeriv_clause_types(HaskellParser::Deriv_clause_typesContext *ctx) = 0;

  virtual void enterDecl_no_th(HaskellParser::Decl_no_thContext *ctx) = 0;
  virtual void exitDecl_no_th(HaskellParser::Decl_no_thContext *ctx) = 0;

  virtual void enterDecl(HaskellParser::DeclContext *ctx) = 0;
  virtual void exitDecl(HaskellParser::DeclContext *ctx) = 0;

  virtual void enterRhs(HaskellParser::RhsContext *ctx) = 0;
  virtual void exitRhs(HaskellParser::RhsContext *ctx) = 0;

  virtual void enterGdrhs(HaskellParser::GdrhsContext *ctx) = 0;
  virtual void exitGdrhs(HaskellParser::GdrhsContext *ctx) = 0;

  virtual void enterGdrh(HaskellParser::GdrhContext *ctx) = 0;
  virtual void exitGdrh(HaskellParser::GdrhContext *ctx) = 0;

  virtual void enterSigdecl(HaskellParser::SigdeclContext *ctx) = 0;
  virtual void exitSigdecl(HaskellParser::SigdeclContext *ctx) = 0;

  virtual void enterActivation(HaskellParser::ActivationContext *ctx) = 0;
  virtual void exitActivation(HaskellParser::ActivationContext *ctx) = 0;

  virtual void enterTh_quasiquote(HaskellParser::Th_quasiquoteContext *ctx) = 0;
  virtual void exitTh_quasiquote(HaskellParser::Th_quasiquoteContext *ctx) = 0;

  virtual void enterTh_qquasiquote(HaskellParser::Th_qquasiquoteContext *ctx) = 0;
  virtual void exitTh_qquasiquote(HaskellParser::Th_qquasiquoteContext *ctx) = 0;

  virtual void enterQuasiquote(HaskellParser::QuasiquoteContext *ctx) = 0;
  virtual void exitQuasiquote(HaskellParser::QuasiquoteContext *ctx) = 0;

  virtual void enterExp(HaskellParser::ExpContext *ctx) = 0;
  virtual void exitExp(HaskellParser::ExpContext *ctx) = 0;

  virtual void enterInfixexp(HaskellParser::InfixexpContext *ctx) = 0;
  virtual void exitInfixexp(HaskellParser::InfixexpContext *ctx) = 0;

  virtual void enterExp10p(HaskellParser::Exp10pContext *ctx) = 0;
  virtual void exitExp10p(HaskellParser::Exp10pContext *ctx) = 0;

  virtual void enterExp10(HaskellParser::Exp10Context *ctx) = 0;
  virtual void exitExp10(HaskellParser::Exp10Context *ctx) = 0;

  virtual void enterFexp(HaskellParser::FexpContext *ctx) = 0;
  virtual void exitFexp(HaskellParser::FexpContext *ctx) = 0;

  virtual void enterAexp(HaskellParser::AexpContext *ctx) = 0;
  virtual void exitAexp(HaskellParser::AexpContext *ctx) = 0;

  virtual void enterAexp1(HaskellParser::Aexp1Context *ctx) = 0;
  virtual void exitAexp1(HaskellParser::Aexp1Context *ctx) = 0;

  virtual void enterAexp2(HaskellParser::Aexp2Context *ctx) = 0;
  virtual void exitAexp2(HaskellParser::Aexp2Context *ctx) = 0;

  virtual void enterSplice_exp(HaskellParser::Splice_expContext *ctx) = 0;
  virtual void exitSplice_exp(HaskellParser::Splice_expContext *ctx) = 0;

  virtual void enterSplice_untyped(HaskellParser::Splice_untypedContext *ctx) = 0;
  virtual void exitSplice_untyped(HaskellParser::Splice_untypedContext *ctx) = 0;

  virtual void enterSplice_typed(HaskellParser::Splice_typedContext *ctx) = 0;
  virtual void exitSplice_typed(HaskellParser::Splice_typedContext *ctx) = 0;

  virtual void enterCmdargs(HaskellParser::CmdargsContext *ctx) = 0;
  virtual void exitCmdargs(HaskellParser::CmdargsContext *ctx) = 0;

  virtual void enterAcmd(HaskellParser::AcmdContext *ctx) = 0;
  virtual void exitAcmd(HaskellParser::AcmdContext *ctx) = 0;

  virtual void enterCvtopbody(HaskellParser::CvtopbodyContext *ctx) = 0;
  virtual void exitCvtopbody(HaskellParser::CvtopbodyContext *ctx) = 0;

  virtual void enterCvtopdecls0(HaskellParser::Cvtopdecls0Context *ctx) = 0;
  virtual void exitCvtopdecls0(HaskellParser::Cvtopdecls0Context *ctx) = 0;

  virtual void enterTexp(HaskellParser::TexpContext *ctx) = 0;
  virtual void exitTexp(HaskellParser::TexpContext *ctx) = 0;

  virtual void enterTup_exprs(HaskellParser::Tup_exprsContext *ctx) = 0;
  virtual void exitTup_exprs(HaskellParser::Tup_exprsContext *ctx) = 0;

  virtual void enterCommas_tup_tail(HaskellParser::Commas_tup_tailContext *ctx) = 0;
  virtual void exitCommas_tup_tail(HaskellParser::Commas_tup_tailContext *ctx) = 0;

  virtual void enterTup_tail(HaskellParser::Tup_tailContext *ctx) = 0;
  virtual void exitTup_tail(HaskellParser::Tup_tailContext *ctx) = 0;

  virtual void enterList_(HaskellParser::List_Context *ctx) = 0;
  virtual void exitList_(HaskellParser::List_Context *ctx) = 0;

  virtual void enterLexps(HaskellParser::LexpsContext *ctx) = 0;
  virtual void exitLexps(HaskellParser::LexpsContext *ctx) = 0;

  virtual void enterFlattenedpquals(HaskellParser::FlattenedpqualsContext *ctx) = 0;
  virtual void exitFlattenedpquals(HaskellParser::FlattenedpqualsContext *ctx) = 0;

  virtual void enterPquals(HaskellParser::PqualsContext *ctx) = 0;
  virtual void exitPquals(HaskellParser::PqualsContext *ctx) = 0;

  virtual void enterSquals(HaskellParser::SqualsContext *ctx) = 0;
  virtual void exitSquals(HaskellParser::SqualsContext *ctx) = 0;

  virtual void enterTransformqual(HaskellParser::TransformqualContext *ctx) = 0;
  virtual void exitTransformqual(HaskellParser::TransformqualContext *ctx) = 0;

  virtual void enterGuards(HaskellParser::GuardsContext *ctx) = 0;
  virtual void exitGuards(HaskellParser::GuardsContext *ctx) = 0;

  virtual void enterGuard_(HaskellParser::Guard_Context *ctx) = 0;
  virtual void exitGuard_(HaskellParser::Guard_Context *ctx) = 0;

  virtual void enterAlts(HaskellParser::AltsContext *ctx) = 0;
  virtual void exitAlts(HaskellParser::AltsContext *ctx) = 0;

  virtual void enterAlt(HaskellParser::AltContext *ctx) = 0;
  virtual void exitAlt(HaskellParser::AltContext *ctx) = 0;

  virtual void enterAlt_rhs(HaskellParser::Alt_rhsContext *ctx) = 0;
  virtual void exitAlt_rhs(HaskellParser::Alt_rhsContext *ctx) = 0;

  virtual void enterRalt(HaskellParser::RaltContext *ctx) = 0;
  virtual void exitRalt(HaskellParser::RaltContext *ctx) = 0;

  virtual void enterGdpats(HaskellParser::GdpatsContext *ctx) = 0;
  virtual void exitGdpats(HaskellParser::GdpatsContext *ctx) = 0;

  virtual void enterIfgdpats(HaskellParser::IfgdpatsContext *ctx) = 0;
  virtual void exitIfgdpats(HaskellParser::IfgdpatsContext *ctx) = 0;

  virtual void enterGdpat(HaskellParser::GdpatContext *ctx) = 0;
  virtual void exitGdpat(HaskellParser::GdpatContext *ctx) = 0;

  virtual void enterPat(HaskellParser::PatContext *ctx) = 0;
  virtual void exitPat(HaskellParser::PatContext *ctx) = 0;

  virtual void enterBindpat(HaskellParser::BindpatContext *ctx) = 0;
  virtual void exitBindpat(HaskellParser::BindpatContext *ctx) = 0;

  virtual void enterApat(HaskellParser::ApatContext *ctx) = 0;
  virtual void exitApat(HaskellParser::ApatContext *ctx) = 0;

  virtual void enterApats(HaskellParser::ApatsContext *ctx) = 0;
  virtual void exitApats(HaskellParser::ApatsContext *ctx) = 0;

  virtual void enterFpat(HaskellParser::FpatContext *ctx) = 0;
  virtual void exitFpat(HaskellParser::FpatContext *ctx) = 0;

  virtual void enterStmtlist(HaskellParser::StmtlistContext *ctx) = 0;
  virtual void exitStmtlist(HaskellParser::StmtlistContext *ctx) = 0;

  virtual void enterStmts(HaskellParser::StmtsContext *ctx) = 0;
  virtual void exitStmts(HaskellParser::StmtsContext *ctx) = 0;

  virtual void enterStmt(HaskellParser::StmtContext *ctx) = 0;
  virtual void exitStmt(HaskellParser::StmtContext *ctx) = 0;

  virtual void enterQual(HaskellParser::QualContext *ctx) = 0;
  virtual void exitQual(HaskellParser::QualContext *ctx) = 0;

  virtual void enterFbinds(HaskellParser::FbindsContext *ctx) = 0;
  virtual void exitFbinds(HaskellParser::FbindsContext *ctx) = 0;

  virtual void enterFbind(HaskellParser::FbindContext *ctx) = 0;
  virtual void exitFbind(HaskellParser::FbindContext *ctx) = 0;

  virtual void enterDbinds(HaskellParser::DbindsContext *ctx) = 0;
  virtual void exitDbinds(HaskellParser::DbindsContext *ctx) = 0;

  virtual void enterDbind(HaskellParser::DbindContext *ctx) = 0;
  virtual void exitDbind(HaskellParser::DbindContext *ctx) = 0;

  virtual void enterName_boolformula_opt(HaskellParser::Name_boolformula_optContext *ctx) = 0;
  virtual void exitName_boolformula_opt(HaskellParser::Name_boolformula_optContext *ctx) = 0;

  virtual void enterName_boolformula_and(HaskellParser::Name_boolformula_andContext *ctx) = 0;
  virtual void exitName_boolformula_and(HaskellParser::Name_boolformula_andContext *ctx) = 0;

  virtual void enterName_boolformula_and_list(HaskellParser::Name_boolformula_and_listContext *ctx) = 0;
  virtual void exitName_boolformula_and_list(HaskellParser::Name_boolformula_and_listContext *ctx) = 0;

  virtual void enterName_boolformula_atom(HaskellParser::Name_boolformula_atomContext *ctx) = 0;
  virtual void exitName_boolformula_atom(HaskellParser::Name_boolformula_atomContext *ctx) = 0;

  virtual void enterNamelist(HaskellParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(HaskellParser::NamelistContext *ctx) = 0;

  virtual void enterName_var(HaskellParser::Name_varContext *ctx) = 0;
  virtual void exitName_var(HaskellParser::Name_varContext *ctx) = 0;

  virtual void enterQcon_nowiredlist(HaskellParser::Qcon_nowiredlistContext *ctx) = 0;
  virtual void exitQcon_nowiredlist(HaskellParser::Qcon_nowiredlistContext *ctx) = 0;

  virtual void enterQcon(HaskellParser::QconContext *ctx) = 0;
  virtual void exitQcon(HaskellParser::QconContext *ctx) = 0;

  virtual void enterGen_qcon(HaskellParser::Gen_qconContext *ctx) = 0;
  virtual void exitGen_qcon(HaskellParser::Gen_qconContext *ctx) = 0;

  virtual void enterCon(HaskellParser::ConContext *ctx) = 0;
  virtual void exitCon(HaskellParser::ConContext *ctx) = 0;

  virtual void enterCon_list(HaskellParser::Con_listContext *ctx) = 0;
  virtual void exitCon_list(HaskellParser::Con_listContext *ctx) = 0;

  virtual void enterSysdcon_nolist(HaskellParser::Sysdcon_nolistContext *ctx) = 0;
  virtual void exitSysdcon_nolist(HaskellParser::Sysdcon_nolistContext *ctx) = 0;

  virtual void enterSysdcon(HaskellParser::SysdconContext *ctx) = 0;
  virtual void exitSysdcon(HaskellParser::SysdconContext *ctx) = 0;

  virtual void enterConop(HaskellParser::ConopContext *ctx) = 0;
  virtual void exitConop(HaskellParser::ConopContext *ctx) = 0;

  virtual void enterQconop(HaskellParser::QconopContext *ctx) = 0;
  virtual void exitQconop(HaskellParser::QconopContext *ctx) = 0;

  virtual void enterGconsym(HaskellParser::GconsymContext *ctx) = 0;
  virtual void exitGconsym(HaskellParser::GconsymContext *ctx) = 0;

  virtual void enterGtycon(HaskellParser::GtyconContext *ctx) = 0;
  virtual void exitGtycon(HaskellParser::GtyconContext *ctx) = 0;

  virtual void enterNtgtycon(HaskellParser::NtgtyconContext *ctx) = 0;
  virtual void exitNtgtycon(HaskellParser::NtgtyconContext *ctx) = 0;

  virtual void enterOqtycon(HaskellParser::OqtyconContext *ctx) = 0;
  virtual void exitOqtycon(HaskellParser::OqtyconContext *ctx) = 0;

  virtual void enterQtyconop(HaskellParser::QtyconopContext *ctx) = 0;
  virtual void exitQtyconop(HaskellParser::QtyconopContext *ctx) = 0;

  virtual void enterQtycon(HaskellParser::QtyconContext *ctx) = 0;
  virtual void exitQtycon(HaskellParser::QtyconContext *ctx) = 0;

  virtual void enterTycon(HaskellParser::TyconContext *ctx) = 0;
  virtual void exitTycon(HaskellParser::TyconContext *ctx) = 0;

  virtual void enterQtyconsym(HaskellParser::QtyconsymContext *ctx) = 0;
  virtual void exitQtyconsym(HaskellParser::QtyconsymContext *ctx) = 0;

  virtual void enterTyconsym(HaskellParser::TyconsymContext *ctx) = 0;
  virtual void exitTyconsym(HaskellParser::TyconsymContext *ctx) = 0;

  virtual void enterOp(HaskellParser::OpContext *ctx) = 0;
  virtual void exitOp(HaskellParser::OpContext *ctx) = 0;

  virtual void enterVarop(HaskellParser::VaropContext *ctx) = 0;
  virtual void exitVarop(HaskellParser::VaropContext *ctx) = 0;

  virtual void enterQop(HaskellParser::QopContext *ctx) = 0;
  virtual void exitQop(HaskellParser::QopContext *ctx) = 0;

  virtual void enterQopm(HaskellParser::QopmContext *ctx) = 0;
  virtual void exitQopm(HaskellParser::QopmContext *ctx) = 0;

  virtual void enterHole_op(HaskellParser::Hole_opContext *ctx) = 0;
  virtual void exitHole_op(HaskellParser::Hole_opContext *ctx) = 0;

  virtual void enterQvarop(HaskellParser::QvaropContext *ctx) = 0;
  virtual void exitQvarop(HaskellParser::QvaropContext *ctx) = 0;

  virtual void enterQvaropm(HaskellParser::QvaropmContext *ctx) = 0;
  virtual void exitQvaropm(HaskellParser::QvaropmContext *ctx) = 0;

  virtual void enterTyvar(HaskellParser::TyvarContext *ctx) = 0;
  virtual void exitTyvar(HaskellParser::TyvarContext *ctx) = 0;

  virtual void enterTyvarop(HaskellParser::TyvaropContext *ctx) = 0;
  virtual void exitTyvarop(HaskellParser::TyvaropContext *ctx) = 0;

  virtual void enterTyvarid(HaskellParser::TyvaridContext *ctx) = 0;
  virtual void exitTyvarid(HaskellParser::TyvaridContext *ctx) = 0;

  virtual void enterTycls(HaskellParser::TyclsContext *ctx) = 0;
  virtual void exitTycls(HaskellParser::TyclsContext *ctx) = 0;

  virtual void enterQtycls(HaskellParser::QtyclsContext *ctx) = 0;
  virtual void exitQtycls(HaskellParser::QtyclsContext *ctx) = 0;

  virtual void enterVar_(HaskellParser::Var_Context *ctx) = 0;
  virtual void exitVar_(HaskellParser::Var_Context *ctx) = 0;

  virtual void enterQvar(HaskellParser::QvarContext *ctx) = 0;
  virtual void exitQvar(HaskellParser::QvarContext *ctx) = 0;

  virtual void enterQvarid(HaskellParser::QvaridContext *ctx) = 0;
  virtual void exitQvarid(HaskellParser::QvaridContext *ctx) = 0;

  virtual void enterVarid(HaskellParser::VaridContext *ctx) = 0;
  virtual void exitVarid(HaskellParser::VaridContext *ctx) = 0;

  virtual void enterQvarsym(HaskellParser::QvarsymContext *ctx) = 0;
  virtual void exitQvarsym(HaskellParser::QvarsymContext *ctx) = 0;

  virtual void enterQvarsym_no_minus(HaskellParser::Qvarsym_no_minusContext *ctx) = 0;
  virtual void exitQvarsym_no_minus(HaskellParser::Qvarsym_no_minusContext *ctx) = 0;

  virtual void enterVarsym(HaskellParser::VarsymContext *ctx) = 0;
  virtual void exitVarsym(HaskellParser::VarsymContext *ctx) = 0;

  virtual void enterVarsym_no_minus(HaskellParser::Varsym_no_minusContext *ctx) = 0;
  virtual void exitVarsym_no_minus(HaskellParser::Varsym_no_minusContext *ctx) = 0;

  virtual void enterSpecial_id(HaskellParser::Special_idContext *ctx) = 0;
  virtual void exitSpecial_id(HaskellParser::Special_idContext *ctx) = 0;

  virtual void enterQconid(HaskellParser::QconidContext *ctx) = 0;
  virtual void exitQconid(HaskellParser::QconidContext *ctx) = 0;

  virtual void enterConid(HaskellParser::ConidContext *ctx) = 0;
  virtual void exitConid(HaskellParser::ConidContext *ctx) = 0;

  virtual void enterQconsym(HaskellParser::QconsymContext *ctx) = 0;
  virtual void exitQconsym(HaskellParser::QconsymContext *ctx) = 0;

  virtual void enterConsym(HaskellParser::ConsymContext *ctx) = 0;
  virtual void exitConsym(HaskellParser::ConsymContext *ctx) = 0;

  virtual void enterLiteral(HaskellParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(HaskellParser::LiteralContext *ctx) = 0;

  virtual void enterOpen_(HaskellParser::Open_Context *ctx) = 0;
  virtual void exitOpen_(HaskellParser::Open_Context *ctx) = 0;

  virtual void enterClose(HaskellParser::CloseContext *ctx) = 0;
  virtual void exitClose(HaskellParser::CloseContext *ctx) = 0;

  virtual void enterSemi(HaskellParser::SemiContext *ctx) = 0;
  virtual void exitSemi(HaskellParser::SemiContext *ctx) = 0;

  virtual void enterModid(HaskellParser::ModidContext *ctx) = 0;
  virtual void exitModid(HaskellParser::ModidContext *ctx) = 0;

  virtual void enterCommas(HaskellParser::CommasContext *ctx) = 0;
  virtual void exitCommas(HaskellParser::CommasContext *ctx) = 0;

  virtual void enterBars(HaskellParser::BarsContext *ctx) = 0;
  virtual void exitBars(HaskellParser::BarsContext *ctx) = 0;

  virtual void enterSpecial(HaskellParser::SpecialContext *ctx) = 0;
  virtual void exitSpecial(HaskellParser::SpecialContext *ctx) = 0;

  virtual void enterSymbol(HaskellParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(HaskellParser::SymbolContext *ctx) = 0;

  virtual void enterAscSymbol(HaskellParser::AscSymbolContext *ctx) = 0;
  virtual void exitAscSymbol(HaskellParser::AscSymbolContext *ctx) = 0;

  virtual void enterInteger(HaskellParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(HaskellParser::IntegerContext *ctx) = 0;

  virtual void enterPfloat(HaskellParser::PfloatContext *ctx) = 0;
  virtual void exitPfloat(HaskellParser::PfloatContext *ctx) = 0;

  virtual void enterPchar(HaskellParser::PcharContext *ctx) = 0;
  virtual void exitPchar(HaskellParser::PcharContext *ctx) = 0;

  virtual void enterPstring(HaskellParser::PstringContext *ctx) = 0;
  virtual void exitPstring(HaskellParser::PstringContext *ctx) = 0;


};

