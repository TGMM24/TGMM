
// Generated from Rust.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  RustParser : public antlr4::Parser {
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
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, CashMoney = 85, Lifetime = 86, 
    Ident = 87, CharLit = 88, StringLit = 89, ByteLit = 90, ByteStringLit = 91, 
    BareIntLit = 92, FullIntLit = 93, FloatLit = 94, Whitespace = 95, LineComment = 96, 
    BlockComment = 97
  };

  enum {
    RuleCrate = 0, RuleMod_body = 1, RuleVisibility = 2, RuleVisibility_restriction = 3, 
    RuleItem = 4, RulePub_item = 5, RuleItem_macro_use = 6, RuleItem_macro_path = 7, 
    RuleItem_macro_path_parent = 8, RuleItem_macro_path_segment = 9, RuleItem_macro_tail = 10, 
    RuleExtern_crate = 11, RuleUse_decl = 12, RuleUse_path = 13, RuleUse_suffix = 14, 
    RuleUse_item = 15, RuleUse_item_list = 16, RuleRename = 17, RuleMod_decl_short = 18, 
    RuleMod_decl = 19, RuleExtern_mod = 20, RuleForeign_item = 21, RuleForeign_item_tail = 22, 
    RuleStatic_decl = 23, RuleConst_decl = 24, RuleFn_decl = 25, RuleMethod_decl = 26, 
    RuleTrait_method_decl = 27, RuleForeign_fn_decl = 28, RuleFn_head = 29, 
    RuleParam = 30, RuleParam_ty = 31, RuleParam_list = 32, RuleVariadic_param_list = 33, 
    RuleVariadic_param_list_names_optional = 34, RuleSelf_param = 35, RuleMethod_param_list = 36, 
    RuleTrait_method_param = 37, RuleRestricted_pat = 38, RuleTrait_method_param_list = 39, 
    RuleRtype = 40, RuleFn_rtype = 41, RuleType_decl = 42, RuleStruct_decl = 43, 
    RuleStruct_tail = 44, RuleTuple_struct_field = 45, RuleTuple_struct_field_list = 46, 
    RuleField_decl = 47, RuleField_decl_list = 48, RuleEnum_decl = 49, RuleEnum_variant = 50, 
    RuleEnum_variant_list = 51, RuleEnum_variant_main = 52, RuleEnum_tuple_field = 53, 
    RuleEnum_tuple_field_list = 54, RuleEnum_field_decl = 55, RuleEnum_field_decl_list = 56, 
    RuleUnion_decl = 57, RuleTrait_decl = 58, RuleTrait_item = 59, RuleTy_default = 60, 
    RuleConst_default = 61, RuleImpl_block = 62, RuleImpl_what = 63, RuleImpl_item = 64, 
    RuleImpl_item_tail = 65, RuleAttr = 66, RuleInner_attr = 67, RuleTt = 68, 
    RuleTt_delimited = 69, RuleTt_parens = 70, RuleTt_brackets = 71, RuleTt_block = 72, 
    RuleMacro_tail = 73, RulePath = 74, RulePath_parent = 75, RuleAs_trait = 76, 
    RulePath_segment = 77, RulePath_segment_no_super = 78, RuleSimple_path_segment = 79, 
    RuleTy_path = 80, RuleFor_lifetime = 81, RuleLifetime_def_list = 82, 
    RuleLifetime_def = 83, RuleLifetime_bound = 84, RuleTy_path_main = 85, 
    RuleTy_path_tail = 86, RuleTy_path_parent = 87, RuleTy_path_segment = 88, 
    RuleTy_path_segment_no_super = 89, RuleWhere_clause = 90, RuleWhere_bound_list = 91, 
    RuleWhere_bound = 92, RuleColon_bound = 93, RuleBound = 94, RulePrim_bound = 95, 
    RuleTy = 96, RuleMut_or_const = 97, RuleExtern_abi = 98, RuleTy_args = 99, 
    RuleLifetime_list = 100, RuleTy_sum = 101, RuleTy_sum_list = 102, RuleTy_arg = 103, 
    RuleTy_arg_list = 104, RuleTy_params = 105, RuleLifetime_param = 106, 
    RuleLifetime_param_list = 107, RuleTy_param = 108, RuleTy_param_list = 109, 
    RulePat = 110, RulePat_no_mut = 111, RulePat_range_end = 112, RulePat_lit = 113, 
    RulePat_list = 114, RulePat_list_with_dots = 115, RulePat_list_dots_tail = 116, 
    RulePat_elt = 117, RulePat_elt_list = 118, RulePat_fields = 119, RulePat_field = 120, 
    RuleExpr = 121, RuleExpr_no_struct = 122, RuleExpr_list = 123, RuleBlock = 124, 
    RuleBlock_with_inner_attrs = 125, RuleStmt = 126, RuleStmt_tail = 127, 
    RuleBlocky_expr = 128, RuleCond_or_pat = 129, RuleLoop_label = 130, 
    RuleMatch_arms = 131, RuleMatch_arm_intro = 132, RuleMatch_pat = 133, 
    RuleMatch_if_clause = 134, RuleExpr_attrs = 135, RuleExpr_inner_attrs = 136, 
    RulePrim_expr = 137, RulePrim_expr_no_struct = 138, RuleLit = 139, RuleClosure_params = 140, 
    RuleClosure_param = 141, RuleClosure_param_list = 142, RuleClosure_tail = 143, 
    RuleLifetime_or_expr = 144, RuleFields = 145, RuleStruct_update_base = 146, 
    RuleField = 147, RuleField_name = 148, RulePost_expr = 149, RulePost_expr_tail = 150, 
    RulePre_expr = 151, RuleCast_expr = 152, RuleMul_expr = 153, RuleAdd_expr = 154, 
    RuleShift_expr = 155, RuleBit_and_expr = 156, RuleBit_xor_expr = 157, 
    RuleBit_or_expr = 158, RuleCmp_expr = 159, RuleAnd_expr = 160, RuleOr_expr = 161, 
    RuleRange_expr = 162, RuleAssign_expr = 163, RulePost_expr_no_struct = 164, 
    RulePre_expr_no_struct = 165, RuleCast_expr_no_struct = 166, RuleMul_expr_no_struct = 167, 
    RuleAdd_expr_no_struct = 168, RuleShift_expr_no_struct = 169, RuleBit_and_expr_no_struct = 170, 
    RuleBit_xor_expr_no_struct = 171, RuleBit_or_expr_no_struct = 172, RuleCmp_expr_no_struct = 173, 
    RuleAnd_expr_no_struct = 174, RuleOr_expr_no_struct = 175, RuleRange_expr_no_struct = 176, 
    RuleAssign_expr_no_struct = 177, RuleIdent = 178, RuleAny_ident = 179
  };

  explicit RustParser(antlr4::TokenStream *input);

  RustParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RustParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CrateContext;
  class Mod_bodyContext;
  class VisibilityContext;
  class Visibility_restrictionContext;
  class ItemContext;
  class Pub_itemContext;
  class Item_macro_useContext;
  class Item_macro_pathContext;
  class Item_macro_path_parentContext;
  class Item_macro_path_segmentContext;
  class Item_macro_tailContext;
  class Extern_crateContext;
  class Use_declContext;
  class Use_pathContext;
  class Use_suffixContext;
  class Use_itemContext;
  class Use_item_listContext;
  class RenameContext;
  class Mod_decl_shortContext;
  class Mod_declContext;
  class Extern_modContext;
  class Foreign_itemContext;
  class Foreign_item_tailContext;
  class Static_declContext;
  class Const_declContext;
  class Fn_declContext;
  class Method_declContext;
  class Trait_method_declContext;
  class Foreign_fn_declContext;
  class Fn_headContext;
  class ParamContext;
  class Param_tyContext;
  class Param_listContext;
  class Variadic_param_listContext;
  class Variadic_param_list_names_optionalContext;
  class Self_paramContext;
  class Method_param_listContext;
  class Trait_method_paramContext;
  class Restricted_patContext;
  class Trait_method_param_listContext;
  class RtypeContext;
  class Fn_rtypeContext;
  class Type_declContext;
  class Struct_declContext;
  class Struct_tailContext;
  class Tuple_struct_fieldContext;
  class Tuple_struct_field_listContext;
  class Field_declContext;
  class Field_decl_listContext;
  class Enum_declContext;
  class Enum_variantContext;
  class Enum_variant_listContext;
  class Enum_variant_mainContext;
  class Enum_tuple_fieldContext;
  class Enum_tuple_field_listContext;
  class Enum_field_declContext;
  class Enum_field_decl_listContext;
  class Union_declContext;
  class Trait_declContext;
  class Trait_itemContext;
  class Ty_defaultContext;
  class Const_defaultContext;
  class Impl_blockContext;
  class Impl_whatContext;
  class Impl_itemContext;
  class Impl_item_tailContext;
  class AttrContext;
  class Inner_attrContext;
  class TtContext;
  class Tt_delimitedContext;
  class Tt_parensContext;
  class Tt_bracketsContext;
  class Tt_blockContext;
  class Macro_tailContext;
  class PathContext;
  class Path_parentContext;
  class As_traitContext;
  class Path_segmentContext;
  class Path_segment_no_superContext;
  class Simple_path_segmentContext;
  class Ty_pathContext;
  class For_lifetimeContext;
  class Lifetime_def_listContext;
  class Lifetime_defContext;
  class Lifetime_boundContext;
  class Ty_path_mainContext;
  class Ty_path_tailContext;
  class Ty_path_parentContext;
  class Ty_path_segmentContext;
  class Ty_path_segment_no_superContext;
  class Where_clauseContext;
  class Where_bound_listContext;
  class Where_boundContext;
  class Colon_boundContext;
  class BoundContext;
  class Prim_boundContext;
  class TyContext;
  class Mut_or_constContext;
  class Extern_abiContext;
  class Ty_argsContext;
  class Lifetime_listContext;
  class Ty_sumContext;
  class Ty_sum_listContext;
  class Ty_argContext;
  class Ty_arg_listContext;
  class Ty_paramsContext;
  class Lifetime_paramContext;
  class Lifetime_param_listContext;
  class Ty_paramContext;
  class Ty_param_listContext;
  class PatContext;
  class Pat_no_mutContext;
  class Pat_range_endContext;
  class Pat_litContext;
  class Pat_listContext;
  class Pat_list_with_dotsContext;
  class Pat_list_dots_tailContext;
  class Pat_eltContext;
  class Pat_elt_listContext;
  class Pat_fieldsContext;
  class Pat_fieldContext;
  class ExprContext;
  class Expr_no_structContext;
  class Expr_listContext;
  class BlockContext;
  class Block_with_inner_attrsContext;
  class StmtContext;
  class Stmt_tailContext;
  class Blocky_exprContext;
  class Cond_or_patContext;
  class Loop_labelContext;
  class Match_armsContext;
  class Match_arm_introContext;
  class Match_patContext;
  class Match_if_clauseContext;
  class Expr_attrsContext;
  class Expr_inner_attrsContext;
  class Prim_exprContext;
  class Prim_expr_no_structContext;
  class LitContext;
  class Closure_paramsContext;
  class Closure_paramContext;
  class Closure_param_listContext;
  class Closure_tailContext;
  class Lifetime_or_exprContext;
  class FieldsContext;
  class Struct_update_baseContext;
  class FieldContext;
  class Field_nameContext;
  class Post_exprContext;
  class Post_expr_tailContext;
  class Pre_exprContext;
  class Cast_exprContext;
  class Mul_exprContext;
  class Add_exprContext;
  class Shift_exprContext;
  class Bit_and_exprContext;
  class Bit_xor_exprContext;
  class Bit_or_exprContext;
  class Cmp_exprContext;
  class And_exprContext;
  class Or_exprContext;
  class Range_exprContext;
  class Assign_exprContext;
  class Post_expr_no_structContext;
  class Pre_expr_no_structContext;
  class Cast_expr_no_structContext;
  class Mul_expr_no_structContext;
  class Add_expr_no_structContext;
  class Shift_expr_no_structContext;
  class Bit_and_expr_no_structContext;
  class Bit_xor_expr_no_structContext;
  class Bit_or_expr_no_structContext;
  class Cmp_expr_no_structContext;
  class And_expr_no_structContext;
  class Or_expr_no_structContext;
  class Range_expr_no_structContext;
  class Assign_expr_no_structContext;
  class IdentContext;
  class Any_identContext; 

  class  CrateContext : public antlr4::ParserRuleContext {
  public:
    CrateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mod_bodyContext *mod_body();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CrateContext* crate();

  class  Mod_bodyContext : public antlr4::ParserRuleContext {
  public:
    Mod_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inner_attrContext *> inner_attr();
    Inner_attrContext* inner_attr(size_t i);
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mod_bodyContext* mod_body();

  class  VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Visibility_restrictionContext *visibility_restriction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VisibilityContext* visibility();

  class  Visibility_restrictionContext : public antlr4::ParserRuleContext {
  public:
    Visibility_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Visibility_restrictionContext* visibility_restriction();

  class  ItemContext : public antlr4::ParserRuleContext {
  public:
    ItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pub_itemContext *pub_item();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    VisibilityContext *visibility();
    Impl_blockContext *impl_block();
    Extern_modContext *extern_mod();
    Item_macro_useContext *item_macro_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ItemContext* item();

  class  Pub_itemContext : public antlr4::ParserRuleContext {
  public:
    Pub_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extern_crateContext *extern_crate();
    Use_declContext *use_decl();
    Mod_decl_shortContext *mod_decl_short();
    Mod_declContext *mod_decl();
    Static_declContext *static_decl();
    Const_declContext *const_decl();
    Fn_declContext *fn_decl();
    Type_declContext *type_decl();
    Struct_declContext *struct_decl();
    Enum_declContext *enum_decl();
    Union_declContext *union_decl();
    Trait_declContext *trait_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pub_itemContext* pub_item();

  class  Item_macro_useContext : public antlr4::ParserRuleContext {
  public:
    Item_macro_useContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Item_macro_pathContext *item_macro_path();
    Item_macro_tailContext *item_macro_tail();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Item_macro_useContext* item_macro_use();

  class  Item_macro_pathContext : public antlr4::ParserRuleContext {
  public:
    Item_macro_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Item_macro_path_parentContext *item_macro_path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Item_macro_pathContext* item_macro_path();

  class  Item_macro_path_parentContext : public antlr4::ParserRuleContext {
  public:
    Item_macro_path_parentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Item_macro_path_segmentContext *item_macro_path_segment();
    Item_macro_path_parentContext *item_macro_path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Item_macro_path_parentContext* item_macro_path_parent();
  Item_macro_path_parentContext* item_macro_path_parent(int precedence);
  class  Item_macro_path_segmentContext : public antlr4::ParserRuleContext {
  public:
    Item_macro_path_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Item_macro_path_segmentContext* item_macro_path_segment();

  class  Item_macro_tailContext : public antlr4::ParserRuleContext {
  public:
    Item_macro_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tt_parensContext *tt_parens();
    Tt_bracketsContext *tt_brackets();
    Tt_blockContext *tt_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Item_macro_tailContext* item_macro_tail();

  class  Extern_crateContext : public antlr4::ParserRuleContext {
  public:
    Extern_crateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    RenameContext *rename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_crateContext* extern_crate();

  class  Use_declContext : public antlr4::ParserRuleContext {
  public:
    Use_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_pathContext *use_path();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_declContext* use_decl();

  class  Use_pathContext : public antlr4::ParserRuleContext {
  public:
    Use_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_item_listContext *use_item_list();
    std::vector<Any_identContext *> any_ident();
    Any_identContext* any_ident(size_t i);
    Use_suffixContext *use_suffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_pathContext* use_path();

  class  Use_suffixContext : public antlr4::ParserRuleContext {
  public:
    Use_suffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_item_listContext *use_item_list();
    RenameContext *rename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_suffixContext* use_suffix();

  class  Use_itemContext : public antlr4::ParserRuleContext {
  public:
    Use_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_identContext *any_ident();
    RenameContext *rename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_itemContext* use_item();

  class  Use_item_listContext : public antlr4::ParserRuleContext {
  public:
    Use_item_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Use_itemContext *> use_item();
    Use_itemContext* use_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_item_listContext* use_item_list();

  class  RenameContext : public antlr4::ParserRuleContext {
  public:
    RenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameContext* rename();

  class  Mod_decl_shortContext : public antlr4::ParserRuleContext {
  public:
    Mod_decl_shortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mod_decl_shortContext* mod_decl_short();

  class  Mod_declContext : public antlr4::ParserRuleContext {
  public:
    Mod_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Mod_bodyContext *mod_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mod_declContext* mod_decl();

  class  Extern_modContext : public antlr4::ParserRuleContext {
  public:
    Extern_modContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extern_abiContext *extern_abi();
    std::vector<Inner_attrContext *> inner_attr();
    Inner_attrContext* inner_attr(size_t i);
    std::vector<Foreign_itemContext *> foreign_item();
    Foreign_itemContext* foreign_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_modContext* extern_mod();

  class  Foreign_itemContext : public antlr4::ParserRuleContext {
  public:
    Foreign_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Foreign_item_tailContext *foreign_item_tail();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    VisibilityContext *visibility();
    Item_macro_useContext *item_macro_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Foreign_itemContext* foreign_item();

  class  Foreign_item_tailContext : public antlr4::ParserRuleContext {
  public:
    Foreign_item_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    Foreign_fn_declContext *foreign_fn_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Foreign_item_tailContext* foreign_item_tail();

  class  Static_declContext : public antlr4::ParserRuleContext {
  public:
    Static_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Static_declContext* static_decl();

  class  Const_declContext : public antlr4::ParserRuleContext {
  public:
    Const_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_declContext* const_decl();

  class  Fn_declContext : public antlr4::ParserRuleContext {
  public:
    Fn_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fn_headContext *fn_head();
    Block_with_inner_attrsContext *block_with_inner_attrs();
    Param_listContext *param_list();
    Fn_rtypeContext *fn_rtype();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fn_declContext* fn_decl();

  class  Method_declContext : public antlr4::ParserRuleContext {
  public:
    Method_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fn_headContext *fn_head();
    Block_with_inner_attrsContext *block_with_inner_attrs();
    Method_param_listContext *method_param_list();
    Fn_rtypeContext *fn_rtype();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_declContext* method_decl();

  class  Trait_method_declContext : public antlr4::ParserRuleContext {
  public:
    Trait_method_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fn_headContext *fn_head();
    Block_with_inner_attrsContext *block_with_inner_attrs();
    Trait_method_param_listContext *trait_method_param_list();
    RtypeContext *rtype();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trait_method_declContext* trait_method_decl();

  class  Foreign_fn_declContext : public antlr4::ParserRuleContext {
  public:
    Foreign_fn_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fn_headContext *fn_head();
    Variadic_param_listContext *variadic_param_list();
    RtypeContext *rtype();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Foreign_fn_declContext* foreign_fn_decl();

  class  Fn_headContext : public antlr4::ParserRuleContext {
  public:
    Fn_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Extern_abiContext *extern_abi();
    Ty_paramsContext *ty_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fn_headContext* fn_head();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    Param_tyContext *param_ty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  Param_tyContext : public antlr4::ParserRuleContext {
  public:
    Param_tyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    BoundContext *bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_tyContext* param_ty();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_listContext* param_list();

  class  Variadic_param_listContext : public antlr4::ParserRuleContext {
  public:
    Variadic_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variadic_param_listContext* variadic_param_list();

  class  Variadic_param_list_names_optionalContext : public antlr4::ParserRuleContext {
  public:
    Variadic_param_list_names_optionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trait_method_paramContext *> trait_method_param();
    Trait_method_paramContext* trait_method_param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variadic_param_list_names_optionalContext* variadic_param_list_names_optional();

  class  Self_paramContext : public antlr4::ParserRuleContext {
  public:
    Self_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    antlr4::tree::TerminalNode *Lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Self_paramContext* self_param();

  class  Method_param_listContext : public antlr4::ParserRuleContext {
  public:
    Method_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    Self_paramContext *self_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_param_listContext* method_param_list();

  class  Trait_method_paramContext : public antlr4::ParserRuleContext {
  public:
    Trait_method_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Restricted_patContext *restricted_pat();
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trait_method_paramContext* trait_method_param();

  class  Restricted_patContext : public antlr4::ParserRuleContext {
  public:
    Restricted_patContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Restricted_patContext* restricted_pat();

  class  Trait_method_param_listContext : public antlr4::ParserRuleContext {
  public:
    Trait_method_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trait_method_paramContext *> trait_method_param();
    Trait_method_paramContext* trait_method_param(size_t i);
    Self_paramContext *self_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trait_method_param_listContext* trait_method_param_list();

  class  RtypeContext : public antlr4::ParserRuleContext {
  public:
    RtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyContext *ty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RtypeContext* rtype();

  class  Fn_rtypeContext : public antlr4::ParserRuleContext {
  public:
    Fn_rtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyContext *ty();
    BoundContext *bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fn_rtypeContext* fn_rtype();

  class  Type_declContext : public antlr4::ParserRuleContext {
  public:
    Type_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    Ty_paramsContext *ty_params();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_declContext* type_decl();

  class  Struct_declContext : public antlr4::ParserRuleContext {
  public:
    Struct_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Struct_tailContext *struct_tail();
    Ty_paramsContext *ty_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_declContext* struct_decl();

  class  Struct_tailContext : public antlr4::ParserRuleContext {
  public:
    Struct_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Where_clauseContext *where_clause();
    Tuple_struct_field_listContext *tuple_struct_field_list();
    Field_decl_listContext *field_decl_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_tailContext* struct_tail();

  class  Tuple_struct_fieldContext : public antlr4::ParserRuleContext {
  public:
    Tuple_struct_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_struct_fieldContext* tuple_struct_field();

  class  Tuple_struct_field_listContext : public antlr4::ParserRuleContext {
  public:
    Tuple_struct_field_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tuple_struct_fieldContext *> tuple_struct_field();
    Tuple_struct_fieldContext* tuple_struct_field(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tuple_struct_field_listContext* tuple_struct_field_list();

  class  Field_declContext : public antlr4::ParserRuleContext {
  public:
    Field_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_declContext* field_decl();

  class  Field_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Field_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_declContext *> field_decl();
    Field_declContext* field_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_decl_listContext* field_decl_list();

  class  Enum_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_paramsContext *ty_params();
    Where_clauseContext *where_clause();
    Enum_variant_listContext *enum_variant_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_declContext* enum_decl();

  class  Enum_variantContext : public antlr4::ParserRuleContext {
  public:
    Enum_variantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enum_variant_mainContext *enum_variant_main();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_variantContext* enum_variant();

  class  Enum_variant_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_variant_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enum_variantContext *> enum_variant();
    Enum_variantContext* enum_variant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_variant_listContext* enum_variant_list();

  class  Enum_variant_mainContext : public antlr4::ParserRuleContext {
  public:
    Enum_variant_mainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Enum_tuple_field_listContext *enum_tuple_field_list();
    Enum_field_decl_listContext *enum_field_decl_list();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_variant_mainContext* enum_variant_main();

  class  Enum_tuple_fieldContext : public antlr4::ParserRuleContext {
  public:
    Enum_tuple_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_tuple_fieldContext* enum_tuple_field();

  class  Enum_tuple_field_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_tuple_field_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enum_tuple_fieldContext *> enum_tuple_field();
    Enum_tuple_fieldContext* enum_tuple_field(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_tuple_field_listContext* enum_tuple_field_list();

  class  Enum_field_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_field_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_field_declContext* enum_field_decl();

  class  Enum_field_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_field_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enum_field_declContext *> enum_field_decl();
    Enum_field_declContext* enum_field_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_field_decl_listContext* enum_field_decl_list();

  class  Union_declContext : public antlr4::ParserRuleContext {
  public:
    Union_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Field_decl_listContext *field_decl_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Union_declContext* union_decl();

  class  Trait_declContext : public antlr4::ParserRuleContext {
  public:
    Trait_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_paramsContext *ty_params();
    Colon_boundContext *colon_bound();
    Where_clauseContext *where_clause();
    std::vector<Trait_itemContext *> trait_item();
    Trait_itemContext* trait_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trait_declContext* trait_decl();

  class  Trait_itemContext : public antlr4::ParserRuleContext {
  public:
    Trait_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    Colon_boundContext *colon_bound();
    Ty_defaultContext *ty_default();
    Ty_sumContext *ty_sum();
    Const_defaultContext *const_default();
    Trait_method_declContext *trait_method_decl();
    Item_macro_pathContext *item_macro_path();
    Item_macro_tailContext *item_macro_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trait_itemContext* trait_item();

  class  Ty_defaultContext : public antlr4::ParserRuleContext {
  public:
    Ty_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_defaultContext* ty_default();

  class  Const_defaultContext : public antlr4::ParserRuleContext {
  public:
    Const_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_defaultContext* const_default();

  class  Impl_blockContext : public antlr4::ParserRuleContext {
  public:
    Impl_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Impl_whatContext *impl_what();
    Ty_paramsContext *ty_params();
    Where_clauseContext *where_clause();
    std::vector<Impl_itemContext *> impl_item();
    Impl_itemContext* impl_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Impl_blockContext* impl_block();

  class  Impl_whatContext : public antlr4::ParserRuleContext {
  public:
    Impl_whatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ty_sumContext *> ty_sum();
    Ty_sumContext* ty_sum(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Impl_whatContext* impl_what();

  class  Impl_itemContext : public antlr4::ParserRuleContext {
  public:
    Impl_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Impl_item_tailContext *impl_item_tail();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Impl_itemContext* impl_item();

  class  Impl_item_tailContext : public antlr4::ParserRuleContext {
  public:
    Impl_item_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_declContext *method_decl();
    IdentContext *ident();
    Ty_sumContext *ty_sum();
    Const_declContext *const_decl();
    Item_macro_pathContext *item_macro_path();
    Item_macro_tailContext *item_macro_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Impl_item_tailContext* impl_item_tail();

  class  AttrContext : public antlr4::ParserRuleContext {
  public:
    AttrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TtContext *> tt();
    TtContext* tt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttrContext* attr();

  class  Inner_attrContext : public antlr4::ParserRuleContext {
  public:
    Inner_attrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TtContext *> tt();
    TtContext* tt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inner_attrContext* inner_attr();

  class  TtContext : public antlr4::ParserRuleContext {
  public:
    TtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tt_delimitedContext *tt_delimited();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TtContext* tt();

  class  Tt_delimitedContext : public antlr4::ParserRuleContext {
  public:
    Tt_delimitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tt_parensContext *tt_parens();
    Tt_bracketsContext *tt_brackets();
    Tt_blockContext *tt_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tt_delimitedContext* tt_delimited();

  class  Tt_parensContext : public antlr4::ParserRuleContext {
  public:
    Tt_parensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TtContext *> tt();
    TtContext* tt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tt_parensContext* tt_parens();

  class  Tt_bracketsContext : public antlr4::ParserRuleContext {
  public:
    Tt_bracketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TtContext *> tt();
    TtContext* tt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tt_bracketsContext* tt_brackets();

  class  Tt_blockContext : public antlr4::ParserRuleContext {
  public:
    Tt_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TtContext *> tt();
    TtContext* tt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tt_blockContext* tt_block();

  class  Macro_tailContext : public antlr4::ParserRuleContext {
  public:
    Macro_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tt_delimitedContext *tt_delimited();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_tailContext* macro_tail();

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_segment_no_superContext *path_segment_no_super();
    Path_parentContext *path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PathContext* path();

  class  Path_parentContext : public antlr4::ParserRuleContext {
  public:
    Path_parentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    As_traitContext *as_trait();
    Path_segmentContext *path_segment();
    Path_parentContext *path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_parentContext* path_parent();
  Path_parentContext* path_parent(int precedence);
  class  As_traitContext : public antlr4::ParserRuleContext {
  public:
    As_traitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  As_traitContext* as_trait();

  class  Path_segmentContext : public antlr4::ParserRuleContext {
  public:
    Path_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_segment_no_superContext *path_segment_no_super();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_segmentContext* path_segment();

  class  Path_segment_no_superContext : public antlr4::ParserRuleContext {
  public:
    Path_segment_no_superContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_segmentContext *simple_path_segment();
    Ty_argsContext *ty_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_segment_no_superContext* path_segment_no_super();

  class  Simple_path_segmentContext : public antlr4::ParserRuleContext {
  public:
    Simple_path_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_path_segmentContext* simple_path_segment();

  class  Ty_pathContext : public antlr4::ParserRuleContext {
  public:
    Ty_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_path_mainContext *ty_path_main();
    For_lifetimeContext *for_lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_pathContext* ty_path();

  class  For_lifetimeContext : public antlr4::ParserRuleContext {
  public:
    For_lifetimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lifetime_def_listContext *lifetime_def_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_lifetimeContext* for_lifetime();

  class  Lifetime_def_listContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Lifetime_defContext *> lifetime_def();
    Lifetime_defContext* lifetime_def(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_def_listContext* lifetime_def_list();

  class  Lifetime_defContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();
    Lifetime_boundContext *lifetime_bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_defContext* lifetime_def();

  class  Lifetime_boundContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();
    Lifetime_boundContext *lifetime_bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_boundContext* lifetime_bound();
  Lifetime_boundContext* lifetime_bound(int precedence);
  class  Ty_path_mainContext : public antlr4::ParserRuleContext {
  public:
    Ty_path_mainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_path_tailContext *ty_path_tail();
    Ty_path_parentContext *ty_path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_path_mainContext* ty_path_main();

  class  Ty_path_tailContext : public antlr4::ParserRuleContext {
  public:
    Ty_path_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sum_listContext *ty_sum_list();
    RtypeContext *rtype();
    Ty_path_segment_no_superContext *ty_path_segment_no_super();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_path_tailContext* ty_path_tail();

  class  Ty_path_parentContext : public antlr4::ParserRuleContext {
  public:
    Ty_path_parentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    As_traitContext *as_trait();
    Ty_path_segmentContext *ty_path_segment();
    Ty_path_parentContext *ty_path_parent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_path_parentContext* ty_path_parent();
  Ty_path_parentContext* ty_path_parent(int precedence);
  class  Ty_path_segmentContext : public antlr4::ParserRuleContext {
  public:
    Ty_path_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_path_segment_no_superContext *ty_path_segment_no_super();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_path_segmentContext* ty_path_segment();

  class  Ty_path_segment_no_superContext : public antlr4::ParserRuleContext {
  public:
    Ty_path_segment_no_superContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_argsContext *ty_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_path_segment_no_superContext* ty_path_segment_no_super();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Where_bound_listContext *where_bound_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_clauseContext* where_clause();

  class  Where_bound_listContext : public antlr4::ParserRuleContext {
  public:
    Where_bound_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Where_boundContext *> where_bound();
    Where_boundContext* where_bound(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_bound_listContext* where_bound_list();

  class  Where_boundContext : public antlr4::ParserRuleContext {
  public:
    Where_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();
    Lifetime_boundContext *lifetime_bound();
    TyContext *ty();
    Colon_boundContext *colon_bound();
    For_lifetimeContext *for_lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_boundContext* where_bound();

  class  Colon_boundContext : public antlr4::ParserRuleContext {
  public:
    Colon_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoundContext *bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Colon_boundContext* colon_bound();

  class  BoundContext : public antlr4::ParserRuleContext {
  public:
    BoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prim_boundContext *prim_bound();
    BoundContext *bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoundContext* bound();
  BoundContext* bound(int precedence);
  class  Prim_boundContext : public antlr4::ParserRuleContext {
  public:
    Prim_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_pathContext *ty_path();
    antlr4::tree::TerminalNode *Lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prim_boundContext* prim_bound();

  class  TyContext : public antlr4::ParserRuleContext {
  public:
    TyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ty_sumContext *ty_sum();
    Ty_sum_listContext *ty_sum_list();
    ExprContext *expr();
    TyContext *ty();
    antlr4::tree::TerminalNode *Lifetime();
    Mut_or_constContext *mut_or_const();
    For_lifetimeContext *for_lifetime();
    Extern_abiContext *extern_abi();
    Variadic_param_list_names_optionalContext *variadic_param_list_names_optional();
    RtypeContext *rtype();
    Ty_pathContext *ty_path();
    Macro_tailContext *macro_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyContext* ty();

  class  Mut_or_constContext : public antlr4::ParserRuleContext {
  public:
    Mut_or_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mut_or_constContext* mut_or_const();

  class  Extern_abiContext : public antlr4::ParserRuleContext {
  public:
    Extern_abiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_abiContext* extern_abi();

  class  Ty_argsContext : public antlr4::ParserRuleContext {
  public:
    Ty_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lifetime_listContext *lifetime_list();
    Ty_arg_listContext *ty_arg_list();
    std::vector<antlr4::tree::TerminalNode *> Lifetime();
    antlr4::tree::TerminalNode* Lifetime(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_argsContext* ty_args();

  class  Lifetime_listContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Lifetime();
    antlr4::tree::TerminalNode* Lifetime(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_listContext* lifetime_list();

  class  Ty_sumContext : public antlr4::ParserRuleContext {
  public:
    Ty_sumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyContext *ty();
    BoundContext *bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_sumContext* ty_sum();

  class  Ty_sum_listContext : public antlr4::ParserRuleContext {
  public:
    Ty_sum_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ty_sumContext *> ty_sum();
    Ty_sumContext* ty_sum(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_sum_listContext* ty_sum_list();

  class  Ty_argContext : public antlr4::ParserRuleContext {
  public:
    Ty_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_argContext* ty_arg();

  class  Ty_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Ty_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ty_argContext *> ty_arg();
    Ty_argContext* ty_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_arg_listContext* ty_arg_list();

  class  Ty_paramsContext : public antlr4::ParserRuleContext {
  public:
    Ty_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lifetime_param_listContext *lifetime_param_list();
    Ty_param_listContext *ty_param_list();
    std::vector<Lifetime_paramContext *> lifetime_param();
    Lifetime_paramContext* lifetime_param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_paramsContext* ty_params();

  class  Lifetime_paramContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    Lifetime_boundContext *lifetime_bound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_paramContext* lifetime_param();

  class  Lifetime_param_listContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Lifetime_paramContext *> lifetime_param();
    Lifetime_paramContext* lifetime_param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_param_listContext* lifetime_param_list();

  class  Ty_paramContext : public antlr4::ParserRuleContext {
  public:
    Ty_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    Colon_boundContext *colon_bound();
    Ty_defaultContext *ty_default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_paramContext* ty_param();

  class  Ty_param_listContext : public antlr4::ParserRuleContext {
  public:
    Ty_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ty_paramContext *> ty_param();
    Ty_paramContext* ty_param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_param_listContext* ty_param_list();

  class  PatContext : public antlr4::ParserRuleContext {
  public:
    PatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pat_no_mutContext *pat_no_mut();
    IdentContext *ident();
    PatContext *pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatContext* pat();

  class  Pat_no_mutContext : public antlr4::ParserRuleContext {
  public:
    Pat_no_mutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pat_litContext *pat_lit();
    std::vector<Pat_range_endContext *> pat_range_end();
    Pat_range_endContext* pat_range_end(size_t i);
    PathContext *path();
    Macro_tailContext *macro_tail();
    IdentContext *ident();
    PatContext *pat();
    Pat_list_with_dotsContext *pat_list_with_dots();
    Pat_fieldsContext *pat_fields();
    Pat_elt_listContext *pat_elt_list();
    Pat_no_mutContext *pat_no_mut();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_no_mutContext* pat_no_mut();

  class  Pat_range_endContext : public antlr4::ParserRuleContext {
  public:
    Pat_range_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathContext *path();
    Pat_litContext *pat_lit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_range_endContext* pat_range_end();

  class  Pat_litContext : public antlr4::ParserRuleContext {
  public:
    Pat_litContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LitContext *lit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_litContext* pat_lit();

  class  Pat_listContext : public antlr4::ParserRuleContext {
  public:
    Pat_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PatContext *> pat();
    PatContext* pat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_listContext* pat_list();

  class  Pat_list_with_dotsContext : public antlr4::ParserRuleContext {
  public:
    Pat_list_with_dotsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pat_list_dots_tailContext *pat_list_dots_tail();
    std::vector<PatContext *> pat();
    PatContext* pat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_list_with_dotsContext* pat_list_with_dots();

  class  Pat_list_dots_tailContext : public antlr4::ParserRuleContext {
  public:
    Pat_list_dots_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pat_listContext *pat_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_list_dots_tailContext* pat_list_dots_tail();

  class  Pat_eltContext : public antlr4::ParserRuleContext {
  public:
    Pat_eltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_eltContext* pat_elt();

  class  Pat_elt_listContext : public antlr4::ParserRuleContext {
  public:
    Pat_elt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pat_eltContext *> pat_elt();
    Pat_eltContext* pat_elt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_elt_listContext* pat_elt_list();

  class  Pat_fieldsContext : public antlr4::ParserRuleContext {
  public:
    Pat_fieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pat_fieldContext *> pat_field();
    Pat_fieldContext* pat_field(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_fieldsContext* pat_fields();

  class  Pat_fieldContext : public antlr4::ParserRuleContext {
  public:
    Pat_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    PatContext *pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pat_fieldContext* pat_field();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_exprContext *assign_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  Expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_expr_no_structContext *assign_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr_no_structContext* expr_no_struct();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr_listContext* expr_list();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  Block_with_inner_attrsContext : public antlr4::ParserRuleContext {
  public:
    Block_with_inner_attrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inner_attrContext *> inner_attr();
    Inner_attrContext* inner_attr(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_with_inner_attrsContext* block_with_inner_attrs();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ItemContext *item();
    Stmt_tailContext *stmt_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtContext* stmt();

  class  Stmt_tailContext : public antlr4::ParserRuleContext {
  public:
    Stmt_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    TyContext *ty();
    ExprContext *expr();
    Blocky_exprContext *blocky_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stmt_tailContext* stmt_tail();

  class  Blocky_exprContext : public antlr4::ParserRuleContext {
  public:
    Blocky_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_with_inner_attrsContext *block_with_inner_attrs();
    std::vector<Cond_or_patContext *> cond_or_pat();
    Cond_or_patContext* cond_or_pat(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    Expr_no_structContext *expr_no_struct();
    Expr_inner_attrsContext *expr_inner_attrs();
    Match_armsContext *match_arms();
    Loop_labelContext *loop_label();
    PatContext *pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Blocky_exprContext* blocky_expr();

  class  Cond_or_patContext : public antlr4::ParserRuleContext {
  public:
    Cond_or_patContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_no_structContext *expr_no_struct();
    PatContext *pat();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_or_patContext* cond_or_pat();

  class  Loop_labelContext : public antlr4::ParserRuleContext {
  public:
    Loop_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_labelContext* loop_label();

  class  Match_armsContext : public antlr4::ParserRuleContext {
  public:
    Match_armsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Match_arm_introContext *match_arm_intro();
    Blocky_exprContext *blocky_expr();
    Match_armsContext *match_arms();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Match_armsContext* match_arms();

  class  Match_arm_introContext : public antlr4::ParserRuleContext {
  public:
    Match_arm_introContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Match_patContext *match_pat();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);
    Match_if_clauseContext *match_if_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Match_arm_introContext* match_arm_intro();

  class  Match_patContext : public antlr4::ParserRuleContext {
  public:
    Match_patContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    Match_patContext *match_pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Match_patContext* match_pat();
  Match_patContext* match_pat(int precedence);
  class  Match_if_clauseContext : public antlr4::ParserRuleContext {
  public:
    Match_if_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Match_if_clauseContext* match_if_clause();

  class  Expr_attrsContext : public antlr4::ParserRuleContext {
  public:
    Expr_attrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr_attrsContext* expr_attrs();

  class  Expr_inner_attrsContext : public antlr4::ParserRuleContext {
  public:
    Expr_inner_attrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inner_attrContext *> inner_attr();
    Inner_attrContext* inner_attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr_inner_attrsContext* expr_inner_attrs();

  class  Prim_exprContext : public antlr4::ParserRuleContext {
  public:
    Prim_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prim_expr_no_structContext *prim_expr_no_struct();
    PathContext *path();
    Expr_inner_attrsContext *expr_inner_attrs();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prim_exprContext* prim_expr();

  class  Prim_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Prim_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LitContext *lit();
    PathContext *path();
    Macro_tailContext *macro_tail();
    Expr_inner_attrsContext *expr_inner_attrs();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Expr_listContext *expr_list();
    Closure_paramsContext *closure_params();
    Closure_tailContext *closure_tail();
    Blocky_exprContext *blocky_expr();
    Lifetime_or_exprContext *lifetime_or_expr();
    antlr4::tree::TerminalNode *Lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prim_expr_no_structContext* prim_expr_no_struct();

  class  LitContext : public antlr4::ParserRuleContext {
  public:
    LitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BareIntLit();
    antlr4::tree::TerminalNode *FullIntLit();
    antlr4::tree::TerminalNode *ByteLit();
    antlr4::tree::TerminalNode *ByteStringLit();
    antlr4::tree::TerminalNode *FloatLit();
    antlr4::tree::TerminalNode *CharLit();
    antlr4::tree::TerminalNode *StringLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LitContext* lit();

  class  Closure_paramsContext : public antlr4::ParserRuleContext {
  public:
    Closure_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Closure_param_listContext *closure_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_paramsContext* closure_params();

  class  Closure_paramContext : public antlr4::ParserRuleContext {
  public:
    Closure_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    TyContext *ty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_paramContext* closure_param();

  class  Closure_param_listContext : public antlr4::ParserRuleContext {
  public:
    Closure_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Closure_paramContext *> closure_param();
    Closure_paramContext* closure_param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_param_listContext* closure_param_list();

  class  Closure_tailContext : public antlr4::ParserRuleContext {
  public:
    Closure_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RtypeContext *rtype();
    BlockContext *block();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Closure_tailContext* closure_tail();

  class  Lifetime_or_exprContext : public antlr4::ParserRuleContext {
  public:
    Lifetime_or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lifetime();
    Expr_no_structContext *expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lifetime_or_exprContext* lifetime_or_expr();

  class  FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Struct_update_baseContext *struct_update_base();
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldsContext* fields();

  class  Struct_update_baseContext : public antlr4::ParserRuleContext {
  public:
    Struct_update_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_update_baseContext* struct_update_base();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    Field_nameContext *field_name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldContext* field();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *BareIntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_nameContext* field_name();

  class  Post_exprContext : public antlr4::ParserRuleContext {
  public:
    Post_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prim_exprContext *prim_expr();
    Post_exprContext *post_expr();
    Post_expr_tailContext *post_expr_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Post_exprContext* post_expr();
  Post_exprContext* post_expr(int precedence);
  class  Post_expr_tailContext : public antlr4::ParserRuleContext {
  public:
    Post_expr_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    IdentContext *ident();
    Ty_argsContext *ty_args();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *BareIntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Post_expr_tailContext* post_expr_tail();

  class  Pre_exprContext : public antlr4::ParserRuleContext {
  public:
    Pre_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Post_exprContext *post_expr();
    Expr_attrsContext *expr_attrs();
    Pre_exprContext *pre_expr();
    Expr_no_structContext *expr_no_struct();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pre_exprContext* pre_expr();

  class  Cast_exprContext : public antlr4::ParserRuleContext {
  public:
    Cast_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pre_exprContext *pre_expr();
    Cast_exprContext *cast_expr();
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cast_exprContext* cast_expr();
  Cast_exprContext* cast_expr(int precedence);
  class  Mul_exprContext : public antlr4::ParserRuleContext {
  public:
    Mul_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cast_exprContext *cast_expr();
    Mul_exprContext *mul_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mul_exprContext* mul_expr();
  Mul_exprContext* mul_expr(int precedence);
  class  Add_exprContext : public antlr4::ParserRuleContext {
  public:
    Add_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mul_exprContext *mul_expr();
    Add_exprContext *add_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Add_exprContext* add_expr();
  Add_exprContext* add_expr(int precedence);
  class  Shift_exprContext : public antlr4::ParserRuleContext {
  public:
    Shift_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_exprContext *add_expr();
    Shift_exprContext *shift_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Shift_exprContext* shift_expr();
  Shift_exprContext* shift_expr(int precedence);
  class  Bit_and_exprContext : public antlr4::ParserRuleContext {
  public:
    Bit_and_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Shift_exprContext *shift_expr();
    Bit_and_exprContext *bit_and_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_and_exprContext* bit_and_expr();
  Bit_and_exprContext* bit_and_expr(int precedence);
  class  Bit_xor_exprContext : public antlr4::ParserRuleContext {
  public:
    Bit_xor_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_and_exprContext *bit_and_expr();
    Bit_xor_exprContext *bit_xor_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_xor_exprContext* bit_xor_expr();
  Bit_xor_exprContext* bit_xor_expr(int precedence);
  class  Bit_or_exprContext : public antlr4::ParserRuleContext {
  public:
    Bit_or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_xor_exprContext *bit_xor_expr();
    Bit_or_exprContext *bit_or_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_or_exprContext* bit_or_expr();
  Bit_or_exprContext* bit_or_expr(int precedence);
  class  Cmp_exprContext : public antlr4::ParserRuleContext {
  public:
    Cmp_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_or_exprContext *> bit_or_expr();
    Bit_or_exprContext* bit_or_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmp_exprContext* cmp_expr();

  class  And_exprContext : public antlr4::ParserRuleContext {
  public:
    And_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmp_exprContext *cmp_expr();
    And_exprContext *and_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  And_exprContext* and_expr();
  And_exprContext* and_expr(int precedence);
  class  Or_exprContext : public antlr4::ParserRuleContext {
  public:
    Or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_exprContext *and_expr();
    Or_exprContext *or_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Or_exprContext* or_expr();
  Or_exprContext* or_expr(int precedence);
  class  Range_exprContext : public antlr4::ParserRuleContext {
  public:
    Range_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Or_exprContext *> or_expr();
    Or_exprContext* or_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_exprContext* range_expr();

  class  Assign_exprContext : public antlr4::ParserRuleContext {
  public:
    Assign_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_exprContext *range_expr();
    Assign_exprContext *assign_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_exprContext* assign_expr();

  class  Post_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Post_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prim_expr_no_structContext *prim_expr_no_struct();
    Post_expr_no_structContext *post_expr_no_struct();
    Post_expr_tailContext *post_expr_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Post_expr_no_structContext* post_expr_no_struct();
  Post_expr_no_structContext* post_expr_no_struct(int precedence);
  class  Pre_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Pre_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Post_expr_no_structContext *post_expr_no_struct();
    Expr_attrsContext *expr_attrs();
    Pre_expr_no_structContext *pre_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pre_expr_no_structContext* pre_expr_no_struct();

  class  Cast_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Cast_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pre_expr_no_structContext *pre_expr_no_struct();
    Cast_expr_no_structContext *cast_expr_no_struct();
    Ty_sumContext *ty_sum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cast_expr_no_structContext* cast_expr_no_struct();
  Cast_expr_no_structContext* cast_expr_no_struct(int precedence);
  class  Mul_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Mul_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cast_expr_no_structContext *cast_expr_no_struct();
    Mul_expr_no_structContext *mul_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mul_expr_no_structContext* mul_expr_no_struct();
  Mul_expr_no_structContext* mul_expr_no_struct(int precedence);
  class  Add_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Add_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mul_expr_no_structContext *mul_expr_no_struct();
    Add_expr_no_structContext *add_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Add_expr_no_structContext* add_expr_no_struct();
  Add_expr_no_structContext* add_expr_no_struct(int precedence);
  class  Shift_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Shift_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_expr_no_structContext *add_expr_no_struct();
    Shift_expr_no_structContext *shift_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Shift_expr_no_structContext* shift_expr_no_struct();
  Shift_expr_no_structContext* shift_expr_no_struct(int precedence);
  class  Bit_and_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Bit_and_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Shift_expr_no_structContext *shift_expr_no_struct();
    Bit_and_expr_no_structContext *bit_and_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_and_expr_no_structContext* bit_and_expr_no_struct();
  Bit_and_expr_no_structContext* bit_and_expr_no_struct(int precedence);
  class  Bit_xor_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Bit_xor_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_and_expr_no_structContext *bit_and_expr_no_struct();
    Bit_xor_expr_no_structContext *bit_xor_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_xor_expr_no_structContext* bit_xor_expr_no_struct();
  Bit_xor_expr_no_structContext* bit_xor_expr_no_struct(int precedence);
  class  Bit_or_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Bit_or_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_xor_expr_no_structContext *bit_xor_expr_no_struct();
    Bit_or_expr_no_structContext *bit_or_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_or_expr_no_structContext* bit_or_expr_no_struct();
  Bit_or_expr_no_structContext* bit_or_expr_no_struct(int precedence);
  class  Cmp_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Cmp_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_or_expr_no_structContext *> bit_or_expr_no_struct();
    Bit_or_expr_no_structContext* bit_or_expr_no_struct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmp_expr_no_structContext* cmp_expr_no_struct();

  class  And_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    And_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmp_expr_no_structContext *cmp_expr_no_struct();
    And_expr_no_structContext *and_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  And_expr_no_structContext* and_expr_no_struct();
  And_expr_no_structContext* and_expr_no_struct(int precedence);
  class  Or_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Or_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_expr_no_structContext *and_expr_no_struct();
    Or_expr_no_structContext *or_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Or_expr_no_structContext* or_expr_no_struct();
  Or_expr_no_structContext* or_expr_no_struct(int precedence);
  class  Range_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Range_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Or_expr_no_structContext *> or_expr_no_struct();
    Or_expr_no_structContext* or_expr_no_struct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_expr_no_structContext* range_expr_no_struct();

  class  Assign_expr_no_structContext : public antlr4::ParserRuleContext {
  public:
    Assign_expr_no_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_expr_no_structContext *range_expr_no_struct();
    Assign_expr_no_structContext *assign_expr_no_struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_expr_no_structContext* assign_expr_no_struct();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentContext* ident();

  class  Any_identContext : public antlr4::ParserRuleContext {
  public:
    Any_identContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Any_identContext* any_ident();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool item_macro_path_parentSempred(Item_macro_path_parentContext *_localctx, size_t predicateIndex);
  bool path_parentSempred(Path_parentContext *_localctx, size_t predicateIndex);
  bool lifetime_boundSempred(Lifetime_boundContext *_localctx, size_t predicateIndex);
  bool ty_path_parentSempred(Ty_path_parentContext *_localctx, size_t predicateIndex);
  bool boundSempred(BoundContext *_localctx, size_t predicateIndex);
  bool match_patSempred(Match_patContext *_localctx, size_t predicateIndex);
  bool post_exprSempred(Post_exprContext *_localctx, size_t predicateIndex);
  bool cast_exprSempred(Cast_exprContext *_localctx, size_t predicateIndex);
  bool mul_exprSempred(Mul_exprContext *_localctx, size_t predicateIndex);
  bool add_exprSempred(Add_exprContext *_localctx, size_t predicateIndex);
  bool shift_exprSempred(Shift_exprContext *_localctx, size_t predicateIndex);
  bool bit_and_exprSempred(Bit_and_exprContext *_localctx, size_t predicateIndex);
  bool bit_xor_exprSempred(Bit_xor_exprContext *_localctx, size_t predicateIndex);
  bool bit_or_exprSempred(Bit_or_exprContext *_localctx, size_t predicateIndex);
  bool and_exprSempred(And_exprContext *_localctx, size_t predicateIndex);
  bool or_exprSempred(Or_exprContext *_localctx, size_t predicateIndex);
  bool post_expr_no_structSempred(Post_expr_no_structContext *_localctx, size_t predicateIndex);
  bool cast_expr_no_structSempred(Cast_expr_no_structContext *_localctx, size_t predicateIndex);
  bool mul_expr_no_structSempred(Mul_expr_no_structContext *_localctx, size_t predicateIndex);
  bool add_expr_no_structSempred(Add_expr_no_structContext *_localctx, size_t predicateIndex);
  bool shift_expr_no_structSempred(Shift_expr_no_structContext *_localctx, size_t predicateIndex);
  bool bit_and_expr_no_structSempred(Bit_and_expr_no_structContext *_localctx, size_t predicateIndex);
  bool bit_xor_expr_no_structSempred(Bit_xor_expr_no_structContext *_localctx, size_t predicateIndex);
  bool bit_or_expr_no_structSempred(Bit_or_expr_no_structContext *_localctx, size_t predicateIndex);
  bool and_expr_no_structSempred(And_expr_no_structContext *_localctx, size_t predicateIndex);
  bool or_expr_no_structSempred(Or_expr_no_structContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

