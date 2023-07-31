
// Generated from Rust.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RustParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RustParser.
 */
class  RustListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCrate(RustParser::CrateContext *ctx) = 0;
  virtual void exitCrate(RustParser::CrateContext *ctx) = 0;

  virtual void enterMod_body(RustParser::Mod_bodyContext *ctx) = 0;
  virtual void exitMod_body(RustParser::Mod_bodyContext *ctx) = 0;

  virtual void enterVisibility(RustParser::VisibilityContext *ctx) = 0;
  virtual void exitVisibility(RustParser::VisibilityContext *ctx) = 0;

  virtual void enterVisibility_restriction(RustParser::Visibility_restrictionContext *ctx) = 0;
  virtual void exitVisibility_restriction(RustParser::Visibility_restrictionContext *ctx) = 0;

  virtual void enterItem(RustParser::ItemContext *ctx) = 0;
  virtual void exitItem(RustParser::ItemContext *ctx) = 0;

  virtual void enterPub_item(RustParser::Pub_itemContext *ctx) = 0;
  virtual void exitPub_item(RustParser::Pub_itemContext *ctx) = 0;

  virtual void enterItem_macro_use(RustParser::Item_macro_useContext *ctx) = 0;
  virtual void exitItem_macro_use(RustParser::Item_macro_useContext *ctx) = 0;

  virtual void enterItem_macro_path(RustParser::Item_macro_pathContext *ctx) = 0;
  virtual void exitItem_macro_path(RustParser::Item_macro_pathContext *ctx) = 0;

  virtual void enterItem_macro_path_parent(RustParser::Item_macro_path_parentContext *ctx) = 0;
  virtual void exitItem_macro_path_parent(RustParser::Item_macro_path_parentContext *ctx) = 0;

  virtual void enterItem_macro_path_segment(RustParser::Item_macro_path_segmentContext *ctx) = 0;
  virtual void exitItem_macro_path_segment(RustParser::Item_macro_path_segmentContext *ctx) = 0;

  virtual void enterItem_macro_tail(RustParser::Item_macro_tailContext *ctx) = 0;
  virtual void exitItem_macro_tail(RustParser::Item_macro_tailContext *ctx) = 0;

  virtual void enterExtern_crate(RustParser::Extern_crateContext *ctx) = 0;
  virtual void exitExtern_crate(RustParser::Extern_crateContext *ctx) = 0;

  virtual void enterUse_decl(RustParser::Use_declContext *ctx) = 0;
  virtual void exitUse_decl(RustParser::Use_declContext *ctx) = 0;

  virtual void enterUse_path(RustParser::Use_pathContext *ctx) = 0;
  virtual void exitUse_path(RustParser::Use_pathContext *ctx) = 0;

  virtual void enterUse_suffix(RustParser::Use_suffixContext *ctx) = 0;
  virtual void exitUse_suffix(RustParser::Use_suffixContext *ctx) = 0;

  virtual void enterUse_item(RustParser::Use_itemContext *ctx) = 0;
  virtual void exitUse_item(RustParser::Use_itemContext *ctx) = 0;

  virtual void enterUse_item_list(RustParser::Use_item_listContext *ctx) = 0;
  virtual void exitUse_item_list(RustParser::Use_item_listContext *ctx) = 0;

  virtual void enterRename(RustParser::RenameContext *ctx) = 0;
  virtual void exitRename(RustParser::RenameContext *ctx) = 0;

  virtual void enterMod_decl_short(RustParser::Mod_decl_shortContext *ctx) = 0;
  virtual void exitMod_decl_short(RustParser::Mod_decl_shortContext *ctx) = 0;

  virtual void enterMod_decl(RustParser::Mod_declContext *ctx) = 0;
  virtual void exitMod_decl(RustParser::Mod_declContext *ctx) = 0;

  virtual void enterExtern_mod(RustParser::Extern_modContext *ctx) = 0;
  virtual void exitExtern_mod(RustParser::Extern_modContext *ctx) = 0;

  virtual void enterForeign_item(RustParser::Foreign_itemContext *ctx) = 0;
  virtual void exitForeign_item(RustParser::Foreign_itemContext *ctx) = 0;

  virtual void enterForeign_item_tail(RustParser::Foreign_item_tailContext *ctx) = 0;
  virtual void exitForeign_item_tail(RustParser::Foreign_item_tailContext *ctx) = 0;

  virtual void enterStatic_decl(RustParser::Static_declContext *ctx) = 0;
  virtual void exitStatic_decl(RustParser::Static_declContext *ctx) = 0;

  virtual void enterConst_decl(RustParser::Const_declContext *ctx) = 0;
  virtual void exitConst_decl(RustParser::Const_declContext *ctx) = 0;

  virtual void enterFn_decl(RustParser::Fn_declContext *ctx) = 0;
  virtual void exitFn_decl(RustParser::Fn_declContext *ctx) = 0;

  virtual void enterMethod_decl(RustParser::Method_declContext *ctx) = 0;
  virtual void exitMethod_decl(RustParser::Method_declContext *ctx) = 0;

  virtual void enterTrait_method_decl(RustParser::Trait_method_declContext *ctx) = 0;
  virtual void exitTrait_method_decl(RustParser::Trait_method_declContext *ctx) = 0;

  virtual void enterForeign_fn_decl(RustParser::Foreign_fn_declContext *ctx) = 0;
  virtual void exitForeign_fn_decl(RustParser::Foreign_fn_declContext *ctx) = 0;

  virtual void enterFn_head(RustParser::Fn_headContext *ctx) = 0;
  virtual void exitFn_head(RustParser::Fn_headContext *ctx) = 0;

  virtual void enterParam(RustParser::ParamContext *ctx) = 0;
  virtual void exitParam(RustParser::ParamContext *ctx) = 0;

  virtual void enterParam_ty(RustParser::Param_tyContext *ctx) = 0;
  virtual void exitParam_ty(RustParser::Param_tyContext *ctx) = 0;

  virtual void enterParam_list(RustParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(RustParser::Param_listContext *ctx) = 0;

  virtual void enterVariadic_param_list(RustParser::Variadic_param_listContext *ctx) = 0;
  virtual void exitVariadic_param_list(RustParser::Variadic_param_listContext *ctx) = 0;

  virtual void enterVariadic_param_list_names_optional(RustParser::Variadic_param_list_names_optionalContext *ctx) = 0;
  virtual void exitVariadic_param_list_names_optional(RustParser::Variadic_param_list_names_optionalContext *ctx) = 0;

  virtual void enterSelf_param(RustParser::Self_paramContext *ctx) = 0;
  virtual void exitSelf_param(RustParser::Self_paramContext *ctx) = 0;

  virtual void enterMethod_param_list(RustParser::Method_param_listContext *ctx) = 0;
  virtual void exitMethod_param_list(RustParser::Method_param_listContext *ctx) = 0;

  virtual void enterTrait_method_param(RustParser::Trait_method_paramContext *ctx) = 0;
  virtual void exitTrait_method_param(RustParser::Trait_method_paramContext *ctx) = 0;

  virtual void enterRestricted_pat(RustParser::Restricted_patContext *ctx) = 0;
  virtual void exitRestricted_pat(RustParser::Restricted_patContext *ctx) = 0;

  virtual void enterTrait_method_param_list(RustParser::Trait_method_param_listContext *ctx) = 0;
  virtual void exitTrait_method_param_list(RustParser::Trait_method_param_listContext *ctx) = 0;

  virtual void enterRtype(RustParser::RtypeContext *ctx) = 0;
  virtual void exitRtype(RustParser::RtypeContext *ctx) = 0;

  virtual void enterFn_rtype(RustParser::Fn_rtypeContext *ctx) = 0;
  virtual void exitFn_rtype(RustParser::Fn_rtypeContext *ctx) = 0;

  virtual void enterType_decl(RustParser::Type_declContext *ctx) = 0;
  virtual void exitType_decl(RustParser::Type_declContext *ctx) = 0;

  virtual void enterStruct_decl(RustParser::Struct_declContext *ctx) = 0;
  virtual void exitStruct_decl(RustParser::Struct_declContext *ctx) = 0;

  virtual void enterStruct_tail(RustParser::Struct_tailContext *ctx) = 0;
  virtual void exitStruct_tail(RustParser::Struct_tailContext *ctx) = 0;

  virtual void enterTuple_struct_field(RustParser::Tuple_struct_fieldContext *ctx) = 0;
  virtual void exitTuple_struct_field(RustParser::Tuple_struct_fieldContext *ctx) = 0;

  virtual void enterTuple_struct_field_list(RustParser::Tuple_struct_field_listContext *ctx) = 0;
  virtual void exitTuple_struct_field_list(RustParser::Tuple_struct_field_listContext *ctx) = 0;

  virtual void enterField_decl(RustParser::Field_declContext *ctx) = 0;
  virtual void exitField_decl(RustParser::Field_declContext *ctx) = 0;

  virtual void enterField_decl_list(RustParser::Field_decl_listContext *ctx) = 0;
  virtual void exitField_decl_list(RustParser::Field_decl_listContext *ctx) = 0;

  virtual void enterEnum_decl(RustParser::Enum_declContext *ctx) = 0;
  virtual void exitEnum_decl(RustParser::Enum_declContext *ctx) = 0;

  virtual void enterEnum_variant(RustParser::Enum_variantContext *ctx) = 0;
  virtual void exitEnum_variant(RustParser::Enum_variantContext *ctx) = 0;

  virtual void enterEnum_variant_list(RustParser::Enum_variant_listContext *ctx) = 0;
  virtual void exitEnum_variant_list(RustParser::Enum_variant_listContext *ctx) = 0;

  virtual void enterEnum_variant_main(RustParser::Enum_variant_mainContext *ctx) = 0;
  virtual void exitEnum_variant_main(RustParser::Enum_variant_mainContext *ctx) = 0;

  virtual void enterEnum_tuple_field(RustParser::Enum_tuple_fieldContext *ctx) = 0;
  virtual void exitEnum_tuple_field(RustParser::Enum_tuple_fieldContext *ctx) = 0;

  virtual void enterEnum_tuple_field_list(RustParser::Enum_tuple_field_listContext *ctx) = 0;
  virtual void exitEnum_tuple_field_list(RustParser::Enum_tuple_field_listContext *ctx) = 0;

  virtual void enterEnum_field_decl(RustParser::Enum_field_declContext *ctx) = 0;
  virtual void exitEnum_field_decl(RustParser::Enum_field_declContext *ctx) = 0;

  virtual void enterEnum_field_decl_list(RustParser::Enum_field_decl_listContext *ctx) = 0;
  virtual void exitEnum_field_decl_list(RustParser::Enum_field_decl_listContext *ctx) = 0;

  virtual void enterUnion_decl(RustParser::Union_declContext *ctx) = 0;
  virtual void exitUnion_decl(RustParser::Union_declContext *ctx) = 0;

  virtual void enterTrait_decl(RustParser::Trait_declContext *ctx) = 0;
  virtual void exitTrait_decl(RustParser::Trait_declContext *ctx) = 0;

  virtual void enterTrait_item(RustParser::Trait_itemContext *ctx) = 0;
  virtual void exitTrait_item(RustParser::Trait_itemContext *ctx) = 0;

  virtual void enterTy_default(RustParser::Ty_defaultContext *ctx) = 0;
  virtual void exitTy_default(RustParser::Ty_defaultContext *ctx) = 0;

  virtual void enterConst_default(RustParser::Const_defaultContext *ctx) = 0;
  virtual void exitConst_default(RustParser::Const_defaultContext *ctx) = 0;

  virtual void enterImpl_block(RustParser::Impl_blockContext *ctx) = 0;
  virtual void exitImpl_block(RustParser::Impl_blockContext *ctx) = 0;

  virtual void enterImpl_what(RustParser::Impl_whatContext *ctx) = 0;
  virtual void exitImpl_what(RustParser::Impl_whatContext *ctx) = 0;

  virtual void enterImpl_item(RustParser::Impl_itemContext *ctx) = 0;
  virtual void exitImpl_item(RustParser::Impl_itemContext *ctx) = 0;

  virtual void enterImpl_item_tail(RustParser::Impl_item_tailContext *ctx) = 0;
  virtual void exitImpl_item_tail(RustParser::Impl_item_tailContext *ctx) = 0;

  virtual void enterAttr(RustParser::AttrContext *ctx) = 0;
  virtual void exitAttr(RustParser::AttrContext *ctx) = 0;

  virtual void enterInner_attr(RustParser::Inner_attrContext *ctx) = 0;
  virtual void exitInner_attr(RustParser::Inner_attrContext *ctx) = 0;

  virtual void enterTt(RustParser::TtContext *ctx) = 0;
  virtual void exitTt(RustParser::TtContext *ctx) = 0;

  virtual void enterTt_delimited(RustParser::Tt_delimitedContext *ctx) = 0;
  virtual void exitTt_delimited(RustParser::Tt_delimitedContext *ctx) = 0;

  virtual void enterTt_parens(RustParser::Tt_parensContext *ctx) = 0;
  virtual void exitTt_parens(RustParser::Tt_parensContext *ctx) = 0;

  virtual void enterTt_brackets(RustParser::Tt_bracketsContext *ctx) = 0;
  virtual void exitTt_brackets(RustParser::Tt_bracketsContext *ctx) = 0;

  virtual void enterTt_block(RustParser::Tt_blockContext *ctx) = 0;
  virtual void exitTt_block(RustParser::Tt_blockContext *ctx) = 0;

  virtual void enterMacro_tail(RustParser::Macro_tailContext *ctx) = 0;
  virtual void exitMacro_tail(RustParser::Macro_tailContext *ctx) = 0;

  virtual void enterPath(RustParser::PathContext *ctx) = 0;
  virtual void exitPath(RustParser::PathContext *ctx) = 0;

  virtual void enterPath_parent(RustParser::Path_parentContext *ctx) = 0;
  virtual void exitPath_parent(RustParser::Path_parentContext *ctx) = 0;

  virtual void enterAs_trait(RustParser::As_traitContext *ctx) = 0;
  virtual void exitAs_trait(RustParser::As_traitContext *ctx) = 0;

  virtual void enterPath_segment(RustParser::Path_segmentContext *ctx) = 0;
  virtual void exitPath_segment(RustParser::Path_segmentContext *ctx) = 0;

  virtual void enterPath_segment_no_super(RustParser::Path_segment_no_superContext *ctx) = 0;
  virtual void exitPath_segment_no_super(RustParser::Path_segment_no_superContext *ctx) = 0;

  virtual void enterSimple_path_segment(RustParser::Simple_path_segmentContext *ctx) = 0;
  virtual void exitSimple_path_segment(RustParser::Simple_path_segmentContext *ctx) = 0;

  virtual void enterTy_path(RustParser::Ty_pathContext *ctx) = 0;
  virtual void exitTy_path(RustParser::Ty_pathContext *ctx) = 0;

  virtual void enterFor_lifetime(RustParser::For_lifetimeContext *ctx) = 0;
  virtual void exitFor_lifetime(RustParser::For_lifetimeContext *ctx) = 0;

  virtual void enterLifetime_def_list(RustParser::Lifetime_def_listContext *ctx) = 0;
  virtual void exitLifetime_def_list(RustParser::Lifetime_def_listContext *ctx) = 0;

  virtual void enterLifetime_def(RustParser::Lifetime_defContext *ctx) = 0;
  virtual void exitLifetime_def(RustParser::Lifetime_defContext *ctx) = 0;

  virtual void enterLifetime_bound(RustParser::Lifetime_boundContext *ctx) = 0;
  virtual void exitLifetime_bound(RustParser::Lifetime_boundContext *ctx) = 0;

  virtual void enterTy_path_main(RustParser::Ty_path_mainContext *ctx) = 0;
  virtual void exitTy_path_main(RustParser::Ty_path_mainContext *ctx) = 0;

  virtual void enterTy_path_tail(RustParser::Ty_path_tailContext *ctx) = 0;
  virtual void exitTy_path_tail(RustParser::Ty_path_tailContext *ctx) = 0;

  virtual void enterTy_path_parent(RustParser::Ty_path_parentContext *ctx) = 0;
  virtual void exitTy_path_parent(RustParser::Ty_path_parentContext *ctx) = 0;

  virtual void enterTy_path_segment(RustParser::Ty_path_segmentContext *ctx) = 0;
  virtual void exitTy_path_segment(RustParser::Ty_path_segmentContext *ctx) = 0;

  virtual void enterTy_path_segment_no_super(RustParser::Ty_path_segment_no_superContext *ctx) = 0;
  virtual void exitTy_path_segment_no_super(RustParser::Ty_path_segment_no_superContext *ctx) = 0;

  virtual void enterWhere_clause(RustParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(RustParser::Where_clauseContext *ctx) = 0;

  virtual void enterWhere_bound_list(RustParser::Where_bound_listContext *ctx) = 0;
  virtual void exitWhere_bound_list(RustParser::Where_bound_listContext *ctx) = 0;

  virtual void enterWhere_bound(RustParser::Where_boundContext *ctx) = 0;
  virtual void exitWhere_bound(RustParser::Where_boundContext *ctx) = 0;

  virtual void enterColon_bound(RustParser::Colon_boundContext *ctx) = 0;
  virtual void exitColon_bound(RustParser::Colon_boundContext *ctx) = 0;

  virtual void enterBound(RustParser::BoundContext *ctx) = 0;
  virtual void exitBound(RustParser::BoundContext *ctx) = 0;

  virtual void enterPrim_bound(RustParser::Prim_boundContext *ctx) = 0;
  virtual void exitPrim_bound(RustParser::Prim_boundContext *ctx) = 0;

  virtual void enterTy(RustParser::TyContext *ctx) = 0;
  virtual void exitTy(RustParser::TyContext *ctx) = 0;

  virtual void enterMut_or_const(RustParser::Mut_or_constContext *ctx) = 0;
  virtual void exitMut_or_const(RustParser::Mut_or_constContext *ctx) = 0;

  virtual void enterExtern_abi(RustParser::Extern_abiContext *ctx) = 0;
  virtual void exitExtern_abi(RustParser::Extern_abiContext *ctx) = 0;

  virtual void enterTy_args(RustParser::Ty_argsContext *ctx) = 0;
  virtual void exitTy_args(RustParser::Ty_argsContext *ctx) = 0;

  virtual void enterLifetime_list(RustParser::Lifetime_listContext *ctx) = 0;
  virtual void exitLifetime_list(RustParser::Lifetime_listContext *ctx) = 0;

  virtual void enterTy_sum(RustParser::Ty_sumContext *ctx) = 0;
  virtual void exitTy_sum(RustParser::Ty_sumContext *ctx) = 0;

  virtual void enterTy_sum_list(RustParser::Ty_sum_listContext *ctx) = 0;
  virtual void exitTy_sum_list(RustParser::Ty_sum_listContext *ctx) = 0;

  virtual void enterTy_arg(RustParser::Ty_argContext *ctx) = 0;
  virtual void exitTy_arg(RustParser::Ty_argContext *ctx) = 0;

  virtual void enterTy_arg_list(RustParser::Ty_arg_listContext *ctx) = 0;
  virtual void exitTy_arg_list(RustParser::Ty_arg_listContext *ctx) = 0;

  virtual void enterTy_params(RustParser::Ty_paramsContext *ctx) = 0;
  virtual void exitTy_params(RustParser::Ty_paramsContext *ctx) = 0;

  virtual void enterLifetime_param(RustParser::Lifetime_paramContext *ctx) = 0;
  virtual void exitLifetime_param(RustParser::Lifetime_paramContext *ctx) = 0;

  virtual void enterLifetime_param_list(RustParser::Lifetime_param_listContext *ctx) = 0;
  virtual void exitLifetime_param_list(RustParser::Lifetime_param_listContext *ctx) = 0;

  virtual void enterTy_param(RustParser::Ty_paramContext *ctx) = 0;
  virtual void exitTy_param(RustParser::Ty_paramContext *ctx) = 0;

  virtual void enterTy_param_list(RustParser::Ty_param_listContext *ctx) = 0;
  virtual void exitTy_param_list(RustParser::Ty_param_listContext *ctx) = 0;

  virtual void enterPat(RustParser::PatContext *ctx) = 0;
  virtual void exitPat(RustParser::PatContext *ctx) = 0;

  virtual void enterPat_no_mut(RustParser::Pat_no_mutContext *ctx) = 0;
  virtual void exitPat_no_mut(RustParser::Pat_no_mutContext *ctx) = 0;

  virtual void enterPat_range_end(RustParser::Pat_range_endContext *ctx) = 0;
  virtual void exitPat_range_end(RustParser::Pat_range_endContext *ctx) = 0;

  virtual void enterPat_lit(RustParser::Pat_litContext *ctx) = 0;
  virtual void exitPat_lit(RustParser::Pat_litContext *ctx) = 0;

  virtual void enterPat_list(RustParser::Pat_listContext *ctx) = 0;
  virtual void exitPat_list(RustParser::Pat_listContext *ctx) = 0;

  virtual void enterPat_list_with_dots(RustParser::Pat_list_with_dotsContext *ctx) = 0;
  virtual void exitPat_list_with_dots(RustParser::Pat_list_with_dotsContext *ctx) = 0;

  virtual void enterPat_list_dots_tail(RustParser::Pat_list_dots_tailContext *ctx) = 0;
  virtual void exitPat_list_dots_tail(RustParser::Pat_list_dots_tailContext *ctx) = 0;

  virtual void enterPat_elt(RustParser::Pat_eltContext *ctx) = 0;
  virtual void exitPat_elt(RustParser::Pat_eltContext *ctx) = 0;

  virtual void enterPat_elt_list(RustParser::Pat_elt_listContext *ctx) = 0;
  virtual void exitPat_elt_list(RustParser::Pat_elt_listContext *ctx) = 0;

  virtual void enterPat_fields(RustParser::Pat_fieldsContext *ctx) = 0;
  virtual void exitPat_fields(RustParser::Pat_fieldsContext *ctx) = 0;

  virtual void enterPat_field(RustParser::Pat_fieldContext *ctx) = 0;
  virtual void exitPat_field(RustParser::Pat_fieldContext *ctx) = 0;

  virtual void enterExpr(RustParser::ExprContext *ctx) = 0;
  virtual void exitExpr(RustParser::ExprContext *ctx) = 0;

  virtual void enterExpr_no_struct(RustParser::Expr_no_structContext *ctx) = 0;
  virtual void exitExpr_no_struct(RustParser::Expr_no_structContext *ctx) = 0;

  virtual void enterExpr_list(RustParser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(RustParser::Expr_listContext *ctx) = 0;

  virtual void enterBlock(RustParser::BlockContext *ctx) = 0;
  virtual void exitBlock(RustParser::BlockContext *ctx) = 0;

  virtual void enterBlock_with_inner_attrs(RustParser::Block_with_inner_attrsContext *ctx) = 0;
  virtual void exitBlock_with_inner_attrs(RustParser::Block_with_inner_attrsContext *ctx) = 0;

  virtual void enterStmt(RustParser::StmtContext *ctx) = 0;
  virtual void exitStmt(RustParser::StmtContext *ctx) = 0;

  virtual void enterStmt_tail(RustParser::Stmt_tailContext *ctx) = 0;
  virtual void exitStmt_tail(RustParser::Stmt_tailContext *ctx) = 0;

  virtual void enterBlocky_expr(RustParser::Blocky_exprContext *ctx) = 0;
  virtual void exitBlocky_expr(RustParser::Blocky_exprContext *ctx) = 0;

  virtual void enterCond_or_pat(RustParser::Cond_or_patContext *ctx) = 0;
  virtual void exitCond_or_pat(RustParser::Cond_or_patContext *ctx) = 0;

  virtual void enterLoop_label(RustParser::Loop_labelContext *ctx) = 0;
  virtual void exitLoop_label(RustParser::Loop_labelContext *ctx) = 0;

  virtual void enterMatch_arms(RustParser::Match_armsContext *ctx) = 0;
  virtual void exitMatch_arms(RustParser::Match_armsContext *ctx) = 0;

  virtual void enterMatch_arm_intro(RustParser::Match_arm_introContext *ctx) = 0;
  virtual void exitMatch_arm_intro(RustParser::Match_arm_introContext *ctx) = 0;

  virtual void enterMatch_pat(RustParser::Match_patContext *ctx) = 0;
  virtual void exitMatch_pat(RustParser::Match_patContext *ctx) = 0;

  virtual void enterMatch_if_clause(RustParser::Match_if_clauseContext *ctx) = 0;
  virtual void exitMatch_if_clause(RustParser::Match_if_clauseContext *ctx) = 0;

  virtual void enterExpr_attrs(RustParser::Expr_attrsContext *ctx) = 0;
  virtual void exitExpr_attrs(RustParser::Expr_attrsContext *ctx) = 0;

  virtual void enterExpr_inner_attrs(RustParser::Expr_inner_attrsContext *ctx) = 0;
  virtual void exitExpr_inner_attrs(RustParser::Expr_inner_attrsContext *ctx) = 0;

  virtual void enterPrim_expr(RustParser::Prim_exprContext *ctx) = 0;
  virtual void exitPrim_expr(RustParser::Prim_exprContext *ctx) = 0;

  virtual void enterPrim_expr_no_struct(RustParser::Prim_expr_no_structContext *ctx) = 0;
  virtual void exitPrim_expr_no_struct(RustParser::Prim_expr_no_structContext *ctx) = 0;

  virtual void enterLit(RustParser::LitContext *ctx) = 0;
  virtual void exitLit(RustParser::LitContext *ctx) = 0;

  virtual void enterClosure_params(RustParser::Closure_paramsContext *ctx) = 0;
  virtual void exitClosure_params(RustParser::Closure_paramsContext *ctx) = 0;

  virtual void enterClosure_param(RustParser::Closure_paramContext *ctx) = 0;
  virtual void exitClosure_param(RustParser::Closure_paramContext *ctx) = 0;

  virtual void enterClosure_param_list(RustParser::Closure_param_listContext *ctx) = 0;
  virtual void exitClosure_param_list(RustParser::Closure_param_listContext *ctx) = 0;

  virtual void enterClosure_tail(RustParser::Closure_tailContext *ctx) = 0;
  virtual void exitClosure_tail(RustParser::Closure_tailContext *ctx) = 0;

  virtual void enterLifetime_or_expr(RustParser::Lifetime_or_exprContext *ctx) = 0;
  virtual void exitLifetime_or_expr(RustParser::Lifetime_or_exprContext *ctx) = 0;

  virtual void enterFields(RustParser::FieldsContext *ctx) = 0;
  virtual void exitFields(RustParser::FieldsContext *ctx) = 0;

  virtual void enterStruct_update_base(RustParser::Struct_update_baseContext *ctx) = 0;
  virtual void exitStruct_update_base(RustParser::Struct_update_baseContext *ctx) = 0;

  virtual void enterField(RustParser::FieldContext *ctx) = 0;
  virtual void exitField(RustParser::FieldContext *ctx) = 0;

  virtual void enterField_name(RustParser::Field_nameContext *ctx) = 0;
  virtual void exitField_name(RustParser::Field_nameContext *ctx) = 0;

  virtual void enterPost_expr(RustParser::Post_exprContext *ctx) = 0;
  virtual void exitPost_expr(RustParser::Post_exprContext *ctx) = 0;

  virtual void enterPost_expr_tail(RustParser::Post_expr_tailContext *ctx) = 0;
  virtual void exitPost_expr_tail(RustParser::Post_expr_tailContext *ctx) = 0;

  virtual void enterPre_expr(RustParser::Pre_exprContext *ctx) = 0;
  virtual void exitPre_expr(RustParser::Pre_exprContext *ctx) = 0;

  virtual void enterCast_expr(RustParser::Cast_exprContext *ctx) = 0;
  virtual void exitCast_expr(RustParser::Cast_exprContext *ctx) = 0;

  virtual void enterMul_expr(RustParser::Mul_exprContext *ctx) = 0;
  virtual void exitMul_expr(RustParser::Mul_exprContext *ctx) = 0;

  virtual void enterAdd_expr(RustParser::Add_exprContext *ctx) = 0;
  virtual void exitAdd_expr(RustParser::Add_exprContext *ctx) = 0;

  virtual void enterShift_expr(RustParser::Shift_exprContext *ctx) = 0;
  virtual void exitShift_expr(RustParser::Shift_exprContext *ctx) = 0;

  virtual void enterBit_and_expr(RustParser::Bit_and_exprContext *ctx) = 0;
  virtual void exitBit_and_expr(RustParser::Bit_and_exprContext *ctx) = 0;

  virtual void enterBit_xor_expr(RustParser::Bit_xor_exprContext *ctx) = 0;
  virtual void exitBit_xor_expr(RustParser::Bit_xor_exprContext *ctx) = 0;

  virtual void enterBit_or_expr(RustParser::Bit_or_exprContext *ctx) = 0;
  virtual void exitBit_or_expr(RustParser::Bit_or_exprContext *ctx) = 0;

  virtual void enterCmp_expr(RustParser::Cmp_exprContext *ctx) = 0;
  virtual void exitCmp_expr(RustParser::Cmp_exprContext *ctx) = 0;

  virtual void enterAnd_expr(RustParser::And_exprContext *ctx) = 0;
  virtual void exitAnd_expr(RustParser::And_exprContext *ctx) = 0;

  virtual void enterOr_expr(RustParser::Or_exprContext *ctx) = 0;
  virtual void exitOr_expr(RustParser::Or_exprContext *ctx) = 0;

  virtual void enterRange_expr(RustParser::Range_exprContext *ctx) = 0;
  virtual void exitRange_expr(RustParser::Range_exprContext *ctx) = 0;

  virtual void enterAssign_expr(RustParser::Assign_exprContext *ctx) = 0;
  virtual void exitAssign_expr(RustParser::Assign_exprContext *ctx) = 0;

  virtual void enterPost_expr_no_struct(RustParser::Post_expr_no_structContext *ctx) = 0;
  virtual void exitPost_expr_no_struct(RustParser::Post_expr_no_structContext *ctx) = 0;

  virtual void enterPre_expr_no_struct(RustParser::Pre_expr_no_structContext *ctx) = 0;
  virtual void exitPre_expr_no_struct(RustParser::Pre_expr_no_structContext *ctx) = 0;

  virtual void enterCast_expr_no_struct(RustParser::Cast_expr_no_structContext *ctx) = 0;
  virtual void exitCast_expr_no_struct(RustParser::Cast_expr_no_structContext *ctx) = 0;

  virtual void enterMul_expr_no_struct(RustParser::Mul_expr_no_structContext *ctx) = 0;
  virtual void exitMul_expr_no_struct(RustParser::Mul_expr_no_structContext *ctx) = 0;

  virtual void enterAdd_expr_no_struct(RustParser::Add_expr_no_structContext *ctx) = 0;
  virtual void exitAdd_expr_no_struct(RustParser::Add_expr_no_structContext *ctx) = 0;

  virtual void enterShift_expr_no_struct(RustParser::Shift_expr_no_structContext *ctx) = 0;
  virtual void exitShift_expr_no_struct(RustParser::Shift_expr_no_structContext *ctx) = 0;

  virtual void enterBit_and_expr_no_struct(RustParser::Bit_and_expr_no_structContext *ctx) = 0;
  virtual void exitBit_and_expr_no_struct(RustParser::Bit_and_expr_no_structContext *ctx) = 0;

  virtual void enterBit_xor_expr_no_struct(RustParser::Bit_xor_expr_no_structContext *ctx) = 0;
  virtual void exitBit_xor_expr_no_struct(RustParser::Bit_xor_expr_no_structContext *ctx) = 0;

  virtual void enterBit_or_expr_no_struct(RustParser::Bit_or_expr_no_structContext *ctx) = 0;
  virtual void exitBit_or_expr_no_struct(RustParser::Bit_or_expr_no_structContext *ctx) = 0;

  virtual void enterCmp_expr_no_struct(RustParser::Cmp_expr_no_structContext *ctx) = 0;
  virtual void exitCmp_expr_no_struct(RustParser::Cmp_expr_no_structContext *ctx) = 0;

  virtual void enterAnd_expr_no_struct(RustParser::And_expr_no_structContext *ctx) = 0;
  virtual void exitAnd_expr_no_struct(RustParser::And_expr_no_structContext *ctx) = 0;

  virtual void enterOr_expr_no_struct(RustParser::Or_expr_no_structContext *ctx) = 0;
  virtual void exitOr_expr_no_struct(RustParser::Or_expr_no_structContext *ctx) = 0;

  virtual void enterRange_expr_no_struct(RustParser::Range_expr_no_structContext *ctx) = 0;
  virtual void exitRange_expr_no_struct(RustParser::Range_expr_no_structContext *ctx) = 0;

  virtual void enterAssign_expr_no_struct(RustParser::Assign_expr_no_structContext *ctx) = 0;
  virtual void exitAssign_expr_no_struct(RustParser::Assign_expr_no_structContext *ctx) = 0;

  virtual void enterIdent(RustParser::IdentContext *ctx) = 0;
  virtual void exitIdent(RustParser::IdentContext *ctx) = 0;

  virtual void enterAny_ident(RustParser::Any_identContext *ctx) = 0;
  virtual void exitAny_ident(RustParser::Any_identContext *ctx) = 0;


};

