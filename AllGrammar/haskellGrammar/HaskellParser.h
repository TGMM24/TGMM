
// Generated from HaskellParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  HaskellParser : public antlr4::Parser {
public:
  enum {
    NEWLINE = 1, TAB = 2, WS = 3, AS = 4, CASE = 5, CLASS = 6, DATA = 7, 
    DEFAULT = 8, DERIVING = 9, DO = 10, ELSE = 11, HIDING = 12, IF = 13, 
    IMPORT = 14, IN = 15, INFIX = 16, INFIXL = 17, INFIXR = 18, INSTANCE = 19, 
    LET = 20, MODULE = 21, NEWTYPE = 22, OF = 23, QUALIFIED = 24, THEN = 25, 
    TYPE = 26, WHERE = 27, WILDCARD = 28, FORALL = 29, FOREIGN = 30, EXPORT = 31, 
    SAFE = 32, INTERRUPTIBLE = 33, UNSAFE = 34, MDO = 35, FAMILY = 36, ROLE = 37, 
    STDCALL = 38, CCALL = 39, CAPI = 40, CPPCALL = 41, JSCALL = 42, REC = 43, 
    GROUP = 44, BY = 45, USING = 46, PATTERN = 47, STOCK = 48, ANYCLASS = 49, 
    VIA = 50, LANGUAGE = 51, OPTIONS_GHC = 52, OPTIONS = 53, INLINE = 54, 
    NOINLINE = 55, SPECIALISE = 56, SPECINLINE = 57, SOURCE = 58, RULES = 59, 
    SCC = 60, DEPRECATED = 61, WARNING = 62, UNPACK = 63, NOUNPACK = 64, 
    ANN = 65, MINIMAL = 66, CTYPE = 67, OVERLAPPING = 68, OVERLAPPABLE = 69, 
    OVERLAPS = 70, INCOHERENT = 71, COMPLETE = 72, LCASE = 73, DoubleArrow = 74, 
    DoubleColon = 75, Arrow = 76, Revarrow = 77, LarrowTail = 78, RarrowTail = 79, 
    LLarrowTail = 80, RRarrowTail = 81, Hash = 82, Less = 83, Greater = 84, 
    Ampersand = 85, Pipe = 86, Bang = 87, Caret = 88, Plus = 89, Minus = 90, 
    Asterisk = 91, Percent = 92, Divide = 93, Tilde = 94, Atsign = 95, DDollar = 96, 
    Dollar = 97, DoubleDot = 98, Dot = 99, Semi = 100, QuestionMark = 101, 
    Comma = 102, Colon = 103, Eq = 104, Quote = 105, DoubleQuote = 106, 
    ReverseSlash = 107, BackQuote = 108, AopenParen = 109, AcloseParen = 110, 
    TopenTexpQuote = 111, TcloseTExpQoute = 112, TopenExpQuote = 113, TopenPatQuote = 114, 
    TopenTypQoute = 115, TopenDecQoute = 116, TcloseQoute = 117, OpenBoxParen = 118, 
    CloseBoxParen = 119, OpenRoundBracket = 120, CloseRoundBracket = 121, 
    OpenSquareBracket = 122, CloseSquareBracket = 123, CHAR = 124, STRING = 125, 
    VARID = 126, CONID = 127, OpenPragmaBracket = 128, ClosePragmaBracket = 129, 
    COMMENT = 130, NCOMMENT = 131, OCURLY = 132, CCURLY = 133, VOCURLY = 134, 
    VCCURLY = 135, SEMI = 136, DECIMAL = 137, OCTAL = 138, HEXADECIMAL = 139, 
    FLOAT = 140, EXPONENT = 141
  };

  enum {
    RuleModule = 0, RuleModule_content = 1, RuleWhere_module = 2, RuleModule_body = 3, 
    RulePragmas = 4, RulePragma = 5, RuleLanguage_pragma = 6, RuleOptions_ghc = 7, 
    RuleSimple_options = 8, RuleExtension_ = 9, RuleBody = 10, RuleImpdecls = 11, 
    RuleExports = 12, RuleExprt = 13, RuleImpdecl = 14, RuleImpspec = 15, 
    RuleHimport = 16, RuleCname = 17, RuleFixity = 18, RuleOps = 19, RuleTopdecls = 20, 
    RuleTopdecl = 21, RuleCl_decl = 22, RuleTy_decl = 23, RuleStandalone_kind_sig = 24, 
    RuleSks_vars = 25, RuleInst_decl = 26, RuleOverlap_pragma = 27, RuleDeriv_strategy_no_via = 28, 
    RuleDeriv_strategy_via = 29, RuleDeriv_standalone_strategy = 30, RuleOpt_injective_info = 31, 
    RuleInjectivity_cond = 32, RuleInj_varids = 33, RuleWhere_type_family = 34, 
    RuleTy_fam_inst_eqn_list = 35, RuleTy_fam_inst_eqns = 36, RuleTy_fam_inst_eqn = 37, 
    RuleAt_decl_cls = 38, RuleAt_decl_inst = 39, RuleOpt_kind_sig = 40, 
    RuleOpt_datafam_kind_sig = 41, RuleOpt_tyfam_kind_sig = 42, RuleOpt_at_kind_inj_sig = 43, 
    RuleTycl_hdr = 44, RuleTycl_hdr_inst = 45, RuleCapi_ctype = 46, RuleStandalone_deriving = 47, 
    RuleRole_annot = 48, RuleRoles = 49, RuleRole = 50, RulePattern_synonym_decl = 51, 
    RulePattern_synonym_lhs = 52, RuleVars_ = 53, RuleCvars = 54, RuleWhere_decls = 55, 
    RulePattern_synonym_sig = 56, RuleDecl_cls = 57, RuleDecls_cls = 58, 
    RuleDecllist_cls = 59, RuleWhere_cls = 60, RuleDecl_inst = 61, RuleDecls_inst = 62, 
    RuleDecllist_inst = 63, RuleWhere_inst = 64, RuleDecls = 65, RuleDecllist = 66, 
    RuleBinds = 67, RuleWherebinds = 68, RuleRules = 69, RulePragma_rule = 70, 
    RuleRule_activation_marker = 71, RuleRule_activation = 72, RuleRule_foralls = 73, 
    RuleRule_vars = 74, RuleRule_var = 75, RuleWarnings = 76, RulePragma_warning = 77, 
    RuleDeprecations = 78, RulePragma_deprecation = 79, RuleStrings = 80, 
    RuleStringlist = 81, RuleAnnotation = 82, RuleFdecl = 83, RuleCallconv = 84, 
    RuleSafety = 85, RuleFspec = 86, RuleOpt_sig = 87, RuleOpt_tyconsig = 88, 
    RuleSigtype = 89, RuleSigtypedoc = 90, RuleSig_vars = 91, RuleSigtypes1 = 92, 
    RuleUnpackedness = 93, RuleForall_vis_flag = 94, RuleKtype = 95, RuleKtypedoc = 96, 
    RuleCtype = 97, RuleCtypedoc = 98, RuleTycl_context = 99, RuleConstr_context = 100, 
    RuleType_ = 101, RuleTypedoc = 102, RuleConstr_btype = 103, RuleConstr_tyapps = 104, 
    RuleConstr_tyapp = 105, RuleBtype = 106, RuleTyapps = 107, RuleTyapp = 108, 
    RuleAtype = 109, RuleInst_type = 110, RuleDeriv_types = 111, RuleComma_types = 112, 
    RuleBar_types2 = 113, RuleTv_bndrs = 114, RuleTv_bndr = 115, RuleTv_bndr_no_braces = 116, 
    RuleFds = 117, RuleFds1 = 118, RuleFd = 119, RuleVarids0 = 120, RuleKind = 121, 
    RuleGadt_constrlist = 122, RuleGadt_constrs = 123, RuleGadt_constr_with_doc = 124, 
    RuleGadt_constr = 125, RuleConstrs = 126, RuleConstrs1 = 127, RuleConstr = 128, 
    RuleForall = 129, RuleConstr_stuff = 130, RuleFielddecls = 131, RuleFielddecl = 132, 
    RuleDerivings = 133, RuleDeriving = 134, RuleDeriv_clause_types = 135, 
    RuleDecl_no_th = 136, RuleDecl = 137, RuleRhs = 138, RuleGdrhs = 139, 
    RuleGdrh = 140, RuleSigdecl = 141, RuleActivation = 142, RuleTh_quasiquote = 143, 
    RuleTh_qquasiquote = 144, RuleQuasiquote = 145, RuleExp = 146, RuleInfixexp = 147, 
    RuleExp10p = 148, RuleExp10 = 149, RuleFexp = 150, RuleAexp = 151, RuleAexp1 = 152, 
    RuleAexp2 = 153, RuleSplice_exp = 154, RuleSplice_untyped = 155, RuleSplice_typed = 156, 
    RuleCmdargs = 157, RuleAcmd = 158, RuleCvtopbody = 159, RuleCvtopdecls0 = 160, 
    RuleTexp = 161, RuleTup_exprs = 162, RuleCommas_tup_tail = 163, RuleTup_tail = 164, 
    RuleList_ = 165, RuleLexps = 166, RuleFlattenedpquals = 167, RulePquals = 168, 
    RuleSquals = 169, RuleTransformqual = 170, RuleGuards = 171, RuleGuard_ = 172, 
    RuleAlts = 173, RuleAlt = 174, RuleAlt_rhs = 175, RuleRalt = 176, RuleGdpats = 177, 
    RuleIfgdpats = 178, RuleGdpat = 179, RulePat = 180, RuleBindpat = 181, 
    RuleApat = 182, RuleApats = 183, RuleFpat = 184, RuleStmtlist = 185, 
    RuleStmts = 186, RuleStmt = 187, RuleQual = 188, RuleFbinds = 189, RuleFbind = 190, 
    RuleDbinds = 191, RuleDbind = 192, RuleName_boolformula_opt = 193, RuleName_boolformula_and = 194, 
    RuleName_boolformula_and_list = 195, RuleName_boolformula_atom = 196, 
    RuleNamelist = 197, RuleName_var = 198, RuleQcon_nowiredlist = 199, 
    RuleQcon = 200, RuleGen_qcon = 201, RuleCon = 202, RuleCon_list = 203, 
    RuleSysdcon_nolist = 204, RuleSysdcon = 205, RuleConop = 206, RuleQconop = 207, 
    RuleGconsym = 208, RuleGtycon = 209, RuleNtgtycon = 210, RuleOqtycon = 211, 
    RuleQtyconop = 212, RuleQtycon = 213, RuleTycon = 214, RuleQtyconsym = 215, 
    RuleTyconsym = 216, RuleOp = 217, RuleVarop = 218, RuleQop = 219, RuleQopm = 220, 
    RuleHole_op = 221, RuleQvarop = 222, RuleQvaropm = 223, RuleTyvar = 224, 
    RuleTyvarop = 225, RuleTyvarid = 226, RuleTycls = 227, RuleQtycls = 228, 
    RuleVar_ = 229, RuleQvar = 230, RuleQvarid = 231, RuleVarid = 232, RuleQvarsym = 233, 
    RuleQvarsym_no_minus = 234, RuleVarsym = 235, RuleVarsym_no_minus = 236, 
    RuleSpecial_id = 237, RuleQconid = 238, RuleConid = 239, RuleQconsym = 240, 
    RuleConsym = 241, RuleLiteral = 242, RuleOpen_ = 243, RuleClose = 244, 
    RuleSemi = 245, RuleModid = 246, RuleCommas = 247, RuleBars = 248, RuleSpecial = 249, 
    RuleSymbol = 250, RuleAscSymbol = 251, RuleInteger = 252, RulePfloat = 253, 
    RulePchar = 254, RulePstring = 255
  };

  explicit HaskellParser(antlr4::TokenStream *input);

  HaskellParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~HaskellParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ModuleContext;
  class Module_contentContext;
  class Where_moduleContext;
  class Module_bodyContext;
  class PragmasContext;
  class PragmaContext;
  class Language_pragmaContext;
  class Options_ghcContext;
  class Simple_optionsContext;
  class Extension_Context;
  class BodyContext;
  class ImpdeclsContext;
  class ExportsContext;
  class ExprtContext;
  class ImpdeclContext;
  class ImpspecContext;
  class HimportContext;
  class CnameContext;
  class FixityContext;
  class OpsContext;
  class TopdeclsContext;
  class TopdeclContext;
  class Cl_declContext;
  class Ty_declContext;
  class Standalone_kind_sigContext;
  class Sks_varsContext;
  class Inst_declContext;
  class Overlap_pragmaContext;
  class Deriv_strategy_no_viaContext;
  class Deriv_strategy_viaContext;
  class Deriv_standalone_strategyContext;
  class Opt_injective_infoContext;
  class Injectivity_condContext;
  class Inj_varidsContext;
  class Where_type_familyContext;
  class Ty_fam_inst_eqn_listContext;
  class Ty_fam_inst_eqnsContext;
  class Ty_fam_inst_eqnContext;
  class At_decl_clsContext;
  class At_decl_instContext;
  class Opt_kind_sigContext;
  class Opt_datafam_kind_sigContext;
  class Opt_tyfam_kind_sigContext;
  class Opt_at_kind_inj_sigContext;
  class Tycl_hdrContext;
  class Tycl_hdr_instContext;
  class Capi_ctypeContext;
  class Standalone_derivingContext;
  class Role_annotContext;
  class RolesContext;
  class RoleContext;
  class Pattern_synonym_declContext;
  class Pattern_synonym_lhsContext;
  class Vars_Context;
  class CvarsContext;
  class Where_declsContext;
  class Pattern_synonym_sigContext;
  class Decl_clsContext;
  class Decls_clsContext;
  class Decllist_clsContext;
  class Where_clsContext;
  class Decl_instContext;
  class Decls_instContext;
  class Decllist_instContext;
  class Where_instContext;
  class DeclsContext;
  class DecllistContext;
  class BindsContext;
  class WherebindsContext;
  class RulesContext;
  class Pragma_ruleContext;
  class Rule_activation_markerContext;
  class Rule_activationContext;
  class Rule_forallsContext;
  class Rule_varsContext;
  class Rule_varContext;
  class WarningsContext;
  class Pragma_warningContext;
  class DeprecationsContext;
  class Pragma_deprecationContext;
  class StringsContext;
  class StringlistContext;
  class AnnotationContext;
  class FdeclContext;
  class CallconvContext;
  class SafetyContext;
  class FspecContext;
  class Opt_sigContext;
  class Opt_tyconsigContext;
  class SigtypeContext;
  class SigtypedocContext;
  class Sig_varsContext;
  class Sigtypes1Context;
  class UnpackednessContext;
  class Forall_vis_flagContext;
  class KtypeContext;
  class KtypedocContext;
  class CtypeContext;
  class CtypedocContext;
  class Tycl_contextContext;
  class Constr_contextContext;
  class Type_Context;
  class TypedocContext;
  class Constr_btypeContext;
  class Constr_tyappsContext;
  class Constr_tyappContext;
  class BtypeContext;
  class TyappsContext;
  class TyappContext;
  class AtypeContext;
  class Inst_typeContext;
  class Deriv_typesContext;
  class Comma_typesContext;
  class Bar_types2Context;
  class Tv_bndrsContext;
  class Tv_bndrContext;
  class Tv_bndr_no_bracesContext;
  class FdsContext;
  class Fds1Context;
  class FdContext;
  class Varids0Context;
  class KindContext;
  class Gadt_constrlistContext;
  class Gadt_constrsContext;
  class Gadt_constr_with_docContext;
  class Gadt_constrContext;
  class ConstrsContext;
  class Constrs1Context;
  class ConstrContext;
  class ForallContext;
  class Constr_stuffContext;
  class FielddeclsContext;
  class FielddeclContext;
  class DerivingsContext;
  class DerivingContext;
  class Deriv_clause_typesContext;
  class Decl_no_thContext;
  class DeclContext;
  class RhsContext;
  class GdrhsContext;
  class GdrhContext;
  class SigdeclContext;
  class ActivationContext;
  class Th_quasiquoteContext;
  class Th_qquasiquoteContext;
  class QuasiquoteContext;
  class ExpContext;
  class InfixexpContext;
  class Exp10pContext;
  class Exp10Context;
  class FexpContext;
  class AexpContext;
  class Aexp1Context;
  class Aexp2Context;
  class Splice_expContext;
  class Splice_untypedContext;
  class Splice_typedContext;
  class CmdargsContext;
  class AcmdContext;
  class CvtopbodyContext;
  class Cvtopdecls0Context;
  class TexpContext;
  class Tup_exprsContext;
  class Commas_tup_tailContext;
  class Tup_tailContext;
  class List_Context;
  class LexpsContext;
  class FlattenedpqualsContext;
  class PqualsContext;
  class SqualsContext;
  class TransformqualContext;
  class GuardsContext;
  class Guard_Context;
  class AltsContext;
  class AltContext;
  class Alt_rhsContext;
  class RaltContext;
  class GdpatsContext;
  class IfgdpatsContext;
  class GdpatContext;
  class PatContext;
  class BindpatContext;
  class ApatContext;
  class ApatsContext;
  class FpatContext;
  class StmtlistContext;
  class StmtsContext;
  class StmtContext;
  class QualContext;
  class FbindsContext;
  class FbindContext;
  class DbindsContext;
  class DbindContext;
  class Name_boolformula_optContext;
  class Name_boolformula_andContext;
  class Name_boolformula_and_listContext;
  class Name_boolformula_atomContext;
  class NamelistContext;
  class Name_varContext;
  class Qcon_nowiredlistContext;
  class QconContext;
  class Gen_qconContext;
  class ConContext;
  class Con_listContext;
  class Sysdcon_nolistContext;
  class SysdconContext;
  class ConopContext;
  class QconopContext;
  class GconsymContext;
  class GtyconContext;
  class NtgtyconContext;
  class OqtyconContext;
  class QtyconopContext;
  class QtyconContext;
  class TyconContext;
  class QtyconsymContext;
  class TyconsymContext;
  class OpContext;
  class VaropContext;
  class QopContext;
  class QopmContext;
  class Hole_opContext;
  class QvaropContext;
  class QvaropmContext;
  class TyvarContext;
  class TyvaropContext;
  class TyvaridContext;
  class TyclsContext;
  class QtyclsContext;
  class Var_Context;
  class QvarContext;
  class QvaridContext;
  class VaridContext;
  class QvarsymContext;
  class Qvarsym_no_minusContext;
  class VarsymContext;
  class Varsym_no_minusContext;
  class Special_idContext;
  class QconidContext;
  class ConidContext;
  class QconsymContext;
  class ConsymContext;
  class LiteralContext;
  class Open_Context;
  class CloseContext;
  class SemiContext;
  class ModidContext;
  class CommasContext;
  class BarsContext;
  class SpecialContext;
  class SymbolContext;
  class AscSymbolContext;
  class IntegerContext;
  class PfloatContext;
  class PcharContext;
  class PstringContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Module_contentContext *module_content();
    BodyContext *body();
    antlr4::tree::TerminalNode *OCURLY();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);
    PragmasContext *pragmas();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  Module_contentContext : public antlr4::ParserRuleContext {
  public:
    Module_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    ModidContext *modid();
    Where_moduleContext *where_module();
    ExportsContext *exports();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_contentContext* module_content();

  class  Where_moduleContext : public antlr4::ParserRuleContext {
  public:
    Where_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Module_bodyContext *module_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_moduleContext* where_module();

  class  Module_bodyContext : public antlr4::ParserRuleContext {
  public:
    Module_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    BodyContext *body();
    CloseContext *close();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_bodyContext* module_body();

  class  PragmasContext : public antlr4::ParserRuleContext {
  public:
    PragmasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PragmaContext *> pragma();
    PragmaContext* pragma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmasContext* pragmas();

  class  PragmaContext : public antlr4::ParserRuleContext {
  public:
    PragmaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Language_pragmaContext *language_pragma();
    Options_ghcContext *options_ghc();
    Simple_optionsContext *simple_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaContext* pragma();

  class  Language_pragmaContext : public antlr4::ParserRuleContext {
  public:
    Language_pragmaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *LANGUAGE();
    std::vector<Extension_Context *> extension_();
    Extension_Context* extension_(size_t i);
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Language_pragmaContext* language_pragma();

  class  Options_ghcContext : public antlr4::ParserRuleContext {
  public:
    Options_ghcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *OPTIONS_GHC();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);
    SemiContext *semi();
    std::vector<VaridContext *> varid();
    VaridContext* varid(size_t i);
    std::vector<ConidContext *> conid();
    ConidContext* conid(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Options_ghcContext* options_ghc();

  class  Simple_optionsContext : public antlr4::ParserRuleContext {
  public:
    Simple_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);
    SemiContext *semi();
    std::vector<VaridContext *> varid();
    VaridContext* varid(size_t i);
    std::vector<ConidContext *> conid();
    ConidContext* conid(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_optionsContext* simple_options();

  class  Extension_Context : public antlr4::ParserRuleContext {
  public:
    Extension_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_Context* extension_();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImpdeclsContext *impdecls();
    TopdeclsContext *topdecls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  ImpdeclsContext : public antlr4::ParserRuleContext {
  public:
    ImpdeclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImpdeclContext *> impdecl();
    ImpdeclContext* impdecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImpdeclsContext* impdecls();

  class  ExportsContext : public antlr4::ParserRuleContext {
  public:
    ExportsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<ExprtContext *> exprt();
    ExprtContext* exprt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExportsContext* exports();

  class  ExprtContext : public antlr4::ParserRuleContext {
  public:
    ExprtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QvarContext *> qvar();
    QvarContext* qvar(size_t i);
    QtyconContext *qtycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<CnameContext *> cname();
    CnameContext* cname(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    QtyclsContext *qtycls();
    antlr4::tree::TerminalNode *MODULE();
    ModidContext *modid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprtContext* exprt();

  class  ImpdeclContext : public antlr4::ParserRuleContext {
  public:
    ImpdeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<ModidContext *> modid();
    ModidContext* modid(size_t i);
    antlr4::tree::TerminalNode *QUALIFIED();
    antlr4::tree::TerminalNode *AS();
    ImpspecContext *impspec();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImpdeclContext* impdecl();

  class  ImpspecContext : public antlr4::ParserRuleContext {
  public:
    ImpspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<HimportContext *> himport();
    HimportContext* himport(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *HIDING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImpspecContext* impspec();

  class  HimportContext : public antlr4::ParserRuleContext {
  public:
    HimportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_Context *var_();
    TyconContext *tycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    std::vector<CnameContext *> cname();
    CnameContext* cname(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    TyclsContext *tycls();
    Sig_varsContext *sig_vars();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HimportContext* himport();

  class  CnameContext : public antlr4::ParserRuleContext {
  public:
    CnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_Context *var_();
    ConContext *con();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CnameContext* cname();

  class  FixityContext : public antlr4::ParserRuleContext {
  public:
    FixityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INFIXL();
    antlr4::tree::TerminalNode *INFIXR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FixityContext* fixity();

  class  OpsContext : public antlr4::ParserRuleContext {
  public:
    OpsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OpContext *> op();
    OpContext* op(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpsContext* ops();

  class  TopdeclsContext : public antlr4::ParserRuleContext {
  public:
    TopdeclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TopdeclContext *> topdecl();
    TopdeclContext* topdecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopdeclsContext* topdecls();

  class  TopdeclContext : public antlr4::ParserRuleContext {
  public:
    TopdeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cl_declContext *cl_decl();
    Ty_declContext *ty_decl();
    Standalone_kind_sigContext *standalone_kind_sig();
    Inst_declContext *inst_decl();
    Standalone_derivingContext *standalone_deriving();
    Role_annotContext *role_annot();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    Comma_typesContext *comma_types();
    antlr4::tree::TerminalNode *FOREIGN();
    FdeclContext *fdecl();
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *DEPRECATED();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    DeprecationsContext *deprecations();
    antlr4::tree::TerminalNode *WARNING();
    WarningsContext *warnings();
    antlr4::tree::TerminalNode *RULES();
    RulesContext *rules();
    AnnotationContext *annotation();
    Decl_no_thContext *decl_no_th();
    InfixexpContext *infixexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopdeclContext* topdecl();

  class  Cl_declContext : public antlr4::ParserRuleContext {
  public:
    Cl_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    Tycl_hdrContext *tycl_hdr();
    FdsContext *fds();
    Where_clsContext *where_cls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cl_declContext* cl_decl();

  class  Ty_declContext : public antlr4::ParserRuleContext {
  public:
    Ty_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Type_Context *type_();
    antlr4::tree::TerminalNode *Eq();
    KtypedocContext *ktypedoc();
    antlr4::tree::TerminalNode *FAMILY();
    Opt_tyfam_kind_sigContext *opt_tyfam_kind_sig();
    Opt_injective_infoContext *opt_injective_info();
    Where_type_familyContext *where_type_family();
    antlr4::tree::TerminalNode *DATA();
    Tycl_hdrContext *tycl_hdr();
    ConstrsContext *constrs();
    Capi_ctypeContext *capi_ctype();
    DerivingsContext *derivings();
    antlr4::tree::TerminalNode *NEWTYPE();
    Opt_kind_sigContext *opt_kind_sig();
    Gadt_constrlistContext *gadt_constrlist();
    Opt_datafam_kind_sigContext *opt_datafam_kind_sig();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_declContext* ty_decl();

  class  Standalone_kind_sigContext : public antlr4::ParserRuleContext {
  public:
    Standalone_kind_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Sks_varsContext *sks_vars();
    antlr4::tree::TerminalNode *DoubleColon();
    KtypedocContext *ktypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Standalone_kind_sigContext* standalone_kind_sig();

  class  Sks_varsContext : public antlr4::ParserRuleContext {
  public:
    Sks_varsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OqtyconContext *> oqtycon();
    OqtyconContext* oqtycon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sks_varsContext* sks_vars();

  class  Inst_declContext : public antlr4::ParserRuleContext {
  public:
    Inst_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_typeContext *inst_type();
    Overlap_pragmaContext *overlap_pragma();
    Where_instContext *where_inst();
    antlr4::tree::TerminalNode *TYPE();
    Ty_fam_inst_eqnContext *ty_fam_inst_eqn();
    antlr4::tree::TerminalNode *DATA();
    Tycl_hdr_instContext *tycl_hdr_inst();
    Capi_ctypeContext *capi_ctype();
    DerivingsContext *derivings();
    antlr4::tree::TerminalNode *NEWTYPE();
    Opt_kind_sigContext *opt_kind_sig();
    Gadt_constrlistContext *gadt_constrlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_declContext* inst_decl();

  class  Overlap_pragmaContext : public antlr4::ParserRuleContext {
  public:
    Overlap_pragmaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *OVERLAPPABLE();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    antlr4::tree::TerminalNode *OVERLAPPING();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *INCOHERENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Overlap_pragmaContext* overlap_pragma();

  class  Deriv_strategy_no_viaContext : public antlr4::ParserRuleContext {
  public:
    Deriv_strategy_no_viaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOCK();
    antlr4::tree::TerminalNode *ANYCLASS();
    antlr4::tree::TerminalNode *NEWTYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deriv_strategy_no_viaContext* deriv_strategy_no_via();

  class  Deriv_strategy_viaContext : public antlr4::ParserRuleContext {
  public:
    Deriv_strategy_viaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIA();
    KtypeContext *ktype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deriv_strategy_viaContext* deriv_strategy_via();

  class  Deriv_standalone_strategyContext : public antlr4::ParserRuleContext {
  public:
    Deriv_standalone_strategyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOCK();
    antlr4::tree::TerminalNode *ANYCLASS();
    antlr4::tree::TerminalNode *NEWTYPE();
    Deriv_strategy_viaContext *deriv_strategy_via();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deriv_standalone_strategyContext* deriv_standalone_strategy();

  class  Opt_injective_infoContext : public antlr4::ParserRuleContext {
  public:
    Opt_injective_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pipe();
    Injectivity_condContext *injectivity_cond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_injective_infoContext* opt_injective_info();

  class  Injectivity_condContext : public antlr4::ParserRuleContext {
  public:
    Injectivity_condContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyvaridContext *tyvarid();
    antlr4::tree::TerminalNode *Arrow();
    Inj_varidsContext *inj_varids();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Injectivity_condContext* injectivity_cond();

  class  Inj_varidsContext : public antlr4::ParserRuleContext {
  public:
    Inj_varidsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TyvaridContext *> tyvarid();
    TyvaridContext* tyvarid(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inj_varidsContext* inj_varids();

  class  Where_type_familyContext : public antlr4::ParserRuleContext {
  public:
    Where_type_familyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Ty_fam_inst_eqn_listContext *ty_fam_inst_eqn_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_type_familyContext* where_type_family();

  class  Ty_fam_inst_eqn_listContext : public antlr4::ParserRuleContext {
  public:
    Ty_fam_inst_eqn_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    Ty_fam_inst_eqnsContext *ty_fam_inst_eqns();
    antlr4::tree::TerminalNode *OCURLY();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_fam_inst_eqn_listContext* ty_fam_inst_eqn_list();

  class  Ty_fam_inst_eqnsContext : public antlr4::ParserRuleContext {
  public:
    Ty_fam_inst_eqnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ty_fam_inst_eqnContext *> ty_fam_inst_eqn();
    Ty_fam_inst_eqnContext* ty_fam_inst_eqn(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_fam_inst_eqnsContext* ty_fam_inst_eqns();

  class  Ty_fam_inst_eqnContext : public antlr4::ParserRuleContext {
  public:
    Ty_fam_inst_eqnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *Dot();
    Type_Context *type_();
    antlr4::tree::TerminalNode *Eq();
    KtypeContext *ktype();
    Tv_bndrsContext *tv_bndrs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ty_fam_inst_eqnContext* ty_fam_inst_eqn();

  class  At_decl_clsContext : public antlr4::ParserRuleContext {
  public:
    At_decl_clsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    Type_Context *type_();
    antlr4::tree::TerminalNode *FAMILY();
    Opt_datafam_kind_sigContext *opt_datafam_kind_sig();
    antlr4::tree::TerminalNode *TYPE();
    Opt_at_kind_inj_sigContext *opt_at_kind_inj_sig();
    Ty_fam_inst_eqnContext *ty_fam_inst_eqn();
    antlr4::tree::TerminalNode *INSTANCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  At_decl_clsContext* at_decl_cls();

  class  At_decl_instContext : public antlr4::ParserRuleContext {
  public:
    At_decl_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Ty_fam_inst_eqnContext *ty_fam_inst_eqn();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *DATA();
    Tycl_hdr_instContext *tycl_hdr_inst();
    ConstrsContext *constrs();
    Capi_ctypeContext *capi_ctype();
    DerivingsContext *derivings();
    antlr4::tree::TerminalNode *NEWTYPE();
    Opt_kind_sigContext *opt_kind_sig();
    Gadt_constrlistContext *gadt_constrlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  At_decl_instContext* at_decl_inst();

  class  Opt_kind_sigContext : public antlr4::ParserRuleContext {
  public:
    Opt_kind_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_kind_sigContext* opt_kind_sig();

  class  Opt_datafam_kind_sigContext : public antlr4::ParserRuleContext {
  public:
    Opt_datafam_kind_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_datafam_kind_sigContext* opt_datafam_kind_sig();

  class  Opt_tyfam_kind_sigContext : public antlr4::ParserRuleContext {
  public:
    Opt_tyfam_kind_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();
    antlr4::tree::TerminalNode *Eq();
    Tv_bndrContext *tv_bndr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_tyfam_kind_sigContext* opt_tyfam_kind_sig();

  class  Opt_at_kind_inj_sigContext : public antlr4::ParserRuleContext {
  public:
    Opt_at_kind_inj_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();
    antlr4::tree::TerminalNode *Eq();
    Tv_bndr_no_bracesContext *tv_bndr_no_braces();
    antlr4::tree::TerminalNode *Pipe();
    Injectivity_condContext *injectivity_cond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_at_kind_inj_sigContext* opt_at_kind_inj_sig();

  class  Tycl_hdrContext : public antlr4::ParserRuleContext {
  public:
    Tycl_hdrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tycl_contextContext *tycl_context();
    antlr4::tree::TerminalNode *DoubleArrow();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tycl_hdrContext* tycl_hdr();

  class  Tycl_hdr_instContext : public antlr4::ParserRuleContext {
  public:
    Tycl_hdr_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *Dot();
    Tycl_contextContext *tycl_context();
    antlr4::tree::TerminalNode *DoubleArrow();
    Type_Context *type_();
    Tv_bndrsContext *tv_bndrs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tycl_hdr_instContext* tycl_hdr_inst();

  class  Capi_ctypeContext : public antlr4::ParserRuleContext {
  public:
    Capi_ctypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *CTYPE();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *ClosePragmaBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Capi_ctypeContext* capi_ctype();

  class  Standalone_derivingContext : public antlr4::ParserRuleContext {
  public:
    Standalone_derivingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DERIVING();
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_typeContext *inst_type();
    Deriv_standalone_strategyContext *deriv_standalone_strategy();
    Overlap_pragmaContext *overlap_pragma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Standalone_derivingContext* standalone_deriving();

  class  Role_annotContext : public antlr4::ParserRuleContext {
  public:
    Role_annotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ROLE();
    OqtyconContext *oqtycon();
    RolesContext *roles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Role_annotContext* role_annot();

  class  RolesContext : public antlr4::ParserRuleContext {
  public:
    RolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleContext *> role();
    RoleContext* role(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RolesContext* roles();

  class  RoleContext : public antlr4::ParserRuleContext {
  public:
    RoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    antlr4::tree::TerminalNode *WILDCARD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RoleContext* role();

  class  Pattern_synonym_declContext : public antlr4::ParserRuleContext {
  public:
    Pattern_synonym_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATTERN();
    Pattern_synonym_lhsContext *pattern_synonym_lhs();
    antlr4::tree::TerminalNode *Eq();
    PatContext *pat();
    antlr4::tree::TerminalNode *Revarrow();
    Where_declsContext *where_decls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern_synonym_declContext* pattern_synonym_decl();

  class  Pattern_synonym_lhsContext : public antlr4::ParserRuleContext {
  public:
    Pattern_synonym_lhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConContext *con();
    Vars_Context *vars_();
    std::vector<VaridContext *> varid();
    VaridContext* varid(size_t i);
    ConopContext *conop();
    antlr4::tree::TerminalNode *OCURLY();
    CvarsContext *cvars();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern_synonym_lhsContext* pattern_synonym_lhs();

  class  Vars_Context : public antlr4::ParserRuleContext {
  public:
    Vars_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VaridContext *> varid();
    VaridContext* varid(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Vars_Context* vars_();

  class  CvarsContext : public antlr4::ParserRuleContext {
  public:
    CvarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_Context *> var_();
    Var_Context* var_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CvarsContext* cvars();

  class  Where_declsContext : public antlr4::ParserRuleContext {
  public:
    Where_declsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Open_Context *open_();
    CloseContext *close();
    DeclsContext *decls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_declsContext* where_decls();

  class  Pattern_synonym_sigContext : public antlr4::ParserRuleContext {
  public:
    Pattern_synonym_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATTERN();
    Con_listContext *con_list();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypedocContext *sigtypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pattern_synonym_sigContext* pattern_synonym_sig();

  class  Decl_clsContext : public antlr4::ParserRuleContext {
  public:
    Decl_clsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    At_decl_clsContext *at_decl_cls();
    DeclContext *decl();
    antlr4::tree::TerminalNode *DEFAULT();
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypedocContext *sigtypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decl_clsContext* decl_cls();

  class  Decls_clsContext : public antlr4::ParserRuleContext {
  public:
    Decls_clsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decl_clsContext *> decl_cls();
    Decl_clsContext* decl_cls(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decls_clsContext* decls_cls();

  class  Decllist_clsContext : public antlr4::ParserRuleContext {
  public:
    Decllist_clsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    Decls_clsContext *decls_cls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decllist_clsContext* decllist_cls();

  class  Where_clsContext : public antlr4::ParserRuleContext {
  public:
    Where_clsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Decllist_clsContext *decllist_cls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_clsContext* where_cls();

  class  Decl_instContext : public antlr4::ParserRuleContext {
  public:
    Decl_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    At_decl_instContext *at_decl_inst();
    DeclContext *decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decl_instContext* decl_inst();

  class  Decls_instContext : public antlr4::ParserRuleContext {
  public:
    Decls_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decl_instContext *> decl_inst();
    Decl_instContext* decl_inst(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decls_instContext* decls_inst();

  class  Decllist_instContext : public antlr4::ParserRuleContext {
  public:
    Decllist_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    Decls_instContext *decls_inst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decllist_instContext* decllist_inst();

  class  Where_instContext : public antlr4::ParserRuleContext {
  public:
    Where_instContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Decllist_instContext *decllist_inst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_instContext* where_inst();

  class  DeclsContext : public antlr4::ParserRuleContext {
  public:
    DeclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclsContext* decls();

  class  DecllistContext : public antlr4::ParserRuleContext {
  public:
    DecllistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    DeclsContext *decls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecllistContext* decllist();

  class  BindsContext : public antlr4::ParserRuleContext {
  public:
    BindsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecllistContext *decllist();
    Open_Context *open_();
    CloseContext *close();
    DbindsContext *dbinds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BindsContext* binds();

  class  WherebindsContext : public antlr4::ParserRuleContext {
  public:
    WherebindsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    BindsContext *binds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WherebindsContext* wherebinds();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pragma_ruleContext *> pragma_rule();
    Pragma_ruleContext* pragma_rule(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RulesContext* rules();

  class  Pragma_ruleContext : public antlr4::ParserRuleContext {
  public:
    Pragma_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PstringContext *pstring();
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *Eq();
    ExpContext *exp();
    Rule_activationContext *rule_activation();
    Rule_forallsContext *rule_foralls();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_ruleContext* pragma_rule();

  class  Rule_activation_markerContext : public antlr4::ParserRuleContext {
  public:
    Rule_activation_markerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    VarsymContext *varsym();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rule_activation_markerContext* rule_activation_marker();

  class  Rule_activationContext : public antlr4::ParserRuleContext {
  public:
    Rule_activationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    Rule_activation_markerContext *rule_activation_marker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rule_activationContext* rule_activation();

  class  Rule_forallsContext : public antlr4::ParserRuleContext {
  public:
    Rule_forallsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FORALL();
    antlr4::tree::TerminalNode* FORALL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);
    std::vector<Rule_varsContext *> rule_vars();
    Rule_varsContext* rule_vars(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rule_forallsContext* rule_foralls();

  class  Rule_varsContext : public antlr4::ParserRuleContext {
  public:
    Rule_varsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_varContext *> rule_var();
    Rule_varContext* rule_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rule_varsContext* rule_vars();

  class  Rule_varContext : public antlr4::ParserRuleContext {
  public:
    Rule_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *DoubleColon();
    CtypeContext *ctype();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rule_varContext* rule_var();

  class  WarningsContext : public antlr4::ParserRuleContext {
  public:
    WarningsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pragma_warningContext *> pragma_warning();
    Pragma_warningContext* pragma_warning(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WarningsContext* warnings();

  class  Pragma_warningContext : public antlr4::ParserRuleContext {
  public:
    Pragma_warningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    StringsContext *strings();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_warningContext* pragma_warning();

  class  DeprecationsContext : public antlr4::ParserRuleContext {
  public:
    DeprecationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pragma_deprecationContext *> pragma_deprecation();
    Pragma_deprecationContext* pragma_deprecation(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeprecationsContext* deprecations();

  class  Pragma_deprecationContext : public antlr4::ParserRuleContext {
  public:
    Pragma_deprecationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    StringsContext *strings();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_deprecationContext* pragma_deprecation();

  class  StringsContext : public antlr4::ParserRuleContext {
  public:
    StringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PstringContext *pstring();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    StringlistContext *stringlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringsContext* strings();

  class  StringlistContext : public antlr4::ParserRuleContext {
  public:
    StringlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PstringContext *> pstring();
    PstringContext* pstring(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringlistContext* stringlist();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *ANN();
    Name_varContext *name_var();
    AexpContext *aexp();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    TyconContext *tycon();
    antlr4::tree::TerminalNode *MODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  FdeclContext : public antlr4::ParserRuleContext {
  public:
    FdeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    CallconvContext *callconv();
    FspecContext *fspec();
    SafetyContext *safety();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FdeclContext* fdecl();

  class  CallconvContext : public antlr4::ParserRuleContext {
  public:
    CallconvContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CCALL();
    antlr4::tree::TerminalNode *STDCALL();
    antlr4::tree::TerminalNode *CPPCALL();
    antlr4::tree::TerminalNode *JSCALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallconvContext* callconv();

  class  SafetyContext : public antlr4::ParserRuleContext {
  public:
    SafetyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *INTERRUPTIBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SafetyContext* safety();

  class  FspecContext : public antlr4::ParserRuleContext {
  public:
    FspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_Context *var_();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypedocContext *sigtypedoc();
    PstringContext *pstring();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FspecContext* fspec();

  class  Opt_sigContext : public antlr4::ParserRuleContext {
  public:
    Opt_sigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypeContext *sigtype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_sigContext* opt_sig();

  class  Opt_tyconsigContext : public antlr4::ParserRuleContext {
  public:
    Opt_tyconsigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    GtyconContext *gtycon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_tyconsigContext* opt_tyconsig();

  class  SigtypeContext : public antlr4::ParserRuleContext {
  public:
    SigtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CtypeContext *ctype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SigtypeContext* sigtype();

  class  SigtypedocContext : public antlr4::ParserRuleContext {
  public:
    SigtypedocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CtypedocContext *ctypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SigtypedocContext* sigtypedoc();

  class  Sig_varsContext : public antlr4::ParserRuleContext {
  public:
    Sig_varsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_Context *> var_();
    Var_Context* var_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sig_varsContext* sig_vars();

  class  Sigtypes1Context : public antlr4::ParserRuleContext {
  public:
    Sigtypes1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SigtypeContext *> sigtype();
    SigtypeContext* sigtype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sigtypes1Context* sigtypes1();

  class  UnpackednessContext : public antlr4::ParserRuleContext {
  public:
    UnpackednessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *UNPACK();
    antlr4::tree::TerminalNode *ClosePragmaBracket();
    antlr4::tree::TerminalNode *NOUNPACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnpackednessContext* unpackedness();

  class  Forall_vis_flagContext : public antlr4::ParserRuleContext {
  public:
    Forall_vis_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Forall_vis_flagContext* forall_vis_flag();

  class  KtypeContext : public antlr4::ParserRuleContext {
  public:
    KtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CtypeContext *ctype();
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KtypeContext* ktype();

  class  KtypedocContext : public antlr4::ParserRuleContext {
  public:
    KtypedocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CtypedocContext *ctypedoc();
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KtypedocContext* ktypedoc();

  class  CtypeContext : public antlr4::ParserRuleContext {
  public:
    CtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    Forall_vis_flagContext *forall_vis_flag();
    CtypeContext *ctype();
    Tv_bndrsContext *tv_bndrs();
    BtypeContext *btype();
    antlr4::tree::TerminalNode *DoubleArrow();
    Var_Context *var_();
    antlr4::tree::TerminalNode *DoubleColon();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CtypeContext* ctype();

  class  CtypedocContext : public antlr4::ParserRuleContext {
  public:
    CtypedocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    Forall_vis_flagContext *forall_vis_flag();
    CtypedocContext *ctypedoc();
    Tv_bndrsContext *tv_bndrs();
    Tycl_contextContext *tycl_context();
    antlr4::tree::TerminalNode *DoubleArrow();
    Var_Context *var_();
    antlr4::tree::TerminalNode *DoubleColon();
    Type_Context *type_();
    TypedocContext *typedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CtypedocContext* ctypedoc();

  class  Tycl_contextContext : public antlr4::ParserRuleContext {
  public:
    Tycl_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BtypeContext *btype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tycl_contextContext* tycl_context();

  class  Constr_contextContext : public antlr4::ParserRuleContext {
  public:
    Constr_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constr_btypeContext *constr_btype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constr_contextContext* constr_context();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BtypeContext *btype();
    antlr4::tree::TerminalNode *Arrow();
    CtypeContext *ctype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_Context* type_();

  class  TypedocContext : public antlr4::ParserRuleContext {
  public:
    TypedocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BtypeContext *btype();
    antlr4::tree::TerminalNode *Arrow();
    CtypedocContext *ctypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypedocContext* typedoc();

  class  Constr_btypeContext : public antlr4::ParserRuleContext {
  public:
    Constr_btypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constr_tyappsContext *constr_tyapps();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constr_btypeContext* constr_btype();

  class  Constr_tyappsContext : public antlr4::ParserRuleContext {
  public:
    Constr_tyappsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constr_tyappContext *> constr_tyapp();
    Constr_tyappContext* constr_tyapp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constr_tyappsContext* constr_tyapps();

  class  Constr_tyappContext : public antlr4::ParserRuleContext {
  public:
    Constr_tyappContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyappContext *tyapp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constr_tyappContext* constr_tyapp();

  class  BtypeContext : public antlr4::ParserRuleContext {
  public:
    BtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyappsContext *tyapps();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BtypeContext* btype();

  class  TyappsContext : public antlr4::ParserRuleContext {
  public:
    TyappsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TyappContext *> tyapp();
    TyappContext* tyapp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyappsContext* tyapps();

  class  TyappContext : public antlr4::ParserRuleContext {
  public:
    TyappContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtypeContext *atype();
    antlr4::tree::TerminalNode *Atsign();
    QtyconopContext *qtyconop();
    TyvaropContext *tyvarop();
    antlr4::tree::TerminalNode *Quote();
    QconopContext *qconop();
    VaropContext *varop();
    UnpackednessContext *unpackedness();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyappContext* tyapp();

  class  AtypeContext : public antlr4::ParserRuleContext {
  public:
    AtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NtgtyconContext *ntgtycon();
    TyvarContext *tyvar();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *Tilde();
    AtypeContext *atype();
    antlr4::tree::TerminalNode *Bang();
    antlr4::tree::TerminalNode *OCURLY();
    antlr4::tree::TerminalNode *CCURLY();
    FielddeclsContext *fielddecls();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    KtypeContext *ktype();
    antlr4::tree::TerminalNode *Comma();
    Comma_typesContext *comma_types();
    antlr4::tree::TerminalNode *OpenBoxParen();
    antlr4::tree::TerminalNode *CloseBoxParen();
    Bar_types2Context *bar_types2();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    QuasiquoteContext *quasiquote();
    Splice_untypedContext *splice_untyped();
    antlr4::tree::TerminalNode *Quote();
    Qcon_nowiredlistContext *qcon_nowiredlist();
    Var_Context *var_();
    IntegerContext *integer();
    PstringContext *pstring();
    antlr4::tree::TerminalNode *WILDCARD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtypeContext* atype();

  class  Inst_typeContext : public antlr4::ParserRuleContext {
  public:
    Inst_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SigtypeContext *sigtype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_typeContext* inst_type();

  class  Deriv_typesContext : public antlr4::ParserRuleContext {
  public:
    Deriv_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KtypedocContext *> ktypedoc();
    KtypedocContext* ktypedoc(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deriv_typesContext* deriv_types();

  class  Comma_typesContext : public antlr4::ParserRuleContext {
  public:
    Comma_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KtypeContext *> ktype();
    KtypeContext* ktype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comma_typesContext* comma_types();

  class  Bar_types2Context : public antlr4::ParserRuleContext {
  public:
    Bar_types2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KtypeContext *> ktype();
    KtypeContext* ktype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bar_types2Context* bar_types2();

  class  Tv_bndrsContext : public antlr4::ParserRuleContext {
  public:
    Tv_bndrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tv_bndrContext *> tv_bndr();
    Tv_bndrContext* tv_bndr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tv_bndrsContext* tv_bndrs();

  class  Tv_bndrContext : public antlr4::ParserRuleContext {
  public:
    Tv_bndrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tv_bndr_no_bracesContext *tv_bndr_no_braces();
    antlr4::tree::TerminalNode *OCURLY();
    TyvarContext *tyvar();
    antlr4::tree::TerminalNode *CCURLY();
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tv_bndrContext* tv_bndr();

  class  Tv_bndr_no_bracesContext : public antlr4::ParserRuleContext {
  public:
    Tv_bndr_no_bracesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyvarContext *tyvar();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *DoubleColon();
    KindContext *kind();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tv_bndr_no_bracesContext* tv_bndr_no_braces();

  class  FdsContext : public antlr4::ParserRuleContext {
  public:
    FdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pipe();
    Fds1Context *fds1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FdsContext* fds();

  class  Fds1Context : public antlr4::ParserRuleContext {
  public:
    Fds1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FdContext *> fd();
    FdContext* fd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fds1Context* fds1();

  class  FdContext : public antlr4::ParserRuleContext {
  public:
    FdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    std::vector<Varids0Context *> varids0();
    Varids0Context* varids0(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FdContext* fd();

  class  Varids0Context : public antlr4::ParserRuleContext {
  public:
    Varids0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TyvarContext *> tyvar();
    TyvarContext* tyvar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Varids0Context* varids0();

  class  KindContext : public antlr4::ParserRuleContext {
  public:
    KindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CtypeContext *ctype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KindContext* kind();

  class  Gadt_constrlistContext : public antlr4::ParserRuleContext {
  public:
    Gadt_constrlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Open_Context *open_();
    CloseContext *close();
    Gadt_constrsContext *gadt_constrs();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gadt_constrlistContext* gadt_constrlist();

  class  Gadt_constrsContext : public antlr4::ParserRuleContext {
  public:
    Gadt_constrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Gadt_constr_with_docContext *> gadt_constr_with_doc();
    Gadt_constr_with_docContext* gadt_constr_with_doc(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gadt_constrsContext* gadt_constrs();

  class  Gadt_constr_with_docContext : public antlr4::ParserRuleContext {
  public:
    Gadt_constr_with_docContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gadt_constrContext *gadt_constr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gadt_constr_with_docContext* gadt_constr_with_doc();

  class  Gadt_constrContext : public antlr4::ParserRuleContext {
  public:
    Gadt_constrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Con_listContext *con_list();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypedocContext *sigtypedoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gadt_constrContext* gadt_constr();

  class  ConstrsContext : public antlr4::ParserRuleContext {
  public:
    ConstrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eq();
    Constrs1Context *constrs1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrsContext* constrs();

  class  Constrs1Context : public antlr4::ParserRuleContext {
  public:
    Constrs1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstrContext *> constr();
    ConstrContext* constr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constrs1Context* constrs1();

  class  ConstrContext : public antlr4::ParserRuleContext {
  public:
    ConstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constr_stuffContext *constr_stuff();
    ForallContext *forall();
    Constr_contextContext *constr_context();
    antlr4::tree::TerminalNode *DoubleArrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstrContext* constr();

  class  ForallContext : public antlr4::ParserRuleContext {
  public:
    ForallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *Dot();
    Tv_bndrsContext *tv_bndrs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForallContext* forall();

  class  Constr_stuffContext : public antlr4::ParserRuleContext {
  public:
    Constr_stuffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constr_tyappsContext *constr_tyapps();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constr_stuffContext* constr_stuff();

  class  FielddeclsContext : public antlr4::ParserRuleContext {
  public:
    FielddeclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FielddeclContext *> fielddecl();
    FielddeclContext* fielddecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FielddeclsContext* fielddecls();

  class  FielddeclContext : public antlr4::ParserRuleContext {
  public:
    FielddeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sig_varsContext *sig_vars();
    antlr4::tree::TerminalNode *DoubleColon();
    CtypeContext *ctype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FielddeclContext* fielddecl();

  class  DerivingsContext : public antlr4::ParserRuleContext {
  public:
    DerivingsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DerivingContext *> deriving();
    DerivingContext* deriving(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivingsContext* derivings();

  class  DerivingContext : public antlr4::ParserRuleContext {
  public:
    DerivingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DERIVING();
    Deriv_clause_typesContext *deriv_clause_types();
    Deriv_strategy_no_viaContext *deriv_strategy_no_via();
    Deriv_strategy_viaContext *deriv_strategy_via();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivingContext* deriving();

  class  Deriv_clause_typesContext : public antlr4::ParserRuleContext {
  public:
    Deriv_clause_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QtyconContext *qtycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    Deriv_typesContext *deriv_types();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deriv_clause_typesContext* deriv_clause_types();

  class  Decl_no_thContext : public antlr4::ParserRuleContext {
  public:
    Decl_no_thContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SigdeclContext *sigdecl();
    InfixexpContext *infixexp();
    RhsContext *rhs();
    Opt_sigContext *opt_sig();
    Pattern_synonym_declContext *pattern_synonym_decl();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Decl_no_thContext* decl_no_th();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decl_no_thContext *decl_no_th();
    Splice_expContext *splice_exp();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclContext* decl();

  class  RhsContext : public antlr4::ParserRuleContext {
  public:
    RhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eq();
    ExpContext *exp();
    WherebindsContext *wherebinds();
    GdrhsContext *gdrhs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RhsContext* rhs();

  class  GdrhsContext : public antlr4::ParserRuleContext {
  public:
    GdrhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GdrhContext *> gdrh();
    GdrhContext* gdrh(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GdrhsContext* gdrhs();

  class  GdrhContext : public antlr4::ParserRuleContext {
  public:
    GdrhContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pipe();
    GuardsContext *guards();
    antlr4::tree::TerminalNode *Eq();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GdrhContext* gdrh();

  class  SigdeclContext : public antlr4::ParserRuleContext {
  public:
    SigdeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypedocContext *sigtypedoc();
    Var_Context *var_();
    antlr4::tree::TerminalNode *Comma();
    Sig_varsContext *sig_vars();
    FixityContext *fixity();
    OpsContext *ops();
    IntegerContext *integer();
    Pattern_synonym_sigContext *pattern_synonym_sig();
    antlr4::tree::TerminalNode *OpenPragmaBracket();
    antlr4::tree::TerminalNode *COMPLETE();
    Con_listContext *con_list();
    std::vector<antlr4::tree::TerminalNode *> ClosePragmaBracket();
    antlr4::tree::TerminalNode* ClosePragmaBracket(size_t i);
    Opt_tyconsigContext *opt_tyconsig();
    antlr4::tree::TerminalNode *INLINE();
    QvarContext *qvar();
    ActivationContext *activation();
    antlr4::tree::TerminalNode *SCC();
    PstringContext *pstring();
    antlr4::tree::TerminalNode *SPECIALISE();
    Sigtypes1Context *sigtypes1();
    antlr4::tree::TerminalNode *SPECINLINE();
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_typeContext *inst_type();
    antlr4::tree::TerminalNode *MINIMAL();
    Name_boolformula_optContext *name_boolformula_opt();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SigdeclContext* sigdecl();

  class  ActivationContext : public antlr4::ParserRuleContext {
  public:
    ActivationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    Rule_activation_markerContext *rule_activation_marker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ActivationContext* activation();

  class  Th_quasiquoteContext : public antlr4::ParserRuleContext {
  public:
    Th_quasiquoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    VaridContext *varid();
    antlr4::tree::TerminalNode *Pipe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Th_quasiquoteContext* th_quasiquote();

  class  Th_qquasiquoteContext : public antlr4::ParserRuleContext {
  public:
    Th_qquasiquoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenSquareBracket();
    QvaridContext *qvarid();
    antlr4::tree::TerminalNode *Pipe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Th_qquasiquoteContext* th_qquasiquote();

  class  QuasiquoteContext : public antlr4::ParserRuleContext {
  public:
    QuasiquoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Th_quasiquoteContext *th_quasiquote();
    Th_qquasiquoteContext *th_qquasiquote();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuasiquoteContext* quasiquote();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *DoubleColon();
    SigtypeContext *sigtype();
    antlr4::tree::TerminalNode *LarrowTail();
    ExpContext *exp();
    antlr4::tree::TerminalNode *RarrowTail();
    antlr4::tree::TerminalNode *LLarrowTail();
    antlr4::tree::TerminalNode *RRarrowTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpContext* exp();

  class  InfixexpContext : public antlr4::ParserRuleContext {
  public:
    InfixexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp10Context *exp10();
    std::vector<QopContext *> qop();
    QopContext* qop(size_t i);
    std::vector<Exp10pContext *> exp10p();
    Exp10pContext* exp10p(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixexpContext* infixexp();

  class  Exp10pContext : public antlr4::ParserRuleContext {
  public:
    Exp10pContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp10Context *exp10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exp10pContext* exp10p();

  class  Exp10Context : public antlr4::ParserRuleContext {
  public:
    Exp10Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FexpContext *fexp();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exp10Context* exp10();

  class  FexpContext : public antlr4::ParserRuleContext {
  public:
    FexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AexpContext *> aexp();
    AexpContext* aexp(size_t i);
    antlr4::tree::TerminalNode *Atsign();
    AtypeContext *atype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FexpContext* fexp();

  class  AexpContext : public antlr4::ParserRuleContext {
  public:
    AexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvarContext *qvar();
    antlr4::tree::TerminalNode *Atsign();
    AexpContext *aexp();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Bang();
    antlr4::tree::TerminalNode *ReverseSlash();
    ApatsContext *apats();
    antlr4::tree::TerminalNode *Arrow();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *LET();
    DecllistContext *decllist();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LCASE();
    AltsContext *alts();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);
    IfgdpatsContext *ifgdpats();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *DO();
    StmtlistContext *stmtlist();
    antlr4::tree::TerminalNode *MDO();
    Aexp1Context *aexp1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AexpContext* aexp();

  class  Aexp1Context : public antlr4::ParserRuleContext {
  public:
    Aexp1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Aexp2Context *aexp2();
    std::vector<antlr4::tree::TerminalNode *> OCURLY();
    antlr4::tree::TerminalNode* OCURLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CCURLY();
    antlr4::tree::TerminalNode* CCURLY(size_t i);
    std::vector<FbindsContext *> fbinds();
    FbindsContext* fbinds(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aexp1Context* aexp1();

  class  Aexp2Context : public antlr4::ParserRuleContext {
  public:
    Aexp2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvarContext *qvar();
    QconContext *qcon();
    VaridContext *varid();
    LiteralContext *literal();
    PstringContext *pstring();
    IntegerContext *integer();
    PfloatContext *pfloat();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    TexpContext *texp();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    Tup_exprsContext *tup_exprs();
    antlr4::tree::TerminalNode *OpenBoxParen();
    antlr4::tree::TerminalNode *CloseBoxParen();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    List_Context *list_();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    antlr4::tree::TerminalNode *WILDCARD();
    Splice_untypedContext *splice_untyped();
    Splice_typedContext *splice_typed();
    antlr4::tree::TerminalNode *Quote();
    antlr4::tree::TerminalNode *DoubleQuote();
    TyvarContext *tyvar();
    GtyconContext *gtycon();
    antlr4::tree::TerminalNode *TopenExpQuote();
    ExpContext *exp();
    antlr4::tree::TerminalNode *TcloseQoute();
    antlr4::tree::TerminalNode *TopenTexpQuote();
    antlr4::tree::TerminalNode *TcloseTExpQoute();
    antlr4::tree::TerminalNode *TopenTypQoute();
    KtypeContext *ktype();
    antlr4::tree::TerminalNode *TopenPatQuote();
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *TopenDecQoute();
    CvtopbodyContext *cvtopbody();
    QuasiquoteContext *quasiquote();
    std::vector<antlr4::tree::TerminalNode *> AopenParen();
    antlr4::tree::TerminalNode* AopenParen(size_t i);
    AexpContext *aexp();
    CmdargsContext *cmdargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Aexp2Context* aexp2();

  class  Splice_expContext : public antlr4::ParserRuleContext {
  public:
    Splice_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Splice_typedContext *splice_typed();
    Splice_untypedContext *splice_untyped();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Splice_expContext* splice_exp();

  class  Splice_untypedContext : public antlr4::ParserRuleContext {
  public:
    Splice_untypedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar();
    AexpContext *aexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Splice_untypedContext* splice_untyped();

  class  Splice_typedContext : public antlr4::ParserRuleContext {
  public:
    Splice_typedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DDollar();
    AexpContext *aexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Splice_typedContext* splice_typed();

  class  CmdargsContext : public antlr4::ParserRuleContext {
  public:
    CmdargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AcmdContext *> acmd();
    AcmdContext* acmd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CmdargsContext* cmdargs();

  class  AcmdContext : public antlr4::ParserRuleContext {
  public:
    AcmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AexpContext *aexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcmdContext* acmd();

  class  CvtopbodyContext : public antlr4::ParserRuleContext {
  public:
    CvtopbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    Cvtopdecls0Context *cvtopdecls0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CvtopbodyContext* cvtopbody();

  class  Cvtopdecls0Context : public antlr4::ParserRuleContext {
  public:
    Cvtopdecls0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TopdeclsContext *topdecls();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cvtopdecls0Context* cvtopdecls0();

  class  TexpContext : public antlr4::ParserRuleContext {
  public:
    TexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    InfixexpContext *infixexp();
    QopContext *qop();
    QopmContext *qopm();
    antlr4::tree::TerminalNode *Arrow();
    TexpContext *texp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TexpContext* texp();

  class  Tup_exprsContext : public antlr4::ParserRuleContext {
  public:
    Tup_exprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TexpContext *texp();
    Commas_tup_tailContext *commas_tup_tail();
    std::vector<BarsContext *> bars();
    BarsContext* bars(size_t i);
    CommasContext *commas();
    Tup_tailContext *tup_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tup_exprsContext* tup_exprs();

  class  Commas_tup_tailContext : public antlr4::ParserRuleContext {
  public:
    Commas_tup_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommasContext *commas();
    Tup_tailContext *tup_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Commas_tup_tailContext* commas_tup_tail();

  class  Tup_tailContext : public antlr4::ParserRuleContext {
  public:
    Tup_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TexpContext *texp();
    Commas_tup_tailContext *commas_tup_tail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tup_tailContext* tup_tail();

  class  List_Context : public antlr4::ParserRuleContext {
  public:
    List_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TexpContext *texp();
    LexpsContext *lexps();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *Comma();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *Pipe();
    FlattenedpqualsContext *flattenedpquals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_Context* list_();

  class  LexpsContext : public antlr4::ParserRuleContext {
  public:
    LexpsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TexpContext *> texp();
    TexpContext* texp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LexpsContext* lexps();

  class  FlattenedpqualsContext : public antlr4::ParserRuleContext {
  public:
    FlattenedpqualsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PqualsContext *pquals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FlattenedpqualsContext* flattenedpquals();

  class  PqualsContext : public antlr4::ParserRuleContext {
  public:
    PqualsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SqualsContext *> squals();
    SqualsContext* squals(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PqualsContext* pquals();

  class  SqualsContext : public antlr4::ParserRuleContext {
  public:
    SqualsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TransformqualContext *> transformqual();
    TransformqualContext* transformqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<QualContext *> qual();
    QualContext* qual(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SqualsContext* squals();

  class  TransformqualContext : public antlr4::ParserRuleContext {
  public:
    TransformqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *USING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransformqualContext* transformqual();

  class  GuardsContext : public antlr4::ParserRuleContext {
  public:
    GuardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Guard_Context *> guard_();
    Guard_Context* guard_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GuardsContext* guards();

  class  Guard_Context : public antlr4::ParserRuleContext {
  public:
    Guard_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    antlr4::tree::TerminalNode *Revarrow();
    InfixexpContext *infixexp();
    antlr4::tree::TerminalNode *LET();
    DecllistContext *decllist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Guard_Context* guard_();

  class  AltsContext : public antlr4::ParserRuleContext {
  public:
    AltsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    std::vector<AltContext *> alt();
    AltContext* alt(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AltsContext* alts();

  class  AltContext : public antlr4::ParserRuleContext {
  public:
    AltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatContext *pat();
    Alt_rhsContext *alt_rhs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AltContext* alt();

  class  Alt_rhsContext : public antlr4::ParserRuleContext {
  public:
    Alt_rhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RaltContext *ralt();
    WherebindsContext *wherebinds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alt_rhsContext* alt_rhs();

  class  RaltContext : public antlr4::ParserRuleContext {
  public:
    RaltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    ExpContext *exp();
    GdpatsContext *gdpats();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RaltContext* ralt();

  class  GdpatsContext : public antlr4::ParserRuleContext {
  public:
    GdpatsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GdpatContext *> gdpat();
    GdpatContext* gdpat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GdpatsContext* gdpats();

  class  IfgdpatsContext : public antlr4::ParserRuleContext {
  public:
    IfgdpatsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCURLY();
    GdpatsContext *gdpats();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfgdpatsContext* ifgdpats();

  class  GdpatContext : public antlr4::ParserRuleContext {
  public:
    GdpatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pipe();
    GuardsContext *guards();
    antlr4::tree::TerminalNode *Arrow();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GdpatContext* gdpat();

  class  PatContext : public antlr4::ParserRuleContext {
  public:
    PatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatContext* pat();

  class  BindpatContext : public antlr4::ParserRuleContext {
  public:
    BindpatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BindpatContext* bindpat();

  class  ApatContext : public antlr4::ParserRuleContext {
  public:
    ApatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AexpContext *aexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ApatContext* apat();

  class  ApatsContext : public antlr4::ParserRuleContext {
  public:
    ApatsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ApatContext *> apat();
    ApatContext* apat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ApatsContext* apats();

  class  FpatContext : public antlr4::ParserRuleContext {
  public:
    FpatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvarContext *qvar();
    antlr4::tree::TerminalNode *Eq();
    PatContext *pat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FpatContext* fpat();

  class  StmtlistContext : public antlr4::ParserRuleContext {
  public:
    StmtlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_Context *open_();
    CloseContext *close();
    StmtsContext *stmts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtlistContext* stmtlist();

  class  StmtsContext : public antlr4::ParserRuleContext {
  public:
    StmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtsContext* stmts();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualContext *qual();
    antlr4::tree::TerminalNode *REC();
    StmtlistContext *stmtlist();
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtContext* stmt();

  class  QualContext : public antlr4::ParserRuleContext {
  public:
    QualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BindpatContext *bindpat();
    antlr4::tree::TerminalNode *Revarrow();
    ExpContext *exp();
    antlr4::tree::TerminalNode *LET();
    BindsContext *binds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualContext* qual();

  class  FbindsContext : public antlr4::ParserRuleContext {
  public:
    FbindsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FbindContext *> fbind();
    FbindContext* fbind(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *DoubleDot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FbindsContext* fbinds();

  class  FbindContext : public antlr4::ParserRuleContext {
  public:
    FbindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvarContext *qvar();
    antlr4::tree::TerminalNode *Eq();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FbindContext* fbind();

  class  DbindsContext : public antlr4::ParserRuleContext {
  public:
    DbindsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DbindContext *> dbind();
    DbindContext* dbind(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DbindsContext* dbinds();

  class  DbindContext : public antlr4::ParserRuleContext {
  public:
    DbindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    antlr4::tree::TerminalNode *Eq();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DbindContext* dbind();

  class  Name_boolformula_optContext : public antlr4::ParserRuleContext {
  public:
    Name_boolformula_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Name_boolformula_andContext *> name_boolformula_and();
    Name_boolformula_andContext* name_boolformula_and(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_boolformula_optContext* name_boolformula_opt();

  class  Name_boolformula_andContext : public antlr4::ParserRuleContext {
  public:
    Name_boolformula_andContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_boolformula_and_listContext *name_boolformula_and_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_boolformula_andContext* name_boolformula_and();

  class  Name_boolformula_and_listContext : public antlr4::ParserRuleContext {
  public:
    Name_boolformula_and_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Name_boolformula_atomContext *> name_boolformula_atom();
    Name_boolformula_atomContext* name_boolformula_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_boolformula_and_listContext* name_boolformula_and_list();

  class  Name_boolformula_atomContext : public antlr4::ParserRuleContext {
  public:
    Name_boolformula_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    Name_boolformula_optContext *name_boolformula_opt();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    Name_varContext *name_var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_boolformula_atomContext* name_boolformula_atom();

  class  NamelistContext : public antlr4::ParserRuleContext {
  public:
    NamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Name_varContext *> name_var();
    Name_varContext* name_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistContext* namelist();

  class  Name_varContext : public antlr4::ParserRuleContext {
  public:
    Name_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_Context *var_();
    ConContext *con();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_varContext* name_var();

  class  Qcon_nowiredlistContext : public antlr4::ParserRuleContext {
  public:
    Qcon_nowiredlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gen_qconContext *gen_qcon();
    Sysdcon_nolistContext *sysdcon_nolist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Qcon_nowiredlistContext* qcon_nowiredlist();

  class  QconContext : public antlr4::ParserRuleContext {
  public:
    QconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gen_qconContext *gen_qcon();
    SysdconContext *sysdcon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QconContext* qcon();

  class  Gen_qconContext : public antlr4::ParserRuleContext {
  public:
    Gen_qconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QconidContext *qconid();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    QconsymContext *qconsym();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gen_qconContext* gen_qcon();

  class  ConContext : public antlr4::ParserRuleContext {
  public:
    ConContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConidContext *conid();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    ConsymContext *consym();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    SysdconContext *sysdcon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConContext* con();

  class  Con_listContext : public antlr4::ParserRuleContext {
  public:
    Con_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConContext *> con();
    ConContext* con(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Con_listContext* con_list();

  class  Sysdcon_nolistContext : public antlr4::ParserRuleContext {
  public:
    Sysdcon_nolistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    CommasContext *commas();
    antlr4::tree::TerminalNode *OpenBoxParen();
    antlr4::tree::TerminalNode *CloseBoxParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sysdcon_nolistContext* sysdcon_nolist();

  class  SysdconContext : public antlr4::ParserRuleContext {
  public:
    SysdconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sysdcon_nolistContext *sysdcon_nolist();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SysdconContext* sysdcon();

  class  ConopContext : public antlr4::ParserRuleContext {
  public:
    ConopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConsymContext *consym();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    ConidContext *conid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConopContext* conop();

  class  QconopContext : public antlr4::ParserRuleContext {
  public:
    QconopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GconsymContext *gconsym();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    QconidContext *qconid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QconopContext* qconop();

  class  GconsymContext : public antlr4::ParserRuleContext {
  public:
    GconsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    QconsymContext *qconsym();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GconsymContext* gconsym();

  class  GtyconContext : public antlr4::ParserRuleContext {
  public:
    GtyconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NtgtyconContext *ntgtycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *OpenBoxParen();
    antlr4::tree::TerminalNode *CloseBoxParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GtyconContext* gtycon();

  class  NtgtyconContext : public antlr4::ParserRuleContext {
  public:
    NtgtyconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OqtyconContext *oqtycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    CommasContext *commas();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *OpenBoxParen();
    antlr4::tree::TerminalNode *CloseBoxParen();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NtgtyconContext* ntgtycon();

  class  OqtyconContext : public antlr4::ParserRuleContext {
  public:
    OqtyconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QtyconContext *qtycon();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    QtyconsymContext *qtyconsym();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OqtyconContext* oqtycon();

  class  QtyconopContext : public antlr4::ParserRuleContext {
  public:
    QtyconopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QtyconsymContext *qtyconsym();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    QtyconContext *qtycon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QtyconopContext* qtyconop();

  class  QtyconContext : public antlr4::ParserRuleContext {
  public:
    QtyconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyconContext *tycon();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QtyconContext* qtycon();

  class  TyconContext : public antlr4::ParserRuleContext {
  public:
    TyconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConidContext *conid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyconContext* tycon();

  class  QtyconsymContext : public antlr4::ParserRuleContext {
  public:
    QtyconsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QconsymContext *qconsym();
    QvarsymContext *qvarsym();
    TyconsymContext *tyconsym();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QtyconsymContext* qtyconsym();

  class  TyconsymContext : public antlr4::ParserRuleContext {
  public:
    TyconsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConsymContext *consym();
    VarsymContext *varsym();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyconsymContext* tyconsym();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaropContext *varop();
    ConopContext *conop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpContext* op();

  class  VaropContext : public antlr4::ParserRuleContext {
  public:
    VaropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarsymContext *varsym();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    VaridContext *varid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VaropContext* varop();

  class  QopContext : public antlr4::ParserRuleContext {
  public:
    QopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvaropContext *qvarop();
    QconopContext *qconop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QopContext* qop();

  class  QopmContext : public antlr4::ParserRuleContext {
  public:
    QopmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvaropmContext *qvaropm();
    QconopContext *qconop();
    Hole_opContext *hole_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QopmContext* qopm();

  class  Hole_opContext : public antlr4::ParserRuleContext {
  public:
    Hole_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    antlr4::tree::TerminalNode *WILDCARD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hole_opContext* hole_op();

  class  QvaropContext : public antlr4::ParserRuleContext {
  public:
    QvaropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvarsymContext *qvarsym();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    QvaridContext *qvarid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvaropContext* qvarop();

  class  QvaropmContext : public antlr4::ParserRuleContext {
  public:
    QvaropmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qvarsym_no_minusContext *qvarsym_no_minus();
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    QvaridContext *qvarid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvaropmContext* qvaropm();

  class  TyvarContext : public antlr4::ParserRuleContext {
  public:
    TyvarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyvarContext* tyvar();

  class  TyvaropContext : public antlr4::ParserRuleContext {
  public:
    TyvaropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BackQuote();
    antlr4::tree::TerminalNode* BackQuote(size_t i);
    TyvaridContext *tyvarid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyvaropContext* tyvarop();

  class  TyvaridContext : public antlr4::ParserRuleContext {
  public:
    TyvaridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    Special_idContext *special_id();
    antlr4::tree::TerminalNode *UNSAFE();
    antlr4::tree::TerminalNode *SAFE();
    antlr4::tree::TerminalNode *INTERRUPTIBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyvaridContext* tyvarid();

  class  TyclsContext : public antlr4::ParserRuleContext {
  public:
    TyclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConidContext *conid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TyclsContext* tycls();

  class  QtyclsContext : public antlr4::ParserRuleContext {
  public:
    QtyclsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TyclsContext *tycls();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QtyclsContext* qtycls();

  class  Var_Context : public antlr4::ParserRuleContext {
  public:
    Var_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    VarsymContext *varsym();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_Context* var_();

  class  QvarContext : public antlr4::ParserRuleContext {
  public:
    QvarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvaridContext *qvarid();
    antlr4::tree::TerminalNode *OpenRoundBracket();
    QvarsymContext *qvarsym();
    antlr4::tree::TerminalNode *CloseRoundBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvarContext* qvar();

  class  QvaridContext : public antlr4::ParserRuleContext {
  public:
    QvaridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvaridContext* qvarid();

  class  VaridContext : public antlr4::ParserRuleContext {
  public:
    VaridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARID();
    Special_idContext *special_id();
    std::vector<antlr4::tree::TerminalNode *> Hash();
    antlr4::tree::TerminalNode* Hash(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VaridContext* varid();

  class  QvarsymContext : public antlr4::ParserRuleContext {
  public:
    QvarsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarsymContext *varsym();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvarsymContext* qvarsym();

  class  Qvarsym_no_minusContext : public antlr4::ParserRuleContext {
  public:
    Qvarsym_no_minusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Varsym_no_minusContext *varsym_no_minus();
    QvarsymContext *qvarsym();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Qvarsym_no_minusContext* qvarsym_no_minus();

  class  VarsymContext : public antlr4::ParserRuleContext {
  public:
    VarsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Varsym_no_minusContext *varsym_no_minus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarsymContext* varsym();

  class  Varsym_no_minusContext : public antlr4::ParserRuleContext {
  public:
    Varsym_no_minusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AscSymbolContext *> ascSymbol();
    AscSymbolContext* ascSymbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Varsym_no_minusContext* varsym_no_minus();

  class  Special_idContext : public antlr4::ParserRuleContext {
  public:
    Special_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *QUALIFIED();
    antlr4::tree::TerminalNode *HIDING();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *STDCALL();
    antlr4::tree::TerminalNode *CCALL();
    antlr4::tree::TerminalNode *CAPI();
    antlr4::tree::TerminalNode *JSCALL();
    antlr4::tree::TerminalNode *STOCK();
    antlr4::tree::TerminalNode *ANYCLASS();
    antlr4::tree::TerminalNode *VIA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Special_idContext* special_id();

  class  QconidContext : public antlr4::ParserRuleContext {
  public:
    QconidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConidContext *conid();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QconidContext* qconid();

  class  ConidContext : public antlr4::ParserRuleContext {
  public:
    ConidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONID();
    std::vector<antlr4::tree::TerminalNode *> Hash();
    antlr4::tree::TerminalNode* Hash(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConidContext* conid();

  class  QconsymContext : public antlr4::ParserRuleContext {
  public:
    QconsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConsymContext *consym();
    ModidContext *modid();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QconsymContext* qconsym();

  class  ConsymContext : public antlr4::ParserRuleContext {
  public:
    ConsymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    std::vector<AscSymbolContext *> ascSymbol();
    AscSymbolContext* ascSymbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsymContext* consym();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    PfloatContext *pfloat();
    PcharContext *pchar();
    PstringContext *pstring();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  Open_Context : public antlr4::ParserRuleContext {
  public:
    Open_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOCURLY();
    antlr4::tree::TerminalNode *OCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Open_Context* open_();

  class  CloseContext : public antlr4::ParserRuleContext {
  public:
    CloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCCURLY();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CloseContext* close();

  class  SemiContext : public antlr4::ParserRuleContext {
  public:
    SemiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemiContext* semi();

  class  ModidContext : public antlr4::ParserRuleContext {
  public:
    ModidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConidContext *> conid();
    ConidContext* conid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModidContext* modid();

  class  CommasContext : public antlr4::ParserRuleContext {
  public:
    CommasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommasContext* commas();

  class  BarsContext : public antlr4::ParserRuleContext {
  public:
    BarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Pipe();
    antlr4::tree::TerminalNode* Pipe(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BarsContext* bars();

  class  SpecialContext : public antlr4::ParserRuleContext {
  public:
    SpecialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenRoundBracket();
    antlr4::tree::TerminalNode *CloseRoundBracket();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *OpenSquareBracket();
    antlr4::tree::TerminalNode *CloseSquareBracket();
    antlr4::tree::TerminalNode *BackQuote();
    antlr4::tree::TerminalNode *OCURLY();
    antlr4::tree::TerminalNode *CCURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecialContext* special();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AscSymbolContext *ascSymbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolContext* symbol();

  class  AscSymbolContext : public antlr4::ParserRuleContext {
  public:
    AscSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Bang();
    antlr4::tree::TerminalNode *Hash();
    antlr4::tree::TerminalNode *Dollar();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Eq();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *QuestionMark();
    antlr4::tree::TerminalNode *Atsign();
    antlr4::tree::TerminalNode *ReverseSlash();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Pipe();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AscSymbolContext* ascSymbol();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *OCTAL();
    antlr4::tree::TerminalNode *HEXADECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerContext* integer();

  class  PfloatContext : public antlr4::ParserRuleContext {
  public:
    PfloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PfloatContext* pfloat();

  class  PcharContext : public antlr4::ParserRuleContext {
  public:
    PcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PcharContext* pchar();

  class  PstringContext : public antlr4::ParserRuleContext {
  public:
    PstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PstringContext* pstring();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

