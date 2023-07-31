// Generated from /bdata2/yyh/ASTCC/AllGrammar/rustGrammar/Rust.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class RustParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, T__53=54, T__54=55, T__55=56, T__56=57, T__57=58, T__58=59, 
		T__59=60, T__60=61, T__61=62, T__62=63, T__63=64, T__64=65, T__65=66, 
		T__66=67, T__67=68, T__68=69, T__69=70, T__70=71, T__71=72, T__72=73, 
		T__73=74, T__74=75, T__75=76, T__76=77, T__77=78, T__78=79, T__79=80, 
		T__80=81, T__81=82, T__82=83, T__83=84, CashMoney=85, Lifetime=86, Ident=87, 
		CharLit=88, StringLit=89, ByteLit=90, ByteStringLit=91, BareIntLit=92, 
		FullIntLit=93, FloatLit=94, Whitespace=95, LineComment=96, BlockComment=97;
	public static final int
		RULE_crate = 0, RULE_mod_body = 1, RULE_visibility = 2, RULE_visibility_restriction = 3, 
		RULE_item = 4, RULE_pub_item = 5, RULE_item_macro_use = 6, RULE_item_macro_path = 7, 
		RULE_item_macro_path_parent = 8, RULE_item_macro_path_segment = 9, RULE_item_macro_tail = 10, 
		RULE_extern_crate = 11, RULE_use_decl = 12, RULE_use_path = 13, RULE_use_suffix = 14, 
		RULE_use_item = 15, RULE_use_item_list = 16, RULE_rename = 17, RULE_mod_decl_short = 18, 
		RULE_mod_decl = 19, RULE_extern_mod = 20, RULE_foreign_item = 21, RULE_foreign_item_tail = 22, 
		RULE_static_decl = 23, RULE_const_decl = 24, RULE_fn_decl = 25, RULE_method_decl = 26, 
		RULE_trait_method_decl = 27, RULE_foreign_fn_decl = 28, RULE_fn_head = 29, 
		RULE_param = 30, RULE_param_ty = 31, RULE_param_list = 32, RULE_variadic_param_list = 33, 
		RULE_variadic_param_list_names_optional = 34, RULE_self_param = 35, RULE_method_param_list = 36, 
		RULE_trait_method_param = 37, RULE_restricted_pat = 38, RULE_trait_method_param_list = 39, 
		RULE_rtype = 40, RULE_fn_rtype = 41, RULE_type_decl = 42, RULE_struct_decl = 43, 
		RULE_struct_tail = 44, RULE_tuple_struct_field = 45, RULE_tuple_struct_field_list = 46, 
		RULE_field_decl = 47, RULE_field_decl_list = 48, RULE_enum_decl = 49, 
		RULE_enum_variant = 50, RULE_enum_variant_list = 51, RULE_enum_variant_main = 52, 
		RULE_enum_tuple_field = 53, RULE_enum_tuple_field_list = 54, RULE_enum_field_decl = 55, 
		RULE_enum_field_decl_list = 56, RULE_union_decl = 57, RULE_trait_decl = 58, 
		RULE_trait_item = 59, RULE_ty_default = 60, RULE_const_default = 61, RULE_impl_block = 62, 
		RULE_impl_what = 63, RULE_impl_item = 64, RULE_impl_item_tail = 65, RULE_attr = 66, 
		RULE_inner_attr = 67, RULE_tt = 68, RULE_tt_delimited = 69, RULE_tt_parens = 70, 
		RULE_tt_brackets = 71, RULE_tt_block = 72, RULE_macro_tail = 73, RULE_path = 74, 
		RULE_path_parent = 75, RULE_as_trait = 76, RULE_path_segment = 77, RULE_path_segment_no_super = 78, 
		RULE_simple_path_segment = 79, RULE_ty_path = 80, RULE_for_lifetime = 81, 
		RULE_lifetime_def_list = 82, RULE_lifetime_def = 83, RULE_lifetime_bound = 84, 
		RULE_ty_path_main = 85, RULE_ty_path_tail = 86, RULE_ty_path_parent = 87, 
		RULE_ty_path_segment = 88, RULE_ty_path_segment_no_super = 89, RULE_where_clause = 90, 
		RULE_where_bound_list = 91, RULE_where_bound = 92, RULE_colon_bound = 93, 
		RULE_bound = 94, RULE_prim_bound = 95, RULE_ty = 96, RULE_mut_or_const = 97, 
		RULE_extern_abi = 98, RULE_ty_args = 99, RULE_lifetime_list = 100, RULE_ty_sum = 101, 
		RULE_ty_sum_list = 102, RULE_ty_arg = 103, RULE_ty_arg_list = 104, RULE_ty_params = 105, 
		RULE_lifetime_param = 106, RULE_lifetime_param_list = 107, RULE_ty_param = 108, 
		RULE_ty_param_list = 109, RULE_pat = 110, RULE_pat_no_mut = 111, RULE_pat_range_end = 112, 
		RULE_pat_lit = 113, RULE_pat_list = 114, RULE_pat_list_with_dots = 115, 
		RULE_pat_list_dots_tail = 116, RULE_pat_elt = 117, RULE_pat_elt_list = 118, 
		RULE_pat_fields = 119, RULE_pat_field = 120, RULE_expr = 121, RULE_expr_no_struct = 122, 
		RULE_expr_list = 123, RULE_block = 124, RULE_block_with_inner_attrs = 125, 
		RULE_stmt = 126, RULE_stmt_tail = 127, RULE_blocky_expr = 128, RULE_cond_or_pat = 129, 
		RULE_loop_label = 130, RULE_match_arms = 131, RULE_match_arm_intro = 132, 
		RULE_match_pat = 133, RULE_match_if_clause = 134, RULE_expr_attrs = 135, 
		RULE_expr_inner_attrs = 136, RULE_prim_expr = 137, RULE_prim_expr_no_struct = 138, 
		RULE_lit = 139, RULE_closure_params = 140, RULE_closure_param = 141, RULE_closure_param_list = 142, 
		RULE_closure_tail = 143, RULE_lifetime_or_expr = 144, RULE_fields = 145, 
		RULE_struct_update_base = 146, RULE_field = 147, RULE_field_name = 148, 
		RULE_post_expr = 149, RULE_post_expr_tail = 150, RULE_pre_expr = 151, 
		RULE_cast_expr = 152, RULE_mul_expr = 153, RULE_add_expr = 154, RULE_shift_expr = 155, 
		RULE_bit_and_expr = 156, RULE_bit_xor_expr = 157, RULE_bit_or_expr = 158, 
		RULE_cmp_expr = 159, RULE_and_expr = 160, RULE_or_expr = 161, RULE_range_expr = 162, 
		RULE_assign_expr = 163, RULE_post_expr_no_struct = 164, RULE_pre_expr_no_struct = 165, 
		RULE_cast_expr_no_struct = 166, RULE_mul_expr_no_struct = 167, RULE_add_expr_no_struct = 168, 
		RULE_shift_expr_no_struct = 169, RULE_bit_and_expr_no_struct = 170, RULE_bit_xor_expr_no_struct = 171, 
		RULE_bit_or_expr_no_struct = 172, RULE_cmp_expr_no_struct = 173, RULE_and_expr_no_struct = 174, 
		RULE_or_expr_no_struct = 175, RULE_range_expr_no_struct = 176, RULE_assign_expr_no_struct = 177, 
		RULE_ident = 178, RULE_any_ident = 179;
	private static String[] makeRuleNames() {
		return new String[] {
			"crate", "mod_body", "visibility", "visibility_restriction", "item", 
			"pub_item", "item_macro_use", "item_macro_path", "item_macro_path_parent", 
			"item_macro_path_segment", "item_macro_tail", "extern_crate", "use_decl", 
			"use_path", "use_suffix", "use_item", "use_item_list", "rename", "mod_decl_short", 
			"mod_decl", "extern_mod", "foreign_item", "foreign_item_tail", "static_decl", 
			"const_decl", "fn_decl", "method_decl", "trait_method_decl", "foreign_fn_decl", 
			"fn_head", "param", "param_ty", "param_list", "variadic_param_list", 
			"variadic_param_list_names_optional", "self_param", "method_param_list", 
			"trait_method_param", "restricted_pat", "trait_method_param_list", "rtype", 
			"fn_rtype", "type_decl", "struct_decl", "struct_tail", "tuple_struct_field", 
			"tuple_struct_field_list", "field_decl", "field_decl_list", "enum_decl", 
			"enum_variant", "enum_variant_list", "enum_variant_main", "enum_tuple_field", 
			"enum_tuple_field_list", "enum_field_decl", "enum_field_decl_list", "union_decl", 
			"trait_decl", "trait_item", "ty_default", "const_default", "impl_block", 
			"impl_what", "impl_item", "impl_item_tail", "attr", "inner_attr", "tt", 
			"tt_delimited", "tt_parens", "tt_brackets", "tt_block", "macro_tail", 
			"path", "path_parent", "as_trait", "path_segment", "path_segment_no_super", 
			"simple_path_segment", "ty_path", "for_lifetime", "lifetime_def_list", 
			"lifetime_def", "lifetime_bound", "ty_path_main", "ty_path_tail", "ty_path_parent", 
			"ty_path_segment", "ty_path_segment_no_super", "where_clause", "where_bound_list", 
			"where_bound", "colon_bound", "bound", "prim_bound", "ty", "mut_or_const", 
			"extern_abi", "ty_args", "lifetime_list", "ty_sum", "ty_sum_list", "ty_arg", 
			"ty_arg_list", "ty_params", "lifetime_param", "lifetime_param_list", 
			"ty_param", "ty_param_list", "pat", "pat_no_mut", "pat_range_end", "pat_lit", 
			"pat_list", "pat_list_with_dots", "pat_list_dots_tail", "pat_elt", "pat_elt_list", 
			"pat_fields", "pat_field", "expr", "expr_no_struct", "expr_list", "block", 
			"block_with_inner_attrs", "stmt", "stmt_tail", "blocky_expr", "cond_or_pat", 
			"loop_label", "match_arms", "match_arm_intro", "match_pat", "match_if_clause", 
			"expr_attrs", "expr_inner_attrs", "prim_expr", "prim_expr_no_struct", 
			"lit", "closure_params", "closure_param", "closure_param_list", "closure_tail", 
			"lifetime_or_expr", "fields", "struct_update_base", "field", "field_name", 
			"post_expr", "post_expr_tail", "pre_expr", "cast_expr", "mul_expr", "add_expr", 
			"shift_expr", "bit_and_expr", "bit_xor_expr", "bit_or_expr", "cmp_expr", 
			"and_expr", "or_expr", "range_expr", "assign_expr", "post_expr_no_struct", 
			"pre_expr_no_struct", "cast_expr_no_struct", "mul_expr_no_struct", "add_expr_no_struct", 
			"shift_expr_no_struct", "bit_and_expr_no_struct", "bit_xor_expr_no_struct", 
			"bit_or_expr_no_struct", "cmp_expr_no_struct", "and_expr_no_struct", 
			"or_expr_no_struct", "range_expr_no_struct", "assign_expr_no_struct", 
			"ident", "any_ident"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'pub'", "'('", "'crate'", "')'", "'super'", "'in'", "'!'", "'::'", 
			"'self'", "';'", "'extern'", "'use'", "'{'", "'}'", "'*'", "','", "'as'", 
			"'mod'", "'static'", "'mut'", "':'", "'type'", "'='", "'const'", "'unsafe'", 
			"'fn'", "'impl'", "'...'", "'&'", "'&&'", "'_'", "'->'", "'struct'", 
			"'enum'", "'union'", "'auto'", "'trait'", "'for'", "'..'", "'default'", 
			"'#'", "'['", "']'", "'<'", "'>'", "'Self'", "'+'", "'where'", "'?'", 
			"'@'", "'ref'", "'box'", "'-'", "'let'", "'if'", "'else'", "'match'", 
			"'while'", "'loop'", "'=>'", "'|'", "'move'", "'break'", "'continue'", 
			"'return'", "'true'", "'false'", "'||'", "'.'", "'/'", "'%'", "'^'", 
			"'=='", "'!='", "'<='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", 
			"'&='", "'^='", "'|='", "'$'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "CashMoney", "Lifetime", "Ident", "CharLit", "StringLit", "ByteLit", 
			"ByteStringLit", "BareIntLit", "FullIntLit", "FloatLit", "Whitespace", 
			"LineComment", "BlockComment"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Rust.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public RustParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CrateContext extends ParserRuleContext {
		public Mod_bodyContext mod_body() {
			return getRuleContext(Mod_bodyContext.class,0);
		}
		public TerminalNode EOF() { return getToken(RustParser.EOF, 0); }
		public CrateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_crate; }
	}

	public final CrateContext crate() throws RecognitionException {
		CrateContext _localctx = new CrateContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_crate);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(360);
			mod_body();
			setState(361);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mod_bodyContext extends ParserRuleContext {
		public List<Inner_attrContext> inner_attr() {
			return getRuleContexts(Inner_attrContext.class);
		}
		public Inner_attrContext inner_attr(int i) {
			return getRuleContext(Inner_attrContext.class,i);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public Mod_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mod_body; }
	}

	public final Mod_bodyContext mod_body() throws RecognitionException {
		Mod_bodyContext _localctx = new Mod_bodyContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_mod_body);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(366);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(363);
					inner_attr();
					}
					} 
				}
				setState(368);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(372);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__11) | (1L << T__17) | (1L << T__18) | (1L << T__21) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__39) | (1L << T__40))) != 0) || _la==Ident) {
				{
				{
				setState(369);
				item();
				}
				}
				setState(374);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VisibilityContext extends ParserRuleContext {
		public Visibility_restrictionContext visibility_restriction() {
			return getRuleContext(Visibility_restrictionContext.class,0);
		}
		public VisibilityContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_visibility; }
	}

	public final VisibilityContext visibility() throws RecognitionException {
		VisibilityContext _localctx = new VisibilityContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_visibility);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(375);
			match(T__0);
			setState(377);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(376);
				visibility_restriction();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Visibility_restrictionContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Visibility_restrictionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_visibility_restriction; }
	}

	public final Visibility_restrictionContext visibility_restriction() throws RecognitionException {
		Visibility_restrictionContext _localctx = new Visibility_restrictionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_visibility_restriction);
		try {
			setState(390);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(379);
				match(T__1);
				setState(380);
				match(T__2);
				setState(381);
				match(T__3);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(382);
				match(T__1);
				setState(383);
				match(T__4);
				setState(384);
				match(T__3);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(385);
				match(T__1);
				setState(386);
				match(T__5);
				setState(387);
				ident();
				setState(388);
				match(T__3);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ItemContext extends ParserRuleContext {
		public Pub_itemContext pub_item() {
			return getRuleContext(Pub_itemContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public Impl_blockContext impl_block() {
			return getRuleContext(Impl_blockContext.class,0);
		}
		public Extern_modContext extern_mod() {
			return getRuleContext(Extern_modContext.class,0);
		}
		public Item_macro_useContext item_macro_use() {
			return getRuleContext(Item_macro_useContext.class,0);
		}
		public ItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item; }
	}

	public final ItemContext item() throws RecognitionException {
		ItemContext _localctx = new ItemContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_item);
		int _la;
		try {
			setState(423);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(395);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(392);
					attr();
					}
					}
					setState(397);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(399);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__0) {
					{
					setState(398);
					visibility();
					}
				}

				setState(401);
				pub_item();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(405);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(402);
					attr();
					}
					}
					setState(407);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(408);
				impl_block();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(412);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(409);
					attr();
					}
					}
					setState(414);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(415);
				extern_mod();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(419);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(416);
					attr();
					}
					}
					setState(421);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(422);
				item_macro_use();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pub_itemContext extends ParserRuleContext {
		public Extern_crateContext extern_crate() {
			return getRuleContext(Extern_crateContext.class,0);
		}
		public Use_declContext use_decl() {
			return getRuleContext(Use_declContext.class,0);
		}
		public Mod_decl_shortContext mod_decl_short() {
			return getRuleContext(Mod_decl_shortContext.class,0);
		}
		public Mod_declContext mod_decl() {
			return getRuleContext(Mod_declContext.class,0);
		}
		public Static_declContext static_decl() {
			return getRuleContext(Static_declContext.class,0);
		}
		public Const_declContext const_decl() {
			return getRuleContext(Const_declContext.class,0);
		}
		public Fn_declContext fn_decl() {
			return getRuleContext(Fn_declContext.class,0);
		}
		public Type_declContext type_decl() {
			return getRuleContext(Type_declContext.class,0);
		}
		public Struct_declContext struct_decl() {
			return getRuleContext(Struct_declContext.class,0);
		}
		public Enum_declContext enum_decl() {
			return getRuleContext(Enum_declContext.class,0);
		}
		public Union_declContext union_decl() {
			return getRuleContext(Union_declContext.class,0);
		}
		public Trait_declContext trait_decl() {
			return getRuleContext(Trait_declContext.class,0);
		}
		public Pub_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pub_item; }
	}

	public final Pub_itemContext pub_item() throws RecognitionException {
		Pub_itemContext _localctx = new Pub_itemContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_pub_item);
		try {
			setState(437);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(425);
				extern_crate();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(426);
				use_decl();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(427);
				mod_decl_short();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(428);
				mod_decl();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(429);
				static_decl();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(430);
				const_decl();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(431);
				fn_decl();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(432);
				type_decl();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(433);
				struct_decl();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(434);
				enum_decl();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(435);
				union_decl();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(436);
				trait_decl();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Item_macro_useContext extends ParserRuleContext {
		public Item_macro_pathContext item_macro_path() {
			return getRuleContext(Item_macro_pathContext.class,0);
		}
		public Item_macro_tailContext item_macro_tail() {
			return getRuleContext(Item_macro_tailContext.class,0);
		}
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Item_macro_useContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item_macro_use; }
	}

	public final Item_macro_useContext item_macro_use() throws RecognitionException {
		Item_macro_useContext _localctx = new Item_macro_useContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_item_macro_use);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(439);
			item_macro_path();
			setState(440);
			match(T__6);
			setState(442);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (T__34 - 35)) | (1L << (T__35 - 35)) | (1L << (T__39 - 35)) | (1L << (Ident - 35)))) != 0)) {
				{
				setState(441);
				ident();
				}
			}

			setState(444);
			item_macro_tail();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Item_macro_pathContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Item_macro_path_parentContext item_macro_path_parent() {
			return getRuleContext(Item_macro_path_parentContext.class,0);
		}
		public Item_macro_pathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item_macro_path; }
	}

	public final Item_macro_pathContext item_macro_path() throws RecognitionException {
		Item_macro_pathContext _localctx = new Item_macro_pathContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_item_macro_path);
		try {
			setState(452);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(446);
				ident();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(448);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(447);
					item_macro_path_parent(0);
					}
					break;
				}
				setState(450);
				match(T__7);
				setState(451);
				ident();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Item_macro_path_parentContext extends ParserRuleContext {
		public Item_macro_path_segmentContext item_macro_path_segment() {
			return getRuleContext(Item_macro_path_segmentContext.class,0);
		}
		public Item_macro_path_parentContext item_macro_path_parent() {
			return getRuleContext(Item_macro_path_parentContext.class,0);
		}
		public Item_macro_path_parentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item_macro_path_parent; }
	}

	public final Item_macro_path_parentContext item_macro_path_parent() throws RecognitionException {
		return item_macro_path_parent(0);
	}

	private Item_macro_path_parentContext item_macro_path_parent(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Item_macro_path_parentContext _localctx = new Item_macro_path_parentContext(_ctx, _parentState);
		Item_macro_path_parentContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_item_macro_path_parent, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(459);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
				{
				setState(455);
				match(T__8);
				}
				break;
			case T__4:
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				{
				setState(456);
				item_macro_path_segment();
				}
				break;
			case T__7:
				{
				setState(457);
				match(T__7);
				setState(458);
				item_macro_path_segment();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(466);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Item_macro_path_parentContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_item_macro_path_parent);
					setState(461);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(462);
					match(T__7);
					setState(463);
					item_macro_path_segment();
					}
					} 
				}
				setState(468);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Item_macro_path_segmentContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Item_macro_path_segmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item_macro_path_segment; }
	}

	public final Item_macro_path_segmentContext item_macro_path_segment() throws RecognitionException {
		Item_macro_path_segmentContext _localctx = new Item_macro_path_segmentContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_item_macro_path_segment);
		try {
			setState(471);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(469);
				ident();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 2);
				{
				setState(470);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Item_macro_tailContext extends ParserRuleContext {
		public Tt_parensContext tt_parens() {
			return getRuleContext(Tt_parensContext.class,0);
		}
		public Tt_bracketsContext tt_brackets() {
			return getRuleContext(Tt_bracketsContext.class,0);
		}
		public Tt_blockContext tt_block() {
			return getRuleContext(Tt_blockContext.class,0);
		}
		public Item_macro_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item_macro_tail; }
	}

	public final Item_macro_tailContext item_macro_tail() throws RecognitionException {
		Item_macro_tailContext _localctx = new Item_macro_tailContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_item_macro_tail);
		try {
			setState(480);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(473);
				tt_parens();
				setState(474);
				match(T__9);
				}
				break;
			case T__41:
				enterOuterAlt(_localctx, 2);
				{
				setState(476);
				tt_brackets();
				setState(477);
				match(T__9);
				}
				break;
			case T__12:
				enterOuterAlt(_localctx, 3);
				{
				setState(479);
				tt_block();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extern_crateContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public RenameContext rename() {
			return getRuleContext(RenameContext.class,0);
		}
		public Extern_crateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extern_crate; }
	}

	public final Extern_crateContext extern_crate() throws RecognitionException {
		Extern_crateContext _localctx = new Extern_crateContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_extern_crate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(482);
			match(T__10);
			setState(483);
			match(T__2);
			setState(484);
			ident();
			setState(486);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__16) {
				{
				setState(485);
				rename();
				}
			}

			setState(488);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Use_declContext extends ParserRuleContext {
		public Use_pathContext use_path() {
			return getRuleContext(Use_pathContext.class,0);
		}
		public Use_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_use_decl; }
	}

	public final Use_declContext use_decl() throws RecognitionException {
		Use_declContext _localctx = new Use_declContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_use_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(490);
			match(T__11);
			setState(491);
			use_path();
			setState(492);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Use_pathContext extends ParserRuleContext {
		public Use_item_listContext use_item_list() {
			return getRuleContext(Use_item_listContext.class,0);
		}
		public List<Any_identContext> any_ident() {
			return getRuleContexts(Any_identContext.class);
		}
		public Any_identContext any_ident(int i) {
			return getRuleContext(Any_identContext.class,i);
		}
		public Use_suffixContext use_suffix() {
			return getRuleContext(Use_suffixContext.class,0);
		}
		public Use_pathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_use_path; }
	}

	public final Use_pathContext use_path() throws RecognitionException {
		Use_pathContext _localctx = new Use_pathContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_use_path);
		int _la;
		try {
			int _alt;
			setState(515);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(495);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__7) {
					{
					setState(494);
					match(T__7);
					}
				}

				setState(497);
				match(T__12);
				setState(498);
				use_item_list();
				setState(499);
				match(T__13);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(502);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__7) {
					{
					setState(501);
					match(T__7);
					}
				}

				setState(504);
				any_ident();
				setState(509);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(505);
						match(T__7);
						setState(506);
						any_ident();
						}
						} 
					}
					setState(511);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				}
				setState(513);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__7 || _la==T__16) {
					{
					setState(512);
					use_suffix();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Use_suffixContext extends ParserRuleContext {
		public Use_item_listContext use_item_list() {
			return getRuleContext(Use_item_listContext.class,0);
		}
		public RenameContext rename() {
			return getRuleContext(RenameContext.class,0);
		}
		public Use_suffixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_use_suffix; }
	}

	public final Use_suffixContext use_suffix() throws RecognitionException {
		Use_suffixContext _localctx = new Use_suffixContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_use_suffix);
		int _la;
		try {
			setState(526);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(517);
				match(T__7);
				setState(518);
				match(T__14);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(519);
				match(T__7);
				setState(520);
				match(T__12);
				setState(522);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__18) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(521);
					use_item_list();
					}
				}

				setState(524);
				match(T__13);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(525);
				rename();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Use_itemContext extends ParserRuleContext {
		public Any_identContext any_ident() {
			return getRuleContext(Any_identContext.class,0);
		}
		public RenameContext rename() {
			return getRuleContext(RenameContext.class,0);
		}
		public Use_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_use_item; }
	}

	public final Use_itemContext use_item() throws RecognitionException {
		Use_itemContext _localctx = new Use_itemContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_use_item);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(528);
			any_ident();
			setState(530);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__16) {
				{
				setState(529);
				rename();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Use_item_listContext extends ParserRuleContext {
		public List<Use_itemContext> use_item() {
			return getRuleContexts(Use_itemContext.class);
		}
		public Use_itemContext use_item(int i) {
			return getRuleContext(Use_itemContext.class,i);
		}
		public Use_item_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_use_item_list; }
	}

	public final Use_item_listContext use_item_list() throws RecognitionException {
		Use_item_listContext _localctx = new Use_item_listContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_use_item_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(532);
			use_item();
			setState(537);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(533);
					match(T__15);
					setState(534);
					use_item();
					}
					} 
				}
				setState(539);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			}
			setState(541);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(540);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RenameContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public RenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rename; }
	}

	public final RenameContext rename() throws RecognitionException {
		RenameContext _localctx = new RenameContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_rename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(543);
			match(T__16);
			setState(544);
			ident();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mod_decl_shortContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Mod_decl_shortContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mod_decl_short; }
	}

	public final Mod_decl_shortContext mod_decl_short() throws RecognitionException {
		Mod_decl_shortContext _localctx = new Mod_decl_shortContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_mod_decl_short);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(546);
			match(T__17);
			setState(547);
			ident();
			setState(548);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mod_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Mod_bodyContext mod_body() {
			return getRuleContext(Mod_bodyContext.class,0);
		}
		public Mod_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mod_decl; }
	}

	public final Mod_declContext mod_decl() throws RecognitionException {
		Mod_declContext _localctx = new Mod_declContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_mod_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(550);
			match(T__17);
			setState(551);
			ident();
			setState(552);
			match(T__12);
			setState(553);
			mod_body();
			setState(554);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extern_modContext extends ParserRuleContext {
		public Extern_abiContext extern_abi() {
			return getRuleContext(Extern_abiContext.class,0);
		}
		public List<Inner_attrContext> inner_attr() {
			return getRuleContexts(Inner_attrContext.class);
		}
		public Inner_attrContext inner_attr(int i) {
			return getRuleContext(Inner_attrContext.class,i);
		}
		public List<Foreign_itemContext> foreign_item() {
			return getRuleContexts(Foreign_itemContext.class);
		}
		public Foreign_itemContext foreign_item(int i) {
			return getRuleContext(Foreign_itemContext.class,i);
		}
		public Extern_modContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extern_mod; }
	}

	public final Extern_modContext extern_mod() throws RecognitionException {
		Extern_modContext _localctx = new Extern_modContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_extern_mod);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(556);
			extern_abi();
			setState(557);
			match(T__12);
			setState(561);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(558);
					inner_attr();
					}
					} 
				}
				setState(563);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			setState(567);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__18) | (1L << T__21) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40))) != 0) || _la==Ident) {
				{
				{
				setState(564);
				foreign_item();
				}
				}
				setState(569);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(570);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Foreign_itemContext extends ParserRuleContext {
		public Foreign_item_tailContext foreign_item_tail() {
			return getRuleContext(Foreign_item_tailContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public Item_macro_useContext item_macro_use() {
			return getRuleContext(Item_macro_useContext.class,0);
		}
		public Foreign_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreign_item; }
	}

	public final Foreign_itemContext foreign_item() throws RecognitionException {
		Foreign_itemContext _localctx = new Foreign_itemContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_foreign_item);
		int _la;
		try {
			setState(589);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(575);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(572);
					attr();
					}
					}
					setState(577);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(579);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__0) {
					{
					setState(578);
					visibility();
					}
				}

				setState(581);
				foreign_item_tail();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(585);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(582);
					attr();
					}
					}
					setState(587);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(588);
				item_macro_use();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Foreign_item_tailContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Foreign_fn_declContext foreign_fn_decl() {
			return getRuleContext(Foreign_fn_declContext.class,0);
		}
		public Foreign_item_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreign_item_tail; }
	}

	public final Foreign_item_tailContext foreign_item_tail() throws RecognitionException {
		Foreign_item_tailContext _localctx = new Foreign_item_tailContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_foreign_item_tail);
		int _la;
		try {
			setState(605);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__18:
				enterOuterAlt(_localctx, 1);
				{
				setState(591);
				match(T__18);
				setState(593);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(592);
					match(T__19);
					}
				}

				setState(595);
				ident();
				setState(596);
				match(T__20);
				setState(597);
				ty_sum();
				setState(598);
				match(T__9);
				}
				break;
			case T__21:
				enterOuterAlt(_localctx, 2);
				{
				setState(600);
				match(T__21);
				setState(601);
				ident();
				setState(602);
				match(T__9);
				}
				break;
			case T__10:
			case T__23:
			case T__24:
			case T__25:
				enterOuterAlt(_localctx, 3);
				{
				setState(604);
				foreign_fn_decl();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Static_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Static_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_static_decl; }
	}

	public final Static_declContext static_decl() throws RecognitionException {
		Static_declContext _localctx = new Static_declContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_static_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(607);
			match(T__18);
			setState(609);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__19) {
				{
				setState(608);
				match(T__19);
				}
			}

			setState(611);
			ident();
			setState(612);
			match(T__20);
			setState(613);
			ty_sum();
			setState(614);
			match(T__22);
			setState(615);
			expr();
			setState(616);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Const_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Const_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_decl; }
	}

	public final Const_declContext const_decl() throws RecognitionException {
		Const_declContext _localctx = new Const_declContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_const_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(618);
			match(T__23);
			setState(619);
			ident();
			setState(620);
			match(T__20);
			setState(621);
			ty_sum();
			setState(622);
			match(T__22);
			setState(623);
			expr();
			setState(624);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fn_declContext extends ParserRuleContext {
		public Fn_headContext fn_head() {
			return getRuleContext(Fn_headContext.class,0);
		}
		public Block_with_inner_attrsContext block_with_inner_attrs() {
			return getRuleContext(Block_with_inner_attrsContext.class,0);
		}
		public Param_listContext param_list() {
			return getRuleContext(Param_listContext.class,0);
		}
		public Fn_rtypeContext fn_rtype() {
			return getRuleContext(Fn_rtypeContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Fn_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fn_decl; }
	}

	public final Fn_declContext fn_decl() throws RecognitionException {
		Fn_declContext _localctx = new Fn_declContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_fn_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(626);
			fn_head();
			setState(627);
			match(T__1);
			setState(629);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
				{
				setState(628);
				param_list();
				}
			}

			setState(631);
			match(T__3);
			setState(633);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__31) {
				{
				setState(632);
				fn_rtype();
				}
			}

			setState(636);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(635);
				where_clause();
				}
			}

			setState(638);
			block_with_inner_attrs();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Method_declContext extends ParserRuleContext {
		public Fn_headContext fn_head() {
			return getRuleContext(Fn_headContext.class,0);
		}
		public Block_with_inner_attrsContext block_with_inner_attrs() {
			return getRuleContext(Block_with_inner_attrsContext.class,0);
		}
		public Method_param_listContext method_param_list() {
			return getRuleContext(Method_param_listContext.class,0);
		}
		public Fn_rtypeContext fn_rtype() {
			return getRuleContext(Fn_rtypeContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Method_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_method_decl; }
	}

	public final Method_declContext method_decl() throws RecognitionException {
		Method_declContext _localctx = new Method_declContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_method_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(640);
			fn_head();
			setState(641);
			match(T__1);
			setState(643);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
				{
				setState(642);
				method_param_list();
				}
			}

			setState(645);
			match(T__3);
			setState(647);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__31) {
				{
				setState(646);
				fn_rtype();
				}
			}

			setState(650);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(649);
				where_clause();
				}
			}

			setState(652);
			block_with_inner_attrs();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trait_method_declContext extends ParserRuleContext {
		public Fn_headContext fn_head() {
			return getRuleContext(Fn_headContext.class,0);
		}
		public Block_with_inner_attrsContext block_with_inner_attrs() {
			return getRuleContext(Block_with_inner_attrsContext.class,0);
		}
		public Trait_method_param_listContext trait_method_param_list() {
			return getRuleContext(Trait_method_param_listContext.class,0);
		}
		public RtypeContext rtype() {
			return getRuleContext(RtypeContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Trait_method_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trait_method_decl; }
	}

	public final Trait_method_declContext trait_method_decl() throws RecognitionException {
		Trait_method_declContext _localctx = new Trait_method_declContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_trait_method_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(654);
			fn_head();
			setState(655);
			match(T__1);
			setState(657);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__19) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
				{
				setState(656);
				trait_method_param_list();
				}
			}

			setState(659);
			match(T__3);
			setState(661);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__31) {
				{
				setState(660);
				rtype();
				}
			}

			setState(664);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(663);
				where_clause();
				}
			}

			setState(668);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__12:
				{
				setState(666);
				block_with_inner_attrs();
				}
				break;
			case T__9:
				{
				setState(667);
				match(T__9);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Foreign_fn_declContext extends ParserRuleContext {
		public Fn_headContext fn_head() {
			return getRuleContext(Fn_headContext.class,0);
		}
		public Variadic_param_listContext variadic_param_list() {
			return getRuleContext(Variadic_param_listContext.class,0);
		}
		public RtypeContext rtype() {
			return getRuleContext(RtypeContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Foreign_fn_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreign_fn_decl; }
	}

	public final Foreign_fn_declContext foreign_fn_decl() throws RecognitionException {
		Foreign_fn_declContext _localctx = new Foreign_fn_declContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_foreign_fn_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(670);
			fn_head();
			setState(671);
			match(T__1);
			setState(673);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
				{
				setState(672);
				variadic_param_list();
				}
			}

			setState(675);
			match(T__3);
			setState(677);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__31) {
				{
				setState(676);
				rtype();
				}
			}

			setState(680);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(679);
				where_clause();
				}
			}

			setState(682);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fn_headContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Extern_abiContext extern_abi() {
			return getRuleContext(Extern_abiContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Fn_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fn_head; }
	}

	public final Fn_headContext fn_head() throws RecognitionException {
		Fn_headContext _localctx = new Fn_headContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_fn_head);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(685);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__23) {
				{
				setState(684);
				match(T__23);
				}
			}

			setState(688);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__24) {
				{
				setState(687);
				match(T__24);
				}
			}

			setState(691);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__10) {
				{
				setState(690);
				extern_abi();
				}
			}

			setState(693);
			match(T__25);
			setState(694);
			ident();
			setState(696);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__43) {
				{
				setState(695);
				ty_params();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamContext extends ParserRuleContext {
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Param_tyContext param_ty() {
			return getRuleContext(Param_tyContext.class,0);
		}
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(698);
			pat();
			setState(699);
			match(T__20);
			setState(700);
			param_ty();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Param_tyContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public BoundContext bound() {
			return getRuleContext(BoundContext.class,0);
		}
		public Param_tyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param_ty; }
	}

	public final Param_tyContext param_ty() throws RecognitionException {
		Param_tyContext _localctx = new Param_tyContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_param_ty);
		try {
			setState(705);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__10:
			case T__14:
			case T__24:
			case T__25:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(702);
				ty_sum();
				}
				break;
			case T__26:
				enterOuterAlt(_localctx, 2);
				{
				setState(703);
				match(T__26);
				setState(704);
				bound(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Param_listContext extends ParserRuleContext {
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public Param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param_list; }
	}

	public final Param_listContext param_list() throws RecognitionException {
		Param_listContext _localctx = new Param_listContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(707);
			param();
			setState(712);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(708);
					match(T__15);
					setState(709);
					param();
					}
					} 
				}
				setState(714);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			}
			setState(716);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(715);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variadic_param_listContext extends ParserRuleContext {
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public Variadic_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variadic_param_list; }
	}

	public final Variadic_param_listContext variadic_param_list() throws RecognitionException {
		Variadic_param_listContext _localctx = new Variadic_param_listContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_variadic_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(718);
			param();
			setState(723);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(719);
					match(T__15);
					setState(720);
					param();
					}
					} 
				}
				setState(725);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			}
			setState(728);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				{
				setState(726);
				match(T__15);
				setState(727);
				match(T__27);
				}
				break;
			}
			setState(731);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(730);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variadic_param_list_names_optionalContext extends ParserRuleContext {
		public List<Trait_method_paramContext> trait_method_param() {
			return getRuleContexts(Trait_method_paramContext.class);
		}
		public Trait_method_paramContext trait_method_param(int i) {
			return getRuleContext(Trait_method_paramContext.class,i);
		}
		public Variadic_param_list_names_optionalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variadic_param_list_names_optional; }
	}

	public final Variadic_param_list_names_optionalContext variadic_param_list_names_optional() throws RecognitionException {
		Variadic_param_list_names_optionalContext _localctx = new Variadic_param_list_names_optionalContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_variadic_param_list_names_optional);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(733);
			trait_method_param();
			setState(738);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(734);
					match(T__15);
					setState(735);
					trait_method_param();
					}
					} 
				}
				setState(740);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			}
			setState(743);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				{
				setState(741);
				match(T__15);
				setState(742);
				match(T__27);
				}
				break;
			}
			setState(746);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(745);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Self_paramContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Self_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_self_param; }
	}

	public final Self_paramContext self_param() throws RecognitionException {
		Self_paramContext _localctx = new Self_paramContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_self_param);
		int _la;
		try {
			setState(764);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case T__19:
				enterOuterAlt(_localctx, 1);
				{
				setState(749);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(748);
					match(T__19);
					}
				}

				setState(751);
				match(T__8);
				setState(754);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__20) {
					{
					setState(752);
					match(T__20);
					setState(753);
					ty_sum();
					}
				}

				}
				break;
			case T__28:
				enterOuterAlt(_localctx, 2);
				{
				setState(756);
				match(T__28);
				setState(758);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(757);
					match(Lifetime);
					}
				}

				setState(761);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(760);
					match(T__19);
					}
				}

				setState(763);
				match(T__8);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Method_param_listContext extends ParserRuleContext {
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public Self_paramContext self_param() {
			return getRuleContext(Self_paramContext.class,0);
		}
		public Method_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_method_param_list; }
	}

	public final Method_param_listContext method_param_list() throws RecognitionException {
		Method_param_listContext _localctx = new Method_param_listContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_method_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(768);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				{
				setState(766);
				param();
				}
				break;
			case 2:
				{
				setState(767);
				self_param();
				}
				break;
			}
			setState(774);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(770);
					match(T__15);
					setState(771);
					param();
					}
					} 
				}
				setState(776);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			}
			setState(778);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(777);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trait_method_paramContext extends ParserRuleContext {
		public Restricted_patContext restricted_pat() {
			return getRuleContext(Restricted_patContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Trait_method_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trait_method_param; }
	}

	public final Trait_method_paramContext trait_method_param() throws RecognitionException {
		Trait_method_paramContext _localctx = new Trait_method_paramContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_trait_method_param);
		try {
			setState(785);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(780);
				restricted_pat();
				setState(781);
				match(T__20);
				setState(782);
				ty_sum();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(784);
				ty_sum();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Restricted_patContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Restricted_patContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_restricted_pat; }
	}

	public final Restricted_patContext restricted_pat() throws RecognitionException {
		Restricted_patContext _localctx = new Restricted_patContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_restricted_pat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(788);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__19) | (1L << T__28) | (1L << T__29))) != 0)) {
				{
				setState(787);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__19) | (1L << T__28) | (1L << T__29))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(792);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__30:
				{
				setState(790);
				match(T__30);
				}
				break;
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				{
				setState(791);
				ident();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trait_method_param_listContext extends ParserRuleContext {
		public List<Trait_method_paramContext> trait_method_param() {
			return getRuleContexts(Trait_method_paramContext.class);
		}
		public Trait_method_paramContext trait_method_param(int i) {
			return getRuleContext(Trait_method_paramContext.class,i);
		}
		public Self_paramContext self_param() {
			return getRuleContext(Self_paramContext.class,0);
		}
		public Trait_method_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trait_method_param_list; }
	}

	public final Trait_method_param_listContext trait_method_param_list() throws RecognitionException {
		Trait_method_param_listContext _localctx = new Trait_method_param_listContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_trait_method_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(796);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				{
				setState(794);
				trait_method_param();
				}
				break;
			case 2:
				{
				setState(795);
				self_param();
				}
				break;
			}
			setState(802);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,76,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(798);
					match(T__15);
					setState(799);
					trait_method_param();
					}
					} 
				}
				setState(804);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,76,_ctx);
			}
			setState(806);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(805);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RtypeContext extends ParserRuleContext {
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public RtypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rtype; }
	}

	public final RtypeContext rtype() throws RecognitionException {
		RtypeContext _localctx = new RtypeContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_rtype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(808);
			match(T__31);
			setState(811);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__10:
			case T__14:
			case T__24:
			case T__25:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case Ident:
				{
				setState(809);
				ty();
				}
				break;
			case T__6:
				{
				setState(810);
				match(T__6);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Fn_rtypeContext extends ParserRuleContext {
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public BoundContext bound() {
			return getRuleContext(BoundContext.class,0);
		}
		public Fn_rtypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fn_rtype; }
	}

	public final Fn_rtypeContext fn_rtype() throws RecognitionException {
		Fn_rtypeContext _localctx = new Fn_rtypeContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_fn_rtype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(813);
			match(T__31);
			setState(818);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__10:
			case T__14:
			case T__24:
			case T__25:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case Ident:
				{
				setState(814);
				ty();
				}
				break;
			case T__6:
				{
				setState(815);
				match(T__6);
				}
				break;
			case T__26:
				{
				setState(816);
				match(T__26);
				setState(817);
				bound(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Type_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_decl; }
	}

	public final Type_declContext type_decl() throws RecognitionException {
		Type_declContext _localctx = new Type_declContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_type_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(820);
			match(T__21);
			setState(821);
			ident();
			setState(823);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__43) {
				{
				setState(822);
				ty_params();
				}
			}

			setState(826);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(825);
				where_clause();
				}
			}

			setState(828);
			match(T__22);
			setState(829);
			ty_sum();
			setState(830);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Struct_tailContext struct_tail() {
			return getRuleContext(Struct_tailContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Struct_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_decl; }
	}

	public final Struct_declContext struct_decl() throws RecognitionException {
		Struct_declContext _localctx = new Struct_declContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_struct_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(832);
			match(T__32);
			setState(833);
			ident();
			setState(835);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__43) {
				{
				setState(834);
				ty_params();
				}
			}

			setState(837);
			struct_tail();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_tailContext extends ParserRuleContext {
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Tuple_struct_field_listContext tuple_struct_field_list() {
			return getRuleContext(Tuple_struct_field_listContext.class,0);
		}
		public Field_decl_listContext field_decl_list() {
			return getRuleContext(Field_decl_listContext.class,0);
		}
		public Struct_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_tail; }
	}

	public final Struct_tailContext struct_tail() throws RecognitionException {
		Struct_tailContext _localctx = new Struct_tailContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_struct_tail);
		int _la;
		try {
			setState(860);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(840);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(839);
					where_clause();
					}
				}

				setState(842);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(843);
				match(T__1);
				setState(845);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(844);
					tuple_struct_field_list();
					}
				}

				setState(847);
				match(T__3);
				setState(849);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(848);
					where_clause();
					}
				}

				setState(851);
				match(T__9);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(853);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(852);
					where_clause();
					}
				}

				setState(855);
				match(T__12);
				setState(857);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40))) != 0) || _la==Ident) {
					{
					setState(856);
					field_decl_list();
					}
				}

				setState(859);
				match(T__13);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_struct_fieldContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public Tuple_struct_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_struct_field; }
	}

	public final Tuple_struct_fieldContext tuple_struct_field() throws RecognitionException {
		Tuple_struct_fieldContext _localctx = new Tuple_struct_fieldContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_tuple_struct_field);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(865);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(862);
				attr();
				}
				}
				setState(867);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(869);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(868);
				visibility();
				}
			}

			setState(871);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tuple_struct_field_listContext extends ParserRuleContext {
		public List<Tuple_struct_fieldContext> tuple_struct_field() {
			return getRuleContexts(Tuple_struct_fieldContext.class);
		}
		public Tuple_struct_fieldContext tuple_struct_field(int i) {
			return getRuleContext(Tuple_struct_fieldContext.class,i);
		}
		public Tuple_struct_field_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple_struct_field_list; }
	}

	public final Tuple_struct_field_listContext tuple_struct_field_list() throws RecognitionException {
		Tuple_struct_field_listContext _localctx = new Tuple_struct_field_listContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_tuple_struct_field_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(873);
			tuple_struct_field();
			setState(878);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(874);
					match(T__15);
					setState(875);
					tuple_struct_field();
					}
					} 
				}
				setState(880);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
			}
			setState(882);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(881);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Field_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public Field_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field_decl; }
	}

	public final Field_declContext field_decl() throws RecognitionException {
		Field_declContext _localctx = new Field_declContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_field_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(887);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(884);
				attr();
				}
				}
				setState(889);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(891);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(890);
				visibility();
				}
			}

			setState(893);
			ident();
			setState(894);
			match(T__20);
			setState(895);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Field_decl_listContext extends ParserRuleContext {
		public List<Field_declContext> field_decl() {
			return getRuleContexts(Field_declContext.class);
		}
		public Field_declContext field_decl(int i) {
			return getRuleContext(Field_declContext.class,i);
		}
		public Field_decl_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field_decl_list; }
	}

	public final Field_decl_listContext field_decl_list() throws RecognitionException {
		Field_decl_listContext _localctx = new Field_decl_listContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_field_decl_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(897);
			field_decl();
			setState(902);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(898);
					match(T__15);
					setState(899);
					field_decl();
					}
					} 
				}
				setState(904);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			}
			setState(906);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(905);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Enum_variant_listContext enum_variant_list() {
			return getRuleContext(Enum_variant_listContext.class,0);
		}
		public Enum_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_decl; }
	}

	public final Enum_declContext enum_decl() throws RecognitionException {
		Enum_declContext _localctx = new Enum_declContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_enum_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(908);
			match(T__33);
			setState(909);
			ident();
			setState(911);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__43) {
				{
				setState(910);
				ty_params();
				}
			}

			setState(914);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(913);
				where_clause();
				}
			}

			setState(916);
			match(T__12);
			setState(918);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (T__34 - 35)) | (1L << (T__35 - 35)) | (1L << (T__39 - 35)) | (1L << (T__40 - 35)) | (1L << (Ident - 35)))) != 0)) {
				{
				setState(917);
				enum_variant_list();
				}
			}

			setState(920);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_variantContext extends ParserRuleContext {
		public Enum_variant_mainContext enum_variant_main() {
			return getRuleContext(Enum_variant_mainContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Enum_variantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_variant; }
	}

	public final Enum_variantContext enum_variant() throws RecognitionException {
		Enum_variantContext _localctx = new Enum_variantContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_enum_variant);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(925);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(922);
				attr();
				}
				}
				setState(927);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(928);
			enum_variant_main();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_variant_listContext extends ParserRuleContext {
		public List<Enum_variantContext> enum_variant() {
			return getRuleContexts(Enum_variantContext.class);
		}
		public Enum_variantContext enum_variant(int i) {
			return getRuleContext(Enum_variantContext.class,i);
		}
		public Enum_variant_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_variant_list; }
	}

	public final Enum_variant_listContext enum_variant_list() throws RecognitionException {
		Enum_variant_listContext _localctx = new Enum_variant_listContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_enum_variant_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(930);
			enum_variant();
			setState(935);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,101,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(931);
					match(T__15);
					setState(932);
					enum_variant();
					}
					} 
				}
				setState(937);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,101,_ctx);
			}
			setState(939);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(938);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_variant_mainContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Enum_tuple_field_listContext enum_tuple_field_list() {
			return getRuleContext(Enum_tuple_field_listContext.class,0);
		}
		public Enum_field_decl_listContext enum_field_decl_list() {
			return getRuleContext(Enum_field_decl_listContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Enum_variant_mainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_variant_main; }
	}

	public final Enum_variant_mainContext enum_variant_main() throws RecognitionException {
		Enum_variant_mainContext _localctx = new Enum_variant_mainContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_enum_variant_main);
		int _la;
		try {
			setState(960);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(941);
				ident();
				setState(942);
				match(T__1);
				setState(944);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(943);
					enum_tuple_field_list();
					}
				}

				setState(946);
				match(T__3);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(948);
				ident();
				setState(949);
				match(T__12);
				setState(951);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (T__34 - 35)) | (1L << (T__35 - 35)) | (1L << (T__39 - 35)) | (1L << (Ident - 35)))) != 0)) {
					{
					setState(950);
					enum_field_decl_list();
					}
				}

				setState(953);
				match(T__13);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(955);
				ident();
				setState(956);
				match(T__22);
				setState(957);
				expr();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(959);
				ident();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_tuple_fieldContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Enum_tuple_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_tuple_field; }
	}

	public final Enum_tuple_fieldContext enum_tuple_field() throws RecognitionException {
		Enum_tuple_fieldContext _localctx = new Enum_tuple_fieldContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_enum_tuple_field);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(965);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(962);
				attr();
				}
				}
				setState(967);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(968);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_tuple_field_listContext extends ParserRuleContext {
		public List<Enum_tuple_fieldContext> enum_tuple_field() {
			return getRuleContexts(Enum_tuple_fieldContext.class);
		}
		public Enum_tuple_fieldContext enum_tuple_field(int i) {
			return getRuleContext(Enum_tuple_fieldContext.class,i);
		}
		public Enum_tuple_field_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_tuple_field_list; }
	}

	public final Enum_tuple_field_listContext enum_tuple_field_list() throws RecognitionException {
		Enum_tuple_field_listContext _localctx = new Enum_tuple_field_listContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_enum_tuple_field_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(970);
			enum_tuple_field();
			setState(975);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,107,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(971);
					match(T__15);
					setState(972);
					enum_tuple_field();
					}
					} 
				}
				setState(977);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,107,_ctx);
			}
			setState(979);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(978);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_field_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Enum_field_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_field_decl; }
	}

	public final Enum_field_declContext enum_field_decl() throws RecognitionException {
		Enum_field_declContext _localctx = new Enum_field_declContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_enum_field_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(981);
			ident();
			setState(982);
			match(T__20);
			setState(983);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_field_decl_listContext extends ParserRuleContext {
		public List<Enum_field_declContext> enum_field_decl() {
			return getRuleContexts(Enum_field_declContext.class);
		}
		public Enum_field_declContext enum_field_decl(int i) {
			return getRuleContext(Enum_field_declContext.class,i);
		}
		public Enum_field_decl_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_field_decl_list; }
	}

	public final Enum_field_decl_listContext enum_field_decl_list() throws RecognitionException {
		Enum_field_decl_listContext _localctx = new Enum_field_decl_listContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_enum_field_decl_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(985);
			enum_field_decl();
			setState(990);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,109,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(986);
					match(T__15);
					setState(987);
					enum_field_decl();
					}
					} 
				}
				setState(992);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,109,_ctx);
			}
			setState(994);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(993);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Union_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Field_decl_listContext field_decl_list() {
			return getRuleContext(Field_decl_listContext.class,0);
		}
		public Union_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_union_decl; }
	}

	public final Union_declContext union_decl() throws RecognitionException {
		Union_declContext _localctx = new Union_declContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_union_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(996);
			match(T__34);
			setState(997);
			ident();
			setState(998);
			match(T__12);
			setState(999);
			field_decl_list();
			setState(1000);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trait_declContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Colon_boundContext colon_bound() {
			return getRuleContext(Colon_boundContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public List<Trait_itemContext> trait_item() {
			return getRuleContexts(Trait_itemContext.class);
		}
		public Trait_itemContext trait_item(int i) {
			return getRuleContext(Trait_itemContext.class,i);
		}
		public Trait_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trait_decl; }
	}

	public final Trait_declContext trait_decl() throws RecognitionException {
		Trait_declContext _localctx = new Trait_declContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_trait_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1003);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__24) {
				{
				setState(1002);
				match(T__24);
				}
			}

			setState(1006);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__35) {
				{
				setState(1005);
				match(T__35);
				}
			}

			setState(1008);
			match(T__36);
			setState(1009);
			ident();
			setState(1011);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__43) {
				{
				setState(1010);
				ty_params();
				}
			}

			setState(1014);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__20) {
				{
				setState(1013);
				colon_bound();
				}
			}

			setState(1017);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(1016);
				where_clause();
				}
			}

			setState(1019);
			match(T__12);
			setState(1023);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__21) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40))) != 0) || _la==Ident) {
				{
				{
				setState(1020);
				trait_item();
				}
				}
				setState(1025);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1026);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Trait_itemContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Colon_boundContext colon_bound() {
			return getRuleContext(Colon_boundContext.class,0);
		}
		public Ty_defaultContext ty_default() {
			return getRuleContext(Ty_defaultContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Const_defaultContext const_default() {
			return getRuleContext(Const_defaultContext.class,0);
		}
		public Trait_method_declContext trait_method_decl() {
			return getRuleContext(Trait_method_declContext.class,0);
		}
		public Item_macro_pathContext item_macro_path() {
			return getRuleContext(Item_macro_pathContext.class,0);
		}
		public Item_macro_tailContext item_macro_tail() {
			return getRuleContext(Item_macro_tailContext.class,0);
		}
		public Trait_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trait_item; }
	}

	public final Trait_itemContext trait_item() throws RecognitionException {
		Trait_itemContext _localctx = new Trait_itemContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_trait_item);
		int _la;
		try {
			setState(1076);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1031);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1028);
					attr();
					}
					}
					setState(1033);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1034);
				match(T__21);
				setState(1035);
				ident();
				setState(1037);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__20) {
					{
					setState(1036);
					colon_bound();
					}
				}

				setState(1040);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__22) {
					{
					setState(1039);
					ty_default();
					}
				}

				setState(1042);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1047);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1044);
					attr();
					}
					}
					setState(1049);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1050);
				match(T__23);
				setState(1051);
				ident();
				setState(1052);
				match(T__20);
				setState(1053);
				ty_sum();
				setState(1055);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__22) {
					{
					setState(1054);
					const_default();
					}
				}

				setState(1057);
				match(T__9);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1062);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1059);
					attr();
					}
					}
					setState(1064);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1065);
				trait_method_decl();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1069);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1066);
					attr();
					}
					}
					setState(1071);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1072);
				item_macro_path();
				setState(1073);
				match(T__6);
				setState(1074);
				item_macro_tail();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_defaultContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Ty_defaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_default; }
	}

	public final Ty_defaultContext ty_default() throws RecognitionException {
		Ty_defaultContext _localctx = new Ty_defaultContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_ty_default);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1078);
			match(T__22);
			setState(1079);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Const_defaultContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Const_defaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_default; }
	}

	public final Const_defaultContext const_default() throws RecognitionException {
		Const_defaultContext _localctx = new Const_defaultContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_const_default);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1081);
			match(T__22);
			setState(1082);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Impl_blockContext extends ParserRuleContext {
		public Impl_whatContext impl_what() {
			return getRuleContext(Impl_whatContext.class,0);
		}
		public Ty_paramsContext ty_params() {
			return getRuleContext(Ty_paramsContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public List<Impl_itemContext> impl_item() {
			return getRuleContexts(Impl_itemContext.class);
		}
		public Impl_itemContext impl_item(int i) {
			return getRuleContext(Impl_itemContext.class,i);
		}
		public Impl_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_impl_block; }
	}

	public final Impl_blockContext impl_block() throws RecognitionException {
		Impl_blockContext _localctx = new Impl_blockContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_impl_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1085);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__24) {
				{
				setState(1084);
				match(T__24);
				}
			}

			setState(1087);
			match(T__26);
			setState(1089);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
			case 1:
				{
				setState(1088);
				ty_params();
				}
				break;
			}
			setState(1091);
			impl_what();
			setState(1093);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(1092);
				where_clause();
				}
			}

			setState(1095);
			match(T__12);
			setState(1099);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__21) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40))) != 0) || _la==Ident) {
				{
				{
				setState(1096);
				impl_item();
				}
				}
				setState(1101);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1102);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Impl_whatContext extends ParserRuleContext {
		public List<Ty_sumContext> ty_sum() {
			return getRuleContexts(Ty_sumContext.class);
		}
		public Ty_sumContext ty_sum(int i) {
			return getRuleContext(Ty_sumContext.class,i);
		}
		public Impl_whatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_impl_what; }
	}

	public final Impl_whatContext impl_what() throws RecognitionException {
		Impl_whatContext _localctx = new Impl_whatContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_impl_what);
		try {
			setState(1118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1104);
				match(T__6);
				setState(1105);
				ty_sum();
				setState(1106);
				match(T__37);
				setState(1107);
				ty_sum();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1109);
				ty_sum();
				setState(1110);
				match(T__37);
				setState(1111);
				ty_sum();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1113);
				ty_sum();
				setState(1114);
				match(T__37);
				setState(1115);
				match(T__38);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1117);
				ty_sum();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Impl_itemContext extends ParserRuleContext {
		public Impl_item_tailContext impl_item_tail() {
			return getRuleContext(Impl_item_tailContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public Impl_itemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_impl_item; }
	}

	public final Impl_itemContext impl_item() throws RecognitionException {
		Impl_itemContext _localctx = new Impl_itemContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_impl_item);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(1120);
				attr();
				}
				}
				setState(1125);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1127);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(1126);
				visibility();
				}
			}

			setState(1129);
			impl_item_tail();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Impl_item_tailContext extends ParserRuleContext {
		public Method_declContext method_decl() {
			return getRuleContext(Method_declContext.class,0);
		}
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Const_declContext const_decl() {
			return getRuleContext(Const_declContext.class,0);
		}
		public Item_macro_pathContext item_macro_path() {
			return getRuleContext(Item_macro_pathContext.class,0);
		}
		public Item_macro_tailContext item_macro_tail() {
			return getRuleContext(Item_macro_tailContext.class,0);
		}
		public Impl_item_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_impl_item_tail; }
	}

	public final Impl_item_tailContext impl_item_tail() throws RecognitionException {
		Impl_item_tailContext _localctx = new Impl_item_tailContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_impl_item_tail);
		int _la;
		try {
			setState(1146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__39) {
					{
					setState(1131);
					match(T__39);
					}
				}

				setState(1134);
				method_decl();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1135);
				match(T__21);
				setState(1136);
				ident();
				setState(1137);
				match(T__22);
				setState(1138);
				ty_sum();
				setState(1139);
				match(T__9);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1141);
				const_decl();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1142);
				item_macro_path();
				setState(1143);
				match(T__6);
				setState(1144);
				item_macro_tail();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttrContext extends ParserRuleContext {
		public List<TtContext> tt() {
			return getRuleContexts(TtContext.class);
		}
		public TtContext tt(int i) {
			return getRuleContext(TtContext.class,i);
		}
		public AttrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attr; }
	}

	public final AttrContext attr() throws RecognitionException {
		AttrContext _localctx = new AttrContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_attr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1148);
			match(T__40);
			setState(1149);
			match(T__41);
			setState(1153);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (CashMoney - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)) | (1L << (Whitespace - 64)) | (1L << (LineComment - 64)) | (1L << (BlockComment - 64)))) != 0)) {
				{
				{
				setState(1150);
				tt();
				}
				}
				setState(1155);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1156);
			match(T__42);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Inner_attrContext extends ParserRuleContext {
		public List<TtContext> tt() {
			return getRuleContexts(TtContext.class);
		}
		public TtContext tt(int i) {
			return getRuleContext(TtContext.class,i);
		}
		public Inner_attrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inner_attr; }
	}

	public final Inner_attrContext inner_attr() throws RecognitionException {
		Inner_attrContext _localctx = new Inner_attrContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_inner_attr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1158);
			match(T__40);
			setState(1159);
			match(T__6);
			setState(1160);
			match(T__41);
			setState(1164);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (CashMoney - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)) | (1L << (Whitespace - 64)) | (1L << (LineComment - 64)) | (1L << (BlockComment - 64)))) != 0)) {
				{
				{
				setState(1161);
				tt();
				}
				}
				setState(1166);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1167);
			match(T__42);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TtContext extends ParserRuleContext {
		public Tt_delimitedContext tt_delimited() {
			return getRuleContext(Tt_delimitedContext.class,0);
		}
		public TtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tt; }
	}

	public final TtContext tt() throws RecognitionException {
		TtContext _localctx = new TtContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_tt);
		int _la;
		try {
			setState(1171);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__2:
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__8:
			case T__9:
			case T__10:
			case T__11:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
			case T__18:
			case T__19:
			case T__20:
			case T__21:
			case T__22:
			case T__23:
			case T__24:
			case T__25:
			case T__26:
			case T__27:
			case T__28:
			case T__29:
			case T__30:
			case T__31:
			case T__32:
			case T__33:
			case T__34:
			case T__35:
			case T__36:
			case T__37:
			case T__38:
			case T__39:
			case T__40:
			case T__43:
			case T__44:
			case T__45:
			case T__46:
			case T__47:
			case T__48:
			case T__49:
			case T__50:
			case T__51:
			case T__52:
			case T__53:
			case T__54:
			case T__55:
			case T__56:
			case T__57:
			case T__58:
			case T__59:
			case T__60:
			case T__61:
			case T__62:
			case T__63:
			case T__64:
			case T__65:
			case T__66:
			case T__67:
			case T__68:
			case T__69:
			case T__70:
			case T__71:
			case T__72:
			case T__73:
			case T__74:
			case T__75:
			case T__76:
			case T__77:
			case T__78:
			case T__79:
			case T__80:
			case T__81:
			case T__82:
			case T__83:
			case CashMoney:
			case Lifetime:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
			case Whitespace:
			case LineComment:
			case BlockComment:
				enterOuterAlt(_localctx, 1);
				{
				setState(1169);
				_la = _input.LA(1);
				if ( _la <= 0 || ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__3) | (1L << T__12) | (1L << T__13) | (1L << T__41) | (1L << T__42))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case T__1:
			case T__12:
			case T__41:
				enterOuterAlt(_localctx, 2);
				{
				setState(1170);
				tt_delimited();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tt_delimitedContext extends ParserRuleContext {
		public Tt_parensContext tt_parens() {
			return getRuleContext(Tt_parensContext.class,0);
		}
		public Tt_bracketsContext tt_brackets() {
			return getRuleContext(Tt_bracketsContext.class,0);
		}
		public Tt_blockContext tt_block() {
			return getRuleContext(Tt_blockContext.class,0);
		}
		public Tt_delimitedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tt_delimited; }
	}

	public final Tt_delimitedContext tt_delimited() throws RecognitionException {
		Tt_delimitedContext _localctx = new Tt_delimitedContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_tt_delimited);
		try {
			setState(1176);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1173);
				tt_parens();
				}
				break;
			case T__41:
				enterOuterAlt(_localctx, 2);
				{
				setState(1174);
				tt_brackets();
				}
				break;
			case T__12:
				enterOuterAlt(_localctx, 3);
				{
				setState(1175);
				tt_block();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tt_parensContext extends ParserRuleContext {
		public List<TtContext> tt() {
			return getRuleContexts(TtContext.class);
		}
		public TtContext tt(int i) {
			return getRuleContext(TtContext.class,i);
		}
		public Tt_parensContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tt_parens; }
	}

	public final Tt_parensContext tt_parens() throws RecognitionException {
		Tt_parensContext _localctx = new Tt_parensContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_tt_parens);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1178);
			match(T__1);
			setState(1182);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (CashMoney - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)) | (1L << (Whitespace - 64)) | (1L << (LineComment - 64)) | (1L << (BlockComment - 64)))) != 0)) {
				{
				{
				setState(1179);
				tt();
				}
				}
				setState(1184);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1185);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tt_bracketsContext extends ParserRuleContext {
		public List<TtContext> tt() {
			return getRuleContexts(TtContext.class);
		}
		public TtContext tt(int i) {
			return getRuleContext(TtContext.class,i);
		}
		public Tt_bracketsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tt_brackets; }
	}

	public final Tt_bracketsContext tt_brackets() throws RecognitionException {
		Tt_bracketsContext _localctx = new Tt_bracketsContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_tt_brackets);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1187);
			match(T__41);
			setState(1191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (CashMoney - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)) | (1L << (Whitespace - 64)) | (1L << (LineComment - 64)) | (1L << (BlockComment - 64)))) != 0)) {
				{
				{
				setState(1188);
				tt();
				}
				}
				setState(1193);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1194);
			match(T__42);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Tt_blockContext extends ParserRuleContext {
		public List<TtContext> tt() {
			return getRuleContexts(TtContext.class);
		}
		public TtContext tt(int i) {
			return getRuleContext(TtContext.class,i);
		}
		public Tt_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tt_block; }
	}

	public final Tt_blockContext tt_block() throws RecognitionException {
		Tt_blockContext _localctx = new Tt_blockContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_tt_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1196);
			match(T__12);
			setState(1200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (T__68 - 64)) | (1L << (T__69 - 64)) | (1L << (T__70 - 64)) | (1L << (T__71 - 64)) | (1L << (T__72 - 64)) | (1L << (T__73 - 64)) | (1L << (T__74 - 64)) | (1L << (T__75 - 64)) | (1L << (T__76 - 64)) | (1L << (T__77 - 64)) | (1L << (T__78 - 64)) | (1L << (T__79 - 64)) | (1L << (T__80 - 64)) | (1L << (T__81 - 64)) | (1L << (T__82 - 64)) | (1L << (T__83 - 64)) | (1L << (CashMoney - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)) | (1L << (Whitespace - 64)) | (1L << (LineComment - 64)) | (1L << (BlockComment - 64)))) != 0)) {
				{
				{
				setState(1197);
				tt();
				}
				}
				setState(1202);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1203);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Macro_tailContext extends ParserRuleContext {
		public Tt_delimitedContext tt_delimited() {
			return getRuleContext(Tt_delimitedContext.class,0);
		}
		public Macro_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_tail; }
	}

	public final Macro_tailContext macro_tail() throws RecognitionException {
		Macro_tailContext _localctx = new Macro_tailContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_macro_tail);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1205);
			match(T__6);
			setState(1206);
			tt_delimited();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PathContext extends ParserRuleContext {
		public Path_segment_no_superContext path_segment_no_super() {
			return getRuleContext(Path_segment_no_superContext.class,0);
		}
		public Path_parentContext path_parent() {
			return getRuleContext(Path_parentContext.class,0);
		}
		public PathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_path; }
	}

	public final PathContext path() throws RecognitionException {
		PathContext _localctx = new PathContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_path);
		try {
			setState(1214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,142,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1208);
				path_segment_no_super();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1210);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
				case 1:
					{
					setState(1209);
					path_parent(0);
					}
					break;
				}
				setState(1212);
				match(T__7);
				setState(1213);
				path_segment_no_super();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Path_parentContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public As_traitContext as_trait() {
			return getRuleContext(As_traitContext.class,0);
		}
		public Path_segmentContext path_segment() {
			return getRuleContext(Path_segmentContext.class,0);
		}
		public Path_parentContext path_parent() {
			return getRuleContext(Path_parentContext.class,0);
		}
		public Path_parentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_path_parent; }
	}

	public final Path_parentContext path_parent() throws RecognitionException {
		return path_parent(0);
	}

	private Path_parentContext path_parent(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Path_parentContext _localctx = new Path_parentContext(_ctx, _parentState);
		Path_parentContext _prevctx = _localctx;
		int _startState = 150;
		enterRecursionRule(_localctx, 150, RULE_path_parent, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1228);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
				{
				setState(1217);
				match(T__8);
				}
				break;
			case T__43:
				{
				setState(1218);
				match(T__43);
				setState(1219);
				ty_sum();
				setState(1221);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__16) {
					{
					setState(1220);
					as_trait();
					}
				}

				setState(1223);
				match(T__44);
				}
				break;
			case T__4:
			case T__34:
			case T__35:
			case T__39:
			case T__45:
			case Ident:
				{
				setState(1225);
				path_segment();
				}
				break;
			case T__7:
				{
				setState(1226);
				match(T__7);
				setState(1227);
				path_segment();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1235);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,145,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Path_parentContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_path_parent);
					setState(1230);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1231);
					match(T__7);
					setState(1232);
					path_segment();
					}
					} 
				}
				setState(1237);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,145,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class As_traitContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public As_traitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_as_trait; }
	}

	public final As_traitContext as_trait() throws RecognitionException {
		As_traitContext _localctx = new As_traitContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_as_trait);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1238);
			match(T__16);
			setState(1239);
			ty_sum();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Path_segmentContext extends ParserRuleContext {
		public Path_segment_no_superContext path_segment_no_super() {
			return getRuleContext(Path_segment_no_superContext.class,0);
		}
		public Path_segmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_path_segment; }
	}

	public final Path_segmentContext path_segment() throws RecognitionException {
		Path_segmentContext _localctx = new Path_segmentContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_path_segment);
		try {
			setState(1243);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(1241);
				path_segment_no_super();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 2);
				{
				setState(1242);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Path_segment_no_superContext extends ParserRuleContext {
		public Simple_path_segmentContext simple_path_segment() {
			return getRuleContext(Simple_path_segmentContext.class,0);
		}
		public Ty_argsContext ty_args() {
			return getRuleContext(Ty_argsContext.class,0);
		}
		public Path_segment_no_superContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_path_segment_no_super; }
	}

	public final Path_segment_no_superContext path_segment_no_super() throws RecognitionException {
		Path_segment_no_superContext _localctx = new Path_segment_no_superContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_path_segment_no_super);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1245);
			simple_path_segment();
			setState(1248);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				{
				setState(1246);
				match(T__7);
				setState(1247);
				ty_args();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Simple_path_segmentContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Simple_path_segmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_path_segment; }
	}

	public final Simple_path_segmentContext simple_path_segment() throws RecognitionException {
		Simple_path_segmentContext _localctx = new Simple_path_segmentContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_simple_path_segment);
		try {
			setState(1252);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(1250);
				ident();
				}
				break;
			case T__45:
				enterOuterAlt(_localctx, 2);
				{
				setState(1251);
				match(T__45);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_pathContext extends ParserRuleContext {
		public Ty_path_mainContext ty_path_main() {
			return getRuleContext(Ty_path_mainContext.class,0);
		}
		public For_lifetimeContext for_lifetime() {
			return getRuleContext(For_lifetimeContext.class,0);
		}
		public Ty_pathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path; }
	}

	public final Ty_pathContext ty_path() throws RecognitionException {
		Ty_pathContext _localctx = new Ty_pathContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_ty_path);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1255);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__37) {
				{
				setState(1254);
				for_lifetime();
				}
			}

			setState(1257);
			ty_path_main();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class For_lifetimeContext extends ParserRuleContext {
		public Lifetime_def_listContext lifetime_def_list() {
			return getRuleContext(Lifetime_def_listContext.class,0);
		}
		public For_lifetimeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_lifetime; }
	}

	public final For_lifetimeContext for_lifetime() throws RecognitionException {
		For_lifetimeContext _localctx = new For_lifetimeContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_for_lifetime);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1259);
			match(T__37);
			setState(1260);
			match(T__43);
			setState(1262);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Lifetime) {
				{
				setState(1261);
				lifetime_def_list();
				}
			}

			setState(1264);
			match(T__44);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_def_listContext extends ParserRuleContext {
		public List<Lifetime_defContext> lifetime_def() {
			return getRuleContexts(Lifetime_defContext.class);
		}
		public Lifetime_defContext lifetime_def(int i) {
			return getRuleContext(Lifetime_defContext.class,i);
		}
		public Lifetime_def_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_def_list; }
	}

	public final Lifetime_def_listContext lifetime_def_list() throws RecognitionException {
		Lifetime_def_listContext _localctx = new Lifetime_def_listContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_lifetime_def_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1266);
			lifetime_def();
			setState(1271);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,151,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1267);
					match(T__15);
					setState(1268);
					lifetime_def();
					}
					} 
				}
				setState(1273);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,151,_ctx);
			}
			setState(1275);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1274);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_defContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Lifetime_boundContext lifetime_bound() {
			return getRuleContext(Lifetime_boundContext.class,0);
		}
		public Lifetime_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_def; }
	}

	public final Lifetime_defContext lifetime_def() throws RecognitionException {
		Lifetime_defContext _localctx = new Lifetime_defContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_lifetime_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1277);
			match(Lifetime);
			setState(1280);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__20) {
				{
				setState(1278);
				match(T__20);
				setState(1279);
				lifetime_bound(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_boundContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Lifetime_boundContext lifetime_bound() {
			return getRuleContext(Lifetime_boundContext.class,0);
		}
		public Lifetime_boundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_bound; }
	}

	public final Lifetime_boundContext lifetime_bound() throws RecognitionException {
		return lifetime_bound(0);
	}

	private Lifetime_boundContext lifetime_bound(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Lifetime_boundContext _localctx = new Lifetime_boundContext(_ctx, _parentState);
		Lifetime_boundContext _prevctx = _localctx;
		int _startState = 168;
		enterRecursionRule(_localctx, 168, RULE_lifetime_bound, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1283);
			match(Lifetime);
			}
			_ctx.stop = _input.LT(-1);
			setState(1290);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,154,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Lifetime_boundContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_lifetime_bound);
					setState(1285);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1286);
					match(T__46);
					setState(1287);
					match(Lifetime);
					}
					} 
				}
				setState(1292);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,154,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Ty_path_mainContext extends ParserRuleContext {
		public Ty_path_tailContext ty_path_tail() {
			return getRuleContext(Ty_path_tailContext.class,0);
		}
		public Ty_path_parentContext ty_path_parent() {
			return getRuleContext(Ty_path_parentContext.class,0);
		}
		public Ty_path_mainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path_main; }
	}

	public final Ty_path_mainContext ty_path_main() throws RecognitionException {
		Ty_path_mainContext _localctx = new Ty_path_mainContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_ty_path_main);
		try {
			setState(1299);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,156,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1293);
				ty_path_tail();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1295);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
				case 1:
					{
					setState(1294);
					ty_path_parent(0);
					}
					break;
				}
				setState(1297);
				match(T__7);
				setState(1298);
				ty_path_tail();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_path_tailContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sum_listContext ty_sum_list() {
			return getRuleContext(Ty_sum_listContext.class,0);
		}
		public RtypeContext rtype() {
			return getRuleContext(RtypeContext.class,0);
		}
		public Ty_path_segment_no_superContext ty_path_segment_no_super() {
			return getRuleContext(Ty_path_segment_no_superContext.class,0);
		}
		public Ty_path_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path_tail; }
	}

	public final Ty_path_tailContext ty_path_tail() throws RecognitionException {
		Ty_path_tailContext _localctx = new Ty_path_tailContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_ty_path_tail);
		int _la;
		try {
			setState(1314);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,160,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1303);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__34:
				case T__35:
				case T__39:
				case Ident:
					{
					setState(1301);
					ident();
					}
					break;
				case T__45:
					{
					setState(1302);
					match(T__45);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(1305);
				match(T__1);
				setState(1307);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(1306);
					ty_sum_list();
					}
				}

				setState(1309);
				match(T__3);
				setState(1311);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,159,_ctx) ) {
				case 1:
					{
					setState(1310);
					rtype();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1313);
				ty_path_segment_no_super();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_path_parentContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public As_traitContext as_trait() {
			return getRuleContext(As_traitContext.class,0);
		}
		public Ty_path_segmentContext ty_path_segment() {
			return getRuleContext(Ty_path_segmentContext.class,0);
		}
		public Ty_path_parentContext ty_path_parent() {
			return getRuleContext(Ty_path_parentContext.class,0);
		}
		public Ty_path_parentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path_parent; }
	}

	public final Ty_path_parentContext ty_path_parent() throws RecognitionException {
		return ty_path_parent(0);
	}

	private Ty_path_parentContext ty_path_parent(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Ty_path_parentContext _localctx = new Ty_path_parentContext(_ctx, _parentState);
		Ty_path_parentContext _prevctx = _localctx;
		int _startState = 174;
		enterRecursionRule(_localctx, 174, RULE_ty_path_parent, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1328);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
				{
				setState(1317);
				match(T__8);
				}
				break;
			case T__43:
				{
				setState(1318);
				match(T__43);
				setState(1319);
				ty_sum();
				setState(1321);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__16) {
					{
					setState(1320);
					as_trait();
					}
				}

				setState(1323);
				match(T__44);
				}
				break;
			case T__4:
			case T__34:
			case T__35:
			case T__39:
			case T__45:
			case Ident:
				{
				setState(1325);
				ty_path_segment();
				}
				break;
			case T__7:
				{
				setState(1326);
				match(T__7);
				setState(1327);
				ty_path_segment();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1335);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,163,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Ty_path_parentContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_ty_path_parent);
					setState(1330);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1331);
					match(T__7);
					setState(1332);
					ty_path_segment();
					}
					} 
				}
				setState(1337);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,163,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Ty_path_segmentContext extends ParserRuleContext {
		public Ty_path_segment_no_superContext ty_path_segment_no_super() {
			return getRuleContext(Ty_path_segment_no_superContext.class,0);
		}
		public Ty_path_segmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path_segment; }
	}

	public final Ty_path_segmentContext ty_path_segment() throws RecognitionException {
		Ty_path_segmentContext _localctx = new Ty_path_segmentContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_ty_path_segment);
		try {
			setState(1340);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(1338);
				ty_path_segment_no_super();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 2);
				{
				setState(1339);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_path_segment_no_superContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_argsContext ty_args() {
			return getRuleContext(Ty_argsContext.class,0);
		}
		public Ty_path_segment_no_superContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_path_segment_no_super; }
	}

	public final Ty_path_segment_no_superContext ty_path_segment_no_super() throws RecognitionException {
		Ty_path_segment_no_superContext _localctx = new Ty_path_segment_no_superContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_ty_path_segment_no_super);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1344);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				{
				setState(1342);
				ident();
				}
				break;
			case T__45:
				{
				setState(1343);
				match(T__45);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(1347);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
			case 1:
				{
				setState(1346);
				ty_args();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_clauseContext extends ParserRuleContext {
		public Where_bound_listContext where_bound_list() {
			return getRuleContext(Where_bound_listContext.class,0);
		}
		public Where_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_clause; }
	}

	public final Where_clauseContext where_clause() throws RecognitionException {
		Where_clauseContext _localctx = new Where_clauseContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_where_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1349);
			match(T__47);
			setState(1350);
			where_bound_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_bound_listContext extends ParserRuleContext {
		public List<Where_boundContext> where_bound() {
			return getRuleContexts(Where_boundContext.class);
		}
		public Where_boundContext where_bound(int i) {
			return getRuleContext(Where_boundContext.class,i);
		}
		public Where_bound_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_bound_list; }
	}

	public final Where_bound_listContext where_bound_list() throws RecognitionException {
		Where_bound_listContext _localctx = new Where_bound_listContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_where_bound_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1352);
			where_bound();
			setState(1357);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1353);
					match(T__15);
					setState(1354);
					where_bound();
					}
					} 
				}
				setState(1359);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			}
			setState(1361);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1360);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_boundContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Lifetime_boundContext lifetime_bound() {
			return getRuleContext(Lifetime_boundContext.class,0);
		}
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public Colon_boundContext colon_bound() {
			return getRuleContext(Colon_boundContext.class,0);
		}
		public For_lifetimeContext for_lifetime() {
			return getRuleContext(For_lifetimeContext.class,0);
		}
		public Where_boundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_bound; }
	}

	public final Where_boundContext where_bound() throws RecognitionException {
		Where_boundContext _localctx = new Where_boundContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_where_bound);
		try {
			setState(1372);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Lifetime:
				enterOuterAlt(_localctx, 1);
				{
				setState(1363);
				match(Lifetime);
				setState(1364);
				match(T__20);
				setState(1365);
				lifetime_bound(0);
				}
				break;
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__10:
			case T__14:
			case T__24:
			case T__25:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 2);
				{
				setState(1367);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
				case 1:
					{
					setState(1366);
					for_lifetime();
					}
					break;
				}
				setState(1369);
				ty();
				setState(1370);
				colon_bound();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Colon_boundContext extends ParserRuleContext {
		public BoundContext bound() {
			return getRuleContext(BoundContext.class,0);
		}
		public Colon_boundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_colon_bound; }
	}

	public final Colon_boundContext colon_bound() throws RecognitionException {
		Colon_boundContext _localctx = new Colon_boundContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_colon_bound);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1374);
			match(T__20);
			setState(1375);
			bound(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BoundContext extends ParserRuleContext {
		public Prim_boundContext prim_bound() {
			return getRuleContext(Prim_boundContext.class,0);
		}
		public BoundContext bound() {
			return getRuleContext(BoundContext.class,0);
		}
		public BoundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bound; }
	}

	public final BoundContext bound() throws RecognitionException {
		return bound(0);
	}

	private BoundContext bound(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BoundContext _localctx = new BoundContext(_ctx, _parentState);
		BoundContext _prevctx = _localctx;
		int _startState = 188;
		enterRecursionRule(_localctx, 188, RULE_bound, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1378);
			prim_bound();
			}
			_ctx.stop = _input.LT(-1);
			setState(1385);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BoundContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bound);
					setState(1380);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1381);
					match(T__46);
					setState(1382);
					prim_bound();
					}
					} 
				}
				setState(1387);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Prim_boundContext extends ParserRuleContext {
		public Ty_pathContext ty_path() {
			return getRuleContext(Ty_pathContext.class,0);
		}
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Prim_boundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prim_bound; }
	}

	public final Prim_boundContext prim_bound() throws RecognitionException {
		Prim_boundContext _localctx = new Prim_boundContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_prim_bound);
		try {
			setState(1392);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__7:
			case T__8:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__43:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(1388);
				ty_path();
				}
				break;
			case T__48:
				enterOuterAlt(_localctx, 2);
				{
				setState(1389);
				match(T__48);
				setState(1390);
				ty_path();
				}
				break;
			case Lifetime:
				enterOuterAlt(_localctx, 3);
				{
				setState(1391);
				match(Lifetime);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TyContext extends ParserRuleContext {
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Ty_sum_listContext ty_sum_list() {
			return getRuleContext(Ty_sum_listContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Mut_or_constContext mut_or_const() {
			return getRuleContext(Mut_or_constContext.class,0);
		}
		public For_lifetimeContext for_lifetime() {
			return getRuleContext(For_lifetimeContext.class,0);
		}
		public Extern_abiContext extern_abi() {
			return getRuleContext(Extern_abiContext.class,0);
		}
		public Variadic_param_list_names_optionalContext variadic_param_list_names_optional() {
			return getRuleContext(Variadic_param_list_names_optionalContext.class,0);
		}
		public RtypeContext rtype() {
			return getRuleContext(RtypeContext.class,0);
		}
		public Ty_pathContext ty_path() {
			return getRuleContext(Ty_pathContext.class,0);
		}
		public Macro_tailContext macro_tail() {
			return getRuleContext(Macro_tailContext.class,0);
		}
		public TyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty; }
	}

	public final TyContext ty() throws RecognitionException {
		TyContext _localctx = new TyContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_ty);
		int _la;
		try {
			setState(1459);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,185,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1394);
				match(T__30);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1395);
				match(T__1);
				setState(1396);
				match(T__3);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1397);
				match(T__1);
				setState(1398);
				ty_sum();
				setState(1399);
				match(T__3);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1401);
				match(T__1);
				setState(1402);
				ty_sum();
				setState(1403);
				match(T__15);
				setState(1405);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(1404);
					ty_sum_list();
					}
				}

				setState(1407);
				match(T__3);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1409);
				match(T__41);
				setState(1410);
				ty_sum();
				setState(1413);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__9) {
					{
					setState(1411);
					match(T__9);
					setState(1412);
					expr();
					}
				}

				setState(1415);
				match(T__42);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1417);
				match(T__28);
				setState(1419);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(1418);
					match(Lifetime);
					}
				}

				setState(1422);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(1421);
					match(T__19);
					}
				}

				setState(1424);
				ty();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1425);
				match(T__29);
				setState(1427);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(1426);
					match(Lifetime);
					}
				}

				setState(1430);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(1429);
					match(T__19);
					}
				}

				setState(1432);
				ty();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1433);
				match(T__14);
				setState(1434);
				mut_or_const();
				setState(1435);
				ty();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1438);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__37) {
					{
					setState(1437);
					for_lifetime();
					}
				}

				setState(1441);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__24) {
					{
					setState(1440);
					match(T__24);
					}
				}

				setState(1444);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__10) {
					{
					setState(1443);
					extern_abi();
					}
				}

				setState(1446);
				match(T__25);
				setState(1447);
				match(T__1);
				setState(1449);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__10) | (1L << T__14) | (1L << T__19) | (1L << T__24) | (1L << T__25) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45))) != 0) || _la==Ident) {
					{
					setState(1448);
					variadic_param_list_names_optional();
					}
				}

				setState(1451);
				match(T__3);
				setState(1453);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
				case 1:
					{
					setState(1452);
					rtype();
					}
					break;
				}
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1455);
				ty_path();
				setState(1457);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
				case 1:
					{
					setState(1456);
					macro_tail();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mut_or_constContext extends ParserRuleContext {
		public Mut_or_constContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mut_or_const; }
	}

	public final Mut_or_constContext mut_or_const() throws RecognitionException {
		Mut_or_constContext _localctx = new Mut_or_constContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_mut_or_const);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1461);
			_la = _input.LA(1);
			if ( !(_la==T__19 || _la==T__23) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extern_abiContext extends ParserRuleContext {
		public TerminalNode StringLit() { return getToken(RustParser.StringLit, 0); }
		public Extern_abiContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extern_abi; }
	}

	public final Extern_abiContext extern_abi() throws RecognitionException {
		Extern_abiContext _localctx = new Extern_abiContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_extern_abi);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1463);
			match(T__10);
			setState(1465);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==StringLit) {
				{
				setState(1464);
				match(StringLit);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_argsContext extends ParserRuleContext {
		public Lifetime_listContext lifetime_list() {
			return getRuleContext(Lifetime_listContext.class,0);
		}
		public Ty_arg_listContext ty_arg_list() {
			return getRuleContext(Ty_arg_listContext.class,0);
		}
		public List<TerminalNode> Lifetime() { return getTokens(RustParser.Lifetime); }
		public TerminalNode Lifetime(int i) {
			return getToken(RustParser.Lifetime, i);
		}
		public Ty_argsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_args; }
	}

	public final Ty_argsContext ty_args() throws RecognitionException {
		Ty_argsContext _localctx = new Ty_argsContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_ty_args);
		int _la;
		try {
			setState(1482);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1467);
				match(T__43);
				setState(1468);
				lifetime_list();
				setState(1469);
				match(T__44);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1471);
				match(T__43);
				setState(1476);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Lifetime) {
					{
					{
					setState(1472);
					match(Lifetime);
					setState(1473);
					match(T__15);
					}
					}
					setState(1478);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1479);
				ty_arg_list();
				setState(1480);
				match(T__44);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_listContext extends ParserRuleContext {
		public List<TerminalNode> Lifetime() { return getTokens(RustParser.Lifetime); }
		public TerminalNode Lifetime(int i) {
			return getToken(RustParser.Lifetime, i);
		}
		public Lifetime_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_list; }
	}

	public final Lifetime_listContext lifetime_list() throws RecognitionException {
		Lifetime_listContext _localctx = new Lifetime_listContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_lifetime_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1484);
			match(Lifetime);
			setState(1489);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,189,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1485);
					match(T__15);
					setState(1486);
					match(Lifetime);
					}
					} 
				}
				setState(1491);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,189,_ctx);
			}
			setState(1493);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1492);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_sumContext extends ParserRuleContext {
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public BoundContext bound() {
			return getRuleContext(BoundContext.class,0);
		}
		public Ty_sumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_sum; }
	}

	public final Ty_sumContext ty_sum() throws RecognitionException {
		Ty_sumContext _localctx = new Ty_sumContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_ty_sum);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1495);
			ty();
			setState(1498);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
			case 1:
				{
				setState(1496);
				match(T__46);
				setState(1497);
				bound(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_sum_listContext extends ParserRuleContext {
		public List<Ty_sumContext> ty_sum() {
			return getRuleContexts(Ty_sumContext.class);
		}
		public Ty_sumContext ty_sum(int i) {
			return getRuleContext(Ty_sumContext.class,i);
		}
		public Ty_sum_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_sum_list; }
	}

	public final Ty_sum_listContext ty_sum_list() throws RecognitionException {
		Ty_sum_listContext _localctx = new Ty_sum_listContext(_ctx, getState());
		enterRule(_localctx, 204, RULE_ty_sum_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1500);
			ty_sum();
			setState(1505);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,192,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1501);
					match(T__15);
					setState(1502);
					ty_sum();
					}
					} 
				}
				setState(1507);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,192,_ctx);
			}
			setState(1509);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1508);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_argContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Ty_argContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_arg; }
	}

	public final Ty_argContext ty_arg() throws RecognitionException {
		Ty_argContext _localctx = new Ty_argContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_ty_arg);
		try {
			setState(1516);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1511);
				ident();
				setState(1512);
				match(T__22);
				setState(1513);
				ty_sum();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1515);
				ty_sum();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_arg_listContext extends ParserRuleContext {
		public List<Ty_argContext> ty_arg() {
			return getRuleContexts(Ty_argContext.class);
		}
		public Ty_argContext ty_arg(int i) {
			return getRuleContext(Ty_argContext.class,i);
		}
		public Ty_arg_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_arg_list; }
	}

	public final Ty_arg_listContext ty_arg_list() throws RecognitionException {
		Ty_arg_listContext _localctx = new Ty_arg_listContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_ty_arg_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1518);
			ty_arg();
			setState(1523);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,195,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1519);
					match(T__15);
					setState(1520);
					ty_arg();
					}
					} 
				}
				setState(1525);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,195,_ctx);
			}
			setState(1527);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1526);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_paramsContext extends ParserRuleContext {
		public Lifetime_param_listContext lifetime_param_list() {
			return getRuleContext(Lifetime_param_listContext.class,0);
		}
		public Ty_param_listContext ty_param_list() {
			return getRuleContext(Ty_param_listContext.class,0);
		}
		public List<Lifetime_paramContext> lifetime_param() {
			return getRuleContexts(Lifetime_paramContext.class);
		}
		public Lifetime_paramContext lifetime_param(int i) {
			return getRuleContext(Lifetime_paramContext.class,i);
		}
		public Ty_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_params; }
	}

	public final Ty_paramsContext ty_params() throws RecognitionException {
		Ty_paramsContext _localctx = new Ty_paramsContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_ty_params);
		try {
			int _alt;
			setState(1545);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1529);
				match(T__43);
				setState(1530);
				lifetime_param_list();
				setState(1531);
				match(T__44);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1533);
				match(T__43);
				setState(1539);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,197,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(1534);
						lifetime_param();
						setState(1535);
						match(T__15);
						}
						} 
					}
					setState(1541);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,197,_ctx);
				}
				setState(1542);
				ty_param_list();
				setState(1543);
				match(T__44);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_paramContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Lifetime_boundContext lifetime_bound() {
			return getRuleContext(Lifetime_boundContext.class,0);
		}
		public Lifetime_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_param; }
	}

	public final Lifetime_paramContext lifetime_param() throws RecognitionException {
		Lifetime_paramContext _localctx = new Lifetime_paramContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_lifetime_param);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1550);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(1547);
				attr();
				}
				}
				setState(1552);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1553);
			match(Lifetime);
			setState(1556);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__20) {
				{
				setState(1554);
				match(T__20);
				setState(1555);
				lifetime_bound(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_param_listContext extends ParserRuleContext {
		public List<Lifetime_paramContext> lifetime_param() {
			return getRuleContexts(Lifetime_paramContext.class);
		}
		public Lifetime_paramContext lifetime_param(int i) {
			return getRuleContext(Lifetime_paramContext.class,i);
		}
		public Lifetime_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_param_list; }
	}

	public final Lifetime_param_listContext lifetime_param_list() throws RecognitionException {
		Lifetime_param_listContext _localctx = new Lifetime_param_listContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_lifetime_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1558);
			lifetime_param();
			setState(1563);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,201,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1559);
					match(T__15);
					setState(1560);
					lifetime_param();
					}
					} 
				}
				setState(1565);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,201,_ctx);
			}
			setState(1567);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1566);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_paramContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Colon_boundContext colon_bound() {
			return getRuleContext(Colon_boundContext.class,0);
		}
		public Ty_defaultContext ty_default() {
			return getRuleContext(Ty_defaultContext.class,0);
		}
		public Ty_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_param; }
	}

	public final Ty_paramContext ty_param() throws RecognitionException {
		Ty_paramContext _localctx = new Ty_paramContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_ty_param);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1572);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(1569);
				attr();
				}
				}
				setState(1574);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1575);
			ident();
			setState(1577);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__20) {
				{
				setState(1576);
				colon_bound();
				}
			}

			setState(1580);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__22) {
				{
				setState(1579);
				ty_default();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Ty_param_listContext extends ParserRuleContext {
		public List<Ty_paramContext> ty_param() {
			return getRuleContexts(Ty_paramContext.class);
		}
		public Ty_paramContext ty_param(int i) {
			return getRuleContext(Ty_paramContext.class,i);
		}
		public Ty_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ty_param_list; }
	}

	public final Ty_param_listContext ty_param_list() throws RecognitionException {
		Ty_param_listContext _localctx = new Ty_param_listContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_ty_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1582);
			ty_param();
			setState(1587);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,206,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1583);
					match(T__15);
					setState(1584);
					ty_param();
					}
					} 
				}
				setState(1589);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,206,_ctx);
			}
			setState(1591);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1590);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PatContext extends ParserRuleContext {
		public Pat_no_mutContext pat_no_mut() {
			return getRuleContext(Pat_no_mutContext.class,0);
		}
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public PatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat; }
	}

	public final PatContext pat() throws RecognitionException {
		PatContext _localctx = new PatContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_pat);
		try {
			setState(1600);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case T__50:
			case T__51:
			case T__52:
			case T__65:
			case T__66:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 1);
				{
				setState(1593);
				pat_no_mut();
				}
				break;
			case T__19:
				enterOuterAlt(_localctx, 2);
				{
				setState(1594);
				match(T__19);
				setState(1595);
				ident();
				setState(1598);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
				case 1:
					{
					setState(1596);
					match(T__49);
					setState(1597);
					pat();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_no_mutContext extends ParserRuleContext {
		public Pat_litContext pat_lit() {
			return getRuleContext(Pat_litContext.class,0);
		}
		public List<Pat_range_endContext> pat_range_end() {
			return getRuleContexts(Pat_range_endContext.class);
		}
		public Pat_range_endContext pat_range_end(int i) {
			return getRuleContext(Pat_range_endContext.class,i);
		}
		public PathContext path() {
			return getRuleContext(PathContext.class,0);
		}
		public Macro_tailContext macro_tail() {
			return getRuleContext(Macro_tailContext.class,0);
		}
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Pat_list_with_dotsContext pat_list_with_dots() {
			return getRuleContext(Pat_list_with_dotsContext.class,0);
		}
		public Pat_fieldsContext pat_fields() {
			return getRuleContext(Pat_fieldsContext.class,0);
		}
		public Pat_elt_listContext pat_elt_list() {
			return getRuleContext(Pat_elt_listContext.class,0);
		}
		public Pat_no_mutContext pat_no_mut() {
			return getRuleContext(Pat_no_mutContext.class,0);
		}
		public Pat_no_mutContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_no_mut; }
	}

	public final Pat_no_mutContext pat_no_mut() throws RecognitionException {
		Pat_no_mutContext _localctx = new Pat_no_mutContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_pat_no_mut);
		int _la;
		try {
			setState(1667);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,217,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1602);
				match(T__30);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1603);
				pat_lit();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1604);
				pat_range_end();
				setState(1605);
				match(T__27);
				setState(1606);
				pat_range_end();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1608);
				pat_range_end();
				setState(1609);
				match(T__38);
				setState(1610);
				pat_range_end();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1612);
				path();
				setState(1613);
				macro_tail();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1616);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__50) {
					{
					setState(1615);
					match(T__50);
					}
				}

				setState(1618);
				ident();
				setState(1621);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,211,_ctx) ) {
				case 1:
					{
					setState(1619);
					match(T__49);
					setState(1620);
					pat();
					}
					break;
				}
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1623);
				match(T__50);
				setState(1624);
				match(T__19);
				setState(1625);
				ident();
				setState(1628);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
				case 1:
					{
					setState(1626);
					match(T__49);
					setState(1627);
					pat();
					}
					break;
				}
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1630);
				path();
				setState(1631);
				match(T__1);
				setState(1633);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__38) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(1632);
					pat_list_with_dots();
					}
				}

				setState(1635);
				match(T__3);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1637);
				path();
				setState(1638);
				match(T__12);
				setState(1640);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__19) | (1L << T__34) | (1L << T__35) | (1L << T__38) | (1L << T__39) | (1L << T__50) | (1L << T__51))) != 0) || _la==Ident) {
					{
					setState(1639);
					pat_fields();
					}
				}

				setState(1642);
				match(T__13);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1644);
				path();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1645);
				match(T__1);
				setState(1647);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__38) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(1646);
					pat_list_with_dots();
					}
				}

				setState(1649);
				match(T__3);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1650);
				match(T__41);
				setState(1652);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__38) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(1651);
					pat_elt_list();
					}
				}

				setState(1654);
				match(T__42);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1655);
				match(T__28);
				setState(1656);
				pat_no_mut();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1657);
				match(T__28);
				setState(1658);
				match(T__19);
				setState(1659);
				pat();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1660);
				match(T__29);
				setState(1661);
				pat_no_mut();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1662);
				match(T__29);
				setState(1663);
				match(T__19);
				setState(1664);
				pat();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1665);
				match(T__51);
				setState(1666);
				pat();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_range_endContext extends ParserRuleContext {
		public PathContext path() {
			return getRuleContext(PathContext.class,0);
		}
		public Pat_litContext pat_lit() {
			return getRuleContext(Pat_litContext.class,0);
		}
		public Pat_range_endContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_range_end; }
	}

	public final Pat_range_endContext pat_range_end() throws RecognitionException {
		Pat_range_endContext _localctx = new Pat_range_endContext(_ctx, getState());
		enterRule(_localctx, 224, RULE_pat_range_end);
		try {
			setState(1671);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__7:
			case T__8:
			case T__34:
			case T__35:
			case T__39:
			case T__43:
			case T__45:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(1669);
				path();
				}
				break;
			case T__52:
			case T__65:
			case T__66:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 2);
				{
				setState(1670);
				pat_lit();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_litContext extends ParserRuleContext {
		public LitContext lit() {
			return getRuleContext(LitContext.class,0);
		}
		public Pat_litContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_lit; }
	}

	public final Pat_litContext pat_lit() throws RecognitionException {
		Pat_litContext _localctx = new Pat_litContext(_ctx, getState());
		enterRule(_localctx, 226, RULE_pat_lit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1674);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__52) {
				{
				setState(1673);
				match(T__52);
				}
			}

			setState(1676);
			lit();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_listContext extends ParserRuleContext {
		public List<PatContext> pat() {
			return getRuleContexts(PatContext.class);
		}
		public PatContext pat(int i) {
			return getRuleContext(PatContext.class,i);
		}
		public Pat_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_list; }
	}

	public final Pat_listContext pat_list() throws RecognitionException {
		Pat_listContext _localctx = new Pat_listContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_pat_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1678);
			pat();
			setState(1683);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,220,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1679);
					match(T__15);
					setState(1680);
					pat();
					}
					} 
				}
				setState(1685);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,220,_ctx);
			}
			setState(1687);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1686);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_list_with_dotsContext extends ParserRuleContext {
		public Pat_list_dots_tailContext pat_list_dots_tail() {
			return getRuleContext(Pat_list_dots_tailContext.class,0);
		}
		public List<PatContext> pat() {
			return getRuleContexts(PatContext.class);
		}
		public PatContext pat(int i) {
			return getRuleContext(PatContext.class,i);
		}
		public Pat_list_with_dotsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_list_with_dots; }
	}

	public final Pat_list_with_dotsContext pat_list_with_dots() throws RecognitionException {
		Pat_list_with_dotsContext _localctx = new Pat_list_with_dotsContext(_ctx, getState());
		enterRule(_localctx, 230, RULE_pat_list_with_dots);
		int _la;
		try {
			int _alt;
			setState(1704);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__38:
				enterOuterAlt(_localctx, 1);
				{
				setState(1689);
				pat_list_dots_tail();
				}
				break;
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__19:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case T__50:
			case T__51:
			case T__52:
			case T__65:
			case T__66:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 2);
				{
				setState(1690);
				pat();
				setState(1695);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,222,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(1691);
						match(T__15);
						setState(1692);
						pat();
						}
						} 
					}
					setState(1697);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,222,_ctx);
				}
				setState(1702);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__15) {
					{
					setState(1698);
					match(T__15);
					setState(1700);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__38) {
						{
						setState(1699);
						pat_list_dots_tail();
						}
					}

					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_list_dots_tailContext extends ParserRuleContext {
		public Pat_listContext pat_list() {
			return getRuleContext(Pat_listContext.class,0);
		}
		public Pat_list_dots_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_list_dots_tail; }
	}

	public final Pat_list_dots_tailContext pat_list_dots_tail() throws RecognitionException {
		Pat_list_dots_tailContext _localctx = new Pat_list_dots_tailContext(_ctx, getState());
		enterRule(_localctx, 232, RULE_pat_list_dots_tail);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1706);
			match(T__38);
			setState(1709);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1707);
				match(T__15);
				setState(1708);
				pat_list();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_eltContext extends ParserRuleContext {
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Pat_eltContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_elt; }
	}

	public final Pat_eltContext pat_elt() throws RecognitionException {
		Pat_eltContext _localctx = new Pat_eltContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_pat_elt);
		int _la;
		try {
			setState(1716);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__19:
			case T__28:
			case T__29:
			case T__30:
			case T__34:
			case T__35:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case T__50:
			case T__51:
			case T__52:
			case T__65:
			case T__66:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 1);
				{
				setState(1711);
				pat();
				setState(1713);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__38) {
					{
					setState(1712);
					match(T__38);
					}
				}

				}
				break;
			case T__38:
				enterOuterAlt(_localctx, 2);
				{
				setState(1715);
				match(T__38);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_elt_listContext extends ParserRuleContext {
		public List<Pat_eltContext> pat_elt() {
			return getRuleContexts(Pat_eltContext.class);
		}
		public Pat_eltContext pat_elt(int i) {
			return getRuleContext(Pat_eltContext.class,i);
		}
		public Pat_elt_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_elt_list; }
	}

	public final Pat_elt_listContext pat_elt_list() throws RecognitionException {
		Pat_elt_listContext _localctx = new Pat_elt_listContext(_ctx, getState());
		enterRule(_localctx, 236, RULE_pat_elt_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1718);
			pat_elt();
			setState(1723);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1719);
					match(T__15);
					setState(1720);
					pat_elt();
					}
					} 
				}
				setState(1725);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			}
			setState(1727);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1726);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_fieldsContext extends ParserRuleContext {
		public List<Pat_fieldContext> pat_field() {
			return getRuleContexts(Pat_fieldContext.class);
		}
		public Pat_fieldContext pat_field(int i) {
			return getRuleContext(Pat_fieldContext.class,i);
		}
		public Pat_fieldsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_fields; }
	}

	public final Pat_fieldsContext pat_fields() throws RecognitionException {
		Pat_fieldsContext _localctx = new Pat_fieldsContext(_ctx, getState());
		enterRule(_localctx, 238, RULE_pat_fields);
		int _la;
		try {
			int _alt;
			setState(1745);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__38:
				enterOuterAlt(_localctx, 1);
				{
				setState(1729);
				match(T__38);
				}
				break;
			case T__19:
			case T__34:
			case T__35:
			case T__39:
			case T__50:
			case T__51:
			case Ident:
				enterOuterAlt(_localctx, 2);
				{
				setState(1730);
				pat_field();
				setState(1735);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,231,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(1731);
						match(T__15);
						setState(1732);
						pat_field();
						}
						} 
					}
					setState(1737);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,231,_ctx);
				}
				setState(1743);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,233,_ctx) ) {
				case 1:
					{
					setState(1738);
					match(T__15);
					setState(1739);
					match(T__38);
					}
					break;
				case 2:
					{
					setState(1741);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__15) {
						{
						setState(1740);
						match(T__15);
						}
					}

					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pat_fieldContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Pat_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pat_field; }
	}

	public final Pat_fieldContext pat_field() throws RecognitionException {
		Pat_fieldContext _localctx = new Pat_fieldContext(_ctx, getState());
		enterRule(_localctx, 240, RULE_pat_field);
		int _la;
		try {
			setState(1761);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,238,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1748);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__51) {
					{
					setState(1747);
					match(T__51);
					}
				}

				setState(1751);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__50) {
					{
					setState(1750);
					match(T__50);
					}
				}

				setState(1754);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(1753);
					match(T__19);
					}
				}

				setState(1756);
				ident();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1757);
				ident();
				setState(1758);
				match(T__20);
				setState(1759);
				pat();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public Assign_exprContext assign_expr() {
			return getRuleContext(Assign_exprContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 242, RULE_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1763);
			assign_expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expr_no_structContext extends ParserRuleContext {
		public Assign_expr_no_structContext assign_expr_no_struct() {
			return getRuleContext(Assign_expr_no_structContext.class,0);
		}
		public Expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_no_struct; }
	}

	public final Expr_no_structContext expr_no_struct() throws RecognitionException {
		Expr_no_structContext _localctx = new Expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 244, RULE_expr_no_struct);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1765);
			assign_expr_no_struct();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expr_listContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Expr_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_list; }
	}

	public final Expr_listContext expr_list() throws RecognitionException {
		Expr_listContext _localctx = new Expr_listContext(_ctx, getState());
		enterRule(_localctx, 246, RULE_expr_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1767);
			expr();
			setState(1772);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,239,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1768);
					match(T__15);
					setState(1769);
					expr();
					}
					} 
				}
				setState(1774);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,239,_ctx);
			}
			setState(1776);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(1775);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 248, RULE_block);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1778);
			match(T__12);
			setState(1782);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,241,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1779);
					stmt();
					}
					} 
				}
				setState(1784);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,241,_ctx);
			}
			setState(1786);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
				{
				setState(1785);
				expr();
				}
			}

			setState(1788);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Block_with_inner_attrsContext extends ParserRuleContext {
		public List<Inner_attrContext> inner_attr() {
			return getRuleContexts(Inner_attrContext.class);
		}
		public Inner_attrContext inner_attr(int i) {
			return getRuleContext(Inner_attrContext.class,i);
		}
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Block_with_inner_attrsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block_with_inner_attrs; }
	}

	public final Block_with_inner_attrsContext block_with_inner_attrs() throws RecognitionException {
		Block_with_inner_attrsContext _localctx = new Block_with_inner_attrsContext(_ctx, getState());
		enterRule(_localctx, 250, RULE_block_with_inner_attrs);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1790);
			match(T__12);
			setState(1794);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,243,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1791);
					inner_attr();
					}
					} 
				}
				setState(1796);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,243,_ctx);
			}
			setState(1800);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,244,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1797);
					stmt();
					}
					} 
				}
				setState(1802);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,244,_ctx);
			}
			setState(1804);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
				{
				setState(1803);
				expr();
				}
			}

			setState(1806);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtContext extends ParserRuleContext {
		public ItemContext item() {
			return getRuleContext(ItemContext.class,0);
		}
		public Stmt_tailContext stmt_tail() {
			return getRuleContext(Stmt_tailContext.class,0);
		}
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 252, RULE_stmt);
		try {
			setState(1811);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1808);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1809);
				item();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1810);
				stmt_tail();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Stmt_tailContext extends ParserRuleContext {
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Blocky_exprContext blocky_expr() {
			return getRuleContext(Blocky_exprContext.class,0);
		}
		public Stmt_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt_tail; }
	}

	public final Stmt_tailContext stmt_tail() throws RecognitionException {
		Stmt_tailContext _localctx = new Stmt_tailContext(_ctx, getState());
		enterRule(_localctx, 254, RULE_stmt_tail);
		int _la;
		try {
			setState(1841);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,251,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1816);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1813);
					attr();
					}
					}
					setState(1818);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1819);
				match(T__53);
				setState(1820);
				pat();
				setState(1823);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__20) {
					{
					setState(1821);
					match(T__20);
					setState(1822);
					ty();
					}
				}

				setState(1827);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__22) {
					{
					setState(1825);
					match(T__22);
					setState(1826);
					expr();
					}
				}

				setState(1829);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1834);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__40) {
					{
					{
					setState(1831);
					attr();
					}
					}
					setState(1836);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1837);
				blocky_expr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1838);
				expr();
				setState(1839);
				match(T__9);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Blocky_exprContext extends ParserRuleContext {
		public Block_with_inner_attrsContext block_with_inner_attrs() {
			return getRuleContext(Block_with_inner_attrsContext.class,0);
		}
		public List<Cond_or_patContext> cond_or_pat() {
			return getRuleContexts(Cond_or_patContext.class);
		}
		public Cond_or_patContext cond_or_pat(int i) {
			return getRuleContext(Cond_or_patContext.class,i);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public Expr_no_structContext expr_no_struct() {
			return getRuleContext(Expr_no_structContext.class,0);
		}
		public Expr_inner_attrsContext expr_inner_attrs() {
			return getRuleContext(Expr_inner_attrsContext.class,0);
		}
		public Match_armsContext match_arms() {
			return getRuleContext(Match_armsContext.class,0);
		}
		public Loop_labelContext loop_label() {
			return getRuleContext(Loop_labelContext.class,0);
		}
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Blocky_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blocky_expr; }
	}

	public final Blocky_exprContext blocky_expr() throws RecognitionException {
		Blocky_exprContext _localctx = new Blocky_exprContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_blocky_expr);
		int _la;
		try {
			int _alt;
			setState(1895);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1843);
				block_with_inner_attrs();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1844);
				match(T__54);
				setState(1845);
				cond_or_pat();
				setState(1846);
				block();
				setState(1854);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,252,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(1847);
						match(T__55);
						setState(1848);
						match(T__54);
						setState(1849);
						cond_or_pat();
						setState(1850);
						block();
						}
						} 
					}
					setState(1856);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,252,_ctx);
				}
				setState(1859);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,253,_ctx) ) {
				case 1:
					{
					setState(1857);
					match(T__55);
					setState(1858);
					block();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1861);
				match(T__56);
				setState(1862);
				expr_no_struct();
				setState(1863);
				match(T__12);
				setState(1865);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
				case 1:
					{
					setState(1864);
					expr_inner_attrs();
					}
					break;
				}
				setState(1868);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(1867);
					match_arms();
					}
				}

				setState(1870);
				match(T__13);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1873);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(1872);
					loop_label();
					}
				}

				setState(1875);
				match(T__57);
				setState(1876);
				cond_or_pat();
				setState(1877);
				block_with_inner_attrs();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1880);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(1879);
					loop_label();
					}
				}

				setState(1882);
				match(T__37);
				setState(1883);
				pat();
				setState(1884);
				match(T__5);
				setState(1885);
				expr_no_struct();
				setState(1886);
				block_with_inner_attrs();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1889);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Lifetime) {
					{
					setState(1888);
					loop_label();
					}
				}

				setState(1891);
				match(T__58);
				setState(1892);
				block_with_inner_attrs();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1893);
				match(T__24);
				setState(1894);
				block_with_inner_attrs();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Cond_or_patContext extends ParserRuleContext {
		public Expr_no_structContext expr_no_struct() {
			return getRuleContext(Expr_no_structContext.class,0);
		}
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Cond_or_patContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cond_or_pat; }
	}

	public final Cond_or_patContext cond_or_pat() throws RecognitionException {
		Cond_or_patContext _localctx = new Cond_or_patContext(_ctx, getState());
		enterRule(_localctx, 258, RULE_cond_or_pat);
		try {
			setState(1903);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__6:
			case T__7:
			case T__8:
			case T__12:
			case T__14:
			case T__24:
			case T__28:
			case T__29:
			case T__34:
			case T__35:
			case T__37:
			case T__38:
			case T__39:
			case T__40:
			case T__41:
			case T__43:
			case T__45:
			case T__51:
			case T__52:
			case T__54:
			case T__56:
			case T__57:
			case T__58:
			case T__60:
			case T__61:
			case T__62:
			case T__63:
			case T__64:
			case T__65:
			case T__66:
			case T__67:
			case Lifetime:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 1);
				{
				setState(1897);
				expr_no_struct();
				}
				break;
			case T__53:
				enterOuterAlt(_localctx, 2);
				{
				setState(1898);
				match(T__53);
				setState(1899);
				pat();
				setState(1900);
				match(T__22);
				setState(1901);
				expr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Loop_labelContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Loop_labelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop_label; }
	}

	public final Loop_labelContext loop_label() throws RecognitionException {
		Loop_labelContext _localctx = new Loop_labelContext(_ctx, getState());
		enterRule(_localctx, 260, RULE_loop_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1905);
			match(Lifetime);
			setState(1906);
			match(T__20);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Match_armsContext extends ParserRuleContext {
		public Match_arm_introContext match_arm_intro() {
			return getRuleContext(Match_arm_introContext.class,0);
		}
		public Blocky_exprContext blocky_expr() {
			return getRuleContext(Blocky_exprContext.class,0);
		}
		public Match_armsContext match_arms() {
			return getRuleContext(Match_armsContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Match_armsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_match_arms; }
	}

	public final Match_armsContext match_arms() throws RecognitionException {
		Match_armsContext _localctx = new Match_armsContext(_ctx, getState());
		enterRule(_localctx, 262, RULE_match_arms);
		int _la;
		try {
			setState(1924);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1908);
				match_arm_intro();
				setState(1909);
				blocky_expr();
				setState(1911);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__15) {
					{
					setState(1910);
					match(T__15);
					}
				}

				setState(1914);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(1913);
					match_arms();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1916);
				match_arm_intro();
				setState(1917);
				expr();
				setState(1922);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__15) {
					{
					setState(1918);
					match(T__15);
					setState(1920);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
						{
						setState(1919);
						match_arms();
						}
					}

					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Match_arm_introContext extends ParserRuleContext {
		public Match_patContext match_pat() {
			return getRuleContext(Match_patContext.class,0);
		}
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Match_if_clauseContext match_if_clause() {
			return getRuleContext(Match_if_clauseContext.class,0);
		}
		public Match_arm_introContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_match_arm_intro; }
	}

	public final Match_arm_introContext match_arm_intro() throws RecognitionException {
		Match_arm_introContext _localctx = new Match_arm_introContext(_ctx, getState());
		enterRule(_localctx, 264, RULE_match_arm_intro);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1929);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__40) {
				{
				{
				setState(1926);
				attr();
				}
				}
				setState(1931);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1932);
			match_pat(0);
			setState(1934);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__54) {
				{
				setState(1933);
				match_if_clause();
				}
			}

			setState(1936);
			match(T__59);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Match_patContext extends ParserRuleContext {
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public Match_patContext match_pat() {
			return getRuleContext(Match_patContext.class,0);
		}
		public Match_patContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_match_pat; }
	}

	public final Match_patContext match_pat() throws RecognitionException {
		return match_pat(0);
	}

	private Match_patContext match_pat(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Match_patContext _localctx = new Match_patContext(_ctx, _parentState);
		Match_patContext _prevctx = _localctx;
		int _startState = 266;
		enterRecursionRule(_localctx, 266, RULE_match_pat, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1939);
			pat();
			}
			_ctx.stop = _input.LT(-1);
			setState(1946);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,268,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Match_patContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_match_pat);
					setState(1941);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1942);
					match(T__60);
					setState(1943);
					pat();
					}
					} 
				}
				setState(1948);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,268,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Match_if_clauseContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Match_if_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_match_if_clause; }
	}

	public final Match_if_clauseContext match_if_clause() throws RecognitionException {
		Match_if_clauseContext _localctx = new Match_if_clauseContext(_ctx, getState());
		enterRule(_localctx, 268, RULE_match_if_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1949);
			match(T__54);
			setState(1950);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expr_attrsContext extends ParserRuleContext {
		public List<AttrContext> attr() {
			return getRuleContexts(AttrContext.class);
		}
		public AttrContext attr(int i) {
			return getRuleContext(AttrContext.class,i);
		}
		public Expr_attrsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_attrs; }
	}

	public final Expr_attrsContext expr_attrs() throws RecognitionException {
		Expr_attrsContext _localctx = new Expr_attrsContext(_ctx, getState());
		enterRule(_localctx, 270, RULE_expr_attrs);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1952);
			attr();
			setState(1956);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,269,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1953);
					attr();
					}
					} 
				}
				setState(1958);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,269,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expr_inner_attrsContext extends ParserRuleContext {
		public List<Inner_attrContext> inner_attr() {
			return getRuleContexts(Inner_attrContext.class);
		}
		public Inner_attrContext inner_attr(int i) {
			return getRuleContext(Inner_attrContext.class,i);
		}
		public Expr_inner_attrsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_inner_attrs; }
	}

	public final Expr_inner_attrsContext expr_inner_attrs() throws RecognitionException {
		Expr_inner_attrsContext _localctx = new Expr_inner_attrsContext(_ctx, getState());
		enterRule(_localctx, 272, RULE_expr_inner_attrs);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1959);
			inner_attr();
			setState(1963);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,270,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1960);
					inner_attr();
					}
					} 
				}
				setState(1965);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,270,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Prim_exprContext extends ParserRuleContext {
		public Prim_expr_no_structContext prim_expr_no_struct() {
			return getRuleContext(Prim_expr_no_structContext.class,0);
		}
		public PathContext path() {
			return getRuleContext(PathContext.class,0);
		}
		public Expr_inner_attrsContext expr_inner_attrs() {
			return getRuleContext(Expr_inner_attrsContext.class,0);
		}
		public FieldsContext fields() {
			return getRuleContext(FieldsContext.class,0);
		}
		public Prim_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prim_expr; }
	}

	public final Prim_exprContext prim_expr() throws RecognitionException {
		Prim_exprContext _localctx = new Prim_exprContext(_ctx, getState());
		enterRule(_localctx, 274, RULE_prim_expr);
		int _la;
		try {
			setState(1977);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,273,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1966);
				prim_expr_no_struct();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1967);
				path();
				setState(1968);
				match(T__12);
				setState(1970);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__40) {
					{
					setState(1969);
					expr_inner_attrs();
					}
				}

				setState(1973);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (T__34 - 35)) | (1L << (T__35 - 35)) | (1L << (T__38 - 35)) | (1L << (T__39 - 35)) | (1L << (Ident - 35)) | (1L << (BareIntLit - 35)))) != 0)) {
					{
					setState(1972);
					fields();
					}
				}

				setState(1975);
				match(T__13);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Prim_expr_no_structContext extends ParserRuleContext {
		public LitContext lit() {
			return getRuleContext(LitContext.class,0);
		}
		public PathContext path() {
			return getRuleContext(PathContext.class,0);
		}
		public Macro_tailContext macro_tail() {
			return getRuleContext(Macro_tailContext.class,0);
		}
		public Expr_inner_attrsContext expr_inner_attrs() {
			return getRuleContext(Expr_inner_attrsContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Expr_listContext expr_list() {
			return getRuleContext(Expr_listContext.class,0);
		}
		public Closure_paramsContext closure_params() {
			return getRuleContext(Closure_paramsContext.class,0);
		}
		public Closure_tailContext closure_tail() {
			return getRuleContext(Closure_tailContext.class,0);
		}
		public Blocky_exprContext blocky_expr() {
			return getRuleContext(Blocky_exprContext.class,0);
		}
		public Lifetime_or_exprContext lifetime_or_expr() {
			return getRuleContext(Lifetime_or_exprContext.class,0);
		}
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Prim_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prim_expr_no_struct; }
	}

	public final Prim_expr_no_structContext prim_expr_no_struct() throws RecognitionException {
		Prim_expr_no_structContext _localctx = new Prim_expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 276, RULE_prim_expr_no_struct);
		int _la;
		try {
			setState(2044);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1979);
				lit();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1980);
				match(T__8);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1981);
				path();
				setState(1983);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
				case 1:
					{
					setState(1982);
					macro_tail();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1985);
				match(T__1);
				setState(1987);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__40) {
					{
					setState(1986);
					expr_inner_attrs();
					}
				}

				setState(1989);
				match(T__3);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1990);
				match(T__1);
				setState(1992);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,276,_ctx) ) {
				case 1:
					{
					setState(1991);
					expr_inner_attrs();
					}
					break;
				}
				setState(1994);
				expr();
				setState(1995);
				match(T__3);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1997);
				match(T__1);
				setState(1999);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,277,_ctx) ) {
				case 1:
					{
					setState(1998);
					expr_inner_attrs();
					}
					break;
				}
				setState(2001);
				expr();
				setState(2002);
				match(T__15);
				setState(2004);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
					{
					setState(2003);
					expr_list();
					}
				}

				setState(2006);
				match(T__3);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2008);
				match(T__41);
				setState(2010);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
				case 1:
					{
					setState(2009);
					expr_inner_attrs();
					}
					break;
				}
				setState(2013);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
					{
					setState(2012);
					expr_list();
					}
				}

				setState(2015);
				match(T__42);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2016);
				match(T__41);
				setState(2018);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
				case 1:
					{
					setState(2017);
					expr_inner_attrs();
					}
					break;
				}
				setState(2020);
				expr();
				setState(2021);
				match(T__9);
				setState(2022);
				expr();
				setState(2023);
				match(T__42);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2026);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__61) {
					{
					setState(2025);
					match(T__61);
					}
				}

				setState(2028);
				closure_params();
				setState(2029);
				closure_tail();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2031);
				blocky_expr();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2032);
				match(T__62);
				setState(2034);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
				case 1:
					{
					setState(2033);
					lifetime_or_expr();
					}
					break;
				}
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2036);
				match(T__63);
				setState(2038);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
				case 1:
					{
					setState(2037);
					match(Lifetime);
					}
					break;
				}
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2040);
				match(T__64);
				setState(2042);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
				case 1:
					{
					setState(2041);
					expr();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LitContext extends ParserRuleContext {
		public TerminalNode BareIntLit() { return getToken(RustParser.BareIntLit, 0); }
		public TerminalNode FullIntLit() { return getToken(RustParser.FullIntLit, 0); }
		public TerminalNode ByteLit() { return getToken(RustParser.ByteLit, 0); }
		public TerminalNode ByteStringLit() { return getToken(RustParser.ByteStringLit, 0); }
		public TerminalNode FloatLit() { return getToken(RustParser.FloatLit, 0); }
		public TerminalNode CharLit() { return getToken(RustParser.CharLit, 0); }
		public TerminalNode StringLit() { return getToken(RustParser.StringLit, 0); }
		public LitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lit; }
	}

	public final LitContext lit() throws RecognitionException {
		LitContext _localctx = new LitContext(_ctx, getState());
		enterRule(_localctx, 278, RULE_lit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2046);
			_la = _input.LA(1);
			if ( !(((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_paramsContext extends ParserRuleContext {
		public Closure_param_listContext closure_param_list() {
			return getRuleContext(Closure_param_listContext.class,0);
		}
		public Closure_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_params; }
	}

	public final Closure_paramsContext closure_params() throws RecognitionException {
		Closure_paramsContext _localctx = new Closure_paramsContext(_ctx, getState());
		enterRule(_localctx, 280, RULE_closure_params);
		int _la;
		try {
			setState(2054);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__67:
				enterOuterAlt(_localctx, 1);
				{
				setState(2048);
				match(T__67);
				}
				break;
			case T__60:
				enterOuterAlt(_localctx, 2);
				{
				setState(2049);
				match(T__60);
				setState(2051);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__7) | (1L << T__8) | (1L << T__19) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__34) | (1L << T__35) | (1L << T__39) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__50) | (1L << T__51) | (1L << T__52))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (T__65 - 66)) | (1L << (T__66 - 66)) | (1L << (Ident - 66)) | (1L << (CharLit - 66)) | (1L << (StringLit - 66)) | (1L << (ByteLit - 66)) | (1L << (ByteStringLit - 66)) | (1L << (BareIntLit - 66)) | (1L << (FullIntLit - 66)) | (1L << (FloatLit - 66)))) != 0)) {
					{
					setState(2050);
					closure_param_list();
					}
				}

				setState(2053);
				match(T__60);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_paramContext extends ParserRuleContext {
		public PatContext pat() {
			return getRuleContext(PatContext.class,0);
		}
		public TyContext ty() {
			return getRuleContext(TyContext.class,0);
		}
		public Closure_paramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_param; }
	}

	public final Closure_paramContext closure_param() throws RecognitionException {
		Closure_paramContext _localctx = new Closure_paramContext(_ctx, getState());
		enterRule(_localctx, 282, RULE_closure_param);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2056);
			pat();
			setState(2059);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__20) {
				{
				setState(2057);
				match(T__20);
				setState(2058);
				ty();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_param_listContext extends ParserRuleContext {
		public List<Closure_paramContext> closure_param() {
			return getRuleContexts(Closure_paramContext.class);
		}
		public Closure_paramContext closure_param(int i) {
			return getRuleContext(Closure_paramContext.class,i);
		}
		public Closure_param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_param_list; }
	}

	public final Closure_param_listContext closure_param_list() throws RecognitionException {
		Closure_param_listContext _localctx = new Closure_param_listContext(_ctx, getState());
		enterRule(_localctx, 284, RULE_closure_param_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(2061);
			closure_param();
			setState(2066);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,290,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(2062);
					match(T__15);
					setState(2063);
					closure_param();
					}
					} 
				}
				setState(2068);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,290,_ctx);
			}
			setState(2070);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__15) {
				{
				setState(2069);
				match(T__15);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Closure_tailContext extends ParserRuleContext {
		public RtypeContext rtype() {
			return getRuleContext(RtypeContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Closure_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_closure_tail; }
	}

	public final Closure_tailContext closure_tail() throws RecognitionException {
		Closure_tailContext _localctx = new Closure_tailContext(_ctx, getState());
		enterRule(_localctx, 286, RULE_closure_tail);
		try {
			setState(2076);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__31:
				enterOuterAlt(_localctx, 1);
				{
				setState(2072);
				rtype();
				setState(2073);
				block();
				}
				break;
			case T__1:
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__8:
			case T__12:
			case T__14:
			case T__24:
			case T__28:
			case T__29:
			case T__34:
			case T__35:
			case T__37:
			case T__38:
			case T__39:
			case T__40:
			case T__41:
			case T__43:
			case T__45:
			case T__51:
			case T__52:
			case T__54:
			case T__56:
			case T__57:
			case T__58:
			case T__60:
			case T__61:
			case T__62:
			case T__63:
			case T__64:
			case T__65:
			case T__66:
			case T__67:
			case Lifetime:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 2);
				{
				setState(2075);
				expr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Lifetime_or_exprContext extends ParserRuleContext {
		public TerminalNode Lifetime() { return getToken(RustParser.Lifetime, 0); }
		public Expr_no_structContext expr_no_struct() {
			return getRuleContext(Expr_no_structContext.class,0);
		}
		public Lifetime_or_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime_or_expr; }
	}

	public final Lifetime_or_exprContext lifetime_or_expr() throws RecognitionException {
		Lifetime_or_exprContext _localctx = new Lifetime_or_exprContext(_ctx, getState());
		enterRule(_localctx, 288, RULE_lifetime_or_expr);
		try {
			setState(2080);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2078);
				match(Lifetime);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2079);
				expr_no_struct();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldsContext extends ParserRuleContext {
		public Struct_update_baseContext struct_update_base() {
			return getRuleContext(Struct_update_baseContext.class,0);
		}
		public List<FieldContext> field() {
			return getRuleContexts(FieldContext.class);
		}
		public FieldContext field(int i) {
			return getRuleContext(FieldContext.class,i);
		}
		public FieldsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fields; }
	}

	public final FieldsContext fields() throws RecognitionException {
		FieldsContext _localctx = new FieldsContext(_ctx, getState());
		enterRule(_localctx, 290, RULE_fields);
		int _la;
		try {
			int _alt;
			setState(2098);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__38:
				enterOuterAlt(_localctx, 1);
				{
				setState(2082);
				struct_update_base();
				}
				break;
			case T__34:
			case T__35:
			case T__39:
			case Ident:
			case BareIntLit:
				enterOuterAlt(_localctx, 2);
				{
				setState(2083);
				field();
				setState(2088);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,294,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(2084);
						match(T__15);
						setState(2085);
						field();
						}
						} 
					}
					setState(2090);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,294,_ctx);
				}
				setState(2096);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2091);
					match(T__15);
					setState(2092);
					struct_update_base();
					}
					break;
				case 2:
					{
					setState(2094);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__15) {
						{
						setState(2093);
						match(T__15);
						}
					}

					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_update_baseContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Struct_update_baseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_update_base; }
	}

	public final Struct_update_baseContext struct_update_base() throws RecognitionException {
		Struct_update_baseContext _localctx = new Struct_update_baseContext(_ctx, getState());
		enterRule(_localctx, 292, RULE_struct_update_base);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2100);
			match(T__38);
			setState(2101);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Field_nameContext field_name() {
			return getRuleContext(Field_nameContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public FieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field; }
	}

	public final FieldContext field() throws RecognitionException {
		FieldContext _localctx = new FieldContext(_ctx, getState());
		enterRule(_localctx, 294, RULE_field);
		try {
			setState(2108);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2103);
				ident();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2104);
				field_name();
				setState(2105);
				match(T__20);
				setState(2106);
				expr();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Field_nameContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public TerminalNode BareIntLit() { return getToken(RustParser.BareIntLit, 0); }
		public Field_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field_name; }
	}

	public final Field_nameContext field_name() throws RecognitionException {
		Field_nameContext _localctx = new Field_nameContext(_ctx, getState());
		enterRule(_localctx, 296, RULE_field_name);
		try {
			setState(2112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(2110);
				ident();
				}
				break;
			case BareIntLit:
				enterOuterAlt(_localctx, 2);
				{
				setState(2111);
				match(BareIntLit);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Post_exprContext extends ParserRuleContext {
		public Prim_exprContext prim_expr() {
			return getRuleContext(Prim_exprContext.class,0);
		}
		public Post_exprContext post_expr() {
			return getRuleContext(Post_exprContext.class,0);
		}
		public Post_expr_tailContext post_expr_tail() {
			return getRuleContext(Post_expr_tailContext.class,0);
		}
		public Post_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_post_expr; }
	}

	public final Post_exprContext post_expr() throws RecognitionException {
		return post_expr(0);
	}

	private Post_exprContext post_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Post_exprContext _localctx = new Post_exprContext(_ctx, _parentState);
		Post_exprContext _prevctx = _localctx;
		int _startState = 298;
		enterRecursionRule(_localctx, 298, RULE_post_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2115);
			prim_expr();
			}
			_ctx.stop = _input.LT(-1);
			setState(2121);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,300,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Post_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_post_expr);
					setState(2117);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2118);
					post_expr_tail();
					}
					} 
				}
				setState(2123);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,300,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Post_expr_tailContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Ty_argsContext ty_args() {
			return getRuleContext(Ty_argsContext.class,0);
		}
		public Expr_listContext expr_list() {
			return getRuleContext(Expr_listContext.class,0);
		}
		public TerminalNode BareIntLit() { return getToken(RustParser.BareIntLit, 0); }
		public Post_expr_tailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_post_expr_tail; }
	}

	public final Post_expr_tailContext post_expr_tail() throws RecognitionException {
		Post_expr_tailContext _localctx = new Post_expr_tailContext(_ctx, getState());
		enterRule(_localctx, 300, RULE_post_expr_tail);
		int _la;
		try {
			setState(2149);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,305,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2124);
				match(T__48);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2125);
				match(T__41);
				setState(2126);
				expr();
				setState(2127);
				match(T__42);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2129);
				match(T__68);
				setState(2130);
				ident();
				setState(2140);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,303,_ctx) ) {
				case 1:
					{
					setState(2133);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__7) {
						{
						setState(2131);
						match(T__7);
						setState(2132);
						ty_args();
						}
					}

					setState(2135);
					match(T__1);
					setState(2137);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
						{
						setState(2136);
						expr_list();
						}
					}

					setState(2139);
					match(T__3);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2142);
				match(T__68);
				setState(2143);
				match(BareIntLit);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2144);
				match(T__1);
				setState(2146);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__12) | (1L << T__14) | (1L << T__24) | (1L << T__28) | (1L << T__29) | (1L << T__34) | (1L << T__35) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__43) | (1L << T__45) | (1L << T__51) | (1L << T__52) | (1L << T__54) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (T__67 - 64)) | (1L << (Lifetime - 64)) | (1L << (Ident - 64)) | (1L << (CharLit - 64)) | (1L << (StringLit - 64)) | (1L << (ByteLit - 64)) | (1L << (ByteStringLit - 64)) | (1L << (BareIntLit - 64)) | (1L << (FullIntLit - 64)) | (1L << (FloatLit - 64)))) != 0)) {
					{
					setState(2145);
					expr_list();
					}
				}

				setState(2148);
				match(T__3);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Pre_exprContext extends ParserRuleContext {
		public Post_exprContext post_expr() {
			return getRuleContext(Post_exprContext.class,0);
		}
		public Expr_attrsContext expr_attrs() {
			return getRuleContext(Expr_attrsContext.class,0);
		}
		public Pre_exprContext pre_expr() {
			return getRuleContext(Pre_exprContext.class,0);
		}
		public Expr_no_structContext expr_no_struct() {
			return getRuleContext(Expr_no_structContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public Pre_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pre_expr; }
	}

	public final Pre_exprContext pre_expr() throws RecognitionException {
		Pre_exprContext _localctx = new Pre_exprContext(_ctx, getState());
		enterRule(_localctx, 302, RULE_pre_expr);
		int _la;
		try {
			setState(2177);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__12:
			case T__24:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case T__54:
			case T__56:
			case T__57:
			case T__58:
			case T__60:
			case T__61:
			case T__62:
			case T__63:
			case T__64:
			case T__65:
			case T__66:
			case T__67:
			case Lifetime:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 1);
				{
				setState(2151);
				post_expr(0);
				}
				break;
			case T__40:
				enterOuterAlt(_localctx, 2);
				{
				setState(2152);
				expr_attrs();
				setState(2153);
				pre_expr();
				}
				break;
			case T__52:
				enterOuterAlt(_localctx, 3);
				{
				setState(2155);
				match(T__52);
				setState(2156);
				pre_expr();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 4);
				{
				setState(2157);
				match(T__6);
				setState(2158);
				pre_expr();
				}
				break;
			case T__28:
				enterOuterAlt(_localctx, 5);
				{
				setState(2159);
				match(T__28);
				setState(2161);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(2160);
					match(T__19);
					}
				}

				setState(2163);
				pre_expr();
				}
				break;
			case T__29:
				enterOuterAlt(_localctx, 6);
				{
				setState(2164);
				match(T__29);
				setState(2166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(2165);
					match(T__19);
					}
				}

				setState(2168);
				pre_expr();
				}
				break;
			case T__14:
				enterOuterAlt(_localctx, 7);
				{
				setState(2169);
				match(T__14);
				setState(2170);
				pre_expr();
				}
				break;
			case T__51:
				enterOuterAlt(_localctx, 8);
				{
				setState(2171);
				match(T__51);
				setState(2172);
				pre_expr();
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 9);
				{
				setState(2173);
				match(T__5);
				setState(2174);
				expr_no_struct();
				setState(2175);
				block();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Cast_exprContext extends ParserRuleContext {
		public Pre_exprContext pre_expr() {
			return getRuleContext(Pre_exprContext.class,0);
		}
		public Cast_exprContext cast_expr() {
			return getRuleContext(Cast_exprContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Cast_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cast_expr; }
	}

	public final Cast_exprContext cast_expr() throws RecognitionException {
		return cast_expr(0);
	}

	private Cast_exprContext cast_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Cast_exprContext _localctx = new Cast_exprContext(_ctx, _parentState);
		Cast_exprContext _prevctx = _localctx;
		int _startState = 304;
		enterRecursionRule(_localctx, 304, RULE_cast_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2180);
			pre_expr();
			}
			_ctx.stop = _input.LT(-1);
			setState(2190);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,310,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2188);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,309,_ctx) ) {
					case 1:
						{
						_localctx = new Cast_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_cast_expr);
						setState(2182);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2183);
						match(T__16);
						setState(2184);
						ty_sum();
						}
						break;
					case 2:
						{
						_localctx = new Cast_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_cast_expr);
						setState(2185);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2186);
						match(T__20);
						setState(2187);
						ty_sum();
						}
						break;
					}
					} 
				}
				setState(2192);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,310,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Mul_exprContext extends ParserRuleContext {
		public Cast_exprContext cast_expr() {
			return getRuleContext(Cast_exprContext.class,0);
		}
		public Mul_exprContext mul_expr() {
			return getRuleContext(Mul_exprContext.class,0);
		}
		public Mul_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mul_expr; }
	}

	public final Mul_exprContext mul_expr() throws RecognitionException {
		return mul_expr(0);
	}

	private Mul_exprContext mul_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Mul_exprContext _localctx = new Mul_exprContext(_ctx, _parentState);
		Mul_exprContext _prevctx = _localctx;
		int _startState = 306;
		enterRecursionRule(_localctx, 306, RULE_mul_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2194);
			cast_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2207);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,312,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2205);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,311,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr);
						setState(2196);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(2197);
						match(T__14);
						setState(2198);
						cast_expr(0);
						}
						break;
					case 2:
						{
						_localctx = new Mul_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr);
						setState(2199);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2200);
						match(T__69);
						setState(2201);
						cast_expr(0);
						}
						break;
					case 3:
						{
						_localctx = new Mul_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr);
						setState(2202);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2203);
						match(T__70);
						setState(2204);
						cast_expr(0);
						}
						break;
					}
					} 
				}
				setState(2209);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,312,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Add_exprContext extends ParserRuleContext {
		public Mul_exprContext mul_expr() {
			return getRuleContext(Mul_exprContext.class,0);
		}
		public Add_exprContext add_expr() {
			return getRuleContext(Add_exprContext.class,0);
		}
		public Add_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_expr; }
	}

	public final Add_exprContext add_expr() throws RecognitionException {
		return add_expr(0);
	}

	private Add_exprContext add_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Add_exprContext _localctx = new Add_exprContext(_ctx, _parentState);
		Add_exprContext _prevctx = _localctx;
		int _startState = 308;
		enterRecursionRule(_localctx, 308, RULE_add_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2211);
			mul_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2221);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,314,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2219);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,313,_ctx) ) {
					case 1:
						{
						_localctx = new Add_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_add_expr);
						setState(2213);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2214);
						match(T__46);
						setState(2215);
						mul_expr(0);
						}
						break;
					case 2:
						{
						_localctx = new Add_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_add_expr);
						setState(2216);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2217);
						match(T__52);
						setState(2218);
						mul_expr(0);
						}
						break;
					}
					} 
				}
				setState(2223);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,314,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Shift_exprContext extends ParserRuleContext {
		public Add_exprContext add_expr() {
			return getRuleContext(Add_exprContext.class,0);
		}
		public Shift_exprContext shift_expr() {
			return getRuleContext(Shift_exprContext.class,0);
		}
		public Shift_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shift_expr; }
	}

	public final Shift_exprContext shift_expr() throws RecognitionException {
		return shift_expr(0);
	}

	private Shift_exprContext shift_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Shift_exprContext _localctx = new Shift_exprContext(_ctx, _parentState);
		Shift_exprContext _prevctx = _localctx;
		int _startState = 310;
		enterRecursionRule(_localctx, 310, RULE_shift_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2225);
			add_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2237);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,316,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2235);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,315,_ctx) ) {
					case 1:
						{
						_localctx = new Shift_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shift_expr);
						setState(2227);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2228);
						match(T__43);
						setState(2229);
						match(T__43);
						setState(2230);
						add_expr(0);
						}
						break;
					case 2:
						{
						_localctx = new Shift_exprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shift_expr);
						setState(2231);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2232);
						match(T__44);
						setState(2233);
						match(T__44);
						setState(2234);
						add_expr(0);
						}
						break;
					}
					} 
				}
				setState(2239);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,316,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_and_exprContext extends ParserRuleContext {
		public Shift_exprContext shift_expr() {
			return getRuleContext(Shift_exprContext.class,0);
		}
		public Bit_and_exprContext bit_and_expr() {
			return getRuleContext(Bit_and_exprContext.class,0);
		}
		public Bit_and_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_and_expr; }
	}

	public final Bit_and_exprContext bit_and_expr() throws RecognitionException {
		return bit_and_expr(0);
	}

	private Bit_and_exprContext bit_and_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_and_exprContext _localctx = new Bit_and_exprContext(_ctx, _parentState);
		Bit_and_exprContext _prevctx = _localctx;
		int _startState = 312;
		enterRecursionRule(_localctx, 312, RULE_bit_and_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2241);
			shift_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2248);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_and_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_and_expr);
					setState(2243);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2244);
					match(T__28);
					setState(2245);
					shift_expr(0);
					}
					} 
				}
				setState(2250);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_xor_exprContext extends ParserRuleContext {
		public Bit_and_exprContext bit_and_expr() {
			return getRuleContext(Bit_and_exprContext.class,0);
		}
		public Bit_xor_exprContext bit_xor_expr() {
			return getRuleContext(Bit_xor_exprContext.class,0);
		}
		public Bit_xor_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_xor_expr; }
	}

	public final Bit_xor_exprContext bit_xor_expr() throws RecognitionException {
		return bit_xor_expr(0);
	}

	private Bit_xor_exprContext bit_xor_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_xor_exprContext _localctx = new Bit_xor_exprContext(_ctx, _parentState);
		Bit_xor_exprContext _prevctx = _localctx;
		int _startState = 314;
		enterRecursionRule(_localctx, 314, RULE_bit_xor_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2252);
			bit_and_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2259);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,318,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_xor_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_xor_expr);
					setState(2254);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2255);
					match(T__71);
					setState(2256);
					bit_and_expr(0);
					}
					} 
				}
				setState(2261);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,318,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_or_exprContext extends ParserRuleContext {
		public Bit_xor_exprContext bit_xor_expr() {
			return getRuleContext(Bit_xor_exprContext.class,0);
		}
		public Bit_or_exprContext bit_or_expr() {
			return getRuleContext(Bit_or_exprContext.class,0);
		}
		public Bit_or_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_or_expr; }
	}

	public final Bit_or_exprContext bit_or_expr() throws RecognitionException {
		return bit_or_expr(0);
	}

	private Bit_or_exprContext bit_or_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_or_exprContext _localctx = new Bit_or_exprContext(_ctx, _parentState);
		Bit_or_exprContext _prevctx = _localctx;
		int _startState = 316;
		enterRecursionRule(_localctx, 316, RULE_bit_or_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2263);
			bit_xor_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2270);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_or_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_or_expr);
					setState(2265);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2266);
					match(T__60);
					setState(2267);
					bit_xor_expr(0);
					}
					} 
				}
				setState(2272);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Cmp_exprContext extends ParserRuleContext {
		public List<Bit_or_exprContext> bit_or_expr() {
			return getRuleContexts(Bit_or_exprContext.class);
		}
		public Bit_or_exprContext bit_or_expr(int i) {
			return getRuleContext(Bit_or_exprContext.class,i);
		}
		public Cmp_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cmp_expr; }
	}

	public final Cmp_exprContext cmp_expr() throws RecognitionException {
		Cmp_exprContext _localctx = new Cmp_exprContext(_ctx, getState());
		enterRule(_localctx, 318, RULE_cmp_expr);
		try {
			setState(2286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,321,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2273);
				bit_or_expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2274);
				bit_or_expr(0);
				setState(2282);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,320,_ctx) ) {
				case 1:
					{
					setState(2275);
					match(T__72);
					}
					break;
				case 2:
					{
					setState(2276);
					match(T__73);
					}
					break;
				case 3:
					{
					setState(2277);
					match(T__43);
					}
					break;
				case 4:
					{
					setState(2278);
					match(T__74);
					}
					break;
				case 5:
					{
					setState(2279);
					match(T__44);
					}
					break;
				case 6:
					{
					setState(2280);
					match(T__44);
					setState(2281);
					match(T__22);
					}
					break;
				}
				setState(2284);
				bit_or_expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class And_exprContext extends ParserRuleContext {
		public Cmp_exprContext cmp_expr() {
			return getRuleContext(Cmp_exprContext.class,0);
		}
		public And_exprContext and_expr() {
			return getRuleContext(And_exprContext.class,0);
		}
		public And_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_and_expr; }
	}

	public final And_exprContext and_expr() throws RecognitionException {
		return and_expr(0);
	}

	private And_exprContext and_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		And_exprContext _localctx = new And_exprContext(_ctx, _parentState);
		And_exprContext _prevctx = _localctx;
		int _startState = 320;
		enterRecursionRule(_localctx, 320, RULE_and_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2289);
			cmp_expr();
			}
			_ctx.stop = _input.LT(-1);
			setState(2296);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,322,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new And_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_and_expr);
					setState(2291);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2292);
					match(T__29);
					setState(2293);
					cmp_expr();
					}
					} 
				}
				setState(2298);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,322,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Or_exprContext extends ParserRuleContext {
		public And_exprContext and_expr() {
			return getRuleContext(And_exprContext.class,0);
		}
		public Or_exprContext or_expr() {
			return getRuleContext(Or_exprContext.class,0);
		}
		public Or_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_or_expr; }
	}

	public final Or_exprContext or_expr() throws RecognitionException {
		return or_expr(0);
	}

	private Or_exprContext or_expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Or_exprContext _localctx = new Or_exprContext(_ctx, _parentState);
		Or_exprContext _prevctx = _localctx;
		int _startState = 322;
		enterRecursionRule(_localctx, 322, RULE_or_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2300);
			and_expr(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2307);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,323,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Or_exprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_or_expr);
					setState(2302);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2303);
					match(T__67);
					setState(2304);
					and_expr(0);
					}
					} 
				}
				setState(2309);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,323,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Range_exprContext extends ParserRuleContext {
		public List<Or_exprContext> or_expr() {
			return getRuleContexts(Or_exprContext.class);
		}
		public Or_exprContext or_expr(int i) {
			return getRuleContext(Or_exprContext.class,i);
		}
		public Range_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range_expr; }
	}

	public final Range_exprContext range_expr() throws RecognitionException {
		Range_exprContext _localctx = new Range_exprContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_range_expr);
		try {
			setState(2320);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,326,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2310);
				or_expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2311);
				or_expr(0);
				setState(2312);
				match(T__38);
				setState(2314);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,324,_ctx) ) {
				case 1:
					{
					setState(2313);
					or_expr(0);
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2316);
				match(T__38);
				setState(2318);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,325,_ctx) ) {
				case 1:
					{
					setState(2317);
					or_expr(0);
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Assign_exprContext extends ParserRuleContext {
		public Range_exprContext range_expr() {
			return getRuleContext(Range_exprContext.class,0);
		}
		public Assign_exprContext assign_expr() {
			return getRuleContext(Assign_exprContext.class,0);
		}
		public Assign_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_expr; }
	}

	public final Assign_exprContext assign_expr() throws RecognitionException {
		Assign_exprContext _localctx = new Assign_exprContext(_ctx, getState());
		enterRule(_localctx, 326, RULE_assign_expr);
		try {
			setState(2341);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,328,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2322);
				range_expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2323);
				range_expr();
				setState(2337);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__22:
					{
					setState(2324);
					match(T__22);
					}
					break;
				case T__75:
					{
					setState(2325);
					match(T__75);
					}
					break;
				case T__76:
					{
					setState(2326);
					match(T__76);
					}
					break;
				case T__77:
					{
					setState(2327);
					match(T__77);
					}
					break;
				case T__78:
					{
					setState(2328);
					match(T__78);
					}
					break;
				case T__79:
					{
					setState(2329);
					match(T__79);
					}
					break;
				case T__80:
					{
					setState(2330);
					match(T__80);
					}
					break;
				case T__44:
					{
					setState(2331);
					match(T__44);
					setState(2332);
					match(T__44);
					setState(2333);
					match(T__22);
					}
					break;
				case T__81:
					{
					setState(2334);
					match(T__81);
					}
					break;
				case T__82:
					{
					setState(2335);
					match(T__82);
					}
					break;
				case T__83:
					{
					setState(2336);
					match(T__83);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2339);
				assign_expr();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Post_expr_no_structContext extends ParserRuleContext {
		public Prim_expr_no_structContext prim_expr_no_struct() {
			return getRuleContext(Prim_expr_no_structContext.class,0);
		}
		public Post_expr_no_structContext post_expr_no_struct() {
			return getRuleContext(Post_expr_no_structContext.class,0);
		}
		public Post_expr_tailContext post_expr_tail() {
			return getRuleContext(Post_expr_tailContext.class,0);
		}
		public Post_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_post_expr_no_struct; }
	}

	public final Post_expr_no_structContext post_expr_no_struct() throws RecognitionException {
		return post_expr_no_struct(0);
	}

	private Post_expr_no_structContext post_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Post_expr_no_structContext _localctx = new Post_expr_no_structContext(_ctx, _parentState);
		Post_expr_no_structContext _prevctx = _localctx;
		int _startState = 328;
		enterRecursionRule(_localctx, 328, RULE_post_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2344);
			prim_expr_no_struct();
			}
			_ctx.stop = _input.LT(-1);
			setState(2350);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,329,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Post_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_post_expr_no_struct);
					setState(2346);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2347);
					post_expr_tail();
					}
					} 
				}
				setState(2352);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,329,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Pre_expr_no_structContext extends ParserRuleContext {
		public Post_expr_no_structContext post_expr_no_struct() {
			return getRuleContext(Post_expr_no_structContext.class,0);
		}
		public Expr_attrsContext expr_attrs() {
			return getRuleContext(Expr_attrsContext.class,0);
		}
		public Pre_expr_no_structContext pre_expr_no_struct() {
			return getRuleContext(Pre_expr_no_structContext.class,0);
		}
		public Pre_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pre_expr_no_struct; }
	}

	public final Pre_expr_no_structContext pre_expr_no_struct() throws RecognitionException {
		Pre_expr_no_structContext _localctx = new Pre_expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 330, RULE_pre_expr_no_struct);
		int _la;
		try {
			setState(2375);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__4:
			case T__7:
			case T__8:
			case T__12:
			case T__24:
			case T__34:
			case T__35:
			case T__37:
			case T__39:
			case T__41:
			case T__43:
			case T__45:
			case T__54:
			case T__56:
			case T__57:
			case T__58:
			case T__60:
			case T__61:
			case T__62:
			case T__63:
			case T__64:
			case T__65:
			case T__66:
			case T__67:
			case Lifetime:
			case Ident:
			case CharLit:
			case StringLit:
			case ByteLit:
			case ByteStringLit:
			case BareIntLit:
			case FullIntLit:
			case FloatLit:
				enterOuterAlt(_localctx, 1);
				{
				setState(2353);
				post_expr_no_struct(0);
				}
				break;
			case T__40:
				enterOuterAlt(_localctx, 2);
				{
				setState(2354);
				expr_attrs();
				setState(2355);
				pre_expr_no_struct();
				}
				break;
			case T__52:
				enterOuterAlt(_localctx, 3);
				{
				setState(2357);
				match(T__52);
				setState(2358);
				pre_expr_no_struct();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 4);
				{
				setState(2359);
				match(T__6);
				setState(2360);
				pre_expr_no_struct();
				}
				break;
			case T__28:
				enterOuterAlt(_localctx, 5);
				{
				setState(2361);
				match(T__28);
				setState(2363);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(2362);
					match(T__19);
					}
				}

				setState(2365);
				pre_expr_no_struct();
				}
				break;
			case T__29:
				enterOuterAlt(_localctx, 6);
				{
				setState(2366);
				match(T__29);
				setState(2368);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__19) {
					{
					setState(2367);
					match(T__19);
					}
				}

				setState(2370);
				pre_expr_no_struct();
				}
				break;
			case T__14:
				enterOuterAlt(_localctx, 7);
				{
				setState(2371);
				match(T__14);
				setState(2372);
				pre_expr_no_struct();
				}
				break;
			case T__51:
				enterOuterAlt(_localctx, 8);
				{
				setState(2373);
				match(T__51);
				setState(2374);
				pre_expr_no_struct();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Cast_expr_no_structContext extends ParserRuleContext {
		public Pre_expr_no_structContext pre_expr_no_struct() {
			return getRuleContext(Pre_expr_no_structContext.class,0);
		}
		public Cast_expr_no_structContext cast_expr_no_struct() {
			return getRuleContext(Cast_expr_no_structContext.class,0);
		}
		public Ty_sumContext ty_sum() {
			return getRuleContext(Ty_sumContext.class,0);
		}
		public Cast_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cast_expr_no_struct; }
	}

	public final Cast_expr_no_structContext cast_expr_no_struct() throws RecognitionException {
		return cast_expr_no_struct(0);
	}

	private Cast_expr_no_structContext cast_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Cast_expr_no_structContext _localctx = new Cast_expr_no_structContext(_ctx, _parentState);
		Cast_expr_no_structContext _prevctx = _localctx;
		int _startState = 332;
		enterRecursionRule(_localctx, 332, RULE_cast_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2378);
			pre_expr_no_struct();
			}
			_ctx.stop = _input.LT(-1);
			setState(2388);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,334,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2386);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,333,_ctx) ) {
					case 1:
						{
						_localctx = new Cast_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_cast_expr_no_struct);
						setState(2380);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2381);
						match(T__16);
						setState(2382);
						ty_sum();
						}
						break;
					case 2:
						{
						_localctx = new Cast_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_cast_expr_no_struct);
						setState(2383);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2384);
						match(T__20);
						setState(2385);
						ty_sum();
						}
						break;
					}
					} 
				}
				setState(2390);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,334,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Mul_expr_no_structContext extends ParserRuleContext {
		public Cast_expr_no_structContext cast_expr_no_struct() {
			return getRuleContext(Cast_expr_no_structContext.class,0);
		}
		public Mul_expr_no_structContext mul_expr_no_struct() {
			return getRuleContext(Mul_expr_no_structContext.class,0);
		}
		public Mul_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mul_expr_no_struct; }
	}

	public final Mul_expr_no_structContext mul_expr_no_struct() throws RecognitionException {
		return mul_expr_no_struct(0);
	}

	private Mul_expr_no_structContext mul_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Mul_expr_no_structContext _localctx = new Mul_expr_no_structContext(_ctx, _parentState);
		Mul_expr_no_structContext _prevctx = _localctx;
		int _startState = 334;
		enterRecursionRule(_localctx, 334, RULE_mul_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2392);
			cast_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2405);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,336,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2403);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,335,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr_no_struct);
						setState(2394);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(2395);
						match(T__14);
						setState(2396);
						cast_expr_no_struct(0);
						}
						break;
					case 2:
						{
						_localctx = new Mul_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr_no_struct);
						setState(2397);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2398);
						match(T__69);
						setState(2399);
						cast_expr_no_struct(0);
						}
						break;
					case 3:
						{
						_localctx = new Mul_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_mul_expr_no_struct);
						setState(2400);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2401);
						match(T__70);
						setState(2402);
						cast_expr_no_struct(0);
						}
						break;
					}
					} 
				}
				setState(2407);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,336,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Add_expr_no_structContext extends ParserRuleContext {
		public Mul_expr_no_structContext mul_expr_no_struct() {
			return getRuleContext(Mul_expr_no_structContext.class,0);
		}
		public Add_expr_no_structContext add_expr_no_struct() {
			return getRuleContext(Add_expr_no_structContext.class,0);
		}
		public Add_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_expr_no_struct; }
	}

	public final Add_expr_no_structContext add_expr_no_struct() throws RecognitionException {
		return add_expr_no_struct(0);
	}

	private Add_expr_no_structContext add_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Add_expr_no_structContext _localctx = new Add_expr_no_structContext(_ctx, _parentState);
		Add_expr_no_structContext _prevctx = _localctx;
		int _startState = 336;
		enterRecursionRule(_localctx, 336, RULE_add_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2409);
			mul_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2419);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,338,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2417);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,337,_ctx) ) {
					case 1:
						{
						_localctx = new Add_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_add_expr_no_struct);
						setState(2411);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2412);
						match(T__46);
						setState(2413);
						mul_expr_no_struct(0);
						}
						break;
					case 2:
						{
						_localctx = new Add_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_add_expr_no_struct);
						setState(2414);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2415);
						match(T__52);
						setState(2416);
						mul_expr_no_struct(0);
						}
						break;
					}
					} 
				}
				setState(2421);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,338,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Shift_expr_no_structContext extends ParserRuleContext {
		public Add_expr_no_structContext add_expr_no_struct() {
			return getRuleContext(Add_expr_no_structContext.class,0);
		}
		public Shift_expr_no_structContext shift_expr_no_struct() {
			return getRuleContext(Shift_expr_no_structContext.class,0);
		}
		public Shift_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shift_expr_no_struct; }
	}

	public final Shift_expr_no_structContext shift_expr_no_struct() throws RecognitionException {
		return shift_expr_no_struct(0);
	}

	private Shift_expr_no_structContext shift_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Shift_expr_no_structContext _localctx = new Shift_expr_no_structContext(_ctx, _parentState);
		Shift_expr_no_structContext _prevctx = _localctx;
		int _startState = 338;
		enterRecursionRule(_localctx, 338, RULE_shift_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2423);
			add_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2435);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,340,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(2433);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,339,_ctx) ) {
					case 1:
						{
						_localctx = new Shift_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shift_expr_no_struct);
						setState(2425);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(2426);
						match(T__43);
						setState(2427);
						match(T__43);
						setState(2428);
						add_expr_no_struct(0);
						}
						break;
					case 2:
						{
						_localctx = new Shift_expr_no_structContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shift_expr_no_struct);
						setState(2429);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(2430);
						match(T__44);
						setState(2431);
						match(T__44);
						setState(2432);
						add_expr_no_struct(0);
						}
						break;
					}
					} 
				}
				setState(2437);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,340,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_and_expr_no_structContext extends ParserRuleContext {
		public Shift_expr_no_structContext shift_expr_no_struct() {
			return getRuleContext(Shift_expr_no_structContext.class,0);
		}
		public Bit_and_expr_no_structContext bit_and_expr_no_struct() {
			return getRuleContext(Bit_and_expr_no_structContext.class,0);
		}
		public Bit_and_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_and_expr_no_struct; }
	}

	public final Bit_and_expr_no_structContext bit_and_expr_no_struct() throws RecognitionException {
		return bit_and_expr_no_struct(0);
	}

	private Bit_and_expr_no_structContext bit_and_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_and_expr_no_structContext _localctx = new Bit_and_expr_no_structContext(_ctx, _parentState);
		Bit_and_expr_no_structContext _prevctx = _localctx;
		int _startState = 340;
		enterRecursionRule(_localctx, 340, RULE_bit_and_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2439);
			shift_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2446);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,341,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_and_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_and_expr_no_struct);
					setState(2441);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2442);
					match(T__28);
					setState(2443);
					shift_expr_no_struct(0);
					}
					} 
				}
				setState(2448);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,341,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_xor_expr_no_structContext extends ParserRuleContext {
		public Bit_and_expr_no_structContext bit_and_expr_no_struct() {
			return getRuleContext(Bit_and_expr_no_structContext.class,0);
		}
		public Bit_xor_expr_no_structContext bit_xor_expr_no_struct() {
			return getRuleContext(Bit_xor_expr_no_structContext.class,0);
		}
		public Bit_xor_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_xor_expr_no_struct; }
	}

	public final Bit_xor_expr_no_structContext bit_xor_expr_no_struct() throws RecognitionException {
		return bit_xor_expr_no_struct(0);
	}

	private Bit_xor_expr_no_structContext bit_xor_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_xor_expr_no_structContext _localctx = new Bit_xor_expr_no_structContext(_ctx, _parentState);
		Bit_xor_expr_no_structContext _prevctx = _localctx;
		int _startState = 342;
		enterRecursionRule(_localctx, 342, RULE_bit_xor_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2450);
			bit_and_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2457);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,342,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_xor_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_xor_expr_no_struct);
					setState(2452);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2453);
					match(T__71);
					setState(2454);
					bit_and_expr_no_struct(0);
					}
					} 
				}
				setState(2459);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,342,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Bit_or_expr_no_structContext extends ParserRuleContext {
		public Bit_xor_expr_no_structContext bit_xor_expr_no_struct() {
			return getRuleContext(Bit_xor_expr_no_structContext.class,0);
		}
		public Bit_or_expr_no_structContext bit_or_expr_no_struct() {
			return getRuleContext(Bit_or_expr_no_structContext.class,0);
		}
		public Bit_or_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bit_or_expr_no_struct; }
	}

	public final Bit_or_expr_no_structContext bit_or_expr_no_struct() throws RecognitionException {
		return bit_or_expr_no_struct(0);
	}

	private Bit_or_expr_no_structContext bit_or_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Bit_or_expr_no_structContext _localctx = new Bit_or_expr_no_structContext(_ctx, _parentState);
		Bit_or_expr_no_structContext _prevctx = _localctx;
		int _startState = 344;
		enterRecursionRule(_localctx, 344, RULE_bit_or_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2461);
			bit_xor_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2468);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,343,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Bit_or_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bit_or_expr_no_struct);
					setState(2463);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2464);
					match(T__60);
					setState(2465);
					bit_xor_expr_no_struct(0);
					}
					} 
				}
				setState(2470);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,343,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Cmp_expr_no_structContext extends ParserRuleContext {
		public List<Bit_or_expr_no_structContext> bit_or_expr_no_struct() {
			return getRuleContexts(Bit_or_expr_no_structContext.class);
		}
		public Bit_or_expr_no_structContext bit_or_expr_no_struct(int i) {
			return getRuleContext(Bit_or_expr_no_structContext.class,i);
		}
		public Cmp_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cmp_expr_no_struct; }
	}

	public final Cmp_expr_no_structContext cmp_expr_no_struct() throws RecognitionException {
		Cmp_expr_no_structContext _localctx = new Cmp_expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 346, RULE_cmp_expr_no_struct);
		try {
			setState(2484);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,345,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2471);
				bit_or_expr_no_struct(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2472);
				bit_or_expr_no_struct(0);
				setState(2480);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,344,_ctx) ) {
				case 1:
					{
					setState(2473);
					match(T__72);
					}
					break;
				case 2:
					{
					setState(2474);
					match(T__73);
					}
					break;
				case 3:
					{
					setState(2475);
					match(T__43);
					}
					break;
				case 4:
					{
					setState(2476);
					match(T__74);
					}
					break;
				case 5:
					{
					setState(2477);
					match(T__44);
					}
					break;
				case 6:
					{
					setState(2478);
					match(T__44);
					setState(2479);
					match(T__22);
					}
					break;
				}
				setState(2482);
				bit_or_expr_no_struct(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class And_expr_no_structContext extends ParserRuleContext {
		public Cmp_expr_no_structContext cmp_expr_no_struct() {
			return getRuleContext(Cmp_expr_no_structContext.class,0);
		}
		public And_expr_no_structContext and_expr_no_struct() {
			return getRuleContext(And_expr_no_structContext.class,0);
		}
		public And_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_and_expr_no_struct; }
	}

	public final And_expr_no_structContext and_expr_no_struct() throws RecognitionException {
		return and_expr_no_struct(0);
	}

	private And_expr_no_structContext and_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		And_expr_no_structContext _localctx = new And_expr_no_structContext(_ctx, _parentState);
		And_expr_no_structContext _prevctx = _localctx;
		int _startState = 348;
		enterRecursionRule(_localctx, 348, RULE_and_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2487);
			cmp_expr_no_struct();
			}
			_ctx.stop = _input.LT(-1);
			setState(2494);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,346,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new And_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_and_expr_no_struct);
					setState(2489);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2490);
					match(T__29);
					setState(2491);
					cmp_expr_no_struct();
					}
					} 
				}
				setState(2496);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,346,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Or_expr_no_structContext extends ParserRuleContext {
		public And_expr_no_structContext and_expr_no_struct() {
			return getRuleContext(And_expr_no_structContext.class,0);
		}
		public Or_expr_no_structContext or_expr_no_struct() {
			return getRuleContext(Or_expr_no_structContext.class,0);
		}
		public Or_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_or_expr_no_struct; }
	}

	public final Or_expr_no_structContext or_expr_no_struct() throws RecognitionException {
		return or_expr_no_struct(0);
	}

	private Or_expr_no_structContext or_expr_no_struct(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Or_expr_no_structContext _localctx = new Or_expr_no_structContext(_ctx, _parentState);
		Or_expr_no_structContext _prevctx = _localctx;
		int _startState = 350;
		enterRecursionRule(_localctx, 350, RULE_or_expr_no_struct, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2498);
			and_expr_no_struct(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(2505);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,347,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Or_expr_no_structContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_or_expr_no_struct);
					setState(2500);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2501);
					match(T__67);
					setState(2502);
					and_expr_no_struct(0);
					}
					} 
				}
				setState(2507);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,347,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Range_expr_no_structContext extends ParserRuleContext {
		public List<Or_expr_no_structContext> or_expr_no_struct() {
			return getRuleContexts(Or_expr_no_structContext.class);
		}
		public Or_expr_no_structContext or_expr_no_struct(int i) {
			return getRuleContext(Or_expr_no_structContext.class,i);
		}
		public Range_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range_expr_no_struct; }
	}

	public final Range_expr_no_structContext range_expr_no_struct() throws RecognitionException {
		Range_expr_no_structContext _localctx = new Range_expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 352, RULE_range_expr_no_struct);
		try {
			setState(2518);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,350,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2508);
				or_expr_no_struct(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2509);
				or_expr_no_struct(0);
				setState(2510);
				match(T__38);
				setState(2512);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,348,_ctx) ) {
				case 1:
					{
					setState(2511);
					or_expr_no_struct(0);
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2514);
				match(T__38);
				setState(2516);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,349,_ctx) ) {
				case 1:
					{
					setState(2515);
					or_expr_no_struct(0);
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Assign_expr_no_structContext extends ParserRuleContext {
		public Range_expr_no_structContext range_expr_no_struct() {
			return getRuleContext(Range_expr_no_structContext.class,0);
		}
		public Assign_expr_no_structContext assign_expr_no_struct() {
			return getRuleContext(Assign_expr_no_structContext.class,0);
		}
		public Assign_expr_no_structContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_expr_no_struct; }
	}

	public final Assign_expr_no_structContext assign_expr_no_struct() throws RecognitionException {
		Assign_expr_no_structContext _localctx = new Assign_expr_no_structContext(_ctx, getState());
		enterRule(_localctx, 354, RULE_assign_expr_no_struct);
		try {
			setState(2539);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,352,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2520);
				range_expr_no_struct();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2521);
				range_expr_no_struct();
				setState(2535);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__22:
					{
					setState(2522);
					match(T__22);
					}
					break;
				case T__75:
					{
					setState(2523);
					match(T__75);
					}
					break;
				case T__76:
					{
					setState(2524);
					match(T__76);
					}
					break;
				case T__77:
					{
					setState(2525);
					match(T__77);
					}
					break;
				case T__78:
					{
					setState(2526);
					match(T__78);
					}
					break;
				case T__79:
					{
					setState(2527);
					match(T__79);
					}
					break;
				case T__80:
					{
					setState(2528);
					match(T__80);
					}
					break;
				case T__44:
					{
					setState(2529);
					match(T__44);
					setState(2530);
					match(T__44);
					setState(2531);
					match(T__22);
					}
					break;
				case T__81:
					{
					setState(2532);
					match(T__81);
					}
					break;
				case T__82:
					{
					setState(2533);
					match(T__82);
					}
					break;
				case T__83:
					{
					setState(2534);
					match(T__83);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2537);
				assign_expr_no_struct();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode Ident() { return getToken(RustParser.Ident, 0); }
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 356, RULE_ident);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2541);
			_la = _input.LA(1);
			if ( !(((((_la - 35)) & ~0x3f) == 0 && ((1L << (_la - 35)) & ((1L << (T__34 - 35)) | (1L << (T__35 - 35)) | (1L << (T__39 - 35)) | (1L << (Ident - 35)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Any_identContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public Any_identContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_any_ident; }
	}

	public final Any_identContext any_ident() throws RecognitionException {
		Any_identContext _localctx = new Any_identContext(_ctx, getState());
		enterRule(_localctx, 358, RULE_any_ident);
		try {
			setState(2548);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
			case T__35:
			case T__39:
			case Ident:
				enterOuterAlt(_localctx, 1);
				{
				setState(2543);
				ident();
				}
				break;
			case T__45:
				enterOuterAlt(_localctx, 2);
				{
				setState(2544);
				match(T__45);
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 3);
				{
				setState(2545);
				match(T__8);
				}
				break;
			case T__18:
				enterOuterAlt(_localctx, 4);
				{
				setState(2546);
				match(T__18);
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 5);
				{
				setState(2547);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 8:
			return item_macro_path_parent_sempred((Item_macro_path_parentContext)_localctx, predIndex);
		case 75:
			return path_parent_sempred((Path_parentContext)_localctx, predIndex);
		case 84:
			return lifetime_bound_sempred((Lifetime_boundContext)_localctx, predIndex);
		case 87:
			return ty_path_parent_sempred((Ty_path_parentContext)_localctx, predIndex);
		case 94:
			return bound_sempred((BoundContext)_localctx, predIndex);
		case 133:
			return match_pat_sempred((Match_patContext)_localctx, predIndex);
		case 149:
			return post_expr_sempred((Post_exprContext)_localctx, predIndex);
		case 152:
			return cast_expr_sempred((Cast_exprContext)_localctx, predIndex);
		case 153:
			return mul_expr_sempred((Mul_exprContext)_localctx, predIndex);
		case 154:
			return add_expr_sempred((Add_exprContext)_localctx, predIndex);
		case 155:
			return shift_expr_sempred((Shift_exprContext)_localctx, predIndex);
		case 156:
			return bit_and_expr_sempred((Bit_and_exprContext)_localctx, predIndex);
		case 157:
			return bit_xor_expr_sempred((Bit_xor_exprContext)_localctx, predIndex);
		case 158:
			return bit_or_expr_sempred((Bit_or_exprContext)_localctx, predIndex);
		case 160:
			return and_expr_sempred((And_exprContext)_localctx, predIndex);
		case 161:
			return or_expr_sempred((Or_exprContext)_localctx, predIndex);
		case 164:
			return post_expr_no_struct_sempred((Post_expr_no_structContext)_localctx, predIndex);
		case 166:
			return cast_expr_no_struct_sempred((Cast_expr_no_structContext)_localctx, predIndex);
		case 167:
			return mul_expr_no_struct_sempred((Mul_expr_no_structContext)_localctx, predIndex);
		case 168:
			return add_expr_no_struct_sempred((Add_expr_no_structContext)_localctx, predIndex);
		case 169:
			return shift_expr_no_struct_sempred((Shift_expr_no_structContext)_localctx, predIndex);
		case 170:
			return bit_and_expr_no_struct_sempred((Bit_and_expr_no_structContext)_localctx, predIndex);
		case 171:
			return bit_xor_expr_no_struct_sempred((Bit_xor_expr_no_structContext)_localctx, predIndex);
		case 172:
			return bit_or_expr_no_struct_sempred((Bit_or_expr_no_structContext)_localctx, predIndex);
		case 174:
			return and_expr_no_struct_sempred((And_expr_no_structContext)_localctx, predIndex);
		case 175:
			return or_expr_no_struct_sempred((Or_expr_no_structContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean item_macro_path_parent_sempred(Item_macro_path_parentContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean path_parent_sempred(Path_parentContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean lifetime_bound_sempred(Lifetime_boundContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean ty_path_parent_sempred(Ty_path_parentContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bound_sempred(BoundContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean match_pat_sempred(Match_patContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean post_expr_sempred(Post_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean cast_expr_sempred(Cast_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 2);
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean mul_expr_sempred(Mul_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 3);
		case 10:
			return precpred(_ctx, 2);
		case 11:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean add_expr_sempred(Add_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return precpred(_ctx, 2);
		case 13:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shift_expr_sempred(Shift_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 14:
			return precpred(_ctx, 2);
		case 15:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_and_expr_sempred(Bit_and_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 16:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_xor_expr_sempred(Bit_xor_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 17:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_or_expr_sempred(Bit_or_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean and_expr_sempred(And_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 19:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean or_expr_sempred(Or_exprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean post_expr_no_struct_sempred(Post_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 21:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean cast_expr_no_struct_sempred(Cast_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 22:
			return precpred(_ctx, 2);
		case 23:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean mul_expr_no_struct_sempred(Mul_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return precpred(_ctx, 3);
		case 25:
			return precpred(_ctx, 2);
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean add_expr_no_struct_sempred(Add_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 2);
		case 28:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shift_expr_no_struct_sempred(Shift_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 29:
			return precpred(_ctx, 2);
		case 30:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_and_expr_no_struct_sempred(Bit_and_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_xor_expr_no_struct_sempred(Bit_xor_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean bit_or_expr_no_struct_sempred(Bit_or_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean and_expr_no_struct_sempred(And_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 34:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean or_expr_no_struct_sempred(Or_expr_no_structContext _localctx, int predIndex) {
		switch (predIndex) {
		case 35:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3c\u09f9\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t\u0080"+
		"\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084\4\u0085"+
		"\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089\t\u0089"+
		"\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d\4\u008e"+
		"\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092\t\u0092"+
		"\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096\4\u0097"+
		"\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b\t\u009b"+
		"\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f\4\u00a0"+
		"\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4\t\u00a4"+
		"\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8\4\u00a9"+
		"\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad\t\u00ad"+
		"\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1\4\u00b2"+
		"\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\3\2\3\2\3\2\3"+
		"\3\7\3\u016f\n\3\f\3\16\3\u0172\13\3\3\3\7\3\u0175\n\3\f\3\16\3\u0178"+
		"\13\3\3\4\3\4\5\4\u017c\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\5\5\u0189\n\5\3\6\7\6\u018c\n\6\f\6\16\6\u018f\13\6\3\6\5\6\u0192\n"+
		"\6\3\6\3\6\7\6\u0196\n\6\f\6\16\6\u0199\13\6\3\6\3\6\7\6\u019d\n\6\f\6"+
		"\16\6\u01a0\13\6\3\6\3\6\7\6\u01a4\n\6\f\6\16\6\u01a7\13\6\3\6\5\6\u01aa"+
		"\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u01b8\n\7\3\b"+
		"\3\b\3\b\5\b\u01bd\n\b\3\b\3\b\3\t\3\t\5\t\u01c3\n\t\3\t\3\t\5\t\u01c7"+
		"\n\t\3\n\3\n\3\n\3\n\3\n\5\n\u01ce\n\n\3\n\3\n\3\n\7\n\u01d3\n\n\f\n\16"+
		"\n\u01d6\13\n\3\13\3\13\5\13\u01da\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5"+
		"\f\u01e3\n\f\3\r\3\r\3\r\3\r\5\r\u01e9\n\r\3\r\3\r\3\16\3\16\3\16\3\16"+
		"\3\17\5\17\u01f2\n\17\3\17\3\17\3\17\3\17\3\17\5\17\u01f9\n\17\3\17\3"+
		"\17\3\17\7\17\u01fe\n\17\f\17\16\17\u0201\13\17\3\17\5\17\u0204\n\17\5"+
		"\17\u0206\n\17\3\20\3\20\3\20\3\20\3\20\5\20\u020d\n\20\3\20\3\20\5\20"+
		"\u0211\n\20\3\21\3\21\5\21\u0215\n\21\3\22\3\22\3\22\7\22\u021a\n\22\f"+
		"\22\16\22\u021d\13\22\3\22\5\22\u0220\n\22\3\23\3\23\3\23\3\24\3\24\3"+
		"\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\7\26\u0232\n\26"+
		"\f\26\16\26\u0235\13\26\3\26\7\26\u0238\n\26\f\26\16\26\u023b\13\26\3"+
		"\26\3\26\3\27\7\27\u0240\n\27\f\27\16\27\u0243\13\27\3\27\5\27\u0246\n"+
		"\27\3\27\3\27\7\27\u024a\n\27\f\27\16\27\u024d\13\27\3\27\5\27\u0250\n"+
		"\27\3\30\3\30\5\30\u0254\n\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\5\30\u0260\n\30\3\31\3\31\5\31\u0264\n\31\3\31\3\31\3\31\3"+
		"\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3"+
		"\33\5\33\u0278\n\33\3\33\3\33\5\33\u027c\n\33\3\33\5\33\u027f\n\33\3\33"+
		"\3\33\3\34\3\34\3\34\5\34\u0286\n\34\3\34\3\34\5\34\u028a\n\34\3\34\5"+
		"\34\u028d\n\34\3\34\3\34\3\35\3\35\3\35\5\35\u0294\n\35\3\35\3\35\5\35"+
		"\u0298\n\35\3\35\5\35\u029b\n\35\3\35\3\35\5\35\u029f\n\35\3\36\3\36\3"+
		"\36\5\36\u02a4\n\36\3\36\3\36\5\36\u02a8\n\36\3\36\5\36\u02ab\n\36\3\36"+
		"\3\36\3\37\5\37\u02b0\n\37\3\37\5\37\u02b3\n\37\3\37\5\37\u02b6\n\37\3"+
		"\37\3\37\3\37\5\37\u02bb\n\37\3 \3 \3 \3 \3!\3!\3!\5!\u02c4\n!\3\"\3\""+
		"\3\"\7\"\u02c9\n\"\f\"\16\"\u02cc\13\"\3\"\5\"\u02cf\n\"\3#\3#\3#\7#\u02d4"+
		"\n#\f#\16#\u02d7\13#\3#\3#\5#\u02db\n#\3#\5#\u02de\n#\3$\3$\3$\7$\u02e3"+
		"\n$\f$\16$\u02e6\13$\3$\3$\5$\u02ea\n$\3$\5$\u02ed\n$\3%\5%\u02f0\n%\3"+
		"%\3%\3%\5%\u02f5\n%\3%\3%\5%\u02f9\n%\3%\5%\u02fc\n%\3%\5%\u02ff\n%\3"+
		"&\3&\5&\u0303\n&\3&\3&\7&\u0307\n&\f&\16&\u030a\13&\3&\5&\u030d\n&\3\'"+
		"\3\'\3\'\3\'\3\'\5\'\u0314\n\'\3(\5(\u0317\n(\3(\3(\5(\u031b\n(\3)\3)"+
		"\5)\u031f\n)\3)\3)\7)\u0323\n)\f)\16)\u0326\13)\3)\5)\u0329\n)\3*\3*\3"+
		"*\5*\u032e\n*\3+\3+\3+\3+\3+\5+\u0335\n+\3,\3,\3,\5,\u033a\n,\3,\5,\u033d"+
		"\n,\3,\3,\3,\3,\3-\3-\3-\5-\u0346\n-\3-\3-\3.\5.\u034b\n.\3.\3.\3.\5."+
		"\u0350\n.\3.\3.\5.\u0354\n.\3.\3.\5.\u0358\n.\3.\3.\5.\u035c\n.\3.\5."+
		"\u035f\n.\3/\7/\u0362\n/\f/\16/\u0365\13/\3/\5/\u0368\n/\3/\3/\3\60\3"+
		"\60\3\60\7\60\u036f\n\60\f\60\16\60\u0372\13\60\3\60\5\60\u0375\n\60\3"+
		"\61\7\61\u0378\n\61\f\61\16\61\u037b\13\61\3\61\5\61\u037e\n\61\3\61\3"+
		"\61\3\61\3\61\3\62\3\62\3\62\7\62\u0387\n\62\f\62\16\62\u038a\13\62\3"+
		"\62\5\62\u038d\n\62\3\63\3\63\3\63\5\63\u0392\n\63\3\63\5\63\u0395\n\63"+
		"\3\63\3\63\5\63\u0399\n\63\3\63\3\63\3\64\7\64\u039e\n\64\f\64\16\64\u03a1"+
		"\13\64\3\64\3\64\3\65\3\65\3\65\7\65\u03a8\n\65\f\65\16\65\u03ab\13\65"+
		"\3\65\5\65\u03ae\n\65\3\66\3\66\3\66\5\66\u03b3\n\66\3\66\3\66\3\66\3"+
		"\66\3\66\5\66\u03ba\n\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\5\66\u03c3"+
		"\n\66\3\67\7\67\u03c6\n\67\f\67\16\67\u03c9\13\67\3\67\3\67\38\38\38\7"+
		"8\u03d0\n8\f8\168\u03d3\138\38\58\u03d6\n8\39\39\39\39\3:\3:\3:\7:\u03df"+
		"\n:\f:\16:\u03e2\13:\3:\5:\u03e5\n:\3;\3;\3;\3;\3;\3;\3<\5<\u03ee\n<\3"+
		"<\5<\u03f1\n<\3<\3<\3<\5<\u03f6\n<\3<\5<\u03f9\n<\3<\5<\u03fc\n<\3<\3"+
		"<\7<\u0400\n<\f<\16<\u0403\13<\3<\3<\3=\7=\u0408\n=\f=\16=\u040b\13=\3"+
		"=\3=\3=\5=\u0410\n=\3=\5=\u0413\n=\3=\3=\3=\7=\u0418\n=\f=\16=\u041b\13"+
		"=\3=\3=\3=\3=\3=\5=\u0422\n=\3=\3=\3=\7=\u0427\n=\f=\16=\u042a\13=\3="+
		"\3=\7=\u042e\n=\f=\16=\u0431\13=\3=\3=\3=\3=\5=\u0437\n=\3>\3>\3>\3?\3"+
		"?\3?\3@\5@\u0440\n@\3@\3@\5@\u0444\n@\3@\3@\5@\u0448\n@\3@\3@\7@\u044c"+
		"\n@\f@\16@\u044f\13@\3@\3@\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\5"+
		"A\u0461\nA\3B\7B\u0464\nB\fB\16B\u0467\13B\3B\5B\u046a\nB\3B\3B\3C\5C"+
		"\u046f\nC\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\5C\u047d\nC\3D\3D\3D\7D"+
		"\u0482\nD\fD\16D\u0485\13D\3D\3D\3E\3E\3E\3E\7E\u048d\nE\fE\16E\u0490"+
		"\13E\3E\3E\3F\3F\5F\u0496\nF\3G\3G\3G\5G\u049b\nG\3H\3H\7H\u049f\nH\f"+
		"H\16H\u04a2\13H\3H\3H\3I\3I\7I\u04a8\nI\fI\16I\u04ab\13I\3I\3I\3J\3J\7"+
		"J\u04b1\nJ\fJ\16J\u04b4\13J\3J\3J\3K\3K\3K\3L\3L\5L\u04bd\nL\3L\3L\5L"+
		"\u04c1\nL\3M\3M\3M\3M\3M\5M\u04c8\nM\3M\3M\3M\3M\3M\5M\u04cf\nM\3M\3M"+
		"\3M\7M\u04d4\nM\fM\16M\u04d7\13M\3N\3N\3N\3O\3O\5O\u04de\nO\3P\3P\3P\5"+
		"P\u04e3\nP\3Q\3Q\5Q\u04e7\nQ\3R\5R\u04ea\nR\3R\3R\3S\3S\3S\5S\u04f1\n"+
		"S\3S\3S\3T\3T\3T\7T\u04f8\nT\fT\16T\u04fb\13T\3T\5T\u04fe\nT\3U\3U\3U"+
		"\5U\u0503\nU\3V\3V\3V\3V\3V\3V\7V\u050b\nV\fV\16V\u050e\13V\3W\3W\5W\u0512"+
		"\nW\3W\3W\5W\u0516\nW\3X\3X\5X\u051a\nX\3X\3X\5X\u051e\nX\3X\3X\5X\u0522"+
		"\nX\3X\5X\u0525\nX\3Y\3Y\3Y\3Y\3Y\5Y\u052c\nY\3Y\3Y\3Y\3Y\3Y\5Y\u0533"+
		"\nY\3Y\3Y\3Y\7Y\u0538\nY\fY\16Y\u053b\13Y\3Z\3Z\5Z\u053f\nZ\3[\3[\5[\u0543"+
		"\n[\3[\5[\u0546\n[\3\\\3\\\3\\\3]\3]\3]\7]\u054e\n]\f]\16]\u0551\13]\3"+
		"]\5]\u0554\n]\3^\3^\3^\3^\5^\u055a\n^\3^\3^\3^\5^\u055f\n^\3_\3_\3_\3"+
		"`\3`\3`\3`\3`\3`\7`\u056a\n`\f`\16`\u056d\13`\3a\3a\3a\3a\5a\u0573\na"+
		"\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\5b\u0580\nb\3b\3b\3b\3b\3b\3b\5b\u0588"+
		"\nb\3b\3b\3b\3b\5b\u058e\nb\3b\5b\u0591\nb\3b\3b\3b\5b\u0596\nb\3b\5b"+
		"\u0599\nb\3b\3b\3b\3b\3b\3b\5b\u05a1\nb\3b\5b\u05a4\nb\3b\5b\u05a7\nb"+
		"\3b\3b\3b\5b\u05ac\nb\3b\3b\5b\u05b0\nb\3b\3b\5b\u05b4\nb\5b\u05b6\nb"+
		"\3c\3c\3d\3d\5d\u05bc\nd\3e\3e\3e\3e\3e\3e\3e\7e\u05c5\ne\fe\16e\u05c8"+
		"\13e\3e\3e\3e\5e\u05cd\ne\3f\3f\3f\7f\u05d2\nf\ff\16f\u05d5\13f\3f\5f"+
		"\u05d8\nf\3g\3g\3g\5g\u05dd\ng\3h\3h\3h\7h\u05e2\nh\fh\16h\u05e5\13h\3"+
		"h\5h\u05e8\nh\3i\3i\3i\3i\3i\5i\u05ef\ni\3j\3j\3j\7j\u05f4\nj\fj\16j\u05f7"+
		"\13j\3j\5j\u05fa\nj\3k\3k\3k\3k\3k\3k\3k\3k\7k\u0604\nk\fk\16k\u0607\13"+
		"k\3k\3k\3k\5k\u060c\nk\3l\7l\u060f\nl\fl\16l\u0612\13l\3l\3l\3l\5l\u0617"+
		"\nl\3m\3m\3m\7m\u061c\nm\fm\16m\u061f\13m\3m\5m\u0622\nm\3n\7n\u0625\n"+
		"n\fn\16n\u0628\13n\3n\3n\5n\u062c\nn\3n\5n\u062f\nn\3o\3o\3o\7o\u0634"+
		"\no\fo\16o\u0637\13o\3o\5o\u063a\no\3p\3p\3p\3p\3p\5p\u0641\np\5p\u0643"+
		"\np\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\5q\u0653\nq\3q\3q\3q\5q"+
		"\u0658\nq\3q\3q\3q\3q\3q\5q\u065f\nq\3q\3q\3q\5q\u0664\nq\3q\3q\3q\3q"+
		"\3q\5q\u066b\nq\3q\3q\3q\3q\3q\5q\u0672\nq\3q\3q\3q\5q\u0677\nq\3q\3q"+
		"\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\5q\u0686\nq\3r\3r\5r\u068a\nr\3s\5s"+
		"\u068d\ns\3s\3s\3t\3t\3t\7t\u0694\nt\ft\16t\u0697\13t\3t\5t\u069a\nt\3"+
		"u\3u\3u\3u\7u\u06a0\nu\fu\16u\u06a3\13u\3u\3u\5u\u06a7\nu\5u\u06a9\nu"+
		"\5u\u06ab\nu\3v\3v\3v\5v\u06b0\nv\3w\3w\5w\u06b4\nw\3w\5w\u06b7\nw\3x"+
		"\3x\3x\7x\u06bc\nx\fx\16x\u06bf\13x\3x\5x\u06c2\nx\3y\3y\3y\3y\7y\u06c8"+
		"\ny\fy\16y\u06cb\13y\3y\3y\3y\5y\u06d0\ny\5y\u06d2\ny\5y\u06d4\ny\3z\5"+
		"z\u06d7\nz\3z\5z\u06da\nz\3z\5z\u06dd\nz\3z\3z\3z\3z\3z\5z\u06e4\nz\3"+
		"{\3{\3|\3|\3}\3}\3}\7}\u06ed\n}\f}\16}\u06f0\13}\3}\5}\u06f3\n}\3~\3~"+
		"\7~\u06f7\n~\f~\16~\u06fa\13~\3~\5~\u06fd\n~\3~\3~\3\177\3\177\7\177\u0703"+
		"\n\177\f\177\16\177\u0706\13\177\3\177\7\177\u0709\n\177\f\177\16\177"+
		"\u070c\13\177\3\177\5\177\u070f\n\177\3\177\3\177\3\u0080\3\u0080\3\u0080"+
		"\5\u0080\u0716\n\u0080\3\u0081\7\u0081\u0719\n\u0081\f\u0081\16\u0081"+
		"\u071c\13\u0081\3\u0081\3\u0081\3\u0081\3\u0081\5\u0081\u0722\n\u0081"+
		"\3\u0081\3\u0081\5\u0081\u0726\n\u0081\3\u0081\3\u0081\3\u0081\7\u0081"+
		"\u072b\n\u0081\f\u0081\16\u0081\u072e\13\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0081\5\u0081\u0734\n\u0081\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082"+
		"\3\u0082\3\u0082\3\u0082\3\u0082\7\u0082\u073f\n\u0082\f\u0082\16\u0082"+
		"\u0742\13\u0082\3\u0082\3\u0082\5\u0082\u0746\n\u0082\3\u0082\3\u0082"+
		"\3\u0082\3\u0082\5\u0082\u074c\n\u0082\3\u0082\5\u0082\u074f\n\u0082\3"+
		"\u0082\3\u0082\3\u0082\5\u0082\u0754\n\u0082\3\u0082\3\u0082\3\u0082\3"+
		"\u0082\3\u0082\5\u0082\u075b\n\u0082\3\u0082\3\u0082\3\u0082\3\u0082\3"+
		"\u0082\3\u0082\3\u0082\5\u0082\u0764\n\u0082\3\u0082\3\u0082\3\u0082\3"+
		"\u0082\5\u0082\u076a\n\u0082\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3"+
		"\u0083\5\u0083\u0772\n\u0083\3\u0084\3\u0084\3\u0084\3\u0085\3\u0085\3"+
		"\u0085\5\u0085\u077a\n\u0085\3\u0085\5\u0085\u077d\n\u0085\3\u0085\3\u0085"+
		"\3\u0085\3\u0085\5\u0085\u0783\n\u0085\5\u0085\u0785\n\u0085\5\u0085\u0787"+
		"\n\u0085\3\u0086\7\u0086\u078a\n\u0086\f\u0086\16\u0086\u078d\13\u0086"+
		"\3\u0086\3\u0086\5\u0086\u0791\n\u0086\3\u0086\3\u0086\3\u0087\3\u0087"+
		"\3\u0087\3\u0087\3\u0087\3\u0087\7\u0087\u079b\n\u0087\f\u0087\16\u0087"+
		"\u079e\13\u0087\3\u0088\3\u0088\3\u0088\3\u0089\3\u0089\7\u0089\u07a5"+
		"\n\u0089\f\u0089\16\u0089\u07a8\13\u0089\3\u008a\3\u008a\7\u008a\u07ac"+
		"\n\u008a\f\u008a\16\u008a\u07af\13\u008a\3\u008b\3\u008b\3\u008b\3\u008b"+
		"\5\u008b\u07b5\n\u008b\3\u008b\5\u008b\u07b8\n\u008b\3\u008b\3\u008b\5"+
		"\u008b\u07bc\n\u008b\3\u008c\3\u008c\3\u008c\3\u008c\5\u008c\u07c2\n\u008c"+
		"\3\u008c\3\u008c\5\u008c\u07c6\n\u008c\3\u008c\3\u008c\3\u008c\5\u008c"+
		"\u07cb\n\u008c\3\u008c\3\u008c\3\u008c\3\u008c\3\u008c\5\u008c\u07d2\n"+
		"\u008c\3\u008c\3\u008c\3\u008c\5\u008c\u07d7\n\u008c\3\u008c\3\u008c\3"+
		"\u008c\3\u008c\5\u008c\u07dd\n\u008c\3\u008c\5\u008c\u07e0\n\u008c\3\u008c"+
		"\3\u008c\3\u008c\5\u008c\u07e5\n\u008c\3\u008c\3\u008c\3\u008c\3\u008c"+
		"\3\u008c\3\u008c\5\u008c\u07ed\n\u008c\3\u008c\3\u008c\3\u008c\3\u008c"+
		"\3\u008c\3\u008c\5\u008c\u07f5\n\u008c\3\u008c\3\u008c\5\u008c\u07f9\n"+
		"\u008c\3\u008c\3\u008c\5\u008c\u07fd\n\u008c\5\u008c\u07ff\n\u008c\3\u008d"+
		"\3\u008d\3\u008e\3\u008e\3\u008e\5\u008e\u0806\n\u008e\3\u008e\5\u008e"+
		"\u0809\n\u008e\3\u008f\3\u008f\3\u008f\5\u008f\u080e\n\u008f\3\u0090\3"+
		"\u0090\3\u0090\7\u0090\u0813\n\u0090\f\u0090\16\u0090\u0816\13\u0090\3"+
		"\u0090\5\u0090\u0819\n\u0090\3\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u081f"+
		"\n\u0091\3\u0092\3\u0092\5\u0092\u0823\n\u0092\3\u0093\3\u0093\3\u0093"+
		"\3\u0093\7\u0093\u0829\n\u0093\f\u0093\16\u0093\u082c\13\u0093\3\u0093"+
		"\3\u0093\3\u0093\5\u0093\u0831\n\u0093\5\u0093\u0833\n\u0093\5\u0093\u0835"+
		"\n\u0093\3\u0094\3\u0094\3\u0094\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095"+
		"\5\u0095\u083f\n\u0095\3\u0096\3\u0096\5\u0096\u0843\n\u0096\3\u0097\3"+
		"\u0097\3\u0097\3\u0097\3\u0097\7\u0097\u084a\n\u0097\f\u0097\16\u0097"+
		"\u084d\13\u0097\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098"+
		"\3\u0098\3\u0098\5\u0098\u0858\n\u0098\3\u0098\3\u0098\5\u0098\u085c\n"+
		"\u0098\3\u0098\5\u0098\u085f\n\u0098\3\u0098\3\u0098\3\u0098\3\u0098\5"+
		"\u0098\u0865\n\u0098\3\u0098\5\u0098\u0868\n\u0098\3\u0099\3\u0099\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\5\u0099\u0874"+
		"\n\u0099\3\u0099\3\u0099\3\u0099\5\u0099\u0879\n\u0099\3\u0099\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\5\u0099\u0884"+
		"\n\u0099\3\u009a\3\u009a\3\u009a\3\u009a\3\u009a\3\u009a\3\u009a\3\u009a"+
		"\3\u009a\7\u009a\u088f\n\u009a\f\u009a\16\u009a\u0892\13\u009a\3\u009b"+
		"\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b"+
		"\3\u009b\3\u009b\7\u009b\u08a0\n\u009b\f\u009b\16\u009b\u08a3\13\u009b"+
		"\3\u009c\3\u009c\3\u009c\3\u009c\3\u009c\3\u009c\3\u009c\3\u009c\3\u009c"+
		"\7\u009c\u08ae\n\u009c\f\u009c\16\u009c\u08b1\13\u009c\3\u009d\3\u009d"+
		"\3\u009d\3\u009d\3\u009d\3\u009d\3\u009d\3\u009d\3\u009d\3\u009d\3\u009d"+
		"\7\u009d\u08be\n\u009d\f\u009d\16\u009d\u08c1\13\u009d\3\u009e\3\u009e"+
		"\3\u009e\3\u009e\3\u009e\3\u009e\7\u009e\u08c9\n\u009e\f\u009e\16\u009e"+
		"\u08cc\13\u009e\3\u009f\3\u009f\3\u009f\3\u009f\3\u009f\3\u009f\7\u009f"+
		"\u08d4\n\u009f\f\u009f\16\u009f\u08d7\13\u009f\3\u00a0\3\u00a0\3\u00a0"+
		"\3\u00a0\3\u00a0\3\u00a0\7\u00a0\u08df\n\u00a0\f\u00a0\16\u00a0\u08e2"+
		"\13\u00a0\3\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a1"+
		"\3\u00a1\5\u00a1\u08ed\n\u00a1\3\u00a1\3\u00a1\5\u00a1\u08f1\n\u00a1\3"+
		"\u00a2\3\u00a2\3\u00a2\3\u00a2\3\u00a2\3\u00a2\7\u00a2\u08f9\n\u00a2\f"+
		"\u00a2\16\u00a2\u08fc\13\u00a2\3\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a3"+
		"\3\u00a3\7\u00a3\u0904\n\u00a3\f\u00a3\16\u00a3\u0907\13\u00a3\3\u00a4"+
		"\3\u00a4\3\u00a4\3\u00a4\5\u00a4\u090d\n\u00a4\3\u00a4\3\u00a4\5\u00a4"+
		"\u0911\n\u00a4\5\u00a4\u0913\n\u00a4\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3"+
		"\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5"+
		"\3\u00a5\3\u00a5\5\u00a5\u0924\n\u00a5\3\u00a5\3\u00a5\5\u00a5\u0928\n"+
		"\u00a5\3\u00a6\3\u00a6\3\u00a6\3\u00a6\3\u00a6\7\u00a6\u092f\n\u00a6\f"+
		"\u00a6\16\u00a6\u0932\13\u00a6\3\u00a7\3\u00a7\3\u00a7\3\u00a7\3\u00a7"+
		"\3\u00a7\3\u00a7\3\u00a7\3\u00a7\3\u00a7\5\u00a7\u093e\n\u00a7\3\u00a7"+
		"\3\u00a7\3\u00a7\5\u00a7\u0943\n\u00a7\3\u00a7\3\u00a7\3\u00a7\3\u00a7"+
		"\3\u00a7\5\u00a7\u094a\n\u00a7\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8"+
		"\3\u00a8\3\u00a8\3\u00a8\3\u00a8\7\u00a8\u0955\n\u00a8\f\u00a8\16\u00a8"+
		"\u0958\13\u00a8\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9"+
		"\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\7\u00a9\u0966\n\u00a9\f\u00a9"+
		"\16\u00a9\u0969\13\u00a9\3\u00aa\3\u00aa\3\u00aa\3\u00aa\3\u00aa\3\u00aa"+
		"\3\u00aa\3\u00aa\3\u00aa\7\u00aa\u0974\n\u00aa\f\u00aa\16\u00aa\u0977"+
		"\13\u00aa\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab\3\u00ab"+
		"\3\u00ab\3\u00ab\3\u00ab\7\u00ab\u0984\n\u00ab\f\u00ab\16\u00ab\u0987"+
		"\13\u00ab\3\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\7\u00ac\u098f"+
		"\n\u00ac\f\u00ac\16\u00ac\u0992\13\u00ac\3\u00ad\3\u00ad\3\u00ad\3\u00ad"+
		"\3\u00ad\3\u00ad\7\u00ad\u099a\n\u00ad\f\u00ad\16\u00ad\u099d\13\u00ad"+
		"\3\u00ae\3\u00ae\3\u00ae\3\u00ae\3\u00ae\3\u00ae\7\u00ae\u09a5\n\u00ae"+
		"\f\u00ae\16\u00ae\u09a8\13\u00ae\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af"+
		"\3\u00af\3\u00af\3\u00af\3\u00af\5\u00af\u09b3\n\u00af\3\u00af\3\u00af"+
		"\5\u00af\u09b7\n\u00af\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0"+
		"\7\u00b0\u09bf\n\u00b0\f\u00b0\16\u00b0\u09c2\13\u00b0\3\u00b1\3\u00b1"+
		"\3\u00b1\3\u00b1\3\u00b1\3\u00b1\7\u00b1\u09ca\n\u00b1\f\u00b1\16\u00b1"+
		"\u09cd\13\u00b1\3\u00b2\3\u00b2\3\u00b2\3\u00b2\5\u00b2\u09d3\n\u00b2"+
		"\3\u00b2\3\u00b2\5\u00b2\u09d7\n\u00b2\5\u00b2\u09d9\n\u00b2\3\u00b3\3"+
		"\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3"+
		"\3\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\5\u00b3\u09ea\n\u00b3\3\u00b3"+
		"\3\u00b3\5\u00b3\u09ee\n\u00b3\3\u00b4\3\u00b4\3\u00b5\3\u00b5\3\u00b5"+
		"\3\u00b5\3\u00b5\5\u00b5\u09f7\n\u00b5\3\u00b5\2\34\22\u0098\u00aa\u00b0"+
		"\u00be\u010c\u012c\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0142\u0144"+
		"\u014a\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015e\u0160\u00b6\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP"+
		"RTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e"+
		"\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6"+
		"\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be"+
		"\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6"+
		"\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee"+
		"\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106"+
		"\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e"+
		"\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136"+
		"\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e"+
		"\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166"+
		"\u0168\2\7\4\2\26\26\37 \6\2\4\4\6\6\17\20,-\4\2\26\26\32\32\4\2DEZ`\5"+
		"\2%&**YY\2\u0b21\2\u016a\3\2\2\2\4\u0170\3\2\2\2\6\u0179\3\2\2\2\b\u0188"+
		"\3\2\2\2\n\u01a9\3\2\2\2\f\u01b7\3\2\2\2\16\u01b9\3\2\2\2\20\u01c6\3\2"+
		"\2\2\22\u01cd\3\2\2\2\24\u01d9\3\2\2\2\26\u01e2\3\2\2\2\30\u01e4\3\2\2"+
		"\2\32\u01ec\3\2\2\2\34\u0205\3\2\2\2\36\u0210\3\2\2\2 \u0212\3\2\2\2\""+
		"\u0216\3\2\2\2$\u0221\3\2\2\2&\u0224\3\2\2\2(\u0228\3\2\2\2*\u022e\3\2"+
		"\2\2,\u024f\3\2\2\2.\u025f\3\2\2\2\60\u0261\3\2\2\2\62\u026c\3\2\2\2\64"+
		"\u0274\3\2\2\2\66\u0282\3\2\2\28\u0290\3\2\2\2:\u02a0\3\2\2\2<\u02af\3"+
		"\2\2\2>\u02bc\3\2\2\2@\u02c3\3\2\2\2B\u02c5\3\2\2\2D\u02d0\3\2\2\2F\u02df"+
		"\3\2\2\2H\u02fe\3\2\2\2J\u0302\3\2\2\2L\u0313\3\2\2\2N\u0316\3\2\2\2P"+
		"\u031e\3\2\2\2R\u032a\3\2\2\2T\u032f\3\2\2\2V\u0336\3\2\2\2X\u0342\3\2"+
		"\2\2Z\u035e\3\2\2\2\\\u0363\3\2\2\2^\u036b\3\2\2\2`\u0379\3\2\2\2b\u0383"+
		"\3\2\2\2d\u038e\3\2\2\2f\u039f\3\2\2\2h\u03a4\3\2\2\2j\u03c2\3\2\2\2l"+
		"\u03c7\3\2\2\2n\u03cc\3\2\2\2p\u03d7\3\2\2\2r\u03db\3\2\2\2t\u03e6\3\2"+
		"\2\2v\u03ed\3\2\2\2x\u0436\3\2\2\2z\u0438\3\2\2\2|\u043b\3\2\2\2~\u043f"+
		"\3\2\2\2\u0080\u0460\3\2\2\2\u0082\u0465\3\2\2\2\u0084\u047c\3\2\2\2\u0086"+
		"\u047e\3\2\2\2\u0088\u0488\3\2\2\2\u008a\u0495\3\2\2\2\u008c\u049a\3\2"+
		"\2\2\u008e\u049c\3\2\2\2\u0090\u04a5\3\2\2\2\u0092\u04ae\3\2\2\2\u0094"+
		"\u04b7\3\2\2\2\u0096\u04c0\3\2\2\2\u0098\u04ce\3\2\2\2\u009a\u04d8\3\2"+
		"\2\2\u009c\u04dd\3\2\2\2\u009e\u04df\3\2\2\2\u00a0\u04e6\3\2\2\2\u00a2"+
		"\u04e9\3\2\2\2\u00a4\u04ed\3\2\2\2\u00a6\u04f4\3\2\2\2\u00a8\u04ff\3\2"+
		"\2\2\u00aa\u0504\3\2\2\2\u00ac\u0515\3\2\2\2\u00ae\u0524\3\2\2\2\u00b0"+
		"\u0532\3\2\2\2\u00b2\u053e\3\2\2\2\u00b4\u0542\3\2\2\2\u00b6\u0547\3\2"+
		"\2\2\u00b8\u054a\3\2\2\2\u00ba\u055e\3\2\2\2\u00bc\u0560\3\2\2\2\u00be"+
		"\u0563\3\2\2\2\u00c0\u0572\3\2\2\2\u00c2\u05b5\3\2\2\2\u00c4\u05b7\3\2"+
		"\2\2\u00c6\u05b9\3\2\2\2\u00c8\u05cc\3\2\2\2\u00ca\u05ce\3\2\2\2\u00cc"+
		"\u05d9\3\2\2\2\u00ce\u05de\3\2\2\2\u00d0\u05ee\3\2\2\2\u00d2\u05f0\3\2"+
		"\2\2\u00d4\u060b\3\2\2\2\u00d6\u0610\3\2\2\2\u00d8\u0618\3\2\2\2\u00da"+
		"\u0626\3\2\2\2\u00dc\u0630\3\2\2\2\u00de\u0642\3\2\2\2\u00e0\u0685\3\2"+
		"\2\2\u00e2\u0689\3\2\2\2\u00e4\u068c\3\2\2\2\u00e6\u0690\3\2\2\2\u00e8"+
		"\u06aa\3\2\2\2\u00ea\u06ac\3\2\2\2\u00ec\u06b6\3\2\2\2\u00ee\u06b8\3\2"+
		"\2\2\u00f0\u06d3\3\2\2\2\u00f2\u06e3\3\2\2\2\u00f4\u06e5\3\2\2\2\u00f6"+
		"\u06e7\3\2\2\2\u00f8\u06e9\3\2\2\2\u00fa\u06f4\3\2\2\2\u00fc\u0700\3\2"+
		"\2\2\u00fe\u0715\3\2\2\2\u0100\u0733\3\2\2\2\u0102\u0769\3\2\2\2\u0104"+
		"\u0771\3\2\2\2\u0106\u0773\3\2\2\2\u0108\u0786\3\2\2\2\u010a\u078b\3\2"+
		"\2\2\u010c\u0794\3\2\2\2\u010e\u079f\3\2\2\2\u0110\u07a2\3\2\2\2\u0112"+
		"\u07a9\3\2\2\2\u0114\u07bb\3\2\2\2\u0116\u07fe\3\2\2\2\u0118\u0800\3\2"+
		"\2\2\u011a\u0808\3\2\2\2\u011c\u080a\3\2\2\2\u011e\u080f\3\2\2\2\u0120"+
		"\u081e\3\2\2\2\u0122\u0822\3\2\2\2\u0124\u0834\3\2\2\2\u0126\u0836\3\2"+
		"\2\2\u0128\u083e\3\2\2\2\u012a\u0842\3\2\2\2\u012c\u0844\3\2\2\2\u012e"+
		"\u0867\3\2\2\2\u0130\u0883\3\2\2\2\u0132\u0885\3\2\2\2\u0134\u0893\3\2"+
		"\2\2\u0136\u08a4\3\2\2\2\u0138\u08b2\3\2\2\2\u013a\u08c2\3\2\2\2\u013c"+
		"\u08cd\3\2\2\2\u013e\u08d8\3\2\2\2\u0140\u08f0\3\2\2\2\u0142\u08f2\3\2"+
		"\2\2\u0144\u08fd\3\2\2\2\u0146\u0912\3\2\2\2\u0148\u0927\3\2\2\2\u014a"+
		"\u0929\3\2\2\2\u014c\u0949\3\2\2\2\u014e\u094b\3\2\2\2\u0150\u0959\3\2"+
		"\2\2\u0152\u096a\3\2\2\2\u0154\u0978\3\2\2\2\u0156\u0988\3\2\2\2\u0158"+
		"\u0993\3\2\2\2\u015a\u099e\3\2\2\2\u015c\u09b6\3\2\2\2\u015e\u09b8\3\2"+
		"\2\2\u0160\u09c3\3\2\2\2\u0162\u09d8\3\2\2\2\u0164\u09ed\3\2\2\2\u0166"+
		"\u09ef\3\2\2\2\u0168\u09f6\3\2\2\2\u016a\u016b\5\4\3\2\u016b\u016c\7\2"+
		"\2\3\u016c\3\3\2\2\2\u016d\u016f\5\u0088E\2\u016e\u016d\3\2\2\2\u016f"+
		"\u0172\3\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2\u0171\u0176\3\2"+
		"\2\2\u0172\u0170\3\2\2\2\u0173\u0175\5\n\6\2\u0174\u0173\3\2\2\2\u0175"+
		"\u0178\3\2\2\2\u0176\u0174\3\2\2\2\u0176\u0177\3\2\2\2\u0177\5\3\2\2\2"+
		"\u0178\u0176\3\2\2\2\u0179\u017b\7\3\2\2\u017a\u017c\5\b\5\2\u017b\u017a"+
		"\3\2\2\2\u017b\u017c\3\2\2\2\u017c\7\3\2\2\2\u017d\u017e\7\4\2\2\u017e"+
		"\u017f\7\5\2\2\u017f\u0189\7\6\2\2\u0180\u0181\7\4\2\2\u0181\u0182\7\7"+
		"\2\2\u0182\u0189\7\6\2\2\u0183\u0184\7\4\2\2\u0184\u0185\7\b\2\2\u0185"+
		"\u0186\5\u0166\u00b4\2\u0186\u0187\7\6\2\2\u0187\u0189\3\2\2\2\u0188\u017d"+
		"\3\2\2\2\u0188\u0180\3\2\2\2\u0188\u0183\3\2\2\2\u0189\t\3\2\2\2\u018a"+
		"\u018c\5\u0086D\2\u018b\u018a\3\2\2\2\u018c\u018f\3\2\2\2\u018d\u018b"+
		"\3\2\2\2\u018d\u018e\3\2\2\2\u018e\u0191\3\2\2\2\u018f\u018d\3\2\2\2\u0190"+
		"\u0192\5\6\4\2\u0191\u0190\3\2\2\2\u0191\u0192\3\2\2\2\u0192\u0193\3\2"+
		"\2\2\u0193\u01aa\5\f\7\2\u0194\u0196\5\u0086D\2\u0195\u0194\3\2\2\2\u0196"+
		"\u0199\3\2\2\2\u0197\u0195\3\2\2\2\u0197\u0198\3\2\2\2\u0198\u019a\3\2"+
		"\2\2\u0199\u0197\3\2\2\2\u019a\u01aa\5~@\2\u019b\u019d\5\u0086D\2\u019c"+
		"\u019b\3\2\2\2\u019d\u01a0\3\2\2\2\u019e\u019c\3\2\2\2\u019e\u019f\3\2"+
		"\2\2\u019f\u01a1\3\2\2\2\u01a0\u019e\3\2\2\2\u01a1\u01aa\5*\26\2\u01a2"+
		"\u01a4\5\u0086D\2\u01a3\u01a2\3\2\2\2\u01a4\u01a7\3\2\2\2\u01a5\u01a3"+
		"\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a8\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a8"+
		"\u01aa\5\16\b\2\u01a9\u018d\3\2\2\2\u01a9\u0197\3\2\2\2\u01a9\u019e\3"+
		"\2\2\2\u01a9\u01a5\3\2\2\2\u01aa\13\3\2\2\2\u01ab\u01b8\5\30\r\2\u01ac"+
		"\u01b8\5\32\16\2\u01ad\u01b8\5&\24\2\u01ae\u01b8\5(\25\2\u01af\u01b8\5"+
		"\60\31\2\u01b0\u01b8\5\62\32\2\u01b1\u01b8\5\64\33\2\u01b2\u01b8\5V,\2"+
		"\u01b3\u01b8\5X-\2\u01b4\u01b8\5d\63\2\u01b5\u01b8\5t;\2\u01b6\u01b8\5"+
		"v<\2\u01b7\u01ab\3\2\2\2\u01b7\u01ac\3\2\2\2\u01b7\u01ad\3\2\2\2\u01b7"+
		"\u01ae\3\2\2\2\u01b7\u01af\3\2\2\2\u01b7\u01b0\3\2\2\2\u01b7\u01b1\3\2"+
		"\2\2\u01b7\u01b2\3\2\2\2\u01b7\u01b3\3\2\2\2\u01b7\u01b4\3\2\2\2\u01b7"+
		"\u01b5\3\2\2\2\u01b7\u01b6\3\2\2\2\u01b8\r\3\2\2\2\u01b9\u01ba\5\20\t"+
		"\2\u01ba\u01bc\7\t\2\2\u01bb\u01bd\5\u0166\u00b4\2\u01bc\u01bb\3\2\2\2"+
		"\u01bc\u01bd\3\2\2\2\u01bd\u01be\3\2\2\2\u01be\u01bf\5\26\f\2\u01bf\17"+
		"\3\2\2\2\u01c0\u01c7\5\u0166\u00b4\2\u01c1\u01c3\5\22\n\2\u01c2\u01c1"+
		"\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01c4\3\2\2\2\u01c4\u01c5\7\n\2\2\u01c5"+
		"\u01c7\5\u0166\u00b4\2\u01c6\u01c0\3\2\2\2\u01c6\u01c2\3\2\2\2\u01c7\21"+
		"\3\2\2\2\u01c8\u01c9\b\n\1\2\u01c9\u01ce\7\13\2\2\u01ca\u01ce\5\24\13"+
		"\2\u01cb\u01cc\7\n\2\2\u01cc\u01ce\5\24\13\2\u01cd\u01c8\3\2\2\2\u01cd"+
		"\u01ca\3\2\2\2\u01cd\u01cb\3\2\2\2\u01ce\u01d4\3\2\2\2\u01cf\u01d0\f\3"+
		"\2\2\u01d0\u01d1\7\n\2\2\u01d1\u01d3\5\24\13\2\u01d2\u01cf\3\2\2\2\u01d3"+
		"\u01d6\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d4\u01d5\3\2\2\2\u01d5\23\3\2\2"+
		"\2\u01d6\u01d4\3\2\2\2\u01d7\u01da\5\u0166\u00b4\2\u01d8\u01da\7\7\2\2"+
		"\u01d9\u01d7\3\2\2\2\u01d9\u01d8\3\2\2\2\u01da\25\3\2\2\2\u01db\u01dc"+
		"\5\u008eH\2\u01dc\u01dd\7\f\2\2\u01dd\u01e3\3\2\2\2\u01de\u01df\5\u0090"+
		"I\2\u01df\u01e0\7\f\2\2\u01e0\u01e3\3\2\2\2\u01e1\u01e3\5\u0092J\2\u01e2"+
		"\u01db\3\2\2\2\u01e2\u01de\3\2\2\2\u01e2\u01e1\3\2\2\2\u01e3\27\3\2\2"+
		"\2\u01e4\u01e5\7\r\2\2\u01e5\u01e6\7\5\2\2\u01e6\u01e8\5\u0166\u00b4\2"+
		"\u01e7\u01e9\5$\23\2\u01e8\u01e7\3\2\2\2\u01e8\u01e9\3\2\2\2\u01e9\u01ea"+
		"\3\2\2\2\u01ea\u01eb\7\f\2\2\u01eb\31\3\2\2\2\u01ec\u01ed\7\16\2\2\u01ed"+
		"\u01ee\5\34\17\2\u01ee\u01ef\7\f\2\2\u01ef\33\3\2\2\2\u01f0\u01f2\7\n"+
		"\2\2\u01f1\u01f0\3\2\2\2\u01f1\u01f2\3\2\2\2\u01f2\u01f3\3\2\2\2\u01f3"+
		"\u01f4\7\17\2\2\u01f4\u01f5\5\"\22\2\u01f5\u01f6\7\20\2\2\u01f6\u0206"+
		"\3\2\2\2\u01f7\u01f9\7\n\2\2\u01f8\u01f7\3\2\2\2\u01f8\u01f9\3\2\2\2\u01f9"+
		"\u01fa\3\2\2\2\u01fa\u01ff\5\u0168\u00b5\2\u01fb\u01fc\7\n\2\2\u01fc\u01fe"+
		"\5\u0168\u00b5\2\u01fd\u01fb\3\2\2\2\u01fe\u0201\3\2\2\2\u01ff\u01fd\3"+
		"\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0203\3\2\2\2\u0201\u01ff\3\2\2\2\u0202"+
		"\u0204\5\36\20\2\u0203\u0202\3\2\2\2\u0203\u0204\3\2\2\2\u0204\u0206\3"+
		"\2\2\2\u0205\u01f1\3\2\2\2\u0205\u01f8\3\2\2\2\u0206\35\3\2\2\2\u0207"+
		"\u0208\7\n\2\2\u0208\u0211\7\21\2\2\u0209\u020a\7\n\2\2\u020a\u020c\7"+
		"\17\2\2\u020b\u020d\5\"\22\2\u020c\u020b\3\2\2\2\u020c\u020d\3\2\2\2\u020d"+
		"\u020e\3\2\2\2\u020e\u0211\7\20\2\2\u020f\u0211\5$\23\2\u0210\u0207\3"+
		"\2\2\2\u0210\u0209\3\2\2\2\u0210\u020f\3\2\2\2\u0211\37\3\2\2\2\u0212"+
		"\u0214\5\u0168\u00b5\2\u0213\u0215\5$\23\2\u0214\u0213\3\2\2\2\u0214\u0215"+
		"\3\2\2\2\u0215!\3\2\2\2\u0216\u021b\5 \21\2\u0217\u0218\7\22\2\2\u0218"+
		"\u021a\5 \21\2\u0219\u0217\3\2\2\2\u021a\u021d\3\2\2\2\u021b\u0219\3\2"+
		"\2\2\u021b\u021c\3\2\2\2\u021c\u021f\3\2\2\2\u021d\u021b\3\2\2\2\u021e"+
		"\u0220\7\22\2\2\u021f\u021e\3\2\2\2\u021f\u0220\3\2\2\2\u0220#\3\2\2\2"+
		"\u0221\u0222\7\23\2\2\u0222\u0223\5\u0166\u00b4\2\u0223%\3\2\2\2\u0224"+
		"\u0225\7\24\2\2\u0225\u0226\5\u0166\u00b4\2\u0226\u0227\7\f\2\2\u0227"+
		"\'\3\2\2\2\u0228\u0229\7\24\2\2\u0229\u022a\5\u0166\u00b4\2\u022a\u022b"+
		"\7\17\2\2\u022b\u022c\5\4\3\2\u022c\u022d\7\20\2\2\u022d)\3\2\2\2\u022e"+
		"\u022f\5\u00c6d\2\u022f\u0233\7\17\2\2\u0230\u0232\5\u0088E\2\u0231\u0230"+
		"\3\2\2\2\u0232\u0235\3\2\2\2\u0233\u0231\3\2\2\2\u0233\u0234\3\2\2\2\u0234"+
		"\u0239\3\2\2\2\u0235\u0233\3\2\2\2\u0236\u0238\5,\27\2\u0237\u0236\3\2"+
		"\2\2\u0238\u023b\3\2\2\2\u0239\u0237\3\2\2\2\u0239\u023a\3\2\2\2\u023a"+
		"\u023c\3\2\2\2\u023b\u0239\3\2\2\2\u023c\u023d\7\20\2\2\u023d+\3\2\2\2"+
		"\u023e\u0240\5\u0086D\2\u023f\u023e\3\2\2\2\u0240\u0243\3\2\2\2\u0241"+
		"\u023f\3\2\2\2\u0241\u0242\3\2\2\2\u0242\u0245\3\2\2\2\u0243\u0241\3\2"+
		"\2\2\u0244\u0246\5\6\4\2\u0245\u0244\3\2\2\2\u0245\u0246\3\2\2\2\u0246"+
		"\u0247\3\2\2\2\u0247\u0250\5.\30\2\u0248\u024a\5\u0086D\2\u0249\u0248"+
		"\3\2\2\2\u024a\u024d\3\2\2\2\u024b\u0249\3\2\2\2\u024b\u024c\3\2\2\2\u024c"+
		"\u024e\3\2\2\2\u024d\u024b\3\2\2\2\u024e\u0250\5\16\b\2\u024f\u0241\3"+
		"\2\2\2\u024f\u024b\3\2\2\2\u0250-\3\2\2\2\u0251\u0253\7\25\2\2\u0252\u0254"+
		"\7\26\2\2\u0253\u0252\3\2\2\2\u0253\u0254\3\2\2\2\u0254\u0255\3\2\2\2"+
		"\u0255\u0256\5\u0166\u00b4\2\u0256\u0257\7\27\2\2\u0257\u0258\5\u00cc"+
		"g\2\u0258\u0259\7\f\2\2\u0259\u0260\3\2\2\2\u025a\u025b\7\30\2\2\u025b"+
		"\u025c\5\u0166\u00b4\2\u025c\u025d\7\f\2\2\u025d\u0260\3\2\2\2\u025e\u0260"+
		"\5:\36\2\u025f\u0251\3\2\2\2\u025f\u025a\3\2\2\2\u025f\u025e\3\2\2\2\u0260"+
		"/\3\2\2\2\u0261\u0263\7\25\2\2\u0262\u0264\7\26\2\2\u0263\u0262\3\2\2"+
		"\2\u0263\u0264\3\2\2\2\u0264\u0265\3\2\2\2\u0265\u0266\5\u0166\u00b4\2"+
		"\u0266\u0267\7\27\2\2\u0267\u0268\5\u00ccg\2\u0268\u0269\7\31\2\2\u0269"+
		"\u026a\5\u00f4{\2\u026a\u026b\7\f\2\2\u026b\61\3\2\2\2\u026c\u026d\7\32"+
		"\2\2\u026d\u026e\5\u0166\u00b4\2\u026e\u026f\7\27\2\2\u026f\u0270\5\u00cc"+
		"g\2\u0270\u0271\7\31\2\2\u0271\u0272\5\u00f4{\2\u0272\u0273\7\f\2\2\u0273"+
		"\63\3\2\2\2\u0274\u0275\5<\37\2\u0275\u0277\7\4\2\2\u0276\u0278\5B\"\2"+
		"\u0277\u0276\3\2\2\2\u0277\u0278\3\2\2\2\u0278\u0279\3\2\2\2\u0279\u027b"+
		"\7\6\2\2\u027a\u027c\5T+\2\u027b\u027a\3\2\2\2\u027b\u027c\3\2\2\2\u027c"+
		"\u027e\3\2\2\2\u027d\u027f\5\u00b6\\\2\u027e\u027d\3\2\2\2\u027e\u027f"+
		"\3\2\2\2\u027f\u0280\3\2\2\2\u0280\u0281\5\u00fc\177\2\u0281\65\3\2\2"+
		"\2\u0282\u0283\5<\37\2\u0283\u0285\7\4\2\2\u0284\u0286\5J&\2\u0285\u0284"+
		"\3\2\2\2\u0285\u0286\3\2\2\2\u0286\u0287\3\2\2\2\u0287\u0289\7\6\2\2\u0288"+
		"\u028a\5T+\2\u0289\u0288\3\2\2\2\u0289\u028a\3\2\2\2\u028a\u028c\3\2\2"+
		"\2\u028b\u028d\5\u00b6\\\2\u028c\u028b\3\2\2\2\u028c\u028d\3\2\2\2\u028d"+
		"\u028e\3\2\2\2\u028e\u028f\5\u00fc\177\2\u028f\67\3\2\2\2\u0290\u0291"+
		"\5<\37\2\u0291\u0293\7\4\2\2\u0292\u0294\5P)\2\u0293\u0292\3\2\2\2\u0293"+
		"\u0294\3\2\2\2\u0294\u0295\3\2\2\2\u0295\u0297\7\6\2\2\u0296\u0298\5R"+
		"*\2\u0297\u0296\3\2\2\2\u0297\u0298\3\2\2\2\u0298\u029a\3\2\2\2\u0299"+
		"\u029b\5\u00b6\\\2\u029a\u0299\3\2\2\2\u029a\u029b\3\2\2\2\u029b\u029e"+
		"\3\2\2\2\u029c\u029f\5\u00fc\177\2\u029d\u029f\7\f\2\2\u029e\u029c\3\2"+
		"\2\2\u029e\u029d\3\2\2\2\u029f9\3\2\2\2\u02a0\u02a1\5<\37\2\u02a1\u02a3"+
		"\7\4\2\2\u02a2\u02a4\5D#\2\u02a3\u02a2\3\2\2\2\u02a3\u02a4\3\2\2\2\u02a4"+
		"\u02a5\3\2\2\2\u02a5\u02a7\7\6\2\2\u02a6\u02a8\5R*\2\u02a7\u02a6\3\2\2"+
		"\2\u02a7\u02a8\3\2\2\2\u02a8\u02aa\3\2\2\2\u02a9\u02ab\5\u00b6\\\2\u02aa"+
		"\u02a9\3\2\2\2\u02aa\u02ab\3\2\2\2\u02ab\u02ac\3\2\2\2\u02ac\u02ad\7\f"+
		"\2\2\u02ad;\3\2\2\2\u02ae\u02b0\7\32\2\2\u02af\u02ae\3\2\2\2\u02af\u02b0"+
		"\3\2\2\2\u02b0\u02b2\3\2\2\2\u02b1\u02b3\7\33\2\2\u02b2\u02b1\3\2\2\2"+
		"\u02b2\u02b3\3\2\2\2\u02b3\u02b5\3\2\2\2\u02b4\u02b6\5\u00c6d\2\u02b5"+
		"\u02b4\3\2\2\2\u02b5\u02b6\3\2\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b8\7\34"+
		"\2\2\u02b8\u02ba\5\u0166\u00b4\2\u02b9\u02bb\5\u00d4k\2\u02ba\u02b9\3"+
		"\2\2\2\u02ba\u02bb\3\2\2\2\u02bb=\3\2\2\2\u02bc\u02bd\5\u00dep\2\u02bd"+
		"\u02be\7\27\2\2\u02be\u02bf\5@!\2\u02bf?\3\2\2\2\u02c0\u02c4\5\u00ccg"+
		"\2\u02c1\u02c2\7\35\2\2\u02c2\u02c4\5\u00be`\2\u02c3\u02c0\3\2\2\2\u02c3"+
		"\u02c1\3\2\2\2\u02c4A\3\2\2\2\u02c5\u02ca\5> \2\u02c6\u02c7\7\22\2\2\u02c7"+
		"\u02c9\5> \2\u02c8\u02c6\3\2\2\2\u02c9\u02cc\3\2\2\2\u02ca\u02c8\3\2\2"+
		"\2\u02ca\u02cb\3\2\2\2\u02cb\u02ce\3\2\2\2\u02cc\u02ca\3\2\2\2\u02cd\u02cf"+
		"\7\22\2\2\u02ce\u02cd\3\2\2\2\u02ce\u02cf\3\2\2\2\u02cfC\3\2\2\2\u02d0"+
		"\u02d5\5> \2\u02d1\u02d2\7\22\2\2\u02d2\u02d4\5> \2\u02d3\u02d1\3\2\2"+
		"\2\u02d4\u02d7\3\2\2\2\u02d5\u02d3\3\2\2\2\u02d5\u02d6\3\2\2\2\u02d6\u02da"+
		"\3\2\2\2\u02d7\u02d5\3\2\2\2\u02d8\u02d9\7\22\2\2\u02d9\u02db\7\36\2\2"+
		"\u02da\u02d8\3\2\2\2\u02da\u02db\3\2\2\2\u02db\u02dd\3\2\2\2\u02dc\u02de"+
		"\7\22\2\2\u02dd\u02dc\3\2\2\2\u02dd\u02de\3\2\2\2\u02deE\3\2\2\2\u02df"+
		"\u02e4\5L\'\2\u02e0\u02e1\7\22\2\2\u02e1\u02e3\5L\'\2\u02e2\u02e0\3\2"+
		"\2\2\u02e3\u02e6\3\2\2\2\u02e4\u02e2\3\2\2\2\u02e4\u02e5\3\2\2\2\u02e5"+
		"\u02e9\3\2\2\2\u02e6\u02e4\3\2\2\2\u02e7\u02e8\7\22\2\2\u02e8\u02ea\7"+
		"\36\2\2\u02e9\u02e7\3\2\2\2\u02e9\u02ea\3\2\2\2\u02ea\u02ec\3\2\2\2\u02eb"+
		"\u02ed\7\22\2\2\u02ec\u02eb\3\2\2\2\u02ec\u02ed\3\2\2\2\u02edG\3\2\2\2"+
		"\u02ee\u02f0\7\26\2\2\u02ef\u02ee\3\2\2\2\u02ef\u02f0\3\2\2\2\u02f0\u02f1"+
		"\3\2\2\2\u02f1\u02f4\7\13\2\2\u02f2\u02f3\7\27\2\2\u02f3\u02f5\5\u00cc"+
		"g\2\u02f4\u02f2\3\2\2\2\u02f4\u02f5\3\2\2\2\u02f5\u02ff\3\2\2\2\u02f6"+
		"\u02f8\7\37\2\2\u02f7\u02f9\7X\2\2\u02f8\u02f7\3\2\2\2\u02f8\u02f9\3\2"+
		"\2\2\u02f9\u02fb\3\2\2\2\u02fa\u02fc\7\26\2\2\u02fb\u02fa\3\2\2\2\u02fb"+
		"\u02fc\3\2\2\2\u02fc\u02fd\3\2\2\2\u02fd\u02ff\7\13\2\2\u02fe\u02ef\3"+
		"\2\2\2\u02fe\u02f6\3\2\2\2\u02ffI\3\2\2\2\u0300\u0303\5> \2\u0301\u0303"+
		"\5H%\2\u0302\u0300\3\2\2\2\u0302\u0301\3\2\2\2\u0303\u0308\3\2\2\2\u0304"+
		"\u0305\7\22\2\2\u0305\u0307\5> \2\u0306\u0304\3\2\2\2\u0307\u030a\3\2"+
		"\2\2\u0308\u0306\3\2\2\2\u0308\u0309\3\2\2\2\u0309\u030c\3\2\2\2\u030a"+
		"\u0308\3\2\2\2\u030b\u030d\7\22\2\2\u030c\u030b\3\2\2\2\u030c\u030d\3"+
		"\2\2\2\u030dK\3\2\2\2\u030e\u030f\5N(\2\u030f\u0310\7\27\2\2\u0310\u0311"+
		"\5\u00ccg\2\u0311\u0314\3\2\2\2\u0312\u0314\5\u00ccg\2\u0313\u030e\3\2"+
		"\2\2\u0313\u0312\3\2\2\2\u0314M\3\2\2\2\u0315\u0317\t\2\2\2\u0316\u0315"+
		"\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u031a\3\2\2\2\u0318\u031b\7!\2\2\u0319"+
		"\u031b\5\u0166\u00b4\2\u031a\u0318\3\2\2\2\u031a\u0319\3\2\2\2\u031bO"+
		"\3\2\2\2\u031c\u031f\5L\'\2\u031d\u031f\5H%\2\u031e\u031c\3\2\2\2\u031e"+
		"\u031d\3\2\2\2\u031f\u0324\3\2\2\2\u0320\u0321\7\22\2\2\u0321\u0323\5"+
		"L\'\2\u0322\u0320\3\2\2\2\u0323\u0326\3\2\2\2\u0324\u0322\3\2\2\2\u0324"+
		"\u0325\3\2\2\2\u0325\u0328\3\2\2\2\u0326\u0324\3\2\2\2\u0327\u0329\7\22"+
		"\2\2\u0328\u0327\3\2\2\2\u0328\u0329\3\2\2\2\u0329Q\3\2\2\2\u032a\u032d"+
		"\7\"\2\2\u032b\u032e\5\u00c2b\2\u032c\u032e\7\t\2\2\u032d\u032b\3\2\2"+
		"\2\u032d\u032c\3\2\2\2\u032eS\3\2\2\2\u032f\u0334\7\"\2\2\u0330\u0335"+
		"\5\u00c2b\2\u0331\u0335\7\t\2\2\u0332\u0333\7\35\2\2\u0333\u0335\5\u00be"+
		"`\2\u0334\u0330\3\2\2\2\u0334\u0331\3\2\2\2\u0334\u0332\3\2\2\2\u0335"+
		"U\3\2\2\2\u0336\u0337\7\30\2\2\u0337\u0339\5\u0166\u00b4\2\u0338\u033a"+
		"\5\u00d4k\2\u0339\u0338\3\2\2\2\u0339\u033a\3\2\2\2\u033a\u033c\3\2\2"+
		"\2\u033b\u033d\5\u00b6\\\2\u033c\u033b\3\2\2\2\u033c\u033d\3\2\2\2\u033d"+
		"\u033e\3\2\2\2\u033e\u033f\7\31\2\2\u033f\u0340\5\u00ccg\2\u0340\u0341"+
		"\7\f\2\2\u0341W\3\2\2\2\u0342\u0343\7#\2\2\u0343\u0345\5\u0166\u00b4\2"+
		"\u0344\u0346\5\u00d4k\2\u0345\u0344\3\2\2\2\u0345\u0346\3\2\2\2\u0346"+
		"\u0347\3\2\2\2\u0347\u0348\5Z.\2\u0348Y\3\2\2\2\u0349\u034b\5\u00b6\\"+
		"\2\u034a\u0349\3\2\2\2\u034a\u034b\3\2\2\2\u034b\u034c\3\2\2\2\u034c\u035f"+
		"\7\f\2\2\u034d\u034f\7\4\2\2\u034e\u0350\5^\60\2\u034f\u034e\3\2\2\2\u034f"+
		"\u0350\3\2\2\2\u0350\u0351\3\2\2\2\u0351\u0353\7\6\2\2\u0352\u0354\5\u00b6"+
		"\\\2\u0353\u0352\3\2\2\2\u0353\u0354\3\2\2\2\u0354\u0355\3\2\2\2\u0355"+
		"\u035f\7\f\2\2\u0356\u0358\5\u00b6\\\2\u0357\u0356\3\2\2\2\u0357\u0358"+
		"\3\2\2\2\u0358\u0359\3\2\2\2\u0359\u035b\7\17\2\2\u035a\u035c\5b\62\2"+
		"\u035b\u035a\3\2\2\2\u035b\u035c\3\2\2\2\u035c\u035d\3\2\2\2\u035d\u035f"+
		"\7\20\2\2\u035e\u034a\3\2\2\2\u035e\u034d\3\2\2\2\u035e\u0357\3\2\2\2"+
		"\u035f[\3\2\2\2\u0360\u0362\5\u0086D\2\u0361\u0360\3\2\2\2\u0362\u0365"+
		"\3\2\2\2\u0363\u0361\3\2\2\2\u0363\u0364\3\2\2\2\u0364\u0367\3\2\2\2\u0365"+
		"\u0363\3\2\2\2\u0366\u0368\5\6\4\2\u0367\u0366\3\2\2\2\u0367\u0368\3\2"+
		"\2\2\u0368\u0369\3\2\2\2\u0369\u036a\5\u00ccg\2\u036a]\3\2\2\2\u036b\u0370"+
		"\5\\/\2\u036c\u036d\7\22\2\2\u036d\u036f\5\\/\2\u036e\u036c\3\2\2\2\u036f"+
		"\u0372\3\2\2\2\u0370\u036e\3\2\2\2\u0370\u0371\3\2\2\2\u0371\u0374\3\2"+
		"\2\2\u0372\u0370\3\2\2\2\u0373\u0375\7\22\2\2\u0374\u0373\3\2\2\2\u0374"+
		"\u0375\3\2\2\2\u0375_\3\2\2\2\u0376\u0378\5\u0086D\2\u0377\u0376\3\2\2"+
		"\2\u0378\u037b\3\2\2\2\u0379\u0377\3\2\2\2\u0379\u037a\3\2\2\2\u037a\u037d"+
		"\3\2\2\2\u037b\u0379\3\2\2\2\u037c\u037e\5\6\4\2\u037d\u037c\3\2\2\2\u037d"+
		"\u037e\3\2\2\2\u037e\u037f\3\2\2\2\u037f\u0380\5\u0166\u00b4\2\u0380\u0381"+
		"\7\27\2\2\u0381\u0382\5\u00ccg\2\u0382a\3\2\2\2\u0383\u0388\5`\61\2\u0384"+
		"\u0385\7\22\2\2\u0385\u0387\5`\61\2\u0386\u0384\3\2\2\2\u0387\u038a\3"+
		"\2\2\2\u0388\u0386\3\2\2\2\u0388\u0389\3\2\2\2\u0389\u038c\3\2\2\2\u038a"+
		"\u0388\3\2\2\2\u038b\u038d\7\22\2\2\u038c\u038b\3\2\2\2\u038c\u038d\3"+
		"\2\2\2\u038dc\3\2\2\2\u038e\u038f\7$\2\2\u038f\u0391\5\u0166\u00b4\2\u0390"+
		"\u0392\5\u00d4k\2\u0391\u0390\3\2\2\2\u0391\u0392\3\2\2\2\u0392\u0394"+
		"\3\2\2\2\u0393\u0395\5\u00b6\\\2\u0394\u0393\3\2\2\2\u0394\u0395\3\2\2"+
		"\2\u0395\u0396\3\2\2\2\u0396\u0398\7\17\2\2\u0397\u0399\5h\65\2\u0398"+
		"\u0397\3\2\2\2\u0398\u0399\3\2\2\2\u0399\u039a\3\2\2\2\u039a\u039b\7\20"+
		"\2\2\u039be\3\2\2\2\u039c\u039e\5\u0086D\2\u039d\u039c\3\2\2\2\u039e\u03a1"+
		"\3\2\2\2\u039f\u039d\3\2\2\2\u039f\u03a0\3\2\2\2\u03a0\u03a2\3\2\2\2\u03a1"+
		"\u039f\3\2\2\2\u03a2\u03a3\5j\66\2\u03a3g\3\2\2\2\u03a4\u03a9\5f\64\2"+
		"\u03a5\u03a6\7\22\2\2\u03a6\u03a8\5f\64\2\u03a7\u03a5\3\2\2\2\u03a8\u03ab"+
		"\3\2\2\2\u03a9\u03a7\3\2\2\2\u03a9\u03aa\3\2\2\2\u03aa\u03ad\3\2\2\2\u03ab"+
		"\u03a9\3\2\2\2\u03ac\u03ae\7\22\2\2\u03ad\u03ac\3\2\2\2\u03ad\u03ae\3"+
		"\2\2\2\u03aei\3\2\2\2\u03af\u03b0\5\u0166\u00b4\2\u03b0\u03b2\7\4\2\2"+
		"\u03b1\u03b3\5n8\2\u03b2\u03b1\3\2\2\2\u03b2\u03b3\3\2\2\2\u03b3\u03b4"+
		"\3\2\2\2\u03b4\u03b5\7\6\2\2\u03b5\u03c3\3\2\2\2\u03b6\u03b7\5\u0166\u00b4"+
		"\2\u03b7\u03b9\7\17\2\2\u03b8\u03ba\5r:\2\u03b9\u03b8\3\2\2\2\u03b9\u03ba"+
		"\3\2\2\2\u03ba\u03bb\3\2\2\2\u03bb\u03bc\7\20\2\2\u03bc\u03c3\3\2\2\2"+
		"\u03bd\u03be\5\u0166\u00b4\2\u03be\u03bf\7\31\2\2\u03bf\u03c0\5\u00f4"+
		"{\2\u03c0\u03c3\3\2\2\2\u03c1\u03c3\5\u0166\u00b4\2\u03c2\u03af\3\2\2"+
		"\2\u03c2\u03b6\3\2\2\2\u03c2\u03bd\3\2\2\2\u03c2\u03c1\3\2\2\2\u03c3k"+
		"\3\2\2\2\u03c4\u03c6\5\u0086D\2\u03c5\u03c4\3\2\2\2\u03c6\u03c9\3\2\2"+
		"\2\u03c7\u03c5\3\2\2\2\u03c7\u03c8\3\2\2\2\u03c8\u03ca\3\2\2\2\u03c9\u03c7"+
		"\3\2\2\2\u03ca\u03cb\5\u00ccg\2\u03cbm\3\2\2\2\u03cc\u03d1\5l\67\2\u03cd"+
		"\u03ce\7\22\2\2\u03ce\u03d0\5l\67\2\u03cf\u03cd\3\2\2\2\u03d0\u03d3\3"+
		"\2\2\2\u03d1\u03cf\3\2\2\2\u03d1\u03d2\3\2\2\2\u03d2\u03d5\3\2\2\2\u03d3"+
		"\u03d1\3\2\2\2\u03d4\u03d6\7\22\2\2\u03d5\u03d4\3\2\2\2\u03d5\u03d6\3"+
		"\2\2\2\u03d6o\3\2\2\2\u03d7\u03d8\5\u0166\u00b4\2\u03d8\u03d9\7\27\2\2"+
		"\u03d9\u03da\5\u00ccg\2\u03daq\3\2\2\2\u03db\u03e0\5p9\2\u03dc\u03dd\7"+
		"\22\2\2\u03dd\u03df\5p9\2\u03de\u03dc\3\2\2\2\u03df\u03e2\3\2\2\2\u03e0"+
		"\u03de\3\2\2\2\u03e0\u03e1\3\2\2\2\u03e1\u03e4\3\2\2\2\u03e2\u03e0\3\2"+
		"\2\2\u03e3\u03e5\7\22\2\2\u03e4\u03e3\3\2\2\2\u03e4\u03e5\3\2\2\2\u03e5"+
		"s\3\2\2\2\u03e6\u03e7\7%\2\2\u03e7\u03e8\5\u0166\u00b4\2\u03e8\u03e9\7"+
		"\17\2\2\u03e9\u03ea\5b\62\2\u03ea\u03eb\7\20\2\2\u03ebu\3\2\2\2\u03ec"+
		"\u03ee\7\33\2\2\u03ed\u03ec\3\2\2\2\u03ed\u03ee\3\2\2\2\u03ee\u03f0\3"+
		"\2\2\2\u03ef\u03f1\7&\2\2\u03f0\u03ef\3\2\2\2\u03f0\u03f1\3\2\2\2\u03f1"+
		"\u03f2\3\2\2\2\u03f2\u03f3\7\'\2\2\u03f3\u03f5\5\u0166\u00b4\2\u03f4\u03f6"+
		"\5\u00d4k\2\u03f5\u03f4\3\2\2\2\u03f5\u03f6\3\2\2\2\u03f6\u03f8\3\2\2"+
		"\2\u03f7\u03f9\5\u00bc_\2\u03f8\u03f7\3\2\2\2\u03f8\u03f9\3\2\2\2\u03f9"+
		"\u03fb\3\2\2\2\u03fa\u03fc\5\u00b6\\\2\u03fb\u03fa\3\2\2\2\u03fb\u03fc"+
		"\3\2\2\2\u03fc\u03fd\3\2\2\2\u03fd\u0401\7\17\2\2\u03fe\u0400\5x=\2\u03ff"+
		"\u03fe\3\2\2\2\u0400\u0403\3\2\2\2\u0401\u03ff\3\2\2\2\u0401\u0402\3\2"+
		"\2\2\u0402\u0404\3\2\2\2\u0403\u0401\3\2\2\2\u0404\u0405\7\20\2\2\u0405"+
		"w\3\2\2\2\u0406\u0408\5\u0086D\2\u0407\u0406\3\2\2\2\u0408\u040b\3\2\2"+
		"\2\u0409\u0407\3\2\2\2\u0409\u040a\3\2\2\2\u040a\u040c\3\2\2\2\u040b\u0409"+
		"\3\2\2\2\u040c\u040d\7\30\2\2\u040d\u040f\5\u0166\u00b4\2\u040e\u0410"+
		"\5\u00bc_\2\u040f\u040e\3\2\2\2\u040f\u0410\3\2\2\2\u0410\u0412\3\2\2"+
		"\2\u0411\u0413\5z>\2\u0412\u0411\3\2\2\2\u0412\u0413\3\2\2\2\u0413\u0414"+
		"\3\2\2\2\u0414\u0415\7\f\2\2\u0415\u0437\3\2\2\2\u0416\u0418\5\u0086D"+
		"\2\u0417\u0416\3\2\2\2\u0418\u041b\3\2\2\2\u0419\u0417\3\2\2\2\u0419\u041a"+
		"\3\2\2\2\u041a\u041c\3\2\2\2\u041b\u0419\3\2\2\2\u041c\u041d\7\32\2\2"+
		"\u041d\u041e\5\u0166\u00b4\2\u041e\u041f\7\27\2\2\u041f\u0421\5\u00cc"+
		"g\2\u0420\u0422\5|?\2\u0421\u0420\3\2\2\2\u0421\u0422\3\2\2\2\u0422\u0423"+
		"\3\2\2\2\u0423\u0424\7\f\2\2\u0424\u0437\3\2\2\2\u0425\u0427\5\u0086D"+
		"\2\u0426\u0425\3\2\2\2\u0427\u042a\3\2\2\2\u0428\u0426\3\2\2\2\u0428\u0429"+
		"\3\2\2\2\u0429\u042b\3\2\2\2\u042a\u0428\3\2\2\2\u042b\u0437\58\35\2\u042c"+
		"\u042e\5\u0086D\2\u042d\u042c\3\2\2\2\u042e\u0431\3\2\2\2\u042f\u042d"+
		"\3\2\2\2\u042f\u0430\3\2\2\2\u0430\u0432\3\2\2\2\u0431\u042f\3\2\2\2\u0432"+
		"\u0433\5\20\t\2\u0433\u0434\7\t\2\2\u0434\u0435\5\26\f\2\u0435\u0437\3"+
		"\2\2\2\u0436\u0409\3\2\2\2\u0436\u0419\3\2\2\2\u0436\u0428\3\2\2\2\u0436"+
		"\u042f\3\2\2\2\u0437y\3\2\2\2\u0438\u0439\7\31\2\2\u0439\u043a\5\u00cc"+
		"g\2\u043a{\3\2\2\2\u043b\u043c\7\31\2\2\u043c\u043d\5\u00f4{\2\u043d}"+
		"\3\2\2\2\u043e\u0440\7\33\2\2\u043f\u043e\3\2\2\2\u043f\u0440\3\2\2\2"+
		"\u0440\u0441\3\2\2\2\u0441\u0443\7\35\2\2\u0442\u0444\5\u00d4k\2\u0443"+
		"\u0442\3\2\2\2\u0443\u0444\3\2\2\2\u0444\u0445\3\2\2\2\u0445\u0447\5\u0080"+
		"A\2\u0446\u0448\5\u00b6\\\2\u0447\u0446\3\2\2\2\u0447\u0448\3\2\2\2\u0448"+
		"\u0449\3\2\2\2\u0449\u044d\7\17\2\2\u044a\u044c\5\u0082B\2\u044b\u044a"+
		"\3\2\2\2\u044c\u044f\3\2\2\2\u044d\u044b\3\2\2\2\u044d\u044e\3\2\2\2\u044e"+
		"\u0450\3\2\2\2\u044f\u044d\3\2\2\2\u0450\u0451\7\20\2\2\u0451\177\3\2"+
		"\2\2\u0452\u0453\7\t\2\2\u0453\u0454\5\u00ccg\2\u0454\u0455\7(\2\2\u0455"+
		"\u0456\5\u00ccg\2\u0456\u0461\3\2\2\2\u0457\u0458\5\u00ccg\2\u0458\u0459"+
		"\7(\2\2\u0459\u045a\5\u00ccg\2\u045a\u0461\3\2\2\2\u045b\u045c\5\u00cc"+
		"g\2\u045c\u045d\7(\2\2\u045d\u045e\7)\2\2\u045e\u0461\3\2\2\2\u045f\u0461"+
		"\5\u00ccg\2\u0460\u0452\3\2\2\2\u0460\u0457\3\2\2\2\u0460\u045b\3\2\2"+
		"\2\u0460\u045f\3\2\2\2\u0461\u0081\3\2\2\2\u0462\u0464\5\u0086D\2\u0463"+
		"\u0462\3\2\2\2\u0464\u0467\3\2\2\2\u0465\u0463\3\2\2\2\u0465\u0466\3\2"+
		"\2\2\u0466\u0469\3\2\2\2\u0467\u0465\3\2\2\2\u0468\u046a\5\6\4\2\u0469"+
		"\u0468\3\2\2\2\u0469\u046a\3\2\2\2\u046a\u046b\3\2\2\2\u046b\u046c\5\u0084"+
		"C\2\u046c\u0083\3\2\2\2\u046d\u046f\7*\2\2\u046e\u046d\3\2\2\2\u046e\u046f"+
		"\3\2\2\2\u046f\u0470\3\2\2\2\u0470\u047d\5\66\34\2\u0471\u0472\7\30\2"+
		"\2\u0472\u0473\5\u0166\u00b4\2\u0473\u0474\7\31\2\2\u0474\u0475\5\u00cc"+
		"g\2\u0475\u0476\7\f\2\2\u0476\u047d\3\2\2\2\u0477\u047d\5\62\32\2\u0478"+
		"\u0479\5\20\t\2\u0479\u047a\7\t\2\2\u047a\u047b\5\26\f\2\u047b\u047d\3"+
		"\2\2\2\u047c\u046e\3\2\2\2\u047c\u0471\3\2\2\2\u047c\u0477\3\2\2\2\u047c"+
		"\u0478\3\2\2\2\u047d\u0085\3\2\2\2\u047e\u047f\7+\2\2\u047f\u0483\7,\2"+
		"\2\u0480\u0482\5\u008aF\2\u0481\u0480\3\2\2\2\u0482\u0485\3\2\2\2\u0483"+
		"\u0481\3\2\2\2\u0483\u0484\3\2\2\2\u0484\u0486\3\2\2\2\u0485\u0483\3\2"+
		"\2\2\u0486\u0487\7-\2\2\u0487\u0087\3\2\2\2\u0488\u0489\7+\2\2\u0489\u048a"+
		"\7\t\2\2\u048a\u048e\7,\2\2\u048b\u048d\5\u008aF\2\u048c\u048b\3\2\2\2"+
		"\u048d\u0490\3\2\2\2\u048e\u048c\3\2\2\2\u048e\u048f\3\2\2\2\u048f\u0491"+
		"\3\2\2\2\u0490\u048e\3\2\2\2\u0491\u0492\7-\2\2\u0492\u0089\3\2\2\2\u0493"+
		"\u0496\n\3\2\2\u0494\u0496\5\u008cG\2\u0495\u0493\3\2\2\2\u0495\u0494"+
		"\3\2\2\2\u0496\u008b\3\2\2\2\u0497\u049b\5\u008eH\2\u0498\u049b\5\u0090"+
		"I\2\u0499\u049b\5\u0092J\2\u049a\u0497\3\2\2\2\u049a\u0498\3\2\2\2\u049a"+
		"\u0499\3\2\2\2\u049b\u008d\3\2\2\2\u049c\u04a0\7\4\2\2\u049d\u049f\5\u008a"+
		"F\2\u049e\u049d\3\2\2\2\u049f\u04a2\3\2\2\2\u04a0\u049e\3\2\2\2\u04a0"+
		"\u04a1\3\2\2\2\u04a1\u04a3\3\2\2\2\u04a2\u04a0\3\2\2\2\u04a3\u04a4\7\6"+
		"\2\2\u04a4\u008f\3\2\2\2\u04a5\u04a9\7,\2\2\u04a6\u04a8\5\u008aF\2\u04a7"+
		"\u04a6\3\2\2\2\u04a8\u04ab\3\2\2\2\u04a9\u04a7\3\2\2\2\u04a9\u04aa\3\2"+
		"\2\2\u04aa\u04ac\3\2\2\2\u04ab\u04a9\3\2\2\2\u04ac\u04ad\7-\2\2\u04ad"+
		"\u0091\3\2\2\2\u04ae\u04b2\7\17\2\2\u04af\u04b1\5\u008aF\2\u04b0\u04af"+
		"\3\2\2\2\u04b1\u04b4\3\2\2\2\u04b2\u04b0\3\2\2\2\u04b2\u04b3\3\2\2\2\u04b3"+
		"\u04b5\3\2\2\2\u04b4\u04b2\3\2\2\2\u04b5\u04b6\7\20\2\2\u04b6\u0093\3"+
		"\2\2\2\u04b7\u04b8\7\t\2\2\u04b8\u04b9\5\u008cG\2\u04b9\u0095\3\2\2\2"+
		"\u04ba\u04c1\5\u009eP\2\u04bb\u04bd\5\u0098M\2\u04bc\u04bb\3\2\2\2\u04bc"+
		"\u04bd\3\2\2\2\u04bd\u04be\3\2\2\2\u04be\u04bf\7\n\2\2\u04bf\u04c1\5\u009e"+
		"P\2\u04c0\u04ba\3\2\2\2\u04c0\u04bc\3\2\2\2\u04c1\u0097\3\2\2\2\u04c2"+
		"\u04c3\bM\1\2\u04c3\u04cf\7\13\2\2\u04c4\u04c5\7.\2\2\u04c5\u04c7\5\u00cc"+
		"g\2\u04c6\u04c8\5\u009aN\2\u04c7\u04c6\3\2\2\2\u04c7\u04c8\3\2\2\2\u04c8"+
		"\u04c9\3\2\2\2\u04c9\u04ca\7/\2\2\u04ca\u04cf\3\2\2\2\u04cb\u04cf\5\u009c"+
		"O\2\u04cc\u04cd\7\n\2\2\u04cd\u04cf\5\u009cO\2\u04ce\u04c2\3\2\2\2\u04ce"+
		"\u04c4\3\2\2\2\u04ce\u04cb\3\2\2\2\u04ce\u04cc\3\2\2\2\u04cf\u04d5\3\2"+
		"\2\2\u04d0\u04d1\f\3\2\2\u04d1\u04d2\7\n\2\2\u04d2\u04d4\5\u009cO\2\u04d3"+
		"\u04d0\3\2\2\2\u04d4\u04d7\3\2\2\2\u04d5\u04d3\3\2\2\2\u04d5\u04d6\3\2"+
		"\2\2\u04d6\u0099\3\2\2\2\u04d7\u04d5\3\2\2\2\u04d8\u04d9\7\23\2\2\u04d9"+
		"\u04da\5\u00ccg\2\u04da\u009b\3\2\2\2\u04db\u04de\5\u009eP\2\u04dc\u04de"+
		"\7\7\2\2\u04dd\u04db\3\2\2\2\u04dd\u04dc\3\2\2\2\u04de\u009d\3\2\2\2\u04df"+
		"\u04e2\5\u00a0Q\2\u04e0\u04e1\7\n\2\2\u04e1\u04e3\5\u00c8e\2\u04e2\u04e0"+
		"\3\2\2\2\u04e2\u04e3\3\2\2\2\u04e3\u009f\3\2\2\2\u04e4\u04e7\5\u0166\u00b4"+
		"\2\u04e5\u04e7\7\60\2\2\u04e6\u04e4\3\2\2\2\u04e6\u04e5\3\2\2\2\u04e7"+
		"\u00a1\3\2\2\2\u04e8\u04ea\5\u00a4S\2\u04e9\u04e8\3\2\2\2\u04e9\u04ea"+
		"\3\2\2\2\u04ea\u04eb\3\2\2\2\u04eb\u04ec\5\u00acW\2\u04ec\u00a3\3\2\2"+
		"\2\u04ed\u04ee\7(\2\2\u04ee\u04f0\7.\2\2\u04ef\u04f1\5\u00a6T\2\u04f0"+
		"\u04ef\3\2\2\2\u04f0\u04f1\3\2\2\2\u04f1\u04f2\3\2\2\2\u04f2\u04f3\7/"+
		"\2\2\u04f3\u00a5\3\2\2\2\u04f4\u04f9\5\u00a8U\2\u04f5\u04f6\7\22\2\2\u04f6"+
		"\u04f8\5\u00a8U\2\u04f7\u04f5\3\2\2\2\u04f8\u04fb\3\2\2\2\u04f9\u04f7"+
		"\3\2\2\2\u04f9\u04fa\3\2\2\2\u04fa\u04fd\3\2\2\2\u04fb\u04f9\3\2\2\2\u04fc"+
		"\u04fe\7\22\2\2\u04fd\u04fc\3\2\2\2\u04fd\u04fe\3\2\2\2\u04fe\u00a7\3"+
		"\2\2\2\u04ff\u0502\7X\2\2\u0500\u0501\7\27\2\2\u0501\u0503\5\u00aaV\2"+
		"\u0502\u0500\3\2\2\2\u0502\u0503\3\2\2\2\u0503\u00a9\3\2\2\2\u0504\u0505"+
		"\bV\1\2\u0505\u0506\7X\2\2\u0506\u050c\3\2\2\2\u0507\u0508\f\3\2\2\u0508"+
		"\u0509\7\61\2\2\u0509\u050b\7X\2\2\u050a\u0507\3\2\2\2\u050b\u050e\3\2"+
		"\2\2\u050c\u050a\3\2\2\2\u050c\u050d\3\2\2\2\u050d\u00ab\3\2\2\2\u050e"+
		"\u050c\3\2\2\2\u050f\u0516\5\u00aeX\2\u0510\u0512\5\u00b0Y\2\u0511\u0510"+
		"\3\2\2\2\u0511\u0512\3\2\2\2\u0512\u0513\3\2\2\2\u0513\u0514\7\n\2\2\u0514"+
		"\u0516\5\u00aeX\2\u0515\u050f\3\2\2\2\u0515\u0511\3\2\2\2\u0516\u00ad"+
		"\3\2\2\2\u0517\u051a\5\u0166\u00b4\2\u0518\u051a\7\60\2\2\u0519\u0517"+
		"\3\2\2\2\u0519\u0518\3\2\2\2\u051a\u051b\3\2\2\2\u051b\u051d\7\4\2\2\u051c"+
		"\u051e\5\u00ceh\2\u051d\u051c\3\2\2\2\u051d\u051e\3\2\2\2\u051e\u051f"+
		"\3\2\2\2\u051f\u0521\7\6\2\2\u0520\u0522\5R*\2\u0521\u0520\3\2\2\2\u0521"+
		"\u0522\3\2\2\2\u0522\u0525\3\2\2\2\u0523\u0525\5\u00b4[\2\u0524\u0519"+
		"\3\2\2\2\u0524\u0523\3\2\2\2\u0525\u00af\3\2\2\2\u0526\u0527\bY\1\2\u0527"+
		"\u0533\7\13\2\2\u0528\u0529\7.\2\2\u0529\u052b\5\u00ccg\2\u052a\u052c"+
		"\5\u009aN\2\u052b\u052a\3\2\2\2\u052b\u052c\3\2\2\2\u052c\u052d\3\2\2"+
		"\2\u052d\u052e\7/\2\2\u052e\u0533\3\2\2\2\u052f\u0533\5\u00b2Z\2\u0530"+
		"\u0531\7\n\2\2\u0531\u0533\5\u00b2Z\2\u0532\u0526\3\2\2\2\u0532\u0528"+
		"\3\2\2\2\u0532\u052f\3\2\2\2\u0532\u0530\3\2\2\2\u0533\u0539\3\2\2\2\u0534"+
		"\u0535\f\3\2\2\u0535\u0536\7\n\2\2\u0536\u0538\5\u00b2Z\2\u0537\u0534"+
		"\3\2\2\2\u0538\u053b\3\2\2\2\u0539\u0537\3\2\2\2\u0539\u053a\3\2\2\2\u053a"+
		"\u00b1\3\2\2\2\u053b\u0539\3\2\2\2\u053c\u053f\5\u00b4[\2\u053d\u053f"+
		"\7\7\2\2\u053e\u053c\3\2\2\2\u053e\u053d\3\2\2\2\u053f\u00b3\3\2\2\2\u0540"+
		"\u0543\5\u0166\u00b4\2\u0541\u0543\7\60\2\2\u0542\u0540\3\2\2\2\u0542"+
		"\u0541\3\2\2\2\u0543\u0545\3\2\2\2\u0544\u0546\5\u00c8e\2\u0545\u0544"+
		"\3\2\2\2\u0545\u0546\3\2\2\2\u0546\u00b5\3\2\2\2\u0547\u0548\7\62\2\2"+
		"\u0548\u0549\5\u00b8]\2\u0549\u00b7\3\2\2\2\u054a\u054f\5\u00ba^\2\u054b"+
		"\u054c\7\22\2\2\u054c\u054e\5\u00ba^\2\u054d\u054b\3\2\2\2\u054e\u0551"+
		"\3\2\2\2\u054f\u054d\3\2\2\2\u054f\u0550\3\2\2\2\u0550\u0553\3\2\2\2\u0551"+
		"\u054f\3\2\2\2\u0552\u0554\7\22\2\2\u0553\u0552\3\2\2\2\u0553\u0554\3"+
		"\2\2\2\u0554\u00b9\3\2\2\2\u0555\u0556\7X\2\2\u0556\u0557\7\27\2\2\u0557"+
		"\u055f\5\u00aaV\2\u0558\u055a\5\u00a4S\2\u0559\u0558\3\2\2\2\u0559\u055a"+
		"\3\2\2\2\u055a\u055b\3\2\2\2\u055b\u055c\5\u00c2b\2\u055c\u055d\5\u00bc"+
		"_\2\u055d\u055f\3\2\2\2\u055e\u0555\3\2\2\2\u055e\u0559\3\2\2\2\u055f"+
		"\u00bb\3\2\2\2\u0560\u0561\7\27\2\2\u0561\u0562\5\u00be`\2\u0562\u00bd"+
		"\3\2\2\2\u0563\u0564\b`\1\2\u0564\u0565\5\u00c0a\2\u0565\u056b\3\2\2\2"+
		"\u0566\u0567\f\3\2\2\u0567\u0568\7\61\2\2\u0568\u056a\5\u00c0a\2\u0569"+
		"\u0566\3\2\2\2\u056a\u056d\3\2\2\2\u056b\u0569\3\2\2\2\u056b\u056c\3\2"+
		"\2\2\u056c\u00bf\3\2\2\2\u056d\u056b\3\2\2\2\u056e\u0573\5\u00a2R\2\u056f"+
		"\u0570\7\63\2\2\u0570\u0573\5\u00a2R\2\u0571\u0573\7X\2\2\u0572\u056e"+
		"\3\2\2\2\u0572\u056f\3\2\2\2\u0572\u0571\3\2\2\2\u0573\u00c1\3\2\2\2\u0574"+
		"\u05b6\7!\2\2\u0575\u0576\7\4\2\2\u0576\u05b6\7\6\2\2\u0577\u0578\7\4"+
		"\2\2\u0578\u0579\5\u00ccg\2\u0579\u057a\7\6\2\2\u057a\u05b6\3\2\2\2\u057b"+
		"\u057c\7\4\2\2\u057c\u057d\5\u00ccg\2\u057d\u057f\7\22\2\2\u057e\u0580"+
		"\5\u00ceh\2\u057f\u057e\3\2\2\2\u057f\u0580\3\2\2\2\u0580\u0581\3\2\2"+
		"\2\u0581\u0582\7\6\2\2\u0582\u05b6\3\2\2\2\u0583\u0584\7,\2\2\u0584\u0587"+
		"\5\u00ccg\2\u0585\u0586\7\f\2\2\u0586\u0588\5\u00f4{\2\u0587\u0585\3\2"+
		"\2\2\u0587\u0588\3\2\2\2\u0588\u0589\3\2\2\2\u0589\u058a\7-\2\2\u058a"+
		"\u05b6\3\2\2\2\u058b\u058d\7\37\2\2\u058c\u058e\7X\2\2\u058d\u058c\3\2"+
		"\2\2\u058d\u058e\3\2\2\2\u058e\u0590\3\2\2\2\u058f\u0591\7\26\2\2\u0590"+
		"\u058f\3\2\2\2\u0590\u0591\3\2\2\2\u0591\u0592\3\2\2\2\u0592\u05b6\5\u00c2"+
		"b\2\u0593\u0595\7 \2\2\u0594\u0596\7X\2\2\u0595\u0594\3\2\2\2\u0595\u0596"+
		"\3\2\2\2\u0596\u0598\3\2\2\2\u0597\u0599\7\26\2\2\u0598\u0597\3\2\2\2"+
		"\u0598\u0599\3\2\2\2\u0599\u059a\3\2\2\2\u059a\u05b6\5\u00c2b\2\u059b"+
		"\u059c\7\21\2\2\u059c\u059d\5\u00c4c\2\u059d\u059e\5\u00c2b\2\u059e\u05b6"+
		"\3\2\2\2\u059f\u05a1\5\u00a4S\2\u05a0\u059f\3\2\2\2\u05a0\u05a1\3\2\2"+
		"\2\u05a1\u05a3\3\2\2\2\u05a2\u05a4\7\33\2\2\u05a3\u05a2\3\2\2\2\u05a3"+
		"\u05a4\3\2\2\2\u05a4\u05a6\3\2\2\2\u05a5\u05a7\5\u00c6d\2\u05a6\u05a5"+
		"\3\2\2\2\u05a6\u05a7\3\2\2\2\u05a7\u05a8\3\2\2\2\u05a8\u05a9\7\34\2\2"+
		"\u05a9\u05ab\7\4\2\2\u05aa\u05ac\5F$\2\u05ab\u05aa\3\2\2\2\u05ab\u05ac"+
		"\3\2\2\2\u05ac\u05ad\3\2\2\2\u05ad\u05af\7\6\2\2\u05ae\u05b0\5R*\2\u05af"+
		"\u05ae\3\2\2\2\u05af\u05b0\3\2\2\2\u05b0\u05b6\3\2\2\2\u05b1\u05b3\5\u00a2"+
		"R\2\u05b2\u05b4\5\u0094K\2\u05b3\u05b2\3\2\2\2\u05b3\u05b4\3\2\2\2\u05b4"+
		"\u05b6\3\2\2\2\u05b5\u0574\3\2\2\2\u05b5\u0575\3\2\2\2\u05b5\u0577\3\2"+
		"\2\2\u05b5\u057b\3\2\2\2\u05b5\u0583\3\2\2\2\u05b5\u058b\3\2\2\2\u05b5"+
		"\u0593\3\2\2\2\u05b5\u059b\3\2\2\2\u05b5\u05a0\3\2\2\2\u05b5\u05b1\3\2"+
		"\2\2\u05b6\u00c3\3\2\2\2\u05b7\u05b8\t\4\2\2\u05b8\u00c5\3\2\2\2\u05b9"+
		"\u05bb\7\r\2\2\u05ba\u05bc\7[\2\2\u05bb\u05ba\3\2\2\2\u05bb\u05bc\3\2"+
		"\2\2\u05bc\u00c7\3\2\2\2\u05bd\u05be\7.\2\2\u05be\u05bf\5\u00caf\2\u05bf"+
		"\u05c0\7/\2\2\u05c0\u05cd\3\2\2\2\u05c1\u05c6\7.\2\2\u05c2\u05c3\7X\2"+
		"\2\u05c3\u05c5\7\22\2\2\u05c4\u05c2\3\2\2\2\u05c5\u05c8\3\2\2\2\u05c6"+
		"\u05c4\3\2\2\2\u05c6\u05c7\3\2\2\2\u05c7\u05c9\3\2\2\2\u05c8\u05c6\3\2"+
		"\2\2\u05c9\u05ca\5\u00d2j\2\u05ca\u05cb\7/\2\2\u05cb\u05cd\3\2\2\2\u05cc"+
		"\u05bd\3\2\2\2\u05cc\u05c1\3\2\2\2\u05cd\u00c9\3\2\2\2\u05ce\u05d3\7X"+
		"\2\2\u05cf\u05d0\7\22\2\2\u05d0\u05d2\7X\2\2\u05d1\u05cf\3\2\2\2\u05d2"+
		"\u05d5\3\2\2\2\u05d3\u05d1\3\2\2\2\u05d3\u05d4\3\2\2\2\u05d4\u05d7\3\2"+
		"\2\2\u05d5\u05d3\3\2\2\2\u05d6\u05d8\7\22\2\2\u05d7\u05d6\3\2\2\2\u05d7"+
		"\u05d8\3\2\2\2\u05d8\u00cb\3\2\2\2\u05d9\u05dc\5\u00c2b\2\u05da\u05db"+
		"\7\61\2\2\u05db\u05dd\5\u00be`\2\u05dc\u05da\3\2\2\2\u05dc\u05dd\3\2\2"+
		"\2\u05dd\u00cd\3\2\2\2\u05de\u05e3\5\u00ccg\2\u05df\u05e0\7\22\2\2\u05e0"+
		"\u05e2\5\u00ccg\2\u05e1\u05df\3\2\2\2\u05e2\u05e5\3\2\2\2\u05e3\u05e1"+
		"\3\2\2\2\u05e3\u05e4\3\2\2\2\u05e4\u05e7\3\2\2\2\u05e5\u05e3\3\2\2\2\u05e6"+
		"\u05e8\7\22\2\2\u05e7\u05e6\3\2\2\2\u05e7\u05e8\3\2\2\2\u05e8\u00cf\3"+
		"\2\2\2\u05e9\u05ea\5\u0166\u00b4\2\u05ea\u05eb\7\31\2\2\u05eb\u05ec\5"+
		"\u00ccg\2\u05ec\u05ef\3\2\2\2\u05ed\u05ef\5\u00ccg\2\u05ee\u05e9\3\2\2"+
		"\2\u05ee\u05ed\3\2\2\2\u05ef\u00d1\3\2\2\2\u05f0\u05f5\5\u00d0i\2\u05f1"+
		"\u05f2\7\22\2\2\u05f2\u05f4\5\u00d0i\2\u05f3\u05f1\3\2\2\2\u05f4\u05f7"+
		"\3\2\2\2\u05f5\u05f3\3\2\2\2\u05f5\u05f6\3\2\2\2\u05f6\u05f9\3\2\2\2\u05f7"+
		"\u05f5\3\2\2\2\u05f8\u05fa\7\22\2\2\u05f9\u05f8\3\2\2\2\u05f9\u05fa\3"+
		"\2\2\2\u05fa\u00d3\3\2\2\2\u05fb\u05fc\7.\2\2\u05fc\u05fd\5\u00d8m\2\u05fd"+
		"\u05fe\7/\2\2\u05fe\u060c\3\2\2\2\u05ff\u0605\7.\2\2\u0600\u0601\5\u00d6"+
		"l\2\u0601\u0602\7\22\2\2\u0602\u0604\3\2\2\2\u0603\u0600\3\2\2\2\u0604"+
		"\u0607\3\2\2\2\u0605\u0603\3\2\2\2\u0605\u0606\3\2\2\2\u0606\u0608\3\2"+
		"\2\2\u0607\u0605\3\2\2\2\u0608\u0609\5\u00dco\2\u0609\u060a\7/\2\2\u060a"+
		"\u060c\3\2\2\2\u060b\u05fb\3\2\2\2\u060b\u05ff\3\2\2\2\u060c\u00d5\3\2"+
		"\2\2\u060d\u060f\5\u0086D\2\u060e\u060d\3\2\2\2\u060f\u0612\3\2\2\2\u0610"+
		"\u060e\3\2\2\2\u0610\u0611\3\2\2\2\u0611\u0613\3\2\2\2\u0612\u0610\3\2"+
		"\2\2\u0613\u0616\7X\2\2\u0614\u0615\7\27\2\2\u0615\u0617\5\u00aaV\2\u0616"+
		"\u0614\3\2\2\2\u0616\u0617\3\2\2\2\u0617\u00d7\3\2\2\2\u0618\u061d\5\u00d6"+
		"l\2\u0619\u061a\7\22\2\2\u061a\u061c\5\u00d6l\2\u061b\u0619\3\2\2\2\u061c"+
		"\u061f\3\2\2\2\u061d\u061b\3\2\2\2\u061d\u061e\3\2\2\2\u061e\u0621\3\2"+
		"\2\2\u061f\u061d\3\2\2\2\u0620\u0622\7\22\2\2\u0621\u0620\3\2\2\2\u0621"+
		"\u0622\3\2\2\2\u0622\u00d9\3\2\2\2\u0623\u0625\5\u0086D\2\u0624\u0623"+
		"\3\2\2\2\u0625\u0628\3\2\2\2\u0626\u0624\3\2\2\2\u0626\u0627\3\2\2\2\u0627"+
		"\u0629\3\2\2\2\u0628\u0626\3\2\2\2\u0629\u062b\5\u0166\u00b4\2\u062a\u062c"+
		"\5\u00bc_\2\u062b\u062a\3\2\2\2\u062b\u062c\3\2\2\2\u062c\u062e\3\2\2"+
		"\2\u062d\u062f\5z>\2\u062e\u062d\3\2\2\2\u062e\u062f\3\2\2\2\u062f\u00db"+
		"\3\2\2\2\u0630\u0635\5\u00dan\2\u0631\u0632\7\22\2\2\u0632\u0634\5\u00da"+
		"n\2\u0633\u0631\3\2\2\2\u0634\u0637\3\2\2\2\u0635\u0633\3\2\2\2\u0635"+
		"\u0636\3\2\2\2\u0636\u0639\3\2\2\2\u0637\u0635\3\2\2\2\u0638\u063a\7\22"+
		"\2\2\u0639\u0638\3\2\2\2\u0639\u063a\3\2\2\2\u063a\u00dd\3\2\2\2\u063b"+
		"\u0643\5\u00e0q\2\u063c\u063d\7\26\2\2\u063d\u0640\5\u0166\u00b4\2\u063e"+
		"\u063f\7\64\2\2\u063f\u0641\5\u00dep\2\u0640\u063e\3\2\2\2\u0640\u0641"+
		"\3\2\2\2\u0641\u0643\3\2\2\2\u0642\u063b\3\2\2\2\u0642\u063c\3\2\2\2\u0643"+
		"\u00df\3\2\2\2\u0644\u0686\7!\2\2\u0645\u0686\5\u00e4s\2\u0646\u0647\5"+
		"\u00e2r\2\u0647\u0648\7\36\2\2\u0648\u0649\5\u00e2r\2\u0649\u0686\3\2"+
		"\2\2\u064a\u064b\5\u00e2r\2\u064b\u064c\7)\2\2\u064c\u064d\5\u00e2r\2"+
		"\u064d\u0686\3\2\2\2\u064e\u064f\5\u0096L\2\u064f\u0650\5\u0094K\2\u0650"+
		"\u0686\3\2\2\2\u0651\u0653\7\65\2\2\u0652\u0651\3\2\2\2\u0652\u0653\3"+
		"\2\2\2\u0653\u0654\3\2\2\2\u0654\u0657\5\u0166\u00b4\2\u0655\u0656\7\64"+
		"\2\2\u0656\u0658\5\u00dep\2\u0657\u0655\3\2\2\2\u0657\u0658\3\2\2\2\u0658"+
		"\u0686\3\2\2\2\u0659\u065a\7\65\2\2\u065a\u065b\7\26\2\2\u065b\u065e\5"+
		"\u0166\u00b4\2\u065c\u065d\7\64\2\2\u065d\u065f\5\u00dep\2\u065e\u065c"+
		"\3\2\2\2\u065e\u065f\3\2\2\2\u065f\u0686\3\2\2\2\u0660\u0661\5\u0096L"+
		"\2\u0661\u0663\7\4\2\2\u0662\u0664\5\u00e8u\2\u0663\u0662\3\2\2\2\u0663"+
		"\u0664\3\2\2\2\u0664\u0665\3\2\2\2\u0665\u0666\7\6\2\2\u0666\u0686\3\2"+
		"\2\2\u0667\u0668\5\u0096L\2\u0668\u066a\7\17\2\2\u0669\u066b\5\u00f0y"+
		"\2\u066a\u0669\3\2\2\2\u066a\u066b\3\2\2\2\u066b\u066c\3\2\2\2\u066c\u066d"+
		"\7\20\2\2\u066d\u0686\3\2\2\2\u066e\u0686\5\u0096L\2\u066f\u0671\7\4\2"+
		"\2\u0670\u0672\5\u00e8u\2\u0671\u0670\3\2\2\2\u0671\u0672\3\2\2\2\u0672"+
		"\u0673\3\2\2\2\u0673\u0686\7\6\2\2\u0674\u0676\7,\2\2\u0675\u0677\5\u00ee"+
		"x\2\u0676\u0675\3\2\2\2\u0676\u0677\3\2\2\2\u0677\u0678\3\2\2\2\u0678"+
		"\u0686\7-\2\2\u0679\u067a\7\37\2\2\u067a\u0686\5\u00e0q\2\u067b\u067c"+
		"\7\37\2\2\u067c\u067d\7\26\2\2\u067d\u0686\5\u00dep\2\u067e\u067f\7 \2"+
		"\2\u067f\u0686\5\u00e0q\2\u0680\u0681\7 \2\2\u0681\u0682\7\26\2\2\u0682"+
		"\u0686\5\u00dep\2\u0683\u0684\7\66\2\2\u0684\u0686\5\u00dep\2\u0685\u0644"+
		"\3\2\2\2\u0685\u0645\3\2\2\2\u0685\u0646\3\2\2\2\u0685\u064a\3\2\2\2\u0685"+
		"\u064e\3\2\2\2\u0685\u0652\3\2\2\2\u0685\u0659\3\2\2\2\u0685\u0660\3\2"+
		"\2\2\u0685\u0667\3\2\2\2\u0685\u066e\3\2\2\2\u0685\u066f\3\2\2\2\u0685"+
		"\u0674\3\2\2\2\u0685\u0679\3\2\2\2\u0685\u067b\3\2\2\2\u0685\u067e\3\2"+
		"\2\2\u0685\u0680\3\2\2\2\u0685\u0683\3\2\2\2\u0686\u00e1\3\2\2\2\u0687"+
		"\u068a\5\u0096L\2\u0688\u068a\5\u00e4s\2\u0689\u0687\3\2\2\2\u0689\u0688"+
		"\3\2\2\2\u068a\u00e3\3\2\2\2\u068b\u068d\7\67\2\2\u068c\u068b\3\2\2\2"+
		"\u068c\u068d\3\2\2\2\u068d\u068e\3\2\2\2\u068e\u068f\5\u0118\u008d\2\u068f"+
		"\u00e5\3\2\2\2\u0690\u0695\5\u00dep\2\u0691\u0692\7\22\2\2\u0692\u0694"+
		"\5\u00dep\2\u0693\u0691\3\2\2\2\u0694\u0697\3\2\2\2\u0695\u0693\3\2\2"+
		"\2\u0695\u0696\3\2\2\2\u0696\u0699\3\2\2\2\u0697\u0695\3\2\2\2\u0698\u069a"+
		"\7\22\2\2\u0699\u0698\3\2\2\2\u0699\u069a\3\2\2\2\u069a\u00e7\3\2\2\2"+
		"\u069b\u06ab\5\u00eav\2\u069c\u06a1\5\u00dep\2\u069d\u069e\7\22\2\2\u069e"+
		"\u06a0\5\u00dep\2\u069f\u069d\3\2\2\2\u06a0\u06a3\3\2\2\2\u06a1\u069f"+
		"\3\2\2\2\u06a1\u06a2\3\2\2\2\u06a2\u06a8\3\2\2\2\u06a3\u06a1\3\2\2\2\u06a4"+
		"\u06a6\7\22\2\2\u06a5\u06a7\5\u00eav\2\u06a6\u06a5\3\2\2\2\u06a6\u06a7"+
		"\3\2\2\2\u06a7\u06a9\3\2\2\2\u06a8\u06a4\3\2\2\2\u06a8\u06a9\3\2\2\2\u06a9"+
		"\u06ab\3\2\2\2\u06aa\u069b\3\2\2\2\u06aa\u069c\3\2\2\2\u06ab\u00e9\3\2"+
		"\2\2\u06ac\u06af\7)\2\2\u06ad\u06ae\7\22\2\2\u06ae\u06b0\5\u00e6t\2\u06af"+
		"\u06ad\3\2\2\2\u06af\u06b0\3\2\2\2\u06b0\u00eb\3\2\2\2\u06b1\u06b3\5\u00de"+
		"p\2\u06b2\u06b4\7)\2\2\u06b3\u06b2\3\2\2\2\u06b3\u06b4\3\2\2\2\u06b4\u06b7"+
		"\3\2\2\2\u06b5\u06b7\7)\2\2\u06b6\u06b1\3\2\2\2\u06b6\u06b5\3\2\2\2\u06b7"+
		"\u00ed\3\2\2\2\u06b8\u06bd\5\u00ecw\2\u06b9\u06ba\7\22\2\2\u06ba\u06bc"+
		"\5\u00ecw\2\u06bb\u06b9\3\2\2\2\u06bc\u06bf\3\2\2\2\u06bd\u06bb\3\2\2"+
		"\2\u06bd\u06be\3\2\2\2\u06be\u06c1\3\2\2\2\u06bf\u06bd\3\2\2\2\u06c0\u06c2"+
		"\7\22\2\2\u06c1\u06c0\3\2\2\2\u06c1\u06c2\3\2\2\2\u06c2\u00ef\3\2\2\2"+
		"\u06c3\u06d4\7)\2\2\u06c4\u06c9\5\u00f2z\2\u06c5\u06c6\7\22\2\2\u06c6"+
		"\u06c8\5\u00f2z\2\u06c7\u06c5\3\2\2\2\u06c8\u06cb\3\2\2\2\u06c9\u06c7"+
		"\3\2\2\2\u06c9\u06ca\3\2\2\2\u06ca\u06d1\3\2\2\2\u06cb\u06c9\3\2\2\2\u06cc"+
		"\u06cd\7\22\2\2\u06cd\u06d2\7)\2\2\u06ce\u06d0\7\22\2\2\u06cf\u06ce\3"+
		"\2\2\2\u06cf\u06d0\3\2\2\2\u06d0\u06d2\3\2\2\2\u06d1\u06cc\3\2\2\2\u06d1"+
		"\u06cf\3\2\2\2\u06d2\u06d4\3\2\2\2\u06d3\u06c3\3\2\2\2\u06d3\u06c4\3\2"+
		"\2\2\u06d4\u00f1\3\2\2\2\u06d5\u06d7\7\66\2\2\u06d6\u06d5\3\2\2\2\u06d6"+
		"\u06d7\3\2\2\2\u06d7\u06d9\3\2\2\2\u06d8\u06da\7\65\2\2\u06d9\u06d8\3"+
		"\2\2\2\u06d9\u06da\3\2\2\2\u06da\u06dc\3\2\2\2\u06db\u06dd\7\26\2\2\u06dc"+
		"\u06db\3\2\2\2\u06dc\u06dd\3\2\2\2\u06dd\u06de\3\2\2\2\u06de\u06e4\5\u0166"+
		"\u00b4\2\u06df\u06e0\5\u0166\u00b4\2\u06e0\u06e1\7\27\2\2\u06e1\u06e2"+
		"\5\u00dep\2\u06e2\u06e4\3\2\2\2\u06e3\u06d6\3\2\2\2\u06e3\u06df\3\2\2"+
		"\2\u06e4\u00f3\3\2\2\2\u06e5\u06e6\5\u0148\u00a5\2\u06e6\u00f5\3\2\2\2"+
		"\u06e7\u06e8\5\u0164\u00b3\2\u06e8\u00f7\3\2\2\2\u06e9\u06ee\5\u00f4{"+
		"\2\u06ea\u06eb\7\22\2\2\u06eb\u06ed\5\u00f4{\2\u06ec\u06ea\3\2\2\2\u06ed"+
		"\u06f0\3\2\2\2\u06ee\u06ec\3\2\2\2\u06ee\u06ef\3\2\2\2\u06ef\u06f2\3\2"+
		"\2\2\u06f0\u06ee\3\2\2\2\u06f1\u06f3\7\22\2\2\u06f2\u06f1\3\2\2\2\u06f2"+
		"\u06f3\3\2\2\2\u06f3\u00f9\3\2\2\2\u06f4\u06f8\7\17\2\2\u06f5\u06f7\5"+
		"\u00fe\u0080\2\u06f6\u06f5\3\2\2\2\u06f7\u06fa\3\2\2\2\u06f8\u06f6\3\2"+
		"\2\2\u06f8\u06f9\3\2\2\2\u06f9\u06fc\3\2\2\2\u06fa\u06f8\3\2\2\2\u06fb"+
		"\u06fd\5\u00f4{\2\u06fc\u06fb\3\2\2\2\u06fc\u06fd\3\2\2\2\u06fd\u06fe"+
		"\3\2\2\2\u06fe\u06ff\7\20\2\2\u06ff\u00fb\3\2\2\2\u0700\u0704\7\17\2\2"+
		"\u0701\u0703\5\u0088E\2\u0702\u0701\3\2\2\2\u0703\u0706\3\2\2\2\u0704"+
		"\u0702\3\2\2\2\u0704\u0705\3\2\2\2\u0705\u070a\3\2\2\2\u0706\u0704\3\2"+
		"\2\2\u0707\u0709\5\u00fe\u0080\2\u0708\u0707\3\2\2\2\u0709\u070c\3\2\2"+
		"\2\u070a\u0708\3\2\2\2\u070a\u070b\3\2\2\2\u070b\u070e\3\2\2\2\u070c\u070a"+
		"\3\2\2\2\u070d\u070f\5\u00f4{\2\u070e\u070d\3\2\2\2\u070e\u070f\3\2\2"+
		"\2\u070f\u0710\3\2\2\2\u0710\u0711\7\20\2\2\u0711\u00fd\3\2\2\2\u0712"+
		"\u0716\7\f\2\2\u0713\u0716\5\n\6\2\u0714\u0716\5\u0100\u0081\2\u0715\u0712"+
		"\3\2\2\2\u0715\u0713\3\2\2\2\u0715\u0714\3\2\2\2\u0716\u00ff\3\2\2\2\u0717"+
		"\u0719\5\u0086D\2\u0718\u0717\3\2\2\2\u0719\u071c\3\2\2\2\u071a\u0718"+
		"\3\2\2\2\u071a\u071b\3\2\2\2\u071b\u071d\3\2\2\2\u071c\u071a\3\2\2\2\u071d"+
		"\u071e\78\2\2\u071e\u0721\5\u00dep\2\u071f\u0720\7\27\2\2\u0720\u0722"+
		"\5\u00c2b\2\u0721\u071f\3\2\2\2\u0721\u0722\3\2\2\2\u0722\u0725\3\2\2"+
		"\2\u0723\u0724\7\31\2\2\u0724\u0726\5\u00f4{\2\u0725\u0723\3\2\2\2\u0725"+
		"\u0726\3\2\2\2\u0726\u0727\3\2\2\2\u0727\u0728\7\f\2\2\u0728\u0734\3\2"+
		"\2\2\u0729\u072b\5\u0086D\2\u072a\u0729\3\2\2\2\u072b\u072e\3\2\2\2\u072c"+
		"\u072a\3\2\2\2\u072c\u072d\3\2\2\2\u072d\u072f\3\2\2\2\u072e\u072c\3\2"+
		"\2\2\u072f\u0734\5\u0102\u0082\2\u0730\u0731\5\u00f4{\2\u0731\u0732\7"+
		"\f\2\2\u0732\u0734\3\2\2\2\u0733\u071a\3\2\2\2\u0733\u072c\3\2\2\2\u0733"+
		"\u0730\3\2\2\2\u0734\u0101\3\2\2\2\u0735\u076a\5\u00fc\177\2\u0736\u0737"+
		"\79\2\2\u0737\u0738\5\u0104\u0083\2\u0738\u0740\5\u00fa~\2\u0739\u073a"+
		"\7:\2\2\u073a\u073b\79\2\2\u073b\u073c\5\u0104\u0083\2\u073c\u073d\5\u00fa"+
		"~\2\u073d\u073f\3\2\2\2\u073e\u0739\3\2\2\2\u073f\u0742\3\2\2\2\u0740"+
		"\u073e\3\2\2\2\u0740\u0741\3\2\2\2\u0741\u0745\3\2\2\2\u0742\u0740\3\2"+
		"\2\2\u0743\u0744\7:\2\2\u0744\u0746\5\u00fa~\2\u0745\u0743\3\2\2\2\u0745"+
		"\u0746\3\2\2\2\u0746\u076a\3\2\2\2\u0747\u0748\7;\2\2\u0748\u0749\5\u00f6"+
		"|\2\u0749\u074b\7\17\2\2\u074a\u074c\5\u0112\u008a\2\u074b\u074a\3\2\2"+
		"\2\u074b\u074c\3\2\2\2\u074c\u074e\3\2\2\2\u074d\u074f\5\u0108\u0085\2"+
		"\u074e\u074d\3\2\2\2\u074e\u074f\3\2\2\2\u074f\u0750\3\2\2\2\u0750\u0751"+
		"\7\20\2\2\u0751\u076a\3\2\2\2\u0752\u0754\5\u0106\u0084\2\u0753\u0752"+
		"\3\2\2\2\u0753\u0754\3\2\2\2\u0754\u0755\3\2\2\2\u0755\u0756\7<\2\2\u0756"+
		"\u0757\5\u0104\u0083\2\u0757\u0758\5\u00fc\177\2\u0758\u076a\3\2\2\2\u0759"+
		"\u075b\5\u0106\u0084\2\u075a\u0759\3\2\2\2\u075a\u075b\3\2\2\2\u075b\u075c"+
		"\3\2\2\2\u075c\u075d\7(\2\2\u075d\u075e\5\u00dep\2\u075e\u075f\7\b\2\2"+
		"\u075f\u0760\5\u00f6|\2\u0760\u0761\5\u00fc\177\2\u0761\u076a\3\2\2\2"+
		"\u0762\u0764\5\u0106\u0084\2\u0763\u0762\3\2\2\2\u0763\u0764\3\2\2\2\u0764"+
		"\u0765\3\2\2\2\u0765\u0766\7=\2\2\u0766\u076a\5\u00fc\177\2\u0767\u0768"+
		"\7\33\2\2\u0768\u076a\5\u00fc\177\2\u0769\u0735\3\2\2\2\u0769\u0736\3"+
		"\2\2\2\u0769\u0747\3\2\2\2\u0769\u0753\3\2\2\2\u0769\u075a\3\2\2\2\u0769"+
		"\u0763\3\2\2\2\u0769\u0767\3\2\2\2\u076a\u0103\3\2\2\2\u076b\u0772\5\u00f6"+
		"|\2\u076c\u076d\78\2\2\u076d\u076e\5\u00dep\2\u076e\u076f\7\31\2\2\u076f"+
		"\u0770\5\u00f4{\2\u0770\u0772\3\2\2\2\u0771\u076b\3\2\2\2\u0771\u076c"+
		"\3\2\2\2\u0772\u0105\3\2\2\2\u0773\u0774\7X\2\2\u0774\u0775\7\27\2\2\u0775"+
		"\u0107\3\2\2\2\u0776\u0777\5\u010a\u0086\2\u0777\u0779\5\u0102\u0082\2"+
		"\u0778\u077a\7\22\2\2\u0779\u0778\3\2\2\2\u0779\u077a\3\2\2\2\u077a\u077c"+
		"\3\2\2\2\u077b\u077d\5\u0108\u0085\2\u077c\u077b\3\2\2\2\u077c\u077d\3"+
		"\2\2\2\u077d\u0787\3\2\2\2\u077e\u077f\5\u010a\u0086\2\u077f\u0784\5\u00f4"+
		"{\2\u0780\u0782\7\22\2\2\u0781\u0783\5\u0108\u0085\2\u0782\u0781\3\2\2"+
		"\2\u0782\u0783\3\2\2\2\u0783\u0785\3\2\2\2\u0784\u0780\3\2\2\2\u0784\u0785"+
		"\3\2\2\2\u0785\u0787\3\2\2\2\u0786\u0776\3\2\2\2\u0786\u077e\3\2\2\2\u0787"+
		"\u0109\3\2\2\2\u0788\u078a\5\u0086D\2\u0789\u0788\3\2\2\2\u078a\u078d"+
		"\3\2\2\2\u078b\u0789\3\2\2\2\u078b\u078c\3\2\2\2\u078c\u078e\3\2\2\2\u078d"+
		"\u078b\3\2\2\2\u078e\u0790\5\u010c\u0087\2\u078f\u0791\5\u010e\u0088\2"+
		"\u0790\u078f\3\2\2\2\u0790\u0791\3\2\2\2\u0791\u0792\3\2\2\2\u0792\u0793"+
		"\7>\2\2\u0793\u010b\3\2\2\2\u0794\u0795\b\u0087\1\2\u0795\u0796\5\u00de"+
		"p\2\u0796\u079c\3\2\2\2\u0797\u0798\f\3\2\2\u0798\u0799\7?\2\2\u0799\u079b"+
		"\5\u00dep\2\u079a\u0797\3\2\2\2\u079b\u079e\3\2\2\2\u079c\u079a\3\2\2"+
		"\2\u079c\u079d\3\2\2\2\u079d\u010d\3\2\2\2\u079e\u079c\3\2\2\2\u079f\u07a0"+
		"\79\2\2\u07a0\u07a1\5\u00f4{\2\u07a1\u010f\3\2\2\2\u07a2\u07a6\5\u0086"+
		"D\2\u07a3\u07a5\5\u0086D\2\u07a4\u07a3\3\2\2\2\u07a5\u07a8\3\2\2\2\u07a6"+
		"\u07a4\3\2\2\2\u07a6\u07a7\3\2\2\2\u07a7\u0111\3\2\2\2\u07a8\u07a6\3\2"+
		"\2\2\u07a9\u07ad\5\u0088E\2\u07aa\u07ac\5\u0088E\2\u07ab\u07aa\3\2\2\2"+
		"\u07ac\u07af\3\2\2\2\u07ad\u07ab\3\2\2\2\u07ad\u07ae\3\2\2\2\u07ae\u0113"+
		"\3\2\2\2\u07af\u07ad\3\2\2\2\u07b0\u07bc\5\u0116\u008c\2\u07b1\u07b2\5"+
		"\u0096L\2\u07b2\u07b4\7\17\2\2\u07b3\u07b5\5\u0112\u008a\2\u07b4\u07b3"+
		"\3\2\2\2\u07b4\u07b5\3\2\2\2\u07b5\u07b7\3\2\2\2\u07b6\u07b8\5\u0124\u0093"+
		"\2\u07b7\u07b6\3\2\2\2\u07b7\u07b8\3\2\2\2\u07b8\u07b9\3\2\2\2\u07b9\u07ba"+
		"\7\20\2\2\u07ba\u07bc\3\2\2\2\u07bb\u07b0\3\2\2\2\u07bb\u07b1\3\2\2\2"+
		"\u07bc\u0115\3\2\2\2\u07bd\u07ff\5\u0118\u008d\2\u07be\u07ff\7\13\2\2"+
		"\u07bf\u07c1\5\u0096L\2\u07c0\u07c2\5\u0094K\2\u07c1\u07c0\3\2\2\2\u07c1"+
		"\u07c2\3\2\2\2\u07c2\u07ff\3\2\2\2\u07c3\u07c5\7\4\2\2\u07c4\u07c6\5\u0112"+
		"\u008a\2\u07c5\u07c4\3\2\2\2\u07c5\u07c6\3\2\2\2\u07c6\u07c7\3\2\2\2\u07c7"+
		"\u07ff\7\6\2\2\u07c8\u07ca\7\4\2\2\u07c9\u07cb\5\u0112\u008a\2\u07ca\u07c9"+
		"\3\2\2\2\u07ca\u07cb\3\2\2\2\u07cb\u07cc\3\2\2\2\u07cc\u07cd\5\u00f4{"+
		"\2\u07cd\u07ce\7\6\2\2\u07ce\u07ff\3\2\2\2\u07cf\u07d1\7\4\2\2\u07d0\u07d2"+
		"\5\u0112\u008a\2\u07d1\u07d0\3\2\2\2\u07d1\u07d2\3\2\2\2\u07d2\u07d3\3"+
		"\2\2\2\u07d3\u07d4\5\u00f4{\2\u07d4\u07d6\7\22\2\2\u07d5\u07d7\5\u00f8"+
		"}\2\u07d6\u07d5\3\2\2\2\u07d6\u07d7\3\2\2\2\u07d7\u07d8\3\2\2\2\u07d8"+
		"\u07d9\7\6\2\2\u07d9\u07ff\3\2\2\2\u07da\u07dc\7,\2\2\u07db\u07dd\5\u0112"+
		"\u008a\2\u07dc\u07db\3\2\2\2\u07dc\u07dd\3\2\2\2\u07dd\u07df\3\2\2\2\u07de"+
		"\u07e0\5\u00f8}\2\u07df\u07de\3\2\2\2\u07df\u07e0\3\2\2\2\u07e0\u07e1"+
		"\3\2\2\2\u07e1\u07ff\7-\2\2\u07e2\u07e4\7,\2\2\u07e3\u07e5\5\u0112\u008a"+
		"\2\u07e4\u07e3\3\2\2\2\u07e4\u07e5\3\2\2\2\u07e5\u07e6\3\2\2\2\u07e6\u07e7"+
		"\5\u00f4{\2\u07e7\u07e8\7\f\2\2\u07e8\u07e9\5\u00f4{\2\u07e9\u07ea\7-"+
		"\2\2\u07ea\u07ff\3\2\2\2\u07eb\u07ed\7@\2\2\u07ec\u07eb\3\2\2\2\u07ec"+
		"\u07ed\3\2\2\2\u07ed\u07ee\3\2\2\2\u07ee\u07ef\5\u011a\u008e\2\u07ef\u07f0"+
		"\5\u0120\u0091\2\u07f0\u07ff\3\2\2\2\u07f1\u07ff\5\u0102\u0082\2\u07f2"+
		"\u07f4\7A\2\2\u07f3\u07f5\5\u0122\u0092\2\u07f4\u07f3\3\2\2\2\u07f4\u07f5"+
		"\3\2\2\2\u07f5\u07ff\3\2\2\2\u07f6\u07f8\7B\2\2\u07f7\u07f9\7X\2\2\u07f8"+
		"\u07f7\3\2\2\2\u07f8\u07f9\3\2\2\2\u07f9\u07ff\3\2\2\2\u07fa\u07fc\7C"+
		"\2\2\u07fb\u07fd\5\u00f4{\2\u07fc\u07fb\3\2\2\2\u07fc\u07fd\3\2\2\2\u07fd"+
		"\u07ff\3\2\2\2\u07fe\u07bd\3\2\2\2\u07fe\u07be\3\2\2\2\u07fe\u07bf\3\2"+
		"\2\2\u07fe\u07c3\3\2\2\2\u07fe\u07c8\3\2\2\2\u07fe\u07cf\3\2\2\2\u07fe"+
		"\u07da\3\2\2\2\u07fe\u07e2\3\2\2\2\u07fe\u07ec\3\2\2\2\u07fe\u07f1\3\2"+
		"\2\2\u07fe\u07f2\3\2\2\2\u07fe\u07f6\3\2\2\2\u07fe\u07fa\3\2\2\2\u07ff"+
		"\u0117\3\2\2\2\u0800\u0801\t\5\2\2\u0801\u0119\3\2\2\2\u0802\u0809\7F"+
		"\2\2\u0803\u0805\7?\2\2\u0804\u0806\5\u011e\u0090\2\u0805\u0804\3\2\2"+
		"\2\u0805\u0806\3\2\2\2\u0806\u0807\3\2\2\2\u0807\u0809\7?\2\2\u0808\u0802"+
		"\3\2\2\2\u0808\u0803\3\2\2\2\u0809\u011b\3\2\2\2\u080a\u080d\5\u00dep"+
		"\2\u080b\u080c\7\27\2\2\u080c\u080e\5\u00c2b\2\u080d\u080b\3\2\2\2\u080d"+
		"\u080e\3\2\2\2\u080e\u011d\3\2\2\2\u080f\u0814\5\u011c\u008f\2\u0810\u0811"+
		"\7\22\2\2\u0811\u0813\5\u011c\u008f\2\u0812\u0810\3\2\2\2\u0813\u0816"+
		"\3\2\2\2\u0814\u0812\3\2\2\2\u0814\u0815\3\2\2\2\u0815\u0818\3\2\2\2\u0816"+
		"\u0814\3\2\2\2\u0817\u0819\7\22\2\2\u0818\u0817\3\2\2\2\u0818\u0819\3"+
		"\2\2\2\u0819\u011f\3\2\2\2\u081a\u081b\5R*\2\u081b\u081c\5\u00fa~\2\u081c"+
		"\u081f\3\2\2\2\u081d\u081f\5\u00f4{\2\u081e\u081a\3\2\2\2\u081e\u081d"+
		"\3\2\2\2\u081f\u0121\3\2\2\2\u0820\u0823\7X\2\2\u0821\u0823\5\u00f6|\2"+
		"\u0822\u0820\3\2\2\2\u0822\u0821\3\2\2\2\u0823\u0123\3\2\2\2\u0824\u0835"+
		"\5\u0126\u0094\2\u0825\u082a\5\u0128\u0095\2\u0826\u0827\7\22\2\2\u0827"+
		"\u0829\5\u0128\u0095\2\u0828\u0826\3\2\2\2\u0829\u082c\3\2\2\2\u082a\u0828"+
		"\3\2\2\2\u082a\u082b\3\2\2\2\u082b\u0832\3\2\2\2\u082c\u082a\3\2\2\2\u082d"+
		"\u082e\7\22\2\2\u082e\u0833\5\u0126\u0094\2\u082f\u0831\7\22\2\2\u0830"+
		"\u082f\3\2\2\2\u0830\u0831\3\2\2\2\u0831\u0833\3\2\2\2\u0832\u082d\3\2"+
		"\2\2\u0832\u0830\3\2\2\2\u0833\u0835\3\2\2\2\u0834\u0824\3\2\2\2\u0834"+
		"\u0825\3\2\2\2\u0835\u0125\3\2\2\2\u0836\u0837\7)\2\2\u0837\u0838\5\u00f4"+
		"{\2\u0838\u0127\3\2\2\2\u0839\u083f\5\u0166\u00b4\2\u083a\u083b\5\u012a"+
		"\u0096\2\u083b\u083c\7\27\2\2\u083c\u083d\5\u00f4{\2\u083d\u083f\3\2\2"+
		"\2\u083e\u0839\3\2\2\2\u083e\u083a\3\2\2\2\u083f\u0129\3\2\2\2\u0840\u0843"+
		"\5\u0166\u00b4\2\u0841\u0843\7^\2\2\u0842\u0840\3\2\2\2\u0842\u0841\3"+
		"\2\2\2\u0843\u012b\3\2\2\2\u0844\u0845\b\u0097\1\2\u0845\u0846\5\u0114"+
		"\u008b\2\u0846\u084b\3\2\2\2\u0847\u0848\f\3\2\2\u0848\u084a\5\u012e\u0098"+
		"\2\u0849\u0847\3\2\2\2\u084a\u084d\3\2\2\2\u084b\u0849\3\2\2\2\u084b\u084c"+
		"\3\2\2\2\u084c\u012d\3\2\2\2\u084d\u084b\3\2\2\2\u084e\u0868\7\63\2\2"+
		"\u084f\u0850\7,\2\2\u0850\u0851\5\u00f4{\2\u0851\u0852\7-\2\2\u0852\u0868"+
		"\3\2\2\2\u0853\u0854\7G\2\2\u0854\u085e\5\u0166\u00b4\2\u0855\u0856\7"+
		"\n\2\2\u0856\u0858\5\u00c8e\2\u0857\u0855\3\2\2\2\u0857\u0858\3\2\2\2"+
		"\u0858\u0859\3\2\2\2\u0859\u085b\7\4\2\2\u085a\u085c\5\u00f8}\2\u085b"+
		"\u085a\3\2\2\2\u085b\u085c\3\2\2\2\u085c\u085d\3\2\2\2\u085d\u085f\7\6"+
		"\2\2\u085e\u0857\3\2\2\2\u085e\u085f\3\2\2\2\u085f\u0868\3\2\2\2\u0860"+
		"\u0861\7G\2\2\u0861\u0868\7^\2\2\u0862\u0864\7\4\2\2\u0863\u0865\5\u00f8"+
		"}\2\u0864\u0863\3\2\2\2\u0864\u0865\3\2\2\2\u0865\u0866\3\2\2\2\u0866"+
		"\u0868\7\6\2\2\u0867\u084e\3\2\2\2\u0867\u084f\3\2\2\2\u0867\u0853\3\2"+
		"\2\2\u0867\u0860\3\2\2\2\u0867\u0862\3\2\2\2\u0868\u012f\3\2\2\2\u0869"+
		"\u0884\5\u012c\u0097\2\u086a\u086b\5\u0110\u0089\2\u086b\u086c\5\u0130"+
		"\u0099\2\u086c\u0884\3\2\2\2\u086d\u086e\7\67\2\2\u086e\u0884\5\u0130"+
		"\u0099\2\u086f\u0870\7\t\2\2\u0870\u0884\5\u0130\u0099\2\u0871\u0873\7"+
		"\37\2\2\u0872\u0874\7\26\2\2\u0873\u0872\3\2\2\2\u0873\u0874\3\2\2\2\u0874"+
		"\u0875\3\2\2\2\u0875\u0884\5\u0130\u0099\2\u0876\u0878\7 \2\2\u0877\u0879"+
		"\7\26\2\2\u0878\u0877\3\2\2\2\u0878\u0879\3\2\2\2\u0879\u087a\3\2\2\2"+
		"\u087a\u0884\5\u0130\u0099\2\u087b\u087c\7\21\2\2\u087c\u0884\5\u0130"+
		"\u0099\2\u087d\u087e\7\66\2\2\u087e\u0884\5\u0130\u0099\2\u087f\u0880"+
		"\7\b\2\2\u0880\u0881\5\u00f6|\2\u0881\u0882\5\u00fa~\2\u0882\u0884\3\2"+
		"\2\2\u0883\u0869\3\2\2\2\u0883\u086a\3\2\2\2\u0883\u086d\3\2\2\2\u0883"+
		"\u086f\3\2\2\2\u0883\u0871\3\2\2\2\u0883\u0876\3\2\2\2\u0883\u087b\3\2"+
		"\2\2\u0883\u087d\3\2\2\2\u0883\u087f\3\2\2\2\u0884\u0131\3\2\2\2\u0885"+
		"\u0886\b\u009a\1\2\u0886\u0887\5\u0130\u0099\2\u0887\u0890\3\2\2\2\u0888"+
		"\u0889\f\4\2\2\u0889\u088a\7\23\2\2\u088a\u088f\5\u00ccg\2\u088b\u088c"+
		"\f\3\2\2\u088c\u088d\7\27\2\2\u088d\u088f\5\u00ccg\2\u088e\u0888\3\2\2"+
		"\2\u088e\u088b\3\2\2\2\u088f\u0892\3\2\2\2\u0890\u088e\3\2\2\2\u0890\u0891"+
		"\3\2\2\2\u0891\u0133\3\2\2\2\u0892\u0890\3\2\2\2\u0893\u0894\b\u009b\1"+
		"\2\u0894\u0895\5\u0132\u009a\2\u0895\u08a1\3\2\2\2\u0896\u0897\f\5\2\2"+
		"\u0897\u0898\7\21\2\2\u0898\u08a0\5\u0132\u009a\2\u0899\u089a\f\4\2\2"+
		"\u089a\u089b\7H\2\2\u089b\u08a0\5\u0132\u009a\2\u089c\u089d\f\3\2\2\u089d"+
		"\u089e\7I\2\2\u089e\u08a0\5\u0132\u009a\2\u089f\u0896\3\2\2\2\u089f\u0899"+
		"\3\2\2\2\u089f\u089c\3\2\2\2\u08a0\u08a3\3\2\2\2\u08a1\u089f\3\2\2\2\u08a1"+
		"\u08a2\3\2\2\2\u08a2\u0135\3\2\2\2\u08a3\u08a1\3\2\2\2\u08a4\u08a5\b\u009c"+
		"\1\2\u08a5\u08a6\5\u0134\u009b\2\u08a6\u08af\3\2\2\2\u08a7\u08a8\f\4\2"+
		"\2\u08a8\u08a9\7\61\2\2\u08a9\u08ae\5\u0134\u009b\2\u08aa\u08ab\f\3\2"+
		"\2\u08ab\u08ac\7\67\2\2\u08ac\u08ae\5\u0134\u009b\2\u08ad\u08a7\3\2\2"+
		"\2\u08ad\u08aa\3\2\2\2\u08ae\u08b1\3\2\2\2\u08af\u08ad\3\2\2\2\u08af\u08b0"+
		"\3\2\2\2\u08b0\u0137\3\2\2\2\u08b1\u08af\3\2\2\2\u08b2\u08b3\b\u009d\1"+
		"\2\u08b3\u08b4\5\u0136\u009c\2\u08b4\u08bf\3\2\2\2\u08b5\u08b6\f\4\2\2"+
		"\u08b6\u08b7\7.\2\2\u08b7\u08b8\7.\2\2\u08b8\u08be\5\u0136\u009c\2\u08b9"+
		"\u08ba\f\3\2\2\u08ba\u08bb\7/\2\2\u08bb\u08bc\7/\2\2\u08bc\u08be\5\u0136"+
		"\u009c\2\u08bd\u08b5\3\2\2\2\u08bd\u08b9\3\2\2\2\u08be\u08c1\3\2\2\2\u08bf"+
		"\u08bd\3\2\2\2\u08bf\u08c0\3\2\2\2\u08c0\u0139\3\2\2\2\u08c1\u08bf\3\2"+
		"\2\2\u08c2\u08c3\b\u009e\1\2\u08c3\u08c4\5\u0138\u009d\2\u08c4\u08ca\3"+
		"\2\2\2\u08c5\u08c6\f\3\2\2\u08c6\u08c7\7\37\2\2\u08c7\u08c9\5\u0138\u009d"+
		"\2\u08c8\u08c5\3\2\2\2\u08c9\u08cc\3\2\2\2\u08ca\u08c8\3\2\2\2\u08ca\u08cb"+
		"\3\2\2\2\u08cb\u013b\3\2\2\2\u08cc\u08ca\3\2\2\2\u08cd\u08ce\b\u009f\1"+
		"\2\u08ce\u08cf\5\u013a\u009e\2\u08cf\u08d5\3\2\2\2\u08d0\u08d1\f\3\2\2"+
		"\u08d1\u08d2\7J\2\2\u08d2\u08d4\5\u013a\u009e\2\u08d3\u08d0\3\2\2\2\u08d4"+
		"\u08d7\3\2\2\2\u08d5\u08d3\3\2\2\2\u08d5\u08d6\3\2\2\2\u08d6\u013d\3\2"+
		"\2\2\u08d7\u08d5\3\2\2\2\u08d8\u08d9\b\u00a0\1\2\u08d9\u08da\5\u013c\u009f"+
		"\2\u08da\u08e0\3\2\2\2\u08db\u08dc\f\3\2\2\u08dc\u08dd\7?\2\2\u08dd\u08df"+
		"\5\u013c\u009f\2\u08de\u08db\3\2\2\2\u08df\u08e2\3\2\2\2\u08e0\u08de\3"+
		"\2\2\2\u08e0\u08e1\3\2\2\2\u08e1\u013f\3\2\2\2\u08e2\u08e0\3\2\2\2\u08e3"+
		"\u08f1\5\u013e\u00a0\2\u08e4\u08ec\5\u013e\u00a0\2\u08e5\u08ed\7K\2\2"+
		"\u08e6\u08ed\7L\2\2\u08e7\u08ed\7.\2\2\u08e8\u08ed\7M\2\2\u08e9\u08ed"+
		"\7/\2\2\u08ea\u08eb\7/\2\2\u08eb\u08ed\7\31\2\2\u08ec\u08e5\3\2\2\2\u08ec"+
		"\u08e6\3\2\2\2\u08ec\u08e7\3\2\2\2\u08ec\u08e8\3\2\2\2\u08ec\u08e9\3\2"+
		"\2\2\u08ec\u08ea\3\2\2\2\u08ed\u08ee\3\2\2\2\u08ee\u08ef\5\u013e\u00a0"+
		"\2\u08ef\u08f1\3\2\2\2\u08f0\u08e3\3\2\2\2\u08f0\u08e4\3\2\2\2\u08f1\u0141"+
		"\3\2\2\2\u08f2\u08f3\b\u00a2\1\2\u08f3\u08f4\5\u0140\u00a1\2\u08f4\u08fa"+
		"\3\2\2\2\u08f5\u08f6\f\3\2\2\u08f6\u08f7\7 \2\2\u08f7\u08f9\5\u0140\u00a1"+
		"\2\u08f8\u08f5\3\2\2\2\u08f9\u08fc\3\2\2\2\u08fa\u08f8\3\2\2\2\u08fa\u08fb"+
		"\3\2\2\2\u08fb\u0143\3\2\2\2\u08fc\u08fa\3\2\2\2\u08fd\u08fe\b\u00a3\1"+
		"\2\u08fe\u08ff\5\u0142\u00a2\2\u08ff\u0905\3\2\2\2\u0900\u0901\f\3\2\2"+
		"\u0901\u0902\7F\2\2\u0902\u0904\5\u0142\u00a2\2\u0903\u0900\3\2\2\2\u0904"+
		"\u0907\3\2\2\2\u0905\u0903\3\2\2\2\u0905\u0906\3\2\2\2\u0906\u0145\3\2"+
		"\2\2\u0907\u0905\3\2\2\2\u0908\u0913\5\u0144\u00a3\2\u0909\u090a\5\u0144"+
		"\u00a3\2\u090a\u090c\7)\2\2\u090b\u090d\5\u0144\u00a3\2\u090c\u090b\3"+
		"\2\2\2\u090c\u090d\3\2\2\2\u090d\u0913\3\2\2\2\u090e\u0910\7)\2\2\u090f"+
		"\u0911\5\u0144\u00a3\2\u0910\u090f\3\2\2\2\u0910\u0911\3\2\2\2\u0911\u0913"+
		"\3\2\2\2\u0912\u0908\3\2\2\2\u0912\u0909\3\2\2\2\u0912\u090e\3\2\2\2\u0913"+
		"\u0147\3\2\2\2\u0914\u0928\5\u0146\u00a4\2\u0915\u0923\5\u0146\u00a4\2"+
		"\u0916\u0924\7\31\2\2\u0917\u0924\7N\2\2\u0918\u0924\7O\2\2\u0919\u0924"+
		"\7P\2\2\u091a\u0924\7Q\2\2\u091b\u0924\7R\2\2\u091c\u0924\7S\2\2\u091d"+
		"\u091e\7/\2\2\u091e\u091f\7/\2\2\u091f\u0924\7\31\2\2\u0920\u0924\7T\2"+
		"\2\u0921\u0924\7U\2\2\u0922\u0924\7V\2\2\u0923\u0916\3\2\2\2\u0923\u0917"+
		"\3\2\2\2\u0923\u0918\3\2\2\2\u0923\u0919\3\2\2\2\u0923\u091a\3\2\2\2\u0923"+
		"\u091b\3\2\2\2\u0923\u091c\3\2\2\2\u0923\u091d\3\2\2\2\u0923\u0920\3\2"+
		"\2\2\u0923\u0921\3\2\2\2\u0923\u0922\3\2\2\2\u0924\u0925\3\2\2\2\u0925"+
		"\u0926\5\u0148\u00a5\2\u0926\u0928\3\2\2\2\u0927\u0914\3\2\2\2\u0927\u0915"+
		"\3\2\2\2\u0928\u0149\3\2\2\2\u0929\u092a\b\u00a6\1\2\u092a\u092b\5\u0116"+
		"\u008c\2\u092b\u0930\3\2\2\2\u092c\u092d\f\3\2\2\u092d\u092f\5\u012e\u0098"+
		"\2\u092e\u092c\3\2\2\2\u092f\u0932\3\2\2\2\u0930\u092e\3\2\2\2\u0930\u0931"+
		"\3\2\2\2\u0931\u014b\3\2\2\2\u0932\u0930\3\2\2\2\u0933\u094a\5\u014a\u00a6"+
		"\2\u0934\u0935\5\u0110\u0089\2\u0935\u0936\5\u014c\u00a7\2\u0936\u094a"+
		"\3\2\2\2\u0937\u0938\7\67\2\2\u0938\u094a\5\u014c\u00a7\2\u0939\u093a"+
		"\7\t\2\2\u093a\u094a\5\u014c\u00a7\2\u093b\u093d\7\37\2\2\u093c\u093e"+
		"\7\26\2\2\u093d\u093c\3\2\2\2\u093d\u093e\3\2\2\2\u093e\u093f\3\2\2\2"+
		"\u093f\u094a\5\u014c\u00a7\2\u0940\u0942\7 \2\2\u0941\u0943\7\26\2\2\u0942"+
		"\u0941\3\2\2\2\u0942\u0943\3\2\2\2\u0943\u0944\3\2\2\2\u0944\u094a\5\u014c"+
		"\u00a7\2\u0945\u0946\7\21\2\2\u0946\u094a\5\u014c\u00a7\2\u0947\u0948"+
		"\7\66\2\2\u0948\u094a\5\u014c\u00a7\2\u0949\u0933\3\2\2\2\u0949\u0934"+
		"\3\2\2\2\u0949\u0937\3\2\2\2\u0949\u0939\3\2\2\2\u0949\u093b\3\2\2\2\u0949"+
		"\u0940\3\2\2\2\u0949\u0945\3\2\2\2\u0949\u0947\3\2\2\2\u094a\u014d\3\2"+
		"\2\2\u094b\u094c\b\u00a8\1\2\u094c\u094d\5\u014c\u00a7\2\u094d\u0956\3"+
		"\2\2\2\u094e\u094f\f\4\2\2\u094f\u0950\7\23\2\2\u0950\u0955\5\u00ccg\2"+
		"\u0951\u0952\f\3\2\2\u0952\u0953\7\27\2\2\u0953\u0955\5\u00ccg\2\u0954"+
		"\u094e\3\2\2\2\u0954\u0951\3\2\2\2\u0955\u0958\3\2\2\2\u0956\u0954\3\2"+
		"\2\2\u0956\u0957\3\2\2\2\u0957\u014f\3\2\2\2\u0958\u0956\3\2\2\2\u0959"+
		"\u095a\b\u00a9\1\2\u095a\u095b\5\u014e\u00a8\2\u095b\u0967\3\2\2\2\u095c"+
		"\u095d\f\5\2\2\u095d\u095e\7\21\2\2\u095e\u0966\5\u014e\u00a8\2\u095f"+
		"\u0960\f\4\2\2\u0960\u0961\7H\2\2\u0961\u0966\5\u014e\u00a8\2\u0962\u0963"+
		"\f\3\2\2\u0963\u0964\7I\2\2\u0964\u0966\5\u014e\u00a8\2\u0965\u095c\3"+
		"\2\2\2\u0965\u095f\3\2\2\2\u0965\u0962\3\2\2\2\u0966\u0969\3\2\2\2\u0967"+
		"\u0965\3\2\2\2\u0967\u0968\3\2\2\2\u0968\u0151\3\2\2\2\u0969\u0967\3\2"+
		"\2\2\u096a\u096b\b\u00aa\1\2\u096b\u096c\5\u0150\u00a9\2\u096c\u0975\3"+
		"\2\2\2\u096d";
	private static final String _serializedATNSegment1 =
		"\u096e\f\4\2\2\u096e\u096f\7\61\2\2\u096f\u0974\5\u0150\u00a9\2\u0970"+
		"\u0971\f\3\2\2\u0971\u0972\7\67\2\2\u0972\u0974\5\u0150\u00a9\2\u0973"+
		"\u096d\3\2\2\2\u0973\u0970\3\2\2\2\u0974\u0977\3\2\2\2\u0975\u0973\3\2"+
		"\2\2\u0975\u0976\3\2\2\2\u0976\u0153\3\2\2\2\u0977\u0975\3\2\2\2\u0978"+
		"\u0979\b\u00ab\1\2\u0979\u097a\5\u0152\u00aa\2\u097a\u0985\3\2\2\2\u097b"+
		"\u097c\f\4\2\2\u097c\u097d\7.\2\2\u097d\u097e\7.\2\2\u097e\u0984\5\u0152"+
		"\u00aa\2\u097f\u0980\f\3\2\2\u0980\u0981\7/\2\2\u0981\u0982\7/\2\2\u0982"+
		"\u0984\5\u0152\u00aa\2\u0983\u097b\3\2\2\2\u0983\u097f\3\2\2\2\u0984\u0987"+
		"\3\2\2\2\u0985\u0983\3\2\2\2\u0985\u0986\3\2\2\2\u0986\u0155\3\2\2\2\u0987"+
		"\u0985\3\2\2\2\u0988\u0989\b\u00ac\1\2\u0989\u098a\5\u0154\u00ab\2\u098a"+
		"\u0990\3\2\2\2\u098b\u098c\f\3\2\2\u098c\u098d\7\37\2\2\u098d\u098f\5"+
		"\u0154\u00ab\2\u098e\u098b\3\2\2\2\u098f\u0992\3\2\2\2\u0990\u098e\3\2"+
		"\2\2\u0990\u0991\3\2\2\2\u0991\u0157\3\2\2\2\u0992\u0990\3\2\2\2\u0993"+
		"\u0994\b\u00ad\1\2\u0994\u0995\5\u0156\u00ac\2\u0995\u099b\3\2\2\2\u0996"+
		"\u0997\f\3\2\2\u0997\u0998\7J\2\2\u0998\u099a\5\u0156\u00ac\2\u0999\u0996"+
		"\3\2\2\2\u099a\u099d\3\2\2\2\u099b\u0999\3\2\2\2\u099b\u099c\3\2\2\2\u099c"+
		"\u0159\3\2\2\2\u099d\u099b\3\2\2\2\u099e\u099f\b\u00ae\1\2\u099f\u09a0"+
		"\5\u0158\u00ad\2\u09a0\u09a6\3\2\2\2\u09a1\u09a2\f\3\2\2\u09a2\u09a3\7"+
		"?\2\2\u09a3\u09a5\5\u0158\u00ad\2\u09a4\u09a1\3\2\2\2\u09a5\u09a8\3\2"+
		"\2\2\u09a6\u09a4\3\2\2\2\u09a6\u09a7\3\2\2\2\u09a7\u015b\3\2\2\2\u09a8"+
		"\u09a6\3\2\2\2\u09a9\u09b7\5\u015a\u00ae\2\u09aa\u09b2\5\u015a\u00ae\2"+
		"\u09ab\u09b3\7K\2\2\u09ac\u09b3\7L\2\2\u09ad\u09b3\7.\2\2\u09ae\u09b3"+
		"\7M\2\2\u09af\u09b3\7/\2\2\u09b0\u09b1\7/\2\2\u09b1\u09b3\7\31\2\2\u09b2"+
		"\u09ab\3\2\2\2\u09b2\u09ac\3\2\2\2\u09b2\u09ad\3\2\2\2\u09b2\u09ae\3\2"+
		"\2\2\u09b2\u09af\3\2\2\2\u09b2\u09b0\3\2\2\2\u09b3\u09b4\3\2\2\2\u09b4"+
		"\u09b5\5\u015a\u00ae\2\u09b5\u09b7\3\2\2\2\u09b6\u09a9\3\2\2\2\u09b6\u09aa"+
		"\3\2\2\2\u09b7\u015d\3\2\2\2\u09b8\u09b9\b\u00b0\1\2\u09b9\u09ba\5\u015c"+
		"\u00af\2\u09ba\u09c0\3\2\2\2\u09bb\u09bc\f\3\2\2\u09bc\u09bd\7 \2\2\u09bd"+
		"\u09bf\5\u015c\u00af\2\u09be\u09bb\3\2\2\2\u09bf\u09c2\3\2\2\2\u09c0\u09be"+
		"\3\2\2\2\u09c0\u09c1\3\2\2\2\u09c1\u015f\3\2\2\2\u09c2\u09c0\3\2\2\2\u09c3"+
		"\u09c4\b\u00b1\1\2\u09c4\u09c5\5\u015e\u00b0\2\u09c5\u09cb\3\2\2\2\u09c6"+
		"\u09c7\f\3\2\2\u09c7\u09c8\7F\2\2\u09c8\u09ca\5\u015e\u00b0\2\u09c9\u09c6"+
		"\3\2\2\2\u09ca\u09cd\3\2\2\2\u09cb\u09c9\3\2\2\2\u09cb\u09cc\3\2\2\2\u09cc"+
		"\u0161\3\2\2\2\u09cd\u09cb\3\2\2\2\u09ce\u09d9\5\u0160\u00b1\2\u09cf\u09d0"+
		"\5\u0160\u00b1\2\u09d0\u09d2\7)\2\2\u09d1\u09d3\5\u0160\u00b1\2\u09d2"+
		"\u09d1\3\2\2\2\u09d2\u09d3\3\2\2\2\u09d3\u09d9\3\2\2\2\u09d4\u09d6\7)"+
		"\2\2\u09d5\u09d7\5\u0160\u00b1\2\u09d6\u09d5\3\2\2\2\u09d6\u09d7\3\2\2"+
		"\2\u09d7\u09d9\3\2\2\2\u09d8\u09ce\3\2\2\2\u09d8\u09cf\3\2\2\2\u09d8\u09d4"+
		"\3\2\2\2\u09d9\u0163\3\2\2\2\u09da\u09ee\5\u0162\u00b2\2\u09db\u09e9\5"+
		"\u0162\u00b2\2\u09dc\u09ea\7\31\2\2\u09dd\u09ea\7N\2\2\u09de\u09ea\7O"+
		"\2\2\u09df\u09ea\7P\2\2\u09e0\u09ea\7Q\2\2\u09e1\u09ea\7R\2\2\u09e2\u09ea"+
		"\7S\2\2\u09e3\u09e4\7/\2\2\u09e4\u09e5\7/\2\2\u09e5\u09ea\7\31\2\2\u09e6"+
		"\u09ea\7T\2\2\u09e7\u09ea\7U\2\2\u09e8\u09ea\7V\2\2\u09e9\u09dc\3\2\2"+
		"\2\u09e9\u09dd\3\2\2\2\u09e9\u09de\3\2\2\2\u09e9\u09df\3\2\2\2\u09e9\u09e0"+
		"\3\2\2\2\u09e9\u09e1\3\2\2\2\u09e9\u09e2\3\2\2\2\u09e9\u09e3\3\2\2\2\u09e9"+
		"\u09e6\3\2\2\2\u09e9\u09e7\3\2\2\2\u09e9\u09e8\3\2\2\2\u09ea\u09eb\3\2"+
		"\2\2\u09eb\u09ec\5\u0164\u00b3\2\u09ec\u09ee\3\2\2\2\u09ed\u09da\3\2\2"+
		"\2\u09ed\u09db\3\2\2\2\u09ee\u0165\3\2\2\2\u09ef\u09f0\t\6\2\2\u09f0\u0167"+
		"\3\2\2\2\u09f1\u09f7\5\u0166\u00b4\2\u09f2\u09f7\7\60\2\2\u09f3\u09f7"+
		"\7\13\2\2\u09f4\u09f7\7\25\2\2\u09f5\u09f7\7\7\2\2\u09f6\u09f1\3\2\2\2"+
		"\u09f6\u09f2\3\2\2\2\u09f6\u09f3\3\2\2\2\u09f6\u09f4\3\2\2\2\u09f6\u09f5"+
		"\3\2\2\2\u09f7\u0169\3\2\2\2\u0164\u0170\u0176\u017b\u0188\u018d\u0191"+
		"\u0197\u019e\u01a5\u01a9\u01b7\u01bc\u01c2\u01c6\u01cd\u01d4\u01d9\u01e2"+
		"\u01e8\u01f1\u01f8\u01ff\u0203\u0205\u020c\u0210\u0214\u021b\u021f\u0233"+
		"\u0239\u0241\u0245\u024b\u024f\u0253\u025f\u0263\u0277\u027b\u027e\u0285"+
		"\u0289\u028c\u0293\u0297\u029a\u029e\u02a3\u02a7\u02aa\u02af\u02b2\u02b5"+
		"\u02ba\u02c3\u02ca\u02ce\u02d5\u02da\u02dd\u02e4\u02e9\u02ec\u02ef\u02f4"+
		"\u02f8\u02fb\u02fe\u0302\u0308\u030c\u0313\u0316\u031a\u031e\u0324\u0328"+
		"\u032d\u0334\u0339\u033c\u0345\u034a\u034f\u0353\u0357\u035b\u035e\u0363"+
		"\u0367\u0370\u0374\u0379\u037d\u0388\u038c\u0391\u0394\u0398\u039f\u03a9"+
		"\u03ad\u03b2\u03b9\u03c2\u03c7\u03d1\u03d5\u03e0\u03e4\u03ed\u03f0\u03f5"+
		"\u03f8\u03fb\u0401\u0409\u040f\u0412\u0419\u0421\u0428\u042f\u0436\u043f"+
		"\u0443\u0447\u044d\u0460\u0465\u0469\u046e\u047c\u0483\u048e\u0495\u049a"+
		"\u04a0\u04a9\u04b2\u04bc\u04c0\u04c7\u04ce\u04d5\u04dd\u04e2\u04e6\u04e9"+
		"\u04f0\u04f9\u04fd\u0502\u050c\u0511\u0515\u0519\u051d\u0521\u0524\u052b"+
		"\u0532\u0539\u053e\u0542\u0545\u054f\u0553\u0559\u055e\u056b\u0572\u057f"+
		"\u0587\u058d\u0590\u0595\u0598\u05a0\u05a3\u05a6\u05ab\u05af\u05b3\u05b5"+
		"\u05bb\u05c6\u05cc\u05d3\u05d7\u05dc\u05e3\u05e7\u05ee\u05f5\u05f9\u0605"+
		"\u060b\u0610\u0616\u061d\u0621\u0626\u062b\u062e\u0635\u0639\u0640\u0642"+
		"\u0652\u0657\u065e\u0663\u066a\u0671\u0676\u0685\u0689\u068c\u0695\u0699"+
		"\u06a1\u06a6\u06a8\u06aa\u06af\u06b3\u06b6\u06bd\u06c1\u06c9\u06cf\u06d1"+
		"\u06d3\u06d6\u06d9\u06dc\u06e3\u06ee\u06f2\u06f8\u06fc\u0704\u070a\u070e"+
		"\u0715\u071a\u0721\u0725\u072c\u0733\u0740\u0745\u074b\u074e\u0753\u075a"+
		"\u0763\u0769\u0771\u0779\u077c\u0782\u0784\u0786\u078b\u0790\u079c\u07a6"+
		"\u07ad\u07b4\u07b7\u07bb\u07c1\u07c5\u07ca\u07d1\u07d6\u07dc\u07df\u07e4"+
		"\u07ec\u07f4\u07f8\u07fc\u07fe\u0805\u0808\u080d\u0814\u0818\u081e\u0822"+
		"\u082a\u0830\u0832\u0834\u083e\u0842\u084b\u0857\u085b\u085e\u0864\u0867"+
		"\u0873\u0878\u0883\u088e\u0890\u089f\u08a1\u08ad\u08af\u08bd\u08bf\u08ca"+
		"\u08d5\u08e0\u08ec\u08f0\u08fa\u0905\u090c\u0910\u0912\u0923\u0927\u0930"+
		"\u093d\u0942\u0949\u0954\u0956\u0965\u0967\u0973\u0975\u0983\u0985\u0990"+
		"\u099b\u09a6\u09b2\u09b6\u09c0\u09cb\u09d2\u09d6\u09d8\u09e9\u09ed\u09f6";
	public static final String _serializedATN = Utils.join(
		new String[] {
			_serializedATNSegment0,
			_serializedATNSegment1
		},
		""
	);
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}