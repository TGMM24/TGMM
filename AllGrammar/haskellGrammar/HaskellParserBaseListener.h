
// Generated from HaskellParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "HaskellParserListener.h"


/**
 * This class provides an empty implementation of HaskellParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HaskellParserBaseListener : public HaskellParserListener {
public:

  virtual void enterModule(HaskellParser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(HaskellParser::ModuleContext * /*ctx*/) override { }

  virtual void enterModule_content(HaskellParser::Module_contentContext * /*ctx*/) override { }
  virtual void exitModule_content(HaskellParser::Module_contentContext * /*ctx*/) override { }

  virtual void enterWhere_module(HaskellParser::Where_moduleContext * /*ctx*/) override { }
  virtual void exitWhere_module(HaskellParser::Where_moduleContext * /*ctx*/) override { }

  virtual void enterModule_body(HaskellParser::Module_bodyContext * /*ctx*/) override { }
  virtual void exitModule_body(HaskellParser::Module_bodyContext * /*ctx*/) override { }

  virtual void enterPragmas(HaskellParser::PragmasContext * /*ctx*/) override { }
  virtual void exitPragmas(HaskellParser::PragmasContext * /*ctx*/) override { }

  virtual void enterPragma(HaskellParser::PragmaContext * /*ctx*/) override { }
  virtual void exitPragma(HaskellParser::PragmaContext * /*ctx*/) override { }

  virtual void enterLanguage_pragma(HaskellParser::Language_pragmaContext * /*ctx*/) override { }
  virtual void exitLanguage_pragma(HaskellParser::Language_pragmaContext * /*ctx*/) override { }

  virtual void enterOptions_ghc(HaskellParser::Options_ghcContext * /*ctx*/) override { }
  virtual void exitOptions_ghc(HaskellParser::Options_ghcContext * /*ctx*/) override { }

  virtual void enterSimple_options(HaskellParser::Simple_optionsContext * /*ctx*/) override { }
  virtual void exitSimple_options(HaskellParser::Simple_optionsContext * /*ctx*/) override { }

  virtual void enterExtension_(HaskellParser::Extension_Context * /*ctx*/) override { }
  virtual void exitExtension_(HaskellParser::Extension_Context * /*ctx*/) override { }

  virtual void enterBody(HaskellParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(HaskellParser::BodyContext * /*ctx*/) override { }

  virtual void enterImpdecls(HaskellParser::ImpdeclsContext * /*ctx*/) override { }
  virtual void exitImpdecls(HaskellParser::ImpdeclsContext * /*ctx*/) override { }

  virtual void enterExports(HaskellParser::ExportsContext * /*ctx*/) override { }
  virtual void exitExports(HaskellParser::ExportsContext * /*ctx*/) override { }

  virtual void enterExprt(HaskellParser::ExprtContext * /*ctx*/) override { }
  virtual void exitExprt(HaskellParser::ExprtContext * /*ctx*/) override { }

  virtual void enterImpdecl(HaskellParser::ImpdeclContext * /*ctx*/) override { }
  virtual void exitImpdecl(HaskellParser::ImpdeclContext * /*ctx*/) override { }

  virtual void enterImpspec(HaskellParser::ImpspecContext * /*ctx*/) override { }
  virtual void exitImpspec(HaskellParser::ImpspecContext * /*ctx*/) override { }

  virtual void enterHimport(HaskellParser::HimportContext * /*ctx*/) override { }
  virtual void exitHimport(HaskellParser::HimportContext * /*ctx*/) override { }

  virtual void enterCname(HaskellParser::CnameContext * /*ctx*/) override { }
  virtual void exitCname(HaskellParser::CnameContext * /*ctx*/) override { }

  virtual void enterFixity(HaskellParser::FixityContext * /*ctx*/) override { }
  virtual void exitFixity(HaskellParser::FixityContext * /*ctx*/) override { }

  virtual void enterOps(HaskellParser::OpsContext * /*ctx*/) override { }
  virtual void exitOps(HaskellParser::OpsContext * /*ctx*/) override { }

  virtual void enterTopdecls(HaskellParser::TopdeclsContext * /*ctx*/) override { }
  virtual void exitTopdecls(HaskellParser::TopdeclsContext * /*ctx*/) override { }

  virtual void enterTopdecl(HaskellParser::TopdeclContext * /*ctx*/) override { }
  virtual void exitTopdecl(HaskellParser::TopdeclContext * /*ctx*/) override { }

  virtual void enterCl_decl(HaskellParser::Cl_declContext * /*ctx*/) override { }
  virtual void exitCl_decl(HaskellParser::Cl_declContext * /*ctx*/) override { }

  virtual void enterTy_decl(HaskellParser::Ty_declContext * /*ctx*/) override { }
  virtual void exitTy_decl(HaskellParser::Ty_declContext * /*ctx*/) override { }

  virtual void enterStandalone_kind_sig(HaskellParser::Standalone_kind_sigContext * /*ctx*/) override { }
  virtual void exitStandalone_kind_sig(HaskellParser::Standalone_kind_sigContext * /*ctx*/) override { }

  virtual void enterSks_vars(HaskellParser::Sks_varsContext * /*ctx*/) override { }
  virtual void exitSks_vars(HaskellParser::Sks_varsContext * /*ctx*/) override { }

  virtual void enterInst_decl(HaskellParser::Inst_declContext * /*ctx*/) override { }
  virtual void exitInst_decl(HaskellParser::Inst_declContext * /*ctx*/) override { }

  virtual void enterOverlap_pragma(HaskellParser::Overlap_pragmaContext * /*ctx*/) override { }
  virtual void exitOverlap_pragma(HaskellParser::Overlap_pragmaContext * /*ctx*/) override { }

  virtual void enterDeriv_strategy_no_via(HaskellParser::Deriv_strategy_no_viaContext * /*ctx*/) override { }
  virtual void exitDeriv_strategy_no_via(HaskellParser::Deriv_strategy_no_viaContext * /*ctx*/) override { }

  virtual void enterDeriv_strategy_via(HaskellParser::Deriv_strategy_viaContext * /*ctx*/) override { }
  virtual void exitDeriv_strategy_via(HaskellParser::Deriv_strategy_viaContext * /*ctx*/) override { }

  virtual void enterDeriv_standalone_strategy(HaskellParser::Deriv_standalone_strategyContext * /*ctx*/) override { }
  virtual void exitDeriv_standalone_strategy(HaskellParser::Deriv_standalone_strategyContext * /*ctx*/) override { }

  virtual void enterOpt_injective_info(HaskellParser::Opt_injective_infoContext * /*ctx*/) override { }
  virtual void exitOpt_injective_info(HaskellParser::Opt_injective_infoContext * /*ctx*/) override { }

  virtual void enterInjectivity_cond(HaskellParser::Injectivity_condContext * /*ctx*/) override { }
  virtual void exitInjectivity_cond(HaskellParser::Injectivity_condContext * /*ctx*/) override { }

  virtual void enterInj_varids(HaskellParser::Inj_varidsContext * /*ctx*/) override { }
  virtual void exitInj_varids(HaskellParser::Inj_varidsContext * /*ctx*/) override { }

  virtual void enterWhere_type_family(HaskellParser::Where_type_familyContext * /*ctx*/) override { }
  virtual void exitWhere_type_family(HaskellParser::Where_type_familyContext * /*ctx*/) override { }

  virtual void enterTy_fam_inst_eqn_list(HaskellParser::Ty_fam_inst_eqn_listContext * /*ctx*/) override { }
  virtual void exitTy_fam_inst_eqn_list(HaskellParser::Ty_fam_inst_eqn_listContext * /*ctx*/) override { }

  virtual void enterTy_fam_inst_eqns(HaskellParser::Ty_fam_inst_eqnsContext * /*ctx*/) override { }
  virtual void exitTy_fam_inst_eqns(HaskellParser::Ty_fam_inst_eqnsContext * /*ctx*/) override { }

  virtual void enterTy_fam_inst_eqn(HaskellParser::Ty_fam_inst_eqnContext * /*ctx*/) override { }
  virtual void exitTy_fam_inst_eqn(HaskellParser::Ty_fam_inst_eqnContext * /*ctx*/) override { }

  virtual void enterAt_decl_cls(HaskellParser::At_decl_clsContext * /*ctx*/) override { }
  virtual void exitAt_decl_cls(HaskellParser::At_decl_clsContext * /*ctx*/) override { }

  virtual void enterAt_decl_inst(HaskellParser::At_decl_instContext * /*ctx*/) override { }
  virtual void exitAt_decl_inst(HaskellParser::At_decl_instContext * /*ctx*/) override { }

  virtual void enterOpt_kind_sig(HaskellParser::Opt_kind_sigContext * /*ctx*/) override { }
  virtual void exitOpt_kind_sig(HaskellParser::Opt_kind_sigContext * /*ctx*/) override { }

  virtual void enterOpt_datafam_kind_sig(HaskellParser::Opt_datafam_kind_sigContext * /*ctx*/) override { }
  virtual void exitOpt_datafam_kind_sig(HaskellParser::Opt_datafam_kind_sigContext * /*ctx*/) override { }

  virtual void enterOpt_tyfam_kind_sig(HaskellParser::Opt_tyfam_kind_sigContext * /*ctx*/) override { }
  virtual void exitOpt_tyfam_kind_sig(HaskellParser::Opt_tyfam_kind_sigContext * /*ctx*/) override { }

  virtual void enterOpt_at_kind_inj_sig(HaskellParser::Opt_at_kind_inj_sigContext * /*ctx*/) override { }
  virtual void exitOpt_at_kind_inj_sig(HaskellParser::Opt_at_kind_inj_sigContext * /*ctx*/) override { }

  virtual void enterTycl_hdr(HaskellParser::Tycl_hdrContext * /*ctx*/) override { }
  virtual void exitTycl_hdr(HaskellParser::Tycl_hdrContext * /*ctx*/) override { }

  virtual void enterTycl_hdr_inst(HaskellParser::Tycl_hdr_instContext * /*ctx*/) override { }
  virtual void exitTycl_hdr_inst(HaskellParser::Tycl_hdr_instContext * /*ctx*/) override { }

  virtual void enterCapi_ctype(HaskellParser::Capi_ctypeContext * /*ctx*/) override { }
  virtual void exitCapi_ctype(HaskellParser::Capi_ctypeContext * /*ctx*/) override { }

  virtual void enterStandalone_deriving(HaskellParser::Standalone_derivingContext * /*ctx*/) override { }
  virtual void exitStandalone_deriving(HaskellParser::Standalone_derivingContext * /*ctx*/) override { }

  virtual void enterRole_annot(HaskellParser::Role_annotContext * /*ctx*/) override { }
  virtual void exitRole_annot(HaskellParser::Role_annotContext * /*ctx*/) override { }

  virtual void enterRoles(HaskellParser::RolesContext * /*ctx*/) override { }
  virtual void exitRoles(HaskellParser::RolesContext * /*ctx*/) override { }

  virtual void enterRole(HaskellParser::RoleContext * /*ctx*/) override { }
  virtual void exitRole(HaskellParser::RoleContext * /*ctx*/) override { }

  virtual void enterPattern_synonym_decl(HaskellParser::Pattern_synonym_declContext * /*ctx*/) override { }
  virtual void exitPattern_synonym_decl(HaskellParser::Pattern_synonym_declContext * /*ctx*/) override { }

  virtual void enterPattern_synonym_lhs(HaskellParser::Pattern_synonym_lhsContext * /*ctx*/) override { }
  virtual void exitPattern_synonym_lhs(HaskellParser::Pattern_synonym_lhsContext * /*ctx*/) override { }

  virtual void enterVars_(HaskellParser::Vars_Context * /*ctx*/) override { }
  virtual void exitVars_(HaskellParser::Vars_Context * /*ctx*/) override { }

  virtual void enterCvars(HaskellParser::CvarsContext * /*ctx*/) override { }
  virtual void exitCvars(HaskellParser::CvarsContext * /*ctx*/) override { }

  virtual void enterWhere_decls(HaskellParser::Where_declsContext * /*ctx*/) override { }
  virtual void exitWhere_decls(HaskellParser::Where_declsContext * /*ctx*/) override { }

  virtual void enterPattern_synonym_sig(HaskellParser::Pattern_synonym_sigContext * /*ctx*/) override { }
  virtual void exitPattern_synonym_sig(HaskellParser::Pattern_synonym_sigContext * /*ctx*/) override { }

  virtual void enterDecl_cls(HaskellParser::Decl_clsContext * /*ctx*/) override { }
  virtual void exitDecl_cls(HaskellParser::Decl_clsContext * /*ctx*/) override { }

  virtual void enterDecls_cls(HaskellParser::Decls_clsContext * /*ctx*/) override { }
  virtual void exitDecls_cls(HaskellParser::Decls_clsContext * /*ctx*/) override { }

  virtual void enterDecllist_cls(HaskellParser::Decllist_clsContext * /*ctx*/) override { }
  virtual void exitDecllist_cls(HaskellParser::Decllist_clsContext * /*ctx*/) override { }

  virtual void enterWhere_cls(HaskellParser::Where_clsContext * /*ctx*/) override { }
  virtual void exitWhere_cls(HaskellParser::Where_clsContext * /*ctx*/) override { }

  virtual void enterDecl_inst(HaskellParser::Decl_instContext * /*ctx*/) override { }
  virtual void exitDecl_inst(HaskellParser::Decl_instContext * /*ctx*/) override { }

  virtual void enterDecls_inst(HaskellParser::Decls_instContext * /*ctx*/) override { }
  virtual void exitDecls_inst(HaskellParser::Decls_instContext * /*ctx*/) override { }

  virtual void enterDecllist_inst(HaskellParser::Decllist_instContext * /*ctx*/) override { }
  virtual void exitDecllist_inst(HaskellParser::Decllist_instContext * /*ctx*/) override { }

  virtual void enterWhere_inst(HaskellParser::Where_instContext * /*ctx*/) override { }
  virtual void exitWhere_inst(HaskellParser::Where_instContext * /*ctx*/) override { }

  virtual void enterDecls(HaskellParser::DeclsContext * /*ctx*/) override { }
  virtual void exitDecls(HaskellParser::DeclsContext * /*ctx*/) override { }

  virtual void enterDecllist(HaskellParser::DecllistContext * /*ctx*/) override { }
  virtual void exitDecllist(HaskellParser::DecllistContext * /*ctx*/) override { }

  virtual void enterBinds(HaskellParser::BindsContext * /*ctx*/) override { }
  virtual void exitBinds(HaskellParser::BindsContext * /*ctx*/) override { }

  virtual void enterWherebinds(HaskellParser::WherebindsContext * /*ctx*/) override { }
  virtual void exitWherebinds(HaskellParser::WherebindsContext * /*ctx*/) override { }

  virtual void enterRules(HaskellParser::RulesContext * /*ctx*/) override { }
  virtual void exitRules(HaskellParser::RulesContext * /*ctx*/) override { }

  virtual void enterPragma_rule(HaskellParser::Pragma_ruleContext * /*ctx*/) override { }
  virtual void exitPragma_rule(HaskellParser::Pragma_ruleContext * /*ctx*/) override { }

  virtual void enterRule_activation_marker(HaskellParser::Rule_activation_markerContext * /*ctx*/) override { }
  virtual void exitRule_activation_marker(HaskellParser::Rule_activation_markerContext * /*ctx*/) override { }

  virtual void enterRule_activation(HaskellParser::Rule_activationContext * /*ctx*/) override { }
  virtual void exitRule_activation(HaskellParser::Rule_activationContext * /*ctx*/) override { }

  virtual void enterRule_foralls(HaskellParser::Rule_forallsContext * /*ctx*/) override { }
  virtual void exitRule_foralls(HaskellParser::Rule_forallsContext * /*ctx*/) override { }

  virtual void enterRule_vars(HaskellParser::Rule_varsContext * /*ctx*/) override { }
  virtual void exitRule_vars(HaskellParser::Rule_varsContext * /*ctx*/) override { }

  virtual void enterRule_var(HaskellParser::Rule_varContext * /*ctx*/) override { }
  virtual void exitRule_var(HaskellParser::Rule_varContext * /*ctx*/) override { }

  virtual void enterWarnings(HaskellParser::WarningsContext * /*ctx*/) override { }
  virtual void exitWarnings(HaskellParser::WarningsContext * /*ctx*/) override { }

  virtual void enterPragma_warning(HaskellParser::Pragma_warningContext * /*ctx*/) override { }
  virtual void exitPragma_warning(HaskellParser::Pragma_warningContext * /*ctx*/) override { }

  virtual void enterDeprecations(HaskellParser::DeprecationsContext * /*ctx*/) override { }
  virtual void exitDeprecations(HaskellParser::DeprecationsContext * /*ctx*/) override { }

  virtual void enterPragma_deprecation(HaskellParser::Pragma_deprecationContext * /*ctx*/) override { }
  virtual void exitPragma_deprecation(HaskellParser::Pragma_deprecationContext * /*ctx*/) override { }

  virtual void enterStrings(HaskellParser::StringsContext * /*ctx*/) override { }
  virtual void exitStrings(HaskellParser::StringsContext * /*ctx*/) override { }

  virtual void enterStringlist(HaskellParser::StringlistContext * /*ctx*/) override { }
  virtual void exitStringlist(HaskellParser::StringlistContext * /*ctx*/) override { }

  virtual void enterAnnotation(HaskellParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(HaskellParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterFdecl(HaskellParser::FdeclContext * /*ctx*/) override { }
  virtual void exitFdecl(HaskellParser::FdeclContext * /*ctx*/) override { }

  virtual void enterCallconv(HaskellParser::CallconvContext * /*ctx*/) override { }
  virtual void exitCallconv(HaskellParser::CallconvContext * /*ctx*/) override { }

  virtual void enterSafety(HaskellParser::SafetyContext * /*ctx*/) override { }
  virtual void exitSafety(HaskellParser::SafetyContext * /*ctx*/) override { }

  virtual void enterFspec(HaskellParser::FspecContext * /*ctx*/) override { }
  virtual void exitFspec(HaskellParser::FspecContext * /*ctx*/) override { }

  virtual void enterOpt_sig(HaskellParser::Opt_sigContext * /*ctx*/) override { }
  virtual void exitOpt_sig(HaskellParser::Opt_sigContext * /*ctx*/) override { }

  virtual void enterOpt_tyconsig(HaskellParser::Opt_tyconsigContext * /*ctx*/) override { }
  virtual void exitOpt_tyconsig(HaskellParser::Opt_tyconsigContext * /*ctx*/) override { }

  virtual void enterSigtype(HaskellParser::SigtypeContext * /*ctx*/) override { }
  virtual void exitSigtype(HaskellParser::SigtypeContext * /*ctx*/) override { }

  virtual void enterSigtypedoc(HaskellParser::SigtypedocContext * /*ctx*/) override { }
  virtual void exitSigtypedoc(HaskellParser::SigtypedocContext * /*ctx*/) override { }

  virtual void enterSig_vars(HaskellParser::Sig_varsContext * /*ctx*/) override { }
  virtual void exitSig_vars(HaskellParser::Sig_varsContext * /*ctx*/) override { }

  virtual void enterSigtypes1(HaskellParser::Sigtypes1Context * /*ctx*/) override { }
  virtual void exitSigtypes1(HaskellParser::Sigtypes1Context * /*ctx*/) override { }

  virtual void enterUnpackedness(HaskellParser::UnpackednessContext * /*ctx*/) override { }
  virtual void exitUnpackedness(HaskellParser::UnpackednessContext * /*ctx*/) override { }

  virtual void enterForall_vis_flag(HaskellParser::Forall_vis_flagContext * /*ctx*/) override { }
  virtual void exitForall_vis_flag(HaskellParser::Forall_vis_flagContext * /*ctx*/) override { }

  virtual void enterKtype(HaskellParser::KtypeContext * /*ctx*/) override { }
  virtual void exitKtype(HaskellParser::KtypeContext * /*ctx*/) override { }

  virtual void enterKtypedoc(HaskellParser::KtypedocContext * /*ctx*/) override { }
  virtual void exitKtypedoc(HaskellParser::KtypedocContext * /*ctx*/) override { }

  virtual void enterCtype(HaskellParser::CtypeContext * /*ctx*/) override { }
  virtual void exitCtype(HaskellParser::CtypeContext * /*ctx*/) override { }

  virtual void enterCtypedoc(HaskellParser::CtypedocContext * /*ctx*/) override { }
  virtual void exitCtypedoc(HaskellParser::CtypedocContext * /*ctx*/) override { }

  virtual void enterTycl_context(HaskellParser::Tycl_contextContext * /*ctx*/) override { }
  virtual void exitTycl_context(HaskellParser::Tycl_contextContext * /*ctx*/) override { }

  virtual void enterConstr_context(HaskellParser::Constr_contextContext * /*ctx*/) override { }
  virtual void exitConstr_context(HaskellParser::Constr_contextContext * /*ctx*/) override { }

  virtual void enterType_(HaskellParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(HaskellParser::Type_Context * /*ctx*/) override { }

  virtual void enterTypedoc(HaskellParser::TypedocContext * /*ctx*/) override { }
  virtual void exitTypedoc(HaskellParser::TypedocContext * /*ctx*/) override { }

  virtual void enterConstr_btype(HaskellParser::Constr_btypeContext * /*ctx*/) override { }
  virtual void exitConstr_btype(HaskellParser::Constr_btypeContext * /*ctx*/) override { }

  virtual void enterConstr_tyapps(HaskellParser::Constr_tyappsContext * /*ctx*/) override { }
  virtual void exitConstr_tyapps(HaskellParser::Constr_tyappsContext * /*ctx*/) override { }

  virtual void enterConstr_tyapp(HaskellParser::Constr_tyappContext * /*ctx*/) override { }
  virtual void exitConstr_tyapp(HaskellParser::Constr_tyappContext * /*ctx*/) override { }

  virtual void enterBtype(HaskellParser::BtypeContext * /*ctx*/) override { }
  virtual void exitBtype(HaskellParser::BtypeContext * /*ctx*/) override { }

  virtual void enterTyapps(HaskellParser::TyappsContext * /*ctx*/) override { }
  virtual void exitTyapps(HaskellParser::TyappsContext * /*ctx*/) override { }

  virtual void enterTyapp(HaskellParser::TyappContext * /*ctx*/) override { }
  virtual void exitTyapp(HaskellParser::TyappContext * /*ctx*/) override { }

  virtual void enterAtype(HaskellParser::AtypeContext * /*ctx*/) override { }
  virtual void exitAtype(HaskellParser::AtypeContext * /*ctx*/) override { }

  virtual void enterInst_type(HaskellParser::Inst_typeContext * /*ctx*/) override { }
  virtual void exitInst_type(HaskellParser::Inst_typeContext * /*ctx*/) override { }

  virtual void enterDeriv_types(HaskellParser::Deriv_typesContext * /*ctx*/) override { }
  virtual void exitDeriv_types(HaskellParser::Deriv_typesContext * /*ctx*/) override { }

  virtual void enterComma_types(HaskellParser::Comma_typesContext * /*ctx*/) override { }
  virtual void exitComma_types(HaskellParser::Comma_typesContext * /*ctx*/) override { }

  virtual void enterBar_types2(HaskellParser::Bar_types2Context * /*ctx*/) override { }
  virtual void exitBar_types2(HaskellParser::Bar_types2Context * /*ctx*/) override { }

  virtual void enterTv_bndrs(HaskellParser::Tv_bndrsContext * /*ctx*/) override { }
  virtual void exitTv_bndrs(HaskellParser::Tv_bndrsContext * /*ctx*/) override { }

  virtual void enterTv_bndr(HaskellParser::Tv_bndrContext * /*ctx*/) override { }
  virtual void exitTv_bndr(HaskellParser::Tv_bndrContext * /*ctx*/) override { }

  virtual void enterTv_bndr_no_braces(HaskellParser::Tv_bndr_no_bracesContext * /*ctx*/) override { }
  virtual void exitTv_bndr_no_braces(HaskellParser::Tv_bndr_no_bracesContext * /*ctx*/) override { }

  virtual void enterFds(HaskellParser::FdsContext * /*ctx*/) override { }
  virtual void exitFds(HaskellParser::FdsContext * /*ctx*/) override { }

  virtual void enterFds1(HaskellParser::Fds1Context * /*ctx*/) override { }
  virtual void exitFds1(HaskellParser::Fds1Context * /*ctx*/) override { }

  virtual void enterFd(HaskellParser::FdContext * /*ctx*/) override { }
  virtual void exitFd(HaskellParser::FdContext * /*ctx*/) override { }

  virtual void enterVarids0(HaskellParser::Varids0Context * /*ctx*/) override { }
  virtual void exitVarids0(HaskellParser::Varids0Context * /*ctx*/) override { }

  virtual void enterKind(HaskellParser::KindContext * /*ctx*/) override { }
  virtual void exitKind(HaskellParser::KindContext * /*ctx*/) override { }

  virtual void enterGadt_constrlist(HaskellParser::Gadt_constrlistContext * /*ctx*/) override { }
  virtual void exitGadt_constrlist(HaskellParser::Gadt_constrlistContext * /*ctx*/) override { }

  virtual void enterGadt_constrs(HaskellParser::Gadt_constrsContext * /*ctx*/) override { }
  virtual void exitGadt_constrs(HaskellParser::Gadt_constrsContext * /*ctx*/) override { }

  virtual void enterGadt_constr_with_doc(HaskellParser::Gadt_constr_with_docContext * /*ctx*/) override { }
  virtual void exitGadt_constr_with_doc(HaskellParser::Gadt_constr_with_docContext * /*ctx*/) override { }

  virtual void enterGadt_constr(HaskellParser::Gadt_constrContext * /*ctx*/) override { }
  virtual void exitGadt_constr(HaskellParser::Gadt_constrContext * /*ctx*/) override { }

  virtual void enterConstrs(HaskellParser::ConstrsContext * /*ctx*/) override { }
  virtual void exitConstrs(HaskellParser::ConstrsContext * /*ctx*/) override { }

  virtual void enterConstrs1(HaskellParser::Constrs1Context * /*ctx*/) override { }
  virtual void exitConstrs1(HaskellParser::Constrs1Context * /*ctx*/) override { }

  virtual void enterConstr(HaskellParser::ConstrContext * /*ctx*/) override { }
  virtual void exitConstr(HaskellParser::ConstrContext * /*ctx*/) override { }

  virtual void enterForall(HaskellParser::ForallContext * /*ctx*/) override { }
  virtual void exitForall(HaskellParser::ForallContext * /*ctx*/) override { }

  virtual void enterConstr_stuff(HaskellParser::Constr_stuffContext * /*ctx*/) override { }
  virtual void exitConstr_stuff(HaskellParser::Constr_stuffContext * /*ctx*/) override { }

  virtual void enterFielddecls(HaskellParser::FielddeclsContext * /*ctx*/) override { }
  virtual void exitFielddecls(HaskellParser::FielddeclsContext * /*ctx*/) override { }

  virtual void enterFielddecl(HaskellParser::FielddeclContext * /*ctx*/) override { }
  virtual void exitFielddecl(HaskellParser::FielddeclContext * /*ctx*/) override { }

  virtual void enterDerivings(HaskellParser::DerivingsContext * /*ctx*/) override { }
  virtual void exitDerivings(HaskellParser::DerivingsContext * /*ctx*/) override { }

  virtual void enterDeriving(HaskellParser::DerivingContext * /*ctx*/) override { }
  virtual void exitDeriving(HaskellParser::DerivingContext * /*ctx*/) override { }

  virtual void enterDeriv_clause_types(HaskellParser::Deriv_clause_typesContext * /*ctx*/) override { }
  virtual void exitDeriv_clause_types(HaskellParser::Deriv_clause_typesContext * /*ctx*/) override { }

  virtual void enterDecl_no_th(HaskellParser::Decl_no_thContext * /*ctx*/) override { }
  virtual void exitDecl_no_th(HaskellParser::Decl_no_thContext * /*ctx*/) override { }

  virtual void enterDecl(HaskellParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(HaskellParser::DeclContext * /*ctx*/) override { }

  virtual void enterRhs(HaskellParser::RhsContext * /*ctx*/) override { }
  virtual void exitRhs(HaskellParser::RhsContext * /*ctx*/) override { }

  virtual void enterGdrhs(HaskellParser::GdrhsContext * /*ctx*/) override { }
  virtual void exitGdrhs(HaskellParser::GdrhsContext * /*ctx*/) override { }

  virtual void enterGdrh(HaskellParser::GdrhContext * /*ctx*/) override { }
  virtual void exitGdrh(HaskellParser::GdrhContext * /*ctx*/) override { }

  virtual void enterSigdecl(HaskellParser::SigdeclContext * /*ctx*/) override { }
  virtual void exitSigdecl(HaskellParser::SigdeclContext * /*ctx*/) override { }

  virtual void enterActivation(HaskellParser::ActivationContext * /*ctx*/) override { }
  virtual void exitActivation(HaskellParser::ActivationContext * /*ctx*/) override { }

  virtual void enterTh_quasiquote(HaskellParser::Th_quasiquoteContext * /*ctx*/) override { }
  virtual void exitTh_quasiquote(HaskellParser::Th_quasiquoteContext * /*ctx*/) override { }

  virtual void enterTh_qquasiquote(HaskellParser::Th_qquasiquoteContext * /*ctx*/) override { }
  virtual void exitTh_qquasiquote(HaskellParser::Th_qquasiquoteContext * /*ctx*/) override { }

  virtual void enterQuasiquote(HaskellParser::QuasiquoteContext * /*ctx*/) override { }
  virtual void exitQuasiquote(HaskellParser::QuasiquoteContext * /*ctx*/) override { }

  virtual void enterExp(HaskellParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(HaskellParser::ExpContext * /*ctx*/) override { }

  virtual void enterInfixexp(HaskellParser::InfixexpContext * /*ctx*/) override { }
  virtual void exitInfixexp(HaskellParser::InfixexpContext * /*ctx*/) override { }

  virtual void enterExp10p(HaskellParser::Exp10pContext * /*ctx*/) override { }
  virtual void exitExp10p(HaskellParser::Exp10pContext * /*ctx*/) override { }

  virtual void enterExp10(HaskellParser::Exp10Context * /*ctx*/) override { }
  virtual void exitExp10(HaskellParser::Exp10Context * /*ctx*/) override { }

  virtual void enterFexp(HaskellParser::FexpContext * /*ctx*/) override { }
  virtual void exitFexp(HaskellParser::FexpContext * /*ctx*/) override { }

  virtual void enterAexp(HaskellParser::AexpContext * /*ctx*/) override { }
  virtual void exitAexp(HaskellParser::AexpContext * /*ctx*/) override { }

  virtual void enterAexp1(HaskellParser::Aexp1Context * /*ctx*/) override { }
  virtual void exitAexp1(HaskellParser::Aexp1Context * /*ctx*/) override { }

  virtual void enterAexp2(HaskellParser::Aexp2Context * /*ctx*/) override { }
  virtual void exitAexp2(HaskellParser::Aexp2Context * /*ctx*/) override { }

  virtual void enterSplice_exp(HaskellParser::Splice_expContext * /*ctx*/) override { }
  virtual void exitSplice_exp(HaskellParser::Splice_expContext * /*ctx*/) override { }

  virtual void enterSplice_untyped(HaskellParser::Splice_untypedContext * /*ctx*/) override { }
  virtual void exitSplice_untyped(HaskellParser::Splice_untypedContext * /*ctx*/) override { }

  virtual void enterSplice_typed(HaskellParser::Splice_typedContext * /*ctx*/) override { }
  virtual void exitSplice_typed(HaskellParser::Splice_typedContext * /*ctx*/) override { }

  virtual void enterCmdargs(HaskellParser::CmdargsContext * /*ctx*/) override { }
  virtual void exitCmdargs(HaskellParser::CmdargsContext * /*ctx*/) override { }

  virtual void enterAcmd(HaskellParser::AcmdContext * /*ctx*/) override { }
  virtual void exitAcmd(HaskellParser::AcmdContext * /*ctx*/) override { }

  virtual void enterCvtopbody(HaskellParser::CvtopbodyContext * /*ctx*/) override { }
  virtual void exitCvtopbody(HaskellParser::CvtopbodyContext * /*ctx*/) override { }

  virtual void enterCvtopdecls0(HaskellParser::Cvtopdecls0Context * /*ctx*/) override { }
  virtual void exitCvtopdecls0(HaskellParser::Cvtopdecls0Context * /*ctx*/) override { }

  virtual void enterTexp(HaskellParser::TexpContext * /*ctx*/) override { }
  virtual void exitTexp(HaskellParser::TexpContext * /*ctx*/) override { }

  virtual void enterTup_exprs(HaskellParser::Tup_exprsContext * /*ctx*/) override { }
  virtual void exitTup_exprs(HaskellParser::Tup_exprsContext * /*ctx*/) override { }

  virtual void enterCommas_tup_tail(HaskellParser::Commas_tup_tailContext * /*ctx*/) override { }
  virtual void exitCommas_tup_tail(HaskellParser::Commas_tup_tailContext * /*ctx*/) override { }

  virtual void enterTup_tail(HaskellParser::Tup_tailContext * /*ctx*/) override { }
  virtual void exitTup_tail(HaskellParser::Tup_tailContext * /*ctx*/) override { }

  virtual void enterList_(HaskellParser::List_Context * /*ctx*/) override { }
  virtual void exitList_(HaskellParser::List_Context * /*ctx*/) override { }

  virtual void enterLexps(HaskellParser::LexpsContext * /*ctx*/) override { }
  virtual void exitLexps(HaskellParser::LexpsContext * /*ctx*/) override { }

  virtual void enterFlattenedpquals(HaskellParser::FlattenedpqualsContext * /*ctx*/) override { }
  virtual void exitFlattenedpquals(HaskellParser::FlattenedpqualsContext * /*ctx*/) override { }

  virtual void enterPquals(HaskellParser::PqualsContext * /*ctx*/) override { }
  virtual void exitPquals(HaskellParser::PqualsContext * /*ctx*/) override { }

  virtual void enterSquals(HaskellParser::SqualsContext * /*ctx*/) override { }
  virtual void exitSquals(HaskellParser::SqualsContext * /*ctx*/) override { }

  virtual void enterTransformqual(HaskellParser::TransformqualContext * /*ctx*/) override { }
  virtual void exitTransformqual(HaskellParser::TransformqualContext * /*ctx*/) override { }

  virtual void enterGuards(HaskellParser::GuardsContext * /*ctx*/) override { }
  virtual void exitGuards(HaskellParser::GuardsContext * /*ctx*/) override { }

  virtual void enterGuard_(HaskellParser::Guard_Context * /*ctx*/) override { }
  virtual void exitGuard_(HaskellParser::Guard_Context * /*ctx*/) override { }

  virtual void enterAlts(HaskellParser::AltsContext * /*ctx*/) override { }
  virtual void exitAlts(HaskellParser::AltsContext * /*ctx*/) override { }

  virtual void enterAlt(HaskellParser::AltContext * /*ctx*/) override { }
  virtual void exitAlt(HaskellParser::AltContext * /*ctx*/) override { }

  virtual void enterAlt_rhs(HaskellParser::Alt_rhsContext * /*ctx*/) override { }
  virtual void exitAlt_rhs(HaskellParser::Alt_rhsContext * /*ctx*/) override { }

  virtual void enterRalt(HaskellParser::RaltContext * /*ctx*/) override { }
  virtual void exitRalt(HaskellParser::RaltContext * /*ctx*/) override { }

  virtual void enterGdpats(HaskellParser::GdpatsContext * /*ctx*/) override { }
  virtual void exitGdpats(HaskellParser::GdpatsContext * /*ctx*/) override { }

  virtual void enterIfgdpats(HaskellParser::IfgdpatsContext * /*ctx*/) override { }
  virtual void exitIfgdpats(HaskellParser::IfgdpatsContext * /*ctx*/) override { }

  virtual void enterGdpat(HaskellParser::GdpatContext * /*ctx*/) override { }
  virtual void exitGdpat(HaskellParser::GdpatContext * /*ctx*/) override { }

  virtual void enterPat(HaskellParser::PatContext * /*ctx*/) override { }
  virtual void exitPat(HaskellParser::PatContext * /*ctx*/) override { }

  virtual void enterBindpat(HaskellParser::BindpatContext * /*ctx*/) override { }
  virtual void exitBindpat(HaskellParser::BindpatContext * /*ctx*/) override { }

  virtual void enterApat(HaskellParser::ApatContext * /*ctx*/) override { }
  virtual void exitApat(HaskellParser::ApatContext * /*ctx*/) override { }

  virtual void enterApats(HaskellParser::ApatsContext * /*ctx*/) override { }
  virtual void exitApats(HaskellParser::ApatsContext * /*ctx*/) override { }

  virtual void enterFpat(HaskellParser::FpatContext * /*ctx*/) override { }
  virtual void exitFpat(HaskellParser::FpatContext * /*ctx*/) override { }

  virtual void enterStmtlist(HaskellParser::StmtlistContext * /*ctx*/) override { }
  virtual void exitStmtlist(HaskellParser::StmtlistContext * /*ctx*/) override { }

  virtual void enterStmts(HaskellParser::StmtsContext * /*ctx*/) override { }
  virtual void exitStmts(HaskellParser::StmtsContext * /*ctx*/) override { }

  virtual void enterStmt(HaskellParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(HaskellParser::StmtContext * /*ctx*/) override { }

  virtual void enterQual(HaskellParser::QualContext * /*ctx*/) override { }
  virtual void exitQual(HaskellParser::QualContext * /*ctx*/) override { }

  virtual void enterFbinds(HaskellParser::FbindsContext * /*ctx*/) override { }
  virtual void exitFbinds(HaskellParser::FbindsContext * /*ctx*/) override { }

  virtual void enterFbind(HaskellParser::FbindContext * /*ctx*/) override { }
  virtual void exitFbind(HaskellParser::FbindContext * /*ctx*/) override { }

  virtual void enterDbinds(HaskellParser::DbindsContext * /*ctx*/) override { }
  virtual void exitDbinds(HaskellParser::DbindsContext * /*ctx*/) override { }

  virtual void enterDbind(HaskellParser::DbindContext * /*ctx*/) override { }
  virtual void exitDbind(HaskellParser::DbindContext * /*ctx*/) override { }

  virtual void enterName_boolformula_opt(HaskellParser::Name_boolformula_optContext * /*ctx*/) override { }
  virtual void exitName_boolformula_opt(HaskellParser::Name_boolformula_optContext * /*ctx*/) override { }

  virtual void enterName_boolformula_and(HaskellParser::Name_boolformula_andContext * /*ctx*/) override { }
  virtual void exitName_boolformula_and(HaskellParser::Name_boolformula_andContext * /*ctx*/) override { }

  virtual void enterName_boolformula_and_list(HaskellParser::Name_boolformula_and_listContext * /*ctx*/) override { }
  virtual void exitName_boolformula_and_list(HaskellParser::Name_boolformula_and_listContext * /*ctx*/) override { }

  virtual void enterName_boolformula_atom(HaskellParser::Name_boolformula_atomContext * /*ctx*/) override { }
  virtual void exitName_boolformula_atom(HaskellParser::Name_boolformula_atomContext * /*ctx*/) override { }

  virtual void enterNamelist(HaskellParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(HaskellParser::NamelistContext * /*ctx*/) override { }

  virtual void enterName_var(HaskellParser::Name_varContext * /*ctx*/) override { }
  virtual void exitName_var(HaskellParser::Name_varContext * /*ctx*/) override { }

  virtual void enterQcon_nowiredlist(HaskellParser::Qcon_nowiredlistContext * /*ctx*/) override { }
  virtual void exitQcon_nowiredlist(HaskellParser::Qcon_nowiredlistContext * /*ctx*/) override { }

  virtual void enterQcon(HaskellParser::QconContext * /*ctx*/) override { }
  virtual void exitQcon(HaskellParser::QconContext * /*ctx*/) override { }

  virtual void enterGen_qcon(HaskellParser::Gen_qconContext * /*ctx*/) override { }
  virtual void exitGen_qcon(HaskellParser::Gen_qconContext * /*ctx*/) override { }

  virtual void enterCon(HaskellParser::ConContext * /*ctx*/) override { }
  virtual void exitCon(HaskellParser::ConContext * /*ctx*/) override { }

  virtual void enterCon_list(HaskellParser::Con_listContext * /*ctx*/) override { }
  virtual void exitCon_list(HaskellParser::Con_listContext * /*ctx*/) override { }

  virtual void enterSysdcon_nolist(HaskellParser::Sysdcon_nolistContext * /*ctx*/) override { }
  virtual void exitSysdcon_nolist(HaskellParser::Sysdcon_nolistContext * /*ctx*/) override { }

  virtual void enterSysdcon(HaskellParser::SysdconContext * /*ctx*/) override { }
  virtual void exitSysdcon(HaskellParser::SysdconContext * /*ctx*/) override { }

  virtual void enterConop(HaskellParser::ConopContext * /*ctx*/) override { }
  virtual void exitConop(HaskellParser::ConopContext * /*ctx*/) override { }

  virtual void enterQconop(HaskellParser::QconopContext * /*ctx*/) override { }
  virtual void exitQconop(HaskellParser::QconopContext * /*ctx*/) override { }

  virtual void enterGconsym(HaskellParser::GconsymContext * /*ctx*/) override { }
  virtual void exitGconsym(HaskellParser::GconsymContext * /*ctx*/) override { }

  virtual void enterGtycon(HaskellParser::GtyconContext * /*ctx*/) override { }
  virtual void exitGtycon(HaskellParser::GtyconContext * /*ctx*/) override { }

  virtual void enterNtgtycon(HaskellParser::NtgtyconContext * /*ctx*/) override { }
  virtual void exitNtgtycon(HaskellParser::NtgtyconContext * /*ctx*/) override { }

  virtual void enterOqtycon(HaskellParser::OqtyconContext * /*ctx*/) override { }
  virtual void exitOqtycon(HaskellParser::OqtyconContext * /*ctx*/) override { }

  virtual void enterQtyconop(HaskellParser::QtyconopContext * /*ctx*/) override { }
  virtual void exitQtyconop(HaskellParser::QtyconopContext * /*ctx*/) override { }

  virtual void enterQtycon(HaskellParser::QtyconContext * /*ctx*/) override { }
  virtual void exitQtycon(HaskellParser::QtyconContext * /*ctx*/) override { }

  virtual void enterTycon(HaskellParser::TyconContext * /*ctx*/) override { }
  virtual void exitTycon(HaskellParser::TyconContext * /*ctx*/) override { }

  virtual void enterQtyconsym(HaskellParser::QtyconsymContext * /*ctx*/) override { }
  virtual void exitQtyconsym(HaskellParser::QtyconsymContext * /*ctx*/) override { }

  virtual void enterTyconsym(HaskellParser::TyconsymContext * /*ctx*/) override { }
  virtual void exitTyconsym(HaskellParser::TyconsymContext * /*ctx*/) override { }

  virtual void enterOp(HaskellParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(HaskellParser::OpContext * /*ctx*/) override { }

  virtual void enterVarop(HaskellParser::VaropContext * /*ctx*/) override { }
  virtual void exitVarop(HaskellParser::VaropContext * /*ctx*/) override { }

  virtual void enterQop(HaskellParser::QopContext * /*ctx*/) override { }
  virtual void exitQop(HaskellParser::QopContext * /*ctx*/) override { }

  virtual void enterQopm(HaskellParser::QopmContext * /*ctx*/) override { }
  virtual void exitQopm(HaskellParser::QopmContext * /*ctx*/) override { }

  virtual void enterHole_op(HaskellParser::Hole_opContext * /*ctx*/) override { }
  virtual void exitHole_op(HaskellParser::Hole_opContext * /*ctx*/) override { }

  virtual void enterQvarop(HaskellParser::QvaropContext * /*ctx*/) override { }
  virtual void exitQvarop(HaskellParser::QvaropContext * /*ctx*/) override { }

  virtual void enterQvaropm(HaskellParser::QvaropmContext * /*ctx*/) override { }
  virtual void exitQvaropm(HaskellParser::QvaropmContext * /*ctx*/) override { }

  virtual void enterTyvar(HaskellParser::TyvarContext * /*ctx*/) override { }
  virtual void exitTyvar(HaskellParser::TyvarContext * /*ctx*/) override { }

  virtual void enterTyvarop(HaskellParser::TyvaropContext * /*ctx*/) override { }
  virtual void exitTyvarop(HaskellParser::TyvaropContext * /*ctx*/) override { }

  virtual void enterTyvarid(HaskellParser::TyvaridContext * /*ctx*/) override { }
  virtual void exitTyvarid(HaskellParser::TyvaridContext * /*ctx*/) override { }

  virtual void enterTycls(HaskellParser::TyclsContext * /*ctx*/) override { }
  virtual void exitTycls(HaskellParser::TyclsContext * /*ctx*/) override { }

  virtual void enterQtycls(HaskellParser::QtyclsContext * /*ctx*/) override { }
  virtual void exitQtycls(HaskellParser::QtyclsContext * /*ctx*/) override { }

  virtual void enterVar_(HaskellParser::Var_Context * /*ctx*/) override { }
  virtual void exitVar_(HaskellParser::Var_Context * /*ctx*/) override { }

  virtual void enterQvar(HaskellParser::QvarContext * /*ctx*/) override { }
  virtual void exitQvar(HaskellParser::QvarContext * /*ctx*/) override { }

  virtual void enterQvarid(HaskellParser::QvaridContext * /*ctx*/) override { }
  virtual void exitQvarid(HaskellParser::QvaridContext * /*ctx*/) override { }

  virtual void enterVarid(HaskellParser::VaridContext * /*ctx*/) override { }
  virtual void exitVarid(HaskellParser::VaridContext * /*ctx*/) override { }

  virtual void enterQvarsym(HaskellParser::QvarsymContext * /*ctx*/) override { }
  virtual void exitQvarsym(HaskellParser::QvarsymContext * /*ctx*/) override { }

  virtual void enterQvarsym_no_minus(HaskellParser::Qvarsym_no_minusContext * /*ctx*/) override { }
  virtual void exitQvarsym_no_minus(HaskellParser::Qvarsym_no_minusContext * /*ctx*/) override { }

  virtual void enterVarsym(HaskellParser::VarsymContext * /*ctx*/) override { }
  virtual void exitVarsym(HaskellParser::VarsymContext * /*ctx*/) override { }

  virtual void enterVarsym_no_minus(HaskellParser::Varsym_no_minusContext * /*ctx*/) override { }
  virtual void exitVarsym_no_minus(HaskellParser::Varsym_no_minusContext * /*ctx*/) override { }

  virtual void enterSpecial_id(HaskellParser::Special_idContext * /*ctx*/) override { }
  virtual void exitSpecial_id(HaskellParser::Special_idContext * /*ctx*/) override { }

  virtual void enterQconid(HaskellParser::QconidContext * /*ctx*/) override { }
  virtual void exitQconid(HaskellParser::QconidContext * /*ctx*/) override { }

  virtual void enterConid(HaskellParser::ConidContext * /*ctx*/) override { }
  virtual void exitConid(HaskellParser::ConidContext * /*ctx*/) override { }

  virtual void enterQconsym(HaskellParser::QconsymContext * /*ctx*/) override { }
  virtual void exitQconsym(HaskellParser::QconsymContext * /*ctx*/) override { }

  virtual void enterConsym(HaskellParser::ConsymContext * /*ctx*/) override { }
  virtual void exitConsym(HaskellParser::ConsymContext * /*ctx*/) override { }

  virtual void enterLiteral(HaskellParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(HaskellParser::LiteralContext * /*ctx*/) override { }

  virtual void enterOpen_(HaskellParser::Open_Context * /*ctx*/) override { }
  virtual void exitOpen_(HaskellParser::Open_Context * /*ctx*/) override { }

  virtual void enterClose(HaskellParser::CloseContext * /*ctx*/) override { }
  virtual void exitClose(HaskellParser::CloseContext * /*ctx*/) override { }

  virtual void enterSemi(HaskellParser::SemiContext * /*ctx*/) override { }
  virtual void exitSemi(HaskellParser::SemiContext * /*ctx*/) override { }

  virtual void enterModid(HaskellParser::ModidContext * /*ctx*/) override { }
  virtual void exitModid(HaskellParser::ModidContext * /*ctx*/) override { }

  virtual void enterCommas(HaskellParser::CommasContext * /*ctx*/) override { }
  virtual void exitCommas(HaskellParser::CommasContext * /*ctx*/) override { }

  virtual void enterBars(HaskellParser::BarsContext * /*ctx*/) override { }
  virtual void exitBars(HaskellParser::BarsContext * /*ctx*/) override { }

  virtual void enterSpecial(HaskellParser::SpecialContext * /*ctx*/) override { }
  virtual void exitSpecial(HaskellParser::SpecialContext * /*ctx*/) override { }

  virtual void enterSymbol(HaskellParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(HaskellParser::SymbolContext * /*ctx*/) override { }

  virtual void enterAscSymbol(HaskellParser::AscSymbolContext * /*ctx*/) override { }
  virtual void exitAscSymbol(HaskellParser::AscSymbolContext * /*ctx*/) override { }

  virtual void enterInteger(HaskellParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(HaskellParser::IntegerContext * /*ctx*/) override { }

  virtual void enterPfloat(HaskellParser::PfloatContext * /*ctx*/) override { }
  virtual void exitPfloat(HaskellParser::PfloatContext * /*ctx*/) override { }

  virtual void enterPchar(HaskellParser::PcharContext * /*ctx*/) override { }
  virtual void exitPchar(HaskellParser::PcharContext * /*ctx*/) override { }

  virtual void enterPstring(HaskellParser::PstringContext * /*ctx*/) override { }
  virtual void exitPstring(HaskellParser::PstringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

