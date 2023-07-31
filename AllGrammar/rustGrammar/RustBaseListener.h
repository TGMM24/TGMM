
// Generated from Rust.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RustListener.h"


/**
 * This class provides an empty implementation of RustListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RustBaseListener : public RustListener {
public:

  virtual void enterCrate(RustParser::CrateContext * /*ctx*/) override { }
  virtual void exitCrate(RustParser::CrateContext * /*ctx*/) override { }

  virtual void enterMod_body(RustParser::Mod_bodyContext * /*ctx*/) override { }
  virtual void exitMod_body(RustParser::Mod_bodyContext * /*ctx*/) override { }

  virtual void enterVisibility(RustParser::VisibilityContext * /*ctx*/) override { }
  virtual void exitVisibility(RustParser::VisibilityContext * /*ctx*/) override { }

  virtual void enterVisibility_restriction(RustParser::Visibility_restrictionContext * /*ctx*/) override { }
  virtual void exitVisibility_restriction(RustParser::Visibility_restrictionContext * /*ctx*/) override { }

  virtual void enterItem(RustParser::ItemContext * /*ctx*/) override { }
  virtual void exitItem(RustParser::ItemContext * /*ctx*/) override { }

  virtual void enterPub_item(RustParser::Pub_itemContext * /*ctx*/) override { }
  virtual void exitPub_item(RustParser::Pub_itemContext * /*ctx*/) override { }

  virtual void enterItem_macro_use(RustParser::Item_macro_useContext * /*ctx*/) override { }
  virtual void exitItem_macro_use(RustParser::Item_macro_useContext * /*ctx*/) override { }

  virtual void enterItem_macro_path(RustParser::Item_macro_pathContext * /*ctx*/) override { }
  virtual void exitItem_macro_path(RustParser::Item_macro_pathContext * /*ctx*/) override { }

  virtual void enterItem_macro_path_parent(RustParser::Item_macro_path_parentContext * /*ctx*/) override { }
  virtual void exitItem_macro_path_parent(RustParser::Item_macro_path_parentContext * /*ctx*/) override { }

  virtual void enterItem_macro_path_segment(RustParser::Item_macro_path_segmentContext * /*ctx*/) override { }
  virtual void exitItem_macro_path_segment(RustParser::Item_macro_path_segmentContext * /*ctx*/) override { }

  virtual void enterItem_macro_tail(RustParser::Item_macro_tailContext * /*ctx*/) override { }
  virtual void exitItem_macro_tail(RustParser::Item_macro_tailContext * /*ctx*/) override { }

  virtual void enterExtern_crate(RustParser::Extern_crateContext * /*ctx*/) override { }
  virtual void exitExtern_crate(RustParser::Extern_crateContext * /*ctx*/) override { }

  virtual void enterUse_decl(RustParser::Use_declContext * /*ctx*/) override { }
  virtual void exitUse_decl(RustParser::Use_declContext * /*ctx*/) override { }

  virtual void enterUse_path(RustParser::Use_pathContext * /*ctx*/) override { }
  virtual void exitUse_path(RustParser::Use_pathContext * /*ctx*/) override { }

  virtual void enterUse_suffix(RustParser::Use_suffixContext * /*ctx*/) override { }
  virtual void exitUse_suffix(RustParser::Use_suffixContext * /*ctx*/) override { }

  virtual void enterUse_item(RustParser::Use_itemContext * /*ctx*/) override { }
  virtual void exitUse_item(RustParser::Use_itemContext * /*ctx*/) override { }

  virtual void enterUse_item_list(RustParser::Use_item_listContext * /*ctx*/) override { }
  virtual void exitUse_item_list(RustParser::Use_item_listContext * /*ctx*/) override { }

  virtual void enterRename(RustParser::RenameContext * /*ctx*/) override { }
  virtual void exitRename(RustParser::RenameContext * /*ctx*/) override { }

  virtual void enterMod_decl_short(RustParser::Mod_decl_shortContext * /*ctx*/) override { }
  virtual void exitMod_decl_short(RustParser::Mod_decl_shortContext * /*ctx*/) override { }

  virtual void enterMod_decl(RustParser::Mod_declContext * /*ctx*/) override { }
  virtual void exitMod_decl(RustParser::Mod_declContext * /*ctx*/) override { }

  virtual void enterExtern_mod(RustParser::Extern_modContext * /*ctx*/) override { }
  virtual void exitExtern_mod(RustParser::Extern_modContext * /*ctx*/) override { }

  virtual void enterForeign_item(RustParser::Foreign_itemContext * /*ctx*/) override { }
  virtual void exitForeign_item(RustParser::Foreign_itemContext * /*ctx*/) override { }

  virtual void enterForeign_item_tail(RustParser::Foreign_item_tailContext * /*ctx*/) override { }
  virtual void exitForeign_item_tail(RustParser::Foreign_item_tailContext * /*ctx*/) override { }

  virtual void enterStatic_decl(RustParser::Static_declContext * /*ctx*/) override { }
  virtual void exitStatic_decl(RustParser::Static_declContext * /*ctx*/) override { }

  virtual void enterConst_decl(RustParser::Const_declContext * /*ctx*/) override { }
  virtual void exitConst_decl(RustParser::Const_declContext * /*ctx*/) override { }

  virtual void enterFn_decl(RustParser::Fn_declContext * /*ctx*/) override { }
  virtual void exitFn_decl(RustParser::Fn_declContext * /*ctx*/) override { }

  virtual void enterMethod_decl(RustParser::Method_declContext * /*ctx*/) override { }
  virtual void exitMethod_decl(RustParser::Method_declContext * /*ctx*/) override { }

  virtual void enterTrait_method_decl(RustParser::Trait_method_declContext * /*ctx*/) override { }
  virtual void exitTrait_method_decl(RustParser::Trait_method_declContext * /*ctx*/) override { }

  virtual void enterForeign_fn_decl(RustParser::Foreign_fn_declContext * /*ctx*/) override { }
  virtual void exitForeign_fn_decl(RustParser::Foreign_fn_declContext * /*ctx*/) override { }

  virtual void enterFn_head(RustParser::Fn_headContext * /*ctx*/) override { }
  virtual void exitFn_head(RustParser::Fn_headContext * /*ctx*/) override { }

  virtual void enterParam(RustParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(RustParser::ParamContext * /*ctx*/) override { }

  virtual void enterParam_ty(RustParser::Param_tyContext * /*ctx*/) override { }
  virtual void exitParam_ty(RustParser::Param_tyContext * /*ctx*/) override { }

  virtual void enterParam_list(RustParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(RustParser::Param_listContext * /*ctx*/) override { }

  virtual void enterVariadic_param_list(RustParser::Variadic_param_listContext * /*ctx*/) override { }
  virtual void exitVariadic_param_list(RustParser::Variadic_param_listContext * /*ctx*/) override { }

  virtual void enterVariadic_param_list_names_optional(RustParser::Variadic_param_list_names_optionalContext * /*ctx*/) override { }
  virtual void exitVariadic_param_list_names_optional(RustParser::Variadic_param_list_names_optionalContext * /*ctx*/) override { }

  virtual void enterSelf_param(RustParser::Self_paramContext * /*ctx*/) override { }
  virtual void exitSelf_param(RustParser::Self_paramContext * /*ctx*/) override { }

  virtual void enterMethod_param_list(RustParser::Method_param_listContext * /*ctx*/) override { }
  virtual void exitMethod_param_list(RustParser::Method_param_listContext * /*ctx*/) override { }

  virtual void enterTrait_method_param(RustParser::Trait_method_paramContext * /*ctx*/) override { }
  virtual void exitTrait_method_param(RustParser::Trait_method_paramContext * /*ctx*/) override { }

  virtual void enterRestricted_pat(RustParser::Restricted_patContext * /*ctx*/) override { }
  virtual void exitRestricted_pat(RustParser::Restricted_patContext * /*ctx*/) override { }

  virtual void enterTrait_method_param_list(RustParser::Trait_method_param_listContext * /*ctx*/) override { }
  virtual void exitTrait_method_param_list(RustParser::Trait_method_param_listContext * /*ctx*/) override { }

  virtual void enterRtype(RustParser::RtypeContext * /*ctx*/) override { }
  virtual void exitRtype(RustParser::RtypeContext * /*ctx*/) override { }

  virtual void enterFn_rtype(RustParser::Fn_rtypeContext * /*ctx*/) override { }
  virtual void exitFn_rtype(RustParser::Fn_rtypeContext * /*ctx*/) override { }

  virtual void enterType_decl(RustParser::Type_declContext * /*ctx*/) override { }
  virtual void exitType_decl(RustParser::Type_declContext * /*ctx*/) override { }

  virtual void enterStruct_decl(RustParser::Struct_declContext * /*ctx*/) override { }
  virtual void exitStruct_decl(RustParser::Struct_declContext * /*ctx*/) override { }

  virtual void enterStruct_tail(RustParser::Struct_tailContext * /*ctx*/) override { }
  virtual void exitStruct_tail(RustParser::Struct_tailContext * /*ctx*/) override { }

  virtual void enterTuple_struct_field(RustParser::Tuple_struct_fieldContext * /*ctx*/) override { }
  virtual void exitTuple_struct_field(RustParser::Tuple_struct_fieldContext * /*ctx*/) override { }

  virtual void enterTuple_struct_field_list(RustParser::Tuple_struct_field_listContext * /*ctx*/) override { }
  virtual void exitTuple_struct_field_list(RustParser::Tuple_struct_field_listContext * /*ctx*/) override { }

  virtual void enterField_decl(RustParser::Field_declContext * /*ctx*/) override { }
  virtual void exitField_decl(RustParser::Field_declContext * /*ctx*/) override { }

  virtual void enterField_decl_list(RustParser::Field_decl_listContext * /*ctx*/) override { }
  virtual void exitField_decl_list(RustParser::Field_decl_listContext * /*ctx*/) override { }

  virtual void enterEnum_decl(RustParser::Enum_declContext * /*ctx*/) override { }
  virtual void exitEnum_decl(RustParser::Enum_declContext * /*ctx*/) override { }

  virtual void enterEnum_variant(RustParser::Enum_variantContext * /*ctx*/) override { }
  virtual void exitEnum_variant(RustParser::Enum_variantContext * /*ctx*/) override { }

  virtual void enterEnum_variant_list(RustParser::Enum_variant_listContext * /*ctx*/) override { }
  virtual void exitEnum_variant_list(RustParser::Enum_variant_listContext * /*ctx*/) override { }

  virtual void enterEnum_variant_main(RustParser::Enum_variant_mainContext * /*ctx*/) override { }
  virtual void exitEnum_variant_main(RustParser::Enum_variant_mainContext * /*ctx*/) override { }

  virtual void enterEnum_tuple_field(RustParser::Enum_tuple_fieldContext * /*ctx*/) override { }
  virtual void exitEnum_tuple_field(RustParser::Enum_tuple_fieldContext * /*ctx*/) override { }

  virtual void enterEnum_tuple_field_list(RustParser::Enum_tuple_field_listContext * /*ctx*/) override { }
  virtual void exitEnum_tuple_field_list(RustParser::Enum_tuple_field_listContext * /*ctx*/) override { }

  virtual void enterEnum_field_decl(RustParser::Enum_field_declContext * /*ctx*/) override { }
  virtual void exitEnum_field_decl(RustParser::Enum_field_declContext * /*ctx*/) override { }

  virtual void enterEnum_field_decl_list(RustParser::Enum_field_decl_listContext * /*ctx*/) override { }
  virtual void exitEnum_field_decl_list(RustParser::Enum_field_decl_listContext * /*ctx*/) override { }

  virtual void enterUnion_decl(RustParser::Union_declContext * /*ctx*/) override { }
  virtual void exitUnion_decl(RustParser::Union_declContext * /*ctx*/) override { }

  virtual void enterTrait_decl(RustParser::Trait_declContext * /*ctx*/) override { }
  virtual void exitTrait_decl(RustParser::Trait_declContext * /*ctx*/) override { }

  virtual void enterTrait_item(RustParser::Trait_itemContext * /*ctx*/) override { }
  virtual void exitTrait_item(RustParser::Trait_itemContext * /*ctx*/) override { }

  virtual void enterTy_default(RustParser::Ty_defaultContext * /*ctx*/) override { }
  virtual void exitTy_default(RustParser::Ty_defaultContext * /*ctx*/) override { }

  virtual void enterConst_default(RustParser::Const_defaultContext * /*ctx*/) override { }
  virtual void exitConst_default(RustParser::Const_defaultContext * /*ctx*/) override { }

  virtual void enterImpl_block(RustParser::Impl_blockContext * /*ctx*/) override { }
  virtual void exitImpl_block(RustParser::Impl_blockContext * /*ctx*/) override { }

  virtual void enterImpl_what(RustParser::Impl_whatContext * /*ctx*/) override { }
  virtual void exitImpl_what(RustParser::Impl_whatContext * /*ctx*/) override { }

  virtual void enterImpl_item(RustParser::Impl_itemContext * /*ctx*/) override { }
  virtual void exitImpl_item(RustParser::Impl_itemContext * /*ctx*/) override { }

  virtual void enterImpl_item_tail(RustParser::Impl_item_tailContext * /*ctx*/) override { }
  virtual void exitImpl_item_tail(RustParser::Impl_item_tailContext * /*ctx*/) override { }

  virtual void enterAttr(RustParser::AttrContext * /*ctx*/) override { }
  virtual void exitAttr(RustParser::AttrContext * /*ctx*/) override { }

  virtual void enterInner_attr(RustParser::Inner_attrContext * /*ctx*/) override { }
  virtual void exitInner_attr(RustParser::Inner_attrContext * /*ctx*/) override { }

  virtual void enterTt(RustParser::TtContext * /*ctx*/) override { }
  virtual void exitTt(RustParser::TtContext * /*ctx*/) override { }

  virtual void enterTt_delimited(RustParser::Tt_delimitedContext * /*ctx*/) override { }
  virtual void exitTt_delimited(RustParser::Tt_delimitedContext * /*ctx*/) override { }

  virtual void enterTt_parens(RustParser::Tt_parensContext * /*ctx*/) override { }
  virtual void exitTt_parens(RustParser::Tt_parensContext * /*ctx*/) override { }

  virtual void enterTt_brackets(RustParser::Tt_bracketsContext * /*ctx*/) override { }
  virtual void exitTt_brackets(RustParser::Tt_bracketsContext * /*ctx*/) override { }

  virtual void enterTt_block(RustParser::Tt_blockContext * /*ctx*/) override { }
  virtual void exitTt_block(RustParser::Tt_blockContext * /*ctx*/) override { }

  virtual void enterMacro_tail(RustParser::Macro_tailContext * /*ctx*/) override { }
  virtual void exitMacro_tail(RustParser::Macro_tailContext * /*ctx*/) override { }

  virtual void enterPath(RustParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(RustParser::PathContext * /*ctx*/) override { }

  virtual void enterPath_parent(RustParser::Path_parentContext * /*ctx*/) override { }
  virtual void exitPath_parent(RustParser::Path_parentContext * /*ctx*/) override { }

  virtual void enterAs_trait(RustParser::As_traitContext * /*ctx*/) override { }
  virtual void exitAs_trait(RustParser::As_traitContext * /*ctx*/) override { }

  virtual void enterPath_segment(RustParser::Path_segmentContext * /*ctx*/) override { }
  virtual void exitPath_segment(RustParser::Path_segmentContext * /*ctx*/) override { }

  virtual void enterPath_segment_no_super(RustParser::Path_segment_no_superContext * /*ctx*/) override { }
  virtual void exitPath_segment_no_super(RustParser::Path_segment_no_superContext * /*ctx*/) override { }

  virtual void enterSimple_path_segment(RustParser::Simple_path_segmentContext * /*ctx*/) override { }
  virtual void exitSimple_path_segment(RustParser::Simple_path_segmentContext * /*ctx*/) override { }

  virtual void enterTy_path(RustParser::Ty_pathContext * /*ctx*/) override { }
  virtual void exitTy_path(RustParser::Ty_pathContext * /*ctx*/) override { }

  virtual void enterFor_lifetime(RustParser::For_lifetimeContext * /*ctx*/) override { }
  virtual void exitFor_lifetime(RustParser::For_lifetimeContext * /*ctx*/) override { }

  virtual void enterLifetime_def_list(RustParser::Lifetime_def_listContext * /*ctx*/) override { }
  virtual void exitLifetime_def_list(RustParser::Lifetime_def_listContext * /*ctx*/) override { }

  virtual void enterLifetime_def(RustParser::Lifetime_defContext * /*ctx*/) override { }
  virtual void exitLifetime_def(RustParser::Lifetime_defContext * /*ctx*/) override { }

  virtual void enterLifetime_bound(RustParser::Lifetime_boundContext * /*ctx*/) override { }
  virtual void exitLifetime_bound(RustParser::Lifetime_boundContext * /*ctx*/) override { }

  virtual void enterTy_path_main(RustParser::Ty_path_mainContext * /*ctx*/) override { }
  virtual void exitTy_path_main(RustParser::Ty_path_mainContext * /*ctx*/) override { }

  virtual void enterTy_path_tail(RustParser::Ty_path_tailContext * /*ctx*/) override { }
  virtual void exitTy_path_tail(RustParser::Ty_path_tailContext * /*ctx*/) override { }

  virtual void enterTy_path_parent(RustParser::Ty_path_parentContext * /*ctx*/) override { }
  virtual void exitTy_path_parent(RustParser::Ty_path_parentContext * /*ctx*/) override { }

  virtual void enterTy_path_segment(RustParser::Ty_path_segmentContext * /*ctx*/) override { }
  virtual void exitTy_path_segment(RustParser::Ty_path_segmentContext * /*ctx*/) override { }

  virtual void enterTy_path_segment_no_super(RustParser::Ty_path_segment_no_superContext * /*ctx*/) override { }
  virtual void exitTy_path_segment_no_super(RustParser::Ty_path_segment_no_superContext * /*ctx*/) override { }

  virtual void enterWhere_clause(RustParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(RustParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_bound_list(RustParser::Where_bound_listContext * /*ctx*/) override { }
  virtual void exitWhere_bound_list(RustParser::Where_bound_listContext * /*ctx*/) override { }

  virtual void enterWhere_bound(RustParser::Where_boundContext * /*ctx*/) override { }
  virtual void exitWhere_bound(RustParser::Where_boundContext * /*ctx*/) override { }

  virtual void enterColon_bound(RustParser::Colon_boundContext * /*ctx*/) override { }
  virtual void exitColon_bound(RustParser::Colon_boundContext * /*ctx*/) override { }

  virtual void enterBound(RustParser::BoundContext * /*ctx*/) override { }
  virtual void exitBound(RustParser::BoundContext * /*ctx*/) override { }

  virtual void enterPrim_bound(RustParser::Prim_boundContext * /*ctx*/) override { }
  virtual void exitPrim_bound(RustParser::Prim_boundContext * /*ctx*/) override { }

  virtual void enterTy(RustParser::TyContext * /*ctx*/) override { }
  virtual void exitTy(RustParser::TyContext * /*ctx*/) override { }

  virtual void enterMut_or_const(RustParser::Mut_or_constContext * /*ctx*/) override { }
  virtual void exitMut_or_const(RustParser::Mut_or_constContext * /*ctx*/) override { }

  virtual void enterExtern_abi(RustParser::Extern_abiContext * /*ctx*/) override { }
  virtual void exitExtern_abi(RustParser::Extern_abiContext * /*ctx*/) override { }

  virtual void enterTy_args(RustParser::Ty_argsContext * /*ctx*/) override { }
  virtual void exitTy_args(RustParser::Ty_argsContext * /*ctx*/) override { }

  virtual void enterLifetime_list(RustParser::Lifetime_listContext * /*ctx*/) override { }
  virtual void exitLifetime_list(RustParser::Lifetime_listContext * /*ctx*/) override { }

  virtual void enterTy_sum(RustParser::Ty_sumContext * /*ctx*/) override { }
  virtual void exitTy_sum(RustParser::Ty_sumContext * /*ctx*/) override { }

  virtual void enterTy_sum_list(RustParser::Ty_sum_listContext * /*ctx*/) override { }
  virtual void exitTy_sum_list(RustParser::Ty_sum_listContext * /*ctx*/) override { }

  virtual void enterTy_arg(RustParser::Ty_argContext * /*ctx*/) override { }
  virtual void exitTy_arg(RustParser::Ty_argContext * /*ctx*/) override { }

  virtual void enterTy_arg_list(RustParser::Ty_arg_listContext * /*ctx*/) override { }
  virtual void exitTy_arg_list(RustParser::Ty_arg_listContext * /*ctx*/) override { }

  virtual void enterTy_params(RustParser::Ty_paramsContext * /*ctx*/) override { }
  virtual void exitTy_params(RustParser::Ty_paramsContext * /*ctx*/) override { }

  virtual void enterLifetime_param(RustParser::Lifetime_paramContext * /*ctx*/) override { }
  virtual void exitLifetime_param(RustParser::Lifetime_paramContext * /*ctx*/) override { }

  virtual void enterLifetime_param_list(RustParser::Lifetime_param_listContext * /*ctx*/) override { }
  virtual void exitLifetime_param_list(RustParser::Lifetime_param_listContext * /*ctx*/) override { }

  virtual void enterTy_param(RustParser::Ty_paramContext * /*ctx*/) override { }
  virtual void exitTy_param(RustParser::Ty_paramContext * /*ctx*/) override { }

  virtual void enterTy_param_list(RustParser::Ty_param_listContext * /*ctx*/) override { }
  virtual void exitTy_param_list(RustParser::Ty_param_listContext * /*ctx*/) override { }

  virtual void enterPat(RustParser::PatContext * /*ctx*/) override { }
  virtual void exitPat(RustParser::PatContext * /*ctx*/) override { }

  virtual void enterPat_no_mut(RustParser::Pat_no_mutContext * /*ctx*/) override { }
  virtual void exitPat_no_mut(RustParser::Pat_no_mutContext * /*ctx*/) override { }

  virtual void enterPat_range_end(RustParser::Pat_range_endContext * /*ctx*/) override { }
  virtual void exitPat_range_end(RustParser::Pat_range_endContext * /*ctx*/) override { }

  virtual void enterPat_lit(RustParser::Pat_litContext * /*ctx*/) override { }
  virtual void exitPat_lit(RustParser::Pat_litContext * /*ctx*/) override { }

  virtual void enterPat_list(RustParser::Pat_listContext * /*ctx*/) override { }
  virtual void exitPat_list(RustParser::Pat_listContext * /*ctx*/) override { }

  virtual void enterPat_list_with_dots(RustParser::Pat_list_with_dotsContext * /*ctx*/) override { }
  virtual void exitPat_list_with_dots(RustParser::Pat_list_with_dotsContext * /*ctx*/) override { }

  virtual void enterPat_list_dots_tail(RustParser::Pat_list_dots_tailContext * /*ctx*/) override { }
  virtual void exitPat_list_dots_tail(RustParser::Pat_list_dots_tailContext * /*ctx*/) override { }

  virtual void enterPat_elt(RustParser::Pat_eltContext * /*ctx*/) override { }
  virtual void exitPat_elt(RustParser::Pat_eltContext * /*ctx*/) override { }

  virtual void enterPat_elt_list(RustParser::Pat_elt_listContext * /*ctx*/) override { }
  virtual void exitPat_elt_list(RustParser::Pat_elt_listContext * /*ctx*/) override { }

  virtual void enterPat_fields(RustParser::Pat_fieldsContext * /*ctx*/) override { }
  virtual void exitPat_fields(RustParser::Pat_fieldsContext * /*ctx*/) override { }

  virtual void enterPat_field(RustParser::Pat_fieldContext * /*ctx*/) override { }
  virtual void exitPat_field(RustParser::Pat_fieldContext * /*ctx*/) override { }

  virtual void enterExpr(RustParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(RustParser::ExprContext * /*ctx*/) override { }

  virtual void enterExpr_no_struct(RustParser::Expr_no_structContext * /*ctx*/) override { }
  virtual void exitExpr_no_struct(RustParser::Expr_no_structContext * /*ctx*/) override { }

  virtual void enterExpr_list(RustParser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(RustParser::Expr_listContext * /*ctx*/) override { }

  virtual void enterBlock(RustParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(RustParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlock_with_inner_attrs(RustParser::Block_with_inner_attrsContext * /*ctx*/) override { }
  virtual void exitBlock_with_inner_attrs(RustParser::Block_with_inner_attrsContext * /*ctx*/) override { }

  virtual void enterStmt(RustParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(RustParser::StmtContext * /*ctx*/) override { }

  virtual void enterStmt_tail(RustParser::Stmt_tailContext * /*ctx*/) override { }
  virtual void exitStmt_tail(RustParser::Stmt_tailContext * /*ctx*/) override { }

  virtual void enterBlocky_expr(RustParser::Blocky_exprContext * /*ctx*/) override { }
  virtual void exitBlocky_expr(RustParser::Blocky_exprContext * /*ctx*/) override { }

  virtual void enterCond_or_pat(RustParser::Cond_or_patContext * /*ctx*/) override { }
  virtual void exitCond_or_pat(RustParser::Cond_or_patContext * /*ctx*/) override { }

  virtual void enterLoop_label(RustParser::Loop_labelContext * /*ctx*/) override { }
  virtual void exitLoop_label(RustParser::Loop_labelContext * /*ctx*/) override { }

  virtual void enterMatch_arms(RustParser::Match_armsContext * /*ctx*/) override { }
  virtual void exitMatch_arms(RustParser::Match_armsContext * /*ctx*/) override { }

  virtual void enterMatch_arm_intro(RustParser::Match_arm_introContext * /*ctx*/) override { }
  virtual void exitMatch_arm_intro(RustParser::Match_arm_introContext * /*ctx*/) override { }

  virtual void enterMatch_pat(RustParser::Match_patContext * /*ctx*/) override { }
  virtual void exitMatch_pat(RustParser::Match_patContext * /*ctx*/) override { }

  virtual void enterMatch_if_clause(RustParser::Match_if_clauseContext * /*ctx*/) override { }
  virtual void exitMatch_if_clause(RustParser::Match_if_clauseContext * /*ctx*/) override { }

  virtual void enterExpr_attrs(RustParser::Expr_attrsContext * /*ctx*/) override { }
  virtual void exitExpr_attrs(RustParser::Expr_attrsContext * /*ctx*/) override { }

  virtual void enterExpr_inner_attrs(RustParser::Expr_inner_attrsContext * /*ctx*/) override { }
  virtual void exitExpr_inner_attrs(RustParser::Expr_inner_attrsContext * /*ctx*/) override { }

  virtual void enterPrim_expr(RustParser::Prim_exprContext * /*ctx*/) override { }
  virtual void exitPrim_expr(RustParser::Prim_exprContext * /*ctx*/) override { }

  virtual void enterPrim_expr_no_struct(RustParser::Prim_expr_no_structContext * /*ctx*/) override { }
  virtual void exitPrim_expr_no_struct(RustParser::Prim_expr_no_structContext * /*ctx*/) override { }

  virtual void enterLit(RustParser::LitContext * /*ctx*/) override { }
  virtual void exitLit(RustParser::LitContext * /*ctx*/) override { }

  virtual void enterClosure_params(RustParser::Closure_paramsContext * /*ctx*/) override { }
  virtual void exitClosure_params(RustParser::Closure_paramsContext * /*ctx*/) override { }

  virtual void enterClosure_param(RustParser::Closure_paramContext * /*ctx*/) override { }
  virtual void exitClosure_param(RustParser::Closure_paramContext * /*ctx*/) override { }

  virtual void enterClosure_param_list(RustParser::Closure_param_listContext * /*ctx*/) override { }
  virtual void exitClosure_param_list(RustParser::Closure_param_listContext * /*ctx*/) override { }

  virtual void enterClosure_tail(RustParser::Closure_tailContext * /*ctx*/) override { }
  virtual void exitClosure_tail(RustParser::Closure_tailContext * /*ctx*/) override { }

  virtual void enterLifetime_or_expr(RustParser::Lifetime_or_exprContext * /*ctx*/) override { }
  virtual void exitLifetime_or_expr(RustParser::Lifetime_or_exprContext * /*ctx*/) override { }

  virtual void enterFields(RustParser::FieldsContext * /*ctx*/) override { }
  virtual void exitFields(RustParser::FieldsContext * /*ctx*/) override { }

  virtual void enterStruct_update_base(RustParser::Struct_update_baseContext * /*ctx*/) override { }
  virtual void exitStruct_update_base(RustParser::Struct_update_baseContext * /*ctx*/) override { }

  virtual void enterField(RustParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(RustParser::FieldContext * /*ctx*/) override { }

  virtual void enterField_name(RustParser::Field_nameContext * /*ctx*/) override { }
  virtual void exitField_name(RustParser::Field_nameContext * /*ctx*/) override { }

  virtual void enterPost_expr(RustParser::Post_exprContext * /*ctx*/) override { }
  virtual void exitPost_expr(RustParser::Post_exprContext * /*ctx*/) override { }

  virtual void enterPost_expr_tail(RustParser::Post_expr_tailContext * /*ctx*/) override { }
  virtual void exitPost_expr_tail(RustParser::Post_expr_tailContext * /*ctx*/) override { }

  virtual void enterPre_expr(RustParser::Pre_exprContext * /*ctx*/) override { }
  virtual void exitPre_expr(RustParser::Pre_exprContext * /*ctx*/) override { }

  virtual void enterCast_expr(RustParser::Cast_exprContext * /*ctx*/) override { }
  virtual void exitCast_expr(RustParser::Cast_exprContext * /*ctx*/) override { }

  virtual void enterMul_expr(RustParser::Mul_exprContext * /*ctx*/) override { }
  virtual void exitMul_expr(RustParser::Mul_exprContext * /*ctx*/) override { }

  virtual void enterAdd_expr(RustParser::Add_exprContext * /*ctx*/) override { }
  virtual void exitAdd_expr(RustParser::Add_exprContext * /*ctx*/) override { }

  virtual void enterShift_expr(RustParser::Shift_exprContext * /*ctx*/) override { }
  virtual void exitShift_expr(RustParser::Shift_exprContext * /*ctx*/) override { }

  virtual void enterBit_and_expr(RustParser::Bit_and_exprContext * /*ctx*/) override { }
  virtual void exitBit_and_expr(RustParser::Bit_and_exprContext * /*ctx*/) override { }

  virtual void enterBit_xor_expr(RustParser::Bit_xor_exprContext * /*ctx*/) override { }
  virtual void exitBit_xor_expr(RustParser::Bit_xor_exprContext * /*ctx*/) override { }

  virtual void enterBit_or_expr(RustParser::Bit_or_exprContext * /*ctx*/) override { }
  virtual void exitBit_or_expr(RustParser::Bit_or_exprContext * /*ctx*/) override { }

  virtual void enterCmp_expr(RustParser::Cmp_exprContext * /*ctx*/) override { }
  virtual void exitCmp_expr(RustParser::Cmp_exprContext * /*ctx*/) override { }

  virtual void enterAnd_expr(RustParser::And_exprContext * /*ctx*/) override { }
  virtual void exitAnd_expr(RustParser::And_exprContext * /*ctx*/) override { }

  virtual void enterOr_expr(RustParser::Or_exprContext * /*ctx*/) override { }
  virtual void exitOr_expr(RustParser::Or_exprContext * /*ctx*/) override { }

  virtual void enterRange_expr(RustParser::Range_exprContext * /*ctx*/) override { }
  virtual void exitRange_expr(RustParser::Range_exprContext * /*ctx*/) override { }

  virtual void enterAssign_expr(RustParser::Assign_exprContext * /*ctx*/) override { }
  virtual void exitAssign_expr(RustParser::Assign_exprContext * /*ctx*/) override { }

  virtual void enterPost_expr_no_struct(RustParser::Post_expr_no_structContext * /*ctx*/) override { }
  virtual void exitPost_expr_no_struct(RustParser::Post_expr_no_structContext * /*ctx*/) override { }

  virtual void enterPre_expr_no_struct(RustParser::Pre_expr_no_structContext * /*ctx*/) override { }
  virtual void exitPre_expr_no_struct(RustParser::Pre_expr_no_structContext * /*ctx*/) override { }

  virtual void enterCast_expr_no_struct(RustParser::Cast_expr_no_structContext * /*ctx*/) override { }
  virtual void exitCast_expr_no_struct(RustParser::Cast_expr_no_structContext * /*ctx*/) override { }

  virtual void enterMul_expr_no_struct(RustParser::Mul_expr_no_structContext * /*ctx*/) override { }
  virtual void exitMul_expr_no_struct(RustParser::Mul_expr_no_structContext * /*ctx*/) override { }

  virtual void enterAdd_expr_no_struct(RustParser::Add_expr_no_structContext * /*ctx*/) override { }
  virtual void exitAdd_expr_no_struct(RustParser::Add_expr_no_structContext * /*ctx*/) override { }

  virtual void enterShift_expr_no_struct(RustParser::Shift_expr_no_structContext * /*ctx*/) override { }
  virtual void exitShift_expr_no_struct(RustParser::Shift_expr_no_structContext * /*ctx*/) override { }

  virtual void enterBit_and_expr_no_struct(RustParser::Bit_and_expr_no_structContext * /*ctx*/) override { }
  virtual void exitBit_and_expr_no_struct(RustParser::Bit_and_expr_no_structContext * /*ctx*/) override { }

  virtual void enterBit_xor_expr_no_struct(RustParser::Bit_xor_expr_no_structContext * /*ctx*/) override { }
  virtual void exitBit_xor_expr_no_struct(RustParser::Bit_xor_expr_no_structContext * /*ctx*/) override { }

  virtual void enterBit_or_expr_no_struct(RustParser::Bit_or_expr_no_structContext * /*ctx*/) override { }
  virtual void exitBit_or_expr_no_struct(RustParser::Bit_or_expr_no_structContext * /*ctx*/) override { }

  virtual void enterCmp_expr_no_struct(RustParser::Cmp_expr_no_structContext * /*ctx*/) override { }
  virtual void exitCmp_expr_no_struct(RustParser::Cmp_expr_no_structContext * /*ctx*/) override { }

  virtual void enterAnd_expr_no_struct(RustParser::And_expr_no_structContext * /*ctx*/) override { }
  virtual void exitAnd_expr_no_struct(RustParser::And_expr_no_structContext * /*ctx*/) override { }

  virtual void enterOr_expr_no_struct(RustParser::Or_expr_no_structContext * /*ctx*/) override { }
  virtual void exitOr_expr_no_struct(RustParser::Or_expr_no_structContext * /*ctx*/) override { }

  virtual void enterRange_expr_no_struct(RustParser::Range_expr_no_structContext * /*ctx*/) override { }
  virtual void exitRange_expr_no_struct(RustParser::Range_expr_no_structContext * /*ctx*/) override { }

  virtual void enterAssign_expr_no_struct(RustParser::Assign_expr_no_structContext * /*ctx*/) override { }
  virtual void exitAssign_expr_no_struct(RustParser::Assign_expr_no_structContext * /*ctx*/) override { }

  virtual void enterIdent(RustParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(RustParser::IdentContext * /*ctx*/) override { }

  virtual void enterAny_ident(RustParser::Any_identContext * /*ctx*/) override { }
  virtual void exitAny_ident(RustParser::Any_identContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

